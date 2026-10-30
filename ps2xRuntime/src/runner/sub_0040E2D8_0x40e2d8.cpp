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

// Function: sub_0040E2D8
// Address: 0x40e2d8 - 0x40e8d0
void sub_0040E2D8_0x40e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E2D8_0x40e2d8");
#endif

    switch (ctx->pc) {
        case 0x40e2d8u: goto label_40e2d8;
        case 0x40e2dcu: goto label_40e2dc;
        case 0x40e2e0u: goto label_40e2e0;
        case 0x40e2e4u: goto label_40e2e4;
        case 0x40e2e8u: goto label_40e2e8;
        case 0x40e2ecu: goto label_40e2ec;
        case 0x40e2f0u: goto label_40e2f0;
        case 0x40e2f4u: goto label_40e2f4;
        case 0x40e2f8u: goto label_40e2f8;
        case 0x40e2fcu: goto label_40e2fc;
        case 0x40e300u: goto label_40e300;
        case 0x40e304u: goto label_40e304;
        case 0x40e308u: goto label_40e308;
        case 0x40e30cu: goto label_40e30c;
        case 0x40e310u: goto label_40e310;
        case 0x40e314u: goto label_40e314;
        case 0x40e318u: goto label_40e318;
        case 0x40e31cu: goto label_40e31c;
        case 0x40e320u: goto label_40e320;
        case 0x40e324u: goto label_40e324;
        case 0x40e328u: goto label_40e328;
        case 0x40e32cu: goto label_40e32c;
        case 0x40e330u: goto label_40e330;
        case 0x40e334u: goto label_40e334;
        case 0x40e338u: goto label_40e338;
        case 0x40e33cu: goto label_40e33c;
        case 0x40e340u: goto label_40e340;
        case 0x40e344u: goto label_40e344;
        case 0x40e348u: goto label_40e348;
        case 0x40e34cu: goto label_40e34c;
        case 0x40e350u: goto label_40e350;
        case 0x40e354u: goto label_40e354;
        case 0x40e358u: goto label_40e358;
        case 0x40e35cu: goto label_40e35c;
        case 0x40e360u: goto label_40e360;
        case 0x40e364u: goto label_40e364;
        case 0x40e368u: goto label_40e368;
        case 0x40e36cu: goto label_40e36c;
        case 0x40e370u: goto label_40e370;
        case 0x40e374u: goto label_40e374;
        case 0x40e378u: goto label_40e378;
        case 0x40e37cu: goto label_40e37c;
        case 0x40e380u: goto label_40e380;
        case 0x40e384u: goto label_40e384;
        case 0x40e388u: goto label_40e388;
        case 0x40e38cu: goto label_40e38c;
        case 0x40e390u: goto label_40e390;
        case 0x40e394u: goto label_40e394;
        case 0x40e398u: goto label_40e398;
        case 0x40e39cu: goto label_40e39c;
        case 0x40e3a0u: goto label_40e3a0;
        case 0x40e3a4u: goto label_40e3a4;
        case 0x40e3a8u: goto label_40e3a8;
        case 0x40e3acu: goto label_40e3ac;
        case 0x40e3b0u: goto label_40e3b0;
        case 0x40e3b4u: goto label_40e3b4;
        case 0x40e3b8u: goto label_40e3b8;
        case 0x40e3bcu: goto label_40e3bc;
        case 0x40e3c0u: goto label_40e3c0;
        case 0x40e3c4u: goto label_40e3c4;
        case 0x40e3c8u: goto label_40e3c8;
        case 0x40e3ccu: goto label_40e3cc;
        case 0x40e3d0u: goto label_40e3d0;
        case 0x40e3d4u: goto label_40e3d4;
        case 0x40e3d8u: goto label_40e3d8;
        case 0x40e3dcu: goto label_40e3dc;
        case 0x40e3e0u: goto label_40e3e0;
        case 0x40e3e4u: goto label_40e3e4;
        case 0x40e3e8u: goto label_40e3e8;
        case 0x40e3ecu: goto label_40e3ec;
        case 0x40e3f0u: goto label_40e3f0;
        case 0x40e3f4u: goto label_40e3f4;
        case 0x40e3f8u: goto label_40e3f8;
        case 0x40e3fcu: goto label_40e3fc;
        case 0x40e400u: goto label_40e400;
        case 0x40e404u: goto label_40e404;
        case 0x40e408u: goto label_40e408;
        case 0x40e40cu: goto label_40e40c;
        case 0x40e410u: goto label_40e410;
        case 0x40e414u: goto label_40e414;
        case 0x40e418u: goto label_40e418;
        case 0x40e41cu: goto label_40e41c;
        case 0x40e420u: goto label_40e420;
        case 0x40e424u: goto label_40e424;
        case 0x40e428u: goto label_40e428;
        case 0x40e42cu: goto label_40e42c;
        case 0x40e430u: goto label_40e430;
        case 0x40e434u: goto label_40e434;
        case 0x40e438u: goto label_40e438;
        case 0x40e43cu: goto label_40e43c;
        case 0x40e440u: goto label_40e440;
        case 0x40e444u: goto label_40e444;
        case 0x40e448u: goto label_40e448;
        case 0x40e44cu: goto label_40e44c;
        case 0x40e450u: goto label_40e450;
        case 0x40e454u: goto label_40e454;
        case 0x40e458u: goto label_40e458;
        case 0x40e45cu: goto label_40e45c;
        case 0x40e460u: goto label_40e460;
        case 0x40e464u: goto label_40e464;
        case 0x40e468u: goto label_40e468;
        case 0x40e46cu: goto label_40e46c;
        case 0x40e470u: goto label_40e470;
        case 0x40e474u: goto label_40e474;
        case 0x40e478u: goto label_40e478;
        case 0x40e47cu: goto label_40e47c;
        case 0x40e480u: goto label_40e480;
        case 0x40e484u: goto label_40e484;
        case 0x40e488u: goto label_40e488;
        case 0x40e48cu: goto label_40e48c;
        case 0x40e490u: goto label_40e490;
        case 0x40e494u: goto label_40e494;
        case 0x40e498u: goto label_40e498;
        case 0x40e49cu: goto label_40e49c;
        case 0x40e4a0u: goto label_40e4a0;
        case 0x40e4a4u: goto label_40e4a4;
        case 0x40e4a8u: goto label_40e4a8;
        case 0x40e4acu: goto label_40e4ac;
        case 0x40e4b0u: goto label_40e4b0;
        case 0x40e4b4u: goto label_40e4b4;
        case 0x40e4b8u: goto label_40e4b8;
        case 0x40e4bcu: goto label_40e4bc;
        case 0x40e4c0u: goto label_40e4c0;
        case 0x40e4c4u: goto label_40e4c4;
        case 0x40e4c8u: goto label_40e4c8;
        case 0x40e4ccu: goto label_40e4cc;
        case 0x40e4d0u: goto label_40e4d0;
        case 0x40e4d4u: goto label_40e4d4;
        case 0x40e4d8u: goto label_40e4d8;
        case 0x40e4dcu: goto label_40e4dc;
        case 0x40e4e0u: goto label_40e4e0;
        case 0x40e4e4u: goto label_40e4e4;
        case 0x40e4e8u: goto label_40e4e8;
        case 0x40e4ecu: goto label_40e4ec;
        case 0x40e4f0u: goto label_40e4f0;
        case 0x40e4f4u: goto label_40e4f4;
        case 0x40e4f8u: goto label_40e4f8;
        case 0x40e4fcu: goto label_40e4fc;
        case 0x40e500u: goto label_40e500;
        case 0x40e504u: goto label_40e504;
        case 0x40e508u: goto label_40e508;
        case 0x40e50cu: goto label_40e50c;
        case 0x40e510u: goto label_40e510;
        case 0x40e514u: goto label_40e514;
        case 0x40e518u: goto label_40e518;
        case 0x40e51cu: goto label_40e51c;
        case 0x40e520u: goto label_40e520;
        case 0x40e524u: goto label_40e524;
        case 0x40e528u: goto label_40e528;
        case 0x40e52cu: goto label_40e52c;
        case 0x40e530u: goto label_40e530;
        case 0x40e534u: goto label_40e534;
        case 0x40e538u: goto label_40e538;
        case 0x40e53cu: goto label_40e53c;
        case 0x40e540u: goto label_40e540;
        case 0x40e544u: goto label_40e544;
        case 0x40e548u: goto label_40e548;
        case 0x40e54cu: goto label_40e54c;
        case 0x40e550u: goto label_40e550;
        case 0x40e554u: goto label_40e554;
        case 0x40e558u: goto label_40e558;
        case 0x40e55cu: goto label_40e55c;
        case 0x40e560u: goto label_40e560;
        case 0x40e564u: goto label_40e564;
        case 0x40e568u: goto label_40e568;
        case 0x40e56cu: goto label_40e56c;
        case 0x40e570u: goto label_40e570;
        case 0x40e574u: goto label_40e574;
        case 0x40e578u: goto label_40e578;
        case 0x40e57cu: goto label_40e57c;
        case 0x40e580u: goto label_40e580;
        case 0x40e584u: goto label_40e584;
        case 0x40e588u: goto label_40e588;
        case 0x40e58cu: goto label_40e58c;
        case 0x40e590u: goto label_40e590;
        case 0x40e594u: goto label_40e594;
        case 0x40e598u: goto label_40e598;
        case 0x40e59cu: goto label_40e59c;
        case 0x40e5a0u: goto label_40e5a0;
        case 0x40e5a4u: goto label_40e5a4;
        case 0x40e5a8u: goto label_40e5a8;
        case 0x40e5acu: goto label_40e5ac;
        case 0x40e5b0u: goto label_40e5b0;
        case 0x40e5b4u: goto label_40e5b4;
        case 0x40e5b8u: goto label_40e5b8;
        case 0x40e5bcu: goto label_40e5bc;
        case 0x40e5c0u: goto label_40e5c0;
        case 0x40e5c4u: goto label_40e5c4;
        case 0x40e5c8u: goto label_40e5c8;
        case 0x40e5ccu: goto label_40e5cc;
        case 0x40e5d0u: goto label_40e5d0;
        case 0x40e5d4u: goto label_40e5d4;
        case 0x40e5d8u: goto label_40e5d8;
        case 0x40e5dcu: goto label_40e5dc;
        case 0x40e5e0u: goto label_40e5e0;
        case 0x40e5e4u: goto label_40e5e4;
        case 0x40e5e8u: goto label_40e5e8;
        case 0x40e5ecu: goto label_40e5ec;
        case 0x40e5f0u: goto label_40e5f0;
        case 0x40e5f4u: goto label_40e5f4;
        case 0x40e5f8u: goto label_40e5f8;
        case 0x40e5fcu: goto label_40e5fc;
        case 0x40e600u: goto label_40e600;
        case 0x40e604u: goto label_40e604;
        case 0x40e608u: goto label_40e608;
        case 0x40e60cu: goto label_40e60c;
        case 0x40e610u: goto label_40e610;
        case 0x40e614u: goto label_40e614;
        case 0x40e618u: goto label_40e618;
        case 0x40e61cu: goto label_40e61c;
        case 0x40e620u: goto label_40e620;
        case 0x40e624u: goto label_40e624;
        case 0x40e628u: goto label_40e628;
        case 0x40e62cu: goto label_40e62c;
        case 0x40e630u: goto label_40e630;
        case 0x40e634u: goto label_40e634;
        case 0x40e638u: goto label_40e638;
        case 0x40e63cu: goto label_40e63c;
        case 0x40e640u: goto label_40e640;
        case 0x40e644u: goto label_40e644;
        case 0x40e648u: goto label_40e648;
        case 0x40e64cu: goto label_40e64c;
        case 0x40e650u: goto label_40e650;
        case 0x40e654u: goto label_40e654;
        case 0x40e658u: goto label_40e658;
        case 0x40e65cu: goto label_40e65c;
        case 0x40e660u: goto label_40e660;
        case 0x40e664u: goto label_40e664;
        case 0x40e668u: goto label_40e668;
        case 0x40e66cu: goto label_40e66c;
        case 0x40e670u: goto label_40e670;
        case 0x40e674u: goto label_40e674;
        case 0x40e678u: goto label_40e678;
        case 0x40e67cu: goto label_40e67c;
        case 0x40e680u: goto label_40e680;
        case 0x40e684u: goto label_40e684;
        case 0x40e688u: goto label_40e688;
        case 0x40e68cu: goto label_40e68c;
        case 0x40e690u: goto label_40e690;
        case 0x40e694u: goto label_40e694;
        case 0x40e698u: goto label_40e698;
        case 0x40e69cu: goto label_40e69c;
        case 0x40e6a0u: goto label_40e6a0;
        case 0x40e6a4u: goto label_40e6a4;
        case 0x40e6a8u: goto label_40e6a8;
        case 0x40e6acu: goto label_40e6ac;
        case 0x40e6b0u: goto label_40e6b0;
        case 0x40e6b4u: goto label_40e6b4;
        case 0x40e6b8u: goto label_40e6b8;
        case 0x40e6bcu: goto label_40e6bc;
        case 0x40e6c0u: goto label_40e6c0;
        case 0x40e6c4u: goto label_40e6c4;
        case 0x40e6c8u: goto label_40e6c8;
        case 0x40e6ccu: goto label_40e6cc;
        case 0x40e6d0u: goto label_40e6d0;
        case 0x40e6d4u: goto label_40e6d4;
        case 0x40e6d8u: goto label_40e6d8;
        case 0x40e6dcu: goto label_40e6dc;
        case 0x40e6e0u: goto label_40e6e0;
        case 0x40e6e4u: goto label_40e6e4;
        case 0x40e6e8u: goto label_40e6e8;
        case 0x40e6ecu: goto label_40e6ec;
        case 0x40e6f0u: goto label_40e6f0;
        case 0x40e6f4u: goto label_40e6f4;
        case 0x40e6f8u: goto label_40e6f8;
        case 0x40e6fcu: goto label_40e6fc;
        case 0x40e700u: goto label_40e700;
        case 0x40e704u: goto label_40e704;
        case 0x40e708u: goto label_40e708;
        case 0x40e70cu: goto label_40e70c;
        case 0x40e710u: goto label_40e710;
        case 0x40e714u: goto label_40e714;
        case 0x40e718u: goto label_40e718;
        case 0x40e71cu: goto label_40e71c;
        case 0x40e720u: goto label_40e720;
        case 0x40e724u: goto label_40e724;
        case 0x40e728u: goto label_40e728;
        case 0x40e72cu: goto label_40e72c;
        case 0x40e730u: goto label_40e730;
        case 0x40e734u: goto label_40e734;
        case 0x40e738u: goto label_40e738;
        case 0x40e73cu: goto label_40e73c;
        case 0x40e740u: goto label_40e740;
        case 0x40e744u: goto label_40e744;
        case 0x40e748u: goto label_40e748;
        case 0x40e74cu: goto label_40e74c;
        case 0x40e750u: goto label_40e750;
        case 0x40e754u: goto label_40e754;
        case 0x40e758u: goto label_40e758;
        case 0x40e75cu: goto label_40e75c;
        case 0x40e760u: goto label_40e760;
        case 0x40e764u: goto label_40e764;
        case 0x40e768u: goto label_40e768;
        case 0x40e76cu: goto label_40e76c;
        case 0x40e770u: goto label_40e770;
        case 0x40e774u: goto label_40e774;
        case 0x40e778u: goto label_40e778;
        case 0x40e77cu: goto label_40e77c;
        case 0x40e780u: goto label_40e780;
        case 0x40e784u: goto label_40e784;
        case 0x40e788u: goto label_40e788;
        case 0x40e78cu: goto label_40e78c;
        case 0x40e790u: goto label_40e790;
        case 0x40e794u: goto label_40e794;
        case 0x40e798u: goto label_40e798;
        case 0x40e79cu: goto label_40e79c;
        case 0x40e7a0u: goto label_40e7a0;
        case 0x40e7a4u: goto label_40e7a4;
        case 0x40e7a8u: goto label_40e7a8;
        case 0x40e7acu: goto label_40e7ac;
        case 0x40e7b0u: goto label_40e7b0;
        case 0x40e7b4u: goto label_40e7b4;
        case 0x40e7b8u: goto label_40e7b8;
        case 0x40e7bcu: goto label_40e7bc;
        case 0x40e7c0u: goto label_40e7c0;
        case 0x40e7c4u: goto label_40e7c4;
        case 0x40e7c8u: goto label_40e7c8;
        case 0x40e7ccu: goto label_40e7cc;
        case 0x40e7d0u: goto label_40e7d0;
        case 0x40e7d4u: goto label_40e7d4;
        case 0x40e7d8u: goto label_40e7d8;
        case 0x40e7dcu: goto label_40e7dc;
        case 0x40e7e0u: goto label_40e7e0;
        case 0x40e7e4u: goto label_40e7e4;
        case 0x40e7e8u: goto label_40e7e8;
        case 0x40e7ecu: goto label_40e7ec;
        case 0x40e7f0u: goto label_40e7f0;
        case 0x40e7f4u: goto label_40e7f4;
        case 0x40e7f8u: goto label_40e7f8;
        case 0x40e7fcu: goto label_40e7fc;
        case 0x40e800u: goto label_40e800;
        case 0x40e804u: goto label_40e804;
        case 0x40e808u: goto label_40e808;
        case 0x40e80cu: goto label_40e80c;
        case 0x40e810u: goto label_40e810;
        case 0x40e814u: goto label_40e814;
        case 0x40e818u: goto label_40e818;
        case 0x40e81cu: goto label_40e81c;
        case 0x40e820u: goto label_40e820;
        case 0x40e824u: goto label_40e824;
        case 0x40e828u: goto label_40e828;
        case 0x40e82cu: goto label_40e82c;
        case 0x40e830u: goto label_40e830;
        case 0x40e834u: goto label_40e834;
        case 0x40e838u: goto label_40e838;
        case 0x40e83cu: goto label_40e83c;
        case 0x40e840u: goto label_40e840;
        case 0x40e844u: goto label_40e844;
        case 0x40e848u: goto label_40e848;
        case 0x40e84cu: goto label_40e84c;
        case 0x40e850u: goto label_40e850;
        case 0x40e854u: goto label_40e854;
        case 0x40e858u: goto label_40e858;
        case 0x40e85cu: goto label_40e85c;
        case 0x40e860u: goto label_40e860;
        case 0x40e864u: goto label_40e864;
        case 0x40e868u: goto label_40e868;
        case 0x40e86cu: goto label_40e86c;
        case 0x40e870u: goto label_40e870;
        case 0x40e874u: goto label_40e874;
        case 0x40e878u: goto label_40e878;
        case 0x40e87cu: goto label_40e87c;
        case 0x40e880u: goto label_40e880;
        case 0x40e884u: goto label_40e884;
        case 0x40e888u: goto label_40e888;
        case 0x40e88cu: goto label_40e88c;
        case 0x40e890u: goto label_40e890;
        case 0x40e894u: goto label_40e894;
        case 0x40e898u: goto label_40e898;
        case 0x40e89cu: goto label_40e89c;
        case 0x40e8a0u: goto label_40e8a0;
        case 0x40e8a4u: goto label_40e8a4;
        case 0x40e8a8u: goto label_40e8a8;
        case 0x40e8acu: goto label_40e8ac;
        case 0x40e8b0u: goto label_40e8b0;
        case 0x40e8b4u: goto label_40e8b4;
        case 0x40e8b8u: goto label_40e8b8;
        case 0x40e8bcu: goto label_40e8bc;
        case 0x40e8c0u: goto label_40e8c0;
        case 0x40e8c4u: goto label_40e8c4;
        case 0x40e8c8u: goto label_40e8c8;
        case 0x40e8ccu: goto label_40e8cc;
        default: break;
    }

    ctx->pc = 0x40e2d8u;

