#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E170
// Address: 0x12e170 - 0x12e9a8
void sub_0012E170_0x12e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E170_0x12e170");
#endif

    switch (ctx->pc) {
        case 0x12e170u: goto label_12e170;
        case 0x12e174u: goto label_12e174;
        case 0x12e178u: goto label_12e178;
        case 0x12e17cu: goto label_12e17c;
        case 0x12e180u: goto label_12e180;
        case 0x12e184u: goto label_12e184;
        case 0x12e188u: goto label_12e188;
        case 0x12e18cu: goto label_12e18c;
        case 0x12e190u: goto label_12e190;
        case 0x12e194u: goto label_12e194;
        case 0x12e198u: goto label_12e198;
        case 0x12e19cu: goto label_12e19c;
        case 0x12e1a0u: goto label_12e1a0;
        case 0x12e1a4u: goto label_12e1a4;
        case 0x12e1a8u: goto label_12e1a8;
        case 0x12e1acu: goto label_12e1ac;
        case 0x12e1b0u: goto label_12e1b0;
        case 0x12e1b4u: goto label_12e1b4;
        case 0x12e1b8u: goto label_12e1b8;
        case 0x12e1bcu: goto label_12e1bc;
        case 0x12e1c0u: goto label_12e1c0;
        case 0x12e1c4u: goto label_12e1c4;
        case 0x12e1c8u: goto label_12e1c8;
        case 0x12e1ccu: goto label_12e1cc;
        case 0x12e1d0u: goto label_12e1d0;
        case 0x12e1d4u: goto label_12e1d4;
        case 0x12e1d8u: goto label_12e1d8;
        case 0x12e1dcu: goto label_12e1dc;
        case 0x12e1e0u: goto label_12e1e0;
        case 0x12e1e4u: goto label_12e1e4;
        case 0x12e1e8u: goto label_12e1e8;
        case 0x12e1ecu: goto label_12e1ec;
        case 0x12e1f0u: goto label_12e1f0;
        case 0x12e1f4u: goto label_12e1f4;
        case 0x12e1f8u: goto label_12e1f8;
        case 0x12e1fcu: goto label_12e1fc;
        case 0x12e200u: goto label_12e200;
        case 0x12e204u: goto label_12e204;
        case 0x12e208u: goto label_12e208;
        case 0x12e20cu: goto label_12e20c;
        case 0x12e210u: goto label_12e210;
        case 0x12e214u: goto label_12e214;
        case 0x12e218u: goto label_12e218;
        case 0x12e21cu: goto label_12e21c;
        case 0x12e220u: goto label_12e220;
        case 0x12e224u: goto label_12e224;
        case 0x12e228u: goto label_12e228;
        case 0x12e22cu: goto label_12e22c;
        case 0x12e230u: goto label_12e230;
        case 0x12e234u: goto label_12e234;
        case 0x12e238u: goto label_12e238;
        case 0x12e23cu: goto label_12e23c;
        case 0x12e240u: goto label_12e240;
        case 0x12e244u: goto label_12e244;
        case 0x12e248u: goto label_12e248;
        case 0x12e24cu: goto label_12e24c;
        case 0x12e250u: goto label_12e250;
        case 0x12e254u: goto label_12e254;
        case 0x12e258u: goto label_12e258;
        case 0x12e25cu: goto label_12e25c;
        case 0x12e260u: goto label_12e260;
        case 0x12e264u: goto label_12e264;
        case 0x12e268u: goto label_12e268;
        case 0x12e26cu: goto label_12e26c;
        case 0x12e270u: goto label_12e270;
        case 0x12e274u: goto label_12e274;
        case 0x12e278u: goto label_12e278;
        case 0x12e27cu: goto label_12e27c;
        case 0x12e280u: goto label_12e280;
        case 0x12e284u: goto label_12e284;
        case 0x12e288u: goto label_12e288;
        case 0x12e28cu: goto label_12e28c;
        case 0x12e290u: goto label_12e290;
        case 0x12e294u: goto label_12e294;
        case 0x12e298u: goto label_12e298;
        case 0x12e29cu: goto label_12e29c;
        case 0x12e2a0u: goto label_12e2a0;
        case 0x12e2a4u: goto label_12e2a4;
        case 0x12e2a8u: goto label_12e2a8;
        case 0x12e2acu: goto label_12e2ac;
        case 0x12e2b0u: goto label_12e2b0;
        case 0x12e2b4u: goto label_12e2b4;
        case 0x12e2b8u: goto label_12e2b8;
        case 0x12e2bcu: goto label_12e2bc;
        case 0x12e2c0u: goto label_12e2c0;
        case 0x12e2c4u: goto label_12e2c4;
        case 0x12e2c8u: goto label_12e2c8;
        case 0x12e2ccu: goto label_12e2cc;
        case 0x12e2d0u: goto label_12e2d0;
        case 0x12e2d4u: goto label_12e2d4;
        case 0x12e2d8u: goto label_12e2d8;
        case 0x12e2dcu: goto label_12e2dc;
        case 0x12e2e0u: goto label_12e2e0;
        case 0x12e2e4u: goto label_12e2e4;
        case 0x12e2e8u: goto label_12e2e8;
        case 0x12e2ecu: goto label_12e2ec;
        case 0x12e2f0u: goto label_12e2f0;
        case 0x12e2f4u: goto label_12e2f4;
        case 0x12e2f8u: goto label_12e2f8;
        case 0x12e2fcu: goto label_12e2fc;
        case 0x12e300u: goto label_12e300;
        case 0x12e304u: goto label_12e304;
        case 0x12e308u: goto label_12e308;
        case 0x12e30cu: goto label_12e30c;
        case 0x12e310u: goto label_12e310;
        case 0x12e314u: goto label_12e314;
        case 0x12e318u: goto label_12e318;
        case 0x12e31cu: goto label_12e31c;
        case 0x12e320u: goto label_12e320;
        case 0x12e324u: goto label_12e324;
        case 0x12e328u: goto label_12e328;
        case 0x12e32cu: goto label_12e32c;
        case 0x12e330u: goto label_12e330;
        case 0x12e334u: goto label_12e334;
        case 0x12e338u: goto label_12e338;
        case 0x12e33cu: goto label_12e33c;
        case 0x12e340u: goto label_12e340;
        case 0x12e344u: goto label_12e344;
        case 0x12e348u: goto label_12e348;
        case 0x12e34cu: goto label_12e34c;
        case 0x12e350u: goto label_12e350;
        case 0x12e354u: goto label_12e354;
        case 0x12e358u: goto label_12e358;
        case 0x12e35cu: goto label_12e35c;
        case 0x12e360u: goto label_12e360;
        case 0x12e364u: goto label_12e364;
        case 0x12e368u: goto label_12e368;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e370u: goto label_12e370;
        case 0x12e374u: goto label_12e374;
        case 0x12e378u: goto label_12e378;
        case 0x12e37cu: goto label_12e37c;
        case 0x12e380u: goto label_12e380;
        case 0x12e384u: goto label_12e384;
        case 0x12e388u: goto label_12e388;
        case 0x12e38cu: goto label_12e38c;
        case 0x12e390u: goto label_12e390;
        case 0x12e394u: goto label_12e394;
        case 0x12e398u: goto label_12e398;
        case 0x12e39cu: goto label_12e39c;
        case 0x12e3a0u: goto label_12e3a0;
        case 0x12e3a4u: goto label_12e3a4;
        case 0x12e3a8u: goto label_12e3a8;
        case 0x12e3acu: goto label_12e3ac;
        case 0x12e3b0u: goto label_12e3b0;
        case 0x12e3b4u: goto label_12e3b4;
        case 0x12e3b8u: goto label_12e3b8;
        case 0x12e3bcu: goto label_12e3bc;
        case 0x12e3c0u: goto label_12e3c0;
        case 0x12e3c4u: goto label_12e3c4;
        case 0x12e3c8u: goto label_12e3c8;
        case 0x12e3ccu: goto label_12e3cc;
        case 0x12e3d0u: goto label_12e3d0;
        case 0x12e3d4u: goto label_12e3d4;
        case 0x12e3d8u: goto label_12e3d8;
        case 0x12e3dcu: goto label_12e3dc;
        case 0x12e3e0u: goto label_12e3e0;
        case 0x12e3e4u: goto label_12e3e4;
        case 0x12e3e8u: goto label_12e3e8;
        case 0x12e3ecu: goto label_12e3ec;
        case 0x12e3f0u: goto label_12e3f0;
        case 0x12e3f4u: goto label_12e3f4;
        case 0x12e3f8u: goto label_12e3f8;
        case 0x12e3fcu: goto label_12e3fc;
        case 0x12e400u: goto label_12e400;
        case 0x12e404u: goto label_12e404;
        case 0x12e408u: goto label_12e408;
        case 0x12e40cu: goto label_12e40c;
        case 0x12e410u: goto label_12e410;
        case 0x12e414u: goto label_12e414;
        case 0x12e418u: goto label_12e418;
        case 0x12e41cu: goto label_12e41c;
        case 0x12e420u: goto label_12e420;
        case 0x12e424u: goto label_12e424;
        case 0x12e428u: goto label_12e428;
        case 0x12e42cu: goto label_12e42c;
        case 0x12e430u: goto label_12e430;
        case 0x12e434u: goto label_12e434;
        case 0x12e438u: goto label_12e438;
        case 0x12e43cu: goto label_12e43c;
        case 0x12e440u: goto label_12e440;
        case 0x12e444u: goto label_12e444;
        case 0x12e448u: goto label_12e448;
        case 0x12e44cu: goto label_12e44c;
        case 0x12e450u: goto label_12e450;
        case 0x12e454u: goto label_12e454;
        case 0x12e458u: goto label_12e458;
        case 0x12e45cu: goto label_12e45c;
        case 0x12e460u: goto label_12e460;
        case 0x12e464u: goto label_12e464;
        case 0x12e468u: goto label_12e468;
        case 0x12e46cu: goto label_12e46c;
        case 0x12e470u: goto label_12e470;
        case 0x12e474u: goto label_12e474;
        case 0x12e478u: goto label_12e478;
        case 0x12e47cu: goto label_12e47c;
        case 0x12e480u: goto label_12e480;
        case 0x12e484u: goto label_12e484;
        case 0x12e488u: goto label_12e488;
        case 0x12e48cu: goto label_12e48c;
        case 0x12e490u: goto label_12e490;
        case 0x12e494u: goto label_12e494;
        case 0x12e498u: goto label_12e498;
        case 0x12e49cu: goto label_12e49c;
        case 0x12e4a0u: goto label_12e4a0;
        case 0x12e4a4u: goto label_12e4a4;
        case 0x12e4a8u: goto label_12e4a8;
        case 0x12e4acu: goto label_12e4ac;
        case 0x12e4b0u: goto label_12e4b0;
        case 0x12e4b4u: goto label_12e4b4;
        case 0x12e4b8u: goto label_12e4b8;
        case 0x12e4bcu: goto label_12e4bc;
        case 0x12e4c0u: goto label_12e4c0;
        case 0x12e4c4u: goto label_12e4c4;
        case 0x12e4c8u: goto label_12e4c8;
        case 0x12e4ccu: goto label_12e4cc;
        case 0x12e4d0u: goto label_12e4d0;
        case 0x12e4d4u: goto label_12e4d4;
        case 0x12e4d8u: goto label_12e4d8;
        case 0x12e4dcu: goto label_12e4dc;
        case 0x12e4e0u: goto label_12e4e0;
        case 0x12e4e4u: goto label_12e4e4;
        case 0x12e4e8u: goto label_12e4e8;
        case 0x12e4ecu: goto label_12e4ec;
        case 0x12e4f0u: goto label_12e4f0;
        case 0x12e4f4u: goto label_12e4f4;
        case 0x12e4f8u: goto label_12e4f8;
        case 0x12e4fcu: goto label_12e4fc;
        case 0x12e500u: goto label_12e500;
        case 0x12e504u: goto label_12e504;
        case 0x12e508u: goto label_12e508;
        case 0x12e50cu: goto label_12e50c;
        case 0x12e510u: goto label_12e510;
        case 0x12e514u: goto label_12e514;
        case 0x12e518u: goto label_12e518;
        case 0x12e51cu: goto label_12e51c;
        case 0x12e520u: goto label_12e520;
        case 0x12e524u: goto label_12e524;
        case 0x12e528u: goto label_12e528;
        case 0x12e52cu: goto label_12e52c;
        case 0x12e530u: goto label_12e530;
        case 0x12e534u: goto label_12e534;
        case 0x12e538u: goto label_12e538;
        case 0x12e53cu: goto label_12e53c;
        case 0x12e540u: goto label_12e540;
        case 0x12e544u: goto label_12e544;
        case 0x12e548u: goto label_12e548;
        case 0x12e54cu: goto label_12e54c;
        case 0x12e550u: goto label_12e550;
        case 0x12e554u: goto label_12e554;
        case 0x12e558u: goto label_12e558;
        case 0x12e55cu: goto label_12e55c;
        case 0x12e560u: goto label_12e560;
        case 0x12e564u: goto label_12e564;
        case 0x12e568u: goto label_12e568;
        case 0x12e56cu: goto label_12e56c;
        case 0x12e570u: goto label_12e570;
        case 0x12e574u: goto label_12e574;
        case 0x12e578u: goto label_12e578;
        case 0x12e57cu: goto label_12e57c;
        case 0x12e580u: goto label_12e580;
        case 0x12e584u: goto label_12e584;
        case 0x12e588u: goto label_12e588;
        case 0x12e58cu: goto label_12e58c;
        case 0x12e590u: goto label_12e590;
        case 0x12e594u: goto label_12e594;
        case 0x12e598u: goto label_12e598;
        case 0x12e59cu: goto label_12e59c;
        case 0x12e5a0u: goto label_12e5a0;
        case 0x12e5a4u: goto label_12e5a4;
        case 0x12e5a8u: goto label_12e5a8;
        case 0x12e5acu: goto label_12e5ac;
        case 0x12e5b0u: goto label_12e5b0;
        case 0x12e5b4u: goto label_12e5b4;
        case 0x12e5b8u: goto label_12e5b8;
        case 0x12e5bcu: goto label_12e5bc;
        case 0x12e5c0u: goto label_12e5c0;
        case 0x12e5c4u: goto label_12e5c4;
        case 0x12e5c8u: goto label_12e5c8;
        case 0x12e5ccu: goto label_12e5cc;
        case 0x12e5d0u: goto label_12e5d0;
        case 0x12e5d4u: goto label_12e5d4;
        case 0x12e5d8u: goto label_12e5d8;
        case 0x12e5dcu: goto label_12e5dc;
        case 0x12e5e0u: goto label_12e5e0;
        case 0x12e5e4u: goto label_12e5e4;
        case 0x12e5e8u: goto label_12e5e8;
        case 0x12e5ecu: goto label_12e5ec;
        case 0x12e5f0u: goto label_12e5f0;
        case 0x12e5f4u: goto label_12e5f4;
        case 0x12e5f8u: goto label_12e5f8;
        case 0x12e5fcu: goto label_12e5fc;
        case 0x12e600u: goto label_12e600;
        case 0x12e604u: goto label_12e604;
        case 0x12e608u: goto label_12e608;
        case 0x12e60cu: goto label_12e60c;
        case 0x12e610u: goto label_12e610;
        case 0x12e614u: goto label_12e614;
        case 0x12e618u: goto label_12e618;
        case 0x12e61cu: goto label_12e61c;
        case 0x12e620u: goto label_12e620;
        case 0x12e624u: goto label_12e624;
        case 0x12e628u: goto label_12e628;
        case 0x12e62cu: goto label_12e62c;
        case 0x12e630u: goto label_12e630;
        case 0x12e634u: goto label_12e634;
        case 0x12e638u: goto label_12e638;
        case 0x12e63cu: goto label_12e63c;
        case 0x12e640u: goto label_12e640;
        case 0x12e644u: goto label_12e644;
        case 0x12e648u: goto label_12e648;
        case 0x12e64cu: goto label_12e64c;
        case 0x12e650u: goto label_12e650;
        case 0x12e654u: goto label_12e654;
        case 0x12e658u: goto label_12e658;
        case 0x12e65cu: goto label_12e65c;
        case 0x12e660u: goto label_12e660;
        case 0x12e664u: goto label_12e664;
        case 0x12e668u: goto label_12e668;
        case 0x12e66cu: goto label_12e66c;
        case 0x12e670u: goto label_12e670;
        case 0x12e674u: goto label_12e674;
        case 0x12e678u: goto label_12e678;
        case 0x12e67cu: goto label_12e67c;
        case 0x12e680u: goto label_12e680;
        case 0x12e684u: goto label_12e684;
        case 0x12e688u: goto label_12e688;
        case 0x12e68cu: goto label_12e68c;
        case 0x12e690u: goto label_12e690;
        case 0x12e694u: goto label_12e694;
        case 0x12e698u: goto label_12e698;
        case 0x12e69cu: goto label_12e69c;
        case 0x12e6a0u: goto label_12e6a0;
        case 0x12e6a4u: goto label_12e6a4;
        case 0x12e6a8u: goto label_12e6a8;
        case 0x12e6acu: goto label_12e6ac;
        case 0x12e6b0u: goto label_12e6b0;
        case 0x12e6b4u: goto label_12e6b4;
        case 0x12e6b8u: goto label_12e6b8;
        case 0x12e6bcu: goto label_12e6bc;
        case 0x12e6c0u: goto label_12e6c0;
        case 0x12e6c4u: goto label_12e6c4;
        case 0x12e6c8u: goto label_12e6c8;
        case 0x12e6ccu: goto label_12e6cc;
        case 0x12e6d0u: goto label_12e6d0;
        case 0x12e6d4u: goto label_12e6d4;
        case 0x12e6d8u: goto label_12e6d8;
        case 0x12e6dcu: goto label_12e6dc;
        case 0x12e6e0u: goto label_12e6e0;
        case 0x12e6e4u: goto label_12e6e4;
        case 0x12e6e8u: goto label_12e6e8;
        case 0x12e6ecu: goto label_12e6ec;
        case 0x12e6f0u: goto label_12e6f0;
        case 0x12e6f4u: goto label_12e6f4;
        case 0x12e6f8u: goto label_12e6f8;
        case 0x12e6fcu: goto label_12e6fc;
        case 0x12e700u: goto label_12e700;
        case 0x12e704u: goto label_12e704;
        case 0x12e708u: goto label_12e708;
        case 0x12e70cu: goto label_12e70c;
        case 0x12e710u: goto label_12e710;
        case 0x12e714u: goto label_12e714;
        case 0x12e718u: goto label_12e718;
        case 0x12e71cu: goto label_12e71c;
        case 0x12e720u: goto label_12e720;
        case 0x12e724u: goto label_12e724;
        case 0x12e728u: goto label_12e728;
        case 0x12e72cu: goto label_12e72c;
        case 0x12e730u: goto label_12e730;
        case 0x12e734u: goto label_12e734;
        case 0x12e738u: goto label_12e738;
        case 0x12e73cu: goto label_12e73c;
        case 0x12e740u: goto label_12e740;
        case 0x12e744u: goto label_12e744;
        case 0x12e748u: goto label_12e748;
        case 0x12e74cu: goto label_12e74c;
        case 0x12e750u: goto label_12e750;
        case 0x12e754u: goto label_12e754;
        case 0x12e758u: goto label_12e758;
        case 0x12e75cu: goto label_12e75c;
        case 0x12e760u: goto label_12e760;
        case 0x12e764u: goto label_12e764;
        case 0x12e768u: goto label_12e768;
        case 0x12e76cu: goto label_12e76c;
        case 0x12e770u: goto label_12e770;
        case 0x12e774u: goto label_12e774;
        case 0x12e778u: goto label_12e778;
        case 0x12e77cu: goto label_12e77c;
        case 0x12e780u: goto label_12e780;
        case 0x12e784u: goto label_12e784;
        case 0x12e788u: goto label_12e788;
        case 0x12e78cu: goto label_12e78c;
        case 0x12e790u: goto label_12e790;
        case 0x12e794u: goto label_12e794;
        case 0x12e798u: goto label_12e798;
        case 0x12e79cu: goto label_12e79c;
        case 0x12e7a0u: goto label_12e7a0;
        case 0x12e7a4u: goto label_12e7a4;
        case 0x12e7a8u: goto label_12e7a8;
        case 0x12e7acu: goto label_12e7ac;
        case 0x12e7b0u: goto label_12e7b0;
        case 0x12e7b4u: goto label_12e7b4;
        case 0x12e7b8u: goto label_12e7b8;
        case 0x12e7bcu: goto label_12e7bc;
        case 0x12e7c0u: goto label_12e7c0;
        case 0x12e7c4u: goto label_12e7c4;
        case 0x12e7c8u: goto label_12e7c8;
        case 0x12e7ccu: goto label_12e7cc;
        case 0x12e7d0u: goto label_12e7d0;
        case 0x12e7d4u: goto label_12e7d4;
        case 0x12e7d8u: goto label_12e7d8;
        case 0x12e7dcu: goto label_12e7dc;
        case 0x12e7e0u: goto label_12e7e0;
        case 0x12e7e4u: goto label_12e7e4;
        case 0x12e7e8u: goto label_12e7e8;
        case 0x12e7ecu: goto label_12e7ec;
        case 0x12e7f0u: goto label_12e7f0;
        case 0x12e7f4u: goto label_12e7f4;
        case 0x12e7f8u: goto label_12e7f8;
        case 0x12e7fcu: goto label_12e7fc;
        case 0x12e800u: goto label_12e800;
        case 0x12e804u: goto label_12e804;
        case 0x12e808u: goto label_12e808;
        case 0x12e80cu: goto label_12e80c;
        case 0x12e810u: goto label_12e810;
        case 0x12e814u: goto label_12e814;
        case 0x12e818u: goto label_12e818;
        case 0x12e81cu: goto label_12e81c;
        case 0x12e820u: goto label_12e820;
        case 0x12e824u: goto label_12e824;
        case 0x12e828u: goto label_12e828;
        case 0x12e82cu: goto label_12e82c;
        case 0x12e830u: goto label_12e830;
        case 0x12e834u: goto label_12e834;
        case 0x12e838u: goto label_12e838;
        case 0x12e83cu: goto label_12e83c;
        case 0x12e840u: goto label_12e840;
        case 0x12e844u: goto label_12e844;
        case 0x12e848u: goto label_12e848;
        case 0x12e84cu: goto label_12e84c;
        case 0x12e850u: goto label_12e850;
        case 0x12e854u: goto label_12e854;
        case 0x12e858u: goto label_12e858;
        case 0x12e85cu: goto label_12e85c;
        case 0x12e860u: goto label_12e860;
        case 0x12e864u: goto label_12e864;
        case 0x12e868u: goto label_12e868;
        case 0x12e86cu: goto label_12e86c;
        case 0x12e870u: goto label_12e870;
        case 0x12e874u: goto label_12e874;
        case 0x12e878u: goto label_12e878;
        case 0x12e87cu: goto label_12e87c;
        case 0x12e880u: goto label_12e880;
        case 0x12e884u: goto label_12e884;
        case 0x12e888u: goto label_12e888;
        case 0x12e88cu: goto label_12e88c;
        case 0x12e890u: goto label_12e890;
        case 0x12e894u: goto label_12e894;
        case 0x12e898u: goto label_12e898;
        case 0x12e89cu: goto label_12e89c;
        case 0x12e8a0u: goto label_12e8a0;
        case 0x12e8a4u: goto label_12e8a4;
        case 0x12e8a8u: goto label_12e8a8;
        case 0x12e8acu: goto label_12e8ac;
        case 0x12e8b0u: goto label_12e8b0;
        case 0x12e8b4u: goto label_12e8b4;
        case 0x12e8b8u: goto label_12e8b8;
        case 0x12e8bcu: goto label_12e8bc;
        case 0x12e8c0u: goto label_12e8c0;
        case 0x12e8c4u: goto label_12e8c4;
        case 0x12e8c8u: goto label_12e8c8;
        case 0x12e8ccu: goto label_12e8cc;
        case 0x12e8d0u: goto label_12e8d0;
        case 0x12e8d4u: goto label_12e8d4;
        case 0x12e8d8u: goto label_12e8d8;
        case 0x12e8dcu: goto label_12e8dc;
        case 0x12e8e0u: goto label_12e8e0;
        case 0x12e8e4u: goto label_12e8e4;
        case 0x12e8e8u: goto label_12e8e8;
        case 0x12e8ecu: goto label_12e8ec;
        case 0x12e8f0u: goto label_12e8f0;
        case 0x12e8f4u: goto label_12e8f4;
        case 0x12e8f8u: goto label_12e8f8;
        case 0x12e8fcu: goto label_12e8fc;
        case 0x12e900u: goto label_12e900;
        case 0x12e904u: goto label_12e904;
        case 0x12e908u: goto label_12e908;
        case 0x12e90cu: goto label_12e90c;
        case 0x12e910u: goto label_12e910;
        case 0x12e914u: goto label_12e914;
        case 0x12e918u: goto label_12e918;
        case 0x12e91cu: goto label_12e91c;
        case 0x12e920u: goto label_12e920;
        case 0x12e924u: goto label_12e924;
        case 0x12e928u: goto label_12e928;
        case 0x12e92cu: goto label_12e92c;
        case 0x12e930u: goto label_12e930;
        case 0x12e934u: goto label_12e934;
        case 0x12e938u: goto label_12e938;
        case 0x12e93cu: goto label_12e93c;
        case 0x12e940u: goto label_12e940;
        case 0x12e944u: goto label_12e944;
        case 0x12e948u: goto label_12e948;
        case 0x12e94cu: goto label_12e94c;
        case 0x12e950u: goto label_12e950;
        case 0x12e954u: goto label_12e954;
        case 0x12e958u: goto label_12e958;
        case 0x12e95cu: goto label_12e95c;
        case 0x12e960u: goto label_12e960;
        case 0x12e964u: goto label_12e964;
        case 0x12e968u: goto label_12e968;
        case 0x12e96cu: goto label_12e96c;
        case 0x12e970u: goto label_12e970;
        case 0x12e974u: goto label_12e974;
        case 0x12e978u: goto label_12e978;
        case 0x12e97cu: goto label_12e97c;
        case 0x12e980u: goto label_12e980;
        case 0x12e984u: goto label_12e984;
        case 0x12e988u: goto label_12e988;
        case 0x12e98cu: goto label_12e98c;
        case 0x12e990u: goto label_12e990;
        case 0x12e994u: goto label_12e994;
        case 0x12e998u: goto label_12e998;
        case 0x12e99cu: goto label_12e99c;
        case 0x12e9a0u: goto label_12e9a0;
        case 0x12e9a4u: goto label_12e9a4;
        default: break;
    }

    ctx->pc = 0x12e170u;

