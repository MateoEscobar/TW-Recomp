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

// Function: sub_0033E278
// Address: 0x33e278 - 0x33e7f0
void sub_0033E278_0x33e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E278_0x33e278");
#endif

    switch (ctx->pc) {
        case 0x33e278u: goto label_33e278;
        case 0x33e27cu: goto label_33e27c;
        case 0x33e280u: goto label_33e280;
        case 0x33e284u: goto label_33e284;
        case 0x33e288u: goto label_33e288;
        case 0x33e28cu: goto label_33e28c;
        case 0x33e290u: goto label_33e290;
        case 0x33e294u: goto label_33e294;
        case 0x33e298u: goto label_33e298;
        case 0x33e29cu: goto label_33e29c;
        case 0x33e2a0u: goto label_33e2a0;
        case 0x33e2a4u: goto label_33e2a4;
        case 0x33e2a8u: goto label_33e2a8;
        case 0x33e2acu: goto label_33e2ac;
        case 0x33e2b0u: goto label_33e2b0;
        case 0x33e2b4u: goto label_33e2b4;
        case 0x33e2b8u: goto label_33e2b8;
        case 0x33e2bcu: goto label_33e2bc;
        case 0x33e2c0u: goto label_33e2c0;
        case 0x33e2c4u: goto label_33e2c4;
        case 0x33e2c8u: goto label_33e2c8;
        case 0x33e2ccu: goto label_33e2cc;
        case 0x33e2d0u: goto label_33e2d0;
        case 0x33e2d4u: goto label_33e2d4;
        case 0x33e2d8u: goto label_33e2d8;
        case 0x33e2dcu: goto label_33e2dc;
        case 0x33e2e0u: goto label_33e2e0;
        case 0x33e2e4u: goto label_33e2e4;
        case 0x33e2e8u: goto label_33e2e8;
        case 0x33e2ecu: goto label_33e2ec;
        case 0x33e2f0u: goto label_33e2f0;
        case 0x33e2f4u: goto label_33e2f4;
        case 0x33e2f8u: goto label_33e2f8;
        case 0x33e2fcu: goto label_33e2fc;
        case 0x33e300u: goto label_33e300;
        case 0x33e304u: goto label_33e304;
        case 0x33e308u: goto label_33e308;
        case 0x33e30cu: goto label_33e30c;
        case 0x33e310u: goto label_33e310;
        case 0x33e314u: goto label_33e314;
        case 0x33e318u: goto label_33e318;
        case 0x33e31cu: goto label_33e31c;
        case 0x33e320u: goto label_33e320;
        case 0x33e324u: goto label_33e324;
        case 0x33e328u: goto label_33e328;
        case 0x33e32cu: goto label_33e32c;
        case 0x33e330u: goto label_33e330;
        case 0x33e334u: goto label_33e334;
        case 0x33e338u: goto label_33e338;
        case 0x33e33cu: goto label_33e33c;
        case 0x33e340u: goto label_33e340;
        case 0x33e344u: goto label_33e344;
        case 0x33e348u: goto label_33e348;
        case 0x33e34cu: goto label_33e34c;
        case 0x33e350u: goto label_33e350;
        case 0x33e354u: goto label_33e354;
        case 0x33e358u: goto label_33e358;
        case 0x33e35cu: goto label_33e35c;
        case 0x33e360u: goto label_33e360;
        case 0x33e364u: goto label_33e364;
        case 0x33e368u: goto label_33e368;
        case 0x33e36cu: goto label_33e36c;
        case 0x33e370u: goto label_33e370;
        case 0x33e374u: goto label_33e374;
        case 0x33e378u: goto label_33e378;
        case 0x33e37cu: goto label_33e37c;
        case 0x33e380u: goto label_33e380;
        case 0x33e384u: goto label_33e384;
        case 0x33e388u: goto label_33e388;
        case 0x33e38cu: goto label_33e38c;
        case 0x33e390u: goto label_33e390;
        case 0x33e394u: goto label_33e394;
        case 0x33e398u: goto label_33e398;
        case 0x33e39cu: goto label_33e39c;
        case 0x33e3a0u: goto label_33e3a0;
        case 0x33e3a4u: goto label_33e3a4;
        case 0x33e3a8u: goto label_33e3a8;
        case 0x33e3acu: goto label_33e3ac;
        case 0x33e3b0u: goto label_33e3b0;
        case 0x33e3b4u: goto label_33e3b4;
        case 0x33e3b8u: goto label_33e3b8;
        case 0x33e3bcu: goto label_33e3bc;
        case 0x33e3c0u: goto label_33e3c0;
        case 0x33e3c4u: goto label_33e3c4;
        case 0x33e3c8u: goto label_33e3c8;
        case 0x33e3ccu: goto label_33e3cc;
        case 0x33e3d0u: goto label_33e3d0;
        case 0x33e3d4u: goto label_33e3d4;
        case 0x33e3d8u: goto label_33e3d8;
        case 0x33e3dcu: goto label_33e3dc;
        case 0x33e3e0u: goto label_33e3e0;
        case 0x33e3e4u: goto label_33e3e4;
        case 0x33e3e8u: goto label_33e3e8;
        case 0x33e3ecu: goto label_33e3ec;
        case 0x33e3f0u: goto label_33e3f0;
        case 0x33e3f4u: goto label_33e3f4;
        case 0x33e3f8u: goto label_33e3f8;
        case 0x33e3fcu: goto label_33e3fc;
        case 0x33e400u: goto label_33e400;
        case 0x33e404u: goto label_33e404;
        case 0x33e408u: goto label_33e408;
        case 0x33e40cu: goto label_33e40c;
        case 0x33e410u: goto label_33e410;
        case 0x33e414u: goto label_33e414;
        case 0x33e418u: goto label_33e418;
        case 0x33e41cu: goto label_33e41c;
        case 0x33e420u: goto label_33e420;
        case 0x33e424u: goto label_33e424;
        case 0x33e428u: goto label_33e428;
        case 0x33e42cu: goto label_33e42c;
        case 0x33e430u: goto label_33e430;
        case 0x33e434u: goto label_33e434;
        case 0x33e438u: goto label_33e438;
        case 0x33e43cu: goto label_33e43c;
        case 0x33e440u: goto label_33e440;
        case 0x33e444u: goto label_33e444;
        case 0x33e448u: goto label_33e448;
        case 0x33e44cu: goto label_33e44c;
        case 0x33e450u: goto label_33e450;
        case 0x33e454u: goto label_33e454;
        case 0x33e458u: goto label_33e458;
        case 0x33e45cu: goto label_33e45c;
        case 0x33e460u: goto label_33e460;
        case 0x33e464u: goto label_33e464;
        case 0x33e468u: goto label_33e468;
        case 0x33e46cu: goto label_33e46c;
        case 0x33e470u: goto label_33e470;
        case 0x33e474u: goto label_33e474;
        case 0x33e478u: goto label_33e478;
        case 0x33e47cu: goto label_33e47c;
        case 0x33e480u: goto label_33e480;
        case 0x33e484u: goto label_33e484;
        case 0x33e488u: goto label_33e488;
        case 0x33e48cu: goto label_33e48c;
        case 0x33e490u: goto label_33e490;
        case 0x33e494u: goto label_33e494;
        case 0x33e498u: goto label_33e498;
        case 0x33e49cu: goto label_33e49c;
        case 0x33e4a0u: goto label_33e4a0;
        case 0x33e4a4u: goto label_33e4a4;
        case 0x33e4a8u: goto label_33e4a8;
        case 0x33e4acu: goto label_33e4ac;
        case 0x33e4b0u: goto label_33e4b0;
        case 0x33e4b4u: goto label_33e4b4;
        case 0x33e4b8u: goto label_33e4b8;
        case 0x33e4bcu: goto label_33e4bc;
        case 0x33e4c0u: goto label_33e4c0;
        case 0x33e4c4u: goto label_33e4c4;
        case 0x33e4c8u: goto label_33e4c8;
        case 0x33e4ccu: goto label_33e4cc;
        case 0x33e4d0u: goto label_33e4d0;
        case 0x33e4d4u: goto label_33e4d4;
        case 0x33e4d8u: goto label_33e4d8;
        case 0x33e4dcu: goto label_33e4dc;
        case 0x33e4e0u: goto label_33e4e0;
        case 0x33e4e4u: goto label_33e4e4;
        case 0x33e4e8u: goto label_33e4e8;
        case 0x33e4ecu: goto label_33e4ec;
        case 0x33e4f0u: goto label_33e4f0;
        case 0x33e4f4u: goto label_33e4f4;
        case 0x33e4f8u: goto label_33e4f8;
        case 0x33e4fcu: goto label_33e4fc;
        case 0x33e500u: goto label_33e500;
        case 0x33e504u: goto label_33e504;
        case 0x33e508u: goto label_33e508;
        case 0x33e50cu: goto label_33e50c;
        case 0x33e510u: goto label_33e510;
        case 0x33e514u: goto label_33e514;
        case 0x33e518u: goto label_33e518;
        case 0x33e51cu: goto label_33e51c;
        case 0x33e520u: goto label_33e520;
        case 0x33e524u: goto label_33e524;
        case 0x33e528u: goto label_33e528;
        case 0x33e52cu: goto label_33e52c;
        case 0x33e530u: goto label_33e530;
        case 0x33e534u: goto label_33e534;
        case 0x33e538u: goto label_33e538;
        case 0x33e53cu: goto label_33e53c;
        case 0x33e540u: goto label_33e540;
        case 0x33e544u: goto label_33e544;
        case 0x33e548u: goto label_33e548;
        case 0x33e54cu: goto label_33e54c;
        case 0x33e550u: goto label_33e550;
        case 0x33e554u: goto label_33e554;
        case 0x33e558u: goto label_33e558;
        case 0x33e55cu: goto label_33e55c;
        case 0x33e560u: goto label_33e560;
        case 0x33e564u: goto label_33e564;
        case 0x33e568u: goto label_33e568;
        case 0x33e56cu: goto label_33e56c;
        case 0x33e570u: goto label_33e570;
        case 0x33e574u: goto label_33e574;
        case 0x33e578u: goto label_33e578;
        case 0x33e57cu: goto label_33e57c;
        case 0x33e580u: goto label_33e580;
        case 0x33e584u: goto label_33e584;
        case 0x33e588u: goto label_33e588;
        case 0x33e58cu: goto label_33e58c;
        case 0x33e590u: goto label_33e590;
        case 0x33e594u: goto label_33e594;
        case 0x33e598u: goto label_33e598;
        case 0x33e59cu: goto label_33e59c;
        case 0x33e5a0u: goto label_33e5a0;
        case 0x33e5a4u: goto label_33e5a4;
        case 0x33e5a8u: goto label_33e5a8;
        case 0x33e5acu: goto label_33e5ac;
        case 0x33e5b0u: goto label_33e5b0;
        case 0x33e5b4u: goto label_33e5b4;
        case 0x33e5b8u: goto label_33e5b8;
        case 0x33e5bcu: goto label_33e5bc;
        case 0x33e5c0u: goto label_33e5c0;
        case 0x33e5c4u: goto label_33e5c4;
        case 0x33e5c8u: goto label_33e5c8;
        case 0x33e5ccu: goto label_33e5cc;
        case 0x33e5d0u: goto label_33e5d0;
        case 0x33e5d4u: goto label_33e5d4;
        case 0x33e5d8u: goto label_33e5d8;
        case 0x33e5dcu: goto label_33e5dc;
        case 0x33e5e0u: goto label_33e5e0;
        case 0x33e5e4u: goto label_33e5e4;
        case 0x33e5e8u: goto label_33e5e8;
        case 0x33e5ecu: goto label_33e5ec;
        case 0x33e5f0u: goto label_33e5f0;
        case 0x33e5f4u: goto label_33e5f4;
        case 0x33e5f8u: goto label_33e5f8;
        case 0x33e5fcu: goto label_33e5fc;
        case 0x33e600u: goto label_33e600;
        case 0x33e604u: goto label_33e604;
        case 0x33e608u: goto label_33e608;
        case 0x33e60cu: goto label_33e60c;
        case 0x33e610u: goto label_33e610;
        case 0x33e614u: goto label_33e614;
        case 0x33e618u: goto label_33e618;
        case 0x33e61cu: goto label_33e61c;
        case 0x33e620u: goto label_33e620;
        case 0x33e624u: goto label_33e624;
        case 0x33e628u: goto label_33e628;
        case 0x33e62cu: goto label_33e62c;
        case 0x33e630u: goto label_33e630;
        case 0x33e634u: goto label_33e634;
        case 0x33e638u: goto label_33e638;
        case 0x33e63cu: goto label_33e63c;
        case 0x33e640u: goto label_33e640;
        case 0x33e644u: goto label_33e644;
        case 0x33e648u: goto label_33e648;
        case 0x33e64cu: goto label_33e64c;
        case 0x33e650u: goto label_33e650;
        case 0x33e654u: goto label_33e654;
        case 0x33e658u: goto label_33e658;
        case 0x33e65cu: goto label_33e65c;
        case 0x33e660u: goto label_33e660;
        case 0x33e664u: goto label_33e664;
        case 0x33e668u: goto label_33e668;
        case 0x33e66cu: goto label_33e66c;
        case 0x33e670u: goto label_33e670;
        case 0x33e674u: goto label_33e674;
        case 0x33e678u: goto label_33e678;
        case 0x33e67cu: goto label_33e67c;
        case 0x33e680u: goto label_33e680;
        case 0x33e684u: goto label_33e684;
        case 0x33e688u: goto label_33e688;
        case 0x33e68cu: goto label_33e68c;
        case 0x33e690u: goto label_33e690;
        case 0x33e694u: goto label_33e694;
        case 0x33e698u: goto label_33e698;
        case 0x33e69cu: goto label_33e69c;
        case 0x33e6a0u: goto label_33e6a0;
        case 0x33e6a4u: goto label_33e6a4;
        case 0x33e6a8u: goto label_33e6a8;
        case 0x33e6acu: goto label_33e6ac;
        case 0x33e6b0u: goto label_33e6b0;
        case 0x33e6b4u: goto label_33e6b4;
        case 0x33e6b8u: goto label_33e6b8;
        case 0x33e6bcu: goto label_33e6bc;
        case 0x33e6c0u: goto label_33e6c0;
        case 0x33e6c4u: goto label_33e6c4;
        case 0x33e6c8u: goto label_33e6c8;
        case 0x33e6ccu: goto label_33e6cc;
        case 0x33e6d0u: goto label_33e6d0;
        case 0x33e6d4u: goto label_33e6d4;
        case 0x33e6d8u: goto label_33e6d8;
        case 0x33e6dcu: goto label_33e6dc;
        case 0x33e6e0u: goto label_33e6e0;
        case 0x33e6e4u: goto label_33e6e4;
        case 0x33e6e8u: goto label_33e6e8;
        case 0x33e6ecu: goto label_33e6ec;
        case 0x33e6f0u: goto label_33e6f0;
        case 0x33e6f4u: goto label_33e6f4;
        case 0x33e6f8u: goto label_33e6f8;
        case 0x33e6fcu: goto label_33e6fc;
        case 0x33e700u: goto label_33e700;
        case 0x33e704u: goto label_33e704;
        case 0x33e708u: goto label_33e708;
        case 0x33e70cu: goto label_33e70c;
        case 0x33e710u: goto label_33e710;
        case 0x33e714u: goto label_33e714;
        case 0x33e718u: goto label_33e718;
        case 0x33e71cu: goto label_33e71c;
        case 0x33e720u: goto label_33e720;
        case 0x33e724u: goto label_33e724;
        case 0x33e728u: goto label_33e728;
        case 0x33e72cu: goto label_33e72c;
        case 0x33e730u: goto label_33e730;
        case 0x33e734u: goto label_33e734;
        case 0x33e738u: goto label_33e738;
        case 0x33e73cu: goto label_33e73c;
        case 0x33e740u: goto label_33e740;
        case 0x33e744u: goto label_33e744;
        case 0x33e748u: goto label_33e748;
        case 0x33e74cu: goto label_33e74c;
        case 0x33e750u: goto label_33e750;
        case 0x33e754u: goto label_33e754;
        case 0x33e758u: goto label_33e758;
        case 0x33e75cu: goto label_33e75c;
        case 0x33e760u: goto label_33e760;
        case 0x33e764u: goto label_33e764;
        case 0x33e768u: goto label_33e768;
        case 0x33e76cu: goto label_33e76c;
        case 0x33e770u: goto label_33e770;
        case 0x33e774u: goto label_33e774;
        case 0x33e778u: goto label_33e778;
        case 0x33e77cu: goto label_33e77c;
        case 0x33e780u: goto label_33e780;
        case 0x33e784u: goto label_33e784;
        case 0x33e788u: goto label_33e788;
        case 0x33e78cu: goto label_33e78c;
        case 0x33e790u: goto label_33e790;
        case 0x33e794u: goto label_33e794;
        case 0x33e798u: goto label_33e798;
        case 0x33e79cu: goto label_33e79c;
        case 0x33e7a0u: goto label_33e7a0;
        case 0x33e7a4u: goto label_33e7a4;
        case 0x33e7a8u: goto label_33e7a8;
        case 0x33e7acu: goto label_33e7ac;
        case 0x33e7b0u: goto label_33e7b0;
        case 0x33e7b4u: goto label_33e7b4;
        case 0x33e7b8u: goto label_33e7b8;
        case 0x33e7bcu: goto label_33e7bc;
        case 0x33e7c0u: goto label_33e7c0;
        case 0x33e7c4u: goto label_33e7c4;
        case 0x33e7c8u: goto label_33e7c8;
        case 0x33e7ccu: goto label_33e7cc;
        case 0x33e7d0u: goto label_33e7d0;
        case 0x33e7d4u: goto label_33e7d4;
        case 0x33e7d8u: goto label_33e7d8;
        case 0x33e7dcu: goto label_33e7dc;
        case 0x33e7e0u: goto label_33e7e0;
        case 0x33e7e4u: goto label_33e7e4;
        case 0x33e7e8u: goto label_33e7e8;
        case 0x33e7ecu: goto label_33e7ec;
        default: break;
    }

    ctx->pc = 0x33e278u;

