/* Test atan.
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

static const struct test_f_f_data atan_test_data[] =
  {
    { "inf", plus_infty, { lit_pi_2_d, ERRNO_UNCHANGED }, { lit_pi_2_d, ERRNO_UNCHANGED }, { lit_pi_2_d, ERRNO_UNCHANGED }, { lit_pi_2_d, ERRNO_UNCHANGED } },
    { "-inf", minus_infty, { -lit_pi_2_d, ERRNO_UNCHANGED }, { -lit_pi_2_d, ERRNO_UNCHANGED }, { -lit_pi_2_d, ERRNO_UNCHANGED }, { -lit_pi_2_d, ERRNO_UNCHANGED } },
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

#if (TEST_COND_binary128)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.363f46p+0", LIT (-0x1.363f46p+0), { LIT (-0xe.1832df50b2398e4a96945ef0f7f8p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4a96945ef0f7f8p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4a96945ef0f7fp-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4a96945ef0f7fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.58c83p+0", LIT (-0x1.58c83p+0), { LIT (-0xe.e9f00a57b143b31a8f4be18ea31p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31a8f4be18ea31p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31a8f4be18ea308p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31a8f4be18ea308p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1.ad4c0ap+0", LIT (-0x1.ad4c0ap+0), { LIT (-0x1.0878377062dada2af4f466e46577p+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2af4f466e46577p+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2af4f466e46576p+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2af4f466e46576p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0xc.90fdaa22168c234c4c6628b80dc8p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2.3249ap+0", LIT (-0x2.3249ap+0), { LIT (-0x1.24c032fe9a702f7255968f75e01cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f7255968f75e01cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f7255968f75e01bp+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f7255968f75e01bp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.3fb708p-4", LIT (-0x3.3fb708p-4), { LIT (-0x3.348f092072331fd8ca0cbff348d8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8ca0cbff348d6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8ca0cbff348d6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8ca0cbff348d6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.b02d84p-4", LIT (-0x3.b02d84p-4), { LIT (-0x3.9ff7e1f81370b93195e0357d0b5ap-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93195e0357d0b5ap-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93195e0357d0b58p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93195e0357d0b58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.eb8e18p+0", LIT (-0x3.eb8e18p+0), { LIT (-0x1.522f0408c0e8c2d8d3fe682ee8bdp+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8d3fe682ee8bdp+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8d3fe682ee8bcp+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8d3fe682ee8bcp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x4p-1024), ERRNO_UNCHANGED }, { LIT (-0x4p-1024), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffffffffffffffep-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (-0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x4p-16496", LIT (-0x4p-16496), { LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.ffffffffffffbffffffffffffcp+1020", LIT (-0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffffffffffffffffffffffff8p+16380", LIT (-0xf.fffffffffffffffffffffffffff8p+16380), { LIT (-0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (-0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80dcp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80dc8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0xf.fffffffffffffffffffffffffff8p-10004), ERRNO_UNCHANGED }, { LIT (0x1p-10000), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-10004), ERRNO_UNCHANGED }, { LIT (0x1p-10000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffaaaaaaaaaadddddddd8p-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaaaaaadddddddep-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaaaaaadddddddd8p-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaaaaaadddddddep-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffffffaaaaaaaa8p-44), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffaaaaaaaa8p-44), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffaaaaaaaa8p-44), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffaaaaaaabp-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.8p+0", LIT (0x2.8p+0), { LIT (0x1.30b6d796a4da8589532c0eec663ep+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8589532c0eec663ep+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8589532c0eec663ep+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8589532c0eec663fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.fffffffd5555555bbbbbbba97297p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555bbbbbbba97297p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555bbbbbbba97297p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555bbbbbbba97298p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.fffffffffffffffffd5555555555p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffd5555555555p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffd5555555555p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffd5555555556p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffffffffffffffffdp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffffdp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffffdp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffffep-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x3.53c188p+0", LIT (0x3.53c188p+0), { LIT (0x1.476165c27ab517ff156a94e45558p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517ff156a94e45559p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517ff156a94e45558p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517ff156a94e45559p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.ffffeaaaab77776e52e5a019fbcep-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776e52e5a019fbcep-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776e52e5a019fbcep-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776e52e5a019fbdp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.fffffffffffffffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x3.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496", LIT (0x4p-16496), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16496), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.ffffffffffffffeaaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffeaaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffeaaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffeaaaaaaaaaaaacp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.ffffffffffffffffffffffffeaaap-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffeaaap-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffeaaap-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffeaacp-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.921fb54242d18469898cc519ac62p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18469898cc519ac63p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18469898cc519ac62p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18469898cc519ac63p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffff5555555555556eecp-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5555555555556efp-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5555555555556eecp-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5555555555556efp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x7.ffffffffffffffffffffff555554p-48), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffff555554p-48), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffff555554p-48), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffff555558p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x7.ff556eea5d892a13bcebbb6ed46p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a13bcebbb6ed464p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a13bcebbb6ed46p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a13bcebbb6ed464p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xap+0", LIT (0xap+0), { LIT (0x1.789bd2c16005382eabf0cd4b6aaep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382eabf0cd4b6aaep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382eabf0cd4b6aaep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382eabf0cd4b6aafp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.133b9p-4", LIT (0xb.133b9p-4), { LIT (0x9.b0000da23b9dce2cdb744dda3638p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2cdb744dda364p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2cdb744dda3638p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2cdb744dda364p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xa.4bc7d1934f7092419a87f2a457d8p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f7092419a87f2a457d8p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f7092419a87f2a457d8p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f7092419a87f2a457ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0x1.921fa47d4b30ce822275563fcb99p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce822275563fcb9ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce822275563fcb99p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce822275563fcb9ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffffffffffffff8p+16380", LIT (0xf.fffffffffffffffffffffffffff8p+16380), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51701b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.363f46p+0", LIT (-0x1.363f46p+0), { LIT (-0xe.1832ep-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832ep-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832dp-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.58c83p+0", LIT (-0x1.58c83p+0), { LIT (-0xe.e9f01p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f01p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9fp-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1.ad4c0ap+0", LIT (-0x1.ad4c0ap+0), { LIT (-0x1.087838p+0), ERRNO_UNCHANGED }, { LIT (-0x1.087838p+0), ERRNO_UNCHANGED }, { LIT (-0x1.087836p+0), ERRNO_UNCHANGED }, { LIT (-0x1.087836p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0xc.90fdbp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdbp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdap-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x2.3249ap+0", LIT (-0x2.3249ap+0), { LIT (-0x1.24c034p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.3fb708p-4", LIT (-0x3.3fb708p-4), { LIT (-0x3.348f0cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f08p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f08p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f08p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.b02d84p-4", LIT (-0x3.b02d84p-4), { LIT (-0x3.9ff7e4p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7ep-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7ep-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.eb8e18p+0", LIT (-0x3.eb8e18p+0), { LIT (-0x1.522f06p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f04p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f04p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f04p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x4p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x4p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary32)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.90fdap-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdbp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdap-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdbp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffp-24), ERRNO_UNCHANGED }, { LIT (0x1p-20), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-24), ERRNO_UNCHANGED }, { LIT (0x1p-20), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffp-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.8p+0", LIT (0x2.8p+0), { LIT (0x1.30b6d6p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d8p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d6p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.fffffep-16), ERRNO_UNCHANGED }, { LIT (0x2p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-16), ERRNO_UNCHANGED }, { LIT (0x2p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.fffffep-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x3.53c188p+0", LIT (0x3.53c188p+0), { LIT (0x1.476164p+0), ERRNO_UNCHANGED }, { LIT (0x1.476166p+0), ERRNO_UNCHANGED }, { LIT (0x1.476164p+0), ERRNO_UNCHANGED }, { LIT (0x1.476166p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.ffffe8p-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffecp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffe8p-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffecp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-128), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.fffffcp-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.fffff8p-28), ERRNO_UNCHANGED }, { LIT (0x8p-28), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-28), ERRNO_UNCHANGED }, { LIT (0x8p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x7.fffff8p-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x7.ff5568p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff557p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff5568p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff557p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xap+0", LIT (0xap+0), { LIT (0x1.789bd2p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.133b9p-4", LIT (0xb.133b9p-4), { LIT (0x9.bp-4), ERRNO_UNCHANGED }, { LIT (0x9.b0001p-4), ERRNO_UNCHANGED }, { LIT (0x9.bp-4), ERRNO_UNCHANGED }, { LIT (0x9.b0001p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xa.4bc7dp-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7dp-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7dp-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0x1.921fa4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb4p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.363f46p+0", LIT (-0x1.363f46p+0), { LIT (-0xe.1832df50b23ap-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.58c83p+0", LIT (-0x1.58c83p+0), { LIT (-0xe.e9f00a57b144p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b1438p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b1438p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b1438p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1.ad4c0ap+0", LIT (-0x1.ad4c0ap+0), { LIT (-0x1.0878377062daep+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062daep+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dadp+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dadp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0xc.90fdaa22168c8p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x2.3249ap+0", LIT (-0x2.3249ap+0), { LIT (-0x1.24c032fe9a703p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a703p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.3fb708p-4", LIT (-0x3.3fb708p-4), { LIT (-0x3.348f092072332p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072332p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f09207233p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f09207233p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.b02d84p-4", LIT (-0x3.b02d84p-4), { LIT (-0x3.9ff7e1f81370cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370ap-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.eb8e18p+0", LIT (-0x3.eb8e18p+0), { LIT (-0x1.522f0408c0e8dp+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x4p-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x4p-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffep-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x1.921fb54442d19p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d19p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.ffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffaaa8p-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaa8p-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaa8p-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaabp-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.ffffffffffff8p-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.ffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.ffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.8p+0", LIT (0x2.8p+0), { LIT (0x1.30b6d796a4da8p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.fffffffd55555p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd55555p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd55555p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd55556p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.fffffffffffffp-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x3.53c188p+0", LIT (0x3.53c188p+0), { LIT (0x1.476165c27ab51p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab51p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab51p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab52p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.ffffeaaaab776p-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab778p-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab776p-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab778p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.ffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.ffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.ffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.921fb54242d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d19p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffff4p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff4p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff4p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff8p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x7.ffffffffffffcp-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x7.ff556eea5d89p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d894p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d89p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d894p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xap+0", LIT (0xap+0), { LIT (0x1.789bd2c160053p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c160054p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c160053p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c160054p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.133b9p-4", LIT (0xb.133b9p-4), { LIT (0x9.b0000da23b9d8p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9ep-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9d8p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xa.4bc7d1934f708p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f708p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f708p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f71p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0x1.921fa47d4b30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30dp+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30cp+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d19p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d19p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.363f46p+0", LIT (-0x1.363f46p+0), { LIT (-0xe.1832df50b2398e4a96945ef0f8p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4a96945ef0f8p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4a96945ef0f4p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4a96945ef0f4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.58c83p+0", LIT (-0x1.58c83p+0), { LIT (-0xe.e9f00a57b143b31a8f4be18ea4p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31a8f4be18ea4p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31a8f4be18eap-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31a8f4be18eap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1.ad4c0ap+0", LIT (-0x1.ad4c0ap+0), { LIT (-0x1.0878377062dada2af4f466e4658p+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2af4f466e4658p+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2af4f466e465p+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2af4f466e465p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0xc.90fdaa22168c234c4c6628b81p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x2.3249ap+0", LIT (-0x2.3249ap+0), { LIT (-0x1.24c032fe9a702f7255968f75e08p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f7255968f75ep+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f7255968f75ep+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f7255968f75ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.3fb708p-4", LIT (-0x3.3fb708p-4), { LIT (-0x3.348f092072331fd8ca0cbff349p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8ca0cbff349p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8ca0cbff348p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8ca0cbff348p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.b02d84p-4", LIT (-0x3.b02d84p-4), { LIT (-0x3.9ff7e1f81370b93195e0357d0cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93195e0357d0bp-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93195e0357d0bp-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93195e0357d0bp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.eb8e18p+0", LIT (-0x3.eb8e18p+0), { LIT (-0x1.522f0408c0e8c2d8d3fe682ee9p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8d3fe682ee88p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8d3fe682ee88p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8d3fe682ee88p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (-0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (-0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (-0x3.ffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x8p-972), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x8p-972), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.ffffffffffffbffffffffffffcp+1020", LIT (-0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b80cp-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234c4c6628b81p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffaaaaaaaaaaddddddcp-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaaaaaaddddddcp-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaaaaaaddddddcp-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaaaaaadddddep-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffffffaaaaaa8p-44), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffaaaaaacp-44), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffaaaaaa8p-44), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffaaaaaacp-44), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffffffffffffcp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffffffffffffcp-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.8p+0", LIT (0x2.8p+0), { LIT (0x1.30b6d796a4da8589532c0eec66p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8589532c0eec66p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8589532c0eec66p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8589532c0eec668p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.fffffffd5555555bbbbbbba9728p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555bbbbbbba9728p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555bbbbbbba9728p-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555bbbbbbba973p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.fffffffffffffffffd55555555p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffd555555558p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffd55555555p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffd555555558p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.ffffffffffffffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x3.53c188p+0", LIT (0x3.53c188p+0), { LIT (0x1.476165c27ab517ff156a94e455p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517ff156a94e4558p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517ff156a94e455p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517ff156a94e4558p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.ffffeaaaab77776e52e5a019fbp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776e52e5a019fcp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776e52e5a019fbp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776e52e5a019fcp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.ffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.ffffffffffffffeaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffeaaaaaaaaaabp-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffeaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffeaaaaaaaaaabp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.ffffffffffffffffffffffffeap-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffebp-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffeap-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffebp-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.921fb54242d18469898cc519acp+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18469898cc519ac8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18469898cc519acp+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18469898cc519ac8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffff5555555555556ep-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5555555555556ep-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5555555555556ep-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5555555555557p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x7.ffffffffffffffffffffff5554p-48), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffff5556p-48), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffff5554p-48), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffff5556p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x7.ff556eea5d892a13bcebbb6ed4p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a13bcebbb6ed4p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a13bcebbb6ed4p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a13bcebbb6ed6p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-972), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_ibm128)
    { "0xap+0", LIT (0xap+0), { LIT (0x1.789bd2c16005382eabf0cd4b6a8p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382eabf0cd4b6a8p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382eabf0cd4b6a8p+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382eabf0cd4b6bp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.133b9p-4", LIT (0xb.133b9p-4), { LIT (0x9.b0000da23b9dce2cdb744dda34p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2cdb744dda38p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2cdb744dda34p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2cdb744dda38p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xa.4bc7d1934f7092419a87f2a454p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f7092419a87f2a458p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f7092419a87f2a454p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f7092419a87f2a458p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0x1.921fa47d4b30ce822275563fcb8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce822275563fcb8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce822275563fcb8p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce822275563fccp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc517018p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18469898cc51702p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.363f46p+0", LIT (-0x1.363f46p+0), { LIT (-0xe.1832df50b2398e5p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e5p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.58c83p+0", LIT (-0x1.58c83p+0), { LIT (-0xe.e9f00a57b143b32p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b32p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1.ad4c0ap+0", LIT (-0x1.ad4c0ap+0), { LIT (-0x1.0878377062dada2cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2.3249ap+0", LIT (-0x2.3249ap+0), { LIT (-0x1.24c032fe9a702f74p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f72p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f72p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f72p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.3fb708p-4", LIT (-0x3.3fb708p-4), { LIT (-0x3.348f092072331fdcp-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.b02d84p-4", LIT (-0x3.b02d84p-4), { LIT (-0x3.9ff7e1f81370b934p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.eb8e18p+0", LIT (-0x3.eb8e18p+0), { LIT (-0x1.522f0408c0e8c2dap+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x4p-1024), ERRNO_UNCHANGED }, { LIT (-0x4p-1024), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (-0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0xf.fffffffffffffffp-10004), ERRNO_UNCHANGED }, { LIT (0x1p-10000), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-10004), ERRNO_UNCHANGED }, { LIT (0x1p-10000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffaaaaaap-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaabp-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaap-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaabp-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffp-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.8p+0", LIT (0x2.8p+0), { LIT (0x1.30b6d796a4da8588p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da858ap+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8588p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da858ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.fffffffd5555555ap-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555cp-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555ap-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555cp-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.fffffffffffffffep-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x3.53c188p+0", LIT (0x3.53c188p+0), { LIT (0x1.476165c27ab517fep+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab518p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517fep+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab518p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.ffffeaaaab77776cp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77777p-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776cp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77777p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.ffffffffffffffe8p-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffecp-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffe8p-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffecp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.921fb54242d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffff555p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5558p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff555p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5558p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x7.fffffffffffffff8p-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x7.ff556eea5d892a1p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a1p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a1p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a18p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xap+0", LIT (0xap+0), { LIT (0x1.789bd2c16005382ep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382ep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382ep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005383p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.133b9p-4", LIT (0xb.133b9p-4), { LIT (0x9.b0000da23b9dce2p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce3p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xa.4bc7d1934f70924p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f70924p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f70924p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f70925p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0x1.921fa47d4b30ce82p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce82p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce82p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce84p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.363f46p+0", LIT (-0x1.363f46p+0), { LIT (-0xe.1832df50b2398e5p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e5p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4p-4), ERRNO_UNCHANGED }, { LIT (-0xe.1832df50b2398e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.58c83p+0", LIT (-0x1.58c83p+0), { LIT (-0xe.e9f00a57b143b32p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b32p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31p-4), ERRNO_UNCHANGED }, { LIT (-0xe.e9f00a57b143b31p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1.ad4c0ap+0", LIT (-0x1.ad4c0ap+0), { LIT (-0x1.0878377062dada2cp+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.0878377062dada2ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x1p+0", LIT (-0x1p+0), { LIT (-0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (-0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2.3249ap+0", LIT (-0x2.3249ap+0), { LIT (-0x1.24c032fe9a702f74p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f72p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f72p+0), ERRNO_UNCHANGED }, { LIT (-0x1.24c032fe9a702f72p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.3fb708p-4", LIT (-0x3.3fb708p-4), { LIT (-0x3.348f092072331fdcp-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.348f092072331fd8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.b02d84p-4", LIT (-0x3.b02d84p-4), { LIT (-0x3.9ff7e1f81370b934p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93p-4), ERRNO_UNCHANGED }, { LIT (-0x3.9ff7e1f81370b93p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.eb8e18p+0", LIT (-0x3.eb8e18p+0), { LIT (-0x1.522f0408c0e8c2dap+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8p+0), ERRNO_UNCHANGED }, { LIT (-0x1.522f0408c0e8c2d8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1024", LIT (-0x4p-1024), { LIT (-0x4p-1024), ERRNO_UNCHANGED }, { LIT (-0x4p-1024), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-1076", LIT (-0x4p-1076), { LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (-0x4p-1076), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x4p-128), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16384", LIT (-0x4p-16384), { LIT (-0x4p-16384), ERRNO_UNCHANGED }, { LIT (-0x4p-16384), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED }, { LIT (-0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4p-16448", LIT (-0x4p-16448), { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-16448", LIT (-0x8p-16448), { LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (-0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (-0x1.921fb54442d18468p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c234p-4), ERRNO_UNCHANGED }, { LIT (0xc.90fdaa22168c235p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-10000", LIT (0x1p-10000), { LIT (0xf.fffffffffffffffp-10004), ERRNO_UNCHANGED }, { LIT (0x1p-10000), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-10004), ERRNO_UNCHANGED }, { LIT (0x1p-10000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-20", LIT (0x1p-20), { LIT (0xf.fffffffffaaaaaap-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaabp-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaaap-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffaaaaabp-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-40", LIT (0x1p-40), { LIT (0xf.fffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-44), ERRNO_UNCHANGED }, { LIT (0x1p-40), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-60", LIT (0x1p-60), { LIT (0xf.fffffffffffffffp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-64), ERRNO_UNCHANGED }, { LIT (0x1p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-600", LIT (0x1p-600), { LIT (0xf.fffffffffffffffp-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-604), ERRNO_UNCHANGED }, { LIT (0x1p-600), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.8p+0", LIT (0x2.8p+0), { LIT (0x1.30b6d796a4da8588p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da858ap+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da8588p+0), ERRNO_UNCHANGED }, { LIT (0x1.30b6d796a4da858ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16", LIT (0x2p-16), { LIT (0x1.fffffffd5555555ap-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555cp-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555ap-16), ERRNO_UNCHANGED }, { LIT (0x1.fffffffd5555555cp-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-36", LIT (0x2p-36), { LIT (0x1.fffffffffffffffep-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-36), ERRNO_UNCHANGED }, { LIT (0x2p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x3.53c188p+0", LIT (0x3.53c188p+0), { LIT (0x1.476165c27ab517fep+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab518p+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab517fep+0), ERRNO_UNCHANGED }, { LIT (0x1.476165c27ab518p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.ffffeaaaab77776cp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77777p-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77776cp-12), ERRNO_UNCHANGED }, { LIT (0x3.ffffeaaaab77777p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED }, { LIT (0x4p-16384), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-16384), ERRNO_UNCHANGED }, { LIT (0x4p-16384), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.ffffffffffffffe8p-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffecp-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffe8p-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffecp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.921fb54242d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54242d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffff555p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5558p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff555p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff5558p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-48", LIT (0x8p-48), { LIT (0x7.fffffffffffffff8p-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-48), ERRNO_UNCHANGED }, { LIT (0x8p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-8", LIT (0x8p-8), { LIT (0x7.ff556eea5d892a1p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a1p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a1p-8), ERRNO_UNCHANGED }, { LIT (0x7.ff556eea5d892a18p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xap+0", LIT (0xap+0), { LIT (0x1.789bd2c16005382ep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382ep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005382ep+0), ERRNO_UNCHANGED }, { LIT (0x1.789bd2c16005383p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.133b9p-4", LIT (0xb.133b9p-4), { LIT (0x9.b0000da23b9dce2p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce3p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce2p-4), ERRNO_UNCHANGED }, { LIT (0x9.b0000da23b9dce3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xa.4bc7d1934f70924p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f70924p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f70924p-4), ERRNO_UNCHANGED }, { LIT (0xa.4bc7d1934f70925p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0x1.921fa47d4b30ce82p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce82p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce82p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fa47d4b30ce84p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d18468p+0), ERRNO_UNCHANGED }, { LIT (0x1.921fb54442d1846ap+0), ERRNO_UNCHANGED } },
#endif
  };

static void
atan_test (void)
{
  ALL_RM_TEST (atan, 0, atan_test_data, RUN_TEST_LOOP_f_f, END);
}

static void
do_test (void)
{
  atan_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
