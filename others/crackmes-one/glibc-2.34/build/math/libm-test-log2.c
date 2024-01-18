/* Test log2.
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

static const struct test_f_f_data log2_test_data[] =
  {
    { "0", 0, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },
    { "-0", minus_zero, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE }, { minus_infty, DIVIDE_BY_ZERO_EXCEPTION|ERRNO_ERANGE } },

    { "-1", -1, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-min_subnorm_value", -min_subnorm_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-min_value", -min_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-max_value", -max_value, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },
    { "-inf", minus_infty, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM }, { qnan_value, INVALID_EXCEPTION|ERRNO_EDOM } },

    { "inf", plus_infty, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED }, { plus_infty, ERRNO_UNCHANGED } },
    { "qNaN", qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "-qNaN", -qnan_value, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED }, { qnan_value, NO_INEXACT_EXCEPTION|ERRNO_UNCHANGED } },
    { "sNaN", snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },
    { "-sNaN", -snan_value, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION }, { qnan_value, TEST_SNAN|INVALID_EXCEPTION } },

#if (TEST_COND_binary128)
    { "0x1.0000000000000000000000000001p+0", LIT (0x1.0000000000000000000000000001p+0), { LIT (0x1.71547652b82fe1777d0ffda0d239p-112), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d23ap-112), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d239p-112), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d23ap-112), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.000000000000000000000000008p+0", LIT (0x1.000000000000000000000000008p+0), { LIT (0xb.8aa3b295c17f0bbbe87fed068efp-108), ERRNO_UNCHANGED }, { LIT (0xb.8aa3b295c17f0bbbe87fed068efp-108), ERRNO_UNCHANGED }, { LIT (0xb.8aa3b295c17f0bbbe87fed068efp-108), ERRNO_UNCHANGED }, { LIT (0xb.8aa3b295c17f0bbbe87fed068ef8p-108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.0000000000000002p+0", LIT (0x1.0000000000000002p+0), { LIT (0x2.e2a8eca5705fc2ec17770e9c3414p-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ec17770e9c3416p-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ec17770e9c3414p-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ec17770e9c3416p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.0000000000001p+0", LIT (0x1.0000000000001p+0), { LIT (0x1.71547652b82fd5ecd95d67df53a9p-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecd95d67df53aap-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecd95d67df53a9p-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecd95d67df53aap-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.000002p+0", LIT (0x1.000002p+0), { LIT (0x2.e2a8e9c2c776f65fd01efaf723e2p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65fd01efaf723e4p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65fd01efaf723e2p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65fd01efaf723e4p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.07465ap+0", LIT (0x1.07465ap+0), { LIT (0xa.5956764b14a9d7da921863b84ba8p-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7da921863b84bbp-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7da921863b84ba8p-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7da921863b84bbp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.07465bdc7e41b52ep+0", LIT (0x1.07465bdc7e41b52ep+0), { LIT (0xa.595912bb7fefddcbce0cb3878e3p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcbce0cb3878e3p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcbce0cb3878e3p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcbce0cb3878e38p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.07465bdc7e41bp+0", LIT (0x1.07465bdc7e41bp+0), { LIT (0xa.595912bb7fe899a4a195bab6756p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899a4a195bab67568p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899a4a195bab6756p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899a4a195bab67568p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.07465bdc7e41cp+0", LIT (0x1.07465bdc7e41cp+0), { LIT (0xa.595912bb7fff0ba2d9d999b5e91p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0ba2d9d999b5e918p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0ba2d9d999b5e91p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0ba2d9d999b5e918p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.07465cp+0", LIT (0x1.07465cp+0), { LIT (0xa.5959448ade0bdcb61198f8dd2668p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcb61198f8dd2668p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcb61198f8dd2668p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcb61198f8dd267p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.0a588ep+0", LIT (0x1.0a588ep+0), { LIT (0xe.a1dd43a221d02a32622e9cba02cp-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a32622e9cba02cp-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a32622e9cba02cp-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a32622e9cba02c8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.28d3b4p+0", LIT (0x1.28d3b4p+0), { LIT (0x3.6a6846287159ceb1f8d965deea72p-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb1f8d965deea72p-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb1f8d965deea72p-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb1f8d965deea74p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.4fe37ep+0", LIT (0x1.4fe37ep+0), { LIT (0x6.44f92e0fda7d1b46e2bc2dcfa984p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b46e2bc2dcfa988p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b46e2bc2dcfa984p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b46e2bc2dcfa988p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.63d202d04392cp+0", LIT (0x1.63d202d04392cp+0), { LIT (0x7.999f16e03b54e0f55354326ba2c4p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f55354326ba2c8p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f55354326ba2c4p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f55354326ba2c8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.63d202p+0", LIT (0x1.63d202p+0), { LIT (0x7.999f095d7e150199097308f7442p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150199097308f7442p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150199097308f7442p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150199097308f74424p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1.63d204p+0", LIT (0x1.63d204p+0), { LIT (0x7.999f2a94857b22e23de191021e94p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e23de191021e94p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e23de191021e94p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e23de191021e98p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+4", LIT (0x1p+4), { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed2a68p+0", LIT (0x2.b7e151628aed2a68p+0), { LIT (0x1.71547652b82fe17607b8015c0d7ep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17607b8015c0d7ep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17607b8015c0d7ep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17607b8015c0d7fp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed2a6abf7158809cf4p+0", LIT (0x2.b7e151628aed2a6abf7158809cf4p+0), { LIT (0x1.71547652b82fe1777d0ffda0d239p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d23ap+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d239p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d23ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed2a6abf7158809cf6p+0", LIT (0x2.b7e151628aed2a6abf7158809cf6p+0), { LIT (0x1.71547652b82fe1777d0ffda0d23bp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d23bp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d23bp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d23cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed2a6abf7158809cp+0", LIT (0x2.b7e151628aed2a6abf7158809cp+0), { LIT (0x1.71547652b82fe1777d0ffda0d1b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d1b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d1b8p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d1b9p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed2a6abf7158809dp+0", LIT (0x2.b7e151628aed2a6abf7158809dp+0), { LIT (0x1.71547652b82fe1777d0ffda0d24p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d24p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d24p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d241p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed2a6cp+0", LIT (0x2.b7e151628aed2a6cp+0), { LIT (0x1.71547652b82fe1782731bf3f6b29p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1782731bf3f6b29p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1782731bf3f6b29p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1782731bf3f6b2ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed2p+0", LIT (0x2.b7e151628aed2p+0), { LIT (0x1.71547652b82fdbf024ffffda5e62p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf024ffffda5e62p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf024ffffda5e62p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf024ffffda5e63p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e151628aed4p+0", LIT (0x2.b7e151628aed4p+0), { LIT (0x1.71547652b82fecebf2ef1ac7b6ddp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fecebf2ef1ac7b6dep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fecebf2ef1ac7b6ddp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fecebf2ef1ac7b6dep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e154p+0", LIT (0x2.b7e154p+0), { LIT (0x1.715477b6069b2d4b70c9ce6a329p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4b70c9ce6a329p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4b70c9ce6a329p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4b70c9ce6a3291p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2.b7e15p+0", LIT (0x2.b7e15p+0), { LIT (0x1.715475968cddc4e6c2b1cbd1a7c7p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6c2b1cbd1a7c8p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6c2b1cbd1a7c7p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6c2b1cbd1a7c8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x3.9b0754p+8", LIT (0x3.9b0754p+8), { LIT (0x9.d9a8c6de3432bff9b0fef9633f8p+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bff9b0fef9633f8p+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bff9b0fef9633f8p+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bff9b0fef9633f88p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-128", LIT (0x4p-128), { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (-0x4.03ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.03ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.03ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.03ep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x4p-16496", LIT (0x4p-16496), { LIT (-0x4.06ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.06ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.06ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.06ep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-152", LIT (0x8p-152), { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0x8p-972", LIT (0x8p-972), { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54170d5cfa8f8p-4", LIT (0xb.54170d5cfa8f8p-4), { LIT (-0x7.f84a998412a53b78ea4938468ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78ea4938468dfcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78ea4938468dfcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78ea4938468dfcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54170d5cfa8fd72a47d6bda19068p-4", LIT (0xb.54170d5cfa8fd72a47d6bda19068p-4), { LIT (-0x7.f84a998412a489dce921cd17e614p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e614p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e61p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e61p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54170d5cfa8fd72a47d6bda194p-4", LIT (0xb.54170d5cfa8fd72a47d6bda194p-4), { LIT (-0x7.f84a998412a489dce921cd17dec4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17decp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17decp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17decp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54170d5cfa8fd72a47d6bda19p-4", LIT (0xb.54170d5cfa8fd72a47d6bda19p-4), { LIT (-0x7.f84a998412a489dce921cd17e6e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e6e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e6e4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e6e4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54170d5cfa8fd72p-4", LIT (0xb.54170d5cfa8fd72p-4), { LIT (-0x7.f84a998412a489f1dbd12ebaa208p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489f1dbd12ebaa208p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489f1dbd12ebaa204p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489f1dbd12ebaa204p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54170d5cfa8fd73p-4", LIT (0xb.54170d5cfa8fd73p-4), { LIT (-0x7.f84a998412a489d141bab11c0c34p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489d141bab11c0c3p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489d141bab11c0c3p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489d141bab11c0c3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54170d5cfa9p-4", LIT (0xb.54170d5cfa9p-4), { LIT (-0x7.f84a998412a436a8365c4397d8fcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8365c4397d8f8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8365c4397d8f8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8365c4397d8f8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.54171p-4", LIT (0xb.54171p-4), { LIT (-0x7.f84a9424a2fba583bbaf3ba7a544p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba583bbaf3ba7a54p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba583bbaf3ba7a54p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba583bbaf3ba7a54p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.5417p-4", LIT (0xb.5417p-4), { LIT (-0x7.f84ab4beb988b35b6eb65af72e5cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b35b6eb65af72e58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b35b6eb65af72e58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b35b6eb65af72e58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.56f63c18e93e8p-4", LIT (0xb.56f63c18e93e8p-4), { LIT (-0x7.f27151a15d71d5e90939366e069cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e90939366e0698p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e90939366e0698p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e90939366e0698p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.56f63c18e93eecdp-4", LIT (0xb.56f63c18e93eecdp-4), { LIT (-0x7.f27151a15d70f86944dd429073p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f86944dd429073p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f86944dd429072fcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f86944dd429072fcp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.56f63c18e93fp-4", LIT (0xb.56f63c18e93fp-4), { LIT (-0x7.f27151a15d70d15a62a4c18ae808p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d15a62a4c18ae804p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d15a62a4c18ae804p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d15a62a4c18ae804p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.56f63p-4", LIT (0xb.56f63p-4), { LIT (-0x7.f2716a4172a70437981d6d2faa1p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70437981d6d2faa0cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70437981d6d2faa0cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70437981d6d2faa0cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.56f64p-4", LIT (0xb.56f64p-4), { LIT (-0x7.f27149af9dc8b0f1993d141d1a5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0f1993d141d1a5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0f1993d141d1a4cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0f1993d141d1a4cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.5bf82dc51f02035p-4", LIT (0xb.5bf82dc51f02035p-4), { LIT (-0x7.e8420994680ea2d70a67a2d80578p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d70a67a2d80578p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d70a67a2d80574p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d70a67a2d80574p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.5bf82dc51f028p-4", LIT (0xb.5bf82dc51f028p-4), { LIT (-0x7.e8420994680da57678fdcfd1bea8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57678fdcfd1bea8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57678fdcfd1bea4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57678fdcfd1bea4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.5bf82dc51f02p-4", LIT (0xb.5bf82dc51f02p-4), { LIT (-0x7.e8420994680ea992427e9806625cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea992427e98066258p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea992427e98066258p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea992427e98066258p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.5bf82p-4", LIT (0xb.5bf82p-4), { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f0858p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f0854p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f0854p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f0854p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.5bf83p-4", LIT (0xb.5bf83p-4), { LIT (-0x7.e842050c531d02307168b728f46p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d02307168b728f45cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d02307168b728f45cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d02307168b728f45cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.7704dc9beb05p-4", LIT (0xb.7704dc9beb05p-4), { LIT (-0x7.b18b723cc4c4faeb8adda8e96a08p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4faeb8adda8e96a08p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4faeb8adda8e96a04p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4faeb8adda8e96a04p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.7704dp-4", LIT (0xb.7704dp-4), { LIT (-0x7.b18b8b9fc309de4f9564e0281104p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de4f9564e0281104p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de4f9564e02811p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de4f9564e02811p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.7704ep-4", LIT (0xb.7704ep-4), { LIT (-0x7.b18b6b68ffa235098af8c5c4f5d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa235098af8c5c4f5d4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa235098af8c5c4f5d4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa235098af8c5c4f5d4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.e132ap-4", LIT (0xb.e132ap-4), { LIT (-0x6.df8b2c2c5ea400001520bc941b0cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea400001520bc941b08p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea400001520bc941b08p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea400001520bc941b08p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xb.e77c6p-4", LIT (0xb.e77c6p-4), { LIT (-0x6.d35688edc44a495fd74b5e1b8dap-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a495fd74b5e1b8d9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a495fd74b5e1b8d9cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a495fd74b5e1b8d9cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xcp-4", LIT (0xcp-4), { LIT (-0x6.a3fe5c6042978605ff4edf5f9748p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978605ff4edf5f9744p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978605ff4edf5f9744p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978605ff4edf5f9744p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xe.d99dap-4", LIT (0xe.d99dap-4), { LIT (-0x1.b8bdee5bd428254ebf7ead086211p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ebf7ead086211p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ebf7ead08621p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ebf7ead08621p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.4dfb4p-48", LIT (0xf.4dfb4p-48), { LIT (-0x2.c106931f2bfd0af427fc474396b2p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af427fc474396bp+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af427fc474396bp+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af427fc474396bp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.d9ce0b1a50e08p-4", LIT (0xf.d9ce0b1a50e08p-4), { LIT (-0x3.75ccb13d89cc66ee72a7e068c0eap-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ee72a7e068c0eap-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ee72a7e068c0e8p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ee72a7e068c0e8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.d9ce1p-4", LIT (0xf.d9ce1p-4), { LIT (-0x3.75cc3f2233d65c71f491713f54cap-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c71f491713f54c8p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c71f491713f54c8p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c71f491713f54c8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.d9cep-4", LIT (0xf.d9cep-4), { LIT (-0x3.75cdb3f0a0b655972857a48ecdfap-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b655972857a48ecdfap-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b655972857a48ecdf8p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b655972857a48ecdf8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x3.fffffffffffffff4755c4d6a3e8p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4755c4d6a3e8p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4755c4d6a3e8p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4755c4d6a3e82p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffff8p-4", LIT (0xf.ffffffffffff8p-4), { LIT (-0xb.8aa3b295c17f39e6774a440c8fp-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39e6774a440c8ef8p-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39e6774a440c8ef8p-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39e6774a440c8ef8p-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x3.fffffffffffffffa3aae26b51f4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffa3aae26b51f4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffa3aae26b51f4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffa3aae26b51f42p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffffffffffffcp-4", LIT (0xf.fffffffffffffffffffffffffcp-4), { LIT (-0x5.c551d94ae0bf85ddf43ff68349a4p-108), ERRNO_UNCHANGED }, { LIT (-0x5.c551d94ae0bf85ddf43ff68349a4p-108), ERRNO_UNCHANGED }, { LIT (-0x5.c551d94ae0bf85ddf43ff68349ap-108), ERRNO_UNCHANGED }, { LIT (-0x5.c551d94ae0bf85ddf43ff68349ap-108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffffffffffffff8p+16380", LIT (0xf.fffffffffffffffffffffffffff8p+16380), { LIT (0x3.fffffffffffffffffffffffffffep+12), ERRNO_UNCHANGED }, { LIT (0x4p+12), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffffffffffffffep+12), ERRNO_UNCHANGED }, { LIT (0x4p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffffffffffffff8p-4", LIT (0xf.fffffffffffffffffffffffffff8p-4), { LIT (-0xb.8aa3b295c17f0bbbe87fed0691d8p-116), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f0bbbe87fed0691d8p-116), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f0bbbe87fed0691dp-116), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f0bbbe87fed0691dp-116), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x3.ffffffffffffffffffe8eab89ad4p+12), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffe8eab89ad4p+12), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffe8eab89ad4p+12), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffffffffe8eab89ad6p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffffffffffffp-4", LIT (0xf.fffffffffffffffp-4), { LIT (-0x1.71547652b82fe17835ba38ca2e53p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe17835ba38ca2e52p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe17835ba38ca2e52p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe17835ba38ca2e52p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x7.ffffffe8eab88f49d947a104332p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f49d947a104332p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f49d947a104332p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f49d947a1043324p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary128)
    { "0xf.fffffp-4", LIT (0xf.fffffp-4), { LIT (-0x1.7154770b626b85efbccdf68d2e98p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85efbccdf68d2e98p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85efbccdf68d2e97p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85efbccdf68d2e97p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.000002p+0", LIT (0x1.000002p+0), { LIT (0x2.e2a8e8p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e8p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e8p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8ecp-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.07465ap+0", LIT (0x1.07465ap+0), { LIT (0xa.59567p-8), ERRNO_UNCHANGED }, { LIT (0xa.59567p-8), ERRNO_UNCHANGED }, { LIT (0xa.59567p-8), ERRNO_UNCHANGED }, { LIT (0xa.59568p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.07465cp+0", LIT (0x1.07465cp+0), { LIT (0xa.59594p-8), ERRNO_UNCHANGED }, { LIT (0xa.59594p-8), ERRNO_UNCHANGED }, { LIT (0xa.59594p-8), ERRNO_UNCHANGED }, { LIT (0xa.59595p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.0a588ep+0", LIT (0x1.0a588ep+0), { LIT (0xe.a1dd4p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd4p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd4p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd5p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.28d3b4p+0", LIT (0x1.28d3b4p+0), { LIT (0x3.6a6844p-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6848p-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6844p-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6848p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.4fe37ep+0", LIT (0x1.4fe37ep+0), { LIT (0x6.44f928p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f93p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f928p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f93p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.63d202p+0", LIT (0x1.63d202p+0), { LIT (0x7.999f08p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f08p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f08p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f1p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1.63d204p+0", LIT (0x1.63d204p+0), { LIT (0x7.999f28p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f28p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f28p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f3p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+4", LIT (0x1p+4), { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.b7e154p+0", LIT (0x2.b7e154p+0), { LIT (0x1.715476p+0), ERRNO_UNCHANGED }, { LIT (0x1.715478p+0), ERRNO_UNCHANGED }, { LIT (0x1.715476p+0), ERRNO_UNCHANGED }, { LIT (0x1.715478p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2.b7e15p+0", LIT (0x2.b7e15p+0), { LIT (0x1.715474p+0), ERRNO_UNCHANGED }, { LIT (0x1.715476p+0), ERRNO_UNCHANGED }, { LIT (0x1.715474p+0), ERRNO_UNCHANGED }, { LIT (0x1.715476p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x3.9b0754p+8", LIT (0x3.9b0754p+8), { LIT (0x9.d9a8cp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8cp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8cp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8dp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x4p-128", LIT (0x4p-128), { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0x8p-152", LIT (0x8p-152), { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.54171p-4", LIT (0xb.54171p-4), { LIT (-0x7.f84a98p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a98p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.5417p-4", LIT (0xb.5417p-4), { LIT (-0x7.f84ab8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84abp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84abp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.56f63p-4", LIT (0xb.56f63p-4), { LIT (-0x7.f2717p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27168p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27168p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27168p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.56f64p-4", LIT (0xb.56f64p-4), { LIT (-0x7.f2715p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27148p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27148p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27148p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.5bf82p-4", LIT (0xb.5bf82p-4), { LIT (-0x7.e84228p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e84228p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8422p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8422p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.5bf83p-4", LIT (0xb.5bf83p-4), { LIT (-0x7.e84208p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e84208p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.7704dp-4", LIT (0xb.7704dp-4), { LIT (-0x7.b18b9p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b88p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b88p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.7704ep-4", LIT (0xb.7704ep-4), { LIT (-0x7.b18b7p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b68p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b68p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b68p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.e132ap-4", LIT (0xb.e132ap-4), { LIT (-0x6.df8b3p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b3p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b28p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b28p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xb.e77c6p-4", LIT (0xb.e77c6p-4), { LIT (-0x6.d3569p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xcp-4", LIT (0xcp-4), { LIT (-0x6.a3fe6p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe6p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe58p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xe.d99dap-4", LIT (0xe.d99dap-4), { LIT (-0x1.b8bdfp-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdeep-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdeep-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdeep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.4dfb4p-48", LIT (0xf.4dfb4p-48), { LIT (-0x2.c10694p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c10694p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c1069p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c1069p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.d9ce1p-4", LIT (0xf.d9ce1p-4), { LIT (-0x3.75cc4p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc4p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3cp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.d9cep-4", LIT (0xf.d9cep-4), { LIT (-0x3.75cdb4p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb4p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdbp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdbp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x7.fffff8p+4), ERRNO_UNCHANGED }, { LIT (0x8p+4), ERRNO_UNCHANGED }, { LIT (0x7.fffff8p+4), ERRNO_UNCHANGED }, { LIT (0x8p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary32)
    { "0xf.fffffp-4", LIT (0xf.fffffp-4), { LIT (-0x1.715478p-24), ERRNO_UNCHANGED }, { LIT (-0x1.715478p-24), ERRNO_UNCHANGED }, { LIT (-0x1.715476p-24), ERRNO_UNCHANGED }, { LIT (-0x1.715476p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.0000000000001p+0", LIT (0x1.0000000000001p+0), { LIT (0x1.71547652b82fdp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fep-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.000002p+0", LIT (0x1.000002p+0), { LIT (0x2.e2a8e9c2c776ep-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c777p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776ep-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c777p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.07465ap+0", LIT (0x1.07465ap+0), { LIT (0xa.5956764b14a98p-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14aap-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a98p-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14aap-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.07465bdc7e41bp+0", LIT (0x1.07465bdc7e41bp+0), { LIT (0xa.595912bb7fe88p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe88p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe88p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe9p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.07465bdc7e41cp+0", LIT (0x1.07465bdc7e41cp+0), { LIT (0xa.595912bb7fffp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fffp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fffp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff8p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.07465cp+0", LIT (0x1.07465cp+0), { LIT (0xa.5959448ade0b8p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0cp-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0b8p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.0a588ep+0", LIT (0x1.0a588ep+0), { LIT (0xe.a1dd43a221dp-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221dp-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221dp-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d08p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.28d3b4p+0", LIT (0x1.28d3b4p+0), { LIT (0x3.6a6846287159cp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159cp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159cp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.4fe37ep+0", LIT (0x1.4fe37ep+0), { LIT (0x6.44f92e0fda7dp-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7dp-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7dp-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.63d202d04392cp+0", LIT (0x1.63d202d04392cp+0), { LIT (0x7.999f16e03b54cp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b55p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54cp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b55p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.63d202p+0", LIT (0x1.63d202p+0), { LIT (0x7.999f095d7e15p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e15p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e15p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e154p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1.63d204p+0", LIT (0x1.63d204p+0), { LIT (0x7.999f2a94857bp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b4p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857bp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+4", LIT (0x1p+4), { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.b7e151628aed2p+0", LIT (0x2.b7e151628aed2p+0), { LIT (0x1.71547652b82fdp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fep+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.b7e151628aed4p+0", LIT (0x2.b7e151628aed4p+0), { LIT (0x1.71547652b82fep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82ffp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82ffp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.b7e154p+0", LIT (0x2.b7e154p+0), { LIT (0x1.715477b6069b2p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b3p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b3p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2.b7e15p+0", LIT (0x2.b7e15p+0), { LIT (0x1.715475968cddcp+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddcp+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddcp+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cdddp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x3.9b0754p+8", LIT (0x3.9b0754p+8), { LIT (0x9.d9a8c6de34328p+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de34328p+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de34328p+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3433p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x4p-128", LIT (0x4p-128), { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-152", LIT (0x8p-152), { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0x8p-972", LIT (0x8p-972), { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.54170d5cfa8f8p-4", LIT (0xb.54170d5cfa8f8p-4), { LIT (-0x7.f84a998412a54p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a54p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a5p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.54170d5cfa9p-4", LIT (0xb.54170d5cfa9p-4), { LIT (-0x7.f84a998412a44p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a44p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.54171p-4", LIT (0xb.54171p-4), { LIT (-0x7.f84a9424a2fbcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fbcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fb8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fb8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.5417p-4", LIT (0xb.5417p-4), { LIT (-0x7.f84ab4beb988cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb9888p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb9888p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.56f63c18e93e8p-4", LIT (0xb.56f63c18e93e8p-4), { LIT (-0x7.f27151a15d72p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.56f63c18e93fp-4", LIT (0xb.56f63c18e93fp-4), { LIT (-0x7.f27151a15d71p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.56f63p-4", LIT (0xb.56f63p-4), { LIT (-0x7.f2716a4172a74p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a7p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a7p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a7p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.56f64p-4", LIT (0xb.56f64p-4), { LIT (-0x7.f27149af9dc8cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc88p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc88p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.5bf82dc51f028p-4", LIT (0xb.5bf82dc51f028p-4), { LIT (-0x7.e8420994680dcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680dcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.5bf82dc51f02p-4", LIT (0xb.5bf82dc51f02p-4), { LIT (-0x7.e8420994680ecp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ecp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.5bf82p-4", LIT (0xb.5bf82p-4), { LIT (-0x7.e842258fcc5dcp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.5bf83p-4", LIT (0xb.5bf83p-4), { LIT (-0x7.e842050c531d4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.7704dc9beb05p-4", LIT (0xb.7704dc9beb05p-4), { LIT (-0x7.b18b723cc4c5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.7704dp-4", LIT (0xb.7704dp-4), { LIT (-0x7.b18b8b9fc30ap-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.7704ep-4", LIT (0xb.7704ep-4), { LIT (-0x7.b18b6b68ffa24p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa24p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa2p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.e132ap-4", LIT (0xb.e132ap-4), { LIT (-0x6.df8b2c2c5ea44p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xb.e77c6p-4", LIT (0xb.e77c6p-4), { LIT (-0x6.d35688edc44a8p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xcp-4", LIT (0xcp-4), { LIT (-0x6.a3fe5c604297cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xe.d99dap-4", LIT (0xe.d99dap-4), { LIT (-0x1.b8bdee5bd4283p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd4282p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd4282p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd4282p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.4dfb4p-48", LIT (0xf.4dfb4p-48), { LIT (-0x2.c106931f2bfd2p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfdp+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfdp+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfdp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.d9ce0b1a50e08p-4", LIT (0xf.d9ce0b1a50e08p-4), { LIT (-0x3.75ccb13d89cc8p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc6p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc6p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc6p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.d9ce1p-4", LIT (0xf.d9ce1p-4), { LIT (-0x3.75cc3f2233d66p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d66p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d64p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d64p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.d9cep-4", LIT (0xf.d9cep-4), { LIT (-0x3.75cdb3f0a0b66p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b66p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b64p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b64p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x3.ffffffffffffep+8), ERRNO_UNCHANGED }, { LIT (0x4p+8), ERRNO_UNCHANGED }, { LIT (0x3.ffffffffffffep+8), ERRNO_UNCHANGED }, { LIT (0x4p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.ffffffffffff8p-4", LIT (0xf.ffffffffffff8p-4), { LIT (-0xb.8aa3b295c17f8p-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17fp-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17fp-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17fp-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x7.ffffffe8eab88p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab8cp+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_binary64)
    { "0xf.fffffp-4", LIT (0xf.fffffp-4), { LIT (-0x1.7154770b626b9p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b8p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b8p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b8p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.000000000000000000000000008p+0", LIT (0x1.000000000000000000000000008p+0), { LIT (0xb.8aa3b295c17f0bbbe87fed068cp-108), ERRNO_UNCHANGED }, { LIT (0xb.8aa3b295c17f0bbbe87fed069p-108), ERRNO_UNCHANGED }, { LIT (0xb.8aa3b295c17f0bbbe87fed068cp-108), ERRNO_UNCHANGED }, { LIT (0xb.8aa3b295c17f0bbbe87fed069p-108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.0000000000000002p+0", LIT (0x1.0000000000000002p+0), { LIT (0x2.e2a8eca5705fc2ec17770e9c34p-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ec17770e9c34p-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ec17770e9c34p-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ec17770e9c35p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.0000000000001p+0", LIT (0x1.0000000000001p+0), { LIT (0x1.71547652b82fd5ecd95d67df538p-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecd95d67df538p-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecd95d67df538p-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecd95d67df54p-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.000002p+0", LIT (0x1.000002p+0), { LIT (0x2.e2a8e9c2c776f65fd01efaf723p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65fd01efaf724p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65fd01efaf723p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65fd01efaf724p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.07465ap+0", LIT (0x1.07465ap+0), { LIT (0xa.5956764b14a9d7da921863b848p-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7da921863b84cp-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7da921863b848p-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7da921863b84cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.07465bdc7e41b52ep+0", LIT (0x1.07465bdc7e41b52ep+0), { LIT (0xa.595912bb7fefddcbce0cb3878cp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcbce0cb3879p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcbce0cb3878cp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcbce0cb3879p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.07465bdc7e41bp+0", LIT (0x1.07465bdc7e41bp+0), { LIT (0xa.595912bb7fe899a4a195bab674p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899a4a195bab674p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899a4a195bab674p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899a4a195bab678p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.07465bdc7e41cp+0", LIT (0x1.07465bdc7e41cp+0), { LIT (0xa.595912bb7fff0ba2d9d999b5e8p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0ba2d9d999b5e8p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0ba2d9d999b5e8p-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0ba2d9d999b5ecp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.07465cp+0", LIT (0x1.07465cp+0), { LIT (0xa.5959448ade0bdcb61198f8dd24p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcb61198f8dd28p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcb61198f8dd24p-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcb61198f8dd28p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.0a588ep+0", LIT (0x1.0a588ep+0), { LIT (0xe.a1dd43a221d02a32622e9cbap-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a32622e9cba04p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a32622e9cbap-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a32622e9cba04p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.28d3b4p+0", LIT (0x1.28d3b4p+0), { LIT (0x3.6a6846287159ceb1f8d965deeap-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb1f8d965deeap-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb1f8d965deeap-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb1f8d965deebp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.4fe37ep+0", LIT (0x1.4fe37ep+0), { LIT (0x6.44f92e0fda7d1b46e2bc2dcfa8p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b46e2bc2dcfaap-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b46e2bc2dcfa8p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b46e2bc2dcfaap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.63d202d04392cp+0", LIT (0x1.63d202d04392cp+0), { LIT (0x7.999f16e03b54e0f55354326ba2p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f55354326ba2p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f55354326ba2p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f55354326ba4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.63d202p+0", LIT (0x1.63d202p+0), { LIT (0x7.999f095d7e150199097308f744p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150199097308f744p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150199097308f744p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150199097308f746p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1.63d204p+0", LIT (0x1.63d204p+0), { LIT (0x7.999f2a94857b22e23de191021ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e23de191021ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e23de191021ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e23de191022p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+4", LIT (0x1p+4), { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e151628aed2a68p+0", LIT (0x2.b7e151628aed2a68p+0), { LIT (0x1.71547652b82fe17607b8015c0dp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17607b8015c0d8p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17607b8015c0dp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17607b8015c0d8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e151628aed2a6abf7158809cp+0", LIT (0x2.b7e151628aed2a6abf7158809cp+0), { LIT (0x1.71547652b82fe1777d0ffda0d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d18p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e151628aed2a6abf7158809dp+0", LIT (0x2.b7e151628aed2a6abf7158809dp+0), { LIT (0x1.71547652b82fe1777d0ffda0d2p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d28p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d2p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1777d0ffda0d28p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e151628aed2a6cp+0", LIT (0x2.b7e151628aed2a6cp+0), { LIT (0x1.71547652b82fe1782731bf3f6bp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1782731bf3f6bp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1782731bf3f6bp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe1782731bf3f6b8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e151628aed2p+0", LIT (0x2.b7e151628aed2p+0), { LIT (0x1.71547652b82fdbf024ffffda5ep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf024ffffda5e8p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf024ffffda5ep+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf024ffffda5e8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e151628aed4p+0", LIT (0x2.b7e151628aed4p+0), { LIT (0x1.71547652b82fecebf2ef1ac7b68p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fecebf2ef1ac7b7p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fecebf2ef1ac7b68p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fecebf2ef1ac7b7p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e154p+0", LIT (0x2.b7e154p+0), { LIT (0x1.715477b6069b2d4b70c9ce6a328p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4b70c9ce6a328p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4b70c9ce6a328p+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4b70c9ce6a33p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2.b7e15p+0", LIT (0x2.b7e15p+0), { LIT (0x1.715475968cddc4e6c2b1cbd1a78p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6c2b1cbd1a8p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6c2b1cbd1a78p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6c2b1cbd1a8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x3.9b0754p+8", LIT (0x3.9b0754p+8), { LIT (0x9.d9a8c6de3432bff9b0fef9633cp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bff9b0fef9634p+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bff9b0fef9633cp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bff9b0fef9634p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x4p-128", LIT (0x4p-128), { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-152", LIT (0x8p-152), { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0x8p-972", LIT (0x8p-972), { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.54170d5cfa8f8p-4", LIT (0xb.54170d5cfa8f8p-4), { LIT (-0x7.f84a998412a53b78ea4938468ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78ea4938468ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78ea4938468cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78ea4938468cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.54170d5cfa8fd72a47d6bda194p-4", LIT (0xb.54170d5cfa8fd72a47d6bda194p-4), { LIT (-0x7.f84a998412a489dce921cd17ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17dep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17dep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17dep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.54170d5cfa8fd72a47d6bda19p-4", LIT (0xb.54170d5cfa8fd72a47d6bda19p-4), { LIT (-0x7.f84a998412a489dce921cd17e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dce921cd17e6p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.54170d5cfa8fd72p-4", LIT (0xb.54170d5cfa8fd72p-4), { LIT (-0x7.f84a998412a489f1dbd12ebaa4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489f1dbd12ebaa2p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489f1dbd12ebaa2p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489f1dbd12ebaa2p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.54170d5cfa8fd73p-4", LIT (0xb.54170d5cfa8fd73p-4), { LIT (-0x7.f84a998412a489d141bab11c0ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489d141bab11c0cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489d141bab11c0cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489d141bab11c0cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.54170d5cfa9p-4", LIT (0xb.54170d5cfa9p-4), { LIT (-0x7.f84a998412a436a8365c4397dap-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8365c4397d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8365c4397d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8365c4397d8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.54171p-4", LIT (0xb.54171p-4), { LIT (-0x7.f84a9424a2fba583bbaf3ba7a6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba583bbaf3ba7a6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba583bbaf3ba7a4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba583bbaf3ba7a4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.5417p-4", LIT (0xb.5417p-4), { LIT (-0x7.f84ab4beb988b35b6eb65af73p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b35b6eb65af72ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b35b6eb65af72ep-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b35b6eb65af72ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.56f63c18e93e8p-4", LIT (0xb.56f63c18e93e8p-4), { LIT (-0x7.f27151a15d71d5e90939366e08p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e90939366e06p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e90939366e06p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e90939366e06p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.56f63c18e93eecdp-4", LIT (0xb.56f63c18e93eecdp-4), { LIT (-0x7.f27151a15d70f86944dd429074p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f86944dd429072p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f86944dd429072p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f86944dd429072p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.56f63c18e93fp-4", LIT (0xb.56f63c18e93fp-4), { LIT (-0x7.f27151a15d70d15a62a4c18aeap-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d15a62a4c18ae8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d15a62a4c18ae8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d15a62a4c18ae8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.56f63p-4", LIT (0xb.56f63p-4), { LIT (-0x7.f2716a4172a70437981d6d2facp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70437981d6d2faap-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70437981d6d2faap-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70437981d6d2faap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.56f64p-4", LIT (0xb.56f64p-4), { LIT (-0x7.f27149af9dc8b0f1993d141d1cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0f1993d141d1ap-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0f1993d141d1ap-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0f1993d141d1ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.5bf82dc51f02035p-4", LIT (0xb.5bf82dc51f02035p-4), { LIT (-0x7.e8420994680ea2d70a67a2d806p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d70a67a2d806p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d70a67a2d804p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d70a67a2d804p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.5bf82dc51f028p-4", LIT (0xb.5bf82dc51f028p-4), { LIT (-0x7.e8420994680da57678fdcfd1cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57678fdcfd1bep-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57678fdcfd1bep-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57678fdcfd1bep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.5bf82dc51f02p-4", LIT (0xb.5bf82dc51f02p-4), { LIT (-0x7.e8420994680ea992427e980664p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea992427e980662p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea992427e980662p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea992427e980662p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.5bf82p-4", LIT (0xb.5bf82p-4), { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f0ap-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f08p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f08p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f2cd3d1ec3f08p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.5bf83p-4", LIT (0xb.5bf83p-4), { LIT (-0x7.e842050c531d02307168b728f6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d02307168b728f4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d02307168b728f4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d02307168b728f4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.7704dc9beb05p-4", LIT (0xb.7704dc9beb05p-4), { LIT (-0x7.b18b723cc4c4faeb8adda8e96cp-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4faeb8adda8e96ap-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4faeb8adda8e96ap-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4faeb8adda8e96ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.7704dp-4", LIT (0xb.7704dp-4), { LIT (-0x7.b18b8b9fc309de4f9564e02812p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de4f9564e02812p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de4f9564e0281p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de4f9564e0281p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.7704ep-4", LIT (0xb.7704ep-4), { LIT (-0x7.b18b6b68ffa235098af8c5c4f6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa235098af8c5c4f6p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa235098af8c5c4f4p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa235098af8c5c4f4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.e132ap-4", LIT (0xb.e132ap-4), { LIT (-0x6.df8b2c2c5ea400001520bc941cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea400001520bc941cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea400001520bc941ap-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea400001520bc941ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xb.e77c6p-4", LIT (0xb.e77c6p-4), { LIT (-0x6.d35688edc44a495fd74b5e1b8ep-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a495fd74b5e1b8ep-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a495fd74b5e1b8cp-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a495fd74b5e1b8cp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xcp-4", LIT (0xcp-4), { LIT (-0x6.a3fe5c6042978605ff4edf5f98p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978605ff4edf5f98p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978605ff4edf5f96p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978605ff4edf5f96p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xe.d99dap-4", LIT (0xe.d99dap-4), { LIT (-0x1.b8bdee5bd428254ebf7ead08628p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ebf7ead0862p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ebf7ead0862p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ebf7ead0862p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.4dfb4p-48", LIT (0xf.4dfb4p-48), { LIT (-0x2.c106931f2bfd0af427fc474397p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af427fc474397p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af427fc474396p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af427fc474396p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.d9ce0b1a50e08p-4", LIT (0xf.d9ce0b1a50e08p-4), { LIT (-0x3.75ccb13d89cc66ee72a7e068c1p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ee72a7e068c1p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ee72a7e068cp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ee72a7e068cp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.d9ce1p-4", LIT (0xf.d9ce1p-4), { LIT (-0x3.75cc3f2233d65c71f491713f55p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c71f491713f55p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c71f491713f54p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c71f491713f54p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.d9cep-4", LIT (0xf.d9cep-4), { LIT (-0x3.75cdb3f0a0b655972857a48ecep-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b655972857a48ecep-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b655972857a48ecdp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b655972857a48ecdp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x3.fffffffffffffff4755c4d6a3ep+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4755c4d6a3fp+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4755c4d6a3ep+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4755c4d6a3fp+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffff8p-4", LIT (0xf.ffffffffffff8p-4), { LIT (-0xb.8aa3b295c17f39e6774a440c9p-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39e6774a440c9p-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39e6774a440c8cp-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39e6774a440c8cp-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.ffffffffffffbffffffffffffcp+1020", LIT (0xf.ffffffffffffbffffffffffffcp+1020), { LIT (0x3.fffffffffffffffa3aae26b51fp+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffa3aae26b51fp+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffa3aae26b51fp+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffa3aae26b52p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffffffffffffffffffffffcp-4", LIT (0xf.fffffffffffffffffffffffffcp-4), { LIT (-0x5.c551d94ae0bf85ddf43ff6834ap-108), ERRNO_UNCHANGED }, { LIT (-0x5.c551d94ae0bf85ddf43ff6834ap-108), ERRNO_UNCHANGED }, { LIT (-0x5.c551d94ae0bf85ddf43ff68348p-108), ERRNO_UNCHANGED }, { LIT (-0x5.c551d94ae0bf85ddf43ff68348p-108), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffffffffffffp-4", LIT (0xf.fffffffffffffffp-4), { LIT (-0x1.71547652b82fe17835ba38ca2e8p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe17835ba38ca2e8p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe17835ba38ca2ep-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe17835ba38ca2ep-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x7.ffffffe8eab88f49d947a10432p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f49d947a10434p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f49d947a10432p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f49d947a10434p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_ibm128)
    { "0xf.fffffp-4", LIT (0xf.fffffp-4), { LIT (-0x1.7154770b626b85efbccdf68d2fp-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85efbccdf68d2e8p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85efbccdf68d2e8p-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85efbccdf68d2e8p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.0000000000000002p+0", LIT (0x1.0000000000000002p+0), { LIT (0x2.e2a8eca5705fc2ecp-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ecp-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ecp-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2fp-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.0000000000001p+0", LIT (0x1.0000000000001p+0), { LIT (0x1.71547652b82fd5ecp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5eep-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.000002p+0", LIT (0x1.000002p+0), { LIT (0x2.e2a8e9c2c776f65cp-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f66p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65cp-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f66p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.07465ap+0", LIT (0x1.07465ap+0), { LIT (0xa.5956764b14a9d7dp-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7ep-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7dp-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7ep-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.07465bdc7e41b52ep+0", LIT (0x1.07465bdc7e41b52ep+0), { LIT (0xa.595912bb7fefddcp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefdddp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefdddp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.07465bdc7e41bp+0", LIT (0x1.07465bdc7e41bp+0), { LIT (0xa.595912bb7fe899ap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899ap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899ap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899bp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.07465bdc7e41cp+0", LIT (0x1.07465bdc7e41cp+0), { LIT (0xa.595912bb7fff0bap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0bap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0bap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0bbp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.07465cp+0", LIT (0x1.07465cp+0), { LIT (0xa.5959448ade0bdcbp-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcbp-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcbp-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdccp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.0a588ep+0", LIT (0x1.0a588ep+0), { LIT (0xe.a1dd43a221d02a3p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a3p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a3p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a4p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.28d3b4p+0", LIT (0x1.28d3b4p+0), { LIT (0x3.6a6846287159cebp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159cebp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159cebp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.4fe37ep+0", LIT (0x1.4fe37ep+0), { LIT (0x6.44f92e0fda7d1b4p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b48p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b4p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b48p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.63d202d04392cp+0", LIT (0x1.63d202d04392cp+0), { LIT (0x7.999f16e03b54e0fp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f8p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0fp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.63d202p+0", LIT (0x1.63d202p+0), { LIT (0x7.999f095d7e150198p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150198p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150198p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e1501ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1.63d204p+0", LIT (0x1.63d204p+0), { LIT (0x7.999f2a94857b22ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+4", LIT (0x1p+4), { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.b7e151628aed2a68p+0", LIT (0x2.b7e151628aed2a68p+0), { LIT (0x1.71547652b82fe176p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe176p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe176p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.b7e151628aed2a6cp+0", LIT (0x2.b7e151628aed2a6cp+0), { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.b7e151628aed2p+0", LIT (0x2.b7e151628aed2p+0), { LIT (0x1.71547652b82fdbfp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbfp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbfp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.b7e151628aed4p+0", LIT (0x2.b7e151628aed4p+0), { LIT (0x1.71547652b82feceap+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fececp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82feceap+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fececp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.b7e154p+0", LIT (0x2.b7e154p+0), { LIT (0x1.715477b6069b2d4ap+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4cp+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4ap+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2.b7e15p+0", LIT (0x2.b7e15p+0), { LIT (0x1.715475968cddc4e6p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x3.9b0754p+8", LIT (0x3.9b0754p+8), { LIT (0x9.d9a8c6de3432bffp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432cp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bffp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-128", LIT (0x4p-128), { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-152", LIT (0x8p-152), { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0x8p-972", LIT (0x8p-972), { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.54170d5cfa8f8p-4", LIT (0xb.54170d5cfa8f8p-4), { LIT (-0x7.f84a998412a53b8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.54170d5cfa8fd72p-4", LIT (0xb.54170d5cfa8fd72p-4), { LIT (-0x7.f84a998412a489f8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.54170d5cfa8fd73p-4", LIT (0xb.54170d5cfa8fd73p-4), { LIT (-0x7.f84a998412a489d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.54170d5cfa9p-4", LIT (0xb.54170d5cfa9p-4), { LIT (-0x7.f84a998412a436bp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.54171p-4", LIT (0xb.54171p-4), { LIT (-0x7.f84a9424a2fba588p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.5417p-4", LIT (0xb.5417p-4), { LIT (-0x7.f84ab4beb988b36p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b358p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b358p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b358p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.56f63c18e93e8p-4", LIT (0xb.56f63c18e93e8p-4), { LIT (-0x7.f27151a15d71d5fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.56f63c18e93eecdp-4", LIT (0xb.56f63c18e93eecdp-4), { LIT (-0x7.f27151a15d70f87p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f868p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f868p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f868p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.56f63c18e93fp-4", LIT (0xb.56f63c18e93fp-4), { LIT (-0x7.f27151a15d70d16p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d158p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d158p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d158p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.56f63p-4", LIT (0xb.56f63p-4), { LIT (-0x7.f2716a4172a70438p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70438p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a7043p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a7043p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.56f64p-4", LIT (0xb.56f64p-4), { LIT (-0x7.f27149af9dc8b0f8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.5bf82dc51f02035p-4", LIT (0xb.5bf82dc51f02035p-4), { LIT (-0x7.e8420994680ea2d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.5bf82dc51f028p-4", LIT (0xb.5bf82dc51f028p-4), { LIT (-0x7.e8420994680da578p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da578p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.5bf82dc51f02p-4", LIT (0xb.5bf82dc51f02p-4), { LIT (-0x7.e8420994680ea998p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea99p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea99p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea99p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.5bf82p-4", LIT (0xb.5bf82p-4), { LIT (-0x7.e842258fcc5d9f3p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f3p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f28p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f28p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.5bf83p-4", LIT (0xb.5bf83p-4), { LIT (-0x7.e842050c531d0238p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d023p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d023p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d023p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.7704dc9beb05p-4", LIT (0xb.7704dc9beb05p-4), { LIT (-0x7.b18b723cc4c4fafp-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4fae8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4fae8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4fae8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.7704dp-4", LIT (0xb.7704dp-4), { LIT (-0x7.b18b8b9fc309de5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de48p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de48p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.7704ep-4", LIT (0xb.7704ep-4), { LIT (-0x7.b18b6b68ffa2351p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa23508p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa23508p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa23508p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.e132ap-4", LIT (0xb.e132ap-4), { LIT (-0x6.df8b2c2c5ea40008p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xb.e77c6p-4", LIT (0xb.e77c6p-4), { LIT (-0x6.d35688edc44a496p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a496p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a4958p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a4958p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xcp-4", LIT (0xcp-4), { LIT (-0x6.a3fe5c6042978608p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978608p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c60429786p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c60429786p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xe.d99dap-4", LIT (0xe.d99dap-4), { LIT (-0x1.b8bdee5bd428255p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ep-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ep-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.4dfb4p-48", LIT (0xf.4dfb4p-48), { LIT (-0x2.c106931f2bfd0af8p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af4p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af4p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.d9ce0b1a50e08p-4", LIT (0xf.d9ce0b1a50e08p-4), { LIT (-0x3.75ccb13d89cc66fp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66fp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ecp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ecp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.d9ce1p-4", LIT (0xf.d9ce1p-4), { LIT (-0x3.75cc3f2233d65c74p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c7p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c7p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c7p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.d9cep-4", LIT (0xf.d9cep-4), { LIT (-0x3.75cdb3f0a0b65598p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b65598p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b65594p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b65594p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x3.fffffffffffffff4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff8p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.ffffffffffff8p-4", LIT (0xf.ffffffffffff8p-4), { LIT (-0xb.8aa3b295c17f39fp-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39ep-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39ep-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39ep-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x3.fffffffffffffffcp+12), ERRNO_UNCHANGED }, { LIT (0x4p+12), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp+12), ERRNO_UNCHANGED }, { LIT (0x4p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffffffffffffp-4", LIT (0xf.fffffffffffffffp-4), { LIT (-0x1.71547652b82fe17ap-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe178p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe178p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe178p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x7.ffffffe8eab88f48p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f48p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f48p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_intel96)
    { "0xf.fffffp-4", LIT (0xf.fffffp-4), { LIT (-0x1.7154770b626b85fp-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85fp-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85eep-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85eep-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.0000000000000002p+0", LIT (0x1.0000000000000002p+0), { LIT (0x2.e2a8eca5705fc2ecp-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ecp-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2ecp-64), ERRNO_UNCHANGED }, { LIT (0x2.e2a8eca5705fc2fp-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.0000000000001p+0", LIT (0x1.0000000000001p+0), { LIT (0x1.71547652b82fd5ecp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5ecp-52), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fd5eep-52), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.000002p+0", LIT (0x1.000002p+0), { LIT (0x2.e2a8e9c2c776f65cp-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f66p-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f65cp-24), ERRNO_UNCHANGED }, { LIT (0x2.e2a8e9c2c776f66p-24), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.07465ap+0", LIT (0x1.07465ap+0), { LIT (0xa.5956764b14a9d7dp-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7ep-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7dp-8), ERRNO_UNCHANGED }, { LIT (0xa.5956764b14a9d7ep-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.07465bdc7e41b52ep+0", LIT (0x1.07465bdc7e41b52ep+0), { LIT (0xa.595912bb7fefddcp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefdddp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefddcp-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fefdddp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.07465bdc7e41bp+0", LIT (0x1.07465bdc7e41bp+0), { LIT (0xa.595912bb7fe899ap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899ap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899ap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fe899bp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.07465bdc7e41cp+0", LIT (0x1.07465bdc7e41cp+0), { LIT (0xa.595912bb7fff0bap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0bap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0bap-8), ERRNO_UNCHANGED }, { LIT (0xa.595912bb7fff0bbp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.07465cp+0", LIT (0x1.07465cp+0), { LIT (0xa.5959448ade0bdcbp-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcbp-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdcbp-8), ERRNO_UNCHANGED }, { LIT (0xa.5959448ade0bdccp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.0a588ep+0", LIT (0x1.0a588ep+0), { LIT (0xe.a1dd43a221d02a3p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a3p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a3p-8), ERRNO_UNCHANGED }, { LIT (0xe.a1dd43a221d02a4p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.28d3b4p+0", LIT (0x1.28d3b4p+0), { LIT (0x3.6a6846287159cebp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159cebp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159cebp-4), ERRNO_UNCHANGED }, { LIT (0x3.6a6846287159ceb4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.4fe37ep+0", LIT (0x1.4fe37ep+0), { LIT (0x6.44f92e0fda7d1b4p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b48p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b4p-4), ERRNO_UNCHANGED }, { LIT (0x6.44f92e0fda7d1b48p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.63d202d04392cp+0", LIT (0x1.63d202d04392cp+0), { LIT (0x7.999f16e03b54e0fp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f8p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0fp-4), ERRNO_UNCHANGED }, { LIT (0x7.999f16e03b54e0f8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.63d202p+0", LIT (0x1.63d202p+0), { LIT (0x7.999f095d7e150198p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150198p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e150198p-4), ERRNO_UNCHANGED }, { LIT (0x7.999f095d7e1501ap-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1.63d204p+0", LIT (0x1.63d204p+0), { LIT (0x7.999f2a94857b22ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22ep-4), ERRNO_UNCHANGED }, { LIT (0x7.999f2a94857b22e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+0", LIT (0x1p+0), { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED }, { LIT (0x0p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+4", LIT (0x1p+4), { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED }, { LIT (0x4p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x1p+8", LIT (0x1p+8), { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED }, { LIT (0x8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.b7e151628aed2a68p+0", LIT (0x2.b7e151628aed2a68p+0), { LIT (0x1.71547652b82fe176p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe176p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe176p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.b7e151628aed2a6cp+0", LIT (0x2.b7e151628aed2a6cp+0), { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe178p+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fe17ap+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.b7e151628aed2p+0", LIT (0x2.b7e151628aed2p+0), { LIT (0x1.71547652b82fdbfp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbfp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbfp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fdbf2p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.b7e151628aed4p+0", LIT (0x2.b7e151628aed4p+0), { LIT (0x1.71547652b82feceap+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fececp+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82feceap+0), ERRNO_UNCHANGED }, { LIT (0x1.71547652b82fececp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.b7e154p+0", LIT (0x2.b7e154p+0), { LIT (0x1.715477b6069b2d4ap+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4cp+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4ap+0), ERRNO_UNCHANGED }, { LIT (0x1.715477b6069b2d4cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2.b7e15p+0", LIT (0x2.b7e15p+0), { LIT (0x1.715475968cddc4e6p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e6p+0), ERRNO_UNCHANGED }, { LIT (0x1.715475968cddc4e8p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p+0", LIT (0x2p+0), { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED }, { LIT (0x1p+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x2p-16384", LIT (0x2p-16384), { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED }, { LIT (-0x3.fffp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x3.9b0754p+8", LIT (0x3.9b0754p+8), { LIT (0x9.d9a8c6de3432bffp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432cp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432bffp+0), ERRNO_UNCHANGED }, { LIT (0x9.d9a8c6de3432cp+0), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1024", LIT (0x4p-1024), { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED }, { LIT (-0x3.fep+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-1076", LIT (0x4p-1076), { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED }, { LIT (-0x4.32p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-128", LIT (0x4p-128), { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED }, { LIT (-0x7.ep+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16384", LIT (0x4p-16384), { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED }, { LIT (-0x3.ffep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x4p-16448", LIT (0x4p-16448), { LIT (-0x4.03ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.03ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.03ep+12), ERRNO_UNCHANGED }, { LIT (-0x4.03ep+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-152", LIT (0x8p-152), { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED }, { LIT (-0x9.5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-16448", LIT (0x8p-16448), { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED }, { LIT (-0x4.03dp+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0x8p-972", LIT (0x8p-972), { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED }, { LIT (-0x3.c9p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.54170d5cfa8f8p-4", LIT (0xb.54170d5cfa8f8p-4), { LIT (-0x7.f84a998412a53b8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a53b78p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.54170d5cfa8fd72p-4", LIT (0xb.54170d5cfa8fd72p-4), { LIT (-0x7.f84a998412a489f8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.54170d5cfa8fd73p-4", LIT (0xb.54170d5cfa8fd73p-4), { LIT (-0x7.f84a998412a489d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a489dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.54170d5cfa9p-4", LIT (0xb.54170d5cfa9p-4), { LIT (-0x7.f84a998412a436bp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a998412a436a8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.54171p-4", LIT (0xb.54171p-4), { LIT (-0x7.f84a9424a2fba588p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba58p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84a9424a2fba58p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.5417p-4", LIT (0xb.5417p-4), { LIT (-0x7.f84ab4beb988b36p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b358p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b358p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f84ab4beb988b358p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.56f63c18e93e8p-4", LIT (0xb.56f63c18e93e8p-4), { LIT (-0x7.f27151a15d71d5fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d71d5e8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.56f63c18e93eecdp-4", LIT (0xb.56f63c18e93eecdp-4), { LIT (-0x7.f27151a15d70f87p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f868p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f868p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70f868p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.56f63c18e93fp-4", LIT (0xb.56f63c18e93fp-4), { LIT (-0x7.f27151a15d70d16p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d158p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d158p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27151a15d70d158p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.56f63p-4", LIT (0xb.56f63p-4), { LIT (-0x7.f2716a4172a70438p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a70438p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a7043p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f2716a4172a7043p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.56f64p-4", LIT (0xb.56f64p-4), { LIT (-0x7.f27149af9dc8b0f8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0fp-4), ERRNO_UNCHANGED }, { LIT (-0x7.f27149af9dc8b0fp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.5bf82dc51f02035p-4", LIT (0xb.5bf82dc51f02035p-4), { LIT (-0x7.e8420994680ea2d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2d8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2dp-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea2dp-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.5bf82dc51f028p-4", LIT (0xb.5bf82dc51f028p-4), { LIT (-0x7.e8420994680da578p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da578p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680da57p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.5bf82dc51f02p-4", LIT (0xb.5bf82dc51f02p-4), { LIT (-0x7.e8420994680ea998p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea99p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea99p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e8420994680ea99p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.5bf82p-4", LIT (0xb.5bf82p-4), { LIT (-0x7.e842258fcc5d9f3p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f3p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f28p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842258fcc5d9f28p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.5bf83p-4", LIT (0xb.5bf83p-4), { LIT (-0x7.e842050c531d0238p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d023p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d023p-4), ERRNO_UNCHANGED }, { LIT (-0x7.e842050c531d023p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.7704dc9beb05p-4", LIT (0xb.7704dc9beb05p-4), { LIT (-0x7.b18b723cc4c4fafp-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4fae8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4fae8p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b723cc4c4fae8p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.7704dp-4", LIT (0xb.7704dp-4), { LIT (-0x7.b18b8b9fc309de5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de5p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de48p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b8b9fc309de48p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.7704ep-4", LIT (0xb.7704ep-4), { LIT (-0x7.b18b6b68ffa2351p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa23508p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa23508p-4), ERRNO_UNCHANGED }, { LIT (-0x7.b18b6b68ffa23508p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.e132ap-4", LIT (0xb.e132ap-4), { LIT (-0x6.df8b2c2c5ea40008p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED }, { LIT (-0x6.df8b2c2c5ea4p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xb.e77c6p-4", LIT (0xb.e77c6p-4), { LIT (-0x6.d35688edc44a496p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a496p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a4958p-4), ERRNO_UNCHANGED }, { LIT (-0x6.d35688edc44a4958p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xcp-4", LIT (0xcp-4), { LIT (-0x6.a3fe5c6042978608p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c6042978608p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c60429786p-4), ERRNO_UNCHANGED }, { LIT (-0x6.a3fe5c60429786p-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xe.d99dap-4", LIT (0xe.d99dap-4), { LIT (-0x1.b8bdee5bd428255p-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ep-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ep-4), ERRNO_UNCHANGED }, { LIT (-0x1.b8bdee5bd428254ep-4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.4dfb4p-48", LIT (0xf.4dfb4p-48), { LIT (-0x2.c106931f2bfd0af8p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af4p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af4p+4), ERRNO_UNCHANGED }, { LIT (-0x2.c106931f2bfd0af4p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.d9ce0b1a50e08p-4", LIT (0xf.d9ce0b1a50e08p-4), { LIT (-0x3.75ccb13d89cc66fp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66fp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ecp-8), ERRNO_UNCHANGED }, { LIT (-0x3.75ccb13d89cc66ecp-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.d9ce1p-4", LIT (0xf.d9ce1p-4), { LIT (-0x3.75cc3f2233d65c74p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c7p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c7p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cc3f2233d65c7p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.d9cep-4", LIT (0xf.d9cep-4), { LIT (-0x3.75cdb3f0a0b65598p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b65598p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b65594p-8), ERRNO_UNCHANGED }, { LIT (-0x3.75cdb3f0a0b65594p-8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.ffffffffffff8p+1020", LIT (0xf.ffffffffffff8p+1020), { LIT (0x3.fffffffffffffff4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff4p+8), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffff8p+8), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.ffffffffffff8p-4", LIT (0xf.ffffffffffff8p-4), { LIT (-0xb.8aa3b295c17f39fp-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39ep-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39ep-56), ERRNO_UNCHANGED }, { LIT (-0xb.8aa3b295c17f39ep-56), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffffffffffffp+16380", LIT (0xf.fffffffffffffffp+16380), { LIT (0x3.fffffffffffffffcp+12), ERRNO_UNCHANGED }, { LIT (0x4p+12), ERRNO_UNCHANGED }, { LIT (0x3.fffffffffffffffcp+12), ERRNO_UNCHANGED }, { LIT (0x4p+12), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffffffffffffp-4", LIT (0xf.fffffffffffffffp-4), { LIT (-0x1.71547652b82fe17ap-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe178p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe178p-64), ERRNO_UNCHANGED }, { LIT (-0x1.71547652b82fe178p-64), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffp+124", LIT (0xf.fffffp+124), { LIT (0x7.ffffffe8eab88f48p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f48p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f48p+4), ERRNO_UNCHANGED }, { LIT (0x7.ffffffe8eab88f5p+4), ERRNO_UNCHANGED } },
#endif
#if (TEST_COND_m68k96)
    { "0xf.fffffp-4", LIT (0xf.fffffp-4), { LIT (-0x1.7154770b626b85fp-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85fp-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85eep-24), ERRNO_UNCHANGED }, { LIT (-0x1.7154770b626b85eep-24), ERRNO_UNCHANGED } },
#endif
  };

static void
log2_test (void)
{
  ALL_RM_TEST (log2, 0, log2_test_data, RUN_TEST_LOOP_f_f, END);
}

static void
do_test (void)
{
  log2_test ();
}

/*
 * Local Variables:
 * mode:c
 * End:
 */
