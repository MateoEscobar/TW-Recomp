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

// Function: sub_001CA2D0
// Address: 0x1ca2d0 - 0x1ca898
void sub_001CA2D0_0x1ca2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA2D0_0x1ca2d0");
#endif

    switch (ctx->pc) {
        case 0x1ca2d0u: goto label_1ca2d0;
        case 0x1ca2d4u: goto label_1ca2d4;
        case 0x1ca2d8u: goto label_1ca2d8;
        case 0x1ca2dcu: goto label_1ca2dc;
        case 0x1ca2e0u: goto label_1ca2e0;
        case 0x1ca2e4u: goto label_1ca2e4;
        case 0x1ca2e8u: goto label_1ca2e8;
        case 0x1ca2ecu: goto label_1ca2ec;
        case 0x1ca2f0u: goto label_1ca2f0;
        case 0x1ca2f4u: goto label_1ca2f4;
        case 0x1ca2f8u: goto label_1ca2f8;
        case 0x1ca2fcu: goto label_1ca2fc;
        case 0x1ca300u: goto label_1ca300;
        case 0x1ca304u: goto label_1ca304;
        case 0x1ca308u: goto label_1ca308;
        case 0x1ca30cu: goto label_1ca30c;
        case 0x1ca310u: goto label_1ca310;
        case 0x1ca314u: goto label_1ca314;
        case 0x1ca318u: goto label_1ca318;
        case 0x1ca31cu: goto label_1ca31c;
        case 0x1ca320u: goto label_1ca320;
        case 0x1ca324u: goto label_1ca324;
        case 0x1ca328u: goto label_1ca328;
        case 0x1ca32cu: goto label_1ca32c;
        case 0x1ca330u: goto label_1ca330;
        case 0x1ca334u: goto label_1ca334;
        case 0x1ca338u: goto label_1ca338;
        case 0x1ca33cu: goto label_1ca33c;
        case 0x1ca340u: goto label_1ca340;
        case 0x1ca344u: goto label_1ca344;
        case 0x1ca348u: goto label_1ca348;
        case 0x1ca34cu: goto label_1ca34c;
        case 0x1ca350u: goto label_1ca350;
        case 0x1ca354u: goto label_1ca354;
        case 0x1ca358u: goto label_1ca358;
        case 0x1ca35cu: goto label_1ca35c;
        case 0x1ca360u: goto label_1ca360;
        case 0x1ca364u: goto label_1ca364;
        case 0x1ca368u: goto label_1ca368;
        case 0x1ca36cu: goto label_1ca36c;
        case 0x1ca370u: goto label_1ca370;
        case 0x1ca374u: goto label_1ca374;
        case 0x1ca378u: goto label_1ca378;
        case 0x1ca37cu: goto label_1ca37c;
        case 0x1ca380u: goto label_1ca380;
        case 0x1ca384u: goto label_1ca384;
        case 0x1ca388u: goto label_1ca388;
        case 0x1ca38cu: goto label_1ca38c;
        case 0x1ca390u: goto label_1ca390;
        case 0x1ca394u: goto label_1ca394;
        case 0x1ca398u: goto label_1ca398;
        case 0x1ca39cu: goto label_1ca39c;
        case 0x1ca3a0u: goto label_1ca3a0;
        case 0x1ca3a4u: goto label_1ca3a4;
        case 0x1ca3a8u: goto label_1ca3a8;
        case 0x1ca3acu: goto label_1ca3ac;
        case 0x1ca3b0u: goto label_1ca3b0;
        case 0x1ca3b4u: goto label_1ca3b4;
        case 0x1ca3b8u: goto label_1ca3b8;
        case 0x1ca3bcu: goto label_1ca3bc;
        case 0x1ca3c0u: goto label_1ca3c0;
        case 0x1ca3c4u: goto label_1ca3c4;
        case 0x1ca3c8u: goto label_1ca3c8;
        case 0x1ca3ccu: goto label_1ca3cc;
        case 0x1ca3d0u: goto label_1ca3d0;
        case 0x1ca3d4u: goto label_1ca3d4;
        case 0x1ca3d8u: goto label_1ca3d8;
        case 0x1ca3dcu: goto label_1ca3dc;
        case 0x1ca3e0u: goto label_1ca3e0;
        case 0x1ca3e4u: goto label_1ca3e4;
        case 0x1ca3e8u: goto label_1ca3e8;
        case 0x1ca3ecu: goto label_1ca3ec;
        case 0x1ca3f0u: goto label_1ca3f0;
        case 0x1ca3f4u: goto label_1ca3f4;
        case 0x1ca3f8u: goto label_1ca3f8;
        case 0x1ca3fcu: goto label_1ca3fc;
        case 0x1ca400u: goto label_1ca400;
        case 0x1ca404u: goto label_1ca404;
        case 0x1ca408u: goto label_1ca408;
        case 0x1ca40cu: goto label_1ca40c;
        case 0x1ca410u: goto label_1ca410;
        case 0x1ca414u: goto label_1ca414;
        case 0x1ca418u: goto label_1ca418;
        case 0x1ca41cu: goto label_1ca41c;
        case 0x1ca420u: goto label_1ca420;
        case 0x1ca424u: goto label_1ca424;
        case 0x1ca428u: goto label_1ca428;
        case 0x1ca42cu: goto label_1ca42c;
        case 0x1ca430u: goto label_1ca430;
        case 0x1ca434u: goto label_1ca434;
        case 0x1ca438u: goto label_1ca438;
        case 0x1ca43cu: goto label_1ca43c;
        case 0x1ca440u: goto label_1ca440;
        case 0x1ca444u: goto label_1ca444;
        case 0x1ca448u: goto label_1ca448;
        case 0x1ca44cu: goto label_1ca44c;
        case 0x1ca450u: goto label_1ca450;
        case 0x1ca454u: goto label_1ca454;
        case 0x1ca458u: goto label_1ca458;
        case 0x1ca45cu: goto label_1ca45c;
        case 0x1ca460u: goto label_1ca460;
        case 0x1ca464u: goto label_1ca464;
        case 0x1ca468u: goto label_1ca468;
        case 0x1ca46cu: goto label_1ca46c;
        case 0x1ca470u: goto label_1ca470;
        case 0x1ca474u: goto label_1ca474;
        case 0x1ca478u: goto label_1ca478;
        case 0x1ca47cu: goto label_1ca47c;
        case 0x1ca480u: goto label_1ca480;
        case 0x1ca484u: goto label_1ca484;
        case 0x1ca488u: goto label_1ca488;
        case 0x1ca48cu: goto label_1ca48c;
        case 0x1ca490u: goto label_1ca490;
        case 0x1ca494u: goto label_1ca494;
        case 0x1ca498u: goto label_1ca498;
        case 0x1ca49cu: goto label_1ca49c;
        case 0x1ca4a0u: goto label_1ca4a0;
        case 0x1ca4a4u: goto label_1ca4a4;
        case 0x1ca4a8u: goto label_1ca4a8;
        case 0x1ca4acu: goto label_1ca4ac;
        case 0x1ca4b0u: goto label_1ca4b0;
        case 0x1ca4b4u: goto label_1ca4b4;
        case 0x1ca4b8u: goto label_1ca4b8;
        case 0x1ca4bcu: goto label_1ca4bc;
        case 0x1ca4c0u: goto label_1ca4c0;
        case 0x1ca4c4u: goto label_1ca4c4;
        case 0x1ca4c8u: goto label_1ca4c8;
        case 0x1ca4ccu: goto label_1ca4cc;
        case 0x1ca4d0u: goto label_1ca4d0;
        case 0x1ca4d4u: goto label_1ca4d4;
        case 0x1ca4d8u: goto label_1ca4d8;
        case 0x1ca4dcu: goto label_1ca4dc;
        case 0x1ca4e0u: goto label_1ca4e0;
        case 0x1ca4e4u: goto label_1ca4e4;
        case 0x1ca4e8u: goto label_1ca4e8;
        case 0x1ca4ecu: goto label_1ca4ec;
        case 0x1ca4f0u: goto label_1ca4f0;
        case 0x1ca4f4u: goto label_1ca4f4;
        case 0x1ca4f8u: goto label_1ca4f8;
        case 0x1ca4fcu: goto label_1ca4fc;
        case 0x1ca500u: goto label_1ca500;
        case 0x1ca504u: goto label_1ca504;
        case 0x1ca508u: goto label_1ca508;
        case 0x1ca50cu: goto label_1ca50c;
        case 0x1ca510u: goto label_1ca510;
        case 0x1ca514u: goto label_1ca514;
        case 0x1ca518u: goto label_1ca518;
        case 0x1ca51cu: goto label_1ca51c;
        case 0x1ca520u: goto label_1ca520;
        case 0x1ca524u: goto label_1ca524;
        case 0x1ca528u: goto label_1ca528;
        case 0x1ca52cu: goto label_1ca52c;
        case 0x1ca530u: goto label_1ca530;
        case 0x1ca534u: goto label_1ca534;
        case 0x1ca538u: goto label_1ca538;
        case 0x1ca53cu: goto label_1ca53c;
        case 0x1ca540u: goto label_1ca540;
        case 0x1ca544u: goto label_1ca544;
        case 0x1ca548u: goto label_1ca548;
        case 0x1ca54cu: goto label_1ca54c;
        case 0x1ca550u: goto label_1ca550;
        case 0x1ca554u: goto label_1ca554;
        case 0x1ca558u: goto label_1ca558;
        case 0x1ca55cu: goto label_1ca55c;
        case 0x1ca560u: goto label_1ca560;
        case 0x1ca564u: goto label_1ca564;
        case 0x1ca568u: goto label_1ca568;
        case 0x1ca56cu: goto label_1ca56c;
        case 0x1ca570u: goto label_1ca570;
        case 0x1ca574u: goto label_1ca574;
        case 0x1ca578u: goto label_1ca578;
        case 0x1ca57cu: goto label_1ca57c;
        case 0x1ca580u: goto label_1ca580;
        case 0x1ca584u: goto label_1ca584;
        case 0x1ca588u: goto label_1ca588;
        case 0x1ca58cu: goto label_1ca58c;
        case 0x1ca590u: goto label_1ca590;
        case 0x1ca594u: goto label_1ca594;
        case 0x1ca598u: goto label_1ca598;
        case 0x1ca59cu: goto label_1ca59c;
        case 0x1ca5a0u: goto label_1ca5a0;
        case 0x1ca5a4u: goto label_1ca5a4;
        case 0x1ca5a8u: goto label_1ca5a8;
        case 0x1ca5acu: goto label_1ca5ac;
        case 0x1ca5b0u: goto label_1ca5b0;
        case 0x1ca5b4u: goto label_1ca5b4;
        case 0x1ca5b8u: goto label_1ca5b8;
        case 0x1ca5bcu: goto label_1ca5bc;
        case 0x1ca5c0u: goto label_1ca5c0;
        case 0x1ca5c4u: goto label_1ca5c4;
        case 0x1ca5c8u: goto label_1ca5c8;
        case 0x1ca5ccu: goto label_1ca5cc;
        case 0x1ca5d0u: goto label_1ca5d0;
        case 0x1ca5d4u: goto label_1ca5d4;
        case 0x1ca5d8u: goto label_1ca5d8;
        case 0x1ca5dcu: goto label_1ca5dc;
        case 0x1ca5e0u: goto label_1ca5e0;
        case 0x1ca5e4u: goto label_1ca5e4;
        case 0x1ca5e8u: goto label_1ca5e8;
        case 0x1ca5ecu: goto label_1ca5ec;
        case 0x1ca5f0u: goto label_1ca5f0;
        case 0x1ca5f4u: goto label_1ca5f4;
        case 0x1ca5f8u: goto label_1ca5f8;
        case 0x1ca5fcu: goto label_1ca5fc;
        case 0x1ca600u: goto label_1ca600;
        case 0x1ca604u: goto label_1ca604;
        case 0x1ca608u: goto label_1ca608;
        case 0x1ca60cu: goto label_1ca60c;
        case 0x1ca610u: goto label_1ca610;
        case 0x1ca614u: goto label_1ca614;
        case 0x1ca618u: goto label_1ca618;
        case 0x1ca61cu: goto label_1ca61c;
        case 0x1ca620u: goto label_1ca620;
        case 0x1ca624u: goto label_1ca624;
        case 0x1ca628u: goto label_1ca628;
        case 0x1ca62cu: goto label_1ca62c;
        case 0x1ca630u: goto label_1ca630;
        case 0x1ca634u: goto label_1ca634;
        case 0x1ca638u: goto label_1ca638;
        case 0x1ca63cu: goto label_1ca63c;
        case 0x1ca640u: goto label_1ca640;
        case 0x1ca644u: goto label_1ca644;
        case 0x1ca648u: goto label_1ca648;
        case 0x1ca64cu: goto label_1ca64c;
        case 0x1ca650u: goto label_1ca650;
        case 0x1ca654u: goto label_1ca654;
        case 0x1ca658u: goto label_1ca658;
        case 0x1ca65cu: goto label_1ca65c;
        case 0x1ca660u: goto label_1ca660;
        case 0x1ca664u: goto label_1ca664;
        case 0x1ca668u: goto label_1ca668;
        case 0x1ca66cu: goto label_1ca66c;
        case 0x1ca670u: goto label_1ca670;
        case 0x1ca674u: goto label_1ca674;
        case 0x1ca678u: goto label_1ca678;
        case 0x1ca67cu: goto label_1ca67c;
        case 0x1ca680u: goto label_1ca680;
        case 0x1ca684u: goto label_1ca684;
        case 0x1ca688u: goto label_1ca688;
        case 0x1ca68cu: goto label_1ca68c;
        case 0x1ca690u: goto label_1ca690;
        case 0x1ca694u: goto label_1ca694;
        case 0x1ca698u: goto label_1ca698;
        case 0x1ca69cu: goto label_1ca69c;
        case 0x1ca6a0u: goto label_1ca6a0;
        case 0x1ca6a4u: goto label_1ca6a4;
        case 0x1ca6a8u: goto label_1ca6a8;
        case 0x1ca6acu: goto label_1ca6ac;
        case 0x1ca6b0u: goto label_1ca6b0;
        case 0x1ca6b4u: goto label_1ca6b4;
        case 0x1ca6b8u: goto label_1ca6b8;
        case 0x1ca6bcu: goto label_1ca6bc;
        case 0x1ca6c0u: goto label_1ca6c0;
        case 0x1ca6c4u: goto label_1ca6c4;
        case 0x1ca6c8u: goto label_1ca6c8;
        case 0x1ca6ccu: goto label_1ca6cc;
        case 0x1ca6d0u: goto label_1ca6d0;
        case 0x1ca6d4u: goto label_1ca6d4;
        case 0x1ca6d8u: goto label_1ca6d8;
        case 0x1ca6dcu: goto label_1ca6dc;
        case 0x1ca6e0u: goto label_1ca6e0;
        case 0x1ca6e4u: goto label_1ca6e4;
        case 0x1ca6e8u: goto label_1ca6e8;
        case 0x1ca6ecu: goto label_1ca6ec;
        case 0x1ca6f0u: goto label_1ca6f0;
        case 0x1ca6f4u: goto label_1ca6f4;
        case 0x1ca6f8u: goto label_1ca6f8;
        case 0x1ca6fcu: goto label_1ca6fc;
        case 0x1ca700u: goto label_1ca700;
        case 0x1ca704u: goto label_1ca704;
        case 0x1ca708u: goto label_1ca708;
        case 0x1ca70cu: goto label_1ca70c;
        case 0x1ca710u: goto label_1ca710;
        case 0x1ca714u: goto label_1ca714;
        case 0x1ca718u: goto label_1ca718;
        case 0x1ca71cu: goto label_1ca71c;
        case 0x1ca720u: goto label_1ca720;
        case 0x1ca724u: goto label_1ca724;
        case 0x1ca728u: goto label_1ca728;
        case 0x1ca72cu: goto label_1ca72c;
        case 0x1ca730u: goto label_1ca730;
        case 0x1ca734u: goto label_1ca734;
        case 0x1ca738u: goto label_1ca738;
        case 0x1ca73cu: goto label_1ca73c;
        case 0x1ca740u: goto label_1ca740;
        case 0x1ca744u: goto label_1ca744;
        case 0x1ca748u: goto label_1ca748;
        case 0x1ca74cu: goto label_1ca74c;
        case 0x1ca750u: goto label_1ca750;
        case 0x1ca754u: goto label_1ca754;
        case 0x1ca758u: goto label_1ca758;
        case 0x1ca75cu: goto label_1ca75c;
        case 0x1ca760u: goto label_1ca760;
        case 0x1ca764u: goto label_1ca764;
        case 0x1ca768u: goto label_1ca768;
        case 0x1ca76cu: goto label_1ca76c;
        case 0x1ca770u: goto label_1ca770;
        case 0x1ca774u: goto label_1ca774;
        case 0x1ca778u: goto label_1ca778;
        case 0x1ca77cu: goto label_1ca77c;
        case 0x1ca780u: goto label_1ca780;
        case 0x1ca784u: goto label_1ca784;
        case 0x1ca788u: goto label_1ca788;
        case 0x1ca78cu: goto label_1ca78c;
        case 0x1ca790u: goto label_1ca790;
        case 0x1ca794u: goto label_1ca794;
        case 0x1ca798u: goto label_1ca798;
        case 0x1ca79cu: goto label_1ca79c;
        case 0x1ca7a0u: goto label_1ca7a0;
        case 0x1ca7a4u: goto label_1ca7a4;
        case 0x1ca7a8u: goto label_1ca7a8;
        case 0x1ca7acu: goto label_1ca7ac;
        case 0x1ca7b0u: goto label_1ca7b0;
        case 0x1ca7b4u: goto label_1ca7b4;
        case 0x1ca7b8u: goto label_1ca7b8;
        case 0x1ca7bcu: goto label_1ca7bc;
        case 0x1ca7c0u: goto label_1ca7c0;
        case 0x1ca7c4u: goto label_1ca7c4;
        case 0x1ca7c8u: goto label_1ca7c8;
        case 0x1ca7ccu: goto label_1ca7cc;
        case 0x1ca7d0u: goto label_1ca7d0;
        case 0x1ca7d4u: goto label_1ca7d4;
        case 0x1ca7d8u: goto label_1ca7d8;
        case 0x1ca7dcu: goto label_1ca7dc;
        case 0x1ca7e0u: goto label_1ca7e0;
        case 0x1ca7e4u: goto label_1ca7e4;
        case 0x1ca7e8u: goto label_1ca7e8;
        case 0x1ca7ecu: goto label_1ca7ec;
        case 0x1ca7f0u: goto label_1ca7f0;
        case 0x1ca7f4u: goto label_1ca7f4;
        case 0x1ca7f8u: goto label_1ca7f8;
        case 0x1ca7fcu: goto label_1ca7fc;
        case 0x1ca800u: goto label_1ca800;
        case 0x1ca804u: goto label_1ca804;
        case 0x1ca808u: goto label_1ca808;
        case 0x1ca80cu: goto label_1ca80c;
        case 0x1ca810u: goto label_1ca810;
        case 0x1ca814u: goto label_1ca814;
        case 0x1ca818u: goto label_1ca818;
        case 0x1ca81cu: goto label_1ca81c;
        case 0x1ca820u: goto label_1ca820;
        case 0x1ca824u: goto label_1ca824;
        case 0x1ca828u: goto label_1ca828;
        case 0x1ca82cu: goto label_1ca82c;
        case 0x1ca830u: goto label_1ca830;
        case 0x1ca834u: goto label_1ca834;
        case 0x1ca838u: goto label_1ca838;
        case 0x1ca83cu: goto label_1ca83c;
        case 0x1ca840u: goto label_1ca840;
        case 0x1ca844u: goto label_1ca844;
        case 0x1ca848u: goto label_1ca848;
        case 0x1ca84cu: goto label_1ca84c;
        case 0x1ca850u: goto label_1ca850;
        case 0x1ca854u: goto label_1ca854;
        case 0x1ca858u: goto label_1ca858;
        case 0x1ca85cu: goto label_1ca85c;
        case 0x1ca860u: goto label_1ca860;
        case 0x1ca864u: goto label_1ca864;
        case 0x1ca868u: goto label_1ca868;
        case 0x1ca86cu: goto label_1ca86c;
        case 0x1ca870u: goto label_1ca870;
        case 0x1ca874u: goto label_1ca874;
        case 0x1ca878u: goto label_1ca878;
        case 0x1ca87cu: goto label_1ca87c;
        case 0x1ca880u: goto label_1ca880;
        case 0x1ca884u: goto label_1ca884;
        case 0x1ca888u: goto label_1ca888;
        case 0x1ca88cu: goto label_1ca88c;
        case 0x1ca890u: goto label_1ca890;
        case 0x1ca894u: goto label_1ca894;
        default: break;
    }

    ctx->pc = 0x1ca2d0u;

