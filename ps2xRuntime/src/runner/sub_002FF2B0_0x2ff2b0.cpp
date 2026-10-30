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

// Function: sub_002FF2B0
// Address: 0x2ff2b0 - 0x2ff898
void sub_002FF2B0_0x2ff2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF2B0_0x2ff2b0");
#endif

    switch (ctx->pc) {
        case 0x2ff2b0u: goto label_2ff2b0;
        case 0x2ff2b4u: goto label_2ff2b4;
        case 0x2ff2b8u: goto label_2ff2b8;
        case 0x2ff2bcu: goto label_2ff2bc;
        case 0x2ff2c0u: goto label_2ff2c0;
        case 0x2ff2c4u: goto label_2ff2c4;
        case 0x2ff2c8u: goto label_2ff2c8;
        case 0x2ff2ccu: goto label_2ff2cc;
        case 0x2ff2d0u: goto label_2ff2d0;
        case 0x2ff2d4u: goto label_2ff2d4;
        case 0x2ff2d8u: goto label_2ff2d8;
        case 0x2ff2dcu: goto label_2ff2dc;
        case 0x2ff2e0u: goto label_2ff2e0;
        case 0x2ff2e4u: goto label_2ff2e4;
        case 0x2ff2e8u: goto label_2ff2e8;
        case 0x2ff2ecu: goto label_2ff2ec;
        case 0x2ff2f0u: goto label_2ff2f0;
        case 0x2ff2f4u: goto label_2ff2f4;
        case 0x2ff2f8u: goto label_2ff2f8;
        case 0x2ff2fcu: goto label_2ff2fc;
        case 0x2ff300u: goto label_2ff300;
        case 0x2ff304u: goto label_2ff304;
        case 0x2ff308u: goto label_2ff308;
        case 0x2ff30cu: goto label_2ff30c;
        case 0x2ff310u: goto label_2ff310;
        case 0x2ff314u: goto label_2ff314;
        case 0x2ff318u: goto label_2ff318;
        case 0x2ff31cu: goto label_2ff31c;
        case 0x2ff320u: goto label_2ff320;
        case 0x2ff324u: goto label_2ff324;
        case 0x2ff328u: goto label_2ff328;
        case 0x2ff32cu: goto label_2ff32c;
        case 0x2ff330u: goto label_2ff330;
        case 0x2ff334u: goto label_2ff334;
        case 0x2ff338u: goto label_2ff338;
        case 0x2ff33cu: goto label_2ff33c;
        case 0x2ff340u: goto label_2ff340;
        case 0x2ff344u: goto label_2ff344;
        case 0x2ff348u: goto label_2ff348;
        case 0x2ff34cu: goto label_2ff34c;
        case 0x2ff350u: goto label_2ff350;
        case 0x2ff354u: goto label_2ff354;
        case 0x2ff358u: goto label_2ff358;
        case 0x2ff35cu: goto label_2ff35c;
        case 0x2ff360u: goto label_2ff360;
        case 0x2ff364u: goto label_2ff364;
        case 0x2ff368u: goto label_2ff368;
        case 0x2ff36cu: goto label_2ff36c;
        case 0x2ff370u: goto label_2ff370;
        case 0x2ff374u: goto label_2ff374;
        case 0x2ff378u: goto label_2ff378;
        case 0x2ff37cu: goto label_2ff37c;
        case 0x2ff380u: goto label_2ff380;
        case 0x2ff384u: goto label_2ff384;
        case 0x2ff388u: goto label_2ff388;
        case 0x2ff38cu: goto label_2ff38c;
        case 0x2ff390u: goto label_2ff390;
        case 0x2ff394u: goto label_2ff394;
        case 0x2ff398u: goto label_2ff398;
        case 0x2ff39cu: goto label_2ff39c;
        case 0x2ff3a0u: goto label_2ff3a0;
        case 0x2ff3a4u: goto label_2ff3a4;
        case 0x2ff3a8u: goto label_2ff3a8;
        case 0x2ff3acu: goto label_2ff3ac;
        case 0x2ff3b0u: goto label_2ff3b0;
        case 0x2ff3b4u: goto label_2ff3b4;
        case 0x2ff3b8u: goto label_2ff3b8;
        case 0x2ff3bcu: goto label_2ff3bc;
        case 0x2ff3c0u: goto label_2ff3c0;
        case 0x2ff3c4u: goto label_2ff3c4;
        case 0x2ff3c8u: goto label_2ff3c8;
        case 0x2ff3ccu: goto label_2ff3cc;
        case 0x2ff3d0u: goto label_2ff3d0;
        case 0x2ff3d4u: goto label_2ff3d4;
        case 0x2ff3d8u: goto label_2ff3d8;
        case 0x2ff3dcu: goto label_2ff3dc;
        case 0x2ff3e0u: goto label_2ff3e0;
        case 0x2ff3e4u: goto label_2ff3e4;
        case 0x2ff3e8u: goto label_2ff3e8;
        case 0x2ff3ecu: goto label_2ff3ec;
        case 0x2ff3f0u: goto label_2ff3f0;
        case 0x2ff3f4u: goto label_2ff3f4;
        case 0x2ff3f8u: goto label_2ff3f8;
        case 0x2ff3fcu: goto label_2ff3fc;
        case 0x2ff400u: goto label_2ff400;
        case 0x2ff404u: goto label_2ff404;
        case 0x2ff408u: goto label_2ff408;
        case 0x2ff40cu: goto label_2ff40c;
        case 0x2ff410u: goto label_2ff410;
        case 0x2ff414u: goto label_2ff414;
        case 0x2ff418u: goto label_2ff418;
        case 0x2ff41cu: goto label_2ff41c;
        case 0x2ff420u: goto label_2ff420;
        case 0x2ff424u: goto label_2ff424;
        case 0x2ff428u: goto label_2ff428;
        case 0x2ff42cu: goto label_2ff42c;
        case 0x2ff430u: goto label_2ff430;
        case 0x2ff434u: goto label_2ff434;
        case 0x2ff438u: goto label_2ff438;
        case 0x2ff43cu: goto label_2ff43c;
        case 0x2ff440u: goto label_2ff440;
        case 0x2ff444u: goto label_2ff444;
        case 0x2ff448u: goto label_2ff448;
        case 0x2ff44cu: goto label_2ff44c;
        case 0x2ff450u: goto label_2ff450;
        case 0x2ff454u: goto label_2ff454;
        case 0x2ff458u: goto label_2ff458;
        case 0x2ff45cu: goto label_2ff45c;
        case 0x2ff460u: goto label_2ff460;
        case 0x2ff464u: goto label_2ff464;
        case 0x2ff468u: goto label_2ff468;
        case 0x2ff46cu: goto label_2ff46c;
        case 0x2ff470u: goto label_2ff470;
        case 0x2ff474u: goto label_2ff474;
        case 0x2ff478u: goto label_2ff478;
        case 0x2ff47cu: goto label_2ff47c;
        case 0x2ff480u: goto label_2ff480;
        case 0x2ff484u: goto label_2ff484;
        case 0x2ff488u: goto label_2ff488;
        case 0x2ff48cu: goto label_2ff48c;
        case 0x2ff490u: goto label_2ff490;
        case 0x2ff494u: goto label_2ff494;
        case 0x2ff498u: goto label_2ff498;
        case 0x2ff49cu: goto label_2ff49c;
        case 0x2ff4a0u: goto label_2ff4a0;
        case 0x2ff4a4u: goto label_2ff4a4;
        case 0x2ff4a8u: goto label_2ff4a8;
        case 0x2ff4acu: goto label_2ff4ac;
        case 0x2ff4b0u: goto label_2ff4b0;
        case 0x2ff4b4u: goto label_2ff4b4;
        case 0x2ff4b8u: goto label_2ff4b8;
        case 0x2ff4bcu: goto label_2ff4bc;
        case 0x2ff4c0u: goto label_2ff4c0;
        case 0x2ff4c4u: goto label_2ff4c4;
        case 0x2ff4c8u: goto label_2ff4c8;
        case 0x2ff4ccu: goto label_2ff4cc;
        case 0x2ff4d0u: goto label_2ff4d0;
        case 0x2ff4d4u: goto label_2ff4d4;
        case 0x2ff4d8u: goto label_2ff4d8;
        case 0x2ff4dcu: goto label_2ff4dc;
        case 0x2ff4e0u: goto label_2ff4e0;
        case 0x2ff4e4u: goto label_2ff4e4;
        case 0x2ff4e8u: goto label_2ff4e8;
        case 0x2ff4ecu: goto label_2ff4ec;
        case 0x2ff4f0u: goto label_2ff4f0;
        case 0x2ff4f4u: goto label_2ff4f4;
        case 0x2ff4f8u: goto label_2ff4f8;
        case 0x2ff4fcu: goto label_2ff4fc;
        case 0x2ff500u: goto label_2ff500;
        case 0x2ff504u: goto label_2ff504;
        case 0x2ff508u: goto label_2ff508;
        case 0x2ff50cu: goto label_2ff50c;
        case 0x2ff510u: goto label_2ff510;
        case 0x2ff514u: goto label_2ff514;
        case 0x2ff518u: goto label_2ff518;
        case 0x2ff51cu: goto label_2ff51c;
        case 0x2ff520u: goto label_2ff520;
        case 0x2ff524u: goto label_2ff524;
        case 0x2ff528u: goto label_2ff528;
        case 0x2ff52cu: goto label_2ff52c;
        case 0x2ff530u: goto label_2ff530;
        case 0x2ff534u: goto label_2ff534;
        case 0x2ff538u: goto label_2ff538;
        case 0x2ff53cu: goto label_2ff53c;
        case 0x2ff540u: goto label_2ff540;
        case 0x2ff544u: goto label_2ff544;
        case 0x2ff548u: goto label_2ff548;
        case 0x2ff54cu: goto label_2ff54c;
        case 0x2ff550u: goto label_2ff550;
        case 0x2ff554u: goto label_2ff554;
        case 0x2ff558u: goto label_2ff558;
        case 0x2ff55cu: goto label_2ff55c;
        case 0x2ff560u: goto label_2ff560;
        case 0x2ff564u: goto label_2ff564;
        case 0x2ff568u: goto label_2ff568;
        case 0x2ff56cu: goto label_2ff56c;
        case 0x2ff570u: goto label_2ff570;
        case 0x2ff574u: goto label_2ff574;
        case 0x2ff578u: goto label_2ff578;
        case 0x2ff57cu: goto label_2ff57c;
        case 0x2ff580u: goto label_2ff580;
        case 0x2ff584u: goto label_2ff584;
        case 0x2ff588u: goto label_2ff588;
        case 0x2ff58cu: goto label_2ff58c;
        case 0x2ff590u: goto label_2ff590;
        case 0x2ff594u: goto label_2ff594;
        case 0x2ff598u: goto label_2ff598;
        case 0x2ff59cu: goto label_2ff59c;
        case 0x2ff5a0u: goto label_2ff5a0;
        case 0x2ff5a4u: goto label_2ff5a4;
        case 0x2ff5a8u: goto label_2ff5a8;
        case 0x2ff5acu: goto label_2ff5ac;
        case 0x2ff5b0u: goto label_2ff5b0;
        case 0x2ff5b4u: goto label_2ff5b4;
        case 0x2ff5b8u: goto label_2ff5b8;
        case 0x2ff5bcu: goto label_2ff5bc;
        case 0x2ff5c0u: goto label_2ff5c0;
        case 0x2ff5c4u: goto label_2ff5c4;
        case 0x2ff5c8u: goto label_2ff5c8;
        case 0x2ff5ccu: goto label_2ff5cc;
        case 0x2ff5d0u: goto label_2ff5d0;
        case 0x2ff5d4u: goto label_2ff5d4;
        case 0x2ff5d8u: goto label_2ff5d8;
        case 0x2ff5dcu: goto label_2ff5dc;
        case 0x2ff5e0u: goto label_2ff5e0;
        case 0x2ff5e4u: goto label_2ff5e4;
        case 0x2ff5e8u: goto label_2ff5e8;
        case 0x2ff5ecu: goto label_2ff5ec;
        case 0x2ff5f0u: goto label_2ff5f0;
        case 0x2ff5f4u: goto label_2ff5f4;
        case 0x2ff5f8u: goto label_2ff5f8;
        case 0x2ff5fcu: goto label_2ff5fc;
        case 0x2ff600u: goto label_2ff600;
        case 0x2ff604u: goto label_2ff604;
        case 0x2ff608u: goto label_2ff608;
        case 0x2ff60cu: goto label_2ff60c;
        case 0x2ff610u: goto label_2ff610;
        case 0x2ff614u: goto label_2ff614;
        case 0x2ff618u: goto label_2ff618;
        case 0x2ff61cu: goto label_2ff61c;
        case 0x2ff620u: goto label_2ff620;
        case 0x2ff624u: goto label_2ff624;
        case 0x2ff628u: goto label_2ff628;
        case 0x2ff62cu: goto label_2ff62c;
        case 0x2ff630u: goto label_2ff630;
        case 0x2ff634u: goto label_2ff634;
        case 0x2ff638u: goto label_2ff638;
        case 0x2ff63cu: goto label_2ff63c;
        case 0x2ff640u: goto label_2ff640;
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff648u: goto label_2ff648;
        case 0x2ff64cu: goto label_2ff64c;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff654u: goto label_2ff654;
        case 0x2ff658u: goto label_2ff658;
        case 0x2ff65cu: goto label_2ff65c;
        case 0x2ff660u: goto label_2ff660;
        case 0x2ff664u: goto label_2ff664;
        case 0x2ff668u: goto label_2ff668;
        case 0x2ff66cu: goto label_2ff66c;
        case 0x2ff670u: goto label_2ff670;
        case 0x2ff674u: goto label_2ff674;
        case 0x2ff678u: goto label_2ff678;
        case 0x2ff67cu: goto label_2ff67c;
        case 0x2ff680u: goto label_2ff680;
        case 0x2ff684u: goto label_2ff684;
        case 0x2ff688u: goto label_2ff688;
        case 0x2ff68cu: goto label_2ff68c;
        case 0x2ff690u: goto label_2ff690;
        case 0x2ff694u: goto label_2ff694;
        case 0x2ff698u: goto label_2ff698;
        case 0x2ff69cu: goto label_2ff69c;
        case 0x2ff6a0u: goto label_2ff6a0;
        case 0x2ff6a4u: goto label_2ff6a4;
        case 0x2ff6a8u: goto label_2ff6a8;
        case 0x2ff6acu: goto label_2ff6ac;
        case 0x2ff6b0u: goto label_2ff6b0;
        case 0x2ff6b4u: goto label_2ff6b4;
        case 0x2ff6b8u: goto label_2ff6b8;
        case 0x2ff6bcu: goto label_2ff6bc;
        case 0x2ff6c0u: goto label_2ff6c0;
        case 0x2ff6c4u: goto label_2ff6c4;
        case 0x2ff6c8u: goto label_2ff6c8;
        case 0x2ff6ccu: goto label_2ff6cc;
        case 0x2ff6d0u: goto label_2ff6d0;
        case 0x2ff6d4u: goto label_2ff6d4;
        case 0x2ff6d8u: goto label_2ff6d8;
        case 0x2ff6dcu: goto label_2ff6dc;
        case 0x2ff6e0u: goto label_2ff6e0;
        case 0x2ff6e4u: goto label_2ff6e4;
        case 0x2ff6e8u: goto label_2ff6e8;
        case 0x2ff6ecu: goto label_2ff6ec;
        case 0x2ff6f0u: goto label_2ff6f0;
        case 0x2ff6f4u: goto label_2ff6f4;
        case 0x2ff6f8u: goto label_2ff6f8;
        case 0x2ff6fcu: goto label_2ff6fc;
        case 0x2ff700u: goto label_2ff700;
        case 0x2ff704u: goto label_2ff704;
        case 0x2ff708u: goto label_2ff708;
        case 0x2ff70cu: goto label_2ff70c;
        case 0x2ff710u: goto label_2ff710;
        case 0x2ff714u: goto label_2ff714;
        case 0x2ff718u: goto label_2ff718;
        case 0x2ff71cu: goto label_2ff71c;
        case 0x2ff720u: goto label_2ff720;
        case 0x2ff724u: goto label_2ff724;
        case 0x2ff728u: goto label_2ff728;
        case 0x2ff72cu: goto label_2ff72c;
        case 0x2ff730u: goto label_2ff730;
        case 0x2ff734u: goto label_2ff734;
        case 0x2ff738u: goto label_2ff738;
        case 0x2ff73cu: goto label_2ff73c;
        case 0x2ff740u: goto label_2ff740;
        case 0x2ff744u: goto label_2ff744;
        case 0x2ff748u: goto label_2ff748;
        case 0x2ff74cu: goto label_2ff74c;
        case 0x2ff750u: goto label_2ff750;
        case 0x2ff754u: goto label_2ff754;
        case 0x2ff758u: goto label_2ff758;
        case 0x2ff75cu: goto label_2ff75c;
        case 0x2ff760u: goto label_2ff760;
        case 0x2ff764u: goto label_2ff764;
        case 0x2ff768u: goto label_2ff768;
        case 0x2ff76cu: goto label_2ff76c;
        case 0x2ff770u: goto label_2ff770;
        case 0x2ff774u: goto label_2ff774;
        case 0x2ff778u: goto label_2ff778;
        case 0x2ff77cu: goto label_2ff77c;
        case 0x2ff780u: goto label_2ff780;
        case 0x2ff784u: goto label_2ff784;
        case 0x2ff788u: goto label_2ff788;
        case 0x2ff78cu: goto label_2ff78c;
        case 0x2ff790u: goto label_2ff790;
        case 0x2ff794u: goto label_2ff794;
        case 0x2ff798u: goto label_2ff798;
        case 0x2ff79cu: goto label_2ff79c;
        case 0x2ff7a0u: goto label_2ff7a0;
        case 0x2ff7a4u: goto label_2ff7a4;
        case 0x2ff7a8u: goto label_2ff7a8;
        case 0x2ff7acu: goto label_2ff7ac;
        case 0x2ff7b0u: goto label_2ff7b0;
        case 0x2ff7b4u: goto label_2ff7b4;
        case 0x2ff7b8u: goto label_2ff7b8;
        case 0x2ff7bcu: goto label_2ff7bc;
        case 0x2ff7c0u: goto label_2ff7c0;
        case 0x2ff7c4u: goto label_2ff7c4;
        case 0x2ff7c8u: goto label_2ff7c8;
        case 0x2ff7ccu: goto label_2ff7cc;
        case 0x2ff7d0u: goto label_2ff7d0;
        case 0x2ff7d4u: goto label_2ff7d4;
        case 0x2ff7d8u: goto label_2ff7d8;
        case 0x2ff7dcu: goto label_2ff7dc;
        case 0x2ff7e0u: goto label_2ff7e0;
        case 0x2ff7e4u: goto label_2ff7e4;
        case 0x2ff7e8u: goto label_2ff7e8;
        case 0x2ff7ecu: goto label_2ff7ec;
        case 0x2ff7f0u: goto label_2ff7f0;
        case 0x2ff7f4u: goto label_2ff7f4;
        case 0x2ff7f8u: goto label_2ff7f8;
        case 0x2ff7fcu: goto label_2ff7fc;
        case 0x2ff800u: goto label_2ff800;
        case 0x2ff804u: goto label_2ff804;
        case 0x2ff808u: goto label_2ff808;
        case 0x2ff80cu: goto label_2ff80c;
        case 0x2ff810u: goto label_2ff810;
        case 0x2ff814u: goto label_2ff814;
        case 0x2ff818u: goto label_2ff818;
        case 0x2ff81cu: goto label_2ff81c;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff824u: goto label_2ff824;
        case 0x2ff828u: goto label_2ff828;
        case 0x2ff82cu: goto label_2ff82c;
        case 0x2ff830u: goto label_2ff830;
        case 0x2ff834u: goto label_2ff834;
        case 0x2ff838u: goto label_2ff838;
        case 0x2ff83cu: goto label_2ff83c;
        case 0x2ff840u: goto label_2ff840;
        case 0x2ff844u: goto label_2ff844;
        case 0x2ff848u: goto label_2ff848;
        case 0x2ff84cu: goto label_2ff84c;
        case 0x2ff850u: goto label_2ff850;
        case 0x2ff854u: goto label_2ff854;
        case 0x2ff858u: goto label_2ff858;
        case 0x2ff85cu: goto label_2ff85c;
        case 0x2ff860u: goto label_2ff860;
        case 0x2ff864u: goto label_2ff864;
        case 0x2ff868u: goto label_2ff868;
        case 0x2ff86cu: goto label_2ff86c;
        case 0x2ff870u: goto label_2ff870;
        case 0x2ff874u: goto label_2ff874;
        case 0x2ff878u: goto label_2ff878;
        case 0x2ff87cu: goto label_2ff87c;
        case 0x2ff880u: goto label_2ff880;
        case 0x2ff884u: goto label_2ff884;
        case 0x2ff888u: goto label_2ff888;
        case 0x2ff88cu: goto label_2ff88c;
        case 0x2ff890u: goto label_2ff890;
        case 0x2ff894u: goto label_2ff894;
        default: break;
    }

    ctx->pc = 0x2ff2b0u;

