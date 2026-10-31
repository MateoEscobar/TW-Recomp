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

// Function: sub_0017B2E0
// Address: 0x17b2e0 - 0x17b8a8
void sub_0017B2E0_0x17b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B2E0_0x17b2e0");
#endif

    switch (ctx->pc) {
        case 0x17b2e0u: goto label_17b2e0;
        case 0x17b2e4u: goto label_17b2e4;
        case 0x17b2e8u: goto label_17b2e8;
        case 0x17b2ecu: goto label_17b2ec;
        case 0x17b2f0u: goto label_17b2f0;
        case 0x17b2f4u: goto label_17b2f4;
        case 0x17b2f8u: goto label_17b2f8;
        case 0x17b2fcu: goto label_17b2fc;
        case 0x17b300u: goto label_17b300;
        case 0x17b304u: goto label_17b304;
        case 0x17b308u: goto label_17b308;
        case 0x17b30cu: goto label_17b30c;
        case 0x17b310u: goto label_17b310;
        case 0x17b314u: goto label_17b314;
        case 0x17b318u: goto label_17b318;
        case 0x17b31cu: goto label_17b31c;
        case 0x17b320u: goto label_17b320;
        case 0x17b324u: goto label_17b324;
        case 0x17b328u: goto label_17b328;
        case 0x17b32cu: goto label_17b32c;
        case 0x17b330u: goto label_17b330;
        case 0x17b334u: goto label_17b334;
        case 0x17b338u: goto label_17b338;
        case 0x17b33cu: goto label_17b33c;
        case 0x17b340u: goto label_17b340;
        case 0x17b344u: goto label_17b344;
        case 0x17b348u: goto label_17b348;
        case 0x17b34cu: goto label_17b34c;
        case 0x17b350u: goto label_17b350;
        case 0x17b354u: goto label_17b354;
        case 0x17b358u: goto label_17b358;
        case 0x17b35cu: goto label_17b35c;
        case 0x17b360u: goto label_17b360;
        case 0x17b364u: goto label_17b364;
        case 0x17b368u: goto label_17b368;
        case 0x17b36cu: goto label_17b36c;
        case 0x17b370u: goto label_17b370;
        case 0x17b374u: goto label_17b374;
        case 0x17b378u: goto label_17b378;
        case 0x17b37cu: goto label_17b37c;
        case 0x17b380u: goto label_17b380;
        case 0x17b384u: goto label_17b384;
        case 0x17b388u: goto label_17b388;
        case 0x17b38cu: goto label_17b38c;
        case 0x17b390u: goto label_17b390;
        case 0x17b394u: goto label_17b394;
        case 0x17b398u: goto label_17b398;
        case 0x17b39cu: goto label_17b39c;
        case 0x17b3a0u: goto label_17b3a0;
        case 0x17b3a4u: goto label_17b3a4;
        case 0x17b3a8u: goto label_17b3a8;
        case 0x17b3acu: goto label_17b3ac;
        case 0x17b3b0u: goto label_17b3b0;
        case 0x17b3b4u: goto label_17b3b4;
        case 0x17b3b8u: goto label_17b3b8;
        case 0x17b3bcu: goto label_17b3bc;
        case 0x17b3c0u: goto label_17b3c0;
        case 0x17b3c4u: goto label_17b3c4;
        case 0x17b3c8u: goto label_17b3c8;
        case 0x17b3ccu: goto label_17b3cc;
        case 0x17b3d0u: goto label_17b3d0;
        case 0x17b3d4u: goto label_17b3d4;
        case 0x17b3d8u: goto label_17b3d8;
        case 0x17b3dcu: goto label_17b3dc;
        case 0x17b3e0u: goto label_17b3e0;
        case 0x17b3e4u: goto label_17b3e4;
        case 0x17b3e8u: goto label_17b3e8;
        case 0x17b3ecu: goto label_17b3ec;
        case 0x17b3f0u: goto label_17b3f0;
        case 0x17b3f4u: goto label_17b3f4;
        case 0x17b3f8u: goto label_17b3f8;
        case 0x17b3fcu: goto label_17b3fc;
        case 0x17b400u: goto label_17b400;
        case 0x17b404u: goto label_17b404;
        case 0x17b408u: goto label_17b408;
        case 0x17b40cu: goto label_17b40c;
        case 0x17b410u: goto label_17b410;
        case 0x17b414u: goto label_17b414;
        case 0x17b418u: goto label_17b418;
        case 0x17b41cu: goto label_17b41c;
        case 0x17b420u: goto label_17b420;
        case 0x17b424u: goto label_17b424;
        case 0x17b428u: goto label_17b428;
        case 0x17b42cu: goto label_17b42c;
        case 0x17b430u: goto label_17b430;
        case 0x17b434u: goto label_17b434;
        case 0x17b438u: goto label_17b438;
        case 0x17b43cu: goto label_17b43c;
        case 0x17b440u: goto label_17b440;
        case 0x17b444u: goto label_17b444;
        case 0x17b448u: goto label_17b448;
        case 0x17b44cu: goto label_17b44c;
        case 0x17b450u: goto label_17b450;
        case 0x17b454u: goto label_17b454;
        case 0x17b458u: goto label_17b458;
        case 0x17b45cu: goto label_17b45c;
        case 0x17b460u: goto label_17b460;
        case 0x17b464u: goto label_17b464;
        case 0x17b468u: goto label_17b468;
        case 0x17b46cu: goto label_17b46c;
        case 0x17b470u: goto label_17b470;
        case 0x17b474u: goto label_17b474;
        case 0x17b478u: goto label_17b478;
        case 0x17b47cu: goto label_17b47c;
        case 0x17b480u: goto label_17b480;
        case 0x17b484u: goto label_17b484;
        case 0x17b488u: goto label_17b488;
        case 0x17b48cu: goto label_17b48c;
        case 0x17b490u: goto label_17b490;
        case 0x17b494u: goto label_17b494;
        case 0x17b498u: goto label_17b498;
        case 0x17b49cu: goto label_17b49c;
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4a4u: goto label_17b4a4;
        case 0x17b4a8u: goto label_17b4a8;
        case 0x17b4acu: goto label_17b4ac;
        case 0x17b4b0u: goto label_17b4b0;
        case 0x17b4b4u: goto label_17b4b4;
        case 0x17b4b8u: goto label_17b4b8;
        case 0x17b4bcu: goto label_17b4bc;
        case 0x17b4c0u: goto label_17b4c0;
        case 0x17b4c4u: goto label_17b4c4;
        case 0x17b4c8u: goto label_17b4c8;
        case 0x17b4ccu: goto label_17b4cc;
        case 0x17b4d0u: goto label_17b4d0;
        case 0x17b4d4u: goto label_17b4d4;
        case 0x17b4d8u: goto label_17b4d8;
        case 0x17b4dcu: goto label_17b4dc;
        case 0x17b4e0u: goto label_17b4e0;
        case 0x17b4e4u: goto label_17b4e4;
        case 0x17b4e8u: goto label_17b4e8;
        case 0x17b4ecu: goto label_17b4ec;
        case 0x17b4f0u: goto label_17b4f0;
        case 0x17b4f4u: goto label_17b4f4;
        case 0x17b4f8u: goto label_17b4f8;
        case 0x17b4fcu: goto label_17b4fc;
        case 0x17b500u: goto label_17b500;
        case 0x17b504u: goto label_17b504;
        case 0x17b508u: goto label_17b508;
        case 0x17b50cu: goto label_17b50c;
        case 0x17b510u: goto label_17b510;
        case 0x17b514u: goto label_17b514;
        case 0x17b518u: goto label_17b518;
        case 0x17b51cu: goto label_17b51c;
        case 0x17b520u: goto label_17b520;
        case 0x17b524u: goto label_17b524;
        case 0x17b528u: goto label_17b528;
        case 0x17b52cu: goto label_17b52c;
        case 0x17b530u: goto label_17b530;
        case 0x17b534u: goto label_17b534;
        case 0x17b538u: goto label_17b538;
        case 0x17b53cu: goto label_17b53c;
        case 0x17b540u: goto label_17b540;
        case 0x17b544u: goto label_17b544;
        case 0x17b548u: goto label_17b548;
        case 0x17b54cu: goto label_17b54c;
        case 0x17b550u: goto label_17b550;
        case 0x17b554u: goto label_17b554;
        case 0x17b558u: goto label_17b558;
        case 0x17b55cu: goto label_17b55c;
        case 0x17b560u: goto label_17b560;
        case 0x17b564u: goto label_17b564;
        case 0x17b568u: goto label_17b568;
        case 0x17b56cu: goto label_17b56c;
        case 0x17b570u: goto label_17b570;
        case 0x17b574u: goto label_17b574;
        case 0x17b578u: goto label_17b578;
        case 0x17b57cu: goto label_17b57c;
        case 0x17b580u: goto label_17b580;
        case 0x17b584u: goto label_17b584;
        case 0x17b588u: goto label_17b588;
        case 0x17b58cu: goto label_17b58c;
        case 0x17b590u: goto label_17b590;
        case 0x17b594u: goto label_17b594;
        case 0x17b598u: goto label_17b598;
        case 0x17b59cu: goto label_17b59c;
        case 0x17b5a0u: goto label_17b5a0;
        case 0x17b5a4u: goto label_17b5a4;
        case 0x17b5a8u: goto label_17b5a8;
        case 0x17b5acu: goto label_17b5ac;
        case 0x17b5b0u: goto label_17b5b0;
        case 0x17b5b4u: goto label_17b5b4;
        case 0x17b5b8u: goto label_17b5b8;
        case 0x17b5bcu: goto label_17b5bc;
        case 0x17b5c0u: goto label_17b5c0;
        case 0x17b5c4u: goto label_17b5c4;
        case 0x17b5c8u: goto label_17b5c8;
        case 0x17b5ccu: goto label_17b5cc;
        case 0x17b5d0u: goto label_17b5d0;
        case 0x17b5d4u: goto label_17b5d4;
        case 0x17b5d8u: goto label_17b5d8;
        case 0x17b5dcu: goto label_17b5dc;
        case 0x17b5e0u: goto label_17b5e0;
        case 0x17b5e4u: goto label_17b5e4;
        case 0x17b5e8u: goto label_17b5e8;
        case 0x17b5ecu: goto label_17b5ec;
        case 0x17b5f0u: goto label_17b5f0;
        case 0x17b5f4u: goto label_17b5f4;
        case 0x17b5f8u: goto label_17b5f8;
        case 0x17b5fcu: goto label_17b5fc;
        case 0x17b600u: goto label_17b600;
        case 0x17b604u: goto label_17b604;
        case 0x17b608u: goto label_17b608;
        case 0x17b60cu: goto label_17b60c;
        case 0x17b610u: goto label_17b610;
        case 0x17b614u: goto label_17b614;
        case 0x17b618u: goto label_17b618;
        case 0x17b61cu: goto label_17b61c;
        case 0x17b620u: goto label_17b620;
        case 0x17b624u: goto label_17b624;
        case 0x17b628u: goto label_17b628;
        case 0x17b62cu: goto label_17b62c;
        case 0x17b630u: goto label_17b630;
        case 0x17b634u: goto label_17b634;
        case 0x17b638u: goto label_17b638;
        case 0x17b63cu: goto label_17b63c;
        case 0x17b640u: goto label_17b640;
        case 0x17b644u: goto label_17b644;
        case 0x17b648u: goto label_17b648;
        case 0x17b64cu: goto label_17b64c;
        case 0x17b650u: goto label_17b650;
        case 0x17b654u: goto label_17b654;
        case 0x17b658u: goto label_17b658;
        case 0x17b65cu: goto label_17b65c;
        case 0x17b660u: goto label_17b660;
        case 0x17b664u: goto label_17b664;
        case 0x17b668u: goto label_17b668;
        case 0x17b66cu: goto label_17b66c;
        case 0x17b670u: goto label_17b670;
        case 0x17b674u: goto label_17b674;
        case 0x17b678u: goto label_17b678;
        case 0x17b67cu: goto label_17b67c;
        case 0x17b680u: goto label_17b680;
        case 0x17b684u: goto label_17b684;
        case 0x17b688u: goto label_17b688;
        case 0x17b68cu: goto label_17b68c;
        case 0x17b690u: goto label_17b690;
        case 0x17b694u: goto label_17b694;
        case 0x17b698u: goto label_17b698;
        case 0x17b69cu: goto label_17b69c;
        case 0x17b6a0u: goto label_17b6a0;
        case 0x17b6a4u: goto label_17b6a4;
        case 0x17b6a8u: goto label_17b6a8;
        case 0x17b6acu: goto label_17b6ac;
        case 0x17b6b0u: goto label_17b6b0;
        case 0x17b6b4u: goto label_17b6b4;
        case 0x17b6b8u: goto label_17b6b8;
        case 0x17b6bcu: goto label_17b6bc;
        case 0x17b6c0u: goto label_17b6c0;
        case 0x17b6c4u: goto label_17b6c4;
        case 0x17b6c8u: goto label_17b6c8;
        case 0x17b6ccu: goto label_17b6cc;
        case 0x17b6d0u: goto label_17b6d0;
        case 0x17b6d4u: goto label_17b6d4;
        case 0x17b6d8u: goto label_17b6d8;
        case 0x17b6dcu: goto label_17b6dc;
        case 0x17b6e0u: goto label_17b6e0;
        case 0x17b6e4u: goto label_17b6e4;
        case 0x17b6e8u: goto label_17b6e8;
        case 0x17b6ecu: goto label_17b6ec;
        case 0x17b6f0u: goto label_17b6f0;
        case 0x17b6f4u: goto label_17b6f4;
        case 0x17b6f8u: goto label_17b6f8;
        case 0x17b6fcu: goto label_17b6fc;
        case 0x17b700u: goto label_17b700;
        case 0x17b704u: goto label_17b704;
        case 0x17b708u: goto label_17b708;
        case 0x17b70cu: goto label_17b70c;
        case 0x17b710u: goto label_17b710;
        case 0x17b714u: goto label_17b714;
        case 0x17b718u: goto label_17b718;
        case 0x17b71cu: goto label_17b71c;
        case 0x17b720u: goto label_17b720;
        case 0x17b724u: goto label_17b724;
        case 0x17b728u: goto label_17b728;
        case 0x17b72cu: goto label_17b72c;
        case 0x17b730u: goto label_17b730;
        case 0x17b734u: goto label_17b734;
        case 0x17b738u: goto label_17b738;
        case 0x17b73cu: goto label_17b73c;
        case 0x17b740u: goto label_17b740;
        case 0x17b744u: goto label_17b744;
        case 0x17b748u: goto label_17b748;
        case 0x17b74cu: goto label_17b74c;
        case 0x17b750u: goto label_17b750;
        case 0x17b754u: goto label_17b754;
        case 0x17b758u: goto label_17b758;
        case 0x17b75cu: goto label_17b75c;
        case 0x17b760u: goto label_17b760;
        case 0x17b764u: goto label_17b764;
        case 0x17b768u: goto label_17b768;
        case 0x17b76cu: goto label_17b76c;
        case 0x17b770u: goto label_17b770;
        case 0x17b774u: goto label_17b774;
        case 0x17b778u: goto label_17b778;
        case 0x17b77cu: goto label_17b77c;
        case 0x17b780u: goto label_17b780;
        case 0x17b784u: goto label_17b784;
        case 0x17b788u: goto label_17b788;
        case 0x17b78cu: goto label_17b78c;
        case 0x17b790u: goto label_17b790;
        case 0x17b794u: goto label_17b794;
        case 0x17b798u: goto label_17b798;
        case 0x17b79cu: goto label_17b79c;
        case 0x17b7a0u: goto label_17b7a0;
        case 0x17b7a4u: goto label_17b7a4;
        case 0x17b7a8u: goto label_17b7a8;
        case 0x17b7acu: goto label_17b7ac;
        case 0x17b7b0u: goto label_17b7b0;
        case 0x17b7b4u: goto label_17b7b4;
        case 0x17b7b8u: goto label_17b7b8;
        case 0x17b7bcu: goto label_17b7bc;
        case 0x17b7c0u: goto label_17b7c0;
        case 0x17b7c4u: goto label_17b7c4;
        case 0x17b7c8u: goto label_17b7c8;
        case 0x17b7ccu: goto label_17b7cc;
        case 0x17b7d0u: goto label_17b7d0;
        case 0x17b7d4u: goto label_17b7d4;
        case 0x17b7d8u: goto label_17b7d8;
        case 0x17b7dcu: goto label_17b7dc;
        case 0x17b7e0u: goto label_17b7e0;
        case 0x17b7e4u: goto label_17b7e4;
        case 0x17b7e8u: goto label_17b7e8;
        case 0x17b7ecu: goto label_17b7ec;
        case 0x17b7f0u: goto label_17b7f0;
        case 0x17b7f4u: goto label_17b7f4;
        case 0x17b7f8u: goto label_17b7f8;
        case 0x17b7fcu: goto label_17b7fc;
        case 0x17b800u: goto label_17b800;
        case 0x17b804u: goto label_17b804;
        case 0x17b808u: goto label_17b808;
        case 0x17b80cu: goto label_17b80c;
        case 0x17b810u: goto label_17b810;
        case 0x17b814u: goto label_17b814;
        case 0x17b818u: goto label_17b818;
        case 0x17b81cu: goto label_17b81c;
        case 0x17b820u: goto label_17b820;
        case 0x17b824u: goto label_17b824;
        case 0x17b828u: goto label_17b828;
        case 0x17b82cu: goto label_17b82c;
        case 0x17b830u: goto label_17b830;
        case 0x17b834u: goto label_17b834;
        case 0x17b838u: goto label_17b838;
        case 0x17b83cu: goto label_17b83c;
        case 0x17b840u: goto label_17b840;
        case 0x17b844u: goto label_17b844;
        case 0x17b848u: goto label_17b848;
        case 0x17b84cu: goto label_17b84c;
        case 0x17b850u: goto label_17b850;
        case 0x17b854u: goto label_17b854;
        case 0x17b858u: goto label_17b858;
        case 0x17b85cu: goto label_17b85c;
        case 0x17b860u: goto label_17b860;
        case 0x17b864u: goto label_17b864;
        case 0x17b868u: goto label_17b868;
        case 0x17b86cu: goto label_17b86c;
        case 0x17b870u: goto label_17b870;
        case 0x17b874u: goto label_17b874;
        case 0x17b878u: goto label_17b878;
        case 0x17b87cu: goto label_17b87c;
        case 0x17b880u: goto label_17b880;
        case 0x17b884u: goto label_17b884;
        case 0x17b888u: goto label_17b888;
        case 0x17b88cu: goto label_17b88c;
        case 0x17b890u: goto label_17b890;
        case 0x17b894u: goto label_17b894;
        case 0x17b898u: goto label_17b898;
        case 0x17b89cu: goto label_17b89c;
        case 0x17b8a0u: goto label_17b8a0;
        case 0x17b8a4u: goto label_17b8a4;
        default: break;
    }

    ctx->pc = 0x17b2e0u;