label_12e170:
    // 0x12e170: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x12e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_12e174:
    // 0x12e174: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x12e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_12e178:
    // 0x12e178: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x12e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_12e17c:
    // 0x12e17c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12e17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12e180:
    // 0x12e180: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x12e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_12e184:
    // 0x12e184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e188:
    // 0x12e188: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x12e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_12e18c:
    // 0x12e18c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12e18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12e190:
    // 0x12e190: 0xe7b90178  swc1        $f25, 0x178($sp)
    ctx->pc = 0x12e190u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_12e194:
    // 0x12e194: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12e194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e198:
    // 0x12e198: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x12e198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_12e19c:
    // 0x12e19c: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x12e19cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_12e1a0:
    // 0x12e1a0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x12e1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_12e1a4:
    // 0x12e1a4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x12e1a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_12e1a8:
    // 0x12e1a8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x12e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_12e1ac:
    // 0x12e1ac: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x12e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_12e1b0:
    // 0x12e1b0: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x12e1b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_12e1b4:
    // 0x12e1b4: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x12e1b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_12e1b8:
    // 0x12e1b8: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x12e1b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_12e1bc:
    // 0x12e1bc: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x12e1bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_12e1c0:
    // 0x12e1c0: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x12e1c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_12e1c4:
    // 0x12e1c4: 0x9243045b  lbu         $v1, 0x45B($s2)
    ctx->pc = 0x12e1c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1115)));