label_2ff2b0:
    // 0x2ff2b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2ff2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2ff2b4:
    // 0x2ff2b4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2ff2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2ff2b8:
    // 0x2ff2b8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2ff2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2ff2bc:
    // 0x2ff2bc: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2ff2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2ff2c0:
    // 0x2ff2c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ff2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2c4:
    // 0x2ff2c4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2ff2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2ff2c8:
    // 0x2ff2c8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2ff2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2ff2cc:
    // 0x2ff2cc: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2ff2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2ff2d0:
    // 0x2ff2d0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2ff2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2ff2d4:
    // 0x2ff2d4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ff2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2ff2d8:
    // 0x2ff2d8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2ff2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2ff2dc:
    // 0x2ff2dc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ff2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ff2e0:
    // 0x2ff2e0: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ff2e4:
    // 0x2ff2e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ff2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ff2e8:
    // 0x2ff2e8: 0x1282015e  beq         $s4, $v0, . + 4 + (0x15E << 2)
label_2ff2ec:
    if (ctx->pc == 0x2FF2ECu) {
        ctx->pc = 0x2FF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2E8u;
        // 0x2ff2ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF2F0u;
        goto label_2ff2f0;
    }
    ctx->pc = 0x2FF2E8u;
    {
        const bool branch_taken_0x2ff2e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2E8u;
        // 0x2ff2ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2e8) {
            ctx->pc = 0x2FF864u;
            goto label_2ff864;
        }
    }
    ctx->pc = 0x2FF2F0u;