label_17b2e0:
    // 0x17b2e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17b2e4:
    // 0x17b2e4: 0x27bdecd0  addiu       $sp, $sp, -0x1330
    ctx->pc = 0x17b2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962384));
label_17b2e8:
    // 0x17b2e8: 0x8c44ccd4  lw          $a0, -0x332C($v0)
    ctx->pc = 0x17b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954196)));
label_17b2ec:
    // 0x17b2ec: 0x7fb012c0  sq          $s0, 0x12C0($sp)
    ctx->pc = 0x17b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4800), GPR_VEC(ctx, 16));
label_17b2f0:
    // 0x17b2f0: 0x7fb112b0  sq          $s1, 0x12B0($sp)
    ctx->pc = 0x17b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4784), GPR_VEC(ctx, 17));
label_17b2f4:
    // 0x17b2f4: 0x7fb212a0  sq          $s2, 0x12A0($sp)
    ctx->pc = 0x17b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4768), GPR_VEC(ctx, 18));
label_17b2f8:
    // 0x17b2f8: 0x7fb31290  sq          $s3, 0x1290($sp)
    ctx->pc = 0x17b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4752), GPR_VEC(ctx, 19));
label_17b2fc:
    // 0x17b2fc: 0x7fb41280  sq          $s4, 0x1280($sp)
    ctx->pc = 0x17b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4736), GPR_VEC(ctx, 20));