label_33e278:
    // 0x33e278: 0x27bdd7d0  addiu       $sp, $sp, -0x2830
    ctx->pc = 0x33e278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294957008));
label_33e27c:
    // 0x33e27c: 0xe7b42820  swc1        $f20, 0x2820($sp)
    ctx->pc = 0x33e27cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10272), bits); }
label_33e280:
    // 0x33e280: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_33e284:
    // 0x33e284: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x33e284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33e288:
    // 0x33e288: 0x7fb327e0  sq          $s3, 0x27E0($sp)
    ctx->pc = 0x33e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10208), GPR_VEC(ctx, 19));
label_33e28c:
    // 0x33e28c: 0x460ca003  div.s       $f0, $f20, $f12
    ctx->pc = 0x33e28cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_33e290:
    // 0x33e290: 0x7fb727a0  sq          $s7, 0x27A0($sp)
    ctx->pc = 0x33e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10144), GPR_VEC(ctx, 23));
label_33e294:
    // 0x33e294: 0x7fb02810  sq          $s0, 0x2810($sp)
    ctx->pc = 0x33e294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10256), GPR_VEC(ctx, 16));
label_33e298:
    // 0x33e298: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33e298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33e29c:
    // 0x33e29c: 0x7fb12800  sq          $s1, 0x2800($sp)
    ctx->pc = 0x33e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10240), GPR_VEC(ctx, 17));