label_2ff2f0:
    // 0x2ff2f0: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2ff2f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2ff2f4:
    // 0x2ff2f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ff2f8:
    if (ctx->pc == 0x2FF2F8u) {
        ctx->pc = 0x2FF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2F4u;
        // 0x2ff2f8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF2FCu;
        goto label_2ff2fc;
    }
    ctx->pc = 0x2FF2F4u;
    {
        const bool branch_taken_0x2ff2f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2F4u;
        // 0x2ff2f8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2f4) {
            ctx->pc = 0x2FF308u;
            goto label_2ff308;
        }
    }
    ctx->pc = 0x2FF2FCu;
label_2ff2fc:
    // 0x2ff2fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ff2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ff300:
    // 0x2ff300: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff304:
    if (ctx->pc == 0x2FF304u) {
        ctx->pc = 0x2FF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF300u;
        // 0x2ff304: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF308u;
        goto label_2ff308;
    }
    ctx->pc = 0x2FF300u;
    {
        const bool branch_taken_0x2ff300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF300u;
        // 0x2ff304: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff300) {
            ctx->pc = 0x2FF30Cu;
            goto label_2ff30c;
        }
    }
    ctx->pc = 0x2FF308u;
label_2ff308:
    // 0x2ff308: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ff308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff30c:
    // 0x2ff30c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2ff310:
    if (ctx->pc == 0x2FF310u) {
        ctx->pc = 0x2FF314u;
        goto label_2ff314;
    }
    ctx->pc = 0x2FF30Cu;
    {
        const bool branch_taken_0x2ff30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff30c) {
            ctx->pc = 0x2FF344u;
            goto label_2ff344;
        }
    }
    ctx->pc = 0x2FF314u;
label_2ff314:
    // 0x2ff314: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ff314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ff318:
    // 0x2ff318: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff31c:
    // 0x2ff31c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff320:
    // 0x2ff320: 0x40f809  jalr        $v0
label_2ff324:
    if (ctx->pc == 0x2FF324u) {
        ctx->pc = 0x2FF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF320u;
        // 0x2ff324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF328u;
        goto label_2ff328;
    }
    ctx->pc = 0x2FF320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF328u);
        ctx->pc = 0x2FF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF320u;
        // 0x2ff324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF320u, 0x2FF328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF328u;
label_2ff328:
    // 0x2ff328: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x2ff328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2ff32c:
    // 0x2ff32c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2ff330:
    if (ctx->pc == 0x2FF330u) {
        ctx->pc = 0x2FF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF32Cu;
        // 0x2ff330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF334u;
        goto label_2ff334;
    }
    ctx->pc = 0x2FF32Cu;
    {
        const bool branch_taken_0x2ff32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF32Cu;
        // 0x2ff330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff32c) {
            ctx->pc = 0x2FF344u;
            goto label_2ff344;
        }
    }
    ctx->pc = 0x2FF334u;
label_2ff334:
    // 0x2ff334: 0xc0aa07e  jal         func_2A81F8
label_2ff338:
    if (ctx->pc == 0x2FF338u) {
        ctx->pc = 0x2FF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF334u;
        // 0x2ff338: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF33Cu;
        goto label_2ff33c;
    }
    ctx->pc = 0x2FF334u;
    SET_GPR_U32(ctx, 31, 0x2FF33Cu);
    ctx->pc = 0x2FF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF334u;
    // 0x2ff338: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A81F8u, 0x2FF334u, 0x2FF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF33Cu;
label_2ff33c:
    // 0x2ff33c: 0x1000014a  b           . + 4 + (0x14A << 2)
label_2ff340:
    if (ctx->pc == 0x2FF340u) {
        ctx->pc = 0x2FF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF33Cu;
        // 0x2ff340: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF344u;
        goto label_2ff344;
    }
    ctx->pc = 0x2FF33Cu;
    {
        const bool branch_taken_0x2ff33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF33Cu;
        // 0x2ff340: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff33c) {
            ctx->pc = 0x2FF868u;
            goto label_2ff868;
        }
    }
    ctx->pc = 0x2FF344u;
label_2ff344:
    // 0x2ff344: 0xc0bfc66  jal         func_2FF198
label_2ff348:
    if (ctx->pc == 0x2FF348u) {
        ctx->pc = 0x2FF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF344u;
        // 0x2ff348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF34Cu;
        goto label_2ff34c;
    }
    ctx->pc = 0x2FF344u;
    SET_GPR_U32(ctx, 31, 0x2FF34Cu);
    ctx->pc = 0x2FF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF344u;
    // 0x2ff348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF198u, 0x2FF344u, 0x2FF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF34Cu;
label_2ff34c:
    // 0x2ff34c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff350:
    // 0x2ff350: 0x14430145  bne         $v0, $v1, . + 4 + (0x145 << 2)
label_2ff354:
    if (ctx->pc == 0x2FF354u) {
        ctx->pc = 0x2FF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF350u;
        // 0x2ff354: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF358u;
        goto label_2ff358;
    }
    ctx->pc = 0x2FF350u;
    {
        const bool branch_taken_0x2ff350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF350u;
        // 0x2ff354: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff350) {
            ctx->pc = 0x2FF868u;
            goto label_2ff868;
        }
    }
    ctx->pc = 0x2FF358u;
label_2ff358:
    // 0x2ff358: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x2ff358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_2ff35c:
    // 0x2ff35c: 0x50400143  beql        $v0, $zero, . + 4 + (0x143 << 2)
label_2ff360:
    if (ctx->pc == 0x2FF360u) {
        ctx->pc = 0x2FF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF35Cu;
        // 0x2ff360: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF364u;
        goto label_2ff364;
    }
    ctx->pc = 0x2FF35Cu;
    {
        const bool branch_taken_0x2ff35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff35c) {
            ctx->pc = 0x2FF360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF35Cu;
            // 0x2ff360: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF86Cu;
            goto label_2ff86c;
        }
    }
    ctx->pc = 0x2FF364u;
label_2ff364:
    // 0x2ff364: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2ff364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2ff368:
    // 0x2ff368: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
label_2ff36c:
    if (ctx->pc == 0x2FF36Cu) {
        ctx->pc = 0x2FF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF368u;
        // 0x2ff36c: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF370u;
        goto label_2ff370;
    }
    ctx->pc = 0x2FF368u;
    {
        const bool branch_taken_0x2ff368 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ff368) {
            ctx->pc = 0x2FF36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF368u;
            // 0x2ff36c: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF3F4u;
            goto label_2ff3f4;
        }
    }
    ctx->pc = 0x2FF370u;
label_2ff370:
    // 0x2ff370: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ff374:
    if (ctx->pc == 0x2FF374u) {
        ctx->pc = 0x2FF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF370u;
        // 0x2ff374: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF378u;
        goto label_2ff378;
    }
    ctx->pc = 0x2FF370u;
    {
        const bool branch_taken_0x2ff370 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF370u;
        // 0x2ff374: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff370) {
            ctx->pc = 0x2FF384u;
            goto label_2ff384;
        }
    }
    ctx->pc = 0x2FF378u;
label_2ff378:
    // 0x2ff378: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ff378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ff37c:
    // 0x2ff37c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff380:
    if (ctx->pc == 0x2FF380u) {
        ctx->pc = 0x2FF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF37Cu;
        // 0x2ff380: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF384u;
        goto label_2ff384;
    }
    ctx->pc = 0x2FF37Cu;
    {
        const bool branch_taken_0x2ff37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF37Cu;
        // 0x2ff380: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff37c) {
            ctx->pc = 0x2FF388u;
            goto label_2ff388;
        }
    }
    ctx->pc = 0x2FF384u;