label_1ca2d0:
    // 0x1ca2d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ca2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1ca2d4:
    // 0x1ca2d4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1ca2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1ca2d8:
    // 0x1ca2d8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1ca2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1ca2dc:
    // 0x1ca2dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ca2dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca2e0:
    // 0x1ca2e0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1ca2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1ca2e4:
    // 0x1ca2e4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1ca2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1ca2e8:
    // 0x1ca2e8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1ca2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1ca2ec:
    // 0x1ca2ec: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1ca2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1ca2f0:
    // 0x1ca2f0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ca2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1ca2f4:
    // 0x1ca2f4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1ca2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1ca2f8:
    // 0x1ca2f8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1ca2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1ca2fc:
    // 0x1ca2fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ca2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ca300:
    // 0x1ca300: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ca300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1ca304:
    // 0x1ca304: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1ca304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ca308:
    // 0x1ca308: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ca30c:
    // 0x1ca30c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ca30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ca310:
    // 0x1ca310: 0x40f809  jalr        $v0
label_1ca314:
    if (ctx->pc == 0x1CA314u) {
        ctx->pc = 0x1CA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA310u;
        // 0x1ca314: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA318u;
        goto label_1ca318;
    }
    ctx->pc = 0x1CA310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA318u);
        ctx->pc = 0x1CA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA310u;
        // 0x1ca314: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA310u, 0x1CA318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA318u;