label_33e2a0:
    // 0x33e2a0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x33e2a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e2a4:
    // 0x33e2a4: 0x7fb227f0  sq          $s2, 0x27F0($sp)
    ctx->pc = 0x33e2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10224), GPR_VEC(ctx, 18));
label_33e2a8:
    // 0x33e2a8: 0x7fb427d0  sq          $s4, 0x27D0($sp)
    ctx->pc = 0x33e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10192), GPR_VEC(ctx, 20));
label_33e2ac:
    // 0x33e2ac: 0x7fb527c0  sq          $s5, 0x27C0($sp)
    ctx->pc = 0x33e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10176), GPR_VEC(ctx, 21));
label_33e2b0:
    // 0x33e2b0: 0x7fb627b0  sq          $s6, 0x27B0($sp)
    ctx->pc = 0x33e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10160), GPR_VEC(ctx, 22));
label_33e2b4:
    // 0x33e2b4: 0x7fbe2790  sq          $fp, 0x2790($sp)
    ctx->pc = 0x33e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10128), GPR_VEC(ctx, 30));
label_33e2b8:
    // 0x33e2b8: 0xffbf2780  sd          $ra, 0x2780($sp)
    ctx->pc = 0x33e2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 10112), GPR_U64(ctx, 31));
label_33e2bc:
    // 0x33e2bc: 0x7a620050  lq          $v0, 0x50($s3)
    ctx->pc = 0x33e2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_33e2c0:
    // 0x33e2c0: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x33e2c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_33e2c4:
    // 0x33e2c4: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x33e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_33e2c8:
    // 0x33e2c8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x33e2c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_33e2cc:
    // 0x33e2cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33e2ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e2d0:
    // 0x33e2d0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x33e2d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_33e2d4:
    // 0x33e2d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33e2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33e2d8:
    // 0x33e2d8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x33e2d8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_33e2dc:
    // 0x33e2dc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x33e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_33e2e0:
    // 0x33e2e0: 0xafa72770  sw          $a3, 0x2770($sp)
    ctx->pc = 0x33e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10096), GPR_U32(ctx, 7));
label_33e2e4:
    // 0x33e2e4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x33e2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_33e2e8:
    // 0x33e2e8: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x33e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_33e2ec:
    // 0x33e2ec: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x33e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_33e2f0:
    // 0x33e2f0: 0xe7ac2764  swc1        $f12, 0x2764($sp)
    ctx->pc = 0x33e2f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10084), bits); }
label_33e2f4:
    // 0x33e2f4: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x33e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_33e2f8:
    // 0x33e2f8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_33e2fc:
    if (ctx->pc == 0x33E2FCu) {
        ctx->pc = 0x33E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2F8u;
        // 0x33e2fc: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E300u;
        goto label_33e300;
    }
    ctx->pc = 0x33E2F8u;
    {
        const bool branch_taken_0x33e2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2F8u;
        // 0x33e2fc: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e2f8) {
            ctx->pc = 0x33E348u;
            goto label_33e348;
        }
    }
    ctx->pc = 0x33E300u;
label_33e300:
    // 0x33e300: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33e300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e304:
    // 0x33e304: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33e304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33e308:
    // 0x33e308: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33e30c:
    // 0x33e30c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x33e30cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_33e310:
    // 0x33e310: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x33e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_33e314:
    // 0x33e314: 0x60f809  jalr        $v1