label_40e2d8:
    // 0x40e2d8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x40e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_40e2dc:
    // 0x40e2dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e2e0:
    // 0x40e2e0: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x40e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_40e2e4:
    // 0x40e2e4: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x40e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_40e2e8:
    // 0x40e2e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40e2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40e2ec:
    // 0x40e2ec: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x40e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_40e2f0:
    // 0x40e2f0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x40e2f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40e2f4:
    // 0x40e2f4: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x40e2f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_40e2f8:
    // 0x40e2f8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x40e2f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_40e2fc:
    // 0x40e2fc: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x40e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_40e300:
    // 0x40e300: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x40e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_40e304:
    // 0x40e304: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x40e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_40e308:
    // 0x40e308: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x40e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_40e30c:
    // 0x40e30c: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x40e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_40e310:
    // 0x40e310: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x40e310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_40e314:
    // 0x40e314: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x40e314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_40e318:
    // 0x40e318: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x40e318u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_40e31c:
    // 0x40e31c: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x40e31cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_40e320:
    // 0x40e320: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x40e320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_40e324:
    // 0x40e324: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x40e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_40e328:
    // 0x40e328: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_40e32c:
    if (ctx->pc == 0x40E32Cu) {
        ctx->pc = 0x40E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E328u;
        // 0x40e32c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E330u;
        goto label_40e330;
    }
    ctx->pc = 0x40E328u;
    {
        const bool branch_taken_0x40e328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E328u;
        // 0x40e32c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e328) {
            ctx->pc = 0x40E338u;
            goto label_40e338;
        }
    }
    ctx->pc = 0x40E330u;