label_17b300:
    // 0x17b300: 0x7fb51270  sq          $s5, 0x1270($sp)
    ctx->pc = 0x17b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4720), GPR_VEC(ctx, 21));
label_17b304:
    // 0x17b304: 0x7fb61260  sq          $s6, 0x1260($sp)
    ctx->pc = 0x17b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4704), GPR_VEC(ctx, 22));
label_17b308:
    // 0x17b308: 0x7fb71250  sq          $s7, 0x1250($sp)
    ctx->pc = 0x17b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4688), GPR_VEC(ctx, 23));
label_17b30c:
    // 0x17b30c: 0x7fbe1240  sq          $fp, 0x1240($sp)
    ctx->pc = 0x17b30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4672), GPR_VEC(ctx, 30));
label_17b310:
    // 0x17b310: 0xffbf1230  sd          $ra, 0x1230($sp)
    ctx->pc = 0x17b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4656), GPR_U64(ctx, 31));
label_17b314:
    // 0x17b314: 0xe7bf1328  swc1        $f31, 0x1328($sp)
    ctx->pc = 0x17b314u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4904), bits); }
label_17b318:
    // 0x17b318: 0xe7be1320  swc1        $f30, 0x1320($sp)
    ctx->pc = 0x17b318u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4896), bits); }
label_17b31c:
    // 0x17b31c: 0xe7bd1318  swc1        $f29, 0x1318($sp)
    ctx->pc = 0x17b31cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4888), bits); }
label_17b320:
    // 0x17b320: 0xe7bc1310  swc1        $f28, 0x1310($sp)
    ctx->pc = 0x17b320u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4880), bits); }
label_17b324:
    // 0x17b324: 0xe7bb1308  swc1        $f27, 0x1308($sp)
    ctx->pc = 0x17b324u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4872), bits); }
label_17b328:
    // 0x17b328: 0xe7ba1300  swc1        $f26, 0x1300($sp)
    ctx->pc = 0x17b328u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4864), bits); }
label_17b32c:
    // 0x17b32c: 0xe7b912f8  swc1        $f25, 0x12F8($sp)
    ctx->pc = 0x17b32cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4856), bits); }
label_17b330:
    // 0x17b330: 0xe7b812f0  swc1        $f24, 0x12F0($sp)
    ctx->pc = 0x17b330u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4848), bits); }
label_17b334:
    // 0x17b334: 0xe7b712e8  swc1        $f23, 0x12E8($sp)
    ctx->pc = 0x17b334u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4840), bits); }
label_17b338:
    // 0x17b338: 0xe7b612e0  swc1        $f22, 0x12E0($sp)
    ctx->pc = 0x17b338u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4832), bits); }
label_17b33c:
    // 0x17b33c: 0xe7b512d8  swc1        $f21, 0x12D8($sp)
    ctx->pc = 0x17b33cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4824), bits); }
label_17b340:
    // 0x17b340: 0x10800141  beqz        $a0, . + 4 + (0x141 << 2)
label_17b344:
    if (ctx->pc == 0x17B344u) {
        ctx->pc = 0x17B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B340u;
        // 0x17b344: 0xe7b412d0  swc1        $f20, 0x12D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B348u;
        goto label_17b348;
    }
    ctx->pc = 0x17B340u;
    {
        const bool branch_taken_0x17b340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B340u;
        // 0x17b344: 0xe7b412d0  swc1        $f20, 0x12D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b340) {
            ctx->pc = 0x17B848u;
            goto label_17b848;
        }
    }
    ctx->pc = 0x17B348u;
label_17b348:
    // 0x17b348: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17b348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_17b34c:
    // 0x17b34c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17b34cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b350:
    // 0x17b350: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x17b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_17b354:
    // 0x17b354: 0x1080013a  beqz        $a0, . + 4 + (0x13A << 2)
label_17b358:
    if (ctx->pc == 0x17B358u) {
        ctx->pc = 0x17B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B354u;
        // 0x17b358: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B35Cu;
        goto label_17b35c;
    }
    ctx->pc = 0x17B354u;
    {
        const bool branch_taken_0x17b354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B354u;
        // 0x17b358: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b354) {
            ctx->pc = 0x17B840u;
            goto label_17b840;
        }
    }
    ctx->pc = 0x17B35Cu;
label_17b35c:
    // 0x17b35c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x17b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_17b360:
    // 0x17b360: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_17b364:
    // 0x17b364: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x17b364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_17b368:
    // 0x17b368: 0x245ed330  addiu       $fp, $v0, -0x2CD0
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955824));
label_17b36c:
    // 0x17b36c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x17b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_17b370:
    // 0x17b370: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x17b370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_17b374:
    // 0x17b374: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x17b374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17b378:
    // 0x17b378: 0x4600b606  mov.s       $f24, $f22
    ctx->pc = 0x17b378u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