label_33e318:
    if (ctx->pc == 0x33E318u) {
        ctx->pc = 0x33E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E314u;
        // 0x33e318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E31Cu;
        goto label_33e31c;
    }
    ctx->pc = 0x33E314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E31Cu);
        ctx->pc = 0x33E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E314u;
        // 0x33e318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E314u, 0x33E31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E31Cu;
label_33e31c:
    // 0x33e31c: 0x0  nop
    ctx->pc = 0x33e31cu;
    // NOP
label_33e320:
    // 0x33e320: 0x0  nop
    ctx->pc = 0x33e320u;
    // NOP
label_33e324:
    // 0x33e324: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x33e324u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_33e328:
    // 0x33e328: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x33e328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33e32c:
    // 0x33e32c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33e32cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33e330:
    // 0x33e330: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33e330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e334:
    // 0x33e334: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33e334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33e338:
    // 0x33e338: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33e338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33e33c:
    // 0x33e33c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33e33cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_33e340:
    // 0x33e340: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x33e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_33e344:
    // 0x33e344: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x33e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_33e348:
    // 0x33e348: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x33e348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33e34c:
    // 0x33e34c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x33e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_33e350:
    // 0x33e350: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x33e350u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33e354:
    // 0x33e354: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x33e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_33e358:
    // 0x33e358: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33e358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e35c:
    // 0x33e35c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33e35cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33e360:
    // 0x33e360: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33e360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33e364:
    // 0x33e364: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33e364u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33e368:
    // 0x33e368: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33e368u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33e36c:
    // 0x33e36c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x33e36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
label_33e370:
    // 0x33e370: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x33e370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
label_33e374:
    // 0x33e374: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x33e374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33e378:
    // 0x33e378: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33e378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e37c:
    // 0x33e37c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33e37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e380:
    // 0x33e380: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33e380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33e384:
    // 0x33e384: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33e384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33e388:
    // 0x33e388: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33e388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33e38c:
    // 0x33e38c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x33e38cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_33e390:
    // 0x33e390: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x33e390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_33e394:
    // 0x33e394: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x33e394u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e398:
    // 0x33e398: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x33e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_33e39c:
    // 0x33e39c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x33e39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e3a0:
    // 0x33e3a0: 0x7e630050  sq          $v1, 0x50($s3)
    ctx->pc = 0x33e3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 3));
label_33e3a4:
    // 0x33e3a4: 0x45000104  bc1f        . + 4 + (0x104 << 2)
label_33e3a8:
    if (ctx->pc == 0x33E3A8u) {
        ctx->pc = 0x33E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3A4u;
        // 0x33e3a8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3ACu;
        goto label_33e3ac;
    }
    ctx->pc = 0x33E3A4u;
    {
        const bool branch_taken_0x33e3a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3A4u;
        // 0x33e3a8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e3a4) {
            ctx->pc = 0x33E7B8u;
            goto label_33e7b8;
        }
    }
    ctx->pc = 0x33E3ACu;
label_33e3ac:
    // 0x33e3ac: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x33e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_33e3b0:
    // 0x33e3b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33e3b4:
    // 0x33e3b4: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33e3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e3b8:
    // 0x33e3b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33e3bc:
    // 0x33e3bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33e3c0:
    // 0x33e3c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33e3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e3c4:
    // 0x33e3c4: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x33e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
label_33e3c8:
    // 0x33e3c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x33e3c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e3cc:
    // 0x33e3cc: 0xafa0276c  sw          $zero, 0x276C($sp)
    ctx->pc = 0x33e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10092), GPR_U32(ctx, 0));
label_33e3d0:
    // 0x33e3d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33e3d4:
    // 0x33e3d4: 0xafa02774  sw          $zero, 0x2774($sp)
    ctx->pc = 0x33e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10100), GPR_U32(ctx, 0));
label_33e3d8:
    // 0x33e3d8: 0x84650098  lh          $a1, 0x98($v1)
    ctx->pc = 0x33e3d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_33e3dc:
    // 0x33e3dc: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x33e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_33e3e0:
    // 0x33e3e0: 0x40f809  jalr        $v0
label_33e3e4:
    if (ctx->pc == 0x33E3E4u) {
        ctx->pc = 0x33E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3E0u;
        // 0x33e3e4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3E8u;
        goto label_33e3e8;
    }
    ctx->pc = 0x33E3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E3E8u);
        ctx->pc = 0x33E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3E0u;
        // 0x33e3e4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E3E0u, 0x33E3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E3E8u;
label_33e3e8:
    // 0x33e3e8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x33e3e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33e3ec:
    // 0x33e3ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e3f0:
    // 0x33e3f0: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x33e3f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33e3f4:
    // 0x33e3f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33e3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e3f8:
    // 0x33e3f8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x33e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_33e3fc:
    // 0x33e3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33e3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e400:
    // 0x33e400: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x33e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_33e404:
    // 0x33e404: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x33e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33e408:
    // 0x33e408: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33e408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33e40c:
    // 0x33e40c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33e410:
    // 0x33e410: 0x40f809  jalr        $v0
label_33e414:
    if (ctx->pc == 0x33E414u) {
        ctx->pc = 0x33E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E410u;
        // 0x33e414: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E418u;
        goto label_33e418;
    }
    ctx->pc = 0x33E410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E418u);
        ctx->pc = 0x33E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E410u;
        // 0x33e414: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E410u, 0x33E418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E418u;
label_33e418:
    // 0x33e418: 0xafa02768  sw          $zero, 0x2768($sp)
    ctx->pc = 0x33e418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10088), GPR_U32(ctx, 0));
label_33e41c:
    // 0x33e41c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x33e41cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e420:
    // 0x33e420: 0x96a20032  lhu         $v0, 0x32($s5)
    ctx->pc = 0x33e420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 50)));
label_33e424:
    // 0x33e424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33e428:
    // 0x33e428: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_33e42c:
    if (ctx->pc == 0x33E42Cu) {
        ctx->pc = 0x33E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E428u;
        // 0x33e42c: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E430u;
        goto label_33e430;
    }
    ctx->pc = 0x33E428u;
    {
        const bool branch_taken_0x33e428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E428u;
        // 0x33e42c: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e428) {
            ctx->pc = 0x33E5C4u;
            goto label_33e5c4;
        }
    }
    ctx->pc = 0x33E430u;
label_33e430:
    // 0x33e430: 0xc0d0456  jal         func_341158
label_33e434:
    if (ctx->pc == 0x33E434u) {
        ctx->pc = 0x33E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E430u;
        // 0x33e434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E438u;
        goto label_33e438;
    }
    ctx->pc = 0x33E430u;
    SET_GPR_U32(ctx, 31, 0x33E438u);
    ctx->pc = 0x33E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E430u;
    // 0x33e434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33E430u, 0x33E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E438u;
label_33e438:
    // 0x33e438: 0xc0d0456  jal         func_341158
label_33e43c:
    if (ctx->pc == 0x33E43Cu) {
        ctx->pc = 0x33E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E438u;
        // 0x33e43c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E440u;
        goto label_33e440;
    }
    ctx->pc = 0x33E438u;
    SET_GPR_U32(ctx, 31, 0x33E440u);
    ctx->pc = 0x33E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E438u;
    // 0x33e43c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33E438u, 0x33E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E440u;
label_33e440:
    // 0x33e440: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x33e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_33e444:
    // 0x33e444: 0xc0d0456  jal         func_341158