label_40e330:
    // 0x40e330: 0x10000158  b           . + 4 + (0x158 << 2)
label_40e334:
    if (ctx->pc == 0x40E334u) {
        ctx->pc = 0x40E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E330u;
        // 0x40e334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E338u;
        goto label_40e338;
    }
    ctx->pc = 0x40E330u;
    {
        const bool branch_taken_0x40e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E330u;
        // 0x40e334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e330) {
            ctx->pc = 0x40E894u;
            goto label_40e894;
        }
    }
    ctx->pc = 0x40E338u;
label_40e338:
    // 0x40e338: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40e338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40e33c:
    // 0x40e33c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x40e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_40e340:
    // 0x40e340: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x40e340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_40e344:
    // 0x40e344: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x40e344u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e348:
    // 0x40e348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x40e348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e34c:
    // 0x40e34c: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x40e34cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_40e350:
    // 0x40e350: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x40e350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_40e354:
    // 0x40e354: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_40e358:
    if (ctx->pc == 0x40E358u) {
        ctx->pc = 0x40E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E354u;
        // 0x40e358: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E35Cu;
        goto label_40e35c;
    }
    ctx->pc = 0x40E354u;
    {
        const bool branch_taken_0x40e354 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x40E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E354u;
        // 0x40e358: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e354) {
            ctx->pc = 0x40E3A8u;
            goto label_40e3a8;
        }
    }
    ctx->pc = 0x40E35Cu;
label_40e35c:
    // 0x40e35c: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x40e35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_40e360:
    // 0x40e360: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x40e360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_40e364:
    // 0x40e364: 0xc0e409a  jal         func_390268
label_40e368:
    if (ctx->pc == 0x40E368u) {
        ctx->pc = 0x40E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E364u;
        // 0x40e368: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E36Cu;
        goto label_40e36c;
    }
    ctx->pc = 0x40E364u;
    SET_GPR_U32(ctx, 31, 0x40E36Cu);
    ctx->pc = 0x40E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E364u;
    // 0x40e368: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x40E364u, 0x40E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E36Cu;
label_40e36c:
    // 0x40e36c: 0xc0874fa  jal         func_21D3E8
label_40e370:
    if (ctx->pc == 0x40E370u) {
        ctx->pc = 0x40E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E36Cu;
        // 0x40e370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E374u;
        goto label_40e374;
    }
    ctx->pc = 0x40E36Cu;
    SET_GPR_U32(ctx, 31, 0x40E374u);
    ctx->pc = 0x40E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E36Cu;
    // 0x40e370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x40E36Cu, 0x40E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E374u;
label_40e374:
    // 0x40e374: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40e374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e378:
    // 0x40e378: 0x9062001b  lbu         $v0, 0x1B($v1)
    ctx->pc = 0x40e378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
label_40e37c:
    // 0x40e37c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_40e380:
    if (ctx->pc == 0x40E380u) {
        ctx->pc = 0x40E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E37Cu;
        // 0x40e380: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E384u;
        goto label_40e384;
    }
    ctx->pc = 0x40E37Cu;
    {
        const bool branch_taken_0x40e37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E37Cu;
        // 0x40e380: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e37c) {
            ctx->pc = 0x40E390u;
            goto label_40e390;
        }
    }
    ctx->pc = 0x40E384u;
label_40e384:
    // 0x40e384: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x40e384u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
label_40e388:
    // 0x40e388: 0xc05181e  jal         func_146078
label_40e38c:
    if (ctx->pc == 0x40E38Cu) {
        ctx->pc = 0x40E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E388u;
        // 0x40e38c: 0xa060001d  sb          $zero, 0x1D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E390u;
        goto label_40e390;
    }
    ctx->pc = 0x40E388u;
    SET_GPR_U32(ctx, 31, 0x40E390u);
    ctx->pc = 0x40E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E388u;
    // 0x40e38c: 0xa060001d  sb          $zero, 0x1D($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x40E388u, 0x40E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E390u;
label_40e390:
    // 0x40e390: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x40e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_40e394:
    // 0x40e394: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x40e394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_40e398:
    // 0x40e398: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x40e398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_40e39c:
    // 0x40e39c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x40e39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_40e3a0:
    // 0x40e3a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_40e3a4:
    if (ctx->pc == 0x40E3A4u) {
        ctx->pc = 0x40E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3A0u;
        // 0x40e3a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E3A8u;
        goto label_40e3a8;
    }
    ctx->pc = 0x40E3A0u;
    {
        const bool branch_taken_0x40e3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3A0u;
        // 0x40e3a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e3a0) {
            ctx->pc = 0x40E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e360;
        }
    }
    ctx->pc = 0x40E3A8u;
label_40e3a8:
    // 0x40e3a8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x40e3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_40e3ac:
    // 0x40e3ac: 0xc047e6c  jal         func_11F9B0
label_40e3b0:
    if (ctx->pc == 0x40E3B0u) {
        ctx->pc = 0x40E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3ACu;
        // 0x40e3b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E3B4u;
        goto label_40e3b4;
    }
    ctx->pc = 0x40E3ACu;
    SET_GPR_U32(ctx, 31, 0x40E3B4u);
    ctx->pc = 0x40E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E3ACu;
    // 0x40e3b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x40E3ACu, 0x40E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E3B4u;
label_40e3b4:
    // 0x40e3b4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x40e3b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e3b8:
    // 0x40e3b8: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
label_40e3bc:
    if (ctx->pc == 0x40E3BCu) {
        ctx->pc = 0x40E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3B8u;
        // 0x40e3bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E3C0u;
        goto label_40e3c0;
    }
    ctx->pc = 0x40E3B8u;
    {
        const bool branch_taken_0x40e3b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3B8u;
        // 0x40e3bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e3b8) {
            ctx->pc = 0x40E3E4u;
            goto label_40e3e4;
        }
    }
    ctx->pc = 0x40E3C0u;
label_40e3c0:
    // 0x40e3c0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x40e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_40e3c4:
    // 0x40e3c4: 0x84440210  lh          $a0, 0x210($v0)
    ctx->pc = 0x40e3c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
label_40e3c8:
    // 0x40e3c8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x40e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_40e3cc:
    // 0x40e3cc: 0x60f809  jalr        $v1
label_40e3d0:
    if (ctx->pc == 0x40E3D0u) {
        ctx->pc = 0x40E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3CCu;
        // 0x40e3d0: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E3D4u;
        goto label_40e3d4;
    }
    ctx->pc = 0x40E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40E3D4u);
        ctx->pc = 0x40E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3CCu;
        // 0x40e3d0: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E3CCu, 0x40E3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E3D4u;
label_40e3d4:
    // 0x40e3d4: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
label_40e3d8:
    if (ctx->pc == 0x40E3D8u) {
        ctx->pc = 0x40E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3D4u;
        // 0x40e3d8: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E3DCu;
        goto label_40e3dc;
    }
    ctx->pc = 0x40E3D4u;
    {
        const bool branch_taken_0x40e3d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3D4u;
        // 0x40e3d8: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e3d4) {
            ctx->pc = 0x40E3E0u;
            goto label_40e3e0;
        }
    }
    ctx->pc = 0x40E3DCu;
label_40e3dc:
    // 0x40e3dc: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x40e3dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
label_40e3e0:
    // 0x40e3e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40e3e4:
    // 0x40e3e4: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x40e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_40e3e8:
    // 0x40e3e8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x40e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_40e3ec:
    // 0x40e3ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e3f0:
    // 0x40e3f0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x40e3f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_40e3f4:
    // 0x40e3f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x40e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_40e3f8:
    // 0x40e3f8: 0x40f809  jalr        $v0
label_40e3fc:
    if (ctx->pc == 0x40E3FCu) {
        ctx->pc = 0x40E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3F8u;
        // 0x40e3fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E400u;
        goto label_40e400;
    }
    ctx->pc = 0x40E3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E400u);
        ctx->pc = 0x40E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3F8u;
        // 0x40e3fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E3F8u, 0x40E400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E400u;
label_40e400:
    // 0x40e400: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_40e404:
    if (ctx->pc == 0x40E404u) {
        ctx->pc = 0x40E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E400u;
        // 0x40e404: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E408u;
        goto label_40e408;
    }
    ctx->pc = 0x40E400u;
    {
        const bool branch_taken_0x40e400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E400u;
        // 0x40e404: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e400) {
            ctx->pc = 0x40E428u;
            goto label_40e428;
        }
    }
    ctx->pc = 0x40E408u;
label_40e408:
    // 0x40e408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e40c:
    // 0x40e40c: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x40e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_40e410:
    // 0x40e410: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x40e410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_40e414:
    // 0x40e414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e418:
    // 0x40e418: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x40e418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_40e41c:
    // 0x40e41c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x40e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_40e420:
    // 0x40e420: 0x60f809  jalr        $v1
label_40e424:
    if (ctx->pc == 0x40E424u) {
        ctx->pc = 0x40E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E420u;
        // 0x40e424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E428u;
        goto label_40e428;
    }
    ctx->pc = 0x40E420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40E428u);
        ctx->pc = 0x40E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E420u;
        // 0x40e424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E420u, 0x40E428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E428u;
label_40e428:
    // 0x40e428: 0xc051632  jal         func_1458C8
label_40e42c:
    if (ctx->pc == 0x40E42Cu) {
        ctx->pc = 0x40E430u;
        goto label_40e430;
    }
    ctx->pc = 0x40E428u;
    SET_GPR_U32(ctx, 31, 0x40E430u);
    ctx->pc = 0x1458C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C8u, 0x40E428u, 0x40E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E430u;