label_17b37c:
    // 0x17b37c: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x17b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_17b380:
    // 0x17b380: 0x904300b8  lbu         $v1, 0xB8($v0)
    ctx->pc = 0x17b380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 184)));
label_17b384:
    // 0x17b384: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_17b388:
    if (ctx->pc == 0x17B388u) {
        ctx->pc = 0x17B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B384u;
        // 0x17b388: 0x9056002c  lbu         $s6, 0x2C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B38Cu;
        goto label_17b38c;
    }
    ctx->pc = 0x17B384u;
    {
        const bool branch_taken_0x17b384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B384u;
        // 0x17b388: 0x9056002c  lbu         $s6, 0x2C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b384) {
            ctx->pc = 0x17B488u;
            goto label_17b488;
        }
    }
    ctx->pc = 0x17B38Cu;
label_17b38c:
    // 0x17b38c: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x17b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b390:
    // 0x17b390: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x17b390u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b394:
    // 0x17b394: 0x0  nop
    ctx->pc = 0x17b394u;
    // NOP
label_17b398:
    // 0x17b398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17b39c:
    // 0x17b39c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_17b3a0:
    // 0x17b3a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17b3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_17b3a4:
    // 0x17b3a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17b3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17b3a8:
    // 0x17b3a8: 0x4601f841  sub.s       $f1, $f31, $f1
    ctx->pc = 0x17b3a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], ctx->f[1]);
label_17b3ac:
    // 0x17b3ac: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x17b3acu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_17b3b0:
    // 0x17b3b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b3b4:
    // 0x17b3b4: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x17b3b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_17b3b8:
    // 0x17b3b8: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x17b3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b3bc:
    // 0x17b3bc: 0x0  nop
    ctx->pc = 0x17b3bcu;
    // NOP
label_17b3c0:
    // 0x17b3c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17b3c4:
    if (ctx->pc == 0x17B3C4u) {
        ctx->pc = 0x17B3C8u;
        goto label_17b3c8;
    }
    ctx->pc = 0x17B3C0u;
    {
        const bool branch_taken_0x17b3c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b3c0) {
            ctx->pc = 0x17B3D8u;
            goto label_17b3d8;
        }
    }
    ctx->pc = 0x17B3C8u;
label_17b3c8:
    // 0x17b3c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b3c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b3cc:
    // 0x17b3cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b3ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b3d0:
    // 0x17b3d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_17b3d4:
    if (ctx->pc == 0x17B3D4u) {
        ctx->pc = 0x17B3D8u;
        goto label_17b3d8;
    }
    ctx->pc = 0x17B3D0u;
    {
        const bool branch_taken_0x17b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b3d0) {
            ctx->pc = 0x17B400u;
            goto label_17b400;
        }
    }
    ctx->pc = 0x17B3D8u;
label_17b3d8:
    // 0x17b3d8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b3d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b3dc:
    // 0x17b3dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b3dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b3e0:
    // 0x17b3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b3e4:
    // 0x17b3e4: 0x0  nop
    ctx->pc = 0x17b3e4u;
    // NOP
label_17b3e8:
    // 0x17b3e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17b3ec:
    // 0x17b3ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b3ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b3f0:
    // 0x17b3f0: 0x0  nop
    ctx->pc = 0x17b3f0u;
    // NOP
label_17b3f4:
    // 0x17b3f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_17b3f8:
    if (ctx->pc == 0x17B3F8u) {
        ctx->pc = 0x17B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F4u;
        // 0x17b3f8: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B3FCu;
        goto label_17b3fc;
    }
    ctx->pc = 0x17B3F4u;
    {
        const bool branch_taken_0x17b3f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F4u;
        // 0x17b3f8: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3f4) {
            ctx->pc = 0x17B40Cu;
            goto label_17b40c;
        }
    }
    ctx->pc = 0x17B3FCu;
label_17b3fc:
    // 0x17b3fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17b400:
    // 0x17b400: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x17b400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_17b404:
    // 0x17b404: 0x0  nop
    ctx->pc = 0x17b404u;
    // NOP
label_17b408:
    // 0x17b408: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x17b408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_17b40c:
    // 0x17b40c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x17b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_17b410:
    // 0x17b410: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17b410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_17b414:
    // 0x17b414: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17b414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_17b418:
    // 0x17b418: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17b418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17b41c:
    // 0x17b41c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x17b41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17b420:
    // 0x17b420: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x17b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_17b424:
    // 0x17b424: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x17b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b428:
    // 0x17b428: 0x4600f801  sub.s       $f0, $f31, $f0
    ctx->pc = 0x17b428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
label_17b42c:
    // 0x17b42c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17b42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_17b430:
    // 0x17b430: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x17b430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_17b434:
    // 0x17b434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b438:
    // 0x17b438: 0x0  nop
    ctx->pc = 0x17b438u;
    // NOP
label_17b43c:
    // 0x17b43c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17b43cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b440:
    // 0x17b440: 0x0  nop
    ctx->pc = 0x17b440u;
    // NOP
label_17b444:
    // 0x17b444: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17b448:
    if (ctx->pc == 0x17B448u) {
        ctx->pc = 0x17B44Cu;
        goto label_17b44c;
    }
    ctx->pc = 0x17B444u;
    {
        const bool branch_taken_0x17b444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b444) {
            ctx->pc = 0x17B45Cu;
            goto label_17b45c;
        }
    }
    ctx->pc = 0x17B44Cu;
label_17b44c:
    // 0x17b44c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b44cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b450:
    // 0x17b450: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b454:
    // 0x17b454: 0x1000004c  b           . + 4 + (0x4C << 2)
label_17b458:
    if (ctx->pc == 0x17B458u) {
        ctx->pc = 0x17B45Cu;
        goto label_17b45c;
    }
    ctx->pc = 0x17B454u;
    {
        const bool branch_taken_0x17b454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b454) {
            ctx->pc = 0x17B588u;
            goto label_17b588;
        }
    }
    ctx->pc = 0x17B45Cu;
label_17b45c:
    // 0x17b45c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b45cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b460:
    // 0x17b460: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b464:
    // 0x17b464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b468:
    // 0x17b468: 0x0  nop
    ctx->pc = 0x17b468u;
    // NOP
label_17b46c:
    // 0x17b46c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17b470:
    // 0x17b470: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b474:
    // 0x17b474: 0x0  nop
    ctx->pc = 0x17b474u;
    // NOP
label_17b478:
    // 0x17b478: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_17b47c:
    if (ctx->pc == 0x17B47Cu) {
        ctx->pc = 0x17B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B478u;
        // 0x17b47c: 0x46000e06  mov.s       $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B480u;
        goto label_17b480;
    }
    ctx->pc = 0x17B478u;
    {
        const bool branch_taken_0x17b478 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B478u;
        // 0x17b47c: 0x46000e06  mov.s       $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b478) {
            ctx->pc = 0x17B594u;
            goto label_17b594;
        }
    }
    ctx->pc = 0x17B480u;
label_17b480:
    // 0x17b480: 0x10000041  b           . + 4 + (0x41 << 2)
label_17b484:
    if (ctx->pc == 0x17B484u) {
        ctx->pc = 0x17B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B480u;
        // 0x17b484: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B488u;
        goto label_17b488;
    }
    ctx->pc = 0x17B480u;
    {
        const bool branch_taken_0x17b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B480u;
        // 0x17b484: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b480) {
            ctx->pc = 0x17B588u;
            goto label_17b588;
        }
    }
    ctx->pc = 0x17B488u;
label_17b488:
    // 0x17b488: 0x44961000  mtc1        $s6, $f2
    ctx->pc = 0x17b488u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b48c:
    // 0x17b48c: 0x0  nop
    ctx->pc = 0x17b48cu;
    // NOP
label_17b490:
    // 0x17b490: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17b490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_17b494:
    // 0x17b494: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17b494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b498:
    // 0x17b498: 0x1464003f  bne         $v1, $a0, . + 4 + (0x3F << 2)