label_12e1c8:
    // 0x12e1c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_12e1cc:
    if (ctx->pc == 0x12E1CCu) {
        ctx->pc = 0x12E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1C8u;
        // 0x12e1cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1D0u;
        goto label_12e1d0;
    }
    ctx->pc = 0x12E1C8u;
    {
        const bool branch_taken_0x12e1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1C8u;
        // 0x12e1cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1c8) {
            ctx->pc = 0x12E1D8u;
            goto label_12e1d8;
        }
    }
    ctx->pc = 0x12E1D0u;
label_12e1d0:
    // 0x12e1d0: 0x7a4201e0  lq          $v0, 0x1E0($s2)
    ctx->pc = 0x12e1d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 480)));
label_12e1d4:
    // 0x12e1d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12e1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_12e1d8:
    // 0x12e1d8: 0xc08a608  jal         func_229820
label_12e1dc:
    if (ctx->pc == 0x12E1DCu) {
        ctx->pc = 0x12E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1D8u;
        // 0x12e1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1E0u;
        goto label_12e1e0;
    }
    ctx->pc = 0x12E1D8u;
    SET_GPR_U32(ctx, 31, 0x12E1E0u);
    ctx->pc = 0x12E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1D8u;
    // 0x12e1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229820u, 0x12E1D8u, 0x12E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1E0u;
label_12e1e0:
    // 0x12e1e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e1e4:
    // 0x12e1e4: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_12e1e8:
    if (ctx->pc == 0x12E1E8u) {
        ctx->pc = 0x12E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1E4u;
        // 0x12e1e8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E1ECu;
        goto label_12e1ec;
    }
    ctx->pc = 0x12E1E4u;
    {
        const bool branch_taken_0x12e1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1E4u;
        // 0x12e1e8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1e4) {
            ctx->pc = 0x12E23Cu;
            goto label_12e23c;
        }
    }
    ctx->pc = 0x12E1ECu;
label_12e1ec:
    // 0x12e1ec: 0x84b00092  lh          $s0, 0x92($a1)
    ctx->pc = 0x12e1ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_12e1f0:
    // 0x12e1f0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x12e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_12e1f4:
    // 0x12e1f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12e1f8:
    // 0x12e1f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12e1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12e1fc:
    // 0x12e1fc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x12e1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_12e200:
    // 0x12e200: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12e204:
    // 0x12e204: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12e204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12e208:
    // 0x12e208: 0xc136b24  jal         func_4DAC90
label_12e20c:
    if (ctx->pc == 0x12E20Cu) {
        ctx->pc = 0x12E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E208u;
        // 0x12e20c: 0x24a504e0  addiu       $a1, $a1, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E210u;
        goto label_12e210;
    }
    ctx->pc = 0x12E208u;
    SET_GPR_U32(ctx, 31, 0x12E210u);
    ctx->pc = 0x12E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E208u;
    // 0x12e20c: 0x24a504e0  addiu       $a1, $a1, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12E208u, 0x12E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E210u;
label_12e210:
    // 0x12e210: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12e210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12e214:
    // 0x12e214: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12e218:
    // 0x12e218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e21c:
    // 0x12e21c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12e21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12e220:
    // 0x12e220: 0xc136b18  jal         func_4DAC60