label_1ca318:
    // 0x1ca318: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
label_1ca31c:
    if (ctx->pc == 0x1CA31Cu) {
        ctx->pc = 0x1CA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA318u;
        // 0x1ca31c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA320u;
        goto label_1ca320;
    }
    ctx->pc = 0x1CA318u;
    {
        const bool branch_taken_0x1ca318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA318u;
        // 0x1ca31c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca318) {
            ctx->pc = 0x1CA864u;
            goto label_1ca864;
        }
    }
    ctx->pc = 0x1CA320u;
label_1ca320:
    // 0x1ca320: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ca320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ca324:
    // 0x1ca324: 0xc07265e  jal         func_1C9978
label_1ca328:
    if (ctx->pc == 0x1CA328u) {
        ctx->pc = 0x1CA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA324u;
        // 0x1ca328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA32Cu;
        goto label_1ca32c;
    }
    ctx->pc = 0x1CA324u;
    SET_GPR_U32(ctx, 31, 0x1CA32Cu);
    ctx->pc = 0x1CA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA324u;
    // 0x1ca328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9978u, 0x1CA324u, 0x1CA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA32Cu;
label_1ca32c:
    // 0x1ca32c: 0x269009f0  addiu       $s0, $s4, 0x9F0
    ctx->pc = 0x1ca32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2544));