label_2ff384:
    // 0x2ff384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff388:
    // 0x2ff388: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ff388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ff38c:
    // 0x2ff38c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff390:
    // 0x2ff390: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff394:
    // 0x2ff394: 0x40f809  jalr        $v0
label_2ff398:
    if (ctx->pc == 0x2FF398u) {
        ctx->pc = 0x2FF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF394u;
        // 0x2ff398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF39Cu;
        goto label_2ff39c;
    }
    ctx->pc = 0x2FF394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF39Cu);
        ctx->pc = 0x2FF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF394u;
        // 0x2ff398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF394u, 0x2FF39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF39Cu;
label_2ff39c:
    // 0x2ff39c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ff39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ff3a0:
    // 0x2ff3a0: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_2ff3a4:
    if (ctx->pc == 0x2FF3A4u) {
        ctx->pc = 0x2FF3A8u;
        goto label_2ff3a8;
    }
    ctx->pc = 0x2FF3A0u;
    {
        const bool branch_taken_0x2ff3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ff3a0) {
            ctx->pc = 0x2FF3E4u;
            goto label_2ff3e4;
        }
    }
    ctx->pc = 0x2FF3A8u;
label_2ff3a8:
    // 0x2ff3a8: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2ff3a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2ff3ac:
    // 0x2ff3ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ff3b0:
    if (ctx->pc == 0x2FF3B0u) {
        ctx->pc = 0x2FF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3ACu;
        // 0x2ff3b0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF3B4u;
        goto label_2ff3b4;
    }
    ctx->pc = 0x2FF3ACu;
    {
        const bool branch_taken_0x2ff3ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3ACu;
        // 0x2ff3b0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3ac) {
            ctx->pc = 0x2FF3C0u;
            goto label_2ff3c0;
        }
    }
    ctx->pc = 0x2FF3B4u;
label_2ff3b4:
    // 0x2ff3b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ff3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ff3b8:
    // 0x2ff3b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff3bc:
    if (ctx->pc == 0x2FF3BCu) {
        ctx->pc = 0x2FF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3B8u;
        // 0x2ff3bc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF3C0u;
        goto label_2ff3c0;
    }
    ctx->pc = 0x2FF3B8u;
    {
        const bool branch_taken_0x2ff3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3B8u;
        // 0x2ff3bc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3b8) {
            ctx->pc = 0x2FF3C4u;
            goto label_2ff3c4;
        }
    }
    ctx->pc = 0x2FF3C0u;
label_2ff3c0:
    // 0x2ff3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff3c4:
    // 0x2ff3c4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ff3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ff3c8:
    // 0x2ff3c8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff3c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff3cc:
    // 0x2ff3cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff3d0:
    // 0x2ff3d0: 0x40f809  jalr        $v0
label_2ff3d4:
    if (ctx->pc == 0x2FF3D4u) {
        ctx->pc = 0x2FF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3D0u;
        // 0x2ff3d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF3D8u;
        goto label_2ff3d8;
    }
    ctx->pc = 0x2FF3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF3D8u);
        ctx->pc = 0x2FF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3D0u;
        // 0x2ff3d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF3D0u, 0x2FF3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF3D8u;
label_2ff3d8:
    // 0x2ff3d8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2ff3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2ff3dc:
    // 0x2ff3dc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2ff3e0:
    if (ctx->pc == 0x2FF3E0u) {
        ctx->pc = 0x2FF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3DCu;
        // 0x2ff3e0: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF3E4u;
        goto label_2ff3e4;
    }
    ctx->pc = 0x2FF3DCu;
    {
        const bool branch_taken_0x2ff3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff3dc) {
            ctx->pc = 0x2FF3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF3DCu;
            // 0x2ff3e0: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF3F0u;
            goto label_2ff3f0;
        }
    }
    ctx->pc = 0x2FF3E4u;
label_2ff3e4:
    // 0x2ff3e4: 0xc0a35f6  jal         func_28D7D8
label_2ff3e8:
    if (ctx->pc == 0x2FF3E8u) {
        ctx->pc = 0x2FF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3E4u;
        // 0x2ff3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF3ECu;
        goto label_2ff3ec;
    }
    ctx->pc = 0x2FF3E4u;
    SET_GPR_U32(ctx, 31, 0x2FF3ECu);
    ctx->pc = 0x2FF3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3E4u;
    // 0x2ff3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2FF3E4u, 0x2FF3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3ECu;
label_2ff3ec:
    // 0x2ff3ec: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2ff3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ff3f0:
    // 0x2ff3f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff3f4:
    // 0x2ff3f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ff3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ff3f8:
    // 0x2ff3f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ff3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ff3fc:
    // 0x2ff3fc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2ff3fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff400:
    // 0x2ff400: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2ff400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_2ff404:
    // 0x2ff404: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2ff404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2ff408:
    // 0x2ff408: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2ff408u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2ff40c:
    // 0x2ff40c: 0x60f809  jalr        $v1
label_2ff410:
    if (ctx->pc == 0x2FF410u) {
        ctx->pc = 0x2FF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF40Cu;
        // 0x2ff410: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF414u;
        goto label_2ff414;
    }
    ctx->pc = 0x2FF40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FF414u);
        ctx->pc = 0x2FF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF40Cu;
        // 0x2ff410: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF40Cu, 0x2FF414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF414u;
label_2ff414:
    // 0x2ff414: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x2ff414u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff418:
    // 0x2ff418: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ff418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ff41c:
    // 0x2ff41c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ff41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff420:
    // 0x2ff420: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ff420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ff424:
    // 0x2ff424: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x2ff424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_2ff428:
    // 0x2ff428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ff428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ff42c:
    // 0x2ff42c: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x2ff42cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_2ff430:
    // 0x2ff430: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ff430u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ff434:
    // 0x2ff434: 0xc0cdb38  jal         func_336CE0
label_2ff438:
    if (ctx->pc == 0x2FF438u) {
        ctx->pc = 0x2FF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF434u;
        // 0x2ff438: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF43Cu;
        goto label_2ff43c;
    }
    ctx->pc = 0x2FF434u;
    SET_GPR_U32(ctx, 31, 0x2FF43Cu);
    ctx->pc = 0x2FF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF434u;
    // 0x2ff438: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FF434u, 0x2FF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF43Cu;
label_2ff43c:
    // 0x2ff43c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2ff43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2ff440:
    // 0x2ff440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ff440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff444:
    // 0x2ff444: 0x0  nop
    ctx->pc = 0x2ff444u;
    // NOP
label_2ff448:
    // 0x2ff448: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ff448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff44c:
    // 0x2ff44c: 0x0  nop
    ctx->pc = 0x2ff44cu;
    // NOP
label_2ff450:
    // 0x2ff450: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2ff454:
    if (ctx->pc == 0x2FF454u) {
        ctx->pc = 0x2FF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF450u;
        // 0x2ff454: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF458u;
        goto label_2ff458;
    }
    ctx->pc = 0x2FF450u;
    {
        const bool branch_taken_0x2ff450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff450) {
            ctx->pc = 0x2FF454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF450u;
            // 0x2ff454: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF458u;
            goto label_2ff458;
        }
    }
    ctx->pc = 0x2FF458u;
label_2ff458:
    // 0x2ff458: 0xc0e57ce  jal         func_395F38
label_2ff45c:
    if (ctx->pc == 0x2FF45Cu) {
        ctx->pc = 0x2FF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF458u;
        // 0x2ff45c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF460u;
        goto label_2ff460;
    }
    ctx->pc = 0x2FF458u;
    SET_GPR_U32(ctx, 31, 0x2FF460u);
    ctx->pc = 0x2FF45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF458u;
    // 0x2ff45c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2FF458u, 0x2FF460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF460u;
label_2ff460:
    // 0x2ff460: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2ff464:
    if (ctx->pc == 0x2FF464u) {
        ctx->pc = 0x2FF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF460u;
        // 0x2ff464: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF468u;
        goto label_2ff468;
    }
    ctx->pc = 0x2FF460u;
    {
        const bool branch_taken_0x2ff460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff460) {
            ctx->pc = 0x2FF464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF460u;
            // 0x2ff464: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF47Cu;
            goto label_2ff47c;
        }
    }
    ctx->pc = 0x2FF468u;
label_2ff468:
    // 0x2ff468: 0xc0e53c8  jal         func_394F20
label_2ff46c:
    if (ctx->pc == 0x2FF46Cu) {
        ctx->pc = 0x2FF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF468u;
        // 0x2ff46c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF470u;
        goto label_2ff470;
    }
    ctx->pc = 0x2FF468u;
    SET_GPR_U32(ctx, 31, 0x2FF470u);
    ctx->pc = 0x2FF46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF468u;
    // 0x2ff46c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x2FF468u, 0x2FF470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF470u;
label_2ff470:
    // 0x2ff470: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff474:
    // 0x2ff474: 0x104300fb  beq         $v0, $v1, . + 4 + (0xFB << 2)
label_2ff478:
    if (ctx->pc == 0x2FF478u) {
        ctx->pc = 0x2FF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF474u;
        // 0x2ff478: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF47Cu;
        goto label_2ff47c;
    }
    ctx->pc = 0x2FF474u;
    {
        const bool branch_taken_0x2ff474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF474u;
        // 0x2ff478: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff474) {
            ctx->pc = 0x2FF864u;
            goto label_2ff864;
        }
    }
    ctx->pc = 0x2FF47Cu;
label_2ff47c:
    // 0x2ff47c: 0x128000c3  beqz        $s4, . + 4 + (0xC3 << 2)
label_2ff480:
    if (ctx->pc == 0x2FF480u) {
        ctx->pc = 0x2FF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF47Cu;
        // 0x2ff480: 0x8c55bd30  lw          $s5, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF484u;
        goto label_2ff484;
    }
    ctx->pc = 0x2FF47Cu;
    {
        const bool branch_taken_0x2ff47c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF47Cu;
        // 0x2ff480: 0x8c55bd30  lw          $s5, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff47c) {
            ctx->pc = 0x2FF78Cu;
            goto label_2ff78c;
        }
    }
    ctx->pc = 0x2FF484u;