label_33e448:
    if (ctx->pc == 0x33E448u) {
        ctx->pc = 0x33E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E444u;
        // 0x33e448: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E44Cu;
        goto label_33e44c;
    }
    ctx->pc = 0x33E444u;
    SET_GPR_U32(ctx, 31, 0x33E44Cu);
    ctx->pc = 0x33E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E444u;
    // 0x33e448: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33E444u, 0x33E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E44Cu;
label_33e44c:
    // 0x33e44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33e450:
    // 0x33e450: 0xc0d058e  jal         func_341638
label_33e454:
    if (ctx->pc == 0x33E454u) {
        ctx->pc = 0x33E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E450u;
        // 0x33e454: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E458u;
        goto label_33e458;
    }
    ctx->pc = 0x33E450u;
    SET_GPR_U32(ctx, 31, 0x33E458u);
    ctx->pc = 0x33E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E450u;
    // 0x33e454: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x33E450u, 0x33E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E458u;
label_33e458:
    // 0x33e458: 0x27a22768  addiu       $v0, $sp, 0x2768
    ctx->pc = 0x33e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 10088));
label_33e45c:
    // 0x33e45c: 0x27a3276c  addiu       $v1, $sp, 0x276C
    ctx->pc = 0x33e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10092));
label_33e460:
    // 0x33e460: 0xafa22778  sw          $v0, 0x2778($sp)
    ctx->pc = 0x33e460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10104), GPR_U32(ctx, 2));
label_33e464:
    // 0x33e464: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x33e464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33e468:
    // 0x33e468: 0xafa3277c  sw          $v1, 0x277C($sp)
    ctx->pc = 0x33e468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10108), GPR_U32(ctx, 3));
label_33e46c:
    // 0x33e46c: 0xc7a02764  lwc1        $f0, 0x2764($sp)
    ctx->pc = 0x33e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e470:
    // 0x33e470: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x33e470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33e474:
    // 0x33e474: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33e474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33e478:
    // 0x33e478: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33e478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33e47c:
    // 0x33e47c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33e47cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33e480:
    // 0x33e480: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33e480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33e484:
    // 0x33e484: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33e484u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_33e488:
    // 0x33e488: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33e48c:
    // 0x33e48c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33e48cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e490:
    // 0x33e490: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33e490u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e494:
    // 0x33e494: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x33e494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33e498:
    // 0x33e498: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33e498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33e49c:
    // 0x33e49c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33e49cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33e4a0:
    // 0x33e4a0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x33e4a0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_33e4a4:
    // 0x33e4a4: 0xafa02760  sw          $zero, 0x2760($sp)
    ctx->pc = 0x33e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10080), GPR_U32(ctx, 0));
label_33e4a8:
    // 0x33e4a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x33e4a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e4ac:
    // 0x33e4ac: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x33e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_33e4b0:
    // 0x33e4b0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x33e4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e4b4:
    // 0x33e4b4: 0x0  nop
    ctx->pc = 0x33e4b4u;
    // NOP
label_33e4b8:
    // 0x33e4b8: 0x45010075  bc1t        . + 4 + (0x75 << 2)
label_33e4bc:
    if (ctx->pc == 0x33E4BCu) {
        ctx->pc = 0x33E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4B8u;
        // 0x33e4bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4C0u;
        goto label_33e4c0;
    }
    ctx->pc = 0x33E4B8u;
    {
        const bool branch_taken_0x33e4b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4B8u;
        // 0x33e4bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4b8) {
            ctx->pc = 0x33E690u;
            goto label_33e690;
        }
    }
    ctx->pc = 0x33E4C0u;
label_33e4c0:
    // 0x33e4c0: 0x7ba60080  lq          $a2, 0x80($sp)
    ctx->pc = 0x33e4c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33e4c4:
    // 0x33e4c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x33e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33e4c8:
    // 0x33e4c8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x33e4c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33e4cc:
    // 0x33e4cc: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x33e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_33e4d0:
    // 0x33e4d0: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x33e4d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33e4d4:
    // 0x33e4d4: 0x7fa600e0  sq          $a2, 0xE0($sp)
    ctx->pc = 0x33e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 6));
label_33e4d8:
    // 0x33e4d8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x33e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_33e4dc:
    // 0x33e4dc: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x33e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_33e4e0:
    // 0x33e4e0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x33e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_33e4e4:
    // 0x33e4e4: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x33e4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_33e4e8:
    // 0x33e4e8: 0xc0d0530  jal         func_3414C0
label_33e4ec:
    if (ctx->pc == 0x33E4ECu) {
        ctx->pc = 0x33E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4E8u;
        // 0x33e4ec: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4F0u;
        goto label_33e4f0;
    }
    ctx->pc = 0x33E4E8u;
    SET_GPR_U32(ctx, 31, 0x33E4F0u);
    ctx->pc = 0x33E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E4E8u;
    // 0x33e4ec: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3414C0u, 0x33E4E8u, 0x33E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E4F0u;
label_33e4f0:
    // 0x33e4f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x33e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_33e4f4:
    // 0x33e4f4: 0xc0d0610  jal         func_341840
label_33e4f8:
    if (ctx->pc == 0x33E4F8u) {
        ctx->pc = 0x33E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4F4u;
        // 0x33e4f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4FCu;
        goto label_33e4fc;
    }
    ctx->pc = 0x33E4F4u;
    SET_GPR_U32(ctx, 31, 0x33E4FCu);
    ctx->pc = 0x33E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E4F4u;
    // 0x33e4f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341840u, 0x33E4F4u, 0x33E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E4FCu;
label_33e4fc:
    // 0x33e4fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x33e4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33e500:
    // 0x33e500: 0xc0d0610  jal         func_341840
label_33e504:
    if (ctx->pc == 0x33E504u) {
        ctx->pc = 0x33E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E500u;
        // 0x33e504: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E508u;
        goto label_33e508;
    }
    ctx->pc = 0x33E500u;
    SET_GPR_U32(ctx, 31, 0x33E508u);
    ctx->pc = 0x33E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E500u;
    // 0x33e504: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341840u, 0x33E500u, 0x33E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E508u;
label_33e508:
    // 0x33e508: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x33e508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_33e50c:
    // 0x33e50c: 0x27b02690  addiu       $s0, $sp, 0x2690
    ctx->pc = 0x33e50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 9872));
label_33e510:
    // 0x33e510: 0x27b12760  addiu       $s1, $sp, 0x2760
    ctx->pc = 0x33e510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 10080));
label_33e514:
    // 0x33e514: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33e518:
    // 0x33e518: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x33e518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_33e51c:
    // 0x33e51c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33e51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e520:
    // 0x33e520: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33e520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33e524:
    // 0x33e524: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x33e524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e528:
    // 0x33e528: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x33e528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33e52c:
    // 0x33e52c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x33e52cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e530:
    // 0x33e530: 0xc0cf4d0  jal         func_33D340
label_33e534:
    if (ctx->pc == 0x33E534u) {
        ctx->pc = 0x33E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E530u;
        // 0x33e534: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E538u;
        goto label_33e538;
    }
    ctx->pc = 0x33E530u;
    SET_GPR_U32(ctx, 31, 0x33E538u);
    ctx->pc = 0x33E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E530u;
    // 0x33e534: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D340u, 0x33E530u, 0x33E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E538u;
label_33e538:
    // 0x33e538: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x33e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_33e53c:
    // 0x33e53c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33e540:
    // 0x33e540: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_33e544:
    if (ctx->pc == 0x33E544u) {
        ctx->pc = 0x33E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E540u;
        // 0x33e544: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E548u;
        goto label_33e548;
    }
    ctx->pc = 0x33E540u;
    {
        const bool branch_taken_0x33e540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E540u;
        // 0x33e544: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e540) {
            ctx->pc = 0x33E568u;
            goto label_33e568;
        }
    }
    ctx->pc = 0x33E548u;