label_1ca330:
    // 0x1ca330: 0xc68c0b00  lwc1        $f12, 0xB00($s4)
    ctx->pc = 0x1ca330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ca334:
    // 0x1ca334: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ca334u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1ca338:
    // 0x1ca338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca33c:
    // 0x1ca33c: 0xc068848  jal         func_1A2120
label_1ca340:
    if (ctx->pc == 0x1CA340u) {
        ctx->pc = 0x1CA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA33Cu;
        // 0x1ca340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA344u;
        goto label_1ca344;
    }
    ctx->pc = 0x1CA33Cu;
    SET_GPR_U32(ctx, 31, 0x1CA344u);
    ctx->pc = 0x1CA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA33Cu;
    // 0x1ca340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1CA33Cu, 0x1CA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA344u;
label_1ca344:
    // 0x1ca344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca348:
    // 0x1ca348: 0x26850af0  addiu       $a1, $s4, 0xAF0
    ctx->pc = 0x1ca348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2800));
label_1ca34c:
    // 0x1ca34c: 0xc068818  jal         func_1A2060
label_1ca350:
    if (ctx->pc == 0x1CA350u) {
        ctx->pc = 0x1CA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA34Cu;
        // 0x1ca350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA354u;
        goto label_1ca354;
    }
    ctx->pc = 0x1CA34Cu;
    SET_GPR_U32(ctx, 31, 0x1CA354u);
    ctx->pc = 0x1CA350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA34Cu;
    // 0x1ca350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1CA34Cu, 0x1CA354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA354u;
label_1ca354:
    // 0x1ca354: 0xc06886e  jal         func_1A21B8
label_1ca358:
    if (ctx->pc == 0x1CA358u) {
        ctx->pc = 0x1CA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA354u;
        // 0x1ca358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA35Cu;
        goto label_1ca35c;
    }
    ctx->pc = 0x1CA354u;
    SET_GPR_U32(ctx, 31, 0x1CA35Cu);
    ctx->pc = 0x1CA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA354u;
    // 0x1ca358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1CA354u, 0x1CA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA35Cu;
label_1ca35c:
    // 0x1ca35c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1ca35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1ca360:
    // 0x1ca360: 0x54400140  bnel        $v0, $zero, . + 4 + (0x140 << 2)
label_1ca364:
    if (ctx->pc == 0x1CA364u) {
        ctx->pc = 0x1CA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA360u;
        // 0x1ca364: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA368u;
        goto label_1ca368;
    }
    ctx->pc = 0x1CA360u;
    {
        const bool branch_taken_0x1ca360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca360) {
            ctx->pc = 0x1CA364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA360u;
            // 0x1ca364: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA864u;
            goto label_1ca864;
        }
    }
    ctx->pc = 0x1CA368u;
label_1ca368:
    // 0x1ca368: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ca368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ca36c:
    // 0x1ca36c: 0x24160140  addiu       $s6, $zero, 0x140
    ctx->pc = 0x1ca36cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1ca370:
    // 0x1ca370: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1ca370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1ca374:
    // 0x1ca374: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1ca378:
    // 0x1ca378: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ca37c:
    // 0x1ca37c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ca37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ca380:
    // 0x1ca380: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ca384:
    // 0x1ca384: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ca384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1ca388:
    // 0x1ca388: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ca38c:
    if (ctx->pc == 0x1CA38Cu) {
        ctx->pc = 0x1CA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA388u;
        // 0x1ca38c: 0x4600a186  mov.s       $f6, $f20 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA390u;
        goto label_1ca390;
    }
    ctx->pc = 0x1CA388u;
    {
        const bool branch_taken_0x1ca388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA388u;
        // 0x1ca38c: 0x4600a186  mov.s       $f6, $f20 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca388) {
            ctx->pc = 0x1CA3ACu;
            goto label_1ca3ac;
        }
    }
    ctx->pc = 0x1CA390u;
label_1ca390:
    // 0x1ca390: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ca390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1ca394:
    // 0x1ca394: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1ca394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1ca398:
    // 0x1ca398: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ca39c:
    // 0x1ca39c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ca39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ca3a0:
    // 0x1ca3a0: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1ca3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1ca3a4:
    // 0x1ca3a4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ca3a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ca3a8:
    // 0x1ca3a8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ca3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ca3ac:
    // 0x1ca3ac: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x1ca3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_1ca3b0:
    // 0x1ca3b0: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_1ca3b4:
    if (ctx->pc == 0x1CA3B4u) {
        ctx->pc = 0x1CA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3B0u;
        // 0x1ca3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA3B8u;
        goto label_1ca3b8;
    }
    ctx->pc = 0x1CA3B0u;
    {
        const bool branch_taken_0x1ca3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3B0u;
        // 0x1ca3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3b0) {
            ctx->pc = 0x1CA450u;
            goto label_1ca450;
        }
    }
    ctx->pc = 0x1CA3B8u;
label_1ca3b8:
    // 0x1ca3b8: 0xc6840af0  lwc1        $f4, 0xAF0($s4)
    ctx->pc = 0x1ca3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ca3bc:
    // 0x1ca3bc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1ca3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ca3c0:
    // 0x1ca3c0: 0xc6800b00  lwc1        $f0, 0xB00($s4)
    ctx->pc = 0x1ca3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca3c4:
    // 0x1ca3c4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ca3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ca3c8:
    // 0x1ca3c8: 0xc6810af8  lwc1        $f1, 0xAF8($s4)
    ctx->pc = 0x1ca3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca3cc:
    // 0x1ca3cc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3d0:
    // 0x1ca3d0: 0x46002080  add.s       $f2, $f4, $f0
    ctx->pc = 0x1ca3d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1ca3d4:
    // 0x1ca3d4: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ca3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ca3d8:
    // 0x1ca3d8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ca3d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ca3dc:
    // 0x1ca3dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ca3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ca3e0:
    // 0x1ca3e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ca3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1ca3e4:
    // 0x1ca3e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ca3e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ca3e8:
    // 0x1ca3e8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1ca3e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1ca3ec:
    // 0x1ca3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ca3f0:
    // 0x1ca3f0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ca3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ca3f4:
    // 0x1ca3f4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x1ca3f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_1ca3f8:
    // 0x1ca3f8: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1ca3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ca3fc:
    // 0x1ca3fc: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x1ca3fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_1ca400:
    // 0x1ca400: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ca400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ca404:
    // 0x1ca404: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1ca404u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ca408:
    // 0x1ca408: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1ca408u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ca40c:
    // 0x1ca40c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1ca40cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ca410:
    // 0x1ca410: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ca410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ca414:
    // 0x1ca414: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x1ca414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1ca418:
    // 0x1ca418: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1ca418u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1ca41c:
    // 0x1ca41c: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x1ca41cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ca420:
    // 0x1ca420: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1ca420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1ca424:
    // 0x1ca424: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ca424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ca428:
    // 0x1ca428: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ca428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ca42c:
    // 0x1ca42c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ca42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca430:
    // 0x1ca430: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1ca430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ca434:
    // 0x1ca434: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ca434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ca438:
    // 0x1ca438: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1ca438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca43c:
    // 0x1ca43c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1ca43cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1ca440:
    // 0x1ca440: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1ca440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ca444:
    // 0x1ca444: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ca444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ca448:
    // 0x1ca448: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1ca44c:
    if (ctx->pc == 0x1CA44Cu) {
        ctx->pc = 0x1CA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA448u;
        // 0x1ca44c: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA450u;
        goto label_1ca450;
    }
    ctx->pc = 0x1CA448u;
    {
        const bool branch_taken_0x1ca448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA448u;
        // 0x1ca44c: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca448) {
            ctx->pc = 0x1CA638u;
            goto label_1ca638;
        }
    }
    ctx->pc = 0x1CA450u;