label_40e430:
    // 0x40e430: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_40e434:
    if (ctx->pc == 0x40E434u) {
        ctx->pc = 0x40E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E430u;
        // 0x40e434: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E438u;
        goto label_40e438;
    }
    ctx->pc = 0x40E430u;
    {
        const bool branch_taken_0x40e430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E430u;
        // 0x40e434: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e430) {
            ctx->pc = 0x40E488u;
            goto label_40e488;
        }
    }
    ctx->pc = 0x40E438u;
label_40e438:
    // 0x40e438: 0x52c00011  beql        $s6, $zero, . + 4 + (0x11 << 2)
label_40e43c:
    if (ctx->pc == 0x40E43Cu) {
        ctx->pc = 0x40E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E438u;
        // 0x40e43c: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E440u;
        goto label_40e440;
    }
    ctx->pc = 0x40E438u;
    {
        const bool branch_taken_0x40e438 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e438) {
            ctx->pc = 0x40E43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E438u;
            // 0x40e43c: 0x3c040016  lui         $a0, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E480u;
            goto label_40e480;
        }
    }
    ctx->pc = 0x40E440u;
label_40e440:
    // 0x40e440: 0xc051636  jal         func_1458D8
label_40e444:
    if (ctx->pc == 0x40E444u) {
        ctx->pc = 0x40E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E440u;
        // 0x40e444: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E448u;
        goto label_40e448;
    }
    ctx->pc = 0x40E440u;
    SET_GPR_U32(ctx, 31, 0x40E448u);
    ctx->pc = 0x40E444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E440u;
    // 0x40e444: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458D8u, 0x40E440u, 0x40E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E448u;
label_40e448:
    // 0x40e448: 0x10000010  b           . + 4 + (0x10 << 2)
label_40e44c:
    if (ctx->pc == 0x40E44Cu) {
        ctx->pc = 0x40E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E448u;
        // 0x40e44c: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E450u;
        goto label_40e450;
    }
    ctx->pc = 0x40E448u;
    {
        const bool branch_taken_0x40e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E448u;
        // 0x40e44c: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e448) {
            ctx->pc = 0x40E48Cu;
            goto label_40e48c;
        }
    }
    ctx->pc = 0x40E450u;
label_40e450:
    // 0x40e450: 0xc0552b8  jal         func_154AE0
label_40e454:
    if (ctx->pc == 0x40E454u) {
        ctx->pc = 0x40E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E450u;
        // 0x40e454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E458u;
        goto label_40e458;
    }
    ctx->pc = 0x40E450u;
    SET_GPR_U32(ctx, 31, 0x40E458u);
    ctx->pc = 0x40E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E450u;
    // 0x40e454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x40E450u, 0x40E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E458u;
label_40e458:
    // 0x40e458: 0xc062274  jal         func_1889D0
label_40e45c:
    if (ctx->pc == 0x40E45Cu) {
        ctx->pc = 0x40E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E458u;
        // 0x40e45c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E460u;
        goto label_40e460;
    }
    ctx->pc = 0x40E458u;
    SET_GPR_U32(ctx, 31, 0x40E460u);
    ctx->pc = 0x40E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E458u;
    // 0x40e45c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x40E458u, 0x40E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E460u;
label_40e460:
    // 0x40e460: 0x1000004a  b           . + 4 + (0x4A << 2)
label_40e464:
    if (ctx->pc == 0x40E464u) {
        ctx->pc = 0x40E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E460u;
        // 0x40e464: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E468u;
        goto label_40e468;
    }
    ctx->pc = 0x40E460u;
    {
        const bool branch_taken_0x40e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E460u;
        // 0x40e464: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e460) {
            ctx->pc = 0x40E58Cu;
            goto label_40e58c;
        }
    }
    ctx->pc = 0x40E468u;
label_40e468:
    // 0x40e468: 0xc0552b8  jal         func_154AE0
label_40e46c:
    if (ctx->pc == 0x40E46Cu) {
        ctx->pc = 0x40E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E468u;
        // 0x40e46c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E470u;
        goto label_40e470;
    }
    ctx->pc = 0x40E468u;
    SET_GPR_U32(ctx, 31, 0x40E470u);
    ctx->pc = 0x40E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E468u;
    // 0x40e46c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x40E468u, 0x40E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E470u;
label_40e470:
    // 0x40e470: 0xc062274  jal         func_1889D0
label_40e474:
    if (ctx->pc == 0x40E474u) {
        ctx->pc = 0x40E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E470u;
        // 0x40e474: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E478u;
        goto label_40e478;
    }
    ctx->pc = 0x40E470u;
    SET_GPR_U32(ctx, 31, 0x40E478u);
    ctx->pc = 0x40E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E470u;
    // 0x40e474: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x40E470u, 0x40E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E478u;
label_40e478:
    // 0x40e478: 0x1000009b  b           . + 4 + (0x9B << 2)
label_40e47c:
    if (ctx->pc == 0x40E47Cu) {
        ctx->pc = 0x40E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E478u;
        // 0x40e47c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E480u;
        goto label_40e480;
    }
    ctx->pc = 0x40E478u;
    {
        const bool branch_taken_0x40e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E478u;
        // 0x40e47c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e478) {
            ctx->pc = 0x40E6E8u;
            goto label_40e6e8;
        }
    }
    ctx->pc = 0x40E480u;
label_40e480:
    // 0x40e480: 0xc051636  jal         func_1458D8
label_40e484:
    if (ctx->pc == 0x40E484u) {
        ctx->pc = 0x40E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E480u;
        // 0x40e484: 0x24841600  addiu       $a0, $a0, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E488u;
        goto label_40e488;
    }
    ctx->pc = 0x40E480u;
    SET_GPR_U32(ctx, 31, 0x40E488u);
    ctx->pc = 0x40E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E480u;
    // 0x40e484: 0x24841600  addiu       $a0, $a0, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458D8u, 0x40E480u, 0x40E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E488u;
label_40e488:
    // 0x40e488: 0x8e645340  lw          $a0, 0x5340($s3)
    ctx->pc = 0x40e488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
label_40e48c:
    // 0x40e48c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e490:
    // 0x40e490: 0xc0552b8  jal         func_154AE0
label_40e494:
    if (ctx->pc == 0x40E494u) {
        ctx->pc = 0x40E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E490u;
        // 0x40e494: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E498u;
        goto label_40e498;
    }
    ctx->pc = 0x40E490u;
    SET_GPR_U32(ctx, 31, 0x40E498u);
    ctx->pc = 0x40E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E490u;
    // 0x40e494: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x40E490u, 0x40E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E498u;
label_40e498:
    // 0x40e498: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40e498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40e49c:
    // 0x40e49c: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x40e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_40e4a0:
    // 0x40e4a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x40e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40e4a4:
    // 0x40e4a4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x40e4a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_40e4a8:
    // 0x40e4a8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x40e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_40e4ac:
    // 0x40e4ac: 0x40f809  jalr        $v0
label_40e4b0:
    if (ctx->pc == 0x40E4B0u) {
        ctx->pc = 0x40E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4ACu;
        // 0x40e4b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E4B4u;
        goto label_40e4b4;
    }
    ctx->pc = 0x40E4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E4B4u);
        ctx->pc = 0x40E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4ACu;
        // 0x40e4b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E4ACu, 0x40E4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E4B4u;
label_40e4b4:
    // 0x40e4b4: 0xc10382e  jal         func_40E0B8
label_40e4b8:
    if (ctx->pc == 0x40E4B8u) {
        ctx->pc = 0x40E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4B4u;
        // 0x40e4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E4BCu;
        goto label_40e4bc;
    }
    ctx->pc = 0x40E4B4u;
    SET_GPR_U32(ctx, 31, 0x40E4BCu);
    ctx->pc = 0x40E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E4B4u;
    // 0x40e4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E0B8u, 0x40E4B4u, 0x40E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E4BCu;
label_40e4bc:
    // 0x40e4bc: 0xc0579d2  jal         func_15E748
label_40e4c0:
    if (ctx->pc == 0x40E4C0u) {
        ctx->pc = 0x40E4C4u;
        goto label_40e4c4;
    }
    ctx->pc = 0x40E4BCu;
    SET_GPR_U32(ctx, 31, 0x40E4C4u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x40E4BCu, 0x40E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E4C4u;
label_40e4c4:
    // 0x40e4c4: 0x12e00018  beqz        $s7, . + 4 + (0x18 << 2)
label_40e4c8:
    if (ctx->pc == 0x40E4C8u) {
        ctx->pc = 0x40E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4C4u;
        // 0x40e4c8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E4CCu;
        goto label_40e4cc;
    }
    ctx->pc = 0x40E4C4u;
    {
        const bool branch_taken_0x40e4c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4C4u;
        // 0x40e4c8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e4c4) {
            ctx->pc = 0x40E528u;
            goto label_40e528;
        }
    }
    ctx->pc = 0x40E4CCu;
label_40e4cc:
    // 0x40e4cc: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40e4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40e4d0:
    // 0x40e4d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40e4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40e4d4:
    // 0x40e4d4: 0x24c68c50  addiu       $a2, $a2, -0x73B0
    ctx->pc = 0x40e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937680));
label_40e4d8:
    // 0x40e4d8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x40e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40e4dc:
    // 0x40e4dc: 0xc10ca04  jal         func_432810
label_40e4e0:
    if (ctx->pc == 0x40E4E0u) {
        ctx->pc = 0x40E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4DCu;
        // 0x40e4e0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E4E4u;
        goto label_40e4e4;
    }
    ctx->pc = 0x40E4DCu;
    SET_GPR_U32(ctx, 31, 0x40E4E4u);
    ctx->pc = 0x40E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E4DCu;
    // 0x40e4e0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40E4DCu, 0x40E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E4E4u;
label_40e4e4:
    // 0x40e4e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40e4e8:
    // 0x40e4e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40e4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40e4ec:
    // 0x40e4ec: 0x8c62b788  lw          $v0, -0x4878($v1)
    ctx->pc = 0x40e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_40e4f0:
    // 0x40e4f0: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x40e4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_40e4f4:
    // 0x40e4f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40e4f8:
    // 0x40e4f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40e4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40e4fc:
    // 0x40e4fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40e500:
    // 0x40e500: 0x40f809  jalr        $v0