label_33e548:
    // 0x33e548: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x33e548u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e54c:
    // 0x33e54c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33e54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33e550:
    // 0x33e550: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x33e550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_33e554:
    // 0x33e554: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33e554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e558:
    // 0x33e558: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33e558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33e55c:
    // 0x33e55c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x33e55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33e560:
    // 0x33e560: 0xc0cf526  jal         func_33D498
label_33e564:
    if (ctx->pc == 0x33E564u) {
        ctx->pc = 0x33E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E560u;
        // 0x33e564: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E568u;
        goto label_33e568;
    }
    ctx->pc = 0x33E560u;
    SET_GPR_U32(ctx, 31, 0x33E568u);
    ctx->pc = 0x33E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E560u;
    // 0x33e564: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D498u, 0x33E560u, 0x33E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E568u;
label_33e568:
    // 0x33e568: 0x8fa3277c  lw          $v1, 0x277C($sp)
    ctx->pc = 0x33e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10108)));
label_33e56c:
    // 0x33e56c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33e56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33e570:
    // 0x33e570: 0x8fa22778  lw          $v0, 0x2778($sp)
    ctx->pc = 0x33e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10104)));
label_33e574:
    // 0x33e574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33e574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33e578:
    // 0x33e578: 0x8fa72760  lw          $a3, 0x2760($sp)
    ctx->pc = 0x33e578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10080)));
label_33e57c:
    // 0x33e57c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33e57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e580:
    // 0x33e580: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x33e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_33e584:
    // 0x33e584: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x33e584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33e588:
    // 0x33e588: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33e588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_33e58c:
    // 0x33e58c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x33e58cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33e590:
    // 0x33e590: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x33e590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33e594:
    // 0x33e594: 0xc0cf676  jal         func_33D9D8
label_33e598:
    if (ctx->pc == 0x33E598u) {
        ctx->pc = 0x33E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E594u;
        // 0x33e598: 0x27ab2764  addiu       $t3, $sp, 0x2764 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 10084));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E59Cu;
        goto label_33e59c;
    }
    ctx->pc = 0x33E594u;
    SET_GPR_U32(ctx, 31, 0x33E59Cu);
    ctx->pc = 0x33E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E594u;
    // 0x33e598: 0x27ab2764  addiu       $t3, $sp, 0x2764 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 10084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D9D8u, 0x33E594u, 0x33E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E59Cu;
label_33e59c:
    // 0x33e59c: 0x8fa42774  lw          $a0, 0x2774($sp)
    ctx->pc = 0x33e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10100)));
label_33e5a0:
    // 0x33e5a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33e5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e5a4:
    // 0x33e5a4: 0x8fa32760  lw          $v1, 0x2760($sp)
    ctx->pc = 0x33e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10080)));
label_33e5a8:
    // 0x33e5a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33e5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33e5ac:
    // 0x33e5ac: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
label_33e5b0:
    if (ctx->pc == 0x33E5B0u) {
        ctx->pc = 0x33E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ACu;
        // 0x33e5b0: 0xafa42774  sw          $a0, 0x2774($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 10100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5B4u;
        goto label_33e5b4;
    }
    ctx->pc = 0x33E5ACu;
    {
        const bool branch_taken_0x33e5ac = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x33E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ACu;
        // 0x33e5b0: 0xafa42774  sw          $a0, 0x2774($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 10100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5ac) {
            ctx->pc = 0x33E5C4u;
            goto label_33e5c4;
        }
    }
    ctx->pc = 0x33E5B4u;
label_33e5b4:
    // 0x33e5b4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x33e5b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_33e5b8:
    // 0x33e5b8: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x33e5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_33e5bc:
    // 0x33e5bc: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_33e5c0:
    if (ctx->pc == 0x33E5C0u) {
        ctx->pc = 0x33E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5BCu;
        // 0x33e5c0: 0xc7a02764  lwc1        $f0, 0x2764($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5C4u;
        goto label_33e5c4;
    }
    ctx->pc = 0x33E5BCu;
    {
        const bool branch_taken_0x33e5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5BCu;
        // 0x33e5c0: 0xc7a02764  lwc1        $f0, 0x2764($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5bc) {
            ctx->pc = 0x33E470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e470;
        }
    }
    ctx->pc = 0x33E5C4u;
label_33e5c4:
    // 0x33e5c4: 0x620007d  bltz        $s1, . + 4 + (0x7D << 2)
label_33e5c8:
    if (ctx->pc == 0x33E5C8u) {
        ctx->pc = 0x33E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5C4u;
        // 0x33e5c8: 0x7bb02810  lq          $s0, 0x2810($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5CCu;
        goto label_33e5cc;
    }
    ctx->pc = 0x33E5C4u;
    {
        const bool branch_taken_0x33e5c4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x33E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5C4u;
        // 0x33e5c8: 0x7bb02810  lq          $s0, 0x2810($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5c4) {
            ctx->pc = 0x33E7BCu;
            goto label_33e7bc;
        }
    }
    ctx->pc = 0x33E5CCu;
label_33e5cc:
    // 0x33e5cc: 0x5260007c  beql        $s3, $zero, . + 4 + (0x7C << 2)
label_33e5d0:
    if (ctx->pc == 0x33E5D0u) {
        ctx->pc = 0x33E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5CCu;
        // 0x33e5d0: 0x7bb12800  lq          $s1, 0x2800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5D4u;
        goto label_33e5d4;
    }
    ctx->pc = 0x33E5CCu;
    {
        const bool branch_taken_0x33e5cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e5cc) {
            ctx->pc = 0x33E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E5CCu;
            // 0x33e5d0: 0x7bb12800  lq          $s1, 0x2800($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E7C0u;
            goto label_33e7c0;
        }
    }
    ctx->pc = 0x33E5D4u;
label_33e5d4:
    // 0x33e5d4: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33e5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e5d8:
    // 0x33e5d8: 0x10c0006d  beqz        $a2, . + 4 + (0x6D << 2)
label_33e5dc:
    if (ctx->pc == 0x33E5DCu) {
        ctx->pc = 0x33E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5D8u;
        // 0x33e5dc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5E0u;
        goto label_33e5e0;
    }
    ctx->pc = 0x33E5D8u;
    {
        const bool branch_taken_0x33e5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5D8u;
        // 0x33e5dc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5d8) {
            ctx->pc = 0x33E790u;
            goto label_33e790;
        }
    }
    ctx->pc = 0x33E5E0u;
label_33e5e0:
    // 0x33e5e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33e5e4:
    // 0x33e5e4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x33e5e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_33e5e8:
    // 0x33e5e8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x33e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_33e5ec:
    // 0x33e5ec: 0x60f809  jalr        $v1
label_33e5f0:
    if (ctx->pc == 0x33E5F0u) {
        ctx->pc = 0x33E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ECu;
        // 0x33e5f0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E5F4u;
        goto label_33e5f4;
    }
    ctx->pc = 0x33E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E5F4u);
        ctx->pc = 0x33E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ECu;
        // 0x33e5f0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E5ECu, 0x33E5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E5F4u;
label_33e5f4:
    // 0x33e5f4: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x33e5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_33e5f8:
    // 0x33e5f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_33e5fc:
    if (ctx->pc == 0x33E5FCu) {
        ctx->pc = 0x33E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5F8u;
        // 0x33e5fc: 0xc7a02764  lwc1        $f0, 0x2764($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E600u;
        goto label_33e600;
    }
    ctx->pc = 0x33E5F8u;
    {
        const bool branch_taken_0x33e5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5F8u;
        // 0x33e5fc: 0xc7a02764  lwc1        $f0, 0x2764($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5f8) {
            ctx->pc = 0x33E610u;
            goto label_33e610;
        }
    }
    ctx->pc = 0x33E600u;