label_1ca450:
    // 0x1ca450: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_1ca454:
    if (ctx->pc == 0x1CA454u) {
        ctx->pc = 0x1CA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA450u;
        // 0x1ca454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA458u;
        goto label_1ca458;
    }
    ctx->pc = 0x1CA450u;
    {
        const bool branch_taken_0x1ca450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA450u;
        // 0x1ca454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca450) {
            ctx->pc = 0x1CA4F8u;
            goto label_1ca4f8;
        }
    }
    ctx->pc = 0x1CA458u;
label_1ca458:
    // 0x1ca458: 0xc6840af0  lwc1        $f4, 0xAF0($s4)
    ctx->pc = 0x1ca458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ca45c:
    // 0x1ca45c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ca460:
    // 0x1ca460: 0xc6800b00  lwc1        $f0, 0xB00($s4)
    ctx->pc = 0x1ca460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca464:
    // 0x1ca464: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ca464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ca468:
    // 0x1ca468: 0xc6810af8  lwc1        $f1, 0xAF8($s4)
    ctx->pc = 0x1ca468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca46c:
    // 0x1ca46c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ca46cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca470:
    // 0x1ca470: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x1ca470u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1ca474:
    // 0x1ca474: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ca474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ca478:
    // 0x1ca478: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ca478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ca47c:
    // 0x1ca47c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ca47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ca480:
    // 0x1ca480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ca480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ca484:
    // 0x1ca484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ca488:
    // 0x1ca488: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ca488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ca48c:
    // 0x1ca48c: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1ca48cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1ca490:
    // 0x1ca490: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ca490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ca494:
    // 0x1ca494: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x1ca494u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1ca498:
    // 0x1ca498: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ca498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1ca49c:
    // 0x1ca49c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x1ca49cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_1ca4a0:
    // 0x1ca4a0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ca4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ca4a4:
    // 0x1ca4a4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1ca4a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ca4a8:
    // 0x1ca4a8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1ca4a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4ac:
    // 0x1ca4ac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1ca4acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ca4b0:
    // 0x1ca4b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ca4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ca4b4:
    // 0x1ca4b4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1ca4b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1ca4b8:
    // 0x1ca4b8: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x1ca4b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ca4bc:
    // 0x1ca4bc: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1ca4c0:
    // 0x1ca4c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ca4c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ca4c4:
    // 0x1ca4c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ca4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ca4c8:
    // 0x1ca4c8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ca4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca4cc:
    // 0x1ca4cc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1ca4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ca4d0:
    // 0x1ca4d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ca4d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ca4d4:
    // 0x1ca4d4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1ca4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca4d8:
    // 0x1ca4d8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1ca4d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1ca4dc:
    // 0x1ca4dc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1ca4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ca4e0:
    // 0x1ca4e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ca4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ca4e4:
    // 0x1ca4e4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1ca4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1ca4e8:
    // 0x1ca4e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ca4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1ca4ec:
    // 0x1ca4ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ca4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ca4f0:
    // 0x1ca4f0: 0x10000051  b           . + 4 + (0x51 << 2)
label_1ca4f4:
    if (ctx->pc == 0x1CA4F4u) {
        ctx->pc = 0x1CA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F0u;
        // 0x1ca4f4: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA4F8u;
        goto label_1ca4f8;
    }
    ctx->pc = 0x1CA4F0u;
    {
        const bool branch_taken_0x1ca4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F0u;
        // 0x1ca4f4: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f0) {
            ctx->pc = 0x1CA638u;
            goto label_1ca638;
        }
    }
    ctx->pc = 0x1CA4F8u;
label_1ca4f8:
    // 0x1ca4f8: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_1ca4fc:
    if (ctx->pc == 0x1CA4FCu) {
        ctx->pc = 0x1CA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F8u;
        // 0x1ca4fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA500u;
        goto label_1ca500;
    }
    ctx->pc = 0x1CA4F8u;
    {
        const bool branch_taken_0x1ca4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F8u;
        // 0x1ca4fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f8) {
            ctx->pc = 0x1CA5A0u;
            goto label_1ca5a0;
        }
    }
    ctx->pc = 0x1CA500u;
label_1ca500:
    // 0x1ca500: 0xc6840af0  lwc1        $f4, 0xAF0($s4)
    ctx->pc = 0x1ca500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ca504:
    // 0x1ca504: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1ca504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ca508:
    // 0x1ca508: 0xc6800b00  lwc1        $f0, 0xB00($s4)
    ctx->pc = 0x1ca508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca50c:
    // 0x1ca50c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ca50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ca510:
    // 0x1ca510: 0xc6810af8  lwc1        $f1, 0xAF8($s4)
    ctx->pc = 0x1ca510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca514:
    // 0x1ca514: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ca514u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca518:
    // 0x1ca518: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x1ca518u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1ca51c:
    // 0x1ca51c: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ca51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ca520:
    // 0x1ca520: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ca520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ca524:
    // 0x1ca524: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ca524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ca528:
    // 0x1ca528: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ca528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ca52c:
    // 0x1ca52c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ca530:
    // 0x1ca530: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ca530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ca534:
    // 0x1ca534: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1ca534u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1ca538:
    // 0x1ca538: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ca538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ca53c:
    // 0x1ca53c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x1ca53cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1ca540:
    // 0x1ca540: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ca540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1ca544:
    // 0x1ca544: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1ca544u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_1ca548:
    // 0x1ca548: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ca548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ca54c:
    // 0x1ca54c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1ca54cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ca550:
    // 0x1ca550: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1ca550u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ca554:
    // 0x1ca554: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1ca554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ca558:
    // 0x1ca558: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ca558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ca55c:
    // 0x1ca55c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1ca55cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1ca560:
    // 0x1ca560: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x1ca560u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ca564:
    // 0x1ca564: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1ca564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1ca568:
    // 0x1ca568: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ca568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ca56c:
    // 0x1ca56c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ca56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ca570:
    // 0x1ca570: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ca570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca574:
    // 0x1ca574: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1ca574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ca578:
    // 0x1ca578: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ca578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ca57c:
    // 0x1ca57c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1ca57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca580:
    // 0x1ca580: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1ca580u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1ca584:
    // 0x1ca584: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1ca584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ca588:
    // 0x1ca588: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ca588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ca58c:
    // 0x1ca58c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1ca58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_1ca590:
    // 0x1ca590: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ca590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1ca594:
    // 0x1ca594: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ca594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ca598:
    // 0x1ca598: 0x10000027  b           . + 4 + (0x27 << 2)
label_1ca59c:
    if (ctx->pc == 0x1CA59Cu) {
        ctx->pc = 0x1CA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA598u;
        // 0x1ca59c: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA5A0u;
        goto label_1ca5a0;
    }
    ctx->pc = 0x1CA598u;
    {
        const bool branch_taken_0x1ca598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA598u;
        // 0x1ca59c: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca598) {
            ctx->pc = 0x1CA638u;
            goto label_1ca638;
        }
    }
    ctx->pc = 0x1CA5A0u;