label_17b49c:
    if (ctx->pc == 0x17B49Cu) {
        ctx->pc = 0x17B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B498u;
        // 0x17b49c: 0x240300c0  addiu       $v1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B4A0u;
        goto label_17b4a0;
    }
    ctx->pc = 0x17B498u;
    {
        const bool branch_taken_0x17b498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x17B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B498u;
        // 0x17b49c: 0x240300c0  addiu       $v1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b498) {
            ctx->pc = 0x17B598u;
            goto label_17b598;
        }
    }
    ctx->pc = 0x17B4A0u;
label_17b4a0:
    // 0x17b4a0: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x17b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b4a4:
    // 0x17b4a4: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x17b4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_17b4a8:
    // 0x17b4a8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17b4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_17b4ac:
    // 0x17b4ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17b4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17b4b0:
    // 0x17b4b0: 0x4600f801  sub.s       $f0, $f31, $f0
    ctx->pc = 0x17b4b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
label_17b4b4:
    // 0x17b4b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17b4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_17b4b8:
    // 0x17b4b8: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x17b4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_17b4bc:
    // 0x17b4bc: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x17b4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b4c0:
    // 0x17b4c0: 0x0  nop
    ctx->pc = 0x17b4c0u;
    // NOP
label_17b4c4:
    // 0x17b4c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17b4c8:
    if (ctx->pc == 0x17B4C8u) {
        ctx->pc = 0x17B4CCu;
        goto label_17b4cc;
    }
    ctx->pc = 0x17B4C4u;
    {
        const bool branch_taken_0x17b4c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b4c4) {
            ctx->pc = 0x17B4DCu;
            goto label_17b4dc;
        }
    }
    ctx->pc = 0x17B4CCu;
label_17b4cc:
    // 0x17b4cc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b4ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b4d0:
    // 0x17b4d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b4d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b4d4:
    // 0x17b4d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_17b4d8:
    if (ctx->pc == 0x17B4D8u) {
        ctx->pc = 0x17B4DCu;
        goto label_17b4dc;
    }
    ctx->pc = 0x17B4D4u;
    {
        const bool branch_taken_0x17b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b4d4) {
            ctx->pc = 0x17B504u;
            goto label_17b504;
        }
    }
    ctx->pc = 0x17B4DCu;
label_17b4dc:
    // 0x17b4dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b4dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b4e0:
    // 0x17b4e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b4e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b4e4:
    // 0x17b4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b4e8:
    // 0x17b4e8: 0x0  nop
    ctx->pc = 0x17b4e8u;
    // NOP
label_17b4ec:
    // 0x17b4ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17b4f0:
    // 0x17b4f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b4f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b4f4:
    // 0x17b4f4: 0x0  nop
    ctx->pc = 0x17b4f4u;
    // NOP
label_17b4f8:
    // 0x17b4f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_17b4fc:
    if (ctx->pc == 0x17B4FCu) {
        ctx->pc = 0x17B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4F8u;
        // 0x17b4fc: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B500u;
        goto label_17b500;
    }
    ctx->pc = 0x17B4F8u;
    {
        const bool branch_taken_0x17b4f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4F8u;
        // 0x17b4fc: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4f8) {
            ctx->pc = 0x17B510u;
            goto label_17b510;
        }
    }
    ctx->pc = 0x17B500u;
label_17b500:
    // 0x17b500: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17b504:
    // 0x17b504: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x17b504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_17b508:
    // 0x17b508: 0x0  nop
    ctx->pc = 0x17b508u;
    // NOP
label_17b50c:
    // 0x17b50c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x17b50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_17b510:
    // 0x17b510: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x17b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_17b514:
    // 0x17b514: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x17b514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_17b518:
    // 0x17b518: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17b518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_17b51c:
    // 0x17b51c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17b51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17b520:
    // 0x17b520: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x17b520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17b524:
    // 0x17b524: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x17b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_17b528:
    // 0x17b528: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x17b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b52c:
    // 0x17b52c: 0x4600f801  sub.s       $f0, $f31, $f0
    ctx->pc = 0x17b52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
label_17b530:
    // 0x17b530: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17b530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_17b534:
    // 0x17b534: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x17b534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_17b538:
    // 0x17b538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b53c:
    // 0x17b53c: 0x0  nop
    ctx->pc = 0x17b53cu;
    // NOP
label_17b540:
    // 0x17b540: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17b540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b544:
    // 0x17b544: 0x0  nop
    ctx->pc = 0x17b544u;
    // NOP
label_17b548:
    // 0x17b548: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17b54c:
    if (ctx->pc == 0x17B54Cu) {
        ctx->pc = 0x17B550u;
        goto label_17b550;
    }
    ctx->pc = 0x17B548u;
    {
        const bool branch_taken_0x17b548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b548) {
            ctx->pc = 0x17B560u;
            goto label_17b560;
        }
    }
    ctx->pc = 0x17B550u;
label_17b550:
    // 0x17b550: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b554:
    // 0x17b554: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b558:
    // 0x17b558: 0x1000000b  b           . + 4 + (0xB << 2)
label_17b55c:
    if (ctx->pc == 0x17B55Cu) {
        ctx->pc = 0x17B560u;
        goto label_17b560;
    }
    ctx->pc = 0x17B558u;
    {
        const bool branch_taken_0x17b558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b558) {
            ctx->pc = 0x17B588u;
            goto label_17b588;
        }
    }
    ctx->pc = 0x17B560u;
label_17b560:
    // 0x17b560: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17b564:
    // 0x17b564: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17b564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17b568:
    // 0x17b568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b56c:
    // 0x17b56c: 0x0  nop
    ctx->pc = 0x17b56cu;
    // NOP
label_17b570:
    // 0x17b570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17b574:
    // 0x17b574: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b578:
    // 0x17b578: 0x0  nop
    ctx->pc = 0x17b578u;
    // NOP
label_17b57c:
    // 0x17b57c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_17b580:
    if (ctx->pc == 0x17B580u) {
        ctx->pc = 0x17B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B57Cu;
        // 0x17b580: 0x46000e06  mov.s       $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B584u;
        goto label_17b584;
    }
    ctx->pc = 0x17B57Cu;
    {
        const bool branch_taken_0x17b57c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B57Cu;
        // 0x17b580: 0x46000e06  mov.s       $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b57c) {
            ctx->pc = 0x17B594u;
            goto label_17b594;
        }
    }
    ctx->pc = 0x17B584u;
label_17b584:
    // 0x17b584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17b588:
    // 0x17b588: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x17b588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_17b58c:
    // 0x17b58c: 0x0  nop
    ctx->pc = 0x17b58cu;
    // NOP
label_17b590:
    // 0x17b590: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x17b590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_17b594:
    // 0x17b594: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x17b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_17b598:
    // 0x17b598: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17b598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_17b59c:
    // 0x17b59c: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x17b59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_17b5a0:
    // 0x17b5a0: 0x2484d360  addiu       $a0, $a0, -0x2CA0
    ctx->pc = 0x17b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
label_17b5a4:
    // 0x17b5a4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x17b5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_17b5a8:
    // 0x17b5a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17b5a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_17b5ac:
    // 0x17b5ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b5b0:
    // 0x17b5b0: 0x0  nop
    ctx->pc = 0x17b5b0u;
    // NOP
label_17b5b4:
    // 0x17b5b4: 0x46020743  div.s       $f29, $f0, $f2
    ctx->pc = 0x17b5b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_17b5b8:
    // 0x17b5b8: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x17b5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_17b5bc:
    // 0x17b5bc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x17b5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17b5c0:
    // 0x17b5c0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x17b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17b5c4:
    // 0x17b5c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17b5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b5c8:
    // 0x17b5c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17b5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17b5cc:
    // 0x17b5cc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x17b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17b5d0:
    // 0x17b5d0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x17b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17b5d4:
    // 0x17b5d4: 0x92230033  lbu         $v1, 0x33($s1)
    ctx->pc = 0x17b5d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_17b5d8:
    // 0x17b5d8: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x17b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_17b5dc:
    // 0x17b5dc: 0xafa41224  sw          $a0, 0x1224($sp)
    ctx->pc = 0x17b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4644), GPR_U32(ctx, 4));
label_17b5e0:
    // 0x17b5e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_17b5e4:
    // 0x17b5e4: 0xafa51220  sw          $a1, 0x1220($sp)
    ctx->pc = 0x17b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4640), GPR_U32(ctx, 5));
label_17b5e8:
    // 0x17b5e8: 0x2484de70  addiu       $a0, $a0, -0x2190
    ctx->pc = 0x17b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958704));