label_33e600:
    // 0x33e600: 0x8fa62774  lw          $a2, 0x2774($sp)
    ctx->pc = 0x33e600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10100)));
label_33e604:
    // 0x33e604: 0x54c00024  bnel        $a2, $zero, . + 4 + (0x24 << 2)
label_33e608:
    if (ctx->pc == 0x33E608u) {
        ctx->pc = 0x33E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E604u;
        // 0x33e608: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E60Cu;
        goto label_33e60c;
    }
    ctx->pc = 0x33E604u;
    {
        const bool branch_taken_0x33e604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e604) {
            ctx->pc = 0x33E608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E604u;
            // 0x33e608: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E698u;
            goto label_33e698;
        }
    }
    ctx->pc = 0x33E60Cu;
label_33e60c:
    // 0x33e60c: 0xc7a02764  lwc1        $f0, 0x2764($sp)
    ctx->pc = 0x33e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e610:
    // 0x33e610: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x33e610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33e614:
    // 0x33e614: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x33e614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33e618:
    // 0x33e618: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33e618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_33e61c:
    // 0x33e61c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33e61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e620:
    // 0x33e620: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33e620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33e624:
    // 0x33e624: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33e624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33e628:
    // 0x33e628: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33e628u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_33e62c:
    // 0x33e62c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x33e62cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33e630:
    // 0x33e630: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33e630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33e634:
    // 0x33e634: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33e634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e638:
    // 0x33e638: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33e638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33e63c:
    // 0x33e63c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33e63cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33e640:
    // 0x33e640: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33e640u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_33e644:
    // 0x33e644: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x33e644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_33e648:
    // 0x33e648: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x33e648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_33e64c:
    // 0x33e64c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x33e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_33e650:
    // 0x33e650: 0x8e670034  lw          $a3, 0x34($s3)
    ctx->pc = 0x33e650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e654:
    // 0x33e654: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x33e654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_33e658:
    // 0x33e658: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x33e658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33e65c:
    // 0x33e65c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x33e65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_33e660:
    // 0x33e660: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x33e660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_33e664:
    // 0x33e664: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x33e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_33e668:
    // 0x33e668: 0x40f809  jalr        $v0
label_33e66c:
    if (ctx->pc == 0x33E66Cu) {
        ctx->pc = 0x33E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E668u;
        // 0x33e66c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E670u;
        goto label_33e670;
    }
    ctx->pc = 0x33E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E670u);
        ctx->pc = 0x33E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E668u;
        // 0x33e66c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E668u, 0x33E670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E670u;
label_33e670:
    // 0x33e670: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x33e670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_33e674:
    // 0x33e674: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x33e674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e678:
    // 0x33e678: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33e678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33e67c:
    // 0x33e67c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33e680:
    // 0x33e680: 0x40f809  jalr        $v0
label_33e684:
    if (ctx->pc == 0x33E684u) {
        ctx->pc = 0x33E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E680u;
        // 0x33e684: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E688u;
        goto label_33e688;
    }
    ctx->pc = 0x33E680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E688u);
        ctx->pc = 0x33E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E680u;
        // 0x33e684: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E680u, 0x33E688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E688u;
label_33e688:
    // 0x33e688: 0x1000000e  b           . + 4 + (0xE << 2)
label_33e68c:
    if (ctx->pc == 0x33E68Cu) {
        ctx->pc = 0x33E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E688u;
        // 0x33e68c: 0xae600070  sw          $zero, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E690u;
        goto label_33e690;
    }
    ctx->pc = 0x33E688u;
    {
        const bool branch_taken_0x33e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E688u;
        // 0x33e68c: 0xae600070  sw          $zero, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e688) {
            ctx->pc = 0x33E6C4u;
            goto label_33e6c4;
        }
    }
    ctx->pc = 0x33E690u;
label_33e690:
    // 0x33e690: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_33e694:
    if (ctx->pc == 0x33E694u) {
        ctx->pc = 0x33E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E690u;
        // 0x33e694: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E698u;
        goto label_33e698;
    }
    ctx->pc = 0x33E690u;
    {
        const bool branch_taken_0x33e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E690u;
        // 0x33e694: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e690) {
            ctx->pc = 0x33E5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e5c4;
        }
    }
    ctx->pc = 0x33E698u;
label_33e698:
    // 0x33e698: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x33e698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33e69c:
    // 0x33e69c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x33e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_33e6a0:
    // 0x33e6a0: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33e6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e6a4:
    // 0x33e6a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33e6a8:
    // 0x33e6a8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x33e6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_33e6ac:
    // 0x33e6ac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x33e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_33e6b0:
    // 0x33e6b0: 0x60f809  jalr        $v1
label_33e6b4:
    if (ctx->pc == 0x33E6B4u) {
        ctx->pc = 0x33E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6B0u;
        // 0x33e6b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E6B8u;
        goto label_33e6b8;
    }
    ctx->pc = 0x33E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E6B8u);
        ctx->pc = 0x33E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6B0u;
        // 0x33e6b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E6B0u, 0x33E6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E6B8u;
label_33e6b8:
    // 0x33e6b8: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x33e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_33e6bc:
    // 0x33e6bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33e6c0:
    // 0x33e6c0: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x33e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_33e6c4:
    // 0x33e6c4: 0x8fa22768  lw          $v0, 0x2768($sp)
    ctx->pc = 0x33e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10088)));
label_33e6c8:
    // 0x33e6c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x33e6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_33e6cc:
    // 0x33e6cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33e6d0:
    if (ctx->pc == 0x33E6D0u) {
        ctx->pc = 0x33E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6CCu;
        // 0x33e6d0: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E6D4u;
        goto label_33e6d4;
    }
    ctx->pc = 0x33E6CCu;
    {
        const bool branch_taken_0x33e6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6CCu;
        // 0x33e6d0: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e6cc) {
            ctx->pc = 0x33E734u;
            goto label_33e734;
        }
    }
    ctx->pc = 0x33E6D4u;
label_33e6d4:
    // 0x33e6d4: 0xc7a2276c  lwc1        $f2, 0x276C($sp)
    ctx->pc = 0x33e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33e6d8:
    // 0x33e6d8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x33e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e6dc:
    // 0x33e6dc: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x33e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33e6e0:
    // 0x33e6e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33e6e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_33e6e4:
    // 0x33e6e4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x33e6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_33e6e8:
    // 0x33e6e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x33e6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_33e6ec:
    // 0x33e6ec: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x33e6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e6f0:
    // 0x33e6f0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x33e6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_33e6f4:
    // 0x33e6f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_33e6f8:
    if (ctx->pc == 0x33E6F8u) {
        ctx->pc = 0x33E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6F4u;
        // 0x33e6f8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E6FCu;
        goto label_33e6fc;
    }
    ctx->pc = 0x33E6F4u;
    {
        const bool branch_taken_0x33e6f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6F4u;
        // 0x33e6f8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e6f4) {
            ctx->pc = 0x33E704u;
            goto label_33e704;
        }
    }
    ctx->pc = 0x33E6FCu;
label_33e6fc:
    // 0x33e6fc: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x33e6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_33e700:
    // 0x33e700: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x33e700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_33e704:
    // 0x33e704: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x33e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e708:
    // 0x33e708: 0xc7a2276c  lwc1        $f2, 0x276C($sp)
    ctx->pc = 0x33e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33e70c:
    // 0x33e70c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x33e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e710:
    // 0x33e710: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x33e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33e714:
    // 0x33e714: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33e714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_33e718:
    // 0x33e718: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x33e718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_33e71c:
    // 0x33e71c: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x33e71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e720:
    // 0x33e720: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x33e720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_33e724:
    // 0x33e724: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_33e728:
    if (ctx->pc == 0x33E728u) {
        ctx->pc = 0x33E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E724u;
        // 0x33e728: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E72Cu;
        goto label_33e72c;
    }
    ctx->pc = 0x33E724u;
    {
        const bool branch_taken_0x33e724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E724u;
        // 0x33e728: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e724) {
            ctx->pc = 0x33E734u;
            goto label_33e734;
        }
    }
    ctx->pc = 0x33E72Cu;