label_1ca5a0:
    // 0x1ca5a0: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x1ca5a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ca5a4:
    // 0x1ca5a4: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_1ca5a8:
    if (ctx->pc == 0x1CA5A8u) {
        ctx->pc = 0x1CA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5A4u;
        // 0x1ca5a8: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA5ACu;
        goto label_1ca5ac;
    }
    ctx->pc = 0x1CA5A4u;
    {
        const bool branch_taken_0x1ca5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5A4u;
        // 0x1ca5a8: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5a4) {
            ctx->pc = 0x1CA638u;
            goto label_1ca638;
        }
    }
    ctx->pc = 0x1CA5ACu;
label_1ca5ac:
    // 0x1ca5ac: 0xc6810af0  lwc1        $f1, 0xAF0($s4)
    ctx->pc = 0x1ca5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca5b0:
    // 0x1ca5b0: 0xc6800b00  lwc1        $f0, 0xB00($s4)
    ctx->pc = 0x1ca5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca5b4:
    // 0x1ca5b4: 0xc6820af8  lwc1        $f2, 0xAF8($s4)
    ctx->pc = 0x1ca5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ca5b8:
    // 0x1ca5b8: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x1ca5b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ca5bc:
    // 0x1ca5bc: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ca5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ca5c0:
    // 0x1ca5c0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ca5c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ca5c4:
    // 0x1ca5c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ca5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ca5c8:
    // 0x1ca5c8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1ca5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ca5cc:
    // 0x1ca5cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ca5d0:
    // 0x1ca5d0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ca5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ca5d4:
    // 0x1ca5d4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1ca5d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1ca5d8:
    // 0x1ca5d8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ca5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ca5dc:
    // 0x1ca5dc: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x1ca5dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_1ca5e0:
    // 0x1ca5e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ca5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1ca5e4:
    // 0x1ca5e4: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x1ca5e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_1ca5e8:
    // 0x1ca5e8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ca5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ca5ec:
    // 0x1ca5ec: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ca5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ca5f0:
    // 0x1ca5f0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1ca5f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ca5f4:
    // 0x1ca5f4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1ca5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ca5f8:
    // 0x1ca5f8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1ca5f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1ca5fc:
    // 0x1ca5fc: 0xe7c5000c  swc1        $f5, 0xC($fp)
    ctx->pc = 0x1ca5fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_1ca600:
    // 0x1ca600: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1ca600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1ca604:
    // 0x1ca604: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ca604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ca608:
    // 0x1ca608: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ca608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ca60c:
    // 0x1ca60c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ca60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca610:
    // 0x1ca610: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ca610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ca614:
    // 0x1ca614: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1ca614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1ca618:
    // 0x1ca618: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1ca618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca61c:
    // 0x1ca61c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1ca61cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1ca620:
    // 0x1ca620: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1ca620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ca624:
    // 0x1ca624: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ca624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ca628:
    // 0x1ca628: 0xe6e5000c  swc1        $f5, 0xC($s7)
    ctx->pc = 0x1ca628u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ca62c:
    // 0x1ca62c: 0x3c01c096  lui         $at, 0xC096
    ctx->pc = 0x1ca62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49302 << 16));
label_1ca630:
    // 0x1ca630: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1ca630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_1ca634:
    // 0x1ca634: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ca634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ca638:
    // 0x1ca638: 0x26900050  addiu       $s0, $s4, 0x50
    ctx->pc = 0x1ca638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1ca63c:
    // 0x1ca63c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ca63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ca640:
    // 0x1ca640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca644:
    // 0x1ca644: 0xc068818  jal         func_1A2060
label_1ca648:
    if (ctx->pc == 0x1CA648u) {
        ctx->pc = 0x1CA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA644u;
        // 0x1ca648: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA64Cu;
        goto label_1ca64c;
    }
    ctx->pc = 0x1CA644u;
    SET_GPR_U32(ctx, 31, 0x1CA64Cu);
    ctx->pc = 0x1CA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA644u;
    // 0x1ca648: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1CA644u, 0x1CA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA64Cu;
label_1ca64c:
    // 0x1ca64c: 0xe61400a0  swc1        $f20, 0xA0($s0)
    ctx->pc = 0x1ca64cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_1ca650:
    // 0x1ca650: 0xc06886e  jal         func_1A21B8
label_1ca654:
    if (ctx->pc == 0x1CA654u) {
        ctx->pc = 0x1CA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA650u;
        // 0x1ca654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA658u;
        goto label_1ca658;
    }
    ctx->pc = 0x1CA650u;
    SET_GPR_U32(ctx, 31, 0x1CA658u);
    ctx->pc = 0x1CA654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA650u;
    // 0x1ca654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1CA650u, 0x1CA658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA658u;
label_1ca658:
    // 0x1ca658: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x1ca658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca65c:
    // 0x1ca65c: 0xc680004c  lwc1        $f0, 0x4C($s4)
    ctx->pc = 0x1ca65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca660:
    // 0x1ca660: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1ca660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca664:
    // 0x1ca664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ca664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca668:
    // 0x1ca668: 0x0  nop
    ctx->pc = 0x1ca668u;
    // NOP
label_1ca66c:
    // 0x1ca66c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1ca670:
    if (ctx->pc == 0x1CA670u) {
        ctx->pc = 0x1CA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA66Cu;
        // 0x1ca670: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA674u;
        goto label_1ca674;
    }
    ctx->pc = 0x1CA66Cu;
    {
        const bool branch_taken_0x1ca66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA66Cu;
        // 0x1ca670: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca66c) {
            ctx->pc = 0x1CA690u;
            goto label_1ca690;
        }
    }
    ctx->pc = 0x1CA674u;
label_1ca674:
    // 0x1ca674: 0xc6800b04  lwc1        $f0, 0xB04($s4)
    ctx->pc = 0x1ca674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca678:
    // 0x1ca678: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ca678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca67c:
    // 0x1ca67c: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x1ca67cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ca680:
    // 0x1ca680: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ca680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ca684:
    // 0x1ca684: 0xe6820b04  swc1        $f2, 0xB04($s4)
    ctx->pc = 0x1ca684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2820), bits); }
label_1ca688:
    // 0x1ca688: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ca68c:
    if (ctx->pc == 0x1CA68Cu) {
        ctx->pc = 0x1CA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA688u;
        // 0x1ca68c: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA690u;
        goto label_1ca690;
    }
    ctx->pc = 0x1CA688u;
    {
        const bool branch_taken_0x1ca688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA688u;
        // 0x1ca68c: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca688) {
            ctx->pc = 0x1CA6A4u;
            goto label_1ca6a4;
        }
    }
    ctx->pc = 0x1CA690u;
label_1ca690:
    // 0x1ca690: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ca690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1ca694:
    // 0x1ca694: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ca694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1ca698:
    // 0x1ca698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca69c:
    // 0x1ca69c: 0x0  nop
    ctx->pc = 0x1ca69cu;
    // NOP
label_1ca6a0:
    // 0x1ca6a0: 0xe6800b04  swc1        $f0, 0xB04($s4)
    ctx->pc = 0x1ca6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2820), bits); }
label_1ca6a4:
    // 0x1ca6a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ca6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ca6a8:
    // 0x1ca6a8: 0x26900150  addiu       $s0, $s4, 0x150
    ctx->pc = 0x1ca6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_1ca6ac:
    // 0x1ca6ac: 0xc68e004c  lwc1        $f14, 0x4C($s4)
    ctx->pc = 0x1ca6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1ca6b0:
    // 0x1ca6b0: 0x26910250  addiu       $s1, $s4, 0x250
    ctx->pc = 0x1ca6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1ca6b4:
    // 0x1ca6b4: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1ca6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1ca6b8:
    // 0x1ca6b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ca6bc:
    // 0x1ca6bc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ca6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1ca6c0:
    // 0x1ca6c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ca6c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1ca6c4:
    // 0x1ca6c4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ca6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1ca6c8:
    // 0x1ca6c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ca6cc:
    // 0x1ca6cc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1ca6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1ca6d0:
    // 0x1ca6d0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ca6d4:
    // 0x1ca6d4: 0xc68c0048  lwc1        $f12, 0x48($s4)
    ctx->pc = 0x1ca6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ca6d8:
    // 0x1ca6d8: 0x26920350  addiu       $s2, $s4, 0x350
    ctx->pc = 0x1ca6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 848));