label_40e504:
    if (ctx->pc == 0x40E504u) {
        ctx->pc = 0x40E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E500u;
        // 0x40e504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E508u;
        goto label_40e508;
    }
    ctx->pc = 0x40E500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E508u);
        ctx->pc = 0x40E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E500u;
        // 0x40e504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E500u, 0x40E508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E508u;
label_40e508:
    // 0x40e508: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_40e50c:
    if (ctx->pc == 0x40E50Cu) {
        ctx->pc = 0x40E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E508u;
        // 0x40e50c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E510u;
        goto label_40e510;
    }
    ctx->pc = 0x40E508u;
    {
        const bool branch_taken_0x40e508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E508u;
        // 0x40e50c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e508) {
            ctx->pc = 0x40E528u;
            goto label_40e528;
        }
    }
    ctx->pc = 0x40E510u;
label_40e510:
    // 0x40e510: 0xc062274  jal         func_1889D0
label_40e514:
    if (ctx->pc == 0x40E514u) {
        ctx->pc = 0x40E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E510u;
        // 0x40e514: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E518u;
        goto label_40e518;
    }
    ctx->pc = 0x40E510u;
    SET_GPR_U32(ctx, 31, 0x40E518u);
    ctx->pc = 0x40E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E510u;
    // 0x40e514: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x40E510u, 0x40E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E518u;
label_40e518:
    // 0x40e518: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x40e518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_40e51c:
    // 0x40e51c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40e51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40e520:
    // 0x40e520: 0xc061f0e  jal         func_187C38
label_40e524:
    if (ctx->pc == 0x40E524u) {
        ctx->pc = 0x40E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E520u;
        // 0x40e524: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E528u;
        goto label_40e528;
    }
    ctx->pc = 0x40E520u;
    SET_GPR_U32(ctx, 31, 0x40E528u);
    ctx->pc = 0x40E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E520u;
    // 0x40e524: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187C38u, 0x40E520u, 0x40E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E528u;
label_40e528:
    // 0x40e528: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
label_40e52c:
    if (ctx->pc == 0x40E52Cu) {
        ctx->pc = 0x40E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E528u;
        // 0x40e52c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E530u;
        goto label_40e530;
    }
    ctx->pc = 0x40E528u;
    {
        const bool branch_taken_0x40e528 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E528u;
        // 0x40e52c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e528) {
            ctx->pc = 0x40E58Cu;
            goto label_40e58c;
        }
    }
    ctx->pc = 0x40E530u;
label_40e530:
    // 0x40e530: 0xc062a60  jal         func_18A980
label_40e534:
    if (ctx->pc == 0x40E534u) {
        ctx->pc = 0x40E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E530u;
        // 0x40e534: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E538u;
        goto label_40e538;
    }
    ctx->pc = 0x40E530u;
    SET_GPR_U32(ctx, 31, 0x40E538u);
    ctx->pc = 0x40E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E530u;
    // 0x40e534: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x40E530u, 0x40E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E538u;
label_40e538:
    // 0x40e538: 0x10000010  b           . + 4 + (0x10 << 2)
label_40e53c:
    if (ctx->pc == 0x40E53Cu) {
        ctx->pc = 0x40E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E538u;
        // 0x40e53c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E540u;
        goto label_40e540;
    }
    ctx->pc = 0x40E538u;
    {
        const bool branch_taken_0x40e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E538u;
        // 0x40e53c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e538) {
            ctx->pc = 0x40E57Cu;
            goto label_40e57c;
        }
    }
    ctx->pc = 0x40E540u;
label_40e540:
    // 0x40e540: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_40e544:
    if (ctx->pc == 0x40E544u) {
        ctx->pc = 0x40E548u;
        goto label_40e548;
    }
    ctx->pc = 0x40E540u;
    {
        const bool branch_taken_0x40e540 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e540) {
            ctx->pc = 0x40E560u;
            goto label_40e560;
        }
    }
    ctx->pc = 0x40E548u;
label_40e548:
    // 0x40e548: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_40e54c:
    if (ctx->pc == 0x40E54Cu) {
        ctx->pc = 0x40E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E548u;
        // 0x40e54c: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E550u;
        goto label_40e550;
    }
    ctx->pc = 0x40E548u;
    {
        const bool branch_taken_0x40e548 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E548u;
        // 0x40e54c: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e548) {
            ctx->pc = 0x40E560u;
            goto label_40e560;
        }
    }
    ctx->pc = 0x40E550u;
label_40e550:
    // 0x40e550: 0xc0552b8  jal         func_154AE0
label_40e554:
    if (ctx->pc == 0x40E554u) {
        ctx->pc = 0x40E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E550u;
        // 0x40e554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E558u;
        goto label_40e558;
    }
    ctx->pc = 0x40E550u;
    SET_GPR_U32(ctx, 31, 0x40E558u);
    ctx->pc = 0x40E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E550u;
    // 0x40e554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x40E550u, 0x40E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E558u;
label_40e558:
    // 0x40e558: 0x10000005  b           . + 4 + (0x5 << 2)
label_40e55c:
    if (ctx->pc == 0x40E55Cu) {
        ctx->pc = 0x40E560u;
        goto label_40e560;
    }
    ctx->pc = 0x40E558u;
    {
        const bool branch_taken_0x40e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e558) {
            ctx->pc = 0x40E570u;
            goto label_40e570;
        }
    }
    ctx->pc = 0x40E560u;
label_40e560:
    // 0x40e560: 0xc05529a  jal         func_154A68
label_40e564:
    if (ctx->pc == 0x40E564u) {
        ctx->pc = 0x40E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E560u;
        // 0x40e564: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E568u;
        goto label_40e568;
    }
    ctx->pc = 0x40E560u;
    SET_GPR_U32(ctx, 31, 0x40E568u);
    ctx->pc = 0x40E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E560u;
    // 0x40e564: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A68u, 0x40E560u, 0x40E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E568u;
label_40e568:
    // 0x40e568: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_40e56c:
    if (ctx->pc == 0x40E56Cu) {
        ctx->pc = 0x40E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E568u;
        // 0x40e56c: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E570u;
        goto label_40e570;
    }
    ctx->pc = 0x40E568u;
    {
        const bool branch_taken_0x40e568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E568u;
        // 0x40e56c: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e568) {
            ctx->pc = 0x40E450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e450;
        }
    }
    ctx->pc = 0x40E570u;
label_40e570:
    // 0x40e570: 0xc062a60  jal         func_18A980
label_40e574:
    if (ctx->pc == 0x40E574u) {
        ctx->pc = 0x40E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E570u;
        // 0x40e574: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E578u;
        goto label_40e578;
    }
    ctx->pc = 0x40E570u;
    SET_GPR_U32(ctx, 31, 0x40E578u);
    ctx->pc = 0x40E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E570u;
    // 0x40e574: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x40E570u, 0x40E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E578u;
label_40e578:
    // 0x40e578: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x40e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_40e57c:
    // 0x40e57c: 0xc0627b6  jal         func_189ED8
label_40e580:
    if (ctx->pc == 0x40E580u) {
        ctx->pc = 0x40E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E57Cu;
        // 0x40e580: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E584u;
        goto label_40e584;
    }
    ctx->pc = 0x40E57Cu;
    SET_GPR_U32(ctx, 31, 0x40E584u);
    ctx->pc = 0x40E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E57Cu;
    // 0x40e580: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189ED8u, 0x40E57Cu, 0x40E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E584u;
label_40e584:
    // 0x40e584: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_40e588:
    if (ctx->pc == 0x40E588u) {
        ctx->pc = 0x40E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E584u;
        // 0x40e588: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E58Cu;
        goto label_40e58c;
    }
    ctx->pc = 0x40E584u;
    {
        const bool branch_taken_0x40e584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E584u;
        // 0x40e588: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e584) {
            ctx->pc = 0x40E540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e540;
        }
    }
    ctx->pc = 0x40E58Cu;
label_40e58c:
    // 0x40e58c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x40e58cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40e590:
    // 0x40e590: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x40e590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_40e594:
    // 0x40e594: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e598:
    // 0x40e598: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x40e598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_40e59c:
    // 0x40e59c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40e5a0:
    // 0x40e5a0: 0x40f809  jalr        $v0
label_40e5a4:
    if (ctx->pc == 0x40E5A4u) {
        ctx->pc = 0x40E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5A0u;
        // 0x40e5a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E5A8u;
        goto label_40e5a8;
    }
    ctx->pc = 0x40E5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E5A8u);
        ctx->pc = 0x40E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5A0u;
        // 0x40e5a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E5A0u, 0x40E5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E5A8u;
label_40e5a8:
    // 0x40e5a8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x40e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_40e5ac:
    // 0x40e5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e5b0:
    // 0x40e5b0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x40e5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40e5b4:
    // 0x40e5b4: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x40e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_40e5b8:
    // 0x40e5b8: 0xc10382e  jal         func_40E0B8
label_40e5bc:
    if (ctx->pc == 0x40E5BCu) {
        ctx->pc = 0x40E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5B8u;
        // 0x40e5bc: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E5C0u;
        goto label_40e5c0;
    }
    ctx->pc = 0x40E5B8u;
    SET_GPR_U32(ctx, 31, 0x40E5C0u);
    ctx->pc = 0x40E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E5B8u;
    // 0x40e5bc: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E0B8u, 0x40E5B8u, 0x40E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E5C0u;
label_40e5c0:
    // 0x40e5c0: 0xc062a60  jal         func_18A980
label_40e5c4:
    if (ctx->pc == 0x40E5C4u) {
        ctx->pc = 0x40E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5C0u;
        // 0x40e5c4: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E5C8u;
        goto label_40e5c8;
    }
    ctx->pc = 0x40E5C0u;
    SET_GPR_U32(ctx, 31, 0x40E5C8u);
    ctx->pc = 0x40E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E5C0u;
    // 0x40e5c4: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x40E5C0u, 0x40E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E5C8u;
label_40e5c8:
    // 0x40e5c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40e5cc:
    // 0x40e5cc: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x40e5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_40e5d0:
    // 0x40e5d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e5d4:
    // 0x40e5d4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x40e5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_40e5d8:
    // 0x40e5d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40e5dc:
    // 0x40e5dc: 0x40f809  jalr        $v0