label_12e224:
    if (ctx->pc == 0x12E224u) {
        ctx->pc = 0x12E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E220u;
        // 0x12e224: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E228u;
        goto label_12e228;
    }
    ctx->pc = 0x12E220u;
    SET_GPR_U32(ctx, 31, 0x12E228u);
    ctx->pc = 0x12E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E220u;
    // 0x12e224: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12E220u, 0x12E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E228u;
label_12e228:
    // 0x12e228: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12e228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12e22c:
    // 0x12e22c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12e230:
    // 0x12e230: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12e230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12e234:
    // 0x12e234: 0x10000010  b           . + 4 + (0x10 << 2)
label_12e238:
    if (ctx->pc == 0x12E238u) {
        ctx->pc = 0x12E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E234u;
        // 0x12e238: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E23Cu;
        goto label_12e23c;
    }
    ctx->pc = 0x12E234u;
    {
        const bool branch_taken_0x12e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E234u;
        // 0x12e238: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e234) {
            ctx->pc = 0x12E278u;
            goto label_12e278;
        }
    }
    ctx->pc = 0x12E23Cu;
label_12e23c:
    // 0x12e23c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e240:
    // 0x12e240: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x12e240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12e244:
    // 0x12e244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e248:
    // 0x12e248: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_12e24c:
    // 0x12e24c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x12e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_12e250:
    // 0x12e250: 0x60f809  jalr        $v1
label_12e254:
    if (ctx->pc == 0x12E254u) {
        ctx->pc = 0x12E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E250u;
        // 0x12e254: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E258u;
        goto label_12e258;
    }
    ctx->pc = 0x12E250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E258u);
        ctx->pc = 0x12E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E250u;
        // 0x12e254: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E250u, 0x12E258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E258u;
label_12e258:
    // 0x12e258: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12e258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12e25c:
    // 0x12e25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e260:
    // 0x12e260: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12e260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12e264:
    // 0x12e264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e268:
    // 0x12e268: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12e26c:
    // 0x12e26c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x12e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e270:
    // 0x12e270: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12e270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12e274:
    // 0x12e274: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x12e274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12e278:
    // 0x12e278: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12e278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12e27c:
    // 0x12e27c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e280:
    // 0x12e280: 0xc0cdb6a  jal         func_336DA8
label_12e284:
    if (ctx->pc == 0x12E284u) {
        ctx->pc = 0x12E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E280u;
        // 0x12e284: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E288u;
        goto label_12e288;
    }
    ctx->pc = 0x12E280u;
    SET_GPR_U32(ctx, 31, 0x12E288u);
    ctx->pc = 0x12E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E280u;
    // 0x12e284: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12E280u, 0x12E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E288u;
label_12e288:
    // 0x12e288: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12e288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e28c:
    // 0x12e28c: 0x0  nop
    ctx->pc = 0x12e28cu;
    // NOP
label_12e290:
    // 0x12e290: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12e290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e294:
    // 0x12e294: 0x0  nop
    ctx->pc = 0x12e294u;
    // NOP
label_12e298:
    // 0x12e298: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
label_12e29c:
    if (ctx->pc == 0x12E29Cu) {
        ctx->pc = 0x12E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E298u;
        // 0x12e29c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2A0u;
        goto label_12e2a0;
    }
    ctx->pc = 0x12E298u;
    {
        const bool branch_taken_0x12e298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E298u;
        // 0x12e29c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e298) {
            ctx->pc = 0x12E3C4u;
            goto label_12e3c4;
        }
    }
    ctx->pc = 0x12E2A0u;
label_12e2a0:
    // 0x12e2a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12e2a4:
    // 0x12e2a4: 0xc136afa  jal         func_4DABE8
label_12e2a8:
    if (ctx->pc == 0x12E2A8u) {
        ctx->pc = 0x12E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2A4u;
        // 0x12e2a8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2ACu;
        goto label_12e2ac;
    }
    ctx->pc = 0x12E2A4u;
    SET_GPR_U32(ctx, 31, 0x12E2ACu);
    ctx->pc = 0x12E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2A4u;
    // 0x12e2a8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12E2A4u, 0x12E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2ACu;
label_12e2ac:
    // 0x12e2ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12e2acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12e2b0:
    // 0x12e2b0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x12e2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_12e2b4:
    // 0x12e2b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12e2b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e2b8:
    // 0x12e2b8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12e2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e2bc:
    // 0x12e2bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e2bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e2c0:
    // 0x12e2c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12e2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e2c4:
    // 0x12e2c4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12e2c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e2c8:
    // 0x12e2c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12e2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e2cc:
    // 0x12e2cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e2d0:
    // 0x12e2d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12e2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e2d4:
    // 0x12e2d4: 0x0  nop
    ctx->pc = 0x12e2d4u;
    // NOP
label_12e2d8:
    // 0x12e2d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_12e2dc:
    if (ctx->pc == 0x12E2DCu) {
        ctx->pc = 0x12E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2D8u;
        // 0x12e2dc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2E0u;
        goto label_12e2e0;
    }
    ctx->pc = 0x12E2D8u;
    {
        const bool branch_taken_0x12e2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2D8u;
        // 0x12e2dc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2d8) {
            ctx->pc = 0x12E2E4u;
            goto label_12e2e4;
        }
    }
    ctx->pc = 0x12E2E0u;
label_12e2e0:
    // 0x12e2e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12e2e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e2e4:
    // 0x12e2e4: 0x146001a2  bnez        $v1, . + 4 + (0x1A2 << 2)
label_12e2e8:
    if (ctx->pc == 0x12E2E8u) {
        ctx->pc = 0x12E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E4u;
        // 0x12e2e8: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2ECu;
        goto label_12e2ec;
    }
    ctx->pc = 0x12E2E4u;
    {
        const bool branch_taken_0x12e2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E4u;
        // 0x12e2e8: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2e4) {
            ctx->pc = 0x12E970u;
            goto label_12e970;
        }
    }
    ctx->pc = 0x12E2ECu;
label_12e2ec:
    // 0x12e2ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12e2f0:
    // 0x12e2f0: 0x7a470180  lq          $a3, 0x180($s2)
    ctx->pc = 0x12e2f0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 384)));
label_12e2f4:
    // 0x12e2f4: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x12e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_12e2f8:
    // 0x12e2f8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_12e2fc:
    // 0x12e2fc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x12e2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12e300:
    // 0x12e300: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12e300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12e304:
    // 0x12e304: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_12e308:
    // 0x12e308: 0x26460180  addiu       $a2, $s2, 0x180
    ctx->pc = 0x12e308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_12e30c:
    // 0x12e30c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12e30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12e310:
    // 0x12e310: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x12e310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12e314:
    // 0x12e314: 0x25038af8  addiu       $v1, $t0, -0x7508
    ctx->pc = 0x12e314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937336));
label_12e318:
    // 0x12e318: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x12e318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_12e31c:
    // 0x12e31c: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x12e31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_12e320:
    // 0x12e320: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x12e320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_12e324:
    // 0x12e324: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x12e324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_12e328:
    // 0x12e328: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_12e32c:
    // 0x12e32c: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x12e32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12e330:
    // 0x12e330: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x12e330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12e334:
    // 0x12e334: 0xb3aa003f  sdl         $t2, 0x3F($sp)
    ctx->pc = 0x12e334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12e338:
    // 0x12e338: 0xb7aa0038  sdr         $t2, 0x38($sp)
    ctx->pc = 0x12e338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12e33c:
    // 0x12e33c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_12e340:
    // 0x12e340: 0xc136afa  jal         func_4DABE8
label_12e344:
    if (ctx->pc == 0x12E344u) {
        ctx->pc = 0x12E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E340u;
        // 0x12e344: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E348u;
        goto label_12e348;
    }
    ctx->pc = 0x12E340u;
    SET_GPR_U32(ctx, 31, 0x12E348u);
    ctx->pc = 0x12E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E340u;
    // 0x12e344: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12E340u, 0x12E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E348u;
label_12e348:
    // 0x12e348: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x12e348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12e34c:
    // 0x12e34c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12e350:
    // 0x12e350: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12e350u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e354:
    // 0x12e354: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12e354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e358:
    // 0x12e358: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e35c:
    // 0x12e35c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12e35cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e360:
    // 0x12e360: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12e360u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_12e364:
    // 0x12e364: 0x4a0003bf  vwaitq
    ctx->pc = 0x12e364u;
    // VWAITQ (Q already resolved in this runtime)
label_12e368:
    // 0x12e368: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12e368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e36c:
    // 0x12e36c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x12e36cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e370:
    // 0x12e370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12e374:
    // 0x12e374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12e374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12e378:
    // 0x12e378: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12e378u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e37c:
    // 0x12e37c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12e37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e380:
    // 0x12e380: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x12e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_12e384:
    // 0x12e384: 0x0  nop
    ctx->pc = 0x12e384u;
    // NOP
label_12e388:
    // 0x12e388: 0x0  nop
    ctx->pc = 0x12e388u;
    // NOP
label_12e38c:
    // 0x12e38c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x12e38cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_12e390:
    // 0x12e390: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x12e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_12e394:
    // 0x12e394: 0xc136b24  jal         func_4DAC90
label_12e398:
    if (ctx->pc == 0x12E398u) {
        ctx->pc = 0x12E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E394u;
        // 0x12e398: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E39Cu;
        goto label_12e39c;
    }
    ctx->pc = 0x12E394u;
    SET_GPR_U32(ctx, 31, 0x12E39Cu);
    ctx->pc = 0x12E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E394u;
    // 0x12e398: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12E394u, 0x12E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E39Cu;
label_12e39c:
    // 0x12e39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e3a0:
    // 0x12e3a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12e3a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e3a4:
    // 0x12e3a4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x12e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_12e3a8:
    // 0x12e3a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12e3ac:
    // 0x12e3ac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x12e3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12e3b0:
    // 0x12e3b0: 0xc0d4336  jal         func_350CD8
label_12e3b4:
    if (ctx->pc == 0x12E3B4u) {
        ctx->pc = 0x12E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B0u;
        // 0x12e3b4: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3B8u;
        goto label_12e3b8;
    }
    ctx->pc = 0x12E3B0u;
    SET_GPR_U32(ctx, 31, 0x12E3B8u);
    ctx->pc = 0x12E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3B0u;
    // 0x12e3b4: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12E3B0u, 0x12E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3B8u;
label_12e3b8:
    // 0x12e3b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_12e3bc:
    // 0x12e3bc: 0x1440016c  bnez        $v0, . + 4 + (0x16C << 2)