label_1ca6dc:
    // 0x1ca6dc: 0xc0cdd5a  jal         func_337568
label_1ca6e0:
    if (ctx->pc == 0x1CA6E0u) {
        ctx->pc = 0x1CA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6DCu;
        // 0x1ca6e0: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA6E4u;
        goto label_1ca6e4;
    }
    ctx->pc = 0x1CA6DCu;
    SET_GPR_U32(ctx, 31, 0x1CA6E4u);
    ctx->pc = 0x1CA6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA6DCu;
    // 0x1ca6e0: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1CA6DCu, 0x1CA6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6E4u;
label_1ca6e4:
    // 0x1ca6e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ca6e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1ca6e8:
    // 0x1ca6e8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ca6e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1ca6ec:
    // 0x1ca6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca6f0:
    // 0x1ca6f0: 0xc068848  jal         func_1A2120
label_1ca6f4:
    if (ctx->pc == 0x1CA6F4u) {
        ctx->pc = 0x1CA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6F0u;
        // 0x1ca6f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA6F8u;
        goto label_1ca6f8;
    }
    ctx->pc = 0x1CA6F0u;
    SET_GPR_U32(ctx, 31, 0x1CA6F8u);
    ctx->pc = 0x1CA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA6F0u;
    // 0x1ca6f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1CA6F0u, 0x1CA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6F8u;
label_1ca6f8:
    // 0x1ca6f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ca6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ca6fc:
    // 0x1ca6fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca700:
    // 0x1ca700: 0xc068818  jal         func_1A2060
label_1ca704:
    if (ctx->pc == 0x1CA704u) {
        ctx->pc = 0x1CA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA700u;
        // 0x1ca704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA708u;
        goto label_1ca708;
    }
    ctx->pc = 0x1CA700u;
    SET_GPR_U32(ctx, 31, 0x1CA708u);
    ctx->pc = 0x1CA704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA700u;
    // 0x1ca704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1CA700u, 0x1CA708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA708u;
label_1ca708:
    // 0x1ca708: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x1ca708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca70c:
    // 0x1ca70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca710:
    // 0x1ca710: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ca710u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ca714:
    // 0x1ca714: 0xc06886e  jal         func_1A21B8
label_1ca718:
    if (ctx->pc == 0x1CA718u) {
        ctx->pc = 0x1CA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA714u;
        // 0x1ca718: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA71Cu;
        goto label_1ca71c;
    }
    ctx->pc = 0x1CA714u;
    SET_GPR_U32(ctx, 31, 0x1CA71Cu);
    ctx->pc = 0x1CA718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA714u;
    // 0x1ca718: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1CA714u, 0x1CA71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA71Cu;
label_1ca71c:
    // 0x1ca71c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca720:
    // 0x1ca720: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1ca720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ca724:
    // 0x1ca724: 0xc068818  jal         func_1A2060
label_1ca728:
    if (ctx->pc == 0x1CA728u) {
        ctx->pc = 0x1CA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA724u;
        // 0x1ca728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA72Cu;
        goto label_1ca72c;
    }
    ctx->pc = 0x1CA724u;
    SET_GPR_U32(ctx, 31, 0x1CA72Cu);
    ctx->pc = 0x1CA728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA724u;
    // 0x1ca728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1CA724u, 0x1CA72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA72Cu;
label_1ca72c:
    // 0x1ca72c: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x1ca72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_1ca730:
    // 0x1ca730: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ca730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ca734:
    // 0x1ca734: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ca734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ca738:
    // 0x1ca738: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ca738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ca73c:
    // 0x1ca73c: 0x40f809  jalr        $v0
label_1ca740:
    if (ctx->pc == 0x1CA740u) {
        ctx->pc = 0x1CA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA73Cu;
        // 0x1ca740: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA744u;
        goto label_1ca744;
    }
    ctx->pc = 0x1CA73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA744u);
        ctx->pc = 0x1CA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA73Cu;
        // 0x1ca740: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA73Cu, 0x1CA744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA744u;
label_1ca744:
    // 0x1ca744: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1ca744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1ca748:
    // 0x1ca748: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca74c:
    // 0x1ca74c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ca74cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ca750:
    // 0x1ca750: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1ca754:
    if (ctx->pc == 0x1CA754u) {
        ctx->pc = 0x1CA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA750u;
        // 0x1ca754: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA758u;
        goto label_1ca758;
    }
    ctx->pc = 0x1CA750u;
    {
        const bool branch_taken_0x1ca750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca750) {
            ctx->pc = 0x1CA754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA750u;
            // 0x1ca754: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA758u;
            goto label_1ca758;
        }
    }
    ctx->pc = 0x1CA758u;
label_1ca758:
    // 0x1ca758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ca75c:
    // 0x1ca75c: 0x3010  mfhi        $a2
    ctx->pc = 0x1ca75cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1ca760:
    // 0x1ca760: 0xd6001b  divu        $zero, $a2, $s6
    ctx->pc = 0x1ca760u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1ca764:
    // 0x1ca764: 0x2812  mflo        $a1
    ctx->pc = 0x1ca764u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1ca768:
    // 0x1ca768: 0xc068a44  jal         func_1A2910
label_1ca76c:
    if (ctx->pc == 0x1CA76Cu) {
        ctx->pc = 0x1CA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA768u;
        // 0x1ca76c: 0xe52823  subu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA770u;
        goto label_1ca770;
    }
    ctx->pc = 0x1CA768u;
    SET_GPR_U32(ctx, 31, 0x1CA770u);
    ctx->pc = 0x1CA76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA768u;
    // 0x1ca76c: 0xe52823  subu        $a1, $a3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1CA768u, 0x1CA770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA770u;
label_1ca770:
    // 0x1ca770: 0xc06886e  jal         func_1A21B8
label_1ca774:
    if (ctx->pc == 0x1CA774u) {
        ctx->pc = 0x1CA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA770u;
        // 0x1ca774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA778u;
        goto label_1ca778;
    }
    ctx->pc = 0x1CA770u;
    SET_GPR_U32(ctx, 31, 0x1CA778u);
    ctx->pc = 0x1CA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA770u;
    // 0x1ca774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1CA770u, 0x1CA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA778u;
label_1ca778:
    // 0x1ca778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ca77c:
    // 0x1ca77c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ca77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ca780:
    // 0x1ca780: 0xc068818  jal         func_1A2060
label_1ca784:
    if (ctx->pc == 0x1CA784u) {
        ctx->pc = 0x1CA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA780u;
        // 0x1ca784: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA788u;
        goto label_1ca788;
    }
    ctx->pc = 0x1CA780u;
    SET_GPR_U32(ctx, 31, 0x1CA788u);
    ctx->pc = 0x1CA784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA780u;
    // 0x1ca784: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1CA780u, 0x1CA788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA788u;
label_1ca788:
    // 0x1ca788: 0x8e65b8b8  lw          $a1, -0x4748($s3)
    ctx->pc = 0x1ca788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949048)));
label_1ca78c:
    // 0x1ca78c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ca78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ca790:
    // 0x1ca790: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ca790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ca794:
    // 0x1ca794: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ca794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ca798:
    // 0x1ca798: 0x40f809  jalr        $v0