label_40e5e0:
    if (ctx->pc == 0x40E5E0u) {
        ctx->pc = 0x40E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5DCu;
        // 0x40e5e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E5E4u;
        goto label_40e5e4;
    }
    ctx->pc = 0x40E5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E5E4u);
        ctx->pc = 0x40E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5DCu;
        // 0x40e5e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E5DCu, 0x40E5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E5E4u;
label_40e5e4:
    // 0x40e5e4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x40e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_40e5e8:
    // 0x40e5e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e5ec:
    // 0x40e5ec: 0xc4748c58  lwc1        $f20, -0x73A8($v1)
    ctx->pc = 0x40e5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294937688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40e5f0:
    // 0x40e5f0: 0x10000013  b           . + 4 + (0x13 << 2)
label_40e5f4:
    if (ctx->pc == 0x40E5F4u) {
        ctx->pc = 0x40E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5F0u;
        // 0x40e5f4: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E5F8u;
        goto label_40e5f8;
    }
    ctx->pc = 0x40E5F0u;
    {
        const bool branch_taken_0x40e5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5F0u;
        // 0x40e5f4: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e5f0) {
            ctx->pc = 0x40E640u;
            goto label_40e640;
        }
    }
    ctx->pc = 0x40E5F8u;
label_40e5f8:
    // 0x40e5f8: 0xc05529a  jal         func_154A68
label_40e5fc:
    if (ctx->pc == 0x40E5FCu) {
        ctx->pc = 0x40E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E5F8u;
        // 0x40e5fc: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E600u;
        goto label_40e600;
    }
    ctx->pc = 0x40E5F8u;
    SET_GPR_U32(ctx, 31, 0x40E600u);
    ctx->pc = 0x40E5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E5F8u;
    // 0x40e5fc: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A68u, 0x40E5F8u, 0x40E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E600u;
label_40e600:
    // 0x40e600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_40e604:
    if (ctx->pc == 0x40E604u) {
        ctx->pc = 0x40E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E600u;
        // 0x40e604: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E608u;
        goto label_40e608;
    }
    ctx->pc = 0x40E600u;
    {
        const bool branch_taken_0x40e600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E600u;
        // 0x40e604: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e600) {
            ctx->pc = 0x40E610u;
            goto label_40e610;
        }
    }
    ctx->pc = 0x40E608u;
label_40e608:
    // 0x40e608: 0xc0552b8  jal         func_154AE0
label_40e60c:
    if (ctx->pc == 0x40E60Cu) {
        ctx->pc = 0x40E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E608u;
        // 0x40e60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E610u;
        goto label_40e610;
    }
    ctx->pc = 0x40E608u;
    SET_GPR_U32(ctx, 31, 0x40E610u);
    ctx->pc = 0x40E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E608u;
    // 0x40e60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x40E608u, 0x40E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E610u;
label_40e610:
    // 0x40e610: 0xc062a60  jal         func_18A980
label_40e614:
    if (ctx->pc == 0x40E614u) {
        ctx->pc = 0x40E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E610u;
        // 0x40e614: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E618u;
        goto label_40e618;
    }
    ctx->pc = 0x40E610u;
    SET_GPR_U32(ctx, 31, 0x40E618u);
    ctx->pc = 0x40E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E610u;
    // 0x40e614: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x40E610u, 0x40E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E618u;
label_40e618:
    // 0x40e618: 0xc103840  jal         func_40E100
label_40e61c:
    if (ctx->pc == 0x40E61Cu) {
        ctx->pc = 0x40E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E618u;
        // 0x40e61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E620u;
        goto label_40e620;
    }
    ctx->pc = 0x40E618u;
    SET_GPR_U32(ctx, 31, 0x40E620u);
    ctx->pc = 0x40E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E618u;
    // 0x40e61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E100u, 0x40E618u, 0x40E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E620u;
label_40e620:
    // 0x40e620: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x40e620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40e624:
    // 0x40e624: 0x0  nop
    ctx->pc = 0x40e624u;
    // NOP
label_40e628:
    // 0x40e628: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_40e62c:
    if (ctx->pc == 0x40E62Cu) {
        ctx->pc = 0x40E630u;
        goto label_40e630;
    }
    ctx->pc = 0x40E628u;
    {
        const bool branch_taken_0x40e628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e628) {
            ctx->pc = 0x40E640u;
            goto label_40e640;
        }
    }
    ctx->pc = 0x40E630u;
label_40e630:
    // 0x40e630: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x40e630u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40e634:
    // 0x40e634: 0x0  nop
    ctx->pc = 0x40e634u;
    // NOP
label_40e638:
    // 0x40e638: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_40e63c:
    if (ctx->pc == 0x40E63Cu) {
        ctx->pc = 0x40E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E638u;
        // 0x40e63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E640u;
        goto label_40e640;
    }
    ctx->pc = 0x40E638u;
    {
        const bool branch_taken_0x40e638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E638u;
        // 0x40e63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e638) {
            ctx->pc = 0x40E678u;
            goto label_40e678;
        }
    }
    ctx->pc = 0x40E640u;
label_40e640:
    // 0x40e640: 0xc103e28  jal         func_40F8A0
label_40e644:
    if (ctx->pc == 0x40E644u) {
        ctx->pc = 0x40E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E640u;
        // 0x40e644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E648u;
        goto label_40e648;
    }
    ctx->pc = 0x40E640u;
    SET_GPR_U32(ctx, 31, 0x40E648u);
    ctx->pc = 0x40E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E640u;
    // 0x40e644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x40E640u, 0x40E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E648u;
label_40e648:
    // 0x40e648: 0x1454000a  bne         $v0, $s4, . + 4 + (0xA << 2)
label_40e64c:
    if (ctx->pc == 0x40E64Cu) {
        ctx->pc = 0x40E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E648u;
        // 0x40e64c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E650u;
        goto label_40e650;
    }
    ctx->pc = 0x40E648u;
    {
        const bool branch_taken_0x40e648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x40E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E648u;
        // 0x40e64c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e648) {
            ctx->pc = 0x40E674u;
            goto label_40e674;
        }
    }
    ctx->pc = 0x40E650u;
label_40e650:
    // 0x40e650: 0x8c44b8b8  lw          $a0, -0x4748($v0)
    ctx->pc = 0x40e650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_40e654:
    // 0x40e654: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40e654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40e658:
    // 0x40e658: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x40e658u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_40e65c:
    // 0x40e65c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40e660:
    // 0x40e660: 0x40f809  jalr        $v0
label_40e664:
    if (ctx->pc == 0x40E664u) {
        ctx->pc = 0x40E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E660u;
        // 0x40e664: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E668u;
        goto label_40e668;
    }
    ctx->pc = 0x40E660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E668u);
        ctx->pc = 0x40E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E660u;
        // 0x40e664: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E660u, 0x40E668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E668u;
label_40e668:
    // 0x40e668: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x40e668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40e66c:
    // 0x40e66c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
label_40e670:
    if (ctx->pc == 0x40E670u) {
        ctx->pc = 0x40E674u;
        goto label_40e674;
    }
    ctx->pc = 0x40E66Cu;
    {
        const bool branch_taken_0x40e66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e66c) {
            ctx->pc = 0x40E5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e5f8;
        }
    }
    ctx->pc = 0x40E674u;
label_40e674:
    // 0x40e674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40e678:
    // 0x40e678: 0x2c8200c8  sltiu       $v0, $a0, 0xC8
    ctx->pc = 0x40e678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_40e67c:
    // 0x40e67c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_40e680:
    if (ctx->pc == 0x40E680u) {
        ctx->pc = 0x40E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E67Cu;
        // 0x40e680: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E684u;
        goto label_40e684;
    }
    ctx->pc = 0x40E67Cu;
    {
        const bool branch_taken_0x40e67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E67Cu;
        // 0x40e680: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e67c) {
            ctx->pc = 0x40E640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e640;
        }
    }
    ctx->pc = 0x40E684u;
label_40e684:
    // 0x40e684: 0xc062a60  jal         func_18A980
label_40e688:
    if (ctx->pc == 0x40E688u) {
        ctx->pc = 0x40E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E684u;
        // 0x40e688: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E68Cu;
        goto label_40e68c;
    }
    ctx->pc = 0x40E684u;
    SET_GPR_U32(ctx, 31, 0x40E68Cu);
    ctx->pc = 0x40E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E684u;
    // 0x40e688: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x40E684u, 0x40E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E68Cu;
label_40e68c:
    // 0x40e68c: 0x10000011  b           . + 4 + (0x11 << 2)
label_40e690:
    if (ctx->pc == 0x40E690u) {
        ctx->pc = 0x40E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E68Cu;
        // 0x40e690: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E694u;
        goto label_40e694;
    }
    ctx->pc = 0x40E68Cu;
    {
        const bool branch_taken_0x40e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E68Cu;
        // 0x40e690: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e68c) {
            ctx->pc = 0x40E6D4u;
            goto label_40e6d4;
        }
    }
    ctx->pc = 0x40E694u;
label_40e694:
    // 0x40e694: 0x0  nop
    ctx->pc = 0x40e694u;
    // NOP
label_40e698:
    // 0x40e698: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_40e69c:
    if (ctx->pc == 0x40E69Cu) {
        ctx->pc = 0x40E6A0u;
        goto label_40e6a0;
    }
    ctx->pc = 0x40E698u;
    {
        const bool branch_taken_0x40e698 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e698) {
            ctx->pc = 0x40E6B8u;
            goto label_40e6b8;
        }
    }
    ctx->pc = 0x40E6A0u;
label_40e6a0:
    // 0x40e6a0: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_40e6a4:
    if (ctx->pc == 0x40E6A4u) {
        ctx->pc = 0x40E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6A0u;
        // 0x40e6a4: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E6A8u;
        goto label_40e6a8;
    }
    ctx->pc = 0x40E6A0u;
    {
        const bool branch_taken_0x40e6a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6A0u;
        // 0x40e6a4: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e6a0) {
            ctx->pc = 0x40E6B8u;
            goto label_40e6b8;
        }
    }
    ctx->pc = 0x40E6A8u;
label_40e6a8:
    // 0x40e6a8: 0xc0552b8  jal         func_154AE0
label_40e6ac:
    if (ctx->pc == 0x40E6ACu) {
        ctx->pc = 0x40E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6A8u;
        // 0x40e6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E6B0u;
        goto label_40e6b0;
    }
    ctx->pc = 0x40E6A8u;
    SET_GPR_U32(ctx, 31, 0x40E6B0u);
    ctx->pc = 0x40E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E6A8u;
    // 0x40e6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x40E6A8u, 0x40E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E6B0u;