label_2ff484:
    // 0x2ff484: 0xc0a2fc0  jal         func_28BF00
label_2ff488:
    if (ctx->pc == 0x2FF488u) {
        ctx->pc = 0x2FF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF484u;
        // 0x2ff488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF48Cu;
        goto label_2ff48c;
    }
    ctx->pc = 0x2FF484u;
    SET_GPR_U32(ctx, 31, 0x2FF48Cu);
    ctx->pc = 0x2FF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF484u;
    // 0x2ff488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2FF484u, 0x2FF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF48Cu;
label_2ff48c:
    // 0x2ff48c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ff48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff490:
    // 0x2ff490: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2ff490u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2ff494:
    // 0x2ff494: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ff494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2ff498:
    // 0x2ff498: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ff498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2ff49c:
    // 0x2ff49c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff4a0:
    // 0x2ff4a0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2ff4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2ff4a4:
    // 0x2ff4a4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ff4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2ff4a8:
    // 0x2ff4a8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ff4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2ff4ac:
    // 0x2ff4ac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ff4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2ff4b0:
    // 0x2ff4b0: 0xc0888fa  jal         func_2223E8
label_2ff4b4:
    if (ctx->pc == 0x2FF4B4u) {
        ctx->pc = 0x2FF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4B0u;
        // 0x2ff4b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF4B8u;
        goto label_2ff4b8;
    }
    ctx->pc = 0x2FF4B0u;
    SET_GPR_U32(ctx, 31, 0x2FF4B8u);
    ctx->pc = 0x2FF4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4B0u;
    // 0x2ff4b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x2FF4B0u, 0x2FF4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4B8u;
label_2ff4b8:
    // 0x2ff4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff4bc:
    // 0x2ff4bc: 0x144300b4  bne         $v0, $v1, . + 4 + (0xB4 << 2)
label_2ff4c0:
    if (ctx->pc == 0x2FF4C0u) {
        ctx->pc = 0x2FF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4BCu;
        // 0x2ff4c0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF4C4u;
        goto label_2ff4c4;
    }
    ctx->pc = 0x2FF4BCu;
    {
        const bool branch_taken_0x2ff4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4BCu;
        // 0x2ff4c0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4bc) {
            ctx->pc = 0x2FF790u;
            goto label_2ff790;
        }
    }
    ctx->pc = 0x2FF4C4u;
label_2ff4c4:
    // 0x2ff4c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ff4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ff4c8:
    // 0x2ff4c8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ff4c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4cc:
    // 0x2ff4cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff4d0:
    // 0x2ff4d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff4d4:
    // 0x2ff4d4: 0x40f809  jalr        $v0
label_2ff4d8:
    if (ctx->pc == 0x2FF4D8u) {
        ctx->pc = 0x2FF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4D4u;
        // 0x2ff4d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF4DCu;
        goto label_2ff4dc;
    }
    ctx->pc = 0x2FF4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF4DCu);
        ctx->pc = 0x2FF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4D4u;
        // 0x2ff4d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF4D4u, 0x2FF4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF4DCu;
label_2ff4dc:
    // 0x2ff4dc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2ff4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ff4e0:
    // 0x2ff4e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ff4e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4e4:
    // 0x2ff4e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ff4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ff4e8:
    // 0x2ff4e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ff4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff4ec:
    // 0x2ff4ec: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2ff4ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2ff4f0:
    // 0x2ff4f0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2ff4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2ff4f4:
    // 0x2ff4f4: 0x60f809  jalr        $v1
label_2ff4f8:
    if (ctx->pc == 0x2FF4F8u) {
        ctx->pc = 0x2FF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4F4u;
        // 0x2ff4f8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF4FCu;
        goto label_2ff4fc;
    }
    ctx->pc = 0x2FF4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FF4FCu);
        ctx->pc = 0x2FF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4F4u;
        // 0x2ff4f8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF4F4u, 0x2FF4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF4FCu;
label_2ff4fc:
    // 0x2ff4fc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2ff4fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ff500:
    // 0x2ff500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff504:
    // 0x2ff504: 0xc0e2612  jal         func_389848
label_2ff508:
    if (ctx->pc == 0x2FF508u) {
        ctx->pc = 0x2FF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF504u;
        // 0x2ff508: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF50Cu;
        goto label_2ff50c;
    }
    ctx->pc = 0x2FF504u;
    SET_GPR_U32(ctx, 31, 0x2FF50Cu);
    ctx->pc = 0x2FF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF504u;
    // 0x2ff508: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2FF504u, 0x2FF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF50Cu;
label_2ff50c:
    // 0x2ff50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff510:
    // 0x2ff510: 0xc0e3d62  jal         func_38F588
label_2ff514:
    if (ctx->pc == 0x2FF514u) {
        ctx->pc = 0x2FF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF510u;
        // 0x2ff514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF518u;
        goto label_2ff518;
    }
    ctx->pc = 0x2FF510u;
    SET_GPR_U32(ctx, 31, 0x2FF518u);
    ctx->pc = 0x2FF514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF510u;
    // 0x2ff514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x2FF510u, 0x2FF518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF518u;
label_2ff518:
    // 0x2ff518: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2ff518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2ff51c:
    // 0x2ff51c: 0xc0e3d62  jal         func_38F588
label_2ff520:
    if (ctx->pc == 0x2FF520u) {
        ctx->pc = 0x2FF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF51Cu;
        // 0x2ff520: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF524u;
        goto label_2ff524;
    }
    ctx->pc = 0x2FF51Cu;
    SET_GPR_U32(ctx, 31, 0x2FF524u);
    ctx->pc = 0x2FF520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF51Cu;
    // 0x2ff520: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x2FF51Cu, 0x2FF524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF524u;
label_2ff524:
    // 0x2ff524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff528:
    // 0x2ff528: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ff528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ff52c:
    // 0x2ff52c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2ff52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ff530:
    // 0x2ff530: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ff530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ff534:
    // 0x2ff534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff538:
    // 0x2ff538: 0xc105df6  jal         func_4177D8
label_2ff53c:
    if (ctx->pc == 0x2FF53Cu) {
        ctx->pc = 0x2FF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF538u;
        // 0x2ff53c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF540u;
        goto label_2ff540;
    }
    ctx->pc = 0x2FF538u;
    SET_GPR_U32(ctx, 31, 0x2FF540u);
    ctx->pc = 0x2FF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF538u;
    // 0x2ff53c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2FF538u, 0x2FF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF540u;
label_2ff540:
    // 0x2ff540: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ff544:
    if (ctx->pc == 0x2FF544u) {
        ctx->pc = 0x2FF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF540u;
        // 0x2ff544: 0xc7a10050  lwc1        $f1, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF548u;
        goto label_2ff548;
    }
    ctx->pc = 0x2FF540u;
    {
        const bool branch_taken_0x2ff540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF540u;
        // 0x2ff544: 0xc7a10050  lwc1        $f1, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff540) {
            ctx->pc = 0x2FF564u;
            goto label_2ff564;
        }
    }
    ctx->pc = 0x2FF548u;
label_2ff548:
    // 0x2ff548: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2ff548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2ff54c:
    // 0x2ff54c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff550:
    // 0x2ff550: 0x0  nop
    ctx->pc = 0x2ff550u;
    // NOP
label_2ff554:
    // 0x2ff554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ff554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff558:
    // 0x2ff558: 0x0  nop
    ctx->pc = 0x2ff558u;
    // NOP
label_2ff55c:
    // 0x2ff55c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2ff560:
    if (ctx->pc == 0x2FF560u) {
        ctx->pc = 0x2FF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF55Cu;
        // 0x2ff560: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF564u;
        goto label_2ff564;
    }
    ctx->pc = 0x2FF55Cu;
    {
        const bool branch_taken_0x2ff55c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff55c) {
            ctx->pc = 0x2FF560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF55Cu;
            // 0x2ff560: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF564u;
            goto label_2ff564;
        }
    }
    ctx->pc = 0x2FF564u;
label_2ff564:
    // 0x2ff564: 0x16e0008a  bnez        $s7, . + 4 + (0x8A << 2)
label_2ff568:
    if (ctx->pc == 0x2FF568u) {
        ctx->pc = 0x2FF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF564u;
        // 0x2ff568: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF56Cu;
        goto label_2ff56c;
    }
    ctx->pc = 0x2FF564u;
    {
        const bool branch_taken_0x2ff564 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF564u;
        // 0x2ff568: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff564) {
            ctx->pc = 0x2FF790u;
            goto label_2ff790;
        }
    }
    ctx->pc = 0x2FF56Cu;
label_2ff56c:
    // 0x2ff56c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ff56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ff570:
    // 0x2ff570: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ff570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff574:
    // 0x2ff574: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2ff574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2ff578:
    // 0x2ff578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ff578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff57c:
    // 0x2ff57c: 0xc1073e0  jal         func_41CF80
label_2ff580:
    if (ctx->pc == 0x2FF580u) {
        ctx->pc = 0x2FF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF57Cu;
        // 0x2ff580: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF584u;
        goto label_2ff584;
    }
    ctx->pc = 0x2FF57Cu;
    SET_GPR_U32(ctx, 31, 0x2FF584u);
    ctx->pc = 0x2FF580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF57Cu;
    // 0x2ff580: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF80u, 0x2FF57Cu, 0x2FF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF584u;
label_2ff584:
    // 0x2ff584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff588:
    // 0x2ff588: 0x14430081  bne         $v0, $v1, . + 4 + (0x81 << 2)
label_2ff58c:
    if (ctx->pc == 0x2FF58Cu) {
        ctx->pc = 0x2FF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF588u;
        // 0x2ff58c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF590u;
        goto label_2ff590;
    }
    ctx->pc = 0x2FF588u;
    {
        const bool branch_taken_0x2ff588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF588u;
        // 0x2ff58c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff588) {
            ctx->pc = 0x2FF790u;
            goto label_2ff790;
        }
    }
    ctx->pc = 0x2FF590u;