label_12e3c0:
    if (ctx->pc == 0x12E3C0u) {
        ctx->pc = 0x12E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3BCu;
        // 0x12e3c0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3C4u;
        goto label_12e3c4;
    }
    ctx->pc = 0x12E3BCu;
    {
        const bool branch_taken_0x12e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3BCu;
        // 0x12e3c0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3bc) {
            ctx->pc = 0x12E970u;
            goto label_12e970;
        }
    }
    ctx->pc = 0x12E3C4u;
label_12e3c4:
    // 0x12e3c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12e3c8:
    // 0x12e3c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12e3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e3cc:
    // 0x12e3cc: 0x26460240  addiu       $a2, $s2, 0x240
    ctx->pc = 0x12e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
label_12e3d0:
    // 0x12e3d0: 0xc0cdb6a  jal         func_336DA8
label_12e3d4:
    if (ctx->pc == 0x12E3D4u) {
        ctx->pc = 0x12E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3D0u;
        // 0x12e3d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3D8u;
        goto label_12e3d8;
    }
    ctx->pc = 0x12E3D0u;
    SET_GPR_U32(ctx, 31, 0x12E3D8u);
    ctx->pc = 0x12E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3D0u;
    // 0x12e3d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12E3D0u, 0x12E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3D8u;
label_12e3d8:
    // 0x12e3d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12e3dc:
    // 0x12e3dc: 0x844402a8  lh          $a0, 0x2A8($v0)
    ctx->pc = 0x12e3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 680)));
label_12e3e0:
    // 0x12e3e0: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x12e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
label_12e3e4:
    // 0x12e3e4: 0x60f809  jalr        $v1
label_12e3e8:
    if (ctx->pc == 0x12E3E8u) {
        ctx->pc = 0x12E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3E4u;
        // 0x12e3e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3ECu;
        goto label_12e3ec;
    }
    ctx->pc = 0x12E3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E3ECu);
        ctx->pc = 0x12E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3E4u;
        // 0x12e3e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E3E4u, 0x12E3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E3ECu;
label_12e3ec:
    // 0x12e3ec: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x12e3ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_12e3f0:
    // 0x12e3f0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12e3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_12e3f4:
    // 0x12e3f4: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12e3f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_12e3f8:
    // 0x12e3f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12e3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12e3fc:
    // 0x12e3fc: 0xc12e29c  jal         func_4B8A70
label_12e400:
    if (ctx->pc == 0x12E400u) {
        ctx->pc = 0x12E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3FCu;
        // 0x12e400: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E404u;
        goto label_12e404;
    }
    ctx->pc = 0x12E3FCu;
    SET_GPR_U32(ctx, 31, 0x12E404u);
    ctx->pc = 0x12E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3FCu;
    // 0x12e400: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12E3FCu, 0x12E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E404u;
label_12e404:
    // 0x12e404: 0x9242045b  lbu         $v0, 0x45B($s2)
    ctx->pc = 0x12e404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1115)));
label_12e408:
    // 0x12e408: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
label_12e40c:
    if (ctx->pc == 0x12E40Cu) {
        ctx->pc = 0x12E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E408u;
        // 0x12e40c: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E410u;
        goto label_12e410;
    }
    ctx->pc = 0x12E408u;
    {
        const bool branch_taken_0x12e408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E408u;
        // 0x12e40c: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e408) {
            ctx->pc = 0x12E7BCu;
            goto label_12e7bc;
        }
    }
    ctx->pc = 0x12E410u;
label_12e410:
    // 0x12e410: 0x7a4202a0  lq          $v0, 0x2A0($s2)
    ctx->pc = 0x12e410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 672)));
label_12e414:
    // 0x12e414: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12e418:
    // 0x12e418: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x12e418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_12e41c:
    // 0x12e41c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12e41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12e420:
    // 0x12e420: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x12e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_12e424:
    // 0x12e424: 0xc0cdb6a  jal         func_336DA8
label_12e428:
    if (ctx->pc == 0x12E428u) {
        ctx->pc = 0x12E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E424u;
        // 0x12e428: 0x265002a0  addiu       $s0, $s2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E42Cu;
        goto label_12e42c;
    }
    ctx->pc = 0x12E424u;
    SET_GPR_U32(ctx, 31, 0x12E42Cu);
    ctx->pc = 0x12E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E424u;
    // 0x12e428: 0x265002a0  addiu       $s0, $s2, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12E424u, 0x12E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E42Cu;
label_12e42c:
    // 0x12e42c: 0x7a4502a0  lq          $a1, 0x2A0($s2)
    ctx->pc = 0x12e42cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 672)));
label_12e430:
    // 0x12e430: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12e430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12e434:
    // 0x12e434: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12e434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e438:
    // 0x12e438: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x12e438u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_12e43c:
    // 0x12e43c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12e43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e440:
    // 0x12e440: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e444:
    // 0x12e444: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12e444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e448:
    // 0x12e448: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x12e448u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e44c:
    // 0x12e44c: 0xc605000c  lwc1        $f5, 0xC($s0)
    ctx->pc = 0x12e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12e450:
    // 0x12e450: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x12e450u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e454:
    // 0x12e454: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x12e454u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12e458:
    // 0x12e458: 0x46050541  sub.s       $f21, $f0, $f5
    ctx->pc = 0x12e458u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_12e45c:
    // 0x12e45c: 0xc642032c  lwc1        $f2, 0x32C($s2)
    ctx->pc = 0x12e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12e460:
    // 0x12e460: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12e460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12e464:
    // 0x12e464: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12e464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12e468:
    // 0x12e468: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12e468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12e46c:
    // 0x12e46c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12e46cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12e470:
    // 0x12e470: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12e470u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12e474:
    // 0x12e474: 0x4a0003bf  vwaitq
    ctx->pc = 0x12e474u;
    // VWAITQ (Q already resolved in this runtime)
label_12e478:
    // 0x12e478: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12e478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12e47c:
    // 0x12e47c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12e47cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_12e480:
    // 0x12e480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12e480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12e484:
    // 0x12e484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e488:
    // 0x12e488: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x12e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_12e48c:
    // 0x12e48c: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x12e48cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_12e490:
    // 0x12e490: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x12e490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_12e494:
    // 0x12e494: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x12e494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12e498:
    // 0x12e498: 0x7a420180  lq          $v0, 0x180($s2)
    ctx->pc = 0x12e498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
label_12e49c:
    // 0x12e49c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12e49cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e4a0:
    // 0x12e4a0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x12e4a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_12e4a4:
    // 0x12e4a4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12e4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e4a8:
    // 0x12e4a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e4ac:
    // 0x12e4ac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12e4acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e4b0:
    // 0x12e4b0: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x12e4b0u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e4b4:
    // 0x12e4b4: 0x84e402a8  lh          $a0, 0x2A8($a3)
    ctx->pc = 0x12e4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 680)));
label_12e4b8:
    // 0x12e4b8: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x12e4b8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12e4bc:
    // 0x12e4bc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x12e4bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_12e4c0:
    // 0x12e4c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12e4c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12e4c4:
    // 0x12e4c4: 0x0  nop
    ctx->pc = 0x12e4c4u;
    // NOP
label_12e4c8:
    // 0x12e4c8: 0x0  nop
    ctx->pc = 0x12e4c8u;
    // NOP
label_12e4cc:
    // 0x12e4cc: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x12e4ccu;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[1]);
label_12e4d0:
    // 0x12e4d0: 0x8ce602ac  lw          $a2, 0x2AC($a3)
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 684)));
label_12e4d4:
    // 0x12e4d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12e4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e4d8:
    // 0x12e4d8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x12e4d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_12e4dc:
    // 0x12e4dc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12e4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e4e0:
    // 0x12e4e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e4e4:
    // 0x12e4e4: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x12e4e4u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e4e8:
    // 0x12e4e8: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x12e4e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_12e4ec:
    // 0x12e4ec: 0x46051dc1  sub.s       $f23, $f3, $f5
    ctx->pc = 0x12e4ecu;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_12e4f0:
    // 0x12e4f0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_12e4f4:
    // 0x12e4f4: 0x448ab000  mtc1        $t2, $f22
    ctx->pc = 0x12e4f4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_12e4f8:
    // 0x12e4f8: 0xc0f809  jalr        $a2
label_12e4fc:
    if (ctx->pc == 0x12E4FCu) {
        ctx->pc = 0x12E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F8u;
        // 0x12e4fc: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E500u;
        goto label_12e500;
    }
    ctx->pc = 0x12E4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x12E500u);
        ctx->pc = 0x12E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F8u;
        // 0x12e4fc: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E4F8u, 0x12E500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E500u;
label_12e500:
    // 0x12e500: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x12e500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
label_12e504:
    // 0x12e504: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12e504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_12e508:
    // 0x12e508: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12e508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12e50c:
    // 0x12e50c: 0xc12e29c  jal         func_4B8A70
label_12e510:
    if (ctx->pc == 0x12E510u) {
        ctx->pc = 0x12E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E50Cu;
        // 0x12e510: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E514u;
        goto label_12e514;
    }
    ctx->pc = 0x12E50Cu;
    SET_GPR_U32(ctx, 31, 0x12E514u);
    ctx->pc = 0x12E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E50Cu;
    // 0x12e510: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12E50Cu, 0x12E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E514u;
label_12e514:
    // 0x12e514: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12e514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e518:
    // 0x12e518: 0x0  nop
    ctx->pc = 0x12e518u;
    // NOP
label_12e51c:
    // 0x12e51c: 0x450000a7  bc1f        . + 4 + (0xA7 << 2)
label_12e520:
    if (ctx->pc == 0x12E520u) {
        ctx->pc = 0x12E524u;
        goto label_12e524;
    }
    ctx->pc = 0x12E51Cu;
    {
        const bool branch_taken_0x12e51c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e51c) {
            ctx->pc = 0x12E7BCu;
            goto label_12e7bc;
        }
    }
    ctx->pc = 0x12E524u;
label_12e524:
    // 0x12e524: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x12e524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e528:
    // 0x12e528: 0x0  nop
    ctx->pc = 0x12e528u;
    // NOP
label_12e52c:
    // 0x12e52c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_12e530:
    if (ctx->pc == 0x12E530u) {
        ctx->pc = 0x12E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E52Cu;
        // 0x12e530: 0x4600a606  mov.s       $f24, $f20 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E534u;
        goto label_12e534;
    }
    ctx->pc = 0x12E52Cu;
    {
        const bool branch_taken_0x12e52c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e52c) {
            ctx->pc = 0x12E530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E52Cu;
            // 0x12e530: 0x4600a606  mov.s       $f24, $f20 (Delay Slot)
            ctx->f[24] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E534u;
            goto label_12e534;
        }
    }
    ctx->pc = 0x12E534u;