label_40e6b0:
    // 0x40e6b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_40e6b4:
    if (ctx->pc == 0x40E6B4u) {
        ctx->pc = 0x40E6B8u;
        goto label_40e6b8;
    }
    ctx->pc = 0x40E6B0u;
    {
        const bool branch_taken_0x40e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e6b0) {
            ctx->pc = 0x40E6C8u;
            goto label_40e6c8;
        }
    }
    ctx->pc = 0x40E6B8u;
label_40e6b8:
    // 0x40e6b8: 0xc05529a  jal         func_154A68
label_40e6bc:
    if (ctx->pc == 0x40E6BCu) {
        ctx->pc = 0x40E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6B8u;
        // 0x40e6bc: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E6C0u;
        goto label_40e6c0;
    }
    ctx->pc = 0x40E6B8u;
    SET_GPR_U32(ctx, 31, 0x40E6C0u);
    ctx->pc = 0x40E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E6B8u;
    // 0x40e6bc: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A68u, 0x40E6B8u, 0x40E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E6C0u;
label_40e6c0:
    // 0x40e6c0: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
label_40e6c4:
    if (ctx->pc == 0x40E6C4u) {
        ctx->pc = 0x40E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6C0u;
        // 0x40e6c4: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E6C8u;
        goto label_40e6c8;
    }
    ctx->pc = 0x40E6C0u;
    {
        const bool branch_taken_0x40e6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6C0u;
        // 0x40e6c4: 0x8e645340  lw          $a0, 0x5340($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e6c0) {
            ctx->pc = 0x40E468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e468;
        }
    }
    ctx->pc = 0x40E6C8u;
label_40e6c8:
    // 0x40e6c8: 0xc062a60  jal         func_18A980
label_40e6cc:
    if (ctx->pc == 0x40E6CCu) {
        ctx->pc = 0x40E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6C8u;
        // 0x40e6cc: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E6D0u;
        goto label_40e6d0;
    }
    ctx->pc = 0x40E6C8u;
    SET_GPR_U32(ctx, 31, 0x40E6D0u);
    ctx->pc = 0x40E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E6C8u;
    // 0x40e6cc: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x40E6C8u, 0x40E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E6D0u;
label_40e6d0:
    // 0x40e6d0: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x40e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_40e6d4:
    // 0x40e6d4: 0xc0627b6  jal         func_189ED8
label_40e6d8:
    if (ctx->pc == 0x40E6D8u) {
        ctx->pc = 0x40E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6D4u;
        // 0x40e6d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E6DCu;
        goto label_40e6dc;
    }
    ctx->pc = 0x40E6D4u;
    SET_GPR_U32(ctx, 31, 0x40E6DCu);
    ctx->pc = 0x40E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E6D4u;
    // 0x40e6d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189ED8u, 0x40E6D4u, 0x40E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E6DCu;
label_40e6dc:
    // 0x40e6dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_40e6e0:
    if (ctx->pc == 0x40E6E0u) {
        ctx->pc = 0x40E6E4u;
        goto label_40e6e4;
    }
    ctx->pc = 0x40E6DCu;
    {
        const bool branch_taken_0x40e6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e6dc) {
            ctx->pc = 0x40E698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e698;
        }
    }
    ctx->pc = 0x40E6E4u;
label_40e6e4:
    // 0x40e6e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x40e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_40e6e8:
    // 0x40e6e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x40e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40e6ec:
    // 0x40e6ec: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
label_40e6f0:
    if (ctx->pc == 0x40E6F0u) {
        ctx->pc = 0x40E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6ECu;
        // 0x40e6f0: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E6F4u;
        goto label_40e6f4;
    }
    ctx->pc = 0x40E6ECu;
    {
        const bool branch_taken_0x40e6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x40E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E6ECu;
        // 0x40e6f0: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e6ec) {
            ctx->pc = 0x40E810u;
            goto label_40e810;
        }
    }
    ctx->pc = 0x40E6F4u;
label_40e6f4:
    // 0x40e6f4: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x40e6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
label_40e6f8:
    // 0x40e6f8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x40e6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_40e6fc:
    // 0x40e6fc: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x40e6fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_40e700:
    // 0x40e700: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x40e700u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
label_40e704:
    // 0x40e704: 0x3c140059  lui         $s4, 0x59
    ctx->pc = 0x40e704u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)89 << 16));
label_40e708:
    // 0x40e708: 0x8ee2b788  lw          $v0, -0x4878($s7)
    ctx->pc = 0x40e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948744)));
label_40e70c:
    // 0x40e70c: 0x0  nop
    ctx->pc = 0x40e70cu;
    // NOP
label_40e710:
    // 0x40e710: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x40e710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40e714:
    // 0x40e714: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x40e714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_40e718:
    // 0x40e718: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x40e718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e71c:
    // 0x40e71c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x40e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40e720:
    // 0x40e720: 0x8ce6fff0  lw          $a2, -0x10($a3)
    ctx->pc = 0x40e720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967280)));
label_40e724:
    // 0x40e724: 0x84620050  lh          $v0, 0x50($v1)
    ctx->pc = 0x40e724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40e728:
    // 0x40e728: 0x24680050  addiu       $t0, $v1, 0x50
    ctx->pc = 0x40e728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_40e72c:
    // 0x40e72c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_40e730:
    if (ctx->pc == 0x40E730u) {
        ctx->pc = 0x40E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E72Cu;
        // 0x40e730: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E734u;
        goto label_40e734;
    }
    ctx->pc = 0x40E72Cu;
    {
        const bool branch_taken_0x40e72c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E72Cu;
        // 0x40e730: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e72c) {
            ctx->pc = 0x40E73Cu;
            goto label_40e73c;
        }
    }
    ctx->pc = 0x40E734u;
label_40e734:
    // 0x40e734: 0x10000004  b           . + 4 + (0x4 << 2)
label_40e738:
    if (ctx->pc == 0x40E738u) {
        ctx->pc = 0x40E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E734u;
        // 0x40e738: 0x266589b0  addiu       $a1, $s3, -0x7650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E73Cu;
        goto label_40e73c;
    }
    ctx->pc = 0x40E734u;
    {
        const bool branch_taken_0x40e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E734u;
        // 0x40e738: 0x266589b0  addiu       $a1, $s3, -0x7650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e734) {
            ctx->pc = 0x40E748u;
            goto label_40e748;
        }
    }
    ctx->pc = 0x40E73Cu;
label_40e73c:
    // 0x40e73c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x40e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_40e740:
    // 0x40e740: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x40e740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_40e744:
    // 0x40e744: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x40e744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e748:
    // 0x40e748: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x40e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_40e74c:
    // 0x40e74c: 0x40f809  jalr        $v0
label_40e750:
    if (ctx->pc == 0x40E750u) {
        ctx->pc = 0x40E754u;
        goto label_40e754;
    }
    ctx->pc = 0x40E74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E74Cu, 0x40E754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E754u;
label_40e754:
    // 0x40e754: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_40e758:
    if (ctx->pc == 0x40E758u) {
        ctx->pc = 0x40E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E754u;
        // 0x40e758: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E75Cu;
        goto label_40e75c;
    }
    ctx->pc = 0x40E754u;
    {
        const bool branch_taken_0x40e754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E754u;
        // 0x40e758: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e754) {
            ctx->pc = 0x40E794u;
            goto label_40e794;
        }
    }
    ctx->pc = 0x40E75Cu;
label_40e75c:
    // 0x40e75c: 0xc062274  jal         func_1889D0
label_40e760:
    if (ctx->pc == 0x40E760u) {
        ctx->pc = 0x40E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E75Cu;
        // 0x40e760: 0x2651cd4c  addiu       $s1, $s2, -0x32B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954316));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E764u;
        goto label_40e764;
    }
    ctx->pc = 0x40E75Cu;
    SET_GPR_U32(ctx, 31, 0x40E764u);
    ctx->pc = 0x40E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E75Cu;
    // 0x40e760: 0x2651cd4c  addiu       $s1, $s2, -0x32B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x40E75Cu, 0x40E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E764u;
label_40e764:
    // 0x40e764: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x40e764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40e768:
    // 0x40e768: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e76c:
    // 0x40e76c: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x40e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_40e770:
    // 0x40e770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_40e774:
    if (ctx->pc == 0x40E774u) {
        ctx->pc = 0x40E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E770u;
        // 0x40e774: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E778u;
        goto label_40e778;
    }
    ctx->pc = 0x40E770u;
    {
        const bool branch_taken_0x40e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E770u;
        // 0x40e774: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e770) {
            ctx->pc = 0x40E780u;
            goto label_40e780;
        }
    }
    ctx->pc = 0x40E778u;
label_40e778:
    // 0x40e778: 0x10000003  b           . + 4 + (0x3 << 2)
label_40e77c:
    if (ctx->pc == 0x40E77Cu) {
        ctx->pc = 0x40E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E778u;
        // 0x40e77c: 0x266589b0  addiu       $a1, $s3, -0x7650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E780u;
        goto label_40e780;
    }
    ctx->pc = 0x40E778u;
    {
        const bool branch_taken_0x40e778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E778u;
        // 0x40e77c: 0x266589b0  addiu       $a1, $s3, -0x7650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e778) {
            ctx->pc = 0x40E788u;
            goto label_40e788;
        }
    }
    ctx->pc = 0x40E780u;
label_40e780:
    // 0x40e780: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x40e780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_40e784:
    // 0x40e784: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x40e784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e788:
    // 0x40e788: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x40e788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40e78c:
    // 0x40e78c: 0xc061f0e  jal         func_187C38
label_40e790:
    if (ctx->pc == 0x40E790u) {
        ctx->pc = 0x40E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E78Cu;
        // 0x40e790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E794u;
        goto label_40e794;
    }
    ctx->pc = 0x40E78Cu;
    SET_GPR_U32(ctx, 31, 0x40E794u);
    ctx->pc = 0x40E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E78Cu;
    // 0x40e790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187C38u, 0x40E78Cu, 0x40E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E794u;
label_40e794:
    // 0x40e794: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x40e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_40e798:
    // 0x40e798: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x40e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40e79c:
    // 0x40e79c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x40e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_40e7a0:
    // 0x40e7a0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_40e7a4:
    if (ctx->pc == 0x40E7A4u) {
        ctx->pc = 0x40E7A8u;
        goto label_40e7a8;
    }
    ctx->pc = 0x40E7A0u;
    {
        const bool branch_taken_0x40e7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x40e7a0) {
            ctx->pc = 0x40E7F4u;
            goto label_40e7f4;
        }
    }
    ctx->pc = 0x40E7A8u;