label_2ff590:
    // 0x2ff590: 0xc087502  jal         func_21D408
label_2ff594:
    if (ctx->pc == 0x2FF594u) {
        ctx->pc = 0x2FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF590u;
        // 0x2ff594: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF598u;
        goto label_2ff598;
    }
    ctx->pc = 0x2FF590u;
    SET_GPR_U32(ctx, 31, 0x2FF598u);
    ctx->pc = 0x2FF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF590u;
    // 0x2ff594: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FF590u, 0x2FF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF598u;
label_2ff598:
    // 0x2ff598: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2ff598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ff59c:
    // 0x2ff59c: 0x8c6505f4  lw          $a1, 0x5F4($v1)
    ctx->pc = 0x2ff59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_2ff5a0:
    // 0x2ff5a0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_2ff5a4:
    if (ctx->pc == 0x2FF5A4u) {
        ctx->pc = 0x2FF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5A0u;
        // 0x2ff5a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5A8u;
        goto label_2ff5a8;
    }
    ctx->pc = 0x2FF5A0u;
    {
        const bool branch_taken_0x2ff5a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5A0u;
        // 0x2ff5a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5a0) {
            ctx->pc = 0x2FF5C8u;
            goto label_2ff5c8;
        }
    }
    ctx->pc = 0x2FF5A8u;
label_2ff5a8:
    // 0x2ff5a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ff5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ff5ac:
    // 0x2ff5ac: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ff5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ff5b0:
    // 0x2ff5b0: 0x34029c40  ori         $v0, $zero, 0x9C40
    ctx->pc = 0x2ff5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
label_2ff5b4:
    // 0x2ff5b4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ff5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ff5b8:
    // 0x2ff5b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff5bc:
    // 0x2ff5bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ff5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ff5c0:
    // 0x2ff5c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ff5c4:
    if (ctx->pc == 0x2FF5C4u) {
        ctx->pc = 0x2FF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5C0u;
        // 0x2ff5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5C8u;
        goto label_2ff5c8;
    }
    ctx->pc = 0x2FF5C0u;
    {
        const bool branch_taken_0x2ff5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5C0u;
        // 0x2ff5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5c0) {
            ctx->pc = 0x2FF5D0u;
            goto label_2ff5d0;
        }
    }
    ctx->pc = 0x2FF5C8u;
label_2ff5c8:
    // 0x2ff5c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ff5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff5cc:
    // 0x2ff5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff5d0:
    // 0x2ff5d0: 0x14c2006f  bne         $a2, $v0, . + 4 + (0x6F << 2)
label_2ff5d4:
    if (ctx->pc == 0x2FF5D4u) {
        ctx->pc = 0x2FF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5D0u;
        // 0x2ff5d4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5D8u;
        goto label_2ff5d8;
    }
    ctx->pc = 0x2FF5D0u;
    {
        const bool branch_taken_0x2ff5d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5D0u;
        // 0x2ff5d4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5d0) {
            ctx->pc = 0x2FF790u;
            goto label_2ff790;
        }
    }
    ctx->pc = 0x2FF5D8u;
label_2ff5d8:
    // 0x2ff5d8: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_2ff5dc:
    if (ctx->pc == 0x2FF5DCu) {
        ctx->pc = 0x2FF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5D8u;
        // 0x2ff5dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5E0u;
        goto label_2ff5e0;
    }
    ctx->pc = 0x2FF5D8u;
    {
        const bool branch_taken_0x2ff5d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5D8u;
        // 0x2ff5dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5d8) {
            ctx->pc = 0x2FF5F0u;
            goto label_2ff5f0;
        }
    }
    ctx->pc = 0x2FF5E0u;
label_2ff5e0:
    // 0x2ff5e0: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_2ff5e4:
    if (ctx->pc == 0x2FF5E4u) {
        ctx->pc = 0x2FF5E8u;
        goto label_2ff5e8;
    }
    ctx->pc = 0x2FF5E0u;
    {
        const bool branch_taken_0x2ff5e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff5e0) {
            ctx->pc = 0x2FF5F0u;
            goto label_2ff5f0;
        }
    }
    ctx->pc = 0x2FF5E8u;
label_2ff5e8:
    // 0x2ff5e8: 0x5200006a  beql        $s0, $zero, . + 4 + (0x6A << 2)
label_2ff5ec:
    if (ctx->pc == 0x2FF5ECu) {
        ctx->pc = 0x2FF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5E8u;
        // 0x2ff5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5F0u;
        goto label_2ff5f0;
    }
    ctx->pc = 0x2FF5E8u;
    {
        const bool branch_taken_0x2ff5e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff5e8) {
            ctx->pc = 0x2FF5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF5E8u;
            // 0x2ff5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF794u;
            goto label_2ff794;
        }
    }
    ctx->pc = 0x2FF5F0u;
label_2ff5f0:
    // 0x2ff5f0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2ff5f4:
    if (ctx->pc == 0x2FF5F4u) {
        ctx->pc = 0x2FF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5F0u;
        // 0x2ff5f4: 0x90500adf  lbu         $s0, 0xADF($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2783)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5F8u;
        goto label_2ff5f8;
    }
    ctx->pc = 0x2FF5F0u;
    {
        const bool branch_taken_0x2ff5f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5F0u;
        // 0x2ff5f4: 0x90500adf  lbu         $s0, 0xADF($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2783)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5f0) {
            ctx->pc = 0x2FF608u;
            goto label_2ff608;
        }
    }
    ctx->pc = 0x2FF5F8u;
label_2ff5f8:
    // 0x2ff5f8: 0x8e6211e0  lw          $v0, 0x11E0($s3)
    ctx->pc = 0x2ff5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
label_2ff5fc:
    // 0x2ff5fc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2ff5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ff600:
    // 0x2ff600: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ff600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2ff604:
    // 0x2ff604: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2ff604u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2ff608:
    // 0x2ff608: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ff608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ff60c:
    // 0x2ff60c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ff60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ff610:
    // 0x2ff610: 0xc0cd4ee  jal         func_3353B8
label_2ff614:
    if (ctx->pc == 0x2FF614u) {
        ctx->pc = 0x2FF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF610u;
        // 0x2ff614: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF618u;
        goto label_2ff618;
    }
    ctx->pc = 0x2FF610u;
    SET_GPR_U32(ctx, 31, 0x2FF618u);
    ctx->pc = 0x2FF614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF610u;
    // 0x2ff614: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2FF610u, 0x2FF618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF618u;
label_2ff618:
    // 0x2ff618: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2ff618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ff61c:
    // 0x2ff61c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
label_2ff620:
    if (ctx->pc == 0x2FF620u) {
        ctx->pc = 0x2FF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF61Cu;
        // 0x2ff620: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF624u;
        goto label_2ff624;
    }
    ctx->pc = 0x2FF61Cu;
    {
        const bool branch_taken_0x2ff61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF61Cu;
        // 0x2ff620: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff61c) {
            ctx->pc = 0x2FF790u;
            goto label_2ff790;
        }
    }
    ctx->pc = 0x2FF624u;
label_2ff624:
    // 0x2ff624: 0x8e42489c  lw          $v0, 0x489C($s2)
    ctx->pc = 0x2ff624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2ff628:
    // 0x2ff628: 0x904302a1  lbu         $v1, 0x2A1($v0)
    ctx->pc = 0x2ff628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 673)));
label_2ff62c:
    // 0x2ff62c: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_2ff630:
    if (ctx->pc == 0x2FF630u) {
        ctx->pc = 0x2FF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF62Cu;
        // 0x2ff630: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF634u;
        goto label_2ff634;
    }
    ctx->pc = 0x2FF62Cu;
    {
        const bool branch_taken_0x2ff62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF62Cu;
        // 0x2ff630: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff62c) {
            ctx->pc = 0x2FF78Cu;
            goto label_2ff78c;
        }
    }
    ctx->pc = 0x2FF634u;
label_2ff634:
    // 0x2ff634: 0xc05b2de  jal         func_16CB78
label_2ff638:
    if (ctx->pc == 0x2FF638u) {
        ctx->pc = 0x2FF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF634u;
        // 0x2ff638: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF63Cu;
        goto label_2ff63c;
    }
    ctx->pc = 0x2FF634u;
    SET_GPR_U32(ctx, 31, 0x2FF63Cu);
    ctx->pc = 0x2FF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF634u;
    // 0x2ff638: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x2FF634u, 0x2FF63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF63Cu;
label_2ff63c:
    // 0x2ff63c: 0x14500030  bne         $v0, $s0, . + 4 + (0x30 << 2)
label_2ff640:
    if (ctx->pc == 0x2FF640u) {
        ctx->pc = 0x2FF644u;
        goto label_2ff644;
    }
    ctx->pc = 0x2FF63Cu;
    {
        const bool branch_taken_0x2ff63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ff63c) {
            ctx->pc = 0x2FF700u;
            goto label_2ff700;
        }
    }
    ctx->pc = 0x2FF644u;
label_2ff644:
    // 0x2ff644: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ff644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff648:
    // 0x2ff648: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff64c:
    // 0x2ff64c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff650:
    // 0x2ff650: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff654:
    // 0x2ff654: 0x40f809  jalr        $v0
label_2ff658:
    if (ctx->pc == 0x2FF658u) {
        ctx->pc = 0x2FF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF654u;
        // 0x2ff658: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF65Cu;
        goto label_2ff65c;
    }
    ctx->pc = 0x2FF654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF65Cu);
        ctx->pc = 0x2FF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF654u;
        // 0x2ff658: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF654u, 0x2FF65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF65Cu;
label_2ff65c:
    // 0x2ff65c: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2ff65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2ff660:
    // 0x2ff660: 0xc1073fa  jal         func_41CFE8
label_2ff664:
    if (ctx->pc == 0x2FF664u) {
        ctx->pc = 0x2FF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF660u;
        // 0x2ff664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF668u;
        goto label_2ff668;
    }
    ctx->pc = 0x2FF660u;
    SET_GPR_U32(ctx, 31, 0x2FF668u);
    ctx->pc = 0x2FF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF660u;
    // 0x2ff664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x2FF660u, 0x2FF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF668u;