label_17b5ec:
    // 0x17b5ec: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x17b5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_17b5f0:
    // 0x17b5f0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_17b5f4:
    // 0x17b5f4: 0xafa61228  sw          $a2, 0x1228($sp)
    ctx->pc = 0x17b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4648), GPR_U32(ctx, 6));
label_17b5f8:
    // 0x17b5f8: 0x2484de78  addiu       $a0, $a0, -0x2188
    ctx->pc = 0x17b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958712));
label_17b5fc:
    // 0x17b5fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17b600:
    if (ctx->pc == 0x17B600u) {
        ctx->pc = 0x17B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5FCu;
        // 0x17b600: 0xa0830003  sb          $v1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B604u;
        goto label_17b604;
    }
    ctx->pc = 0x17B5FCu;
    {
        const bool branch_taken_0x17b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5FCu;
        // 0x17b600: 0xa0830003  sb          $v1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5fc) {
            ctx->pc = 0x17B60Cu;
            goto label_17b60c;
        }
    }
    ctx->pc = 0x17B604u;
label_17b604:
    // 0x17b604: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x17b604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_17b608:
    // 0x17b608: 0xafa21228  sw          $v0, 0x1228($sp)
    ctx->pc = 0x17b608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4648), GPR_U32(ctx, 2));
label_17b60c:
    // 0x17b60c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17b610:
    // 0x17b610: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x17b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17b614:
    // 0x17b614: 0xafa2122c  sw          $v0, 0x122C($sp)
    ctx->pc = 0x17b614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4652), GPR_U32(ctx, 2));
label_17b618:
    // 0x17b618: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17b618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17b61c:
    // 0x17b61c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x17b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17b620:
    // 0x17b620: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x17b620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_17b624:
    // 0x17b624: 0x3c013d7d  lui         $at, 0x3D7D
    ctx->pc = 0x17b624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15741 << 16));
label_17b628:
    // 0x17b628: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x17b628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
label_17b62c:
    // 0x17b62c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x17b62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_17b630:
    // 0x17b630: 0x40f809  jalr        $v0
label_17b634:
    if (ctx->pc == 0x17B634u) {
        ctx->pc = 0x17B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B630u;
        // 0x17b634: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B638u;
        goto label_17b638;
    }
    ctx->pc = 0x17B630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B638u);
        ctx->pc = 0x17B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B630u;
        // 0x17b634: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B630u, 0x17B638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B638u;
label_17b638:
    // 0x17b638: 0xc63c004c  lwc1        $f28, 0x4C($s1)
    ctx->pc = 0x17b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17b63c:
    // 0x17b63c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17b63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b640:
    // 0x17b640: 0xc63b0050  lwc1        $f27, 0x50($s1)
    ctx->pc = 0x17b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_17b644:
    // 0x17b644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b648:
    // 0x17b648: 0xe7bc1200  swc1        $f28, 0x1200($sp)
    ctx->pc = 0x17b648u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4608), bits); }
label_17b64c:
    // 0x17b64c: 0x27a71200  addiu       $a3, $sp, 0x1200
    ctx->pc = 0x17b64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
label_17b650:
    // 0x17b650: 0xe7bb1204  swc1        $f27, 0x1204($sp)
    ctx->pc = 0x17b650u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4612), bits); }
label_17b654:
    // 0x17b654: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17b658:
    // 0x17b658: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x17b658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_17b65c:
    // 0x17b65c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x17b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_17b660:
    // 0x17b660: 0x60f809  jalr        $v1
label_17b664:
    if (ctx->pc == 0x17B664u) {
        ctx->pc = 0x17B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B660u;
        // 0x17b664: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B668u;
        goto label_17b668;
    }
    ctx->pc = 0x17B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17B668u);
        ctx->pc = 0x17B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B660u;
        // 0x17b664: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B660u, 0x17B668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B668u;
label_17b668:
    // 0x17b668: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x17b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17b66c:
    // 0x17b66c: 0x923700b8  lbu         $s7, 0xB8($s1)
    ctx->pc = 0x17b66cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
label_17b670:
    // 0x17b670: 0x27b51200  addiu       $s5, $sp, 0x1200
    ctx->pc = 0x17b670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
label_17b674:
    // 0x17b674: 0xc6370018  lwc1        $f23, 0x18($s1)
    ctx->pc = 0x17b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17b678:
    // 0x17b678: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17b678u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17b67c:
    // 0x17b67c: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
label_17b680:
    if (ctx->pc == 0x17B680u) {
        ctx->pc = 0x17B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B67Cu;
        // 0x17b680: 0xc6350024  lwc1        $f21, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B684u;
        goto label_17b684;
    }
    ctx->pc = 0x17B67Cu;
    {
        const bool branch_taken_0x17b67c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B67Cu;
        // 0x17b680: 0xc6350024  lwc1        $f21, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b67c) {
            ctx->pc = 0x17B7F0u;
            goto label_17b7f0;
        }
    }
    ctx->pc = 0x17B684u;
label_17b684:
    // 0x17b684: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17b684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_17b688:
    // 0x17b688: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x17b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_17b68c:
    // 0x17b68c: 0x2463d330  addiu       $v1, $v1, -0x2CD0
    ctx->pc = 0x17b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955824));
label_17b690:
    // 0x17b690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17b694:
    // 0x17b694: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x17b694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_17b698:
    // 0x17b698: 0x600013  mtlo        $v1
    ctx->pc = 0x17b698u;
    ctx->lo = GPR_U64(ctx, 3);
label_17b69c:
    // 0x17b69c: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x17b69cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_17b6a0:
    // 0x17b6a0: 0x72829800  madd        $s3, $s4, $v0
    ctx->pc = 0x17b6a0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_17b6a4:
    // 0x17b6a4: 0x27b11210  addiu       $s1, $sp, 0x1210
    ctx->pc = 0x17b6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4624));
label_17b6a8:
    // 0x17b6a8: 0xc12e310  jal         func_4B8C40
label_17b6ac:
    if (ctx->pc == 0x17B6ACu) {
        ctx->pc = 0x17B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A8u;
        // 0x17b6ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6B0u;
        goto label_17b6b0;
    }
    ctx->pc = 0x17B6A8u;
    SET_GPR_U32(ctx, 31, 0x17B6B0u);
    ctx->pc = 0x17B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6A8u;
    // 0x17b6ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17B6A8u, 0x17B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6B0u;
label_17b6b0:
    // 0x17b6b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17b6b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17b6b4:
    // 0x17b6b4: 0xc12e29c  jal         func_4B8A70
label_17b6b8:
    if (ctx->pc == 0x17B6B8u) {
        ctx->pc = 0x17B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6B4u;
        // 0x17b6b8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6BCu;
        goto label_17b6bc;
    }
    ctx->pc = 0x17B6B4u;
    SET_GPR_U32(ctx, 31, 0x17B6BCu);
    ctx->pc = 0x17B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6B4u;
    // 0x17b6b8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17B6B4u, 0x17B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6BCu;
label_17b6bc:
    // 0x17b6bc: 0x461ad040  add.s       $f1, $f26, $f26
    ctx->pc = 0x17b6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[26]);
label_17b6c0:
    // 0x17b6c0: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x17b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_17b6c4:
    // 0x17b6c4: 0x4614b8c2  mul.s       $f3, $f23, $f20
    ctx->pc = 0x17b6c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
label_17b6c8:
    // 0x17b6c8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x17b6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b6cc:
    // 0x17b6cc: 0x4600b902  mul.s       $f4, $f23, $f0
    ctx->pc = 0x17b6ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_17b6d0:
    // 0x17b6d0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x17b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_17b6d4:
    // 0x17b6d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b6d8:
    // 0x17b6d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b6dc:
    // 0x17b6dc: 0x4614d502  mul.s       $f20, $f26, $f20
    ctx->pc = 0x17b6dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[26], ctx->f[20]);
label_17b6e0:
    // 0x17b6e0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x17b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b6e4:
    // 0x17b6e4: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x17b6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_17b6e8:
    // 0x17b6e8: 0x0  nop
    ctx->pc = 0x17b6e8u;
    // NOP
label_17b6ec:
    // 0x17b6ec: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x17b6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_17b6f0:
    // 0x17b6f0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x17b6f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_17b6f4:
    // 0x17b6f4: 0xe7a01218  swc1        $f0, 0x1218($sp)
    ctx->pc = 0x17b6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4632), bits); }
label_17b6f8:
    // 0x17b6f8: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x17b6f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_17b6fc:
    // 0x17b6fc: 0x461ca500  add.s       $f20, $f20, $f28
    ctx->pc = 0x17b6fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[28]);