label_33e72c:
    // 0x33e72c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x33e72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_33e730:
    // 0x33e730: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x33e730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_33e734:
    // 0x33e734: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x33e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_33e738:
    // 0x33e738: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x33e738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_33e73c:
    // 0x33e73c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_33e740:
    if (ctx->pc == 0x33E740u) {
        ctx->pc = 0x33E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E73Cu;
        // 0x33e740: 0x8fa22768  lw          $v0, 0x2768($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E744u;
        goto label_33e744;
    }
    ctx->pc = 0x33E73Cu;
    {
        const bool branch_taken_0x33e73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E73Cu;
        // 0x33e740: 0x8fa22768  lw          $v0, 0x2768($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e73c) {
            ctx->pc = 0x33E768u;
            goto label_33e768;
        }
    }
    ctx->pc = 0x33E744u;
label_33e744:
    // 0x33e744: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33e744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_33e748:
    // 0x33e748: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_33e74c:
    if (ctx->pc == 0x33E74Cu) {
        ctx->pc = 0x33E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E748u;
        // 0x33e74c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E750u;
        goto label_33e750;
    }
    ctx->pc = 0x33E748u;
    {
        const bool branch_taken_0x33e748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E748u;
        // 0x33e74c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e748) {
            ctx->pc = 0x33E768u;
            goto label_33e768;
        }
    }
    ctx->pc = 0x33E750u;
label_33e750:
    // 0x33e750: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33e750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e754:
    // 0x33e754: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33e758:
    // 0x33e758: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x33e758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_33e75c:
    // 0x33e75c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x33e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_33e760:
    // 0x33e760: 0x60f809  jalr        $v1
label_33e764:
    if (ctx->pc == 0x33E764u) {
        ctx->pc = 0x33E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E760u;
        // 0x33e764: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E768u;
        goto label_33e768;
    }
    ctx->pc = 0x33E760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E768u);
        ctx->pc = 0x33E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E760u;
        // 0x33e764: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E760u, 0x33E768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E768u;
label_33e768:
    // 0x33e768: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x33e768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33e76c:
    // 0x33e76c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x33e76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33e770:
    // 0x33e770: 0x8fa42770  lw          $a0, 0x2770($sp)
    ctx->pc = 0x33e770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10096)));
label_33e774:
    // 0x33e774: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33e774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33e778:
    // 0x33e778: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33e778u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33e77c:
    // 0x33e77c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33e77cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33e780:
    // 0x33e780: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33e780u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33e784:
    // 0x33e784: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33e784u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33e788:
    // 0x33e788: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x33e788u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_33e78c:
    // 0x33e78c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x33e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_33e790:
    // 0x33e790: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_33e794:
    if (ctx->pc == 0x33E794u) {
        ctx->pc = 0x33E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E790u;
        // 0x33e794: 0x7bb02810  lq          $s0, 0x2810($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E798u;
        goto label_33e798;
    }
    ctx->pc = 0x33E790u;
    {
        const bool branch_taken_0x33e790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E790u;
        // 0x33e794: 0x7bb02810  lq          $s0, 0x2810($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e790) {
            ctx->pc = 0x33E7BCu;
            goto label_33e7bc;
        }
    }
    ctx->pc = 0x33E798u;
label_33e798:
    // 0x33e798: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x33e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e79c:
    // 0x33e79c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_33e7a0:
    if (ctx->pc == 0x33E7A0u) {
        ctx->pc = 0x33E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E79Cu;
        // 0x33e7a0: 0x7bb12800  lq          $s1, 0x2800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7A4u;
        goto label_33e7a4;
    }
    ctx->pc = 0x33E79Cu;
    {
        const bool branch_taken_0x33e79c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E79Cu;
        // 0x33e7a0: 0x7bb12800  lq          $s1, 0x2800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e79c) {
            ctx->pc = 0x33E7C0u;
            goto label_33e7c0;
        }
    }
    ctx->pc = 0x33E7A4u;
label_33e7a4:
    // 0x33e7a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33e7a8:
    // 0x33e7a8: 0x84440118  lh          $a0, 0x118($v0)
    ctx->pc = 0x33e7a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_33e7ac:
    // 0x33e7ac: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x33e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_33e7b0:
    // 0x33e7b0: 0x60f809  jalr        $v1
label_33e7b4:
    if (ctx->pc == 0x33E7B4u) {
        ctx->pc = 0x33E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7B0u;
        // 0x33e7b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7B8u;
        goto label_33e7b8;
    }
    ctx->pc = 0x33E7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E7B8u);
        ctx->pc = 0x33E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7B0u;
        // 0x33e7b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E7B0u, 0x33E7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E7B8u;
label_33e7b8:
    // 0x33e7b8: 0x7bb02810  lq          $s0, 0x2810($sp)
    ctx->pc = 0x33e7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10256)));
label_33e7bc:
    // 0x33e7bc: 0x7bb12800  lq          $s1, 0x2800($sp)
    ctx->pc = 0x33e7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10240)));
label_33e7c0:
    // 0x33e7c0: 0x7bb227f0  lq          $s2, 0x27F0($sp)
    ctx->pc = 0x33e7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 10224)));
label_33e7c4:
    // 0x33e7c4: 0x7bb327e0  lq          $s3, 0x27E0($sp)
    ctx->pc = 0x33e7c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 10208)));
label_33e7c8:
    // 0x33e7c8: 0x7bb427d0  lq          $s4, 0x27D0($sp)
    ctx->pc = 0x33e7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 10192)));
label_33e7cc:
    // 0x33e7cc: 0x7bb527c0  lq          $s5, 0x27C0($sp)
    ctx->pc = 0x33e7ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 10176)));
label_33e7d0:
    // 0x33e7d0: 0x7bb627b0  lq          $s6, 0x27B0($sp)
    ctx->pc = 0x33e7d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 10160)));
label_33e7d4:
    // 0x33e7d4: 0x7bb727a0  lq          $s7, 0x27A0($sp)
    ctx->pc = 0x33e7d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 10144)));
label_33e7d8:
    // 0x33e7d8: 0x7bbe2790  lq          $fp, 0x2790($sp)
    ctx->pc = 0x33e7d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 10128)));
label_33e7dc:
    // 0x33e7dc: 0xdfbf2780  ld          $ra, 0x2780($sp)
    ctx->pc = 0x33e7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 10112)));
label_33e7e0:
    // 0x33e7e0: 0xc7b42820  lwc1        $f20, 0x2820($sp)
    ctx->pc = 0x33e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33e7e4:
    // 0x33e7e4: 0x3e00008  jr          $ra
label_33e7e8:
    if (ctx->pc == 0x33E7E8u) {
        ctx->pc = 0x33E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7E4u;
        // 0x33e7e8: 0x27bd2830  addiu       $sp, $sp, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7ECu;
        goto label_33e7ec;
    }
    ctx->pc = 0x33E7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7E4u;
        // 0x33e7e8: 0x27bd2830  addiu       $sp, $sp, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E7ECu;
label_33e7ec:
    // 0x33e7ec: 0x0  nop
    ctx->pc = 0x33e7ecu;
    // NOP
    ctx->pc = 0x33e7f0u;
}