label_2ff668:
    // 0x2ff668: 0xc087420  jal         func_21D080
label_2ff66c:
    if (ctx->pc == 0x2FF66Cu) {
        ctx->pc = 0x2FF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF668u;
        // 0x2ff66c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF670u;
        goto label_2ff670;
    }
    ctx->pc = 0x2FF668u;
    SET_GPR_U32(ctx, 31, 0x2FF670u);
    ctx->pc = 0x2FF66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF668u;
    // 0x2ff66c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2FF668u, 0x2FF670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF670u;
label_2ff670:
    // 0x2ff670: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ff670u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ff674:
    // 0x2ff674: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ff674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ff678:
    // 0x2ff678: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2ff678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2ff67c:
    // 0x2ff67c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff680:
    // 0x2ff680: 0xc0d3e54  jal         func_34F950
label_2ff684:
    if (ctx->pc == 0x2FF684u) {
        ctx->pc = 0x2FF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF680u;
        // 0x2ff684: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF688u;
        goto label_2ff688;
    }
    ctx->pc = 0x2FF680u;
    SET_GPR_U32(ctx, 31, 0x2FF688u);
    ctx->pc = 0x2FF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF680u;
    // 0x2ff684: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2FF680u, 0x2FF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF688u;
label_2ff688:
    // 0x2ff688: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2ff688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ff68c:
    // 0x2ff68c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2ff68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2ff690:
    // 0x2ff690: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2ff690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2ff694:
    // 0x2ff694: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ff694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff698:
    // 0x2ff698: 0xc094ab8  jal         func_252AE0
label_2ff69c:
    if (ctx->pc == 0x2FF69Cu) {
        ctx->pc = 0x2FF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF698u;
        // 0x2ff69c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6A0u;
        goto label_2ff6a0;
    }
    ctx->pc = 0x2FF698u;
    SET_GPR_U32(ctx, 31, 0x2FF6A0u);
    ctx->pc = 0x2FF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF698u;
    // 0x2ff69c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x2FF698u, 0x2FF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6A0u;
label_2ff6a0:
    // 0x2ff6a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ff6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff6a4:
    // 0x2ff6a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff6a8:
    // 0x2ff6a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff6ac:
    // 0x2ff6ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff6b0:
    // 0x2ff6b0: 0x40f809  jalr        $v0
label_2ff6b4:
    if (ctx->pc == 0x2FF6B4u) {
        ctx->pc = 0x2FF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B0u;
        // 0x2ff6b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6B8u;
        goto label_2ff6b8;
    }
    ctx->pc = 0x2FF6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF6B8u);
        ctx->pc = 0x2FF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B0u;
        // 0x2ff6b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF6B0u, 0x2FF6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF6B8u;
label_2ff6b8:
    // 0x2ff6b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ff6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ff6bc:
    // 0x2ff6bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6c0:
    // 0x2ff6c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ff6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ff6c4:
    // 0x2ff6c4: 0x8c51bd30  lw          $s1, -0x42D0($v0)
    ctx->pc = 0x2ff6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ff6c8:
    // 0x2ff6c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff6cc:
    // 0x2ff6cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff6d0:
    // 0x2ff6d0: 0x40f809  jalr        $v0
label_2ff6d4:
    if (ctx->pc == 0x2FF6D4u) {
        ctx->pc = 0x2FF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6D0u;
        // 0x2ff6d4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6D8u;
        goto label_2ff6d8;
    }
    ctx->pc = 0x2FF6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF6D8u);
        ctx->pc = 0x2FF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6D0u;
        // 0x2ff6d4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF6D0u, 0x2FF6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF6D8u;
label_2ff6d8:
    // 0x2ff6d8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2ff6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2ff6dc:
    // 0x2ff6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6e0:
    // 0x2ff6e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ff6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6e4:
    // 0x2ff6e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ff6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6e8:
    // 0x2ff6e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ff6e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6ec:
    // 0x2ff6ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2ff6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ff6f0:
    // 0x2ff6f0: 0xc0a9f56  jal         func_2A7D58
label_2ff6f4:
    if (ctx->pc == 0x2FF6F4u) {
        ctx->pc = 0x2FF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6F0u;
        // 0x2ff6f4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6F8u;
        goto label_2ff6f8;
    }
    ctx->pc = 0x2FF6F0u;
    SET_GPR_U32(ctx, 31, 0x2FF6F8u);
    ctx->pc = 0x2FF6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6F0u;
    // 0x2ff6f4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D58u, 0x2FF6F0u, 0x2FF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6F8u;
label_2ff6f8:
    // 0x2ff6f8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2ff6fc:
    if (ctx->pc == 0x2FF6FCu) {
        ctx->pc = 0x2FF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6F8u;
        // 0x2ff6fc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF700u;
        goto label_2ff700;
    }
    ctx->pc = 0x2FF6F8u;
    {
        const bool branch_taken_0x2ff6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6F8u;
        // 0x2ff6fc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6f8) {
            ctx->pc = 0x2FF868u;
            goto label_2ff868;
        }
    }
    ctx->pc = 0x2FF700u;
label_2ff700:
    // 0x2ff700: 0xc05b2de  jal         func_16CB78
label_2ff704:
    if (ctx->pc == 0x2FF704u) {
        ctx->pc = 0x2FF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF700u;
        // 0x2ff704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF708u;
        goto label_2ff708;
    }
    ctx->pc = 0x2FF700u;
    SET_GPR_U32(ctx, 31, 0x2FF708u);
    ctx->pc = 0x2FF704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF700u;
    // 0x2ff704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x2FF700u, 0x2FF708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF708u;
label_2ff708:
    // 0x2ff708: 0x14500021  bne         $v0, $s0, . + 4 + (0x21 << 2)
label_2ff70c:
    if (ctx->pc == 0x2FF70Cu) {
        ctx->pc = 0x2FF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF708u;
        // 0x2ff70c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF710u;
        goto label_2ff710;
    }
    ctx->pc = 0x2FF708u;
    {
        const bool branch_taken_0x2ff708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF708u;
        // 0x2ff70c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff708) {
            ctx->pc = 0x2FF790u;
            goto label_2ff790;
        }
    }
    ctx->pc = 0x2FF710u;
label_2ff710:
    // 0x2ff710: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ff710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff714:
    // 0x2ff714: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff718:
    // 0x2ff718: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff71c:
    // 0x2ff71c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff720:
    // 0x2ff720: 0x40f809  jalr        $v0
label_2ff724:
    if (ctx->pc == 0x2FF724u) {
        ctx->pc = 0x2FF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF720u;
        // 0x2ff724: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF728u;
        goto label_2ff728;
    }
    ctx->pc = 0x2FF720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF728u);
        ctx->pc = 0x2FF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF720u;
        // 0x2ff724: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF720u, 0x2FF728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF728u;
label_2ff728:
    // 0x2ff728: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2ff728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2ff72c:
    // 0x2ff72c: 0xc1073fa  jal         func_41CFE8
label_2ff730:
    if (ctx->pc == 0x2FF730u) {
        ctx->pc = 0x2FF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF72Cu;
        // 0x2ff730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF734u;
        goto label_2ff734;
    }
    ctx->pc = 0x2FF72Cu;
    SET_GPR_U32(ctx, 31, 0x2FF734u);
    ctx->pc = 0x2FF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF72Cu;
    // 0x2ff730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x2FF72Cu, 0x2FF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF734u;
label_2ff734:
    // 0x2ff734: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ff734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff738:
    // 0x2ff738: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff73c:
    // 0x2ff73c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff740:
    // 0x2ff740: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff744:
    // 0x2ff744: 0x40f809  jalr        $v0
label_2ff748:
    if (ctx->pc == 0x2FF748u) {
        ctx->pc = 0x2FF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF744u;
        // 0x2ff748: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF74Cu;
        goto label_2ff74c;
    }
    ctx->pc = 0x2FF744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF74Cu);
        ctx->pc = 0x2FF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF744u;
        // 0x2ff748: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF744u, 0x2FF74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF74Cu;
label_2ff74c:
    // 0x2ff74c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ff74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ff750:
    // 0x2ff750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff754:
    // 0x2ff754: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff758:
    // 0x2ff758: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff75c:
    // 0x2ff75c: 0x40f809  jalr        $v0
label_2ff760:
    if (ctx->pc == 0x2FF760u) {
        ctx->pc = 0x2FF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF75Cu;
        // 0x2ff760: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF764u;
        goto label_2ff764;
    }
    ctx->pc = 0x2FF75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF764u);
        ctx->pc = 0x2FF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF75Cu;
        // 0x2ff760: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF75Cu, 0x2FF764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF764u;
label_2ff764:
    // 0x2ff764: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2ff764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2ff768:
    // 0x2ff768: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff76c:
    // 0x2ff76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff770:
    // 0x2ff770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ff770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff774:
    // 0x2ff774: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ff774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ff778:
    // 0x2ff778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff77c:
    // 0x2ff77c: 0xc0b570a  jal         func_2D5C28
label_2ff780:
    if (ctx->pc == 0x2FF780u) {
        ctx->pc = 0x2FF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF77Cu;
        // 0x2ff780: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF784u;
        goto label_2ff784;
    }
    ctx->pc = 0x2FF77Cu;
    SET_GPR_U32(ctx, 31, 0x2FF784u);
    ctx->pc = 0x2FF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF77Cu;
    // 0x2ff780: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C28u, 0x2FF77Cu, 0x2FF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF784u;
label_2ff784:
    // 0x2ff784: 0x10000038  b           . + 4 + (0x38 << 2)
label_2ff788:
    if (ctx->pc == 0x2FF788u) {
        ctx->pc = 0x2FF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF784u;
        // 0x2ff788: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF78Cu;
        goto label_2ff78c;
    }
    ctx->pc = 0x2FF784u;
    {
        const bool branch_taken_0x2ff784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF784u;
        // 0x2ff788: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff784) {
            ctx->pc = 0x2FF868u;
            goto label_2ff868;
        }
    }
    ctx->pc = 0x2FF78Cu;