label_40e7a8:
    // 0x40e7a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x40e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40e7ac:
    // 0x40e7ac: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x40e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_40e7b0:
    // 0x40e7b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x40e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40e7b4:
    // 0x40e7b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40e7b8:
    // 0x40e7b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_40e7bc:
    if (ctx->pc == 0x40E7BCu) {
        ctx->pc = 0x40E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7B8u;
        // 0x40e7bc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E7C0u;
        goto label_40e7c0;
    }
    ctx->pc = 0x40E7B8u;
    {
        const bool branch_taken_0x40e7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7B8u;
        // 0x40e7bc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e7b8) {
            ctx->pc = 0x40E7E4u;
            goto label_40e7e4;
        }
    }
    ctx->pc = 0x40E7C0u;
label_40e7c0:
    // 0x40e7c0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_40e7c4:
    if (ctx->pc == 0x40E7C4u) {
        ctx->pc = 0x40E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7C0u;
        // 0x40e7c4: 0x8ec8b9c0  lw          $t0, -0x4640($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E7C8u;
        goto label_40e7c8;
    }
    ctx->pc = 0x40E7C0u;
    {
        const bool branch_taken_0x40e7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7C0u;
        // 0x40e7c4: 0x8ec8b9c0  lw          $t0, -0x4640($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e7c0) {
            ctx->pc = 0x40E7E4u;
            goto label_40e7e4;
        }
    }
    ctx->pc = 0x40E7C8u;
label_40e7c8:
    // 0x40e7c8: 0x26868a50  addiu       $a2, $s4, -0x75B0
    ctx->pc = 0x40e7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937168));
label_40e7cc:
    // 0x40e7cc: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x40e7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_40e7d0:
    // 0x40e7d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x40e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40e7d4:
    // 0x40e7d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x40e7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_40e7d8:
    // 0x40e7d8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x40e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_40e7dc:
    // 0x40e7dc: 0x60f809  jalr        $v1
label_40e7e0:
    if (ctx->pc == 0x40E7E0u) {
        ctx->pc = 0x40E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7DCu;
        // 0x40e7e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E7E4u;
        goto label_40e7e4;
    }
    ctx->pc = 0x40E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40E7E4u);
        ctx->pc = 0x40E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7DCu;
        // 0x40e7e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E7DCu, 0x40E7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E7E4u;
label_40e7e4:
    // 0x40e7e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x40e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40e7e8:
    // 0x40e7e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x40e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_40e7ec:
    // 0x40e7ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_40e7f0:
    if (ctx->pc == 0x40E7F0u) {
        ctx->pc = 0x40E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7ECu;
        // 0x40e7f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E7F4u;
        goto label_40e7f4;
    }
    ctx->pc = 0x40E7ECu;
    {
        const bool branch_taken_0x40e7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7ECu;
        // 0x40e7f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e7ec) {
            ctx->pc = 0x40E7FCu;
            goto label_40e7fc;
        }
    }
    ctx->pc = 0x40E7F4u;
label_40e7f4:
    // 0x40e7f4: 0xc13d5c0  jal         func_4F5700
label_40e7f8:
    if (ctx->pc == 0x40E7F8u) {
        ctx->pc = 0x40E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7F4u;
        // 0x40e7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E7FCu;
        goto label_40e7fc;
    }
    ctx->pc = 0x40E7F4u;
    SET_GPR_U32(ctx, 31, 0x40E7FCu);
    ctx->pc = 0x40E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E7F4u;
    // 0x40e7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5700u, 0x40E7F4u, 0x40E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E7FCu;
label_40e7fc:
    // 0x40e7fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x40e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_40e800:
    // 0x40e800: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x40e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40e804:
    // 0x40e804: 0x1462ffc2  bne         $v1, $v0, . + 4 + (-0x3E << 2)
label_40e808:
    if (ctx->pc == 0x40E808u) {
        ctx->pc = 0x40E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E804u;
        // 0x40e808: 0x8ee2b788  lw          $v0, -0x4878($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E80Cu;
        goto label_40e80c;
    }
    ctx->pc = 0x40E804u;
    {
        const bool branch_taken_0x40e804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x40E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E804u;
        // 0x40e808: 0x8ee2b788  lw          $v0, -0x4878($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e804) {
            ctx->pc = 0x40E710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40e710;
        }
    }
    ctx->pc = 0x40E80Cu;
label_40e80c:
    // 0x40e80c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x40e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_40e810:
    // 0x40e810: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_40e814:
    if (ctx->pc == 0x40E814u) {
        ctx->pc = 0x40E818u;
        goto label_40e818;
    }
    ctx->pc = 0x40E810u;
    {
        const bool branch_taken_0x40e810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e810) {
            ctx->pc = 0x40E820u;
            goto label_40e820;
        }
    }
    ctx->pc = 0x40E818u;
label_40e818:
    // 0x40e818: 0xc051636  jal         func_1458D8
label_40e81c:
    if (ctx->pc == 0x40E81Cu) {
        ctx->pc = 0x40E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E818u;
        // 0x40e81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E820u;
        goto label_40e820;
    }
    ctx->pc = 0x40E818u;
    SET_GPR_U32(ctx, 31, 0x40E820u);
    ctx->pc = 0x40E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E818u;
    // 0x40e81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458D8u, 0x40E818u, 0x40E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E820u;
label_40e820:
    // 0x40e820: 0xc06254a  jal         func_189528
label_40e824:
    if (ctx->pc == 0x40E824u) {
        ctx->pc = 0x40E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E820u;
        // 0x40e824: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E828u;
        goto label_40e828;
    }
    ctx->pc = 0x40E820u;
    SET_GPR_U32(ctx, 31, 0x40E828u);
    ctx->pc = 0x40E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E820u;
    // 0x40e824: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189528u, 0x40E820u, 0x40E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E828u;
label_40e828:
    // 0x40e828: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x40e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_40e82c:
    // 0x40e82c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e830:
    // 0x40e830: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_40e834:
    if (ctx->pc == 0x40E834u) {
        ctx->pc = 0x40E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E830u;
        // 0x40e834: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E838u;
        goto label_40e838;
    }
    ctx->pc = 0x40E830u;
    {
        const bool branch_taken_0x40e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E830u;
        // 0x40e834: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e830) {
            ctx->pc = 0x40E850u;
            goto label_40e850;
        }
    }
    ctx->pc = 0x40E838u;
label_40e838:
    // 0x40e838: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x40e838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_40e83c:
    // 0x40e83c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e840:
    // 0x40e840: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x40e840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_40e844:
    // 0x40e844: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x40e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_40e848:
    // 0x40e848: 0x60f809  jalr        $v1
label_40e84c:
    if (ctx->pc == 0x40E84Cu) {
        ctx->pc = 0x40E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E848u;
        // 0x40e84c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E850u;
        goto label_40e850;
    }
    ctx->pc = 0x40E848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40E850u);
        ctx->pc = 0x40E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E848u;
        // 0x40e84c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E848u, 0x40E850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E850u;
label_40e850:
    // 0x40e850: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_40e854:
    if (ctx->pc == 0x40E854u) {
        ctx->pc = 0x40E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E850u;
        // 0x40e854: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E858u;
        goto label_40e858;
    }
    ctx->pc = 0x40E850u;
    {
        const bool branch_taken_0x40e850 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E850u;
        // 0x40e854: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e850) {
            ctx->pc = 0x40E86Cu;
            goto label_40e86c;
        }
    }
    ctx->pc = 0x40E858u;
label_40e858:
    // 0x40e858: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x40e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_40e85c:
    // 0x40e85c: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x40e85cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_40e860:
    // 0x40e860: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x40e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_40e864:
    // 0x40e864: 0x60f809  jalr        $v1
label_40e868:
    if (ctx->pc == 0x40E868u) {
        ctx->pc = 0x40E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E864u;
        // 0x40e868: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E86Cu;
        goto label_40e86c;
    }
    ctx->pc = 0x40E864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40E86Cu);
        ctx->pc = 0x40E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E864u;
        // 0x40e868: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E864u, 0x40E86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E86Cu;
label_40e86c:
    // 0x40e86c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40e870:
    // 0x40e870: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x40e870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_40e874:
    // 0x40e874: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x40e874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_40e878:
    // 0x40e878: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40e87c:
    // 0x40e87c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x40e87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_40e880:
    // 0x40e880: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40e884:
    // 0x40e884: 0x40f809  jalr        $v0
label_40e888:
    if (ctx->pc == 0x40E888u) {
        ctx->pc = 0x40E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E884u;
        // 0x40e888: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E88Cu;
        goto label_40e88c;
    }
    ctx->pc = 0x40E884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E88Cu);
        ctx->pc = 0x40E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E884u;
        // 0x40e888: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E884u, 0x40E88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E88Cu;
label_40e88c:
    // 0x40e88c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x40e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_40e890:
    // 0x40e890: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x40e890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40e894:
    // 0x40e894: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x40e894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_40e898:
    // 0x40e898: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x40e898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_40e89c:
    // 0x40e89c: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x40e89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_40e8a0:
    // 0x40e8a0: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x40e8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_40e8a4:
    // 0x40e8a4: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x40e8a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_40e8a8:
    // 0x40e8a8: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x40e8a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_40e8ac:
    // 0x40e8ac: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x40e8acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_40e8b0:
    // 0x40e8b0: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x40e8b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_40e8b4:
    // 0x40e8b4: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x40e8b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_40e8b8:
    // 0x40e8b8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x40e8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_40e8bc:
    // 0x40e8bc: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x40e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40e8c0:
    // 0x40e8c0: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x40e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40e8c4:
    // 0x40e8c4: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x40e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40e8c8:
    // 0x40e8c8: 0x3e00008  jr          $ra
label_40e8cc:
    if (ctx->pc == 0x40E8CCu) {
        ctx->pc = 0x40E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E8C8u;
        // 0x40e8cc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E8D0u;
        goto label_fallthrough_0x40e8c8;
    }
    ctx->pc = 0x40E8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E8C8u;
        // 0x40e8cc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40e8c8:
    ctx->pc = 0x40E8D0u;
}