label_12e534:
    // 0x12e534: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_12e538:
    // 0x12e538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e53c:
    // 0x12e53c: 0x0  nop
    ctx->pc = 0x12e53cu;
    // NOP
label_12e540:
    // 0x12e540: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x12e540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e544:
    // 0x12e544: 0x0  nop
    ctx->pc = 0x12e544u;
    // NOP
label_12e548:
    // 0x12e548: 0x4500009c  bc1f        . + 4 + (0x9C << 2)
label_12e54c:
    if (ctx->pc == 0x12E54Cu) {
        ctx->pc = 0x12E550u;
        goto label_12e550;
    }
    ctx->pc = 0x12E548u;
    {
        const bool branch_taken_0x12e548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e548) {
            ctx->pc = 0x12E7BCu;
            goto label_12e7bc;
        }
    }
    ctx->pc = 0x12E550u;
label_12e550:
    // 0x12e550: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x12e550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e554:
    // 0x12e554: 0x0  nop
    ctx->pc = 0x12e554u;
    // NOP
label_12e558:
    // 0x12e558: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_12e55c:
    if (ctx->pc == 0x12E55Cu) {
        ctx->pc = 0x12E560u;
        goto label_12e560;
    }
    ctx->pc = 0x12E558u;
    {
        const bool branch_taken_0x12e558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e558) {
            ctx->pc = 0x12E570u;
            goto label_12e570;
        }
    }
    ctx->pc = 0x12E560u;
label_12e560:
    // 0x12e560: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x12e560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e564:
    // 0x12e564: 0x0  nop
    ctx->pc = 0x12e564u;
    // NOP
label_12e568:
    // 0x12e568: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_12e56c:
    if (ctx->pc == 0x12E56Cu) {
        ctx->pc = 0x12E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E568u;
        // 0x12e56c: 0x26500180  addiu       $s0, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E570u;
        goto label_12e570;
    }
    ctx->pc = 0x12E568u;
    {
        const bool branch_taken_0x12e568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E568u;
        // 0x12e56c: 0x26500180  addiu       $s0, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e568) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E570u;
label_12e570:
    // 0x12e570: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_12e574:
    // 0x12e574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e578:
    // 0x12e578: 0x0  nop
    ctx->pc = 0x12e578u;
    // NOP
label_12e57c:
    // 0x12e57c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x12e57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e580:
    // 0x12e580: 0x0  nop
    ctx->pc = 0x12e580u;
    // NOP
label_12e584:
    // 0x12e584: 0x4500008d  bc1f        . + 4 + (0x8D << 2)
label_12e588:
    if (ctx->pc == 0x12E588u) {
        ctx->pc = 0x12E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E584u;
        // 0x12e588: 0x26500180  addiu       $s0, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E58Cu;
        goto label_12e58c;
    }
    ctx->pc = 0x12E584u;
    {
        const bool branch_taken_0x12e584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E584u;
        // 0x12e588: 0x26500180  addiu       $s0, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e584) {
            ctx->pc = 0x12E7BCu;
            goto label_12e7bc;
        }
    }
    ctx->pc = 0x12E58Cu;
label_12e58c:
    // 0x12e58c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12e590:
    // 0x12e590: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12e594:
    // 0x12e594: 0xc0cdb6a  jal         func_336DA8
label_12e598:
    if (ctx->pc == 0x12E598u) {
        ctx->pc = 0x12E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E594u;
        // 0x12e598: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E59Cu;
        goto label_12e59c;
    }
    ctx->pc = 0x12E594u;
    SET_GPR_U32(ctx, 31, 0x12E59Cu);
    ctx->pc = 0x12E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E594u;
    // 0x12e598: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12E594u, 0x12E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E59Cu;
label_12e59c:
    // 0x12e59c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12e59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e5a0:
    // 0x12e5a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12e5a4:
    // 0x12e5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e5a8:
    // 0x12e5a8: 0xc0cdb6a  jal         func_336DA8
label_12e5ac:
    if (ctx->pc == 0x12E5ACu) {
        ctx->pc = 0x12E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5A8u;
        // 0x12e5ac: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5B0u;
        goto label_12e5b0;
    }
    ctx->pc = 0x12E5A8u;
    SET_GPR_U32(ctx, 31, 0x12E5B0u);
    ctx->pc = 0x12E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5A8u;
    // 0x12e5ac: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12E5A8u, 0x12E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5B0u;
label_12e5b0:
    // 0x12e5b0: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x12e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12e5b4:
    // 0x12e5b4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x12e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e5b8:
    // 0x12e5b8: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x12e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12e5bc:
    // 0x12e5bc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x12e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12e5c0:
    // 0x12e5c0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x12e5c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_12e5c4:
    // 0x12e5c4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x12e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e5c8:
    // 0x12e5c8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12e5c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_12e5cc:
    // 0x12e5cc: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x12e5ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12e5d0:
    // 0x12e5d0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12e5d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12e5d4:
    // 0x12e5d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12e5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_12e5d8:
    // 0x12e5d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12e5d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12e5dc:
    // 0x12e5dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12e5dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e5e0:
    // 0x12e5e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12e5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e5e4:
    // 0x12e5e4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e5e8:
    // 0x12e5e8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12e5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e5ec:
    // 0x12e5ec: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12e5ecu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e5f0:
    // 0x12e5f0: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x12e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12e5f4:
    // 0x12e5f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12e5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12e5f8:
    // 0x12e5f8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x12e5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_12e5fc:
    // 0x12e5fc: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x12e5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_12e600:
    // 0x12e600: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x12e600u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_12e604:
    // 0x12e604: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x12e604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e608:
    // 0x12e608: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x12e608u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12e60c:
    // 0x12e60c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12e610:
    if (ctx->pc == 0x12E610u) {
        ctx->pc = 0x12E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E60Cu;
        // 0x12e610: 0x46021d41  sub.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E614u;
        goto label_12e614;
    }
    ctx->pc = 0x12E60Cu;
    {
        const bool branch_taken_0x12e60c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E60Cu;
        // 0x12e610: 0x46021d41  sub.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e60c) {
            ctx->pc = 0x12E620u;
            goto label_12e620;
        }
    }
    ctx->pc = 0x12E614u;
label_12e614:
    // 0x12e614: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12e614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e618:
    // 0x12e618: 0x1000001b  b           . + 4 + (0x1B << 2)
label_12e61c:
    if (ctx->pc == 0x12E61Cu) {
        ctx->pc = 0x12E620u;
        goto label_12e620;
    }
    ctx->pc = 0x12E618u;
    {
        const bool branch_taken_0x12e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e618) {
            ctx->pc = 0x12E688u;
            goto label_12e688;
        }
    }
    ctx->pc = 0x12E620u;
label_12e620:
    // 0x12e620: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12e620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12e624:
    // 0x12e624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e628:
    // 0x12e628: 0x0  nop
    ctx->pc = 0x12e628u;
    // NOP
label_12e62c:
    // 0x12e62c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x12e62cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e630:
    // 0x12e630: 0x0  nop
    ctx->pc = 0x12e630u;
    // NOP
label_12e634:
    // 0x12e634: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12e638:
    if (ctx->pc == 0x12E638u) {
        ctx->pc = 0x12E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E634u;
        // 0x12e638: 0x46042302  mul.s       $f12, $f4, $f4 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E63Cu;
        goto label_12e63c;
    }
    ctx->pc = 0x12E634u;
    {
        const bool branch_taken_0x12e634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e634) {
            ctx->pc = 0x12E638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E634u;
            // 0x12e638: 0x46042302  mul.s       $f12, $f4, $f4 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E650u;
            goto label_12e650;
        }
    }
    ctx->pc = 0x12E63Cu;
label_12e63c:
    // 0x12e63c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12e63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12e640:
    // 0x12e640: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e644:
    // 0x12e644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e648:
    // 0x12e648: 0x1000000f  b           . + 4 + (0xF << 2)
label_12e64c:
    if (ctx->pc == 0x12E64Cu) {
        ctx->pc = 0x12E650u;
        goto label_12e650;
    }
    ctx->pc = 0x12E648u;
    {
        const bool branch_taken_0x12e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e648) {
            ctx->pc = 0x12E688u;
            goto label_12e688;
        }
    }
    ctx->pc = 0x12E650u;
label_12e650:
    // 0x12e650: 0x460c3301  sub.s       $f12, $f6, $f12
    ctx->pc = 0x12e650u;
    ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
label_12e654:
    // 0x12e654: 0x0  nop
    ctx->pc = 0x12e654u;
    // NOP
label_12e658:
    // 0x12e658: 0x0  nop
    ctx->pc = 0x12e658u;
    // NOP
label_12e65c:
    // 0x12e65c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12e65cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12e660:
    // 0x12e660: 0x0  nop
    ctx->pc = 0x12e660u;
    // NOP
label_12e664:
    // 0x12e664: 0x0  nop
    ctx->pc = 0x12e664u;
    // NOP
label_12e668:
    // 0x12e668: 0x460c2303  div.s       $f12, $f4, $f12
    ctx->pc = 0x12e668u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[4], ctx->f[12]); }
label_12e66c:
    // 0x12e66c: 0xc0cd5a8  jal         func_3356A0
label_12e670:
    if (ctx->pc == 0x12E670u) {
        ctx->pc = 0x12E674u;
        goto label_12e674;
    }
    ctx->pc = 0x12E66Cu;
    SET_GPR_U32(ctx, 31, 0x12E674u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12E66Cu, 0x12E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E674u;
label_12e674:
    // 0x12e674: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12e674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12e678:
    // 0x12e678: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e67c:
    // 0x12e67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e680:
    // 0x12e680: 0x0  nop
    ctx->pc = 0x12e680u;
    // NOP
label_12e684:
    // 0x12e684: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12e684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12e688:
    // 0x12e688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12e688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e68c:
    // 0x12e68c: 0x0  nop
    ctx->pc = 0x12e68cu;
    // NOP
label_12e690:
    // 0x12e690: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12e690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e694:
    // 0x12e694: 0x0  nop
    ctx->pc = 0x12e694u;
    // NOP
label_12e698:
    // 0x12e698: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_12e69c:
    if (ctx->pc == 0x12E69Cu) {
        ctx->pc = 0x12E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E698u;
        // 0x12e69c: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6A0u;
        goto label_12e6a0;
    }
    ctx->pc = 0x12E698u;
    {
        const bool branch_taken_0x12e698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E698u;
        // 0x12e69c: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e698) {
            ctx->pc = 0x12E6B4u;
            goto label_12e6b4;
        }
    }
    ctx->pc = 0x12E6A0u;