label_17b700:
    // 0x17b700: 0x4601d841  sub.s       $f1, $f27, $f1
    ctx->pc = 0x17b700u;
    ctx->f[1] = FPU_SUB_S(ctx->f[27], ctx->f[1]);
label_17b704:
    // 0x17b704: 0xe7a31210  swc1        $f3, 0x1210($sp)
    ctx->pc = 0x17b704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4624), bits); }
label_17b708:
    // 0x17b708: 0x46183036  c.le.s      $f6, $f24
    ctx->pc = 0x17b708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b70c:
    // 0x17b70c: 0xe7a41214  swc1        $f4, 0x1214($sp)
    ctx->pc = 0x17b70cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4628), bits); }
label_17b710:
    // 0x17b710: 0xe7b41200  swc1        $f20, 0x1200($sp)
    ctx->pc = 0x17b710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4608), bits); }
label_17b714:
    // 0x17b714: 0xe7a11204  swc1        $f1, 0x1204($sp)
    ctx->pc = 0x17b714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4612), bits); }
label_17b718:
    // 0x17b718: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_17b71c:
    if (ctx->pc == 0x17B71Cu) {
        ctx->pc = 0x17B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B718u;
        // 0x17b71c: 0xe63e000c  swc1        $f30, 0xC($s1) (Delay Slot)
        { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B720u;
        goto label_17b720;
    }
    ctx->pc = 0x17B718u;
    {
        const bool branch_taken_0x17b718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B718u;
        // 0x17b71c: 0xe63e000c  swc1        $f30, 0xC($s1) (Delay Slot)
        { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b718) {
            ctx->pc = 0x17B73Cu;
            goto label_17b73c;
        }
    }
    ctx->pc = 0x17B720u;
label_17b720:
    // 0x17b720: 0x4618c834  c.lt.s      $f25, $f24
    ctx->pc = 0x17b720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b724:
    // 0x17b724: 0x0  nop
    ctx->pc = 0x17b724u;
    // NOP
label_17b728:
    // 0x17b728: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17b72c:
    if (ctx->pc == 0x17B72Cu) {
        ctx->pc = 0x17B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B728u;
        // 0x17b72c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B730u;
        goto label_17b730;
    }
    ctx->pc = 0x17B728u;
    {
        const bool branch_taken_0x17b728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B728u;
        // 0x17b72c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b728) {
            ctx->pc = 0x17B73Cu;
            goto label_17b73c;
        }
    }
    ctx->pc = 0x17B730u;
label_17b730:
    // 0x17b730: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17b734:
    // 0x17b734: 0x1000001d  b           . + 4 + (0x1D << 2)
label_17b738:
    if (ctx->pc == 0x17B738u) {
        ctx->pc = 0x17B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B734u;
        // 0x17b738: 0x27a61220  addiu       $a2, $sp, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B73Cu;
        goto label_17b73c;
    }
    ctx->pc = 0x17B734u;
    {
        const bool branch_taken_0x17b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B734u;
        // 0x17b738: 0x27a61220  addiu       $a2, $sp, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b734) {
            ctx->pc = 0x17B7ACu;
            goto label_17b7ac;
        }
    }
    ctx->pc = 0x17B73Cu;
label_17b73c:
    // 0x17b73c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x17b73cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b740:
    // 0x17b740: 0x0  nop
    ctx->pc = 0x17b740u;
    // NOP
label_17b744:
    // 0x17b744: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17b748:
    // 0x17b748: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x17b748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b74c:
    // 0x17b74c: 0x0  nop
    ctx->pc = 0x17b74cu;
    // NOP
label_17b750:
    // 0x17b750: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_17b754:
    if (ctx->pc == 0x17B754u) {
        ctx->pc = 0x17B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B750u;
        // 0x17b754: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B758u;
        goto label_17b758;
    }
    ctx->pc = 0x17B750u;
    {
        const bool branch_taken_0x17b750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B750u;
        // 0x17b754: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b750) {
            ctx->pc = 0x17B76Cu;
            goto label_17b76c;
        }
    }
    ctx->pc = 0x17B758u;
label_17b758:
    // 0x17b758: 0x4616c834  c.lt.s      $f25, $f22
    ctx->pc = 0x17b758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b75c:
    // 0x17b75c: 0x0  nop
    ctx->pc = 0x17b75cu;
    // NOP
label_17b760:
    // 0x17b760: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
label_17b764:
    if (ctx->pc == 0x17B764u) {
        ctx->pc = 0x17B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B760u;
        // 0x17b764: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B768u;
        goto label_17b768;
    }
    ctx->pc = 0x17B760u;
    {
        const bool branch_taken_0x17b760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b760) {
            ctx->pc = 0x17B764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B760u;
            // 0x17b764: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B7A4u;
            goto label_17b7a4;
        }
    }
    ctx->pc = 0x17B768u;
label_17b768:
    // 0x17b768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b76c:
    // 0x17b76c: 0x56e40016  bnel        $s7, $a0, . + 4 + (0x16 << 2)
label_17b770:
    if (ctx->pc == 0x17B770u) {
        ctx->pc = 0x17B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B76Cu;
        // 0x17b770: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B774u;
        goto label_17b774;
    }
    ctx->pc = 0x17B76Cu;
    {
        const bool branch_taken_0x17b76c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        if (branch_taken_0x17b76c) {
            ctx->pc = 0x17B770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B76Cu;
            // 0x17b770: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B7C8u;
            goto label_17b7c8;
        }
    }
    ctx->pc = 0x17B774u;
label_17b774:
    // 0x17b774: 0x2d01023  subu        $v0, $s6, $s0
    ctx->pc = 0x17b774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_17b778:
    // 0x17b778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b77c:
    // 0x17b77c: 0x0  nop
    ctx->pc = 0x17b77cu;
    // NOP
label_17b780:
    // 0x17b780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17b784:
    // 0x17b784: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x17b784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b788:
    // 0x17b788: 0x0  nop
    ctx->pc = 0x17b788u;
    // NOP
label_17b78c:
    // 0x17b78c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_17b790:
    if (ctx->pc == 0x17B790u) {
        ctx->pc = 0x17B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B78Cu;
        // 0x17b790: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B794u;
        goto label_17b794;
    }
    ctx->pc = 0x17B78Cu;
    {
        const bool branch_taken_0x17b78c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B78Cu;
        // 0x17b790: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b78c) {
            ctx->pc = 0x17B7C8u;
            goto label_17b7c8;
        }
    }
    ctx->pc = 0x17B794u;
label_17b794:
    // 0x17b794: 0x4616c834  c.lt.s      $f25, $f22
    ctx->pc = 0x17b794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b798:
    // 0x17b798: 0x0  nop
    ctx->pc = 0x17b798u;
    // NOP
label_17b79c:
    // 0x17b79c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_17b7a0:
    if (ctx->pc == 0x17B7A0u) {
        ctx->pc = 0x17B7A4u;
        goto label_17b7a4;
    }
    ctx->pc = 0x17B79Cu;
    {
        const bool branch_taken_0x17b79c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b79c) {
            ctx->pc = 0x17B7C8u;
            goto label_17b7c8;
        }
    }
    ctx->pc = 0x17B7A4u;
label_17b7a4:
    // 0x17b7a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b7a8:
    // 0x17b7a8: 0x27a61224  addiu       $a2, $sp, 0x1224
    ctx->pc = 0x17b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4644));
label_17b7ac:
    // 0x17b7ac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x17b7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17b7b0:
    // 0x17b7b0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x17b7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_17b7b4:
    // 0x17b7b4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x17b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_17b7b8:
    // 0x17b7b8: 0x60f809  jalr        $v1
label_17b7bc:
    if (ctx->pc == 0x17B7BCu) {
        ctx->pc = 0x17B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7B8u;
        // 0x17b7bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7C0u;
        goto label_17b7c0;
    }
    ctx->pc = 0x17B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17B7C0u);
        ctx->pc = 0x17B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7B8u;
        // 0x17b7bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B7B8u, 0x17B7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B7C0u;
label_17b7c0:
    // 0x17b7c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_17b7c4:
    if (ctx->pc == 0x17B7C4u) {
        ctx->pc = 0x17B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7C0u;
        // 0x17b7c4: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7C8u;
        goto label_17b7c8;
    }
    ctx->pc = 0x17B7C0u;
    {
        const bool branch_taken_0x17b7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7C0u;
        // 0x17b7c4: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7c0) {
            ctx->pc = 0x17B7E8u;
            goto label_17b7e8;
        }
    }
    ctx->pc = 0x17B7C8u;
