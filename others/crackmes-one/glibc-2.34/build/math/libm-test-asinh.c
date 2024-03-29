/* Test asinh.
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

static const struct test_f_f_data asinh_test_data[] =
  {
    { "inf", plus_infty, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED } },
    { "-inf", minus_infty, { minus_infty, ERRNO_UNCHANGED }, { minus_infty, ERRNO_UNCHANGED }, { minus_infty, ERRNO_UNCHANGED }, { minus_infty, ERRNO_UNCHANGED } },
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
#if (TEST_COND_binary128)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.11c35p-4", LIT (-0x3.11c35p-4), { LIT (-0x3.0d05831101b4500142e4b2901772p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b4500142e4b2901772p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b4500142e4b290177p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b4500142e4b290177p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.b94a52e6913c2p-4", LIT (-0x3.b94a52e6913c2p-4), { LIT (-0x3.b0e3342ca965242afb569c3a5ce8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242afb569c3a5ce6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242afb569c3a5ce6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242afb569c3a5ce6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.b94a54p-4", LIT (-0x3.b94a54p-4), { LIT (-0x3.b0e3353ec4c110c2cb860e4335a8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c2cb860e4335a6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c2cb860e4335a6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c2cb860e4335a6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.b94a5p-4", LIT (-0x3.b94a5p-4), { LIT (-0x3.b0e331596c7781edc668b0947d86p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781edc668b0947d86p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781edc668b0947d84p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781edc668b0947d84p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.bdeef4p-4", LIT (-0x3.bdeef4p-4), { LIT (-0x3.b568bf5eec676953e540354ab57p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676953e540354ab56ep-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676953e540354ab56ep-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676953e540354ab56ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x3.d26bb4p-4", LIT (-0x3.d26bb4p-4), { LIT (-0x3.c958d830129a2311e46d02ce948cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2311e46d02ce948ap-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2311e46d02ce948ap-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2311e46d02ce948ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4.39534p-4", LIT (-0x4.39534p-4), { LIT (-0x4.2d24ad5bedc89dab07914ab2cedcp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89dab07914ab2cedcp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89dab07914ab2ced8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89dab07914ab2ced8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4.cfb9805a53a2065p-4", LIT (-0x4.cfb9805a53a2065p-4), { LIT (-0x4.bde0b78526931a2fb7988c9c129p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a2fb7988c9c128cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a2fb7988c9c128cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a2fb7988c9c128cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4.cfb9805a53a24p-4", LIT (-0x4.cfb9805a53a24p-4), { LIT (-0x4.bde0b7852693516e1d0cb5a0a54cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693516e1d0cb5a0a548p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693516e1d0cb5a0a548p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693516e1d0cb5a0a548p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4.cfb9805a53a2p-4", LIT (-0x4.cfb9805a53a2p-4), { LIT (-0x4.bde0b785269314242ca206df863cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b785269314242ca206df8638p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b785269314242ca206df8638p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b785269314242ca206df8638p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4.cfb988p-4", LIT (-0x4.cfb988p-4), { LIT (-0x4.bde0bed7e48ed176770b2cee5408p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed176770b2cee5404p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed176770b2cee5404p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed176770b2cee5404p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x4.cfb98p-4", LIT (-0x4.cfb98p-4), { LIT (-0x4.bde0b72ea681f6e82ea91bcdc42p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e82ea91bcdc42p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e82ea91bcdc41cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e82ea91bcdc41cp-4), ERRNO_UNCHANGED } },
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
    { "-0x5.a95683e302a71be88a35649b24ep-4", LIT (-0x5.a95683e302a71be88a35649b24ep-4), { LIT (-0x5.8cae53be0eeb89898490af1ca97p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca97p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca96cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca96cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a95683e302a71be88a35649b24p-4", LIT (-0x5.a95683e302a71be88a35649b24p-4), { LIT (-0x5.8cae53be0eeb89898490af1ca8ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca89cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca89cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca89cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a95683e302a71be88a35649b26p-4", LIT (-0x5.a95683e302a71be88a35649b26p-4), { LIT (-0x5.8cae53be0eeb89898490af1caa8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1caa8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1caa7cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1caa7cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a95683e302a71be8p-4", LIT (-0x5.a95683e302a71be8p-4), { LIT (-0x5.8cae53be0eeb89890245d0ebfbfcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89890245d0ebfbfcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89890245d0ebfbf8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89890245d0ebfbf8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a95683e302a71bfp-4", LIT (-0x5.a95683e302a71bfp-4), { LIT (-0x5.8cae53be0eeb89908cf864f52bbp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89908cf864f52bbp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89908cf864f52bacp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89908cf864f52bacp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a95683e302a74p-4", LIT (-0x5.a95683e302a74p-4), { LIT (-0x5.8cae53be0eebab8fc5f7b65e3d1p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab8fc5f7b65e3d1p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab8fc5f7b65e3d0cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab8fc5f7b65e3d0cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a95683e302a7p-4", LIT (-0x5.a95683e302a7p-4), { LIT (-0x5.8cae53be0eeb6f3a31576ce08edcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f3a31576ce08edcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f3a31576ce08ed8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f3a31576ce08ed8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a95688p-4", LIT (-0x5.a95688p-4), { LIT (-0x5.8cae579ebc7c885e6164f2f1983cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c885e6164f2f19838p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c885e6164f2f19838p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c885e6164f2f19838p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.a9568p-4", LIT (-0x5.a9568p-4), { LIT (-0x5.8cae501409e8837aba5edefb985p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e8837aba5edefb984cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e8837aba5edefb984cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e8837aba5edefb984cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.cabae7a011e33d9p-4", LIT (-0x5.cabae7a011e33d9p-4), { LIT (-0x5.ac1eb633f2fd11f0f621e284b244p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11f0f621e284b244p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11f0f621e284b24p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11f0f621e284b24p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.cabae7a011e34p-4", LIT (-0x5.cabae7a011e34p-4), { LIT (-0x5.ac1eb633f2fd143bb3887641c888p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd143bb3887641c888p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd143bb3887641c884p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd143bb3887641c884p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.cabae7a011e3p-4", LIT (-0x5.cabae7a011e3p-4), { LIT (-0x5.ac1eb633f2fcd80e04e8e6253e2p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd80e04e8e6253e2p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd80e04e8e6253e1cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd80e04e8e6253e1cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.cabae8p-4", LIT (-0x5.cabae8p-4), { LIT (-0x5.ac1eb68e26b132a5e3ce931aa7b4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a5e3ce931aa7b4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a5e3ce931aa7bp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a5e3ce931aa7bp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x5.cabaep-4", LIT (-0x5.cabaep-4), { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4e9a4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4e9a4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4e9ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4e9ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x6.e26358p-4", LIT (-0x6.e26358p-4), { LIT (-0x6.b01863558de0ab9db866832ea55cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab9db866832ea558p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab9db866832ea558p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab9db866832ea558p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x7.63a06320c42e4p-4", LIT (-0x7.63a06320c42e4p-4), { LIT (-0x7.261f5cf40e169a3c2c399a33c778p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a3c2c399a33c774p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a3c2c399a33c774p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a3c2c399a33c774p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x7.63a068p-4", LIT (-0x7.63a068p-4), { LIT (-0x7.261f61605eb6bd156f8f2c73939cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd156f8f2c73939cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd156f8f2c739398p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd156f8f2c739398p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x7.63a06p-4", LIT (-0x7.63a06p-4), { LIT (-0x7.261f5a1d1206f0273eb68b1daaf4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f0273eb68b1daaf4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f0273eb68b1daafp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f0273eb68b1daafp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x7.88bcc8p-4", LIT (-0x7.88bcc8p-4), { LIT (-0x7.47c17bbd7ba607458f4e549f132cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba607458f4e549f132cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba607458f4e549f1328p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba607458f4e549f1328p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0x7.fc7fc8p-8", LIT (-0x7.fc7fc8p-8), { LIT (-0x7.fc2aec03ed35ec4f3b852298d344p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec4f3b852298d344p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec4f3b852298d34p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec4f3b852298d34p-8), ERRNO_UNCHANGED } },
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
    { "-0xd.d62e8p+92", LIT (-0xd.d62e8p+92), { LIT (-0x4.3170acb265858000c5d391e6721p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858000c5d391e6721p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858000c5d391e6720cp+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858000c5d391e6720cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x2.c679d1f73f0fb620d358b213a7dp+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb620d358b213a7dp+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb620d358b213a7cep+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb620d358b213a7cep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.ffffffffffffbffffffffffffcp+1020", LIT (-0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x2.c679d1f73f0fb624d358b213a7dp+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb624d358b213a7dp+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb624d358b213a7cep+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb624d358b213a7cep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffffffffffffffffffffffff8p+16380", LIT (-0xf.fffffffffffffffffffffffffff8p+16380), { LIT (-0x2.c5d37700c6bb03a6c24b6c9b494ep+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a6c24b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a6c24b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a6c24b6c9b494cp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (-0x2.c5d37700c6bb03a6c23b6c9b494ep+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a6c23b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a6c23b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a6c23b6c9b494cp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x5.96a7e12e0b98bcf90bb682a44684p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf90bb682a4468p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf90bb682a4468p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf90bb682a4468p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xe.1a1b30bcea13660d8f99e8dd2518p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13660d8f99e8dd2518p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13660d8f99e8dd2518p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13660d8f99e8dd252p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+100", LIT (0x1p+100), { LIT (0x4.6020374c5c6db00c6a6d5daf98ecp+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db00c6a6d5daf98ecp+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db00c6a6d5daf98ecp+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db00c6a6d5daf98fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+12", LIT (0x1p+12), { LIT (0x9.02cb37d5a78915b9409d740d7fe8p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915b9409d740d7fe8p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915b9409d740d7fe8p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915b9409d740d7ffp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+24", LIT (0x1p+24), { LIT (0x1.1542457337d4321c6b73c89d84abp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321c6b73c89d84acp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321c6b73c89d84abp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321c6b73c89d84acp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+28", LIT (0x1p+28), { LIT (0x1.419ecb712c480c8b5decb5838728p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8b5decb5838728p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8b5decb5838728p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8b5decb5838729p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+32", LIT (0x1p+32), { LIT (0x1.6dfb516f20bbeaf25465a2698825p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf25465a2698825p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf25465a2698825p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf25465a2698826p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+48", LIT (0x1p+48), { LIT (0x2.1f6d6966f28b649e1a4956019018p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649e1a4956019018p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649e1a4956019018p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649e1a495601901ap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+500", LIT (0x1p+500), { LIT (0x1.5b4448e7fd9b091d321a9e787fbap+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091d321a9e787fbap+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091d321a9e787fbap+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091d321a9e787fbbp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+5000", LIT (0x1p+5000), { LIT (0xd.8a6dd63831ae0fdceaf12f64a52p+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fdceaf12f64a528p+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fdceaf12f64a52p+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fdceaf12f64a528p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+52", LIT (0x1p+52), { LIT (0x2.4bc9ef64e6ff43090cc242e78d18p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff43090cc242e78d18p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff43090cc242e78d18p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff43090cc242e78d1ap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+56", LIT (0x1p+56), { LIT (0x2.78267562db732173ff3b2fcd8e1p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732173ff3b2fcd8e12p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732173ff3b2fcd8e1p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732173ff3b2fcd8e12p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x6.3d0317b6484b545f6596abfa40dcp+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b545f6596abfa40dcp+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b545f6596abfa40dcp+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b545f6596abfa40ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-12", LIT (0x1p-12), { LIT (0xf.fffffd555556888887d1ad1b4e18p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888887d1ad1b4e2p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888887d1ad1b4e18p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888887d1ad1b4e2p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-24", LIT (0x1p-24), { LIT (0xf.fffffffffffd5555555555568888p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd5555555555568888p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd5555555555568888p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd555555555556889p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-28", LIT (0x1p-28), { LIT (0xf.fffffffffffffd5555555555555p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd55555555555558p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd5555555555555p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd55555555555558p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-32", LIT (0x1p-32), { LIT (0xf.fffffffffffffffd55555555555p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffd555555555558p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffd55555555555p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffd555555555558p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-48", LIT (0x1p-48), { LIT (0xf.fffffffffffffffffffffffd555p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffd5558p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffd555p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffd5558p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-500", LIT (0x1p-500), { LIT (0xf.fffffffffffffffffffffffffff8p-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-5000", LIT (0x1p-5000), { LIT (0xf.fffffffffffffffffffffffffff8p-5004), ERRNO_UNCHANGED }, { LIT (0x1p-5000), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-5004), ERRNO_UNCHANGED }, { LIT (0x1p-5000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-52", LIT (0x1p-52), { LIT (0xf.fffffffffffffffffffffffffd5p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffd58p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffd5p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffd58p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-56", LIT (0x1p-56), { LIT (0xf.fffffffffffffffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p-8", LIT (0x1p-8), { LIT (0xf.fffd55568887d1ad97431894a1c8p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ad97431894a1dp-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ad97431894a1c8p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ad97431894a1dp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+12", LIT (0x2p+12), { LIT (0x9.b43d4f9d7958a5e50a7407a58c9p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5e50a7407a58c98p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5e50a7407a58c9p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5e50a7407a58c98p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+24", LIT (0x2p+24), { LIT (0x1.205966f2b4f126b7281203d70652p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b7281203d70653p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b7281203d70652p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b7281203d70653p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+28", LIT (0x2p+28), { LIT (0x1.4cb5ecf0a96504231a8af0bd0767p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a96504231a8af0bd0768p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a96504231a8af0bd0767p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a96504231a8af0bd0768p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+32", LIT (0x2p+32), { LIT (0x1.791272ee9dd8e28d0e03dda30864p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28d0e03dda30864p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28d0e03dda30864p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28d0e03dda30865p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+48", LIT (0x2p+48), { LIT (0x2.2a848ae66fa85c38d6e7913b0d56p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38d6e7913b0d58p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38d6e7913b0d56p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38d6e7913b0d58p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+52", LIT (0x2p+52), { LIT (0x2.56e110e4641c3aa3c9607e210d54p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa3c9607e210d56p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa3c9607e210d54p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa3c9607e210d56p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+56", LIT (0x2p+56), { LIT (0x2.833d96e25890190ebbd96b070e5p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190ebbd96b070e5p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190ebbd96b070e5p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190ebbd96b070e52p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+8", LIT (0x2p+8), { LIT (0x6.ee74ffae309ac0eb383199471004p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0eb383199471004p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0eb383199471004p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0eb383199471008p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-12", LIT (0x2p-12), { LIT (0x1.fffffeaaaaad11110b5a35b2e86ep-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad11110b5a35b2e86ep-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad11110b5a35b2e86ep-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad11110b5a35b2e86fp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffffffffffffffffcp-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-28", LIT (0x2p-28), { LIT (0x1.fffffffffffffeaaaaaaaaaaaaadp-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaaaaaaaaaaaaadp-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaaaaaaaaaaaaadp-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaaaaaaaaaaaaaep-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-32", LIT (0x2p-32), { LIT (0x1.fffffffffffffffeaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffeaaaaaaaaaaabp-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffeaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffeaaaaaaaaaaabp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-52", LIT (0x2p-52), { LIT (0x1.fffffffffffffffffffffffffeaap-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffeabp-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffeaap-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffeabp-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffffffp-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-60", LIT (0x2p-60), { LIT (0x1.ffffffffffffffffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4.08f3f8p-4", LIT (0x4.08f3f8p-4), { LIT (0x3.fe4e5b035250f72070a4b6fdf4c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72070a4b6fdf4c6p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72070a4b6fdf4c4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72070a4b6fdf4c6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4.08f3faac4284cp-4", LIT (0x4.08f3faac4284cp-4), { LIT (0x3.fe4e5d9acef73cd0062bafd4f43ep-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd0062bafd4f44p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd0062bafd4f43ep-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd0062bafd4f44p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4.08f4p-4", LIT (0x4.08f4p-4), { LIT (0x3.fe4e62c525da587ab7dc0384ede8p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587ab7dc0384edeap-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587ab7dc0384ede8p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587ab7dc0384edeap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+24", LIT (0x4p+24), { LIT (0x1.2b708872320e1d91e4b03f1086a8p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d91e4b03f1086a9p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d91e4b03f1086a8p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d91e4b03f1086a9p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+28", LIT (0x4p+28), { LIT (0x1.57cd0e702681fbbd17292bf687a6p+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbd17292bf687a7p+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbd17292bf687a6p+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbd17292bf687a7p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+48", LIT (0x4p+48), { LIT (0x2.359bac65ecc553d39385cc748cd6p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d39385cc748cd6p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d39385cc748cd6p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d39385cc748cd8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+52", LIT (0x4p+52), { LIT (0x2.61f83263e139323e85feb95a8d92p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323e85feb95a8d94p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323e85feb95a8d92p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323e85feb95a8d94p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+56", LIT (0x4p+56), { LIT (0x2.8e54b861d5ad10a97877a6408e8ep+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a97877a6408e9p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a97877a6408e8ep+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a97877a6408e9p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p+8", LIT (0x4p+8), { LIT (0x7.9fe70ba603d23a62821e041d8128p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a62821e041d812cp+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a62821e041d8128p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a62821e041d812cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.fffff55555a2221f46b48a6324c2p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221f46b48a6324c4p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221f46b48a6324c2p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221f46b48a6324c4p-12), ERRNO_UNCHANGED } },
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
    { "0x4p-28", LIT (0x4p-28), { LIT (0x3.fffffffffffff5555555555555a2p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff5555555555555a2p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff5555555555555a2p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff5555555555555a4p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.fffffffffffffff5555555555554p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff5555555555556p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff5555555555554p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff5555555555556p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffffffffffffffffffffff554p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffff556p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffff554p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffff556p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-56", LIT (0x4p-56), { LIT (0x3.fffffffffffffffffffffffffff4p-56), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffff6p-56), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffff4p-56), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffff6p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-60", LIT (0x4p-60), { LIT (0x3.fffffffffffffffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x6.4p+4", LIT (0x6.4p+4), { LIT (0x5.4c602a4f4f0a7cedac9045f3d3f8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cedac9045f3d3f8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cedac9045f3d3f8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cedac9045f3d3fcp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x6.c92c08p-4", LIT (0x6.c92c08p-4), { LIT (0x6.98e810591e8c1c7a088484b273bp-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c7a088484b273b4p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c7a088484b273bp-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c7a088484b273b4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x6.f4a93p-4", LIT (0x6.f4a93p-4), { LIT (0x6.c0dddeef5ea744d14d99f9d11c74p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d14d99f9d11c78p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d14d99f9d11c74p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d14d99f9d11c78p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x7.d8e5a8p-4", LIT (0x7.d8e5a8p-4), { LIT (0x7.90009894e809171b324a20cc7fc4p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809171b324a20cc7fc8p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809171b324a20cc7fc4p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809171b324a20cc7fc8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+24", LIT (0x8p+24), { LIT (0x1.3687a9f1af2b14fca14e7a4a06e9p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fca14e7a4a06e9p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fca14e7a4a06e9p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fca14e7a4a06eap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.62e42fefa39ef357a3c7673007e5p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef357a3c7673007e6p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef357a3c7673007e5p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef357a3c7673007e6p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+48", LIT (0x8p+48), { LIT (0x2.40b2cde569e24b6e502407ae0ce4p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6e502407ae0ce6p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6e502407ae0ce4p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6e502407ae0ce6p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+52", LIT (0x8p+52), { LIT (0x2.6d0f53e35e5629d9429cf4940dd2p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d9429cf4940dd2p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d9429cf4940dd2p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d9429cf4940dd4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+56", LIT (0x8p+56), { LIT (0x2.996bd9e152ca08443515e17a0ecep+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca08443515e17a0edp+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca08443515e17a0ecep+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca08443515e17a0edp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p+8", LIT (0x8p+8), { LIT (0x8.5159209dd5b8340d7a01c06cc4b8p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8340d7a01c06cc4b8p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8340d7a01c06cc4b8p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8340d7a01c06cc4cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-12", LIT (0x8p-12), { LIT (0x7.ffffaaaab44442d68da70f6582b4p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d68da70f6582b4p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d68da70f6582b4p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d68da70f6582b8p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16", LIT (0x8p-16), { LIT (0x7.ffffffaaaaaab4444442d68d6914p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab4444442d68d6914p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab4444442d68d6914p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab4444442d68d6918p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x7.fffffffffffcp-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffffaaaaaaaaaaaab444p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaaaaaaaaaaab444p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaaaaaaaaaaab444p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaaaaaaaaaaab448p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-32", LIT (0x8p-32), { LIT (0x7.ffffffffffffffaaaaaaaaaaaaa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffaaaaaaaaaaaaacp-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffaaaaaaaaaaaaa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffaaaaaaaaaaaaacp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-36", LIT (0x8p-36), { LIT (0x7.ffffffffffffffffaaaaaaaaaaa8p-36), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffaaaaaaaaaaacp-36), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffaaaaaaaaaaa8p-36), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffaaaaaaaaaaacp-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-52", LIT (0x8p-52), { LIT (0x7.ffffffffffffffffffffffffaaa8p-52), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffaaacp-52), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffaaa8p-52), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffaaacp-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-56", LIT (0x8p-56), { LIT (0x7.ffffffffffffffffffffffffffa8p-56), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffffacp-56), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffffa8p-56), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffffacp-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-60", LIT (0x8p-60), { LIT (0x7.fffffffffffffffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xap+0", LIT (0xap+0), { LIT (0x2.ff8b8a0da57b5aa38395e907170cp+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa38395e907170ep+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa38395e907170cp+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa38395e907170ep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xb.17217f7d1cf79abc9e3b39803f28p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abc9e3b39803f3p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abc9e3b39803f28p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abc9e3b39803f3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0xe.823764bfd1e5fa37c6bf52ed09dp+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa37c6bf52ed09dp+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa37c6bf52ed09dp+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa37c6bf52ed09d8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.96c69p-8", LIT (0xf.96c69p-8), { LIT (0xf.94503821fcc6aead1cad28d4935p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aead1cad28d4935p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aead1cad28d4935p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aead1cad28d49358p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x2.c679d1f73f0fb620d358b213a7cep+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb620d358b213a7dp+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb620d358b213a7cep+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb620d358b213a7dp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x2.c679d1f73f0fb624d358b213a7cep+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624d358b213a7dp+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624d358b213a7cep+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624d358b213a7dp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffffffffffffff8p+16380", LIT (0xf.fffffffffffffffffffffffffff8p+16380), { LIT (0x2.c5d37700c6bb03a6c24b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a6c24b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a6c24b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a6c24b6c9b494ep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x2.c5d37700c6bb03a6c23b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a6c23b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a6c23b6c9b494cp+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a6c23b6c9b494ep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x5.96a7e12e0b98bcf90bb682a4468p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf90bb682a4468p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf90bb682a4468p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf90bb682a44684p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.11c35p-4", LIT (-0x3.11c35p-4), { LIT (-0x3.0d0584p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d0584p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d058p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d058p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.b94a54p-4", LIT (-0x3.b94a54p-4), { LIT (-0x3.b0e338p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e334p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e334p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e334p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.b94a5p-4", LIT (-0x3.b94a5p-4), { LIT (-0x3.b0e334p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e33p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e33p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e33p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.bdeef4p-4", LIT (-0x3.bdeef4p-4), { LIT (-0x3.b568cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bcp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x3.d26bb4p-4", LIT (-0x3.d26bb4p-4), { LIT (-0x3.c958dcp-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d8p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4.39534p-4", LIT (-0x4.39534p-4), { LIT (-0x4.2d24bp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24bp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24a8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24a8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4.cfb988p-4", LIT (-0x4.cfb988p-4), { LIT (-0x4.bde0cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4.cfb98p-4", LIT (-0x4.cfb98p-4), { LIT (-0x4.bde0b8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x4p-128", LIT (-0x4p-128), { LIT (-0x4p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x4p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary32)
    { "-0x5.a95688p-4", LIT (-0x5.a95688p-4), { LIT (-0x5.8cae58p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae58p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae5p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae5p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x5.a9568p-4", LIT (-0x5.a9568p-4), { LIT (-0x5.8cae58p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae5p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae5p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae5p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x5.cabae8p-4", LIT (-0x5.cabae8p-4), { LIT (-0x5.ac1eb8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1ebp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1ebp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x5.cabaep-4", LIT (-0x5.cabaep-4), { LIT (-0x5.ac1ebp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1ebp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1ea8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1ea8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x6.e26358p-4", LIT (-0x6.e26358p-4), { LIT (-0x6.b01868p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b0186p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b0186p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b0186p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x7.63a068p-4", LIT (-0x7.63a068p-4), { LIT (-0x7.261f68p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x7.63a06p-4", LIT (-0x7.63a06p-4), { LIT (-0x7.261f6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x7.88bcc8p-4", LIT (-0x7.88bcc8p-4), { LIT (-0x7.47c18p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c178p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c178p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c178p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x7.fc7fc8p-8", LIT (-0x7.fc7fc8p-8), { LIT (-0x7.fc2afp-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2afp-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2ae8p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2ae8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (-0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (-0x0p+0), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "-0xd.d62e8p+92", LIT (-0xd.d62e8p+92), { LIT (-0x4.3170bp+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170bp+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170a8p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170a8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x5.96a7e8p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7ep+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7ep+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xe.1a1b3p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b3p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b3p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+100", LIT (0x1p+100), { LIT (0x4.60203p+4), ERRNO_UNCHANGED }, { LIT (0x4.602038p+4), ERRNO_UNCHANGED }, { LIT (0x4.60203p+4), ERRNO_UNCHANGED }, { LIT (0x4.602038p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+12", LIT (0x1p+12), { LIT (0x9.02cb3p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb3p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb3p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+24", LIT (0x1p+24), { LIT (0x1.154244p+4), ERRNO_UNCHANGED }, { LIT (0x1.154246p+4), ERRNO_UNCHANGED }, { LIT (0x1.154244p+4), ERRNO_UNCHANGED }, { LIT (0x1.154246p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+28", LIT (0x1p+28), { LIT (0x1.419ecap+4), ERRNO_UNCHANGED }, { LIT (0x1.419eccp+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecap+4), ERRNO_UNCHANGED }, { LIT (0x1.419eccp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+32", LIT (0x1p+32), { LIT (0x1.6dfb5p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb52p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb5p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb52p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+48", LIT (0x1p+48), { LIT (0x2.1f6d68p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d68p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d68p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+52", LIT (0x1p+52), { LIT (0x2.4bc9ecp+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9fp+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ecp+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+56", LIT (0x1p+56), { LIT (0x2.782674p+4), ERRNO_UNCHANGED }, { LIT (0x2.782674p+4), ERRNO_UNCHANGED }, { LIT (0x2.782674p+4), ERRNO_UNCHANGED }, { LIT (0x2.782678p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x6.3d031p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0318p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d031p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0318p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-12", LIT (0x1p-12), { LIT (0xf.fffffp-16), ERRNO_UNCHANGED }, { LIT (0x1p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-16), ERRNO_UNCHANGED }, { LIT (0x1p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-24", LIT (0x1p-24), { LIT (0xf.fffffp-28), ERRNO_UNCHANGED }, { LIT (0x1p-24), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-28), ERRNO_UNCHANGED }, { LIT (0x1p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-28", LIT (0x1p-28), { LIT (0xf.fffffp-32), ERRNO_UNCHANGED }, { LIT (0x1p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-32), ERRNO_UNCHANGED }, { LIT (0x1p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-32", LIT (0x1p-32), { LIT (0xf.fffffp-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-48", LIT (0x1p-48), { LIT (0xf.fffffp-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-52", LIT (0x1p-52), { LIT (0xf.fffffp-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-56", LIT (0x1p-56), { LIT (0xf.fffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p-8", LIT (0x1p-8), { LIT (0xf.fffd5p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd5p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd5p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd6p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+12", LIT (0x2p+12), { LIT (0x9.b43d4p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d5p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d5p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+24", LIT (0x2p+24), { LIT (0x1.205966p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966p+4), ERRNO_UNCHANGED }, { LIT (0x1.205968p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+28", LIT (0x2p+28), { LIT (0x1.4cb5ecp+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecp+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecp+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5eep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+32", LIT (0x2p+32), { LIT (0x1.791272p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272p+4), ERRNO_UNCHANGED }, { LIT (0x1.791274p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+48", LIT (0x2p+48), { LIT (0x2.2a8488p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848cp+4), ERRNO_UNCHANGED }, { LIT (0x2.2a8488p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+52", LIT (0x2p+52), { LIT (0x2.56e11p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e11p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e11p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e114p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+56", LIT (0x2p+56), { LIT (0x2.833d94p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d98p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d94p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d98p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+8", LIT (0x2p+8), { LIT (0x6.ee74f8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee75p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74f8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee75p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-12", LIT (0x2p-12), { LIT (0x1.fffffep-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-12), ERRNO_UNCHANGED }, { LIT (0x2p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-28", LIT (0x2p-28), { LIT (0x1.fffffep-28), ERRNO_UNCHANGED }, { LIT (0x2p-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-28), ERRNO_UNCHANGED }, { LIT (0x2p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-32", LIT (0x2p-32), { LIT (0x1.fffffep-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-52", LIT (0x2p-52), { LIT (0x1.fffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p-60", LIT (0x2p-60), { LIT (0x1.fffffep-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED }, { LIT (0x1.fffffep-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4.08f3f8p-4", LIT (0x4.08f3f8p-4), { LIT (0x3.fe4e58p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5cp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e58p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4.08f4p-4", LIT (0x4.08f4p-4), { LIT (0x3.fe4e6p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e64p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e6p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e64p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p+24", LIT (0x4p+24), { LIT (0x1.2b7088p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b7088p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b7088p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708ap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p+28", LIT (0x4p+28), { LIT (0x1.57cd0ep+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0ep+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0ep+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd1p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p+48", LIT (0x4p+48), { LIT (0x2.359bacp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bacp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bacp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bbp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p+52", LIT (0x4p+52), { LIT (0x2.61f83p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f834p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f834p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p+56", LIT (0x4p+56), { LIT (0x2.8e54b8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54bcp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p+8", LIT (0x4p+8), { LIT (0x7.9fe708p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe708p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe708p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe71p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.fffff4p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff4p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff4p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff8p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffff8p-128), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-128), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-28", LIT (0x4p-28), { LIT (0x3.fffffcp-28), ERRNO_UNCHANGED }, { LIT (0x4p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-28), ERRNO_UNCHANGED }, { LIT (0x4p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.fffffcp-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-56", LIT (0x4p-56), { LIT (0x3.fffffcp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-60", LIT (0x4p-60), { LIT (0x3.fffffcp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED }, { LIT (0x3.fffffcp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x6.4p+4", LIT (0x6.4p+4), { LIT (0x5.4c6028p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c6028p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c6028p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c603p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x6.c92c08p-4", LIT (0x6.c92c08p-4), { LIT (0x6.98e81p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e81p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e81p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e818p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x6.f4a93p-4", LIT (0x6.f4a93p-4), { LIT (0x6.c0ddd8p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0ddep-4), ERRNO_UNCHANGED }, { LIT (0x6.c0ddd8p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0ddep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x7.d8e5a8p-4", LIT (0x7.d8e5a8p-4), { LIT (0x7.900098p-4), ERRNO_UNCHANGED }, { LIT (0x7.900098p-4), ERRNO_UNCHANGED }, { LIT (0x7.900098p-4), ERRNO_UNCHANGED }, { LIT (0x7.9000ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+24", LIT (0x8p+24), { LIT (0x1.3687a8p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687aap+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a8p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687aap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.62e42ep+4), ERRNO_UNCHANGED }, { LIT (0x1.62e43p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42ep+4), ERRNO_UNCHANGED }, { LIT (0x1.62e43p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+48", LIT (0x8p+48), { LIT (0x2.40b2ccp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2ccp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2ccp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2dp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+52", LIT (0x8p+52), { LIT (0x2.6d0f5p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f54p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f5p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f54p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+56", LIT (0x8p+56), { LIT (0x2.996bd8p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd8p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd8p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bdcp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p+8", LIT (0x8p+8), { LIT (0x8.51592p+0), ERRNO_UNCHANGED }, { LIT (0x8.51592p+0), ERRNO_UNCHANGED }, { LIT (0x8.51592p+0), ERRNO_UNCHANGED }, { LIT (0x8.51593p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-12", LIT (0x8p-12), { LIT (0x7.ffffa8p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffa8p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffa8p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffbp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-152), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-16", LIT (0x8p-16), { LIT (0x7.fffff8p-16), ERRNO_UNCHANGED }, { LIT (0x8p-16), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-16), ERRNO_UNCHANGED }, { LIT (0x8p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.fffff8p-28), ERRNO_UNCHANGED }, { LIT (0x8p-28), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-28), ERRNO_UNCHANGED }, { LIT (0x8p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-32", LIT (0x8p-32), { LIT (0x7.fffff8p-32), ERRNO_UNCHANGED }, { LIT (0x8p-32), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-32), ERRNO_UNCHANGED }, { LIT (0x8p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-36", LIT (0x8p-36), { LIT (0x7.fffff8p-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-52", LIT (0x8p-52), { LIT (0x7.fffff8p-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-56", LIT (0x8p-56), { LIT (0x7.fffff8p-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-60", LIT (0x8p-60), { LIT (0x7.fffff8p-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xap+0", LIT (0xap+0), { LIT (0x2.ff8b88p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8cp+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b88p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xb.17217p-4), ERRNO_UNCHANGED }, { LIT (0xb.17218p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217p-4), ERRNO_UNCHANGED }, { LIT (0xb.17218p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0xe.82376p+0), ERRNO_UNCHANGED }, { LIT (0xe.82376p+0), ERRNO_UNCHANGED }, { LIT (0xe.82376p+0), ERRNO_UNCHANGED }, { LIT (0xe.82377p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.96c69p-8", LIT (0xf.96c69p-8), { LIT (0xf.94503p-8), ERRNO_UNCHANGED }, { LIT (0xf.94504p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503p-8), ERRNO_UNCHANGED }, { LIT (0xf.94504p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x5.96a7ep+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7ep+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7ep+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.11c35p-4", LIT (-0x3.11c35p-4), { LIT (-0x3.0d05831101b46p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b46p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b44p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b44p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.b94a52e6913c2p-4", LIT (-0x3.b94a52e6913c2p-4), { LIT (-0x3.b0e3342ca9654p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca9652p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca9652p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca9652p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.b94a54p-4", LIT (-0x3.b94a54p-4), { LIT (-0x3.b0e3353ec4c12p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c12p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c1p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c1p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.b94a5p-4", LIT (-0x3.b94a5p-4), { LIT (-0x3.b0e331596c77ap-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c778p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c778p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c778p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.bdeef4p-4", LIT (-0x3.bdeef4p-4), { LIT (-0x3.b568bf5eec678p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x3.d26bb4p-4", LIT (-0x3.d26bb4p-4), { LIT (-0x3.c958d830129a4p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4.39534p-4", LIT (-0x4.39534p-4), { LIT (-0x4.2d24ad5bedc8cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc88p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc88p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4.cfb9805a53a24p-4", LIT (-0x4.cfb9805a53a24p-4), { LIT (-0x4.bde0b78526938p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526934p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526934p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526934p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4.cfb9805a53a2p-4", LIT (-0x4.cfb9805a53a2p-4), { LIT (-0x4.bde0b78526934p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4.cfb988p-4", LIT (-0x4.cfb988p-4), { LIT (-0x4.bde0bed7e48fp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ecp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ecp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x4.cfb98p-4", LIT (-0x4.cfb98p-4), { LIT (-0x4.bde0b72ea682p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea682p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681cp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681cp-4), ERRNO_UNCHANGED } },
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
    { "-0x5.a95683e302a74p-4", LIT (-0x5.a95683e302a74p-4), { LIT (-0x5.8cae53be0eebcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.a95683e302a7p-4", LIT (-0x5.a95683e302a7p-4), { LIT (-0x5.8cae53be0eeb8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.a95688p-4", LIT (-0x5.a95688p-4), { LIT (-0x5.8cae579ebc7ccp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.a9568p-4", LIT (-0x5.a9568p-4), { LIT (-0x5.8cae501409e8cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.cabae7a011e34p-4", LIT (-0x5.cabae7a011e34p-4), { LIT (-0x5.ac1eb633f2fd4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fdp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fdp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fdp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.cabae7a011e3p-4", LIT (-0x5.cabae7a011e3p-4), { LIT (-0x5.ac1eb633f2fdp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fccp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fccp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fccp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.cabae8p-4", LIT (-0x5.cabae8p-4), { LIT (-0x5.ac1eb68e26b14p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b14p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b1p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b1p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x5.cabaep-4", LIT (-0x5.cabaep-4), { LIT (-0x5.ac1eaf0870dccp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dccp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dc8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dc8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x6.e26358p-4", LIT (-0x6.e26358p-4), { LIT (-0x6.b01863558de0cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de08p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de08p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x7.63a06320c42e4p-4", LIT (-0x7.63a06320c42e4p-4), { LIT (-0x7.261f5cf40e16cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e168p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e168p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e168p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x7.63a068p-4", LIT (-0x7.63a068p-4), { LIT (-0x7.261f61605eb6cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb68p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb68p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x7.63a06p-4", LIT (-0x7.63a06p-4), { LIT (-0x7.261f5a1d1207p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1207p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x7.88bcc8p-4", LIT (-0x7.88bcc8p-4), { LIT (-0x7.47c17bbd7ba64p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x7.fc7fc8p-8", LIT (-0x7.fc7fc8p-8), { LIT (-0x7.fc2aec03ed36p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed36p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35cp-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x8p-972), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (-0x7.ffffffffffffcp-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xd.d62e8p+92", LIT (-0xd.d62e8p+92), { LIT (-0x4.3170acb26585cp+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x2.c679d1f73f0fcp+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fcp+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fap+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fap+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x5.96a7e12e0b98cp+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98cp+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b988p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b988p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xe.1a1b30bcea13p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea138p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea138p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+100", LIT (0x1p+100), { LIT (0x4.6020374c5c6d8p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6dcp+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6d8p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6dcp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+12", LIT (0x1p+12), { LIT (0x9.02cb37d5a789p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a789p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a789p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a7898p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+24", LIT (0x1p+24), { LIT (0x1.1542457337d43p+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d43p+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d43p+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d44p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+28", LIT (0x1p+28), { LIT (0x1.419ecb712c48p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c481p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c48p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c481p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+32", LIT (0x1p+32), { LIT (0x1.6dfb516f20bbep+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbfp+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbep+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbfp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+48", LIT (0x1p+48), { LIT (0x2.1f6d6966f28b6p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b6p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b6p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+500", LIT (0x1p+500), { LIT (0x1.5b4448e7fd9bp+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b1p+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9bp+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b1p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+52", LIT (0x1p+52), { LIT (0x2.4bc9ef64e6ff4p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff4p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff4p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff6p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+56", LIT (0x1p+56), { LIT (0x2.78267562db732p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db734p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x6.3d0317b6484b4p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b4p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b4p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.ffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-12", LIT (0x1p-12), { LIT (0xf.fffffd5555568p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd5555568p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd5555568p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555557p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-24", LIT (0x1p-24), { LIT (0xf.fffffffffffdp-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd8p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffdp-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd8p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-28", LIT (0x1p-28), { LIT (0xf.ffffffffffff8p-32), ERRNO_UNCHANGED }, { LIT (0x1p-28), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-32), ERRNO_UNCHANGED }, { LIT (0x1p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-32", LIT (0x1p-32), { LIT (0xf.ffffffffffff8p-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-48", LIT (0x1p-48), { LIT (0xf.ffffffffffff8p-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-500", LIT (0x1p-500), { LIT (0xf.ffffffffffff8p-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-52", LIT (0x1p-52), { LIT (0xf.ffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-56", LIT (0x1p-56), { LIT (0xf.ffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.ffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p-8", LIT (0x1p-8), { LIT (0xf.fffd555688878p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568888p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd555688878p-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568888p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+12", LIT (0x2p+12), { LIT (0x9.b43d4f9d79588p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d79588p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d79588p+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7959p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+24", LIT (0x2p+24), { LIT (0x1.205966f2b4f12p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f12p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f12p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f13p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+28", LIT (0x2p+28), { LIT (0x1.4cb5ecf0a965p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a965p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a965p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a9651p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+32", LIT (0x2p+32), { LIT (0x1.791272ee9dd8ep+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8ep+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8ep+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+48", LIT (0x2p+48), { LIT (0x2.2a848ae66fa84p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa86p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa84p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa86p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+52", LIT (0x2p+52), { LIT (0x2.56e110e4641c2p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c4p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c2p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+56", LIT (0x2p+56), { LIT (0x2.833d96e2589p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e258902p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e2589p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e258902p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+8", LIT (0x2p+8), { LIT (0x6.ee74ffae309acp+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309acp+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309acp+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309bp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-12", LIT (0x2p-12), { LIT (0x1.fffffeaaaaad1p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad1p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad1p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad2p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-28", LIT (0x2p-28), { LIT (0x1.fffffffffffffp-28), ERRNO_UNCHANGED }, { LIT (0x2p-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-28), ERRNO_UNCHANGED }, { LIT (0x2p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-32", LIT (0x2p-32), { LIT (0x1.fffffffffffffp-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-52", LIT (0x2p-52), { LIT (0x1.fffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p-60", LIT (0x2p-60), { LIT (0x1.fffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4.08f3f8p-4", LIT (0x4.08f3f8p-4), { LIT (0x3.fe4e5b035250ep-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035251p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250ep-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035251p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4.08f3faac4284cp-4", LIT (0x4.08f3faac4284cp-4), { LIT (0x3.fe4e5d9acef72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef74p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef74p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4.08f4p-4", LIT (0x4.08f4p-4), { LIT (0x3.fe4e62c525da4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da6p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p+24", LIT (0x4p+24), { LIT (0x1.2b708872320e1p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e2p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e2p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p+28", LIT (0x4p+28), { LIT (0x1.57cd0e702681fp+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702682p+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fp+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702682p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p+48", LIT (0x4p+48), { LIT (0x2.359bac65ecc54p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc56p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc54p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc56p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p+52", LIT (0x4p+52), { LIT (0x2.61f83263e1392p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e1394p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e1392p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e1394p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p+56", LIT (0x4p+56), { LIT (0x2.8e54b861d5adp+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad2p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5adp+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad2p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p+8", LIT (0x4p+8), { LIT (0x7.9fe70ba603d2p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d24p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d2p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d24p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.fffff55555a22p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a22p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a22p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a24p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.ffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-28", LIT (0x4p-28), { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x4p-28), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-28), ERRNO_UNCHANGED }, { LIT (0x4p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.ffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x4p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.ffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-56", LIT (0x4p-56), { LIT (0x3.ffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-60", LIT (0x4p-60), { LIT (0x3.ffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x6.4p+4", LIT (0x6.4p+4), { LIT (0x5.4c602a4f4f0a4p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a4p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x6.c92c08p-4", LIT (0x6.c92c08p-4), { LIT (0x6.98e810591e8cp-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8cp-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8cp-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x6.f4a93p-4", LIT (0x6.f4a93p-4), { LIT (0x6.c0dddeef5ea74p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea74p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea74p-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea78p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x7.d8e5a8p-4", LIT (0x7.d8e5a8p-4), { LIT (0x7.90009894e809p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e8094p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+24", LIT (0x8p+24), { LIT (0x1.3687a9f1af2b1p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b1p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b1p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b2p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.62e42fefa39efp+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39efp+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39efp+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+48", LIT (0x8p+48), { LIT (0x2.40b2cde569e24p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e26p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+52", LIT (0x8p+52), { LIT (0x2.6d0f53e35e562p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e562p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e562p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e564p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+56", LIT (0x8p+56), { LIT (0x2.996bd9e152cap+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152cap+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152cap+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca2p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p+8", LIT (0x8p+8), { LIT (0x8.5159209dd5b8p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b88p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-12", LIT (0x8p-12), { LIT (0x7.ffffaaaab4444p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab4444p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab4444p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab4448p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-16", LIT (0x8p-16), { LIT (0x7.ffffffaaaaaa8p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaacp-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaa8p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaacp-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffff8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffff8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-32", LIT (0x8p-32), { LIT (0x7.ffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-32), ERRNO_UNCHANGED }, { LIT (0x8p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-36", LIT (0x8p-36), { LIT (0x7.ffffffffffffcp-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-52", LIT (0x8p-52), { LIT (0x7.ffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-56", LIT (0x8p-56), { LIT (0x7.ffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-60", LIT (0x8p-60), { LIT (0x7.ffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffcp-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xap+0", LIT (0xap+0), { LIT (0x2.ff8b8a0da57b4p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b6p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b4p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xb.17217f7d1cf78p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf78p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf78p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0xe.823764bfd1e58p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e6p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e58p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e6p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.96c69p-8", LIT (0xf.96c69p-8), { LIT (0xf.94503821fcc68p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc68p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc68p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc7p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x2.c679d1f73f0fap+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fcp+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fap+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fcp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x5.96a7e12e0b988p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98cp+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b988p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.11c35p-4", LIT (-0x3.11c35p-4), { LIT (-0x3.0d05831101b4500142e4b29018p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b4500142e4b29017p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b4500142e4b29017p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b4500142e4b29017p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.b94a52e6913c2p-4", LIT (-0x3.b94a52e6913c2p-4), { LIT (-0x3.b0e3342ca965242afb569c3a5dp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242afb569c3a5dp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242afb569c3a5cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242afb569c3a5cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.b94a54p-4", LIT (-0x3.b94a54p-4), { LIT (-0x3.b0e3353ec4c110c2cb860e4336p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c2cb860e4336p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c2cb860e4335p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c2cb860e4335p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.b94a5p-4", LIT (-0x3.b94a5p-4), { LIT (-0x3.b0e331596c7781edc668b0947ep-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781edc668b0947ep-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781edc668b0947dp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781edc668b0947dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.bdeef4p-4", LIT (-0x3.bdeef4p-4), { LIT (-0x3.b568bf5eec676953e540354ab6p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676953e540354ab5p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676953e540354ab5p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676953e540354ab5p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x3.d26bb4p-4", LIT (-0x3.d26bb4p-4), { LIT (-0x3.c958d830129a2311e46d02ce95p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2311e46d02ce95p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2311e46d02ce94p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a2311e46d02ce94p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4.39534p-4", LIT (-0x4.39534p-4), { LIT (-0x4.2d24ad5bedc89dab07914ab2dp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89dab07914ab2cep-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89dab07914ab2cep-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89dab07914ab2cep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4.cfb9805a53a2065p-4", LIT (-0x4.cfb9805a53a2065p-4), { LIT (-0x4.bde0b78526931a2fb7988c9c14p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a2fb7988c9c12p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a2fb7988c9c12p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a2fb7988c9c12p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4.cfb9805a53a24p-4", LIT (-0x4.cfb9805a53a24p-4), { LIT (-0x4.bde0b7852693516e1d0cb5a0a6p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693516e1d0cb5a0a6p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693516e1d0cb5a0a4p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693516e1d0cb5a0a4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4.cfb9805a53a2p-4", LIT (-0x4.cfb9805a53a2p-4), { LIT (-0x4.bde0b785269314242ca206df88p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b785269314242ca206df86p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b785269314242ca206df86p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b785269314242ca206df86p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4.cfb988p-4", LIT (-0x4.cfb988p-4), { LIT (-0x4.bde0bed7e48ed176770b2cee56p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed176770b2cee54p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed176770b2cee54p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed176770b2cee54p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x4.cfb98p-4", LIT (-0x4.cfb98p-4), { LIT (-0x4.bde0b72ea681f6e82ea91bcdc6p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e82ea91bcdc4p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e82ea91bcdc4p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e82ea91bcdc4p-4), ERRNO_UNCHANGED } },
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
    { "-0x5.a95683e302a71be88a35649b24p-4", LIT (-0x5.a95683e302a71be88a35649b24p-4), { LIT (-0x5.8cae53be0eeb89898490af1caap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1ca8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.a95683e302a71be88a35649b26p-4", LIT (-0x5.a95683e302a71be88a35649b26p-4), { LIT (-0x5.8cae53be0eeb89898490af1cacp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1caap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1caap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89898490af1caap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.a95683e302a71be8p-4", LIT (-0x5.a95683e302a71be8p-4), { LIT (-0x5.8cae53be0eeb89890245d0ebfcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89890245d0ebfcp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89890245d0ebfap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89890245d0ebfap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.a95683e302a71bfp-4", LIT (-0x5.a95683e302a71bfp-4), { LIT (-0x5.8cae53be0eeb89908cf864f52cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89908cf864f52cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89908cf864f52ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb89908cf864f52ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.a95683e302a74p-4", LIT (-0x5.a95683e302a74p-4), { LIT (-0x5.8cae53be0eebab8fc5f7b65e3ep-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab8fc5f7b65e3ep-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab8fc5f7b65e3cp-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab8fc5f7b65e3cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.a95683e302a7p-4", LIT (-0x5.a95683e302a7p-4), { LIT (-0x5.8cae53be0eeb6f3a31576ce09p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f3a31576ce08ep-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f3a31576ce08ep-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f3a31576ce08ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.a95688p-4", LIT (-0x5.a95688p-4), { LIT (-0x5.8cae579ebc7c885e6164f2f19ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c885e6164f2f198p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c885e6164f2f198p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c885e6164f2f198p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.a9568p-4", LIT (-0x5.a9568p-4), { LIT (-0x5.8cae501409e8837aba5edefb9ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e8837aba5edefb98p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e8837aba5edefb98p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e8837aba5edefb98p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.cabae7a011e33d9p-4", LIT (-0x5.cabae7a011e33d9p-4), { LIT (-0x5.ac1eb633f2fd11f0f621e284b4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11f0f621e284b2p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11f0f621e284b2p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11f0f621e284b2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.cabae7a011e34p-4", LIT (-0x5.cabae7a011e34p-4), { LIT (-0x5.ac1eb633f2fd143bb3887641cap-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd143bb3887641c8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd143bb3887641c8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd143bb3887641c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.cabae7a011e3p-4", LIT (-0x5.cabae7a011e3p-4), { LIT (-0x5.ac1eb633f2fcd80e04e8e6254p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd80e04e8e6253ep-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd80e04e8e6253ep-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd80e04e8e6253ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.cabae8p-4", LIT (-0x5.cabae8p-4), { LIT (-0x5.ac1eb68e26b132a5e3ce931aa8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a5e3ce931aa8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a5e3ce931aa6p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a5e3ce931aa6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x5.cabaep-4", LIT (-0x5.cabaep-4), { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4eap-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4eap-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4e8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4fc584cd1a4e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x6.e26358p-4", LIT (-0x6.e26358p-4), { LIT (-0x6.b01863558de0ab9db866832ea6p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab9db866832ea6p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab9db866832ea4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab9db866832ea4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x7.63a06320c42e4p-4", LIT (-0x7.63a06320c42e4p-4), { LIT (-0x7.261f5cf40e169a3c2c399a33c8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a3c2c399a33c8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a3c2c399a33c6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a3c2c399a33c6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x7.63a068p-4", LIT (-0x7.63a068p-4), { LIT (-0x7.261f61605eb6bd156f8f2c7394p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd156f8f2c7394p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd156f8f2c7392p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd156f8f2c7392p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x7.63a06p-4", LIT (-0x7.63a06p-4), { LIT (-0x7.261f5a1d1206f0273eb68b1dacp-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f0273eb68b1daap-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f0273eb68b1daap-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f0273eb68b1daap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x7.88bcc8p-4", LIT (-0x7.88bcc8p-4), { LIT (-0x7.47c17bbd7ba607458f4e549f14p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba607458f4e549f14p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba607458f4e549f12p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba607458f4e549f12p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x7.fc7fc8p-8", LIT (-0x7.fc7fc8p-8), { LIT (-0x7.fc2aec03ed35ec4f3b852298d4p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec4f3b852298d4p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec4f3b852298d2p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec4f3b852298d2p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-152", LIT (-0x8p-152), { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x8p-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (-0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0x8p-972", LIT (-0x8p-972), { LIT (-0x8p-972), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x8p-972), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_ibm128)
    { "-0xd.d62e8p+92", LIT (-0xd.d62e8p+92), { LIT (-0x4.3170acb265858000c5d391e674p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858000c5d391e672p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858000c5d391e672p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858000c5d391e672p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x2.c679d1f73f0fb620d358b213a8p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb620d358b213a8p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb620d358b213a7p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb620d358b213a7p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.ffffffffffffbffffffffffffcp+1020", LIT (-0xf.ffffffffffffbffffffffffffcp+1020), { LIT (-0x2.c679d1f73f0fb624d358b213a8p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb624d358b213a8p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb624d358b213a7p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb624d358b213a7p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x5.96a7e12e0b98bcf90bb682a448p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf90bb682a446p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf90bb682a446p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf90bb682a446p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xe.1a1b30bcea13660d8f99e8dd24p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13660d8f99e8dd24p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13660d8f99e8dd24p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13660d8f99e8dd28p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+100", LIT (0x1p+100), { LIT (0x4.6020374c5c6db00c6a6d5daf98p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db00c6a6d5daf98p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db00c6a6d5daf98p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db00c6a6d5daf9ap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+12", LIT (0x1p+12), { LIT (0x9.02cb37d5a78915b9409d740d7cp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915b9409d740d8p+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915b9409d740d7cp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915b9409d740d8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+24", LIT (0x1p+24), { LIT (0x1.1542457337d4321c6b73c89d848p+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321c6b73c89d848p+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321c6b73c89d848p+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321c6b73c89d85p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+28", LIT (0x1p+28), { LIT (0x1.419ecb712c480c8b5decb58387p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8b5decb58387p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8b5decb58387p+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8b5decb583878p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+32", LIT (0x1p+32), { LIT (0x1.6dfb516f20bbeaf25465a26988p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf25465a26988p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf25465a26988p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf25465a269888p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+48", LIT (0x1p+48), { LIT (0x2.1f6d6966f28b649e1a4956019p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649e1a4956019p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649e1a4956019p+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649e1a49560191p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+500", LIT (0x1p+500), { LIT (0x1.5b4448e7fd9b091d321a9e787f8p+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091d321a9e787f8p+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091d321a9e787f8p+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091d321a9e788p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+52", LIT (0x1p+52), { LIT (0x2.4bc9ef64e6ff43090cc242e78dp+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff43090cc242e78dp+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff43090cc242e78dp+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff43090cc242e78ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+56", LIT (0x1p+56), { LIT (0x2.78267562db732173ff3b2fcd8ep+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732173ff3b2fcd8ep+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732173ff3b2fcd8ep+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732173ff3b2fcd8fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x6.3d0317b6484b545f6596abfa4p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b545f6596abfa4p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b545f6596abfa4p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b545f6596abfa42p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-12", LIT (0x1p-12), { LIT (0xf.fffffd555556888887d1ad1b4cp-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888887d1ad1b5p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888887d1ad1b4cp-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888887d1ad1b5p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-24", LIT (0x1p-24), { LIT (0xf.fffffffffffd55555555555688p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd55555555555688p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd55555555555688p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd5555555555568cp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-28", LIT (0x1p-28), { LIT (0xf.fffffffffffffd555555555554p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd555555555554p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd555555555554p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd555555555558p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-32", LIT (0x1p-32), { LIT (0xf.fffffffffffffffd5555555554p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffd5555555554p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffd5555555554p-36), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffd5555555558p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-48", LIT (0x1p-48), { LIT (0xf.fffffffffffffffffffffffd54p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffd54p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffd54p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffd58p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-500", LIT (0x1p-500), { LIT (0xf.fffffffffffffffffffffffffcp-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-52", LIT (0x1p-52), { LIT (0xf.fffffffffffffffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-56", LIT (0x1p-56), { LIT (0xf.fffffffffffffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p-8", LIT (0x1p-8), { LIT (0xf.fffd55568887d1ad97431894ap-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ad97431894ap-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ad97431894ap-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ad97431894a4p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+12", LIT (0x2p+12), { LIT (0x9.b43d4f9d7958a5e50a7407a58cp+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5e50a7407a58cp+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5e50a7407a58cp+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5e50a7407a59p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+24", LIT (0x2p+24), { LIT (0x1.205966f2b4f126b7281203d706p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b7281203d7068p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b7281203d706p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b7281203d7068p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+28", LIT (0x2p+28), { LIT (0x1.4cb5ecf0a96504231a8af0bd07p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a96504231a8af0bd078p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a96504231a8af0bd07p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a96504231a8af0bd078p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+32", LIT (0x2p+32), { LIT (0x1.791272ee9dd8e28d0e03dda308p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28d0e03dda3088p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28d0e03dda308p+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28d0e03dda3088p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+48", LIT (0x2p+48), { LIT (0x2.2a848ae66fa85c38d6e7913b0dp+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38d6e7913b0dp+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38d6e7913b0dp+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38d6e7913b0ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+52", LIT (0x2p+52), { LIT (0x2.56e110e4641c3aa3c9607e210dp+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa3c9607e210dp+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa3c9607e210dp+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa3c9607e210ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+56", LIT (0x2p+56), { LIT (0x2.833d96e25890190ebbd96b070ep+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190ebbd96b070ep+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190ebbd96b070ep+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190ebbd96b070fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+8", LIT (0x2p+8), { LIT (0x6.ee74ffae309ac0eb383199471p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0eb383199471p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0eb383199471p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0eb3831994712p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-12", LIT (0x2p-12), { LIT (0x1.fffffeaaaaad11110b5a35b2e8p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad11110b5a35b2e88p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad11110b5a35b2e8p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad11110b5a35b2e88p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-28", LIT (0x2p-28), { LIT (0x1.fffffffffffffeaaaaaaaaaaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaaaaaaaaaaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaaaaaaaaaaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaaaaaaaaaaabp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-32", LIT (0x2p-32), { LIT (0x1.fffffffffffffffeaaaaaaaaaa8p-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffeaaaaaaaaaa8p-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffeaaaaaaaaaa8p-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffeaaaaaaaaabp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-52", LIT (0x2p-52), { LIT (0x1.fffffffffffffffffffffffffe8p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffe8p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffffffffffffe8p-52), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffffp-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.ffffffffffffffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p-60", LIT (0x2p-60), { LIT (0x1.ffffffffffffffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED }, { LIT (0x1.ffffffffffffffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4.08f3f8p-4", LIT (0x4.08f3f8p-4), { LIT (0x3.fe4e5b035250f72070a4b6fdf4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72070a4b6fdf5p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72070a4b6fdf4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72070a4b6fdf5p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4.08f3faac4284cp-4", LIT (0x4.08f3faac4284cp-4), { LIT (0x3.fe4e5d9acef73cd0062bafd4f4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd0062bafd4f4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd0062bafd4f4p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd0062bafd4f5p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4.08f4p-4", LIT (0x4.08f4p-4), { LIT (0x3.fe4e62c525da587ab7dc0384edp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587ab7dc0384eep-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587ab7dc0384edp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587ab7dc0384eep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p+24", LIT (0x4p+24), { LIT (0x1.2b708872320e1d91e4b03f10868p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d91e4b03f10868p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d91e4b03f10868p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d91e4b03f1087p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p+28", LIT (0x4p+28), { LIT (0x1.57cd0e702681fbbd17292bf6878p+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbd17292bf6878p+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbd17292bf6878p+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbd17292bf688p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p+48", LIT (0x4p+48), { LIT (0x2.359bac65ecc553d39385cc748cp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d39385cc748dp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d39385cc748cp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d39385cc748dp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p+52", LIT (0x4p+52), { LIT (0x2.61f83263e139323e85feb95a8dp+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323e85feb95a8ep+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323e85feb95a8dp+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323e85feb95a8ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p+56", LIT (0x4p+56), { LIT (0x2.8e54b861d5ad10a97877a6408ep+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a97877a6408fp+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a97877a6408ep+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a97877a6408fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p+8", LIT (0x4p+8), { LIT (0x7.9fe70ba603d23a62821e041d8p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a62821e041d82p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a62821e041d8p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a62821e041d82p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION }, { LIT (0x3.ffffffffffffcp-1024), UNDERFLOW_EXCEPTION }, { LIT (0x4p-1024), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION }, { LIT (0x4p-1076), ((TEST_COND_ibm128_libgcc) ? XFAIL_TEST : 0) | UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.fffff55555a2221f46b48a6324p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221f46b48a6325p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221f46b48a6324p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221f46b48a6325p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.ffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffffp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-28", LIT (0x4p-28), { LIT (0x3.fffffffffffff5555555555555p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff5555555555556p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff5555555555555p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff5555555555556p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.fffffffffffffff55555555555p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff55555555555p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff55555555555p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff55555555556p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffffffffffffffffffffff5p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffff5p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffff5p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffff6p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-56", LIT (0x4p-56), { LIT (0x3.ffffffffffffffffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-60", LIT (0x4p-60), { LIT (0x3.ffffffffffffffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x6.4p+4", LIT (0x6.4p+4), { LIT (0x5.4c602a4f4f0a7cedac9045f3d2p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cedac9045f3d4p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cedac9045f3d2p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cedac9045f3d4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x6.c92c08p-4", LIT (0x6.c92c08p-4), { LIT (0x6.98e810591e8c1c7a088484b272p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c7a088484b274p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c7a088484b272p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c7a088484b274p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x6.f4a93p-4", LIT (0x6.f4a93p-4), { LIT (0x6.c0dddeef5ea744d14d99f9d11cp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d14d99f9d11cp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d14d99f9d11cp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d14d99f9d11ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x7.d8e5a8p-4", LIT (0x7.d8e5a8p-4), { LIT (0x7.90009894e809171b324a20cc7ep-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809171b324a20cc8p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809171b324a20cc7ep-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809171b324a20cc8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+24", LIT (0x8p+24), { LIT (0x1.3687a9f1af2b14fca14e7a4a068p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fca14e7a4a07p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fca14e7a4a068p+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fca14e7a4a07p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.62e42fefa39ef357a3c76730078p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef357a3c7673008p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef357a3c76730078p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef357a3c7673008p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+48", LIT (0x8p+48), { LIT (0x2.40b2cde569e24b6e502407ae0cp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6e502407ae0dp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6e502407ae0cp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6e502407ae0dp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+52", LIT (0x8p+52), { LIT (0x2.6d0f53e35e5629d9429cf4940dp+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d9429cf4940ep+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d9429cf4940dp+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d9429cf4940ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+56", LIT (0x8p+56), { LIT (0x2.996bd9e152ca08443515e17a0ep+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca08443515e17a0fp+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca08443515e17a0ep+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca08443515e17a0fp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p+8", LIT (0x8p+8), { LIT (0x8.5159209dd5b8340d7a01c06cc4p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8340d7a01c06cc4p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8340d7a01c06cc4p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8340d7a01c06cc8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-12", LIT (0x8p-12), { LIT (0x7.ffffaaaab44442d68da70f6582p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d68da70f6582p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d68da70f6582p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d68da70f6584p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-16", LIT (0x8p-16), { LIT (0x7.ffffffaaaaaab4444442d68d68p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab4444442d68d6ap-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab4444442d68d68p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab4444442d68d6ap-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffffaaaaaaaaaaaab4p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaaaaaaaaaaab4p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaaaaaaaaaaab4p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaaaaaaaaaaab6p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-32", LIT (0x8p-32), { LIT (0x7.ffffffffffffffaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffaaaaaaaaaaaap-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffaaaaaaaaaaacp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-36", LIT (0x8p-36), { LIT (0x7.ffffffffffffffffaaaaaaaaaap-36), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffaaaaaaaaaap-36), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffaaaaaaaaaap-36), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffaaaaaaaaacp-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-52", LIT (0x8p-52), { LIT (0x7.ffffffffffffffffffffffffaap-52), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffaap-52), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffaap-52), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffffffffffffacp-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-56", LIT (0x8p-56), { LIT (0x7.fffffffffffffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-60", LIT (0x8p-60), { LIT (0x7.fffffffffffffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x7.fffffffffffffffffffffffffcp-972), UNDERFLOW_EXCEPTION_OK }, { LIT (0x8p-972), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_ibm128)
    { "0xap+0", LIT (0xap+0), { LIT (0x2.ff8b8a0da57b5aa38395e90717p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa38395e90717p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa38395e90717p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa38395e90718p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xb.17217f7d1cf79abc9e3b39803cp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abc9e3b39804p-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abc9e3b39803cp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abc9e3b39804p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0xe.823764bfd1e5fa37c6bf52ed08p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa37c6bf52ed08p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa37c6bf52ed08p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa37c6bf52ed0cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.96c69p-8", LIT (0xf.96c69p-8), { LIT (0xf.94503821fcc6aead1cad28d49p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aead1cad28d494p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aead1cad28d49p-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aead1cad28d494p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x2.c679d1f73f0fb620d358b213a7p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb620d358b213a8p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb620d358b213a7p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb620d358b213a8p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x2.c679d1f73f0fb624d358b213a7p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624d358b213a8p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624d358b213a7p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624d358b213a8p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x5.96a7e12e0b98bcf90bb682a446p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf90bb682a446p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf90bb682a446p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf90bb682a448p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (-0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.11c35p-4", LIT (-0x3.11c35p-4), { LIT (-0x3.0d05831101b45004p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b45p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b45p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b45p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.b94a52e6913c2p-4", LIT (-0x3.b94a52e6913c2p-4), { LIT (-0x3.b0e3342ca965242cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca9652428p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca9652428p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.b94a54p-4", LIT (-0x3.b94a54p-4), { LIT (-0x3.b0e3353ec4c110c4p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c4p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.b94a5p-4", LIT (-0x3.b94a5p-4), { LIT (-0x3.b0e331596c7781fp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781ecp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781ecp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.bdeef4p-4", LIT (-0x3.bdeef4p-4), { LIT (-0x3.b568bf5eec676954p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676954p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec67695p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec67695p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x3.d26bb4p-4", LIT (-0x3.d26bb4p-4), { LIT (-0x3.c958d830129a2314p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a231p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a231p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a231p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4.39534p-4", LIT (-0x4.39534p-4), { LIT (-0x4.2d24ad5bedc89dbp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89da8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89da8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89da8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4.cfb9805a53a2065p-4", LIT (-0x4.cfb9805a53a2065p-4), { LIT (-0x4.bde0b78526931a3p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a3p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a28p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a28p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4.cfb9805a53a24p-4", LIT (-0x4.cfb9805a53a24p-4), { LIT (-0x4.bde0b7852693517p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693517p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526935168p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526935168p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4.cfb9805a53a2p-4", LIT (-0x4.cfb9805a53a2p-4), { LIT (-0x4.bde0b78526931428p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931428p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693142p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693142p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4.cfb988p-4", LIT (-0x4.cfb988p-4), { LIT (-0x4.bde0bed7e48ed178p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed178p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed17p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed17p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x4.cfb98p-4", LIT (-0x4.cfb98p-4), { LIT (-0x4.bde0b72ea681f6fp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e8p-4), ERRNO_UNCHANGED } },
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
    { "-0x5.a95683e302a71be8p-4", LIT (-0x5.a95683e302a71be8p-4), { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8988p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8988p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8988p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.a95683e302a71bfp-4", LIT (-0x5.a95683e302a71bfp-4), { LIT (-0x5.8cae53be0eeb8998p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.a95683e302a74p-4", LIT (-0x5.a95683e302a74p-4), { LIT (-0x5.8cae53be0eebab9p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab9p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab88p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.a95683e302a7p-4", LIT (-0x5.a95683e302a7p-4), { LIT (-0x5.8cae53be0eeb6f4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f38p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f38p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f38p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.a95688p-4", LIT (-0x5.a95688p-4), { LIT (-0x5.8cae579ebc7c886p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c886p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c8858p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c8858p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.a9568p-4", LIT (-0x5.a9568p-4), { LIT (-0x5.8cae501409e8838p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88378p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88378p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88378p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.cabae7a011e33d9p-4", LIT (-0x5.cabae7a011e33d9p-4), { LIT (-0x5.ac1eb633f2fd11f8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11fp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11fp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.cabae7a011e34p-4", LIT (-0x5.cabae7a011e34p-4), { LIT (-0x5.ac1eb633f2fd144p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd1438p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd1438p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd1438p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.cabae7a011e3p-4", LIT (-0x5.cabae7a011e3p-4), { LIT (-0x5.ac1eb633f2fcd81p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd81p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd808p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd808p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.cabae8p-4", LIT (-0x5.cabae8p-4), { LIT (-0x5.ac1eb68e26b132a8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x5.cabaep-4", LIT (-0x5.cabaep-4), { LIT (-0x5.ac1eaf0870dcb5p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb5p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4f8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4f8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x6.e26358p-4", LIT (-0x6.e26358p-4), { LIT (-0x6.b01863558de0abap-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0abap-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab98p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab98p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x7.63a06320c42e4p-4", LIT (-0x7.63a06320c42e4p-4), { LIT (-0x7.261f5cf40e169a4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a38p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a38p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x7.63a068p-4", LIT (-0x7.63a068p-4), { LIT (-0x7.261f61605eb6bd18p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd18p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd1p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd1p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x7.63a06p-4", LIT (-0x7.63a06p-4), { LIT (-0x7.261f5a1d1206f028p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f028p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f02p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f02p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x7.88bcc8p-4", LIT (-0x7.88bcc8p-4), { LIT (-0x7.47c17bbd7ba60748p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba60748p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba6074p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba6074p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0x7.fc7fc8p-8", LIT (-0x7.fc7fc8p-8), { LIT (-0x7.fc2aec03ed35ec5p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec5p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec48p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec48p-8), ERRNO_UNCHANGED } },
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
    { "-0xd.d62e8p+92", LIT (-0xd.d62e8p+92), { LIT (-0x4.3170acb265858008p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x2.c679d1f73f0fb624p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (-0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x5.96a7e12e0b98bdp+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xe.1a1b30bcea1366p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13661p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea1366p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13661p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+100", LIT (0x1p+100), { LIT (0x4.6020374c5c6db008p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db01p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db008p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db01p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+12", LIT (0x1p+12), { LIT (0x9.02cb37d5a78915bp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915cp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915bp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+24", LIT (0x1p+24), { LIT (0x1.1542457337d4321cp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321cp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321cp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+28", LIT (0x1p+28), { LIT (0x1.419ecb712c480c8ap+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8cp+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8ap+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+32", LIT (0x1p+32), { LIT (0x1.6dfb516f20bbeaf2p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf2p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf2p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+48", LIT (0x1p+48), { LIT (0x2.1f6d6966f28b649cp+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b64ap+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649cp+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b64ap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+500", LIT (0x1p+500), { LIT (0x1.5b4448e7fd9b091cp+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091ep+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091cp+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091ep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+5000", LIT (0x1p+5000), { LIT (0xd.8a6dd63831ae0fdp+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fep+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fdp+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+52", LIT (0x1p+52), { LIT (0x2.4bc9ef64e6ff4308p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff4308p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff4308p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff430cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+56", LIT (0x1p+56), { LIT (0x2.78267562db73217p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732174p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db73217p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732174p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x6.3d0317b6484b5458p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b546p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b5458p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b546p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-12", LIT (0x1p-12), { LIT (0xf.fffffd555556888p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556889p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556889p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-24", LIT (0x1p-24), { LIT (0xf.fffffffffffd555p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd555p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd555p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd556p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-28", LIT (0x1p-28), { LIT (0xf.fffffffffffffd5p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd5p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd5p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd6p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-32", LIT (0x1p-32), { LIT (0xf.fffffffffffffffp-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-48", LIT (0x1p-48), { LIT (0xf.fffffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-500", LIT (0x1p-500), { LIT (0xf.fffffffffffffffp-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-5000", LIT (0x1p-5000), { LIT (0xf.fffffffffffffffp-5004), ERRNO_UNCHANGED }, { LIT (0x1p-5000), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-5004), ERRNO_UNCHANGED }, { LIT (0x1p-5000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-52", LIT (0x1p-52), { LIT (0xf.fffffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-56", LIT (0x1p-56), { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p-8", LIT (0x1p-8), { LIT (0xf.fffd55568887d1ap-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1bp-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ap-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1bp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+12", LIT (0x2p+12), { LIT (0x9.b43d4f9d7958a5ep+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5ep+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5ep+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+24", LIT (0x2p+24), { LIT (0x1.205966f2b4f126b6p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b8p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b6p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+28", LIT (0x2p+28), { LIT (0x1.4cb5ecf0a9650422p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a9650424p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a9650422p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a9650424p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+32", LIT (0x2p+32), { LIT (0x1.791272ee9dd8e28cp+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28ep+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28cp+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+48", LIT (0x2p+48), { LIT (0x2.2a848ae66fa85c38p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c3cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+52", LIT (0x2p+52), { LIT (0x2.56e110e4641c3aap+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa4p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aap+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+56", LIT (0x2p+56), { LIT (0x2.833d96e25890190cp+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890191p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190cp+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890191p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+8", LIT (0x2p+8), { LIT (0x6.ee74ffae309ac0e8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0e8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0e8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-12", LIT (0x2p-12), { LIT (0x1.fffffeaaaaad111p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad1112p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad111p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad1112p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x1.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-28", LIT (0x2p-28), { LIT (0x1.fffffffffffffeaap-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaap-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaap-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeacp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-32", LIT (0x2p-32), { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-52", LIT (0x2p-52), { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-60", LIT (0x2p-60), { LIT (0x1.fffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4.08f3f8p-4", LIT (0x4.08f3f8p-4), { LIT (0x3.fe4e5b035250f72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f724p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4.08f3faac4284cp-4", LIT (0x4.08f3faac4284cp-4), { LIT (0x3.fe4e5d9acef73cdp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cdp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cdp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4.08f4p-4", LIT (0x4.08f4p-4), { LIT (0x3.fe4e62c525da5878p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587cp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da5878p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+24", LIT (0x4p+24), { LIT (0x1.2b708872320e1d9p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d92p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d9p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d92p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+28", LIT (0x4p+28), { LIT (0x1.57cd0e702681fbbcp+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbep+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbcp+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+48", LIT (0x4p+48), { LIT (0x2.359bac65ecc553dp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d4p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553dp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+52", LIT (0x4p+52), { LIT (0x2.61f83263e139323cp+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139324p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323cp+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139324p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+56", LIT (0x4p+56), { LIT (0x2.8e54b861d5ad10a8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10acp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p+8", LIT (0x4p+8), { LIT (0x7.9fe70ba603d23a6p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a6p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a6p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a68p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.fffff55555a2221cp-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2222p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221cp-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2222p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128", LIT (0x4p-128), { LIT (0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-128), ERRNO_UNCHANGED }, { LIT (0x4p-128), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x3.fffffffffffffff8p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x4p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-28", LIT (0x4p-28), { LIT (0x3.fffffffffffff554p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff554p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff554p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff558p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.fffffffffffffff4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff8p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-56", LIT (0x4p-56), { LIT (0x3.fffffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-60", LIT (0x4p-60), { LIT (0x3.fffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x6.4p+4", LIT (0x6.4p+4), { LIT (0x5.4c602a4f4f0a7ce8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cfp+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7ce8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cfp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x6.c92c08p-4", LIT (0x6.c92c08p-4), { LIT (0x6.98e810591e8c1c78p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c78p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c78p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x6.f4a93p-4", LIT (0x6.f4a93p-4), { LIT (0x6.c0dddeef5ea744dp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744dp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744dp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x7.d8e5a8p-4", LIT (0x7.d8e5a8p-4), { LIT (0x7.90009894e8091718p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e8091718p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e8091718p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809172p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+24", LIT (0x8p+24), { LIT (0x1.3687a9f1af2b14fcp+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fcp+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fcp+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.62e42fefa39ef356p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef358p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef356p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef358p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+48", LIT (0x8p+48), { LIT (0x2.40b2cde569e24b6cp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b7p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6cp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b7p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+52", LIT (0x8p+52), { LIT (0x2.6d0f53e35e5629d8p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d8p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d8p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629dcp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+56", LIT (0x8p+56), { LIT (0x2.996bd9e152ca0844p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca0844p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca0844p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca0848p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p+8", LIT (0x8p+8), { LIT (0x8.5159209dd5b834p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8341p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b834p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8341p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-12", LIT (0x8p-12), { LIT (0x7.ffffaaaab44442dp-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d8p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442dp-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d8p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16", LIT (0x8p-16), { LIT (0x7.ffffffaaaaaab44p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab448p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab44p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab448p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x0p+0), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffffaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaabp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-32", LIT (0x8p-32), { LIT (0x7.ffffffffffffffa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffbp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-36", LIT (0x8p-36), { LIT (0x7.fffffffffffffff8p-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-52", LIT (0x8p-52), { LIT (0x7.fffffffffffffff8p-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-56", LIT (0x8p-56), { LIT (0x7.fffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-60", LIT (0x8p-60), { LIT (0x7.fffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xap+0", LIT (0xap+0), { LIT (0x2.ff8b8a0da57b5aap+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa4p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aap+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xb.17217f7d1cf79abp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79acp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79acp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0xe.823764bfd1e5fa3p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa3p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa3p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.96c69p-8", LIT (0xf.96c69p-8), { LIT (0xf.94503821fcc6aeap-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aebp-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aeap-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aebp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bdp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0", LIT (-0x0p+0), { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED }, { LIT (-0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x2p-16384", LIT (-0x2p-16384), { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (-0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.11c35p-4", LIT (-0x3.11c35p-4), { LIT (-0x3.0d05831101b45004p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b45p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b45p-4), ERRNO_UNCHANGED }, { LIT (-0x3.0d05831101b45p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.b94a52e6913c2p-4", LIT (-0x3.b94a52e6913c2p-4), { LIT (-0x3.b0e3342ca965242cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca965242cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca9652428p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3342ca9652428p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.b94a54p-4", LIT (-0x3.b94a54p-4), { LIT (-0x3.b0e3353ec4c110c4p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110c4p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110cp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e3353ec4c110cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.b94a5p-4", LIT (-0x3.b94a5p-4), { LIT (-0x3.b0e331596c7781fp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781ecp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781ecp-4), ERRNO_UNCHANGED }, { LIT (-0x3.b0e331596c7781ecp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.bdeef4p-4", LIT (-0x3.bdeef4p-4), { LIT (-0x3.b568bf5eec676954p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec676954p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec67695p-4), ERRNO_UNCHANGED }, { LIT (-0x3.b568bf5eec67695p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x3.d26bb4p-4", LIT (-0x3.d26bb4p-4), { LIT (-0x3.c958d830129a2314p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a231p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a231p-4), ERRNO_UNCHANGED }, { LIT (-0x3.c958d830129a231p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4.39534p-4", LIT (-0x4.39534p-4), { LIT (-0x4.2d24ad5bedc89dbp-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89da8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89da8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.2d24ad5bedc89da8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4.cfb9805a53a2065p-4", LIT (-0x4.cfb9805a53a2065p-4), { LIT (-0x4.bde0b78526931a3p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a3p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a28p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931a28p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4.cfb9805a53a24p-4", LIT (-0x4.cfb9805a53a24p-4), { LIT (-0x4.bde0b7852693517p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693517p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526935168p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526935168p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4.cfb9805a53a2p-4", LIT (-0x4.cfb9805a53a2p-4), { LIT (-0x4.bde0b78526931428p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b78526931428p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693142p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b7852693142p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4.cfb988p-4", LIT (-0x4.cfb988p-4), { LIT (-0x4.bde0bed7e48ed178p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed178p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed17p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0bed7e48ed17p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x4.cfb98p-4", LIT (-0x4.cfb98p-4), { LIT (-0x4.bde0b72ea681f6fp-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e8p-4), ERRNO_UNCHANGED }, { LIT (-0x4.bde0b72ea681f6e8p-4), ERRNO_UNCHANGED } },
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
    { "-0x5.a95683e302a71be8p-4", LIT (-0x5.a95683e302a71be8p-4), { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8988p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8988p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb8988p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.a95683e302a71bfp-4", LIT (-0x5.a95683e302a71bfp-4), { LIT (-0x5.8cae53be0eeb8998p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb899p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.a95683e302a74p-4", LIT (-0x5.a95683e302a74p-4), { LIT (-0x5.8cae53be0eebab9p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab9p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab88p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eebab88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.a95683e302a7p-4", LIT (-0x5.a95683e302a7p-4), { LIT (-0x5.8cae53be0eeb6f4p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f38p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f38p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae53be0eeb6f38p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.a95688p-4", LIT (-0x5.a95688p-4), { LIT (-0x5.8cae579ebc7c886p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c886p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c8858p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae579ebc7c8858p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.a9568p-4", LIT (-0x5.a9568p-4), { LIT (-0x5.8cae501409e8838p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88378p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88378p-4), ERRNO_UNCHANGED }, { LIT (-0x5.8cae501409e88378p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.cabae7a011e33d9p-4", LIT (-0x5.cabae7a011e33d9p-4), { LIT (-0x5.ac1eb633f2fd11f8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11fp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11fp-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd11fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.cabae7a011e34p-4", LIT (-0x5.cabae7a011e34p-4), { LIT (-0x5.ac1eb633f2fd144p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd1438p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd1438p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fd1438p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.cabae7a011e3p-4", LIT (-0x5.cabae7a011e3p-4), { LIT (-0x5.ac1eb633f2fcd81p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd81p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd808p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb633f2fcd808p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.cabae8p-4", LIT (-0x5.cabae8p-4), { LIT (-0x5.ac1eb68e26b132a8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132a8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132ap-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eb68e26b132ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x5.cabaep-4", LIT (-0x5.cabaep-4), { LIT (-0x5.ac1eaf0870dcb5p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb5p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4f8p-4), ERRNO_UNCHANGED }, { LIT (-0x5.ac1eaf0870dcb4f8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x6.e26358p-4", LIT (-0x6.e26358p-4), { LIT (-0x6.b01863558de0abap-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0abap-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab98p-4), ERRNO_UNCHANGED }, { LIT (-0x6.b01863558de0ab98p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x7.63a06320c42e4p-4", LIT (-0x7.63a06320c42e4p-4), { LIT (-0x7.261f5cf40e169a4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a38p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5cf40e169a38p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x7.63a068p-4", LIT (-0x7.63a068p-4), { LIT (-0x7.261f61605eb6bd18p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd18p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd1p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f61605eb6bd1p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x7.63a06p-4", LIT (-0x7.63a06p-4), { LIT (-0x7.261f5a1d1206f028p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f028p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f02p-4), ERRNO_UNCHANGED }, { LIT (-0x7.261f5a1d1206f02p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x7.88bcc8p-4", LIT (-0x7.88bcc8p-4), { LIT (-0x7.47c17bbd7ba60748p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba60748p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba6074p-4), ERRNO_UNCHANGED }, { LIT (-0x7.47c17bbd7ba6074p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0x7.fc7fc8p-8", LIT (-0x7.fc7fc8p-8), { LIT (-0x7.fc2aec03ed35ec5p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec5p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec48p-8), ERRNO_UNCHANGED }, { LIT (-0x7.fc2aec03ed35ec48p-8), ERRNO_UNCHANGED } },
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
    { "-0xd.d62e8p+92", LIT (-0xd.d62e8p+92), { LIT (-0x4.3170acb265858008p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED }, { LIT (-0x4.3170acb265858p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.ffffffffffff8p+1020", LIT (-0xf.ffffffffffff8p+1020), { LIT (-0x2.c679d1f73f0fb624p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (-0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.fffffffffffffffp+16380", LIT (-0xf.fffffffffffffffp+16380), { LIT (-0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED }, { LIT (-0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "-0xf.fffffp+124", LIT (-0xf.fffffp+124), { LIT (-0x5.96a7e12e0b98bdp+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (-0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "+0", LIT (0x0p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0xe.1a1b30bcea1366p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13661p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea1366p-4), ERRNO_UNCHANGED }, { LIT (0xe.1a1b30bcea13661p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+100", LIT (0x1p+100), { LIT (0x4.6020374c5c6db008p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db01p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db008p+4), ERRNO_UNCHANGED }, { LIT (0x4.6020374c5c6db01p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+12", LIT (0x1p+12), { LIT (0x9.02cb37d5a78915bp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915cp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915bp+0), ERRNO_UNCHANGED }, { LIT (0x9.02cb37d5a78915cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+24", LIT (0x1p+24), { LIT (0x1.1542457337d4321cp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321cp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321cp+4), ERRNO_UNCHANGED }, { LIT (0x1.1542457337d4321ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+28", LIT (0x1p+28), { LIT (0x1.419ecb712c480c8ap+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8cp+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8ap+4), ERRNO_UNCHANGED }, { LIT (0x1.419ecb712c480c8cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+32", LIT (0x1p+32), { LIT (0x1.6dfb516f20bbeaf2p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf2p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf2p+4), ERRNO_UNCHANGED }, { LIT (0x1.6dfb516f20bbeaf4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+48", LIT (0x1p+48), { LIT (0x2.1f6d6966f28b649cp+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b64ap+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b649cp+4), ERRNO_UNCHANGED }, { LIT (0x2.1f6d6966f28b64ap+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+500", LIT (0x1p+500), { LIT (0x1.5b4448e7fd9b091cp+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091ep+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091cp+8), ERRNO_UNCHANGED }, { LIT (0x1.5b4448e7fd9b091ep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+5000", LIT (0x1p+5000), { LIT (0xd.8a6dd63831ae0fdp+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fep+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fdp+8), ERRNO_UNCHANGED }, { LIT (0xd.8a6dd63831ae0fep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+52", LIT (0x1p+52), { LIT (0x2.4bc9ef64e6ff4308p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff4308p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff4308p+4), ERRNO_UNCHANGED }, { LIT (0x2.4bc9ef64e6ff430cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+56", LIT (0x1p+56), { LIT (0x2.78267562db73217p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732174p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db73217p+4), ERRNO_UNCHANGED }, { LIT (0x2.78267562db732174p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x6.3d0317b6484b5458p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b546p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b5458p+0), ERRNO_UNCHANGED }, { LIT (0x6.3d0317b6484b546p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-100", LIT (0x1p-100), { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-104), ERRNO_UNCHANGED }, { LIT (0x1p-100), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-12", LIT (0x1p-12), { LIT (0xf.fffffd555556888p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556889p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556888p-16), ERRNO_UNCHANGED }, { LIT (0xf.fffffd555556889p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-24", LIT (0x1p-24), { LIT (0xf.fffffffffffd555p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd555p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd555p-28), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffd556p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-28", LIT (0x1p-28), { LIT (0xf.fffffffffffffd5p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd5p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd5p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffd6p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-32", LIT (0x1p-32), { LIT (0xf.fffffffffffffffp-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-36), ERRNO_UNCHANGED }, { LIT (0x1p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-48", LIT (0x1p-48), { LIT (0xf.fffffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-52), ERRNO_UNCHANGED }, { LIT (0x1p-48), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-500", LIT (0x1p-500), { LIT (0xf.fffffffffffffffp-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-504), ERRNO_UNCHANGED }, { LIT (0x1p-500), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-5000", LIT (0x1p-5000), { LIT (0xf.fffffffffffffffp-5004), ERRNO_UNCHANGED }, { LIT (0x1p-5000), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-5004), ERRNO_UNCHANGED }, { LIT (0x1p-5000), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-52", LIT (0x1p-52), { LIT (0xf.fffffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-56), ERRNO_UNCHANGED }, { LIT (0x1p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-56", LIT (0x1p-56), { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED }, { LIT (0xf.fffffffffffffffp-60), ERRNO_UNCHANGED }, { LIT (0x1p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p-8", LIT (0x1p-8), { LIT (0xf.fffd55568887d1ap-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1bp-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1ap-12), ERRNO_UNCHANGED }, { LIT (0xf.fffd55568887d1bp-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+12", LIT (0x2p+12), { LIT (0x9.b43d4f9d7958a5ep+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5ep+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5ep+0), ERRNO_UNCHANGED }, { LIT (0x9.b43d4f9d7958a5fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+24", LIT (0x2p+24), { LIT (0x1.205966f2b4f126b6p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b8p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b6p+4), ERRNO_UNCHANGED }, { LIT (0x1.205966f2b4f126b8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+28", LIT (0x2p+28), { LIT (0x1.4cb5ecf0a9650422p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a9650424p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a9650422p+4), ERRNO_UNCHANGED }, { LIT (0x1.4cb5ecf0a9650424p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+32", LIT (0x2p+32), { LIT (0x1.791272ee9dd8e28cp+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28ep+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28cp+4), ERRNO_UNCHANGED }, { LIT (0x1.791272ee9dd8e28ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+48", LIT (0x2p+48), { LIT (0x2.2a848ae66fa85c38p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c38p+4), ERRNO_UNCHANGED }, { LIT (0x2.2a848ae66fa85c3cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+52", LIT (0x2p+52), { LIT (0x2.56e110e4641c3aap+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa4p+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aap+4), ERRNO_UNCHANGED }, { LIT (0x2.56e110e4641c3aa4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+56", LIT (0x2p+56), { LIT (0x2.833d96e25890190cp+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890191p+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890190cp+4), ERRNO_UNCHANGED }, { LIT (0x2.833d96e25890191p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+8", LIT (0x2p+8), { LIT (0x6.ee74ffae309ac0e8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0e8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0e8p+0), ERRNO_UNCHANGED }, { LIT (0x6.ee74ffae309ac0fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-12", LIT (0x2p-12), { LIT (0x1.fffffeaaaaad111p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad1112p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad111p-12), ERRNO_UNCHANGED }, { LIT (0x1.fffffeaaaaad1112p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x1.fffffffffffffffcp-16384), UNDERFLOW_EXCEPTION_OK }, { LIT (0x2p-16384), UNDERFLOW_EXCEPTION_OK } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-28", LIT (0x2p-28), { LIT (0x1.fffffffffffffeaap-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaap-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeaap-28), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffeacp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-32", LIT (0x2p-32), { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-32), ERRNO_UNCHANGED }, { LIT (0x2p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-52", LIT (0x2p-52), { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-52), ERRNO_UNCHANGED }, { LIT (0x2p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-56", LIT (0x2p-56), { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-56), ERRNO_UNCHANGED }, { LIT (0x2p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-60", LIT (0x2p-60), { LIT (0x1.fffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED }, { LIT (0x1.fffffffffffffffep-60), ERRNO_UNCHANGED }, { LIT (0x2p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4.08f3f8p-4", LIT (0x4.08f3f8p-4), { LIT (0x3.fe4e5b035250f72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f72p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5b035250f724p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4.08f3faac4284cp-4", LIT (0x4.08f3faac4284cp-4), { LIT (0x3.fe4e5d9acef73cdp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cdp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cdp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e5d9acef73cd4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4.08f4p-4", LIT (0x4.08f4p-4), { LIT (0x3.fe4e62c525da5878p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587cp-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da5878p-4), ERRNO_UNCHANGED }, { LIT (0x3.fe4e62c525da587cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+24", LIT (0x4p+24), { LIT (0x1.2b708872320e1d9p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d92p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d9p+4), ERRNO_UNCHANGED }, { LIT (0x1.2b708872320e1d92p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+28", LIT (0x4p+28), { LIT (0x1.57cd0e702681fbbcp+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbep+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbcp+4), ERRNO_UNCHANGED }, { LIT (0x1.57cd0e702681fbbep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+48", LIT (0x4p+48), { LIT (0x2.359bac65ecc553dp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d4p+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553dp+4), ERRNO_UNCHANGED }, { LIT (0x2.359bac65ecc553d4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+52", LIT (0x4p+52), { LIT (0x2.61f83263e139323cp+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139324p+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139323cp+4), ERRNO_UNCHANGED }, { LIT (0x2.61f83263e139324p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+56", LIT (0x4p+56), { LIT (0x2.8e54b861d5ad10a8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10a8p+4), ERRNO_UNCHANGED }, { LIT (0x2.8e54b861d5ad10acp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p+8", LIT (0x4p+8), { LIT (0x7.9fe70ba603d23a6p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a6p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a6p+0), ERRNO_UNCHANGED }, { LIT (0x7.9fe70ba603d23a68p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1024), ERRNO_UNCHANGED }, { LIT (0x4p-1024), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-1076), ERRNO_UNCHANGED }, { LIT (0x4p-1076), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-12", LIT (0x4p-12), { LIT (0x3.fffff55555a2221cp-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2222p-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2221cp-12), ERRNO_UNCHANGED }, { LIT (0x3.fffff55555a2222p-12), ERRNO_UNCHANGED } },
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
    { "0x4p-28", LIT (0x4p-28), { LIT (0x3.fffffffffffff554p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff554p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff554p-28), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffff558p-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-32", LIT (0x4p-32), { LIT (0x3.fffffffffffffff4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p-32), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff8p-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-52", LIT (0x4p-52), { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-52), ERRNO_UNCHANGED }, { LIT (0x4p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-56", LIT (0x4p-56), { LIT (0x3.fffffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-56), ERRNO_UNCHANGED }, { LIT (0x4p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-60", LIT (0x4p-60), { LIT (0x3.fffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp-60), ERRNO_UNCHANGED }, { LIT (0x4p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x6.4p+4", LIT (0x6.4p+4), { LIT (0x5.4c602a4f4f0a7ce8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cfp+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7ce8p+0), ERRNO_UNCHANGED }, { LIT (0x5.4c602a4f4f0a7cfp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x6.c92c08p-4", LIT (0x6.c92c08p-4), { LIT (0x6.98e810591e8c1c78p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c78p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c78p-4), ERRNO_UNCHANGED }, { LIT (0x6.98e810591e8c1c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x6.f4a93p-4", LIT (0x6.f4a93p-4), { LIT (0x6.c0dddeef5ea744dp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744dp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744dp-4), ERRNO_UNCHANGED }, { LIT (0x6.c0dddeef5ea744d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x7.d8e5a8p-4", LIT (0x7.d8e5a8p-4), { LIT (0x7.90009894e8091718p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e8091718p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e8091718p-4), ERRNO_UNCHANGED }, { LIT (0x7.90009894e809172p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+24", LIT (0x8p+24), { LIT (0x1.3687a9f1af2b14fcp+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fcp+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fcp+4), ERRNO_UNCHANGED }, { LIT (0x1.3687a9f1af2b14fep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+28", LIT (0x8p+28), { LIT (0x1.62e42fefa39ef356p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef358p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef356p+4), ERRNO_UNCHANGED }, { LIT (0x1.62e42fefa39ef358p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+48", LIT (0x8p+48), { LIT (0x2.40b2cde569e24b6cp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b7p+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b6cp+4), ERRNO_UNCHANGED }, { LIT (0x2.40b2cde569e24b7p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+52", LIT (0x8p+52), { LIT (0x2.6d0f53e35e5629d8p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d8p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629d8p+4), ERRNO_UNCHANGED }, { LIT (0x2.6d0f53e35e5629dcp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+56", LIT (0x8p+56), { LIT (0x2.996bd9e152ca0844p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca0844p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca0844p+4), ERRNO_UNCHANGED }, { LIT (0x2.996bd9e152ca0848p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p+8", LIT (0x8p+8), { LIT (0x8.5159209dd5b834p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8341p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b834p+0), ERRNO_UNCHANGED }, { LIT (0x8.5159209dd5b8341p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-12", LIT (0x8p-12), { LIT (0x7.ffffaaaab44442dp-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d8p-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442dp-12), ERRNO_UNCHANGED }, { LIT (0x7.ffffaaaab44442d8p-12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152", LIT (0x8p-152), { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-152), ERRNO_UNCHANGED }, { LIT (0x8p-152), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16", LIT (0x8p-16), { LIT (0x7.ffffffaaaaaab44p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab448p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab44p-16), ERRNO_UNCHANGED }, { LIT (0x7.ffffffaaaaaab448p-16), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x4p-16448), UNDERFLOW_EXCEPTION }, { LIT (0x8p-16448), UNDERFLOW_EXCEPTION } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-28", LIT (0x8p-28), { LIT (0x7.ffffffffffffaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaaa8p-28), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffaabp-28), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-32", LIT (0x8p-32), { LIT (0x7.ffffffffffffffa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffa8p-32), ERRNO_UNCHANGED }, { LIT (0x7.ffffffffffffffbp-32), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-36", LIT (0x8p-36), { LIT (0x7.fffffffffffffff8p-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-36), ERRNO_UNCHANGED }, { LIT (0x8p-36), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-52", LIT (0x8p-52), { LIT (0x7.fffffffffffffff8p-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-52), ERRNO_UNCHANGED }, { LIT (0x8p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-56", LIT (0x8p-56), { LIT (0x7.fffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-56), ERRNO_UNCHANGED }, { LIT (0x8p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-60", LIT (0x8p-60), { LIT (0x7.fffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-60), ERRNO_UNCHANGED }, { LIT (0x8p-60), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972", LIT (0x8p-972), { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED }, { LIT (0x7.fffffffffffffff8p-972), ERRNO_UNCHANGED }, { LIT (0x8p-972), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xap+0", LIT (0xap+0), { LIT (0x2.ff8b8a0da57b5aap+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa4p+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aap+0), ERRNO_UNCHANGED }, { LIT (0x2.ff8b8a0da57b5aa4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4", LIT (0xcp-4), { LIT (0xb.17217f7d1cf79abp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79acp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79abp-4), ERRNO_UNCHANGED }, { LIT (0xb.17217f7d1cf79acp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.424p+16", LIT (0xf.424p+16), { LIT (0xe.823764bfd1e5fa3p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa3p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa3p+0), ERRNO_UNCHANGED }, { LIT (0xe.823764bfd1e5fa4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.96c69p-8", LIT (0xf.96c69p-8), { LIT (0xf.94503821fcc6aeap-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aebp-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aeap-8), ERRNO_UNCHANGED }, { LIT (0xf.94503821fcc6aebp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb62p+8), ERRNO_UNCHANGED }, { LIT (0x2.c679d1f73f0fb624p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a4p+12), ERRNO_UNCHANGED }, { LIT (0x2.c5d37700c6bb03a8p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bcf8p+4), ERRNO_UNCHANGED }, { LIT (0x5.96a7e12e0b98bdp+4), ERRNO_UNCHANGED } },
#endif
  };

static void
asinh_test (void)
{
  ALL_RM_TEST (asinh, 0, asinh_test_data, RUN_TEST_LOOP_f_f, END);
}

static void
do_test (void)
{
  asinh_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