label_1ca79c:
    if (ctx->pc == 0x1CA79Cu) {
        ctx->pc = 0x1CA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA798u;
        // 0x1ca79c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA7A0u;
        goto label_1ca7a0;
    }
    ctx->pc = 0x1CA798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA7A0u);
        ctx->pc = 0x1CA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA798u;
        // 0x1ca79c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA798u, 0x1CA7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA7A0u;
label_1ca7a0:
    // 0x1ca7a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ca7a4:
    if (ctx->pc == 0x1CA7A4u) {
        ctx->pc = 0x1CA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7A0u;
        // 0x1ca7a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA7A8u;
        goto label_1ca7a8;
    }
    ctx->pc = 0x1CA7A0u;
    {
        const bool branch_taken_0x1ca7a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7A0u;
        // 0x1ca7a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7a0) {
            ctx->pc = 0x1CA7BCu;
            goto label_1ca7bc;
        }
    }
    ctx->pc = 0x1CA7A8u;
label_1ca7a8:
    // 0x1ca7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca7ac:
    // 0x1ca7ac: 0x0  nop
    ctx->pc = 0x1ca7acu;
    // NOP
label_1ca7b0:
    // 0x1ca7b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ca7b4:
    // 0x1ca7b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ca7b8:
    if (ctx->pc == 0x1CA7B8u) {
        ctx->pc = 0x1CA7BCu;
        goto label_1ca7bc;
    }
    ctx->pc = 0x1CA7B4u;
    {
        const bool branch_taken_0x1ca7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca7b4) {
            ctx->pc = 0x1CA7D4u;
            goto label_1ca7d4;
        }
    }
    ctx->pc = 0x1CA7BCu;
label_1ca7bc:
    // 0x1ca7bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ca7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ca7c0:
    // 0x1ca7c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ca7c4:
    // 0x1ca7c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca7c8:
    // 0x1ca7c8: 0x0  nop
    ctx->pc = 0x1ca7c8u;
    // NOP
label_1ca7cc:
    // 0x1ca7cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca7ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ca7d0:
    // 0x1ca7d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ca7d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ca7d4:
    // 0x1ca7d4: 0x3c01bb83  lui         $at, 0xBB83
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48003 << 16));
label_1ca7d8:
    // 0x1ca7d8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ca7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1ca7dc:
    // 0x1ca7dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca7e0:
    // 0x1ca7e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ca7e4:
    // 0x1ca7e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ca7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ca7e8:
    // 0x1ca7e8: 0xc06886e  jal         func_1A21B8
label_1ca7ec:
    if (ctx->pc == 0x1CA7ECu) {
        ctx->pc = 0x1CA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7E8u;
        // 0x1ca7ec: 0xe6a000a0  swc1        $f0, 0xA0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA7F0u;
        goto label_1ca7f0;
    }
    ctx->pc = 0x1CA7E8u;
    SET_GPR_U32(ctx, 31, 0x1CA7F0u);
    ctx->pc = 0x1CA7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7E8u;
    // 0x1ca7ec: 0xe6a000a0  swc1        $f0, 0xA0($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1CA7E8u, 0x1CA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7F0u;
label_1ca7f0:
    // 0x1ca7f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ca7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ca7f4:
    // 0x1ca7f4: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x1ca7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_1ca7f8:
    // 0x1ca7f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca7fc:
    // 0x1ca7fc: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x1ca7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1ca800:
    // 0x1ca800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ca804:
    if (ctx->pc == 0x1CA804u) {
        ctx->pc = 0x1CA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA800u;
        // 0x1ca804: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA808u;
        goto label_1ca808;
    }
    ctx->pc = 0x1CA800u;
    {
        const bool branch_taken_0x1ca800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA800u;
        // 0x1ca804: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca800) {
            ctx->pc = 0x1CA810u;
            goto label_1ca810;
        }
    }
    ctx->pc = 0x1CA808u;
label_1ca808:
    // 0x1ca808: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1ca80c:
    if (ctx->pc == 0x1CA80Cu) {
        ctx->pc = 0x1CA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA808u;
        // 0x1ca80c: 0x268203f4  addiu       $v0, $s4, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1012));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA810u;
        goto label_1ca810;
    }
    ctx->pc = 0x1CA808u;
    {
        const bool branch_taken_0x1ca808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA808u;
        // 0x1ca80c: 0x268203f4  addiu       $v0, $s4, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca808) {
            ctx->pc = 0x1CA844u;
            goto label_1ca844;
        }
    }
    ctx->pc = 0x1CA810u;
label_1ca810:
    // 0x1ca810: 0x26820090  addiu       $v0, $s4, 0x90
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_1ca814:
    // 0x1ca814: 0x26830190  addiu       $v1, $s4, 0x190
    ctx->pc = 0x1ca814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_1ca818:
    // 0x1ca818: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x1ca818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca81c:
    // 0x1ca81c: 0x26840390  addiu       $a0, $s4, 0x390
    ctx->pc = 0x1ca81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 912));
label_1ca820:
    // 0x1ca820: 0x26850290  addiu       $a1, $s4, 0x290
    ctx->pc = 0x1ca820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
label_1ca824:
    // 0x1ca824: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x1ca824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1ca828:
    // 0x1ca828: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1ca828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca82c:
    // 0x1ca82c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ca82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_1ca830:
    // 0x1ca830: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x1ca830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca834:
    // 0x1ca834: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x1ca834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_1ca838:
    // 0x1ca838: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x1ca838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca83c:
    // 0x1ca83c: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x1ca83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_1ca840:
    // 0x1ca840: 0x268203f4  addiu       $v0, $s4, 0x3F4
    ctx->pc = 0x1ca840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1012));
label_1ca844:
    // 0x1ca844: 0xc68103f4  lwc1        $f1, 0x3F4($s4)
    ctx->pc = 0x1ca844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca848:
    // 0x1ca848: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ca848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca84c:
    // 0x1ca84c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ca850:
    // 0x1ca850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ca850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca854:
    // 0x1ca854: 0xe68003f4  swc1        $f0, 0x3F4($s4)
    ctx->pc = 0x1ca854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1012), bits); }
label_1ca858:
    // 0x1ca858: 0xc068864  jal         func_1A2190
label_1ca85c:
    if (ctx->pc == 0x1CA85Cu) {
        ctx->pc = 0x1CA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA858u;
        // 0x1ca85c: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA860u;
        goto label_1ca860;
    }
    ctx->pc = 0x1CA858u;
    SET_GPR_U32(ctx, 31, 0x1CA860u);
    ctx->pc = 0x1CA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA858u;
    // 0x1ca85c: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x1CA858u, 0x1CA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA860u;
label_1ca860:
    // 0x1ca860: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1ca860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1ca864:
    // 0x1ca864: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1ca864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1ca868:
    // 0x1ca868: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1ca868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ca86c:
    // 0x1ca86c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1ca86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ca870:
    // 0x1ca870: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1ca870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ca874:
    // 0x1ca874: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1ca874u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ca878:
    // 0x1ca878: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ca878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ca87c:
    // 0x1ca87c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1ca87cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ca880:
    // 0x1ca880: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1ca880u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ca884:
    // 0x1ca884: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ca884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ca888:
    // 0x1ca888: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ca888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ca88c:
    // 0x1ca88c: 0x3e00008  jr          $ra
label_1ca890:
    if (ctx->pc == 0x1CA890u) {
        ctx->pc = 0x1CA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA88Cu;
        // 0x1ca890: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA894u;
        goto label_1ca894;
    }
    ctx->pc = 0x1CA88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA88Cu;
        // 0x1ca890: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA894u;
label_1ca894:
    // 0x1ca894: 0x0  nop
    ctx->pc = 0x1ca894u;
    // NOP
    ctx->pc = 0x1ca898u;
}