label_12e6a0:
    // 0x12e6a0: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x12e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_12e6a4:
    // 0x12e6a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e6a8:
    // 0x12e6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e6ac:
    // 0x12e6ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_12e6b0:
    if (ctx->pc == 0x12E6B0u) {
        ctx->pc = 0x12E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6ACu;
        // 0x12e6b0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6B4u;
        goto label_12e6b4;
    }
    ctx->pc = 0x12E6ACu;
    {
        const bool branch_taken_0x12e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6ACu;
        // 0x12e6b0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6ac) {
            ctx->pc = 0x12E6C8u;
            goto label_12e6c8;
        }
    }
    ctx->pc = 0x12E6B4u;
label_12e6b4:
    // 0x12e6b4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12e6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12e6b8:
    // 0x12e6b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e6bc:
    // 0x12e6bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e6c0:
    // 0x12e6c0: 0x0  nop
    ctx->pc = 0x12e6c0u;
    // NOP
label_12e6c4:
    // 0x12e6c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12e6c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12e6c8:
    // 0x12e6c8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_12e6cc:
    // 0x12e6cc: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x12e6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_12e6d0:
    // 0x12e6d0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12e6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12e6d4:
    // 0x12e6d4: 0x0  nop
    ctx->pc = 0x12e6d4u;
    // NOP
label_12e6d8:
    // 0x12e6d8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12e6d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e6dc:
    // 0x12e6dc: 0x0  nop
    ctx->pc = 0x12e6dcu;
    // NOP
label_12e6e0:
    // 0x12e6e0: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_12e6e4:
    if (ctx->pc == 0x12E6E4u) {
        ctx->pc = 0x12E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6E0u;
        // 0x12e6e4: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6E8u;
        goto label_12e6e8;
    }
    ctx->pc = 0x12E6E0u;
    {
        const bool branch_taken_0x12e6e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e6e0) {
            ctx->pc = 0x12E6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E6E0u;
            // 0x12e6e4: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E73Cu;
            goto label_12e73c;
        }
    }
    ctx->pc = 0x12E6E8u;
label_12e6e8:
    // 0x12e6e8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x12e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e6ec:
    // 0x12e6ec: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x12e6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e6f0:
    // 0x12e6f0: 0x0  nop
    ctx->pc = 0x12e6f0u;
    // NOP
label_12e6f4:
    // 0x12e6f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_12e6f8:
    if (ctx->pc == 0x12E6F8u) {
        ctx->pc = 0x12E6FCu;
        goto label_12e6fc;
    }
    ctx->pc = 0x12E6F4u;
    {
        const bool branch_taken_0x12e6f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e6f4) {
            ctx->pc = 0x12E710u;
            goto label_12e710;
        }
    }
    ctx->pc = 0x12E6FCu;
label_12e6fc:
    // 0x12e6fc: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x12e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_12e700:
    // 0x12e700: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e704:
    // 0x12e704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e708:
    // 0x12e708: 0x1000000a  b           . + 4 + (0xA << 2)
label_12e70c:
    if (ctx->pc == 0x12E70Cu) {
        ctx->pc = 0x12E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E708u;
        // 0x12e70c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E710u;
        goto label_12e710;
    }
    ctx->pc = 0x12E708u;
    {
        const bool branch_taken_0x12e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E708u;
        // 0x12e70c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e708) {
            ctx->pc = 0x12E734u;
            goto label_12e734;
        }
    }
    ctx->pc = 0x12E710u;
label_12e710:
    // 0x12e710: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x12e710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e714:
    // 0x12e714: 0x0  nop
    ctx->pc = 0x12e714u;
    // NOP
label_12e718:
    // 0x12e718: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_12e71c:
    if (ctx->pc == 0x12E71Cu) {
        ctx->pc = 0x12E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E718u;
        // 0x12e71c: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E720u;
        goto label_12e720;
    }
    ctx->pc = 0x12E718u;
    {
        const bool branch_taken_0x12e718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e718) {
            ctx->pc = 0x12E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E718u;
            // 0x12e71c: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E73Cu;
            goto label_12e73c;
        }
    }
    ctx->pc = 0x12E720u;
label_12e720:
    // 0x12e720: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12e720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12e724:
    // 0x12e724: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e728:
    // 0x12e728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e72c:
    // 0x12e72c: 0x0  nop
    ctx->pc = 0x12e72cu;
    // NOP
label_12e730:
    // 0x12e730: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12e730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12e734:
    // 0x12e734: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12e734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_12e738:
    // 0x12e738: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x12e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e73c:
    // 0x12e73c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x12e73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_12e740:
    // 0x12e740: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12e740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12e744:
    // 0x12e744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e748:
    // 0x12e748: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12e748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12e74c:
    // 0x12e74c: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x12e74cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12e750:
    // 0x12e750: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x12e750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e754:
    // 0x12e754: 0x0  nop
    ctx->pc = 0x12e754u;
    // NOP
label_12e758:
    // 0x12e758: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_12e75c:
    if (ctx->pc == 0x12E75Cu) {
        ctx->pc = 0x12E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E758u;
        // 0x12e75c: 0xe6630000  swc1        $f3, 0x0($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E760u;
        goto label_12e760;
    }
    ctx->pc = 0x12E758u;
    {
        const bool branch_taken_0x12e758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E758u;
        // 0x12e75c: 0xe6630000  swc1        $f3, 0x0($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e758) {
            ctx->pc = 0x12E784u;
            goto label_12e784;
        }
    }
    ctx->pc = 0x12E760u;
label_12e760:
    // 0x12e760: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e764:
    // 0x12e764: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x12e764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_12e768:
    // 0x12e768: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x12e768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
label_12e76c:
    // 0x12e76c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e770:
    // 0x12e770: 0x0  nop
    ctx->pc = 0x12e770u;
    // NOP
label_12e774:
    // 0x12e774: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12e774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12e778:
    // 0x12e778: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x12e778u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
label_12e77c:
    // 0x12e77c: 0x10000009  b           . + 4 + (0x9 << 2)
label_12e780:
    if (ctx->pc == 0x12E780u) {
        ctx->pc = 0x12E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E77Cu;
        // 0x12e780: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E784u;
        goto label_12e784;
    }
    ctx->pc = 0x12E77Cu;
    {
        const bool branch_taken_0x12e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E77Cu;
        // 0x12e780: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e77c) {
            ctx->pc = 0x12E7A4u;
            goto label_12e7a4;
        }
    }
    ctx->pc = 0x12E784u;
label_12e784:
    // 0x12e784: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e788:
    // 0x12e788: 0x3c01c096  lui         $at, 0xC096
    ctx->pc = 0x12e788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49302 << 16));
label_12e78c:
    // 0x12e78c: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x12e78cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
label_12e790:
    // 0x12e790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e794:
    // 0x12e794: 0x0  nop
    ctx->pc = 0x12e794u;
    // NOP
label_12e798:
    // 0x12e798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12e798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12e79c:
    // 0x12e79c: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x12e79cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
label_12e7a0:
    // 0x12e7a0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12e7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_12e7a4:
    // 0x12e7a4: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x12e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12e7a8:
    // 0x12e7a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12e7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e7ac:
    // 0x12e7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e7b0:
    // 0x12e7b0: 0xc04b5a2  jal         func_12D688
label_12e7b4:
    if (ctx->pc == 0x12E7B4u) {
        ctx->pc = 0x12E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7B0u;
        // 0x12e7b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7B8u;
        goto label_12e7b8;
    }
    ctx->pc = 0x12E7B0u;
    SET_GPR_U32(ctx, 31, 0x12E7B8u);
    ctx->pc = 0x12E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7B0u;
    // 0x12e7b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x12E7B0u, 0x12E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7B8u;
label_12e7b8:
    // 0x12e7b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12e7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e7bc:
    // 0x12e7bc: 0x1220006b  beqz        $s1, . + 4 + (0x6B << 2)
label_12e7c0:
    if (ctx->pc == 0x12E7C0u) {
        ctx->pc = 0x12E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7BCu;
        // 0x12e7c0: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7C4u;
        goto label_12e7c4;
    }
    ctx->pc = 0x12E7BCu;
    {
        const bool branch_taken_0x12e7bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7BCu;
        // 0x12e7c0: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7bc) {
            ctx->pc = 0x12E96Cu;
            goto label_12e96c;
        }
    }
    ctx->pc = 0x12E7C4u;
label_12e7c4:
    // 0x12e7c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12e7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12e7c8:
    // 0x12e7c8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x12e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12e7cc:
    // 0x12e7cc: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x12e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_12e7d0:
    // 0x12e7d0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x12e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e7d4:
    // 0x12e7d4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x12e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12e7d8:
    // 0x12e7d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12e7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12e7dc:
    // 0x12e7dc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x12e7dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12e7e0:
    // 0x12e7e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12e7e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_12e7e4:
    // 0x12e7e4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x12e7e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12e7e8:
    // 0x12e7e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12e7e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12e7ec:
    // 0x12e7ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12e7ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e7f0:
    // 0x12e7f0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12e7f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e7f4:
    // 0x12e7f4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e7f8:
    // 0x12e7f8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x12e7f8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e7fc:
    // 0x12e7fc: 0x4486a800  mtc1        $a2, $f21
    ctx->pc = 0x12e7fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_12e800:
    // 0x12e800: 0xc0cdb26  jal         func_336C98
label_12e804:
    if (ctx->pc == 0x12E804u) {
        ctx->pc = 0x12E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E800u;
        // 0x12e804: 0x46000dc1  sub.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E808u;
        goto label_12e808;
    }
    ctx->pc = 0x12E800u;
    SET_GPR_U32(ctx, 31, 0x12E808u);
    ctx->pc = 0x12E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E800u;
    // 0x12e804: 0x46000dc1  sub.s       $f23, $f1, $f0 (Delay Slot)
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x12E800u, 0x12E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E808u;
label_12e808:
    // 0x12e808: 0x4618a834  c.lt.s      $f21, $f24
    ctx->pc = 0x12e808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e80c:
    // 0x12e80c: 0x0  nop
    ctx->pc = 0x12e80cu;
    // NOP
label_12e810:
    // 0x12e810: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_12e814:
    if (ctx->pc == 0x12E814u) {
        ctx->pc = 0x12E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E810u;
        // 0x12e814: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E818u;
        goto label_12e818;
    }
    ctx->pc = 0x12E810u;
    {
        const bool branch_taken_0x12e810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E810u;
        // 0x12e814: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e810) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E818u;
label_12e818:
    // 0x12e818: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12e81c:
    // 0x12e81c: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x12e81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_12e820:
    // 0x12e820: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x12e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_12e824:
    // 0x12e824: 0x60f809  jalr        $v1
label_12e828:
    if (ctx->pc == 0x12E828u) {
        ctx->pc = 0x12E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E824u;
        // 0x12e828: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E82Cu;
        goto label_12e82c;
    }
    ctx->pc = 0x12E824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E82Cu);
        ctx->pc = 0x12E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E824u;
        // 0x12e828: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E824u, 0x12E82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E82Cu;