label_2ff78c:
    // 0x2ff78c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2ff78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2ff790:
    // 0x2ff790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff794:
    // 0x2ff794: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_2ff798:
    if (ctx->pc == 0x2FF798u) {
        ctx->pc = 0x2FF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF794u;
        // 0x2ff798: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF79Cu;
        goto label_2ff79c;
    }
    ctx->pc = 0x2FF794u;
    {
        const bool branch_taken_0x2ff794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff794) {
            ctx->pc = 0x2FF798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF794u;
            // 0x2ff798: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF7DCu;
            goto label_2ff7dc;
        }
    }
    ctx->pc = 0x2FF79Cu;
label_2ff79c:
    // 0x2ff79c: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x2ff79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_2ff7a0:
    // 0x2ff7a0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ff7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2ff7a4:
    // 0x2ff7a4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2ff7a8:
    if (ctx->pc == 0x2FF7A8u) {
        ctx->pc = 0x2FF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7A4u;
        // 0x2ff7a8: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7ACu;
        goto label_2ff7ac;
    }
    ctx->pc = 0x2FF7A4u;
    {
        const bool branch_taken_0x2ff7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff7a4) {
            ctx->pc = 0x2FF7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF7A4u;
            // 0x2ff7a8: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF7DCu;
            goto label_2ff7dc;
        }
    }
    ctx->pc = 0x2FF7ACu;
label_2ff7ac:
    // 0x2ff7ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ff7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff7b0:
    // 0x2ff7b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff7b4:
    // 0x2ff7b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff7b8:
    // 0x2ff7b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff7bc:
    // 0x2ff7bc: 0x40f809  jalr        $v0
label_2ff7c0:
    if (ctx->pc == 0x2FF7C0u) {
        ctx->pc = 0x2FF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7BCu;
        // 0x2ff7c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7C4u;
        goto label_2ff7c4;
    }
    ctx->pc = 0x2FF7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF7C4u);
        ctx->pc = 0x2FF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7BCu;
        // 0x2ff7c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF7BCu, 0x2FF7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF7C4u;
label_2ff7c4:
    // 0x2ff7c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ff7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7c8:
    // 0x2ff7c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ff7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7cc:
    // 0x2ff7cc: 0xc0aa924  jal         func_2AA490
label_2ff7d0:
    if (ctx->pc == 0x2FF7D0u) {
        ctx->pc = 0x2FF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7CCu;
        // 0x2ff7d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7D4u;
        goto label_2ff7d4;
    }
    ctx->pc = 0x2FF7CCu;
    SET_GPR_U32(ctx, 31, 0x2FF7D4u);
    ctx->pc = 0x2FF7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7CCu;
    // 0x2ff7d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA490u, 0x2FF7CCu, 0x2FF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7D4u;
label_2ff7d4:
    // 0x2ff7d4: 0x10000024  b           . + 4 + (0x24 << 2)
label_2ff7d8:
    if (ctx->pc == 0x2FF7D8u) {
        ctx->pc = 0x2FF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7D4u;
        // 0x2ff7d8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7DCu;
        goto label_2ff7dc;
    }
    ctx->pc = 0x2FF7D4u;
    {
        const bool branch_taken_0x2ff7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7D4u;
        // 0x2ff7d8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7d4) {
            ctx->pc = 0x2FF868u;
            goto label_2ff868;
        }
    }
    ctx->pc = 0x2FF7DCu;
label_2ff7dc:
    // 0x2ff7dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2ff7e0:
    if (ctx->pc == 0x2FF7E0u) {
        ctx->pc = 0x2FF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7DCu;
        // 0x2ff7e0: 0x9223002c  lbu         $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7E4u;
        goto label_2ff7e4;
    }
    ctx->pc = 0x2FF7DCu;
    {
        const bool branch_taken_0x2ff7dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7DCu;
        // 0x2ff7e0: 0x9223002c  lbu         $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7dc) {
            ctx->pc = 0x2FF7F4u;
            goto label_2ff7f4;
        }
    }
    ctx->pc = 0x2FF7E4u;
label_2ff7e4:
    // 0x2ff7e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ff7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ff7e8:
    // 0x2ff7e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ff7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ff7ec:
    // 0x2ff7ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff7f0:
    if (ctx->pc == 0x2FF7F0u) {
        ctx->pc = 0x2FF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7ECu;
        // 0x2ff7f0: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7F4u;
        goto label_2ff7f4;
    }
    ctx->pc = 0x2FF7ECu;
    {
        const bool branch_taken_0x2ff7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7ECu;
        // 0x2ff7f0: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7ec) {
            ctx->pc = 0x2FF7F8u;
            goto label_2ff7f8;
        }
    }
    ctx->pc = 0x2FF7F4u;
label_2ff7f4:
    // 0x2ff7f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ff7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7f8:
    // 0x2ff7f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2ff7fc:
    if (ctx->pc == 0x2FF7FCu) {
        ctx->pc = 0x2FF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7F8u;
        // 0x2ff7fc: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF800u;
        goto label_2ff800;
    }
    ctx->pc = 0x2FF7F8u;
    {
        const bool branch_taken_0x2ff7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7F8u;
        // 0x2ff7fc: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7f8) {
            ctx->pc = 0x2FF83Cu;
            goto label_2ff83c;
        }
    }
    ctx->pc = 0x2FF800u;
label_2ff800:
    // 0x2ff800: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ff800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ff804:
    // 0x2ff804: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ff808:
    if (ctx->pc == 0x2FF808u) {
        ctx->pc = 0x2FF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF804u;
        // 0x2ff808: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF80Cu;
        goto label_2ff80c;
    }
    ctx->pc = 0x2FF804u;
    {
        const bool branch_taken_0x2ff804 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF804u;
        // 0x2ff808: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff804) {
            ctx->pc = 0x2FF818u;
            goto label_2ff818;
        }
    }
    ctx->pc = 0x2FF80Cu;
label_2ff80c:
    // 0x2ff80c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ff80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ff810:
    // 0x2ff810: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff814:
    if (ctx->pc == 0x2FF814u) {
        ctx->pc = 0x2FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF810u;
        // 0x2ff814: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF818u;
        goto label_2ff818;
    }
    ctx->pc = 0x2FF810u;
    {
        const bool branch_taken_0x2ff810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF810u;
        // 0x2ff814: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff810) {
            ctx->pc = 0x2FF81Cu;
            goto label_2ff81c;
        }
    }
    ctx->pc = 0x2FF818u;
label_2ff818:
    // 0x2ff818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff81c:
    // 0x2ff81c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ff81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ff820:
    // 0x2ff820: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff824:
    // 0x2ff824: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff828:
    // 0x2ff828: 0x40f809  jalr        $v0
label_2ff82c:
    if (ctx->pc == 0x2FF82Cu) {
        ctx->pc = 0x2FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF828u;
        // 0x2ff82c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF830u;
        goto label_2ff830;
    }
    ctx->pc = 0x2FF828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF830u);
        ctx->pc = 0x2FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF828u;
        // 0x2ff82c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF828u, 0x2FF830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF830u;
label_2ff830:
    // 0x2ff830: 0x3842006c  xori        $v0, $v0, 0x6C
    ctx->pc = 0x2ff830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)108);
label_2ff834:
    // 0x2ff834: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ff838:
    if (ctx->pc == 0x2FF838u) {
        ctx->pc = 0x2FF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF834u;
        // 0x2ff838: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF83Cu;
        goto label_2ff83c;
    }
    ctx->pc = 0x2FF834u;
    {
        const bool branch_taken_0x2ff834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF834u;
        // 0x2ff838: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff834) {
            ctx->pc = 0x2FF868u;
            goto label_2ff868;
        }
    }
    ctx->pc = 0x2FF83Cu;
label_2ff83c:
    // 0x2ff83c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ff83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff840:
    // 0x2ff840: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff844:
    // 0x2ff844: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff848:
    // 0x2ff848: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff84c:
    // 0x2ff84c: 0x40f809  jalr        $v0
label_2ff850:
    if (ctx->pc == 0x2FF850u) {
        ctx->pc = 0x2FF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF84Cu;
        // 0x2ff850: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF854u;
        goto label_2ff854;
    }
    ctx->pc = 0x2FF84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF854u);
        ctx->pc = 0x2FF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF84Cu;
        // 0x2ff850: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF84Cu, 0x2FF854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF854u;
label_2ff854:
    // 0x2ff854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ff854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff858:
    // 0x2ff858: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ff858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ff85c:
    // 0x2ff85c: 0xc0aa756  jal         func_2A9D58
label_2ff860:
    if (ctx->pc == 0x2FF860u) {
        ctx->pc = 0x2FF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF85Cu;
        // 0x2ff860: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF864u;
        goto label_2ff864;
    }
    ctx->pc = 0x2FF85Cu;
    SET_GPR_U32(ctx, 31, 0x2FF864u);
    ctx->pc = 0x2FF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF85Cu;
    // 0x2ff860: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D58u, 0x2FF85Cu, 0x2FF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF864u;
label_2ff864:
    // 0x2ff864: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2ff864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2ff868:
    // 0x2ff868: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2ff868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2ff86c:
    // 0x2ff86c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2ff86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2ff870:
    // 0x2ff870: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2ff870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ff874:
    // 0x2ff874: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2ff874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ff878:
    // 0x2ff878: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2ff878u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ff87c:
    // 0x2ff87c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2ff87cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ff880:
    // 0x2ff880: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ff880u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ff884:
    // 0x2ff884: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2ff884u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ff888:
    // 0x2ff888: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ff888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ff88c:
    // 0x2ff88c: 0x3e00008  jr          $ra
label_2ff890:
    if (ctx->pc == 0x2FF890u) {
        ctx->pc = 0x2FF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF88Cu;
        // 0x2ff890: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF894u;
        goto label_2ff894;
    }
    ctx->pc = 0x2FF88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF88Cu;
        // 0x2ff890: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF894u;
label_2ff894:
    // 0x2ff894: 0x0  nop
    ctx->pc = 0x2ff894u;
    // NOP
    ctx->pc = 0x2ff898u;
}