label_17b7c8:
    // 0x17b7c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b7cc:
    // 0x17b7cc: 0x27a61228  addiu       $a2, $sp, 0x1228
    ctx->pc = 0x17b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4648));
label_17b7d0:
    // 0x17b7d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x17b7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17b7d4:
    // 0x17b7d4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x17b7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_17b7d8:
    // 0x17b7d8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x17b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_17b7dc:
    // 0x17b7dc: 0x60f809  jalr        $v1
label_17b7e0:
    if (ctx->pc == 0x17B7E0u) {
        ctx->pc = 0x17B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7DCu;
        // 0x17b7e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7E4u;
        goto label_17b7e4;
    }
    ctx->pc = 0x17B7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17B7E4u);
        ctx->pc = 0x17B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7DCu;
        // 0x17b7e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B7DCu, 0x17B7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B7E4u;
label_17b7e4:
    // 0x17b7e4: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x17b7e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_17b7e8:
    // 0x17b7e8: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_17b7ec:
    if (ctx->pc == 0x17B7ECu) {
        ctx->pc = 0x17B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7E8u;
        // 0x17b7ec: 0x461dad40  add.s       $f21, $f21, $f29 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[29]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7F0u;
        goto label_17b7f0;
    }
    ctx->pc = 0x17B7E8u;
    {
        const bool branch_taken_0x17b7e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7E8u;
        // 0x17b7ec: 0x461dad40  add.s       $f21, $f21, $f29 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7e8) {
            ctx->pc = 0x17B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b6a8;
        }
    }
    ctx->pc = 0x17B7F0u;
label_17b7f0:
    // 0x17b7f0: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_17b7f4:
    // 0x17b7f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x17b7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17b7f8:
    // 0x17b7f8: 0x2823018  mult        $a2, $s4, $v0
    ctx->pc = 0x17b7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_17b7fc:
    // 0x17b7fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17b800:
    // 0x17b800: 0x8fb4122c  lw          $s4, 0x122C($sp)
    ctx->pc = 0x17b800u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4652)));
label_17b804:
    // 0x17b804: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x17b804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_17b808:
    // 0x17b808: 0x8c49005c  lw          $t1, 0x5C($v0)
    ctx->pc = 0x17b808u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17b80c:
    // 0x17b80c: 0xde1821  addu        $v1, $a2, $fp
    ctx->pc = 0x17b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
label_17b810:
    // 0x17b810: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_17b814:
    // 0x17b814: 0x906800ba  lbu         $t0, 0xBA($v1)
    ctx->pc = 0x17b814u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 186)));
label_17b818:
    // 0x17b818: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x17b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
label_17b81c:
    // 0x17b81c: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x17b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_17b820:
    // 0x17b820: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x17b820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17b824:
    // 0x17b824: 0x120f809  jalr        $t1
label_17b828:
    if (ctx->pc == 0x17B828u) {
        ctx->pc = 0x17B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B824u;
        // 0x17b828: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B82Cu;
        goto label_17b82c;
    }
    ctx->pc = 0x17B824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x17B82Cu);
        ctx->pc = 0x17B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B824u;
        // 0x17b828: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B824u, 0x17B82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B82Cu;
label_17b82c:
    // 0x17b82c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_17b830:
    // 0x17b830: 0x8c62ccd4  lw          $v0, -0x332C($v1)
    ctx->pc = 0x17b830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954196)));
label_17b834:
    // 0x17b834: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x17b834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17b838:
    // 0x17b838: 0x1440fecd  bnez        $v0, . + 4 + (-0x133 << 2)
label_17b83c:
    if (ctx->pc == 0x17B83Cu) {
        ctx->pc = 0x17B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B838u;
        // 0x17b83c: 0x240300c0  addiu       $v1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B840u;
        goto label_17b840;
    }
    ctx->pc = 0x17B838u;
    {
        const bool branch_taken_0x17b838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B838u;
        // 0x17b83c: 0x240300c0  addiu       $v1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b838) {
            ctx->pc = 0x17B370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b370;
        }
    }
    ctx->pc = 0x17B840u;
label_17b840:
    // 0x17b840: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x17b840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_17b844:
    // 0x17b844: 0xac80ccd4  sw          $zero, -0x332C($a0)
    ctx->pc = 0x17b844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954196), GPR_U32(ctx, 0));
label_17b848:
    // 0x17b848: 0x7bb012c0  lq          $s0, 0x12C0($sp)
    ctx->pc = 0x17b848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4800)));
label_17b84c:
    // 0x17b84c: 0x7bb112b0  lq          $s1, 0x12B0($sp)
    ctx->pc = 0x17b84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4784)));
label_17b850:
    // 0x17b850: 0x7bb212a0  lq          $s2, 0x12A0($sp)
    ctx->pc = 0x17b850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4768)));
label_17b854:
    // 0x17b854: 0x7bb31290  lq          $s3, 0x1290($sp)
    ctx->pc = 0x17b854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4752)));
label_17b858:
    // 0x17b858: 0x7bb41280  lq          $s4, 0x1280($sp)
    ctx->pc = 0x17b858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4736)));
label_17b85c:
    // 0x17b85c: 0x7bb51270  lq          $s5, 0x1270($sp)
    ctx->pc = 0x17b85cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4720)));
label_17b860:
    // 0x17b860: 0x7bb61260  lq          $s6, 0x1260($sp)
    ctx->pc = 0x17b860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4704)));
label_17b864:
    // 0x17b864: 0x7bb71250  lq          $s7, 0x1250($sp)
    ctx->pc = 0x17b864u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4688)));
label_17b868:
    // 0x17b868: 0x7bbe1240  lq          $fp, 0x1240($sp)
    ctx->pc = 0x17b868u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4672)));
label_17b86c:
    // 0x17b86c: 0xdfbf1230  ld          $ra, 0x1230($sp)
    ctx->pc = 0x17b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4656)));
label_17b870:
    // 0x17b870: 0xc7bf1328  lwc1        $f31, 0x1328($sp)
    ctx->pc = 0x17b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_17b874:
    // 0x17b874: 0xc7be1320  lwc1        $f30, 0x1320($sp)
    ctx->pc = 0x17b874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_17b878:
    // 0x17b878: 0xc7bd1318  lwc1        $f29, 0x1318($sp)
    ctx->pc = 0x17b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_17b87c:
    // 0x17b87c: 0xc7bc1310  lwc1        $f28, 0x1310($sp)
    ctx->pc = 0x17b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17b880:
    // 0x17b880: 0xc7bb1308  lwc1        $f27, 0x1308($sp)
    ctx->pc = 0x17b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_17b884:
    // 0x17b884: 0xc7ba1300  lwc1        $f26, 0x1300($sp)
    ctx->pc = 0x17b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_17b888:
    // 0x17b888: 0xc7b912f8  lwc1        $f25, 0x12F8($sp)
    ctx->pc = 0x17b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_17b88c:
    // 0x17b88c: 0xc7b812f0  lwc1        $f24, 0x12F0($sp)
    ctx->pc = 0x17b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17b890:
    // 0x17b890: 0xc7b712e8  lwc1        $f23, 0x12E8($sp)
    ctx->pc = 0x17b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17b894:
    // 0x17b894: 0xc7b612e0  lwc1        $f22, 0x12E0($sp)
    ctx->pc = 0x17b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17b898:
    // 0x17b898: 0xc7b512d8  lwc1        $f21, 0x12D8($sp)
    ctx->pc = 0x17b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17b89c:
    // 0x17b89c: 0xc7b412d0  lwc1        $f20, 0x12D0($sp)
    ctx->pc = 0x17b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17b8a0:
    // 0x17b8a0: 0x3e00008  jr          $ra
label_17b8a4:
    if (ctx->pc == 0x17B8A4u) {
        ctx->pc = 0x17B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A0u;
        // 0x17b8a4: 0x27bd1330  addiu       $sp, $sp, 0x1330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B8A8u;
        goto label_fallthrough_0x17b8a0;
    }
    ctx->pc = 0x17B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A0u;
        // 0x17b8a4: 0x27bd1330  addiu       $sp, $sp, 0x1330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b8a0:
    ctx->pc = 0x17B8A8u;
}