label_12e82c:
    // 0x12e82c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12e830:
    // 0x12e830: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12e830u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_12e834:
    // 0x12e834: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x12e834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_12e838:
    // 0x12e838: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x12e838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_12e83c:
    // 0x12e83c: 0x60f809  jalr        $v1
label_12e840:
    if (ctx->pc == 0x12E840u) {
        ctx->pc = 0x12E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E83Cu;
        // 0x12e840: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E844u;
        goto label_12e844;
    }
    ctx->pc = 0x12E83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E844u);
        ctx->pc = 0x12E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E83Cu;
        // 0x12e840: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E83Cu, 0x12E844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E844u;
label_12e844:
    // 0x12e844: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x12e844u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12e848:
    // 0x12e848: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x12e848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e84c:
    // 0x12e84c: 0x0  nop
    ctx->pc = 0x12e84cu;
    // NOP
label_12e850:
    // 0x12e850: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_12e854:
    if (ctx->pc == 0x12E854u) {
        ctx->pc = 0x12E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E850u;
        // 0x12e854: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E858u;
        goto label_12e858;
    }
    ctx->pc = 0x12E850u;
    {
        const bool branch_taken_0x12e850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E850u;
        // 0x12e854: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e850) {
            ctx->pc = 0x12E970u;
            goto label_12e970;
        }
    }
    ctx->pc = 0x12E858u;
label_12e858:
    // 0x12e858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12e858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12e85c:
    // 0x12e85c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e860:
    // 0x12e860: 0x0  nop
    ctx->pc = 0x12e860u;
    // NOP
label_12e864:
    // 0x12e864: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x12e864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e868:
    // 0x12e868: 0x0  nop
    ctx->pc = 0x12e868u;
    // NOP
label_12e86c:
    // 0x12e86c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12e870:
    if (ctx->pc == 0x12E870u) {
        ctx->pc = 0x12E874u;
        goto label_12e874;
    }
    ctx->pc = 0x12E86Cu;
    {
        const bool branch_taken_0x12e86c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e86c) {
            ctx->pc = 0x12E880u;
            goto label_12e880;
        }
    }
    ctx->pc = 0x12E874u;
label_12e874:
    // 0x12e874: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12e874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12e878:
    // 0x12e878: 0x1000001c  b           . + 4 + (0x1C << 2)
label_12e87c:
    if (ctx->pc == 0x12E87Cu) {
        ctx->pc = 0x12E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E878u;
        // 0x12e87c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E880u;
        goto label_12e880;
    }
    ctx->pc = 0x12E878u;
    {
        const bool branch_taken_0x12e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E878u;
        // 0x12e87c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e878) {
            ctx->pc = 0x12E8ECu;
            goto label_12e8ec;
        }
    }
    ctx->pc = 0x12E880u;
label_12e880:
    // 0x12e880: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12e880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12e884:
    // 0x12e884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e888:
    // 0x12e888: 0x0  nop
    ctx->pc = 0x12e888u;
    // NOP
label_12e88c:
    // 0x12e88c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x12e88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e890:
    // 0x12e890: 0x0  nop
    ctx->pc = 0x12e890u;
    // NOP
label_12e894:
    // 0x12e894: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12e898:
    if (ctx->pc == 0x12E898u) {
        ctx->pc = 0x12E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E894u;
        // 0x12e898: 0x4615ab02  mul.s       $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E89Cu;
        goto label_12e89c;
    }
    ctx->pc = 0x12E894u;
    {
        const bool branch_taken_0x12e894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e894) {
            ctx->pc = 0x12E898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E894u;
            // 0x12e898: 0x4615ab02  mul.s       $f12, $f21, $f21 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E8B0u;
            goto label_12e8b0;
        }
    }
    ctx->pc = 0x12E89Cu;
label_12e89c:
    // 0x12e89c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12e89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12e8a0:
    // 0x12e8a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e8a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e8a4:
    // 0x12e8a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12e8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12e8a8:
    // 0x12e8a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_12e8ac:
    if (ctx->pc == 0x12E8ACu) {
        ctx->pc = 0x12E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8A8u;
        // 0x12e8ac: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8B0u;
        goto label_12e8b0;
    }
    ctx->pc = 0x12E8A8u;
    {
        const bool branch_taken_0x12e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8A8u;
        // 0x12e8ac: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8a8) {
            ctx->pc = 0x12E8ECu;
            goto label_12e8ec;
        }
    }
    ctx->pc = 0x12E8B0u;
label_12e8b0:
    // 0x12e8b0: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12e8b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12e8b4:
    // 0x12e8b4: 0x0  nop
    ctx->pc = 0x12e8b4u;
    // NOP
label_12e8b8:
    // 0x12e8b8: 0x0  nop
    ctx->pc = 0x12e8b8u;
    // NOP
label_12e8bc:
    // 0x12e8bc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12e8bcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12e8c0:
    // 0x12e8c0: 0x0  nop
    ctx->pc = 0x12e8c0u;
    // NOP
label_12e8c4:
    // 0x12e8c4: 0x0  nop
    ctx->pc = 0x12e8c4u;
    // NOP
label_12e8c8:
    // 0x12e8c8: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x12e8c8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
label_12e8cc:
    // 0x12e8cc: 0xc0cd5a8  jal         func_3356A0
label_12e8d0:
    if (ctx->pc == 0x12E8D0u) {
        ctx->pc = 0x12E8D4u;
        goto label_12e8d4;
    }
    ctx->pc = 0x12E8CCu;
    SET_GPR_U32(ctx, 31, 0x12E8D4u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12E8CCu, 0x12E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8D4u;
label_12e8d4:
    // 0x12e8d4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12e8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12e8d8:
    // 0x12e8d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e8d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e8dc:
    // 0x12e8dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e8e0:
    // 0x12e8e0: 0x0  nop
    ctx->pc = 0x12e8e0u;
    // NOP
label_12e8e4:
    // 0x12e8e4: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x12e8e4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12e8e8:
    // 0x12e8e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12e8ec:
    // 0x12e8ec: 0x844402a8  lh          $a0, 0x2A8($v0)
    ctx->pc = 0x12e8ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 680)));
label_12e8f0:
    // 0x12e8f0: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x12e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
label_12e8f4:
    // 0x12e8f4: 0x60f809  jalr        $v1
label_12e8f8:
    if (ctx->pc == 0x12E8F8u) {
        ctx->pc = 0x12E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8F4u;
        // 0x12e8f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8FCu;
        goto label_12e8fc;
    }
    ctx->pc = 0x12E8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E8FCu);
        ctx->pc = 0x12E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8F4u;
        // 0x12e8f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E8F4u, 0x12E8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E8FCu;
label_12e8fc:
    // 0x12e8fc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12e8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_12e900:
    // 0x12e900: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12e900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_12e904:
    // 0x12e904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e908:
    // 0x12e908: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x12e908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_12e90c:
    // 0x12e90c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12e90cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12e910:
    // 0x12e910: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12e910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12e914:
    // 0x12e914: 0x4601c842  mul.s       $f1, $f25, $f1
    ctx->pc = 0x12e914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
label_12e918:
    // 0x12e918: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x12e918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
label_12e91c:
    // 0x12e91c: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x12e91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
label_12e920:
    // 0x12e920: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12e920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_12e924:
    // 0x12e924: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12e924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12e928:
    // 0x12e928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12e928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12e92c:
    // 0x12e92c: 0x4602b836  c.le.s      $f23, $f2
    ctx->pc = 0x12e92cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e930:
    // 0x12e930: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x12e930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12e934:
    // 0x12e934: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12e934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12e938:
    // 0x12e938: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12e938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_12e93c:
    // 0x12e93c: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x12e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e940:
    // 0x12e940: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x12e940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_12e944:
    // 0x12e944: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x12e944u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
label_12e948:
    // 0x12e948: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12e94c:
    if (ctx->pc == 0x12E94Cu) {
        ctx->pc = 0x12E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E948u;
        // 0x12e94c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E950u;
        goto label_12e950;
    }
    ctx->pc = 0x12E948u;
    {
        const bool branch_taken_0x12e948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E948u;
        // 0x12e94c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e948) {
            ctx->pc = 0x12E958u;
            goto label_12e958;
        }
    }
    ctx->pc = 0x12E950u;
label_12e950:
    // 0x12e950: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12e950u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12e954:
    // 0x12e954: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12e954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_12e958:
    // 0x12e958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e95c:
    // 0x12e95c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x12e95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12e960:
    // 0x12e960: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12e964:
    // 0x12e964: 0xc04b5a2  jal         func_12D688
label_12e968:
    if (ctx->pc == 0x12E968u) {
        ctx->pc = 0x12E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E964u;
        // 0x12e968: 0x24860180  addiu       $a2, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E96Cu;
        goto label_12e96c;
    }
    ctx->pc = 0x12E964u;
    SET_GPR_U32(ctx, 31, 0x12E96Cu);
    ctx->pc = 0x12E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E964u;
    // 0x12e968: 0x24860180  addiu       $a2, $a0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x12E964u, 0x12E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E96Cu;
label_12e96c:
    // 0x12e96c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x12e96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12e970:
    // 0x12e970: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x12e970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_12e974:
    // 0x12e974: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x12e974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_12e978:
    // 0x12e978: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x12e978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_12e97c:
    // 0x12e97c: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x12e97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12e980:
    // 0x12e980: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x12e980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12e984:
    // 0x12e984: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x12e984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_12e988:
    // 0x12e988: 0xc7b90178  lwc1        $f25, 0x178($sp)
    ctx->pc = 0x12e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_12e98c:
    // 0x12e98c: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x12e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_12e990:
    // 0x12e990: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x12e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_12e994:
    // 0x12e994: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x12e994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12e998:
    // 0x12e998: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x12e998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12e99c:
    // 0x12e99c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x12e99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12e9a0:
    // 0x12e9a0: 0x3e00008  jr          $ra
label_12e9a4:
    if (ctx->pc == 0x12E9A4u) {
        ctx->pc = 0x12E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A0u;
        // 0x12e9a4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9A8u;
        goto label_fallthrough_0x12e9a0;
    }
    ctx->pc = 0x12E9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A0u;
        // 0x12e9a4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12e9a0:
    ctx->pc = 0x12E9A8u;
}
