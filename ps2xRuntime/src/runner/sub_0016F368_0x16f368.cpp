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

// Function: sub_0016F368
// Address: 0x16f368 - 0x16f980
void sub_0016F368_0x16f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F368_0x16f368");
#endif

    switch (ctx->pc) {
        case 0x16f368u: goto label_16f368;
        case 0x16f36cu: goto label_16f36c;
        case 0x16f370u: goto label_16f370;
        case 0x16f374u: goto label_16f374;
        case 0x16f378u: goto label_16f378;
        case 0x16f37cu: goto label_16f37c;
        case 0x16f380u: goto label_16f380;
        case 0x16f384u: goto label_16f384;
        case 0x16f388u: goto label_16f388;
        case 0x16f38cu: goto label_16f38c;
        case 0x16f390u: goto label_16f390;
        case 0x16f394u: goto label_16f394;
        case 0x16f398u: goto label_16f398;
        case 0x16f39cu: goto label_16f39c;
        case 0x16f3a0u: goto label_16f3a0;
        case 0x16f3a4u: goto label_16f3a4;
        case 0x16f3a8u: goto label_16f3a8;
        case 0x16f3acu: goto label_16f3ac;
        case 0x16f3b0u: goto label_16f3b0;
        case 0x16f3b4u: goto label_16f3b4;
        case 0x16f3b8u: goto label_16f3b8;
        case 0x16f3bcu: goto label_16f3bc;
        case 0x16f3c0u: goto label_16f3c0;
        case 0x16f3c4u: goto label_16f3c4;
        case 0x16f3c8u: goto label_16f3c8;
        case 0x16f3ccu: goto label_16f3cc;
        case 0x16f3d0u: goto label_16f3d0;
        case 0x16f3d4u: goto label_16f3d4;
        case 0x16f3d8u: goto label_16f3d8;
        case 0x16f3dcu: goto label_16f3dc;
        case 0x16f3e0u: goto label_16f3e0;
        case 0x16f3e4u: goto label_16f3e4;
        case 0x16f3e8u: goto label_16f3e8;
        case 0x16f3ecu: goto label_16f3ec;
        case 0x16f3f0u: goto label_16f3f0;
        case 0x16f3f4u: goto label_16f3f4;
        case 0x16f3f8u: goto label_16f3f8;
        case 0x16f3fcu: goto label_16f3fc;
        case 0x16f400u: goto label_16f400;
        case 0x16f404u: goto label_16f404;
        case 0x16f408u: goto label_16f408;
        case 0x16f40cu: goto label_16f40c;
        case 0x16f410u: goto label_16f410;
        case 0x16f414u: goto label_16f414;
        case 0x16f418u: goto label_16f418;
        case 0x16f41cu: goto label_16f41c;
        case 0x16f420u: goto label_16f420;
        case 0x16f424u: goto label_16f424;
        case 0x16f428u: goto label_16f428;
        case 0x16f42cu: goto label_16f42c;
        case 0x16f430u: goto label_16f430;
        case 0x16f434u: goto label_16f434;
        case 0x16f438u: goto label_16f438;
        case 0x16f43cu: goto label_16f43c;
        case 0x16f440u: goto label_16f440;
        case 0x16f444u: goto label_16f444;
        case 0x16f448u: goto label_16f448;
        case 0x16f44cu: goto label_16f44c;
        case 0x16f450u: goto label_16f450;
        case 0x16f454u: goto label_16f454;
        case 0x16f458u: goto label_16f458;
        case 0x16f45cu: goto label_16f45c;
        case 0x16f460u: goto label_16f460;
        case 0x16f464u: goto label_16f464;
        case 0x16f468u: goto label_16f468;
        case 0x16f46cu: goto label_16f46c;
        case 0x16f470u: goto label_16f470;
        case 0x16f474u: goto label_16f474;
        case 0x16f478u: goto label_16f478;
        case 0x16f47cu: goto label_16f47c;
        case 0x16f480u: goto label_16f480;
        case 0x16f484u: goto label_16f484;
        case 0x16f488u: goto label_16f488;
        case 0x16f48cu: goto label_16f48c;
        case 0x16f490u: goto label_16f490;
        case 0x16f494u: goto label_16f494;
        case 0x16f498u: goto label_16f498;
        case 0x16f49cu: goto label_16f49c;
        case 0x16f4a0u: goto label_16f4a0;
        case 0x16f4a4u: goto label_16f4a4;
        case 0x16f4a8u: goto label_16f4a8;
        case 0x16f4acu: goto label_16f4ac;
        case 0x16f4b0u: goto label_16f4b0;
        case 0x16f4b4u: goto label_16f4b4;
        case 0x16f4b8u: goto label_16f4b8;
        case 0x16f4bcu: goto label_16f4bc;
        case 0x16f4c0u: goto label_16f4c0;
        case 0x16f4c4u: goto label_16f4c4;
        case 0x16f4c8u: goto label_16f4c8;
        case 0x16f4ccu: goto label_16f4cc;
        case 0x16f4d0u: goto label_16f4d0;
        case 0x16f4d4u: goto label_16f4d4;
        case 0x16f4d8u: goto label_16f4d8;
        case 0x16f4dcu: goto label_16f4dc;
        case 0x16f4e0u: goto label_16f4e0;
        case 0x16f4e4u: goto label_16f4e4;
        case 0x16f4e8u: goto label_16f4e8;
        case 0x16f4ecu: goto label_16f4ec;
        case 0x16f4f0u: goto label_16f4f0;
        case 0x16f4f4u: goto label_16f4f4;
        case 0x16f4f8u: goto label_16f4f8;
        case 0x16f4fcu: goto label_16f4fc;
        case 0x16f500u: goto label_16f500;
        case 0x16f504u: goto label_16f504;
        case 0x16f508u: goto label_16f508;
        case 0x16f50cu: goto label_16f50c;
        case 0x16f510u: goto label_16f510;
        case 0x16f514u: goto label_16f514;
        case 0x16f518u: goto label_16f518;
        case 0x16f51cu: goto label_16f51c;
        case 0x16f520u: goto label_16f520;
        case 0x16f524u: goto label_16f524;
        case 0x16f528u: goto label_16f528;
        case 0x16f52cu: goto label_16f52c;
        case 0x16f530u: goto label_16f530;
        case 0x16f534u: goto label_16f534;
        case 0x16f538u: goto label_16f538;
        case 0x16f53cu: goto label_16f53c;
        case 0x16f540u: goto label_16f540;
        case 0x16f544u: goto label_16f544;
        case 0x16f548u: goto label_16f548;
        case 0x16f54cu: goto label_16f54c;
        case 0x16f550u: goto label_16f550;
        case 0x16f554u: goto label_16f554;
        case 0x16f558u: goto label_16f558;
        case 0x16f55cu: goto label_16f55c;
        case 0x16f560u: goto label_16f560;
        case 0x16f564u: goto label_16f564;
        case 0x16f568u: goto label_16f568;
        case 0x16f56cu: goto label_16f56c;
        case 0x16f570u: goto label_16f570;
        case 0x16f574u: goto label_16f574;
        case 0x16f578u: goto label_16f578;
        case 0x16f57cu: goto label_16f57c;
        case 0x16f580u: goto label_16f580;
        case 0x16f584u: goto label_16f584;
        case 0x16f588u: goto label_16f588;
        case 0x16f58cu: goto label_16f58c;
        case 0x16f590u: goto label_16f590;
        case 0x16f594u: goto label_16f594;
        case 0x16f598u: goto label_16f598;
        case 0x16f59cu: goto label_16f59c;
        case 0x16f5a0u: goto label_16f5a0;
        case 0x16f5a4u: goto label_16f5a4;
        case 0x16f5a8u: goto label_16f5a8;
        case 0x16f5acu: goto label_16f5ac;
        case 0x16f5b0u: goto label_16f5b0;
        case 0x16f5b4u: goto label_16f5b4;
        case 0x16f5b8u: goto label_16f5b8;
        case 0x16f5bcu: goto label_16f5bc;
        case 0x16f5c0u: goto label_16f5c0;
        case 0x16f5c4u: goto label_16f5c4;
        case 0x16f5c8u: goto label_16f5c8;
        case 0x16f5ccu: goto label_16f5cc;
        case 0x16f5d0u: goto label_16f5d0;
        case 0x16f5d4u: goto label_16f5d4;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f5dcu: goto label_16f5dc;
        case 0x16f5e0u: goto label_16f5e0;
        case 0x16f5e4u: goto label_16f5e4;
        case 0x16f5e8u: goto label_16f5e8;
        case 0x16f5ecu: goto label_16f5ec;
        case 0x16f5f0u: goto label_16f5f0;
        case 0x16f5f4u: goto label_16f5f4;
        case 0x16f5f8u: goto label_16f5f8;
        case 0x16f5fcu: goto label_16f5fc;
        case 0x16f600u: goto label_16f600;
        case 0x16f604u: goto label_16f604;
        case 0x16f608u: goto label_16f608;
        case 0x16f60cu: goto label_16f60c;
        case 0x16f610u: goto label_16f610;
        case 0x16f614u: goto label_16f614;
        case 0x16f618u: goto label_16f618;
        case 0x16f61cu: goto label_16f61c;
        case 0x16f620u: goto label_16f620;
        case 0x16f624u: goto label_16f624;
        case 0x16f628u: goto label_16f628;
        case 0x16f62cu: goto label_16f62c;
        case 0x16f630u: goto label_16f630;
        case 0x16f634u: goto label_16f634;
        case 0x16f638u: goto label_16f638;
        case 0x16f63cu: goto label_16f63c;
        case 0x16f640u: goto label_16f640;
        case 0x16f644u: goto label_16f644;
        case 0x16f648u: goto label_16f648;
        case 0x16f64cu: goto label_16f64c;
        case 0x16f650u: goto label_16f650;
        case 0x16f654u: goto label_16f654;
        case 0x16f658u: goto label_16f658;
        case 0x16f65cu: goto label_16f65c;
        case 0x16f660u: goto label_16f660;
        case 0x16f664u: goto label_16f664;
        case 0x16f668u: goto label_16f668;
        case 0x16f66cu: goto label_16f66c;
        case 0x16f670u: goto label_16f670;
        case 0x16f674u: goto label_16f674;
        case 0x16f678u: goto label_16f678;
        case 0x16f67cu: goto label_16f67c;
        case 0x16f680u: goto label_16f680;
        case 0x16f684u: goto label_16f684;
        case 0x16f688u: goto label_16f688;
        case 0x16f68cu: goto label_16f68c;
        case 0x16f690u: goto label_16f690;
        case 0x16f694u: goto label_16f694;
        case 0x16f698u: goto label_16f698;
        case 0x16f69cu: goto label_16f69c;
        case 0x16f6a0u: goto label_16f6a0;
        case 0x16f6a4u: goto label_16f6a4;
        case 0x16f6a8u: goto label_16f6a8;
        case 0x16f6acu: goto label_16f6ac;
        case 0x16f6b0u: goto label_16f6b0;
        case 0x16f6b4u: goto label_16f6b4;
        case 0x16f6b8u: goto label_16f6b8;
        case 0x16f6bcu: goto label_16f6bc;
        case 0x16f6c0u: goto label_16f6c0;
        case 0x16f6c4u: goto label_16f6c4;
        case 0x16f6c8u: goto label_16f6c8;
        case 0x16f6ccu: goto label_16f6cc;
        case 0x16f6d0u: goto label_16f6d0;
        case 0x16f6d4u: goto label_16f6d4;
        case 0x16f6d8u: goto label_16f6d8;
        case 0x16f6dcu: goto label_16f6dc;
        case 0x16f6e0u: goto label_16f6e0;
        case 0x16f6e4u: goto label_16f6e4;
        case 0x16f6e8u: goto label_16f6e8;
        case 0x16f6ecu: goto label_16f6ec;
        case 0x16f6f0u: goto label_16f6f0;
        case 0x16f6f4u: goto label_16f6f4;
        case 0x16f6f8u: goto label_16f6f8;
        case 0x16f6fcu: goto label_16f6fc;
        case 0x16f700u: goto label_16f700;
        case 0x16f704u: goto label_16f704;
        case 0x16f708u: goto label_16f708;
        case 0x16f70cu: goto label_16f70c;
        case 0x16f710u: goto label_16f710;
        case 0x16f714u: goto label_16f714;
        case 0x16f718u: goto label_16f718;
        case 0x16f71cu: goto label_16f71c;
        case 0x16f720u: goto label_16f720;
        case 0x16f724u: goto label_16f724;
        case 0x16f728u: goto label_16f728;
        case 0x16f72cu: goto label_16f72c;
        case 0x16f730u: goto label_16f730;
        case 0x16f734u: goto label_16f734;
        case 0x16f738u: goto label_16f738;
        case 0x16f73cu: goto label_16f73c;
        case 0x16f740u: goto label_16f740;
        case 0x16f744u: goto label_16f744;
        case 0x16f748u: goto label_16f748;
        case 0x16f74cu: goto label_16f74c;
        case 0x16f750u: goto label_16f750;
        case 0x16f754u: goto label_16f754;
        case 0x16f758u: goto label_16f758;
        case 0x16f75cu: goto label_16f75c;
        case 0x16f760u: goto label_16f760;
        case 0x16f764u: goto label_16f764;
        case 0x16f768u: goto label_16f768;
        case 0x16f76cu: goto label_16f76c;
        case 0x16f770u: goto label_16f770;
        case 0x16f774u: goto label_16f774;
        case 0x16f778u: goto label_16f778;
        case 0x16f77cu: goto label_16f77c;
        case 0x16f780u: goto label_16f780;
        case 0x16f784u: goto label_16f784;
        case 0x16f788u: goto label_16f788;
        case 0x16f78cu: goto label_16f78c;
        case 0x16f790u: goto label_16f790;
        case 0x16f794u: goto label_16f794;
        case 0x16f798u: goto label_16f798;
        case 0x16f79cu: goto label_16f79c;
        case 0x16f7a0u: goto label_16f7a0;
        case 0x16f7a4u: goto label_16f7a4;
        case 0x16f7a8u: goto label_16f7a8;
        case 0x16f7acu: goto label_16f7ac;
        case 0x16f7b0u: goto label_16f7b0;
        case 0x16f7b4u: goto label_16f7b4;
        case 0x16f7b8u: goto label_16f7b8;
        case 0x16f7bcu: goto label_16f7bc;
        case 0x16f7c0u: goto label_16f7c0;
        case 0x16f7c4u: goto label_16f7c4;
        case 0x16f7c8u: goto label_16f7c8;
        case 0x16f7ccu: goto label_16f7cc;
        case 0x16f7d0u: goto label_16f7d0;
        case 0x16f7d4u: goto label_16f7d4;
        case 0x16f7d8u: goto label_16f7d8;
        case 0x16f7dcu: goto label_16f7dc;
        case 0x16f7e0u: goto label_16f7e0;
        case 0x16f7e4u: goto label_16f7e4;
        case 0x16f7e8u: goto label_16f7e8;
        case 0x16f7ecu: goto label_16f7ec;
        case 0x16f7f0u: goto label_16f7f0;
        case 0x16f7f4u: goto label_16f7f4;
        case 0x16f7f8u: goto label_16f7f8;
        case 0x16f7fcu: goto label_16f7fc;
        case 0x16f800u: goto label_16f800;
        case 0x16f804u: goto label_16f804;
        case 0x16f808u: goto label_16f808;
        case 0x16f80cu: goto label_16f80c;
        case 0x16f810u: goto label_16f810;
        case 0x16f814u: goto label_16f814;
        case 0x16f818u: goto label_16f818;
        case 0x16f81cu: goto label_16f81c;
        case 0x16f820u: goto label_16f820;
        case 0x16f824u: goto label_16f824;
        case 0x16f828u: goto label_16f828;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f830u: goto label_16f830;
        case 0x16f834u: goto label_16f834;
        case 0x16f838u: goto label_16f838;
        case 0x16f83cu: goto label_16f83c;
        case 0x16f840u: goto label_16f840;
        case 0x16f844u: goto label_16f844;
        case 0x16f848u: goto label_16f848;
        case 0x16f84cu: goto label_16f84c;
        case 0x16f850u: goto label_16f850;
        case 0x16f854u: goto label_16f854;
        case 0x16f858u: goto label_16f858;
        case 0x16f85cu: goto label_16f85c;
        case 0x16f860u: goto label_16f860;
        case 0x16f864u: goto label_16f864;
        case 0x16f868u: goto label_16f868;
        case 0x16f86cu: goto label_16f86c;
        case 0x16f870u: goto label_16f870;
        case 0x16f874u: goto label_16f874;
        case 0x16f878u: goto label_16f878;
        case 0x16f87cu: goto label_16f87c;
        case 0x16f880u: goto label_16f880;
        case 0x16f884u: goto label_16f884;
        case 0x16f888u: goto label_16f888;
        case 0x16f88cu: goto label_16f88c;
        case 0x16f890u: goto label_16f890;
        case 0x16f894u: goto label_16f894;
        case 0x16f898u: goto label_16f898;
        case 0x16f89cu: goto label_16f89c;
        case 0x16f8a0u: goto label_16f8a0;
        case 0x16f8a4u: goto label_16f8a4;
        case 0x16f8a8u: goto label_16f8a8;
        case 0x16f8acu: goto label_16f8ac;
        case 0x16f8b0u: goto label_16f8b0;
        case 0x16f8b4u: goto label_16f8b4;
        case 0x16f8b8u: goto label_16f8b8;
        case 0x16f8bcu: goto label_16f8bc;
        case 0x16f8c0u: goto label_16f8c0;
        case 0x16f8c4u: goto label_16f8c4;
        case 0x16f8c8u: goto label_16f8c8;
        case 0x16f8ccu: goto label_16f8cc;
        case 0x16f8d0u: goto label_16f8d0;
        case 0x16f8d4u: goto label_16f8d4;
        case 0x16f8d8u: goto label_16f8d8;
        case 0x16f8dcu: goto label_16f8dc;
        case 0x16f8e0u: goto label_16f8e0;
        case 0x16f8e4u: goto label_16f8e4;
        case 0x16f8e8u: goto label_16f8e8;
        case 0x16f8ecu: goto label_16f8ec;
        case 0x16f8f0u: goto label_16f8f0;
        case 0x16f8f4u: goto label_16f8f4;
        case 0x16f8f8u: goto label_16f8f8;
        case 0x16f8fcu: goto label_16f8fc;
        case 0x16f900u: goto label_16f900;
        case 0x16f904u: goto label_16f904;
        case 0x16f908u: goto label_16f908;
        case 0x16f90cu: goto label_16f90c;
        case 0x16f910u: goto label_16f910;
        case 0x16f914u: goto label_16f914;
        case 0x16f918u: goto label_16f918;
        case 0x16f91cu: goto label_16f91c;
        case 0x16f920u: goto label_16f920;
        case 0x16f924u: goto label_16f924;
        case 0x16f928u: goto label_16f928;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f930u: goto label_16f930;
        case 0x16f934u: goto label_16f934;
        case 0x16f938u: goto label_16f938;
        case 0x16f93cu: goto label_16f93c;
        case 0x16f940u: goto label_16f940;
        case 0x16f944u: goto label_16f944;
        case 0x16f948u: goto label_16f948;
        case 0x16f94cu: goto label_16f94c;
        case 0x16f950u: goto label_16f950;
        case 0x16f954u: goto label_16f954;
        case 0x16f958u: goto label_16f958;
        case 0x16f95cu: goto label_16f95c;
        case 0x16f960u: goto label_16f960;
        case 0x16f964u: goto label_16f964;
        case 0x16f968u: goto label_16f968;
        case 0x16f96cu: goto label_16f96c;
        case 0x16f970u: goto label_16f970;
        case 0x16f974u: goto label_16f974;
        case 0x16f978u: goto label_16f978;
        case 0x16f97cu: goto label_16f97c;
        default: break;
    }

    ctx->pc = 0x16f368u;

label_16f368:
    // 0x16f368: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16f36c:
    // 0x16f36c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_16f370:
    // 0x16f370: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16f370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16f374:
    // 0x16f374: 0x24930050  addiu       $s3, $a0, 0x50
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_16f378:
    // 0x16f378: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_16f37c:
    // 0x16f37c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f380:
    // 0x16f380: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16f380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_16f384:
    // 0x16f384: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_16f388:
    // 0x16f388: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_16f38c:
    // 0x16f38c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16f390:
    // 0x16f390: 0xc137950  jal         func_4DE540
label_16f394:
    if (ctx->pc == 0x16F394u) {
        ctx->pc = 0x16F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F390u;
        // 0x16f394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F398u;
        goto label_16f398;
    }
    ctx->pc = 0x16F390u;
    SET_GPR_U32(ctx, 31, 0x16F398u);
    ctx->pc = 0x16F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F390u;
    // 0x16f394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE540u, 0x16F390u, 0x16F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F398u;
label_16f398:
    // 0x16f398: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x16f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_16f39c:
    // 0x16f39c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f3a0:
    // 0x16f3a0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16f3a4:
    if (ctx->pc == 0x16F3A4u) {
        ctx->pc = 0x16F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3A0u;
        // 0x16f3a4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3A8u;
        goto label_16f3a8;
    }
    ctx->pc = 0x16F3A0u;
    {
        const bool branch_taken_0x16f3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3A0u;
        // 0x16f3a4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3a0) {
            ctx->pc = 0x16F3B8u;
            goto label_16f3b8;
        }
    }
    ctx->pc = 0x16F3A8u;
label_16f3a8:
    // 0x16f3a8: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x16f3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_16f3ac:
    // 0x16f3ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x16f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16f3b0:
    // 0x16f3b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16f3b4:
    if (ctx->pc == 0x16F3B4u) {
        ctx->pc = 0x16F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3B0u;
        // 0x16f3b4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3B8u;
        goto label_16f3b8;
    }
    ctx->pc = 0x16F3B0u;
    {
        const bool branch_taken_0x16f3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3B0u;
        // 0x16f3b4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3b0) {
            ctx->pc = 0x16F3C0u;
            goto label_16f3c0;
        }
    }
    ctx->pc = 0x16F3B8u;
label_16f3b8:
    // 0x16f3b8: 0x10000169  b           . + 4 + (0x169 << 2)
label_16f3bc:
    if (ctx->pc == 0x16F3BCu) {
        ctx->pc = 0x16F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3B8u;
        // 0x16f3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3C0u;
        goto label_16f3c0;
    }
    ctx->pc = 0x16F3B8u;
    {
        const bool branch_taken_0x16f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3B8u;
        // 0x16f3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3b8) {
            ctx->pc = 0x16F960u;
            goto label_16f960;
        }
    }
    ctx->pc = 0x16F3C0u;
label_16f3c0:
    // 0x16f3c0: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x16f3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_16f3c4:
    // 0x16f3c4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x16f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16f3c8:
    // 0x16f3c8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x16f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_16f3cc:
    // 0x16f3cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16f3d0:
    // 0x16f3d0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x16f3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_16f3d4:
    // 0x16f3d4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x16f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_16f3d8:
    // 0x16f3d8: 0x60f809  jalr        $v1
label_16f3dc:
    if (ctx->pc == 0x16F3DCu) {
        ctx->pc = 0x16F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3D8u;
        // 0x16f3dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3E0u;
        goto label_16f3e0;
    }
    ctx->pc = 0x16F3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F3E0u);
        ctx->pc = 0x16F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3D8u;
        // 0x16f3dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F3D8u, 0x16F3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F3E0u;
label_16f3e0:
    // 0x16f3e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x16f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16f3e4:
    // 0x16f3e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f3e8:
    // 0x16f3e8: 0x24060131  addiu       $a2, $zero, 0x131
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
label_16f3ec:
    // 0x16f3ec: 0xc13796a  jal         func_4DE5A8
label_16f3f0:
    if (ctx->pc == 0x16F3F0u) {
        ctx->pc = 0x16F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3ECu;
        // 0x16f3f0: 0x24a51900  addiu       $a1, $a1, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3F4u;
        goto label_16f3f4;
    }
    ctx->pc = 0x16F3ECu;
    SET_GPR_U32(ctx, 31, 0x16F3F4u);
    ctx->pc = 0x16F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3ECu;
    // 0x16f3f0: 0x24a51900  addiu       $a1, $a1, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE5A8u, 0x16F3ECu, 0x16F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3F4u;
label_16f3f4:
    // 0x16f3f4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x16f3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16f3f8:
    // 0x16f3f8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x16f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_16f3fc:
    // 0x16f3fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16f400:
    // 0x16f400: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x16f400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_16f404:
    // 0x16f404: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16f408:
    // 0x16f408: 0x60f809  jalr        $v1
label_16f40c:
    if (ctx->pc == 0x16F40Cu) {
        ctx->pc = 0x16F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F408u;
        // 0x16f40c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F410u;
        goto label_16f410;
    }
    ctx->pc = 0x16F408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F410u);
        ctx->pc = 0x16F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F408u;
        // 0x16f40c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F408u, 0x16F410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F410u;
label_16f410:
    // 0x16f410: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f414:
    // 0x16f414: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x16f414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_16f418:
    // 0x16f418: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16f418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16f41c:
    // 0x16f41c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x16f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_16f420:
    // 0x16f420: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x16f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_16f424:
    // 0x16f424: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x16f424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16f428:
    // 0x16f428: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x16f428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_16f42c:
    // 0x16f42c: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_16f430:
    // 0x16f430: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_16f434:
    if (ctx->pc == 0x16F434u) {
        ctx->pc = 0x16F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F430u;
        // 0x16f434: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F438u;
        goto label_16f438;
    }
    ctx->pc = 0x16F430u;
    {
        const bool branch_taken_0x16f430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F430u;
        // 0x16f434: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f430) {
            ctx->pc = 0x16F478u;
            goto label_16f478;
        }
    }
    ctx->pc = 0x16F438u;
label_16f438:
    // 0x16f438: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x16f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_16f43c:
    // 0x16f43c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_16f440:
    if (ctx->pc == 0x16F440u) {
        ctx->pc = 0x16F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F43Cu;
        // 0x16f440: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F444u;
        goto label_16f444;
    }
    ctx->pc = 0x16F43Cu;
    {
        const bool branch_taken_0x16f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f43c) {
            ctx->pc = 0x16F440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F43Cu;
            // 0x16f440: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F44Cu;
            goto label_16f44c;
        }
    }
    ctx->pc = 0x16F444u;
label_16f444:
    // 0x16f444: 0x1000000d  b           . + 4 + (0xD << 2)
label_16f448:
    if (ctx->pc == 0x16F448u) {
        ctx->pc = 0x16F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F444u;
        // 0x16f448: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F44Cu;
        goto label_16f44c;
    }
    ctx->pc = 0x16F444u;
    {
        const bool branch_taken_0x16f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F444u;
        // 0x16f448: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f444) {
            ctx->pc = 0x16F47Cu;
            goto label_16f47c;
        }
    }
    ctx->pc = 0x16F44Cu;
label_16f44c:
    // 0x16f44c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16f450:
    // 0x16f450: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_16f454:
    if (ctx->pc == 0x16F454u) {
        ctx->pc = 0x16F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F450u;
        // 0x16f454: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F458u;
        goto label_16f458;
    }
    ctx->pc = 0x16F450u;
    {
        const bool branch_taken_0x16f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f450) {
            ctx->pc = 0x16F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F450u;
            // 0x16f454: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F47Cu;
            goto label_16f47c;
        }
    }
    ctx->pc = 0x16F458u;
label_16f458:
    // 0x16f458: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x16f458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16f45c:
    // 0x16f45c: 0x0  nop
    ctx->pc = 0x16f45cu;
    // NOP
label_16f460:
    // 0x16f460: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16f464:
    // 0x16f464: 0x0  nop
    ctx->pc = 0x16f464u;
    // NOP
label_16f468:
    // 0x16f468: 0x0  nop
    ctx->pc = 0x16f468u;
    // NOP
label_16f46c:
    // 0x16f46c: 0x0  nop
    ctx->pc = 0x16f46cu;
    // NOP
label_16f470:
    // 0x16f470: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_16f474:
    if (ctx->pc == 0x16F474u) {
        ctx->pc = 0x16F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F470u;
        // 0x16f474: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F478u;
        goto label_16f478;
    }
    ctx->pc = 0x16F470u;
    {
        const bool branch_taken_0x16f470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f470) {
            ctx->pc = 0x16F474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F470u;
            // 0x16f474: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F478u;
label_16f478:
    // 0x16f478: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x16f478u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_16f47c:
    // 0x16f47c: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_16f480:
    if (ctx->pc == 0x16F480u) {
        ctx->pc = 0x16F484u;
        goto label_16f484;
    }
    ctx->pc = 0x16F47Cu;
    {
        const bool branch_taken_0x16f47c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x16f47c) {
            ctx->pc = 0x16F508u;
            goto label_16f508;
        }
    }
    ctx->pc = 0x16F484u;
label_16f484:
    // 0x16f484: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16f488:
    // 0x16f488: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x16f488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_16f48c:
    // 0x16f48c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x16f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16f490:
    // 0x16f490: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x16f490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_16f494:
    // 0x16f494: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16f498:
    // 0x16f498: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_16f49c:
    if (ctx->pc == 0x16F49Cu) {
        ctx->pc = 0x16F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F498u;
        // 0x16f49c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F4A0u;
        goto label_16f4a0;
    }
    ctx->pc = 0x16F498u;
    {
        const bool branch_taken_0x16f498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F498u;
        // 0x16f49c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f498) {
            ctx->pc = 0x16F4C4u;
            goto label_16f4c4;
        }
    }
    ctx->pc = 0x16F4A0u;
label_16f4a0:
    // 0x16f4a0: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_16f4a4:
    if (ctx->pc == 0x16F4A4u) {
        ctx->pc = 0x16F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4A0u;
        // 0x16f4a4: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F4A8u;
        goto label_16f4a8;
    }
    ctx->pc = 0x16F4A0u;
    {
        const bool branch_taken_0x16f4a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4A0u;
        // 0x16f4a4: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4a0) {
            ctx->pc = 0x16F4ACu;
            goto label_16f4ac;
        }
    }
    ctx->pc = 0x16F4A8u;
label_16f4a8:
    // 0x16f4a8: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x16f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_16f4ac:
    // 0x16f4ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_16f4b0:
    // 0x16f4b0: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x16f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_16f4b4:
    // 0x16f4b4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x16f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16f4b8:
    // 0x16f4b8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x16f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_16f4bc:
    // 0x16f4bc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16f4c0:
    // 0x16f4c0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x16f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_16f4c4:
    // 0x16f4c4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x16f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f4c8:
    // 0x16f4c8: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_16f4cc:
    if (ctx->pc == 0x16F4CCu) {
        ctx->pc = 0x16F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4C8u;
        // 0x16f4cc: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F4D0u;
        goto label_16f4d0;
    }
    ctx->pc = 0x16F4C8u;
    {
        const bool branch_taken_0x16f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16f4c8) {
            ctx->pc = 0x16F4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F4C8u;
            // 0x16f4cc: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F4D8u;
            goto label_16f4d8;
        }
    }
    ctx->pc = 0x16F4D0u;
label_16f4d0:
    // 0x16f4d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f4d4:
    if (ctx->pc == 0x16F4D4u) {
        ctx->pc = 0x16F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4D0u;
        // 0x16f4d4: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F4D8u;
        goto label_16f4d8;
    }
    ctx->pc = 0x16F4D0u;
    {
        const bool branch_taken_0x16f4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4D0u;
        // 0x16f4d4: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4d0) {
            ctx->pc = 0x16F4E8u;
            goto label_16f4e8;
        }
    }
    ctx->pc = 0x16F4D8u;
label_16f4d8:
    // 0x16f4d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f4dc:
    // 0x16f4dc: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_16f4e0:
    if (ctx->pc == 0x16F4E0u) {
        ctx->pc = 0x16F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4DCu;
        // 0x16f4e0: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F4E4u;
        goto label_16f4e4;
    }
    ctx->pc = 0x16F4DCu;
    {
        const bool branch_taken_0x16f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16f4dc) {
            ctx->pc = 0x16F4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F4DCu;
            // 0x16f4e0: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F4E8u;
            goto label_16f4e8;
        }
    }
    ctx->pc = 0x16F4E4u;
label_16f4e4:
    // 0x16f4e4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x16f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_16f4e8:
    // 0x16f4e8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_16f4ec:
    // 0x16f4ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f4f0:
    // 0x16f4f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x16f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_16f4f4:
    // 0x16f4f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16f4f8:
    // 0x16f4f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_16f4fc:
    // 0x16f4fc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x16f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_16f500:
    // 0x16f500: 0x10000034  b           . + 4 + (0x34 << 2)
label_16f504:
    if (ctx->pc == 0x16F504u) {
        ctx->pc = 0x16F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F500u;
        // 0x16f504: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F508u;
        goto label_16f508;
    }
    ctx->pc = 0x16F500u;
    {
        const bool branch_taken_0x16f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F500u;
        // 0x16f504: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f500) {
            ctx->pc = 0x16F5D4u;
            goto label_16f5d4;
        }
    }
    ctx->pc = 0x16F508u;
label_16f508:
    // 0x16f508: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_16f50c:
    if (ctx->pc == 0x16F50Cu) {
        ctx->pc = 0x16F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F508u;
        // 0x16f50c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F510u;
        goto label_16f510;
    }
    ctx->pc = 0x16F508u;
    {
        const bool branch_taken_0x16f508 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F508u;
        // 0x16f50c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f508) {
            ctx->pc = 0x16F514u;
            goto label_16f514;
        }
    }
    ctx->pc = 0x16F510u;
label_16f510:
    // 0x16f510: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x16f510u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_16f514:
    // 0x16f514: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x16f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f518:
    // 0x16f518: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_16f51c:
    if (ctx->pc == 0x16F51Cu) {
        ctx->pc = 0x16F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F518u;
        // 0x16f51c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F520u;
        goto label_16f520;
    }
    ctx->pc = 0x16F518u;
    {
        const bool branch_taken_0x16f518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16f518) {
            ctx->pc = 0x16F51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F518u;
            // 0x16f51c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F528u;
            goto label_16f528;
        }
    }
    ctx->pc = 0x16F520u;
label_16f520:
    // 0x16f520: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f524:
    if (ctx->pc == 0x16F524u) {
        ctx->pc = 0x16F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F520u;
        // 0x16f524: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F528u;
        goto label_16f528;
    }
    ctx->pc = 0x16F520u;
    {
        const bool branch_taken_0x16f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F520u;
        // 0x16f524: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f520) {
            ctx->pc = 0x16F538u;
            goto label_16f538;
        }
    }
    ctx->pc = 0x16F528u;
label_16f528:
    // 0x16f528: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f52c:
    // 0x16f52c: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_16f530:
    if (ctx->pc == 0x16F530u) {
        ctx->pc = 0x16F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F52Cu;
        // 0x16f530: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F534u;
        goto label_16f534;
    }
    ctx->pc = 0x16F52Cu;
    {
        const bool branch_taken_0x16f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16f52c) {
            ctx->pc = 0x16F530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F52Cu;
            // 0x16f530: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F538u;
            goto label_16f538;
        }
    }
    ctx->pc = 0x16F534u;
label_16f534:
    // 0x16f534: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x16f534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_16f538:
    // 0x16f538: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f53c:
    // 0x16f53c: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_16f540:
    if (ctx->pc == 0x16F540u) {
        ctx->pc = 0x16F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F53Cu;
        // 0x16f540: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F544u;
        goto label_16f544;
    }
    ctx->pc = 0x16F53Cu;
    {
        const bool branch_taken_0x16f53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16f53c) {
            ctx->pc = 0x16F540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F53Cu;
            // 0x16f540: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F588u;
            goto label_16f588;
        }
    }
    ctx->pc = 0x16F544u;
label_16f544:
    // 0x16f544: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16f548:
    // 0x16f548: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_16f54c:
    if (ctx->pc == 0x16F54Cu) {
        ctx->pc = 0x16F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F548u;
        // 0x16f54c: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F550u;
        goto label_16f550;
    }
    ctx->pc = 0x16F548u;
    {
        const bool branch_taken_0x16f548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f548) {
            ctx->pc = 0x16F54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F548u;
            // 0x16f54c: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F55Cu;
            goto label_16f55c;
        }
    }
    ctx->pc = 0x16F550u;
label_16f550:
    // 0x16f550: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_16f554:
    // 0x16f554: 0x1000000b  b           . + 4 + (0xB << 2)
label_16f558:
    if (ctx->pc == 0x16F558u) {
        ctx->pc = 0x16F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F554u;
        // 0x16f558: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F55Cu;
        goto label_16f55c;
    }
    ctx->pc = 0x16F554u;
    {
        const bool branch_taken_0x16f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F554u;
        // 0x16f558: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f554) {
            ctx->pc = 0x16F584u;
            goto label_16f584;
        }
    }
    ctx->pc = 0x16F55Cu;
label_16f55c:
    // 0x16f55c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16f560:
    if (ctx->pc == 0x16F560u) {
        ctx->pc = 0x16F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F55Cu;
        // 0x16f560: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F564u;
        goto label_16f564;
    }
    ctx->pc = 0x16F55Cu;
    {
        const bool branch_taken_0x16f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F55Cu;
        // 0x16f560: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f55c) {
            ctx->pc = 0x16F580u;
            goto label_16f580;
        }
    }
    ctx->pc = 0x16F564u;
label_16f564:
    // 0x16f564: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f568:
    // 0x16f568: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f56c:
    // 0x16f56c: 0x0  nop
    ctx->pc = 0x16f56cu;
    // NOP
label_16f570:
    // 0x16f570: 0x0  nop
    ctx->pc = 0x16f570u;
    // NOP
label_16f574:
    // 0x16f574: 0x0  nop
    ctx->pc = 0x16f574u;
    // NOP
label_16f578:
    // 0x16f578: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_16f57c:
    if (ctx->pc == 0x16F57Cu) {
        ctx->pc = 0x16F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F578u;
        // 0x16f57c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F580u;
        goto label_16f580;
    }
    ctx->pc = 0x16F578u;
    {
        const bool branch_taken_0x16f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f578) {
            ctx->pc = 0x16F57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F578u;
            // 0x16f57c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f568;
        }
    }
    ctx->pc = 0x16F580u;
label_16f580:
    // 0x16f580: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16f580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_16f584:
    // 0x16f584: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x16f584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16f588:
    // 0x16f588: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_16f58c:
    if (ctx->pc == 0x16F58Cu) {
        ctx->pc = 0x16F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F588u;
        // 0x16f58c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F590u;
        goto label_16f590;
    }
    ctx->pc = 0x16F588u;
    {
        const bool branch_taken_0x16f588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x16f588) {
            ctx->pc = 0x16F58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F588u;
            // 0x16f58c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F5D8u;
            goto label_16f5d8;
        }
    }
    ctx->pc = 0x16F590u;
label_16f590:
    // 0x16f590: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16f594:
    // 0x16f594: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_16f598:
    if (ctx->pc == 0x16F598u) {
        ctx->pc = 0x16F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F594u;
        // 0x16f598: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F59Cu;
        goto label_16f59c;
    }
    ctx->pc = 0x16F594u;
    {
        const bool branch_taken_0x16f594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f594) {
            ctx->pc = 0x16F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F594u;
            // 0x16f598: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F5A8u;
            goto label_16f5a8;
        }
    }
    ctx->pc = 0x16F59Cu;
label_16f59c:
    // 0x16f59c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_16f5a0:
    // 0x16f5a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_16f5a4:
    if (ctx->pc == 0x16F5A4u) {
        ctx->pc = 0x16F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5A0u;
        // 0x16f5a4: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F5A8u;
        goto label_16f5a8;
    }
    ctx->pc = 0x16F5A0u;
    {
        const bool branch_taken_0x16f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5A0u;
        // 0x16f5a4: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5a0) {
            ctx->pc = 0x16F5D4u;
            goto label_16f5d4;
        }
    }
    ctx->pc = 0x16F5A8u;
label_16f5a8:
    // 0x16f5a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16f5ac:
    if (ctx->pc == 0x16F5ACu) {
        ctx->pc = 0x16F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5A8u;
        // 0x16f5ac: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F5B0u;
        goto label_16f5b0;
    }
    ctx->pc = 0x16F5A8u;
    {
        const bool branch_taken_0x16f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5A8u;
        // 0x16f5ac: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5a8) {
            ctx->pc = 0x16F5D0u;
            goto label_16f5d0;
        }
    }
    ctx->pc = 0x16F5B0u;
label_16f5b0:
    // 0x16f5b0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x16f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16f5b4:
    // 0x16f5b4: 0x0  nop
    ctx->pc = 0x16f5b4u;
    // NOP
label_16f5b8:
    // 0x16f5b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16f5bc:
    // 0x16f5bc: 0x0  nop
    ctx->pc = 0x16f5bcu;
    // NOP
label_16f5c0:
    // 0x16f5c0: 0x0  nop
    ctx->pc = 0x16f5c0u;
    // NOP
label_16f5c4:
    // 0x16f5c4: 0x0  nop
    ctx->pc = 0x16f5c4u;
    // NOP
label_16f5c8:
    // 0x16f5c8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_16f5cc:
    if (ctx->pc == 0x16F5CCu) {
        ctx->pc = 0x16F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5C8u;
        // 0x16f5cc: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F5D0u;
        goto label_16f5d0;
    }
    ctx->pc = 0x16F5C8u;
    {
        const bool branch_taken_0x16f5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f5c8) {
            ctx->pc = 0x16F5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F5C8u;
            // 0x16f5cc: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f5b8;
        }
    }
    ctx->pc = 0x16F5D0u;
label_16f5d0:
    // 0x16f5d0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x16f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_16f5d4:
    // 0x16f5d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f5d8:
    // 0x16f5d8: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_16f5dc:
    if (ctx->pc == 0x16F5DCu) {
        ctx->pc = 0x16F5E0u;
        goto label_16f5e0;
    }
    ctx->pc = 0x16F5D8u;
    {
        const bool branch_taken_0x16f5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f5d8) {
            ctx->pc = 0x16F924u;
            goto label_16f924;
        }
    }
    ctx->pc = 0x16F5E0u;
label_16f5e0:
    // 0x16f5e0: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_16f5e4:
    if (ctx->pc == 0x16F5E4u) {
        ctx->pc = 0x16F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5E0u;
        // 0x16f5e4: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F5E8u;
        goto label_16f5e8;
    }
    ctx->pc = 0x16F5E0u;
    {
        const bool branch_taken_0x16f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5E0u;
        // 0x16f5e4: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5e0) {
            ctx->pc = 0x16F8F8u;
            goto label_16f8f8;
        }
    }
    ctx->pc = 0x16F5E8u;
label_16f5e8:
    // 0x16f5e8: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_16f5ec:
    if (ctx->pc == 0x16F5ECu) {
        ctx->pc = 0x16F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5E8u;
        // 0x16f5ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F5F0u;
        goto label_16f5f0;
    }
    ctx->pc = 0x16F5E8u;
    {
        const bool branch_taken_0x16f5e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5E8u;
        // 0x16f5ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5e8) {
            ctx->pc = 0x16F76Cu;
            goto label_16f76c;
        }
    }
    ctx->pc = 0x16F5F0u;
label_16f5f0:
    // 0x16f5f0: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16f5f4:
    // 0x16f5f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f5f8:
    // 0x16f5f8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_16f5fc:
    if (ctx->pc == 0x16F5FCu) {
        ctx->pc = 0x16F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5F8u;
        // 0x16f5fc: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F600u;
        goto label_16f600;
    }
    ctx->pc = 0x16F5F8u;
    {
        const bool branch_taken_0x16f5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f5f8) {
            ctx->pc = 0x16F5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F5F8u;
            // 0x16f5fc: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F660u;
            goto label_16f660;
        }
    }
    ctx->pc = 0x16F600u;
label_16f600:
    // 0x16f600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f604:
    // 0x16f604: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16f604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16f608:
    // 0x16f608: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x16f608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_16f60c:
    // 0x16f60c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16f610:
    // 0x16f610: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f614:
    // 0x16f614: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x16f614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_16f618:
    // 0x16f618: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f61c:
    // 0x16f61c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f620:
    if (ctx->pc == 0x16F620u) {
        ctx->pc = 0x16F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F61Cu;
        // 0x16f620: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F624u;
        goto label_16f624;
    }
    ctx->pc = 0x16F61Cu;
    {
        const bool branch_taken_0x16f61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f61c) {
            ctx->pc = 0x16F620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F61Cu;
            // 0x16f620: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F624u;
            goto label_16f624;
        }
    }
    ctx->pc = 0x16F624u;
label_16f624:
    // 0x16f624: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16f628:
    // 0x16f628: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16f628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16f62c:
    // 0x16f62c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f630:
    // 0x16f630: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16f634:
    if (ctx->pc == 0x16F634u) {
        ctx->pc = 0x16F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F630u;
        // 0x16f634: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F638u;
        goto label_16f638;
    }
    ctx->pc = 0x16F630u;
    {
        const bool branch_taken_0x16f630 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f630) {
            ctx->pc = 0x16F634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F630u;
            // 0x16f634: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F640u;
            goto label_16f640;
        }
    }
    ctx->pc = 0x16F638u;
label_16f638:
    // 0x16f638: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f63c:
    if (ctx->pc == 0x16F63Cu) {
        ctx->pc = 0x16F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F638u;
        // 0x16f63c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F640u;
        goto label_16f640;
    }
    ctx->pc = 0x16F638u;
    {
        const bool branch_taken_0x16f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F638u;
        // 0x16f63c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f638) {
            ctx->pc = 0x16F650u;
            goto label_16f650;
        }
    }
    ctx->pc = 0x16F640u;
label_16f640:
    // 0x16f640: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f644:
    // 0x16f644: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16f648:
    if (ctx->pc == 0x16F648u) {
        ctx->pc = 0x16F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F644u;
        // 0x16f648: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F64Cu;
        goto label_16f64c;
    }
    ctx->pc = 0x16F644u;
    {
        const bool branch_taken_0x16f644 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f644) {
            ctx->pc = 0x16F648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F644u;
            // 0x16f648: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F650u;
            goto label_16f650;
        }
    }
    ctx->pc = 0x16F64Cu;
label_16f64c:
    // 0x16f64c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x16f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_16f650:
    // 0x16f650: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x16f650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_16f654:
    // 0x16f654: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x16f654u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_16f658:
    // 0x16f658: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16f658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16f65c:
    // 0x16f65c: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x16f65cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f660:
    // 0x16f660: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_16f664:
    if (ctx->pc == 0x16F664u) {
        ctx->pc = 0x16F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F660u;
        // 0x16f664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F668u;
        goto label_16f668;
    }
    ctx->pc = 0x16F660u;
    {
        const bool branch_taken_0x16f660 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F660u;
        // 0x16f664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f660) {
            ctx->pc = 0x16F674u;
            goto label_16f674;
        }
    }
    ctx->pc = 0x16F668u;
label_16f668:
    // 0x16f668: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x16f668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16f66c:
    // 0x16f66c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_16f670:
    if (ctx->pc == 0x16F670u) {
        ctx->pc = 0x16F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F66Cu;
        // 0x16f670: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F674u;
        goto label_16f674;
    }
    ctx->pc = 0x16F66Cu;
    {
        const bool branch_taken_0x16f66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F66Cu;
        // 0x16f670: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f66c) {
            ctx->pc = 0x16F68Cu;
            goto label_16f68c;
        }
    }
    ctx->pc = 0x16F674u;
label_16f674:
    // 0x16f674: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f678:
    // 0x16f678: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_16f67c:
    if (ctx->pc == 0x16F67Cu) {
        ctx->pc = 0x16F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F678u;
        // 0x16f67c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F680u;
        goto label_16f680;
    }
    ctx->pc = 0x16F678u;
    {
        const bool branch_taken_0x16f678 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F678u;
        // 0x16f67c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f678) {
            ctx->pc = 0x16F804u;
            goto label_16f804;
        }
    }
    ctx->pc = 0x16F680u;
label_16f680:
    // 0x16f680: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16f684:
    // 0x16f684: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_16f688:
    if (ctx->pc == 0x16F688u) {
        ctx->pc = 0x16F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F684u;
        // 0x16f688: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F68Cu;
        goto label_16f68c;
    }
    ctx->pc = 0x16F684u;
    {
        const bool branch_taken_0x16f684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f684) {
            ctx->pc = 0x16F688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F684u;
            // 0x16f688: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F808u;
            goto label_16f808;
        }
    }
    ctx->pc = 0x16F68Cu;
label_16f68c:
    // 0x16f68c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_16f690:
    if (ctx->pc == 0x16F690u) {
        ctx->pc = 0x16F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F68Cu;
        // 0x16f690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F694u;
        goto label_16f694;
    }
    ctx->pc = 0x16F68Cu;
    {
        const bool branch_taken_0x16f68c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F68Cu;
        // 0x16f690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f68c) {
            ctx->pc = 0x16F6A0u;
            goto label_16f6a0;
        }
    }
    ctx->pc = 0x16F694u;
label_16f694:
    // 0x16f694: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16f698:
    // 0x16f698: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_16f69c:
    if (ctx->pc == 0x16F69Cu) {
        ctx->pc = 0x16F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F698u;
        // 0x16f69c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6A0u;
        goto label_16f6a0;
    }
    ctx->pc = 0x16F698u;
    {
        const bool branch_taken_0x16f698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f698) {
            ctx->pc = 0x16F69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F698u;
            // 0x16f69c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F704u;
            goto label_16f704;
        }
    }
    ctx->pc = 0x16F6A0u;
label_16f6a0:
    // 0x16f6a0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_16f6a4:
    if (ctx->pc == 0x16F6A4u) {
        ctx->pc = 0x16F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6A0u;
        // 0x16f6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6A8u;
        goto label_16f6a8;
    }
    ctx->pc = 0x16F6A0u;
    {
        const bool branch_taken_0x16f6a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6A0u;
        // 0x16f6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6a0) {
            ctx->pc = 0x16F6ACu;
            goto label_16f6ac;
        }
    }
    ctx->pc = 0x16F6A8u;
label_16f6a8:
    // 0x16f6a8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x16f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_16f6ac:
    // 0x16f6ac: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x16f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f6b0:
    // 0x16f6b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_16f6b4:
    // 0x16f6b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16f6b8:
    // 0x16f6b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x16f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_16f6bc:
    // 0x16f6bc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16f6c0:
    // 0x16f6c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f6c4:
    if (ctx->pc == 0x16F6C4u) {
        ctx->pc = 0x16F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6C0u;
        // 0x16f6c4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6C8u;
        goto label_16f6c8;
    }
    ctx->pc = 0x16F6C0u;
    {
        const bool branch_taken_0x16f6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f6c0) {
            ctx->pc = 0x16F6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F6C0u;
            // 0x16f6c4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F6C8u;
            goto label_16f6c8;
        }
    }
    ctx->pc = 0x16F6C8u;
label_16f6c8:
    // 0x16f6c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_16f6cc:
    // 0x16f6cc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x16f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_16f6d0:
    // 0x16f6d0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f6d4:
    // 0x16f6d4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_16f6d8:
    if (ctx->pc == 0x16F6D8u) {
        ctx->pc = 0x16F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6D4u;
        // 0x16f6d8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6DCu;
        goto label_16f6dc;
    }
    ctx->pc = 0x16F6D4u;
    {
        const bool branch_taken_0x16f6d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f6d4) {
            ctx->pc = 0x16F6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F6D4u;
            // 0x16f6d8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F6E4u;
            goto label_16f6e4;
        }
    }
    ctx->pc = 0x16F6DCu;
label_16f6dc:
    // 0x16f6dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f6e0:
    if (ctx->pc == 0x16F6E0u) {
        ctx->pc = 0x16F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6DCu;
        // 0x16f6e0: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6E4u;
        goto label_16f6e4;
    }
    ctx->pc = 0x16F6DCu;
    {
        const bool branch_taken_0x16f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6DCu;
        // 0x16f6e0: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6dc) {
            ctx->pc = 0x16F6F4u;
            goto label_16f6f4;
        }
    }
    ctx->pc = 0x16F6E4u;
label_16f6e4:
    // 0x16f6e4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16f6e8:
    // 0x16f6e8: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_16f6ec:
    if (ctx->pc == 0x16F6ECu) {
        ctx->pc = 0x16F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6E8u;
        // 0x16f6ec: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6F0u;
        goto label_16f6f0;
    }
    ctx->pc = 0x16F6E8u;
    {
        const bool branch_taken_0x16f6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f6e8) {
            ctx->pc = 0x16F6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F6E8u;
            // 0x16f6ec: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F6F4u;
            goto label_16f6f4;
        }
    }
    ctx->pc = 0x16F6F0u;
label_16f6f0:
    // 0x16f6f0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x16f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_16f6f4:
    // 0x16f6f4: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x16f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_16f6f8:
    // 0x16f6f8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x16f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_16f6fc:
    // 0x16f6fc: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16f700:
    // 0x16f700: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16f704:
    // 0x16f704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f708:
    // 0x16f708: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16f708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16f70c:
    // 0x16f70c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_16f710:
    // 0x16f710: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f714:
    // 0x16f714: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f718:
    if (ctx->pc == 0x16F718u) {
        ctx->pc = 0x16F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F714u;
        // 0x16f718: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F71Cu;
        goto label_16f71c;
    }
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F714u;
            // 0x16f718: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F71Cu;
            goto label_16f71c;
        }
    }
    ctx->pc = 0x16F71Cu;
label_16f71c:
    // 0x16f71c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x16f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16f720:
    // 0x16f720: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f724:
    // 0x16f724: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x16f724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_16f728:
    // 0x16f728: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f72c:
    // 0x16f72c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f730:
    if (ctx->pc == 0x16F730u) {
        ctx->pc = 0x16F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F72Cu;
        // 0x16f730: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F734u;
        goto label_16f734;
    }
    ctx->pc = 0x16F72Cu;
    {
        const bool branch_taken_0x16f72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f72c) {
            ctx->pc = 0x16F730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F72Cu;
            // 0x16f730: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F734u;
            goto label_16f734;
        }
    }
    ctx->pc = 0x16F734u;
label_16f734:
    // 0x16f734: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16f738:
    // 0x16f738: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16f738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16f73c:
    // 0x16f73c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f740:
    // 0x16f740: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16f744:
    if (ctx->pc == 0x16F744u) {
        ctx->pc = 0x16F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F740u;
        // 0x16f744: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F748u;
        goto label_16f748;
    }
    ctx->pc = 0x16F740u;
    {
        const bool branch_taken_0x16f740 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f740) {
            ctx->pc = 0x16F744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F740u;
            // 0x16f744: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F750u;
            goto label_16f750;
        }
    }
    ctx->pc = 0x16F748u;
label_16f748:
    // 0x16f748: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f74c:
    if (ctx->pc == 0x16F74Cu) {
        ctx->pc = 0x16F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F748u;
        // 0x16f74c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F750u;
        goto label_16f750;
    }
    ctx->pc = 0x16F748u;
    {
        const bool branch_taken_0x16f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F748u;
        // 0x16f74c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f748) {
            ctx->pc = 0x16F760u;
            goto label_16f760;
        }
    }
    ctx->pc = 0x16F750u;
label_16f750:
    // 0x16f750: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f754:
    // 0x16f754: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16f758:
    if (ctx->pc == 0x16F758u) {
        ctx->pc = 0x16F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F754u;
        // 0x16f758: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F75Cu;
        goto label_16f75c;
    }
    ctx->pc = 0x16F754u;
    {
        const bool branch_taken_0x16f754 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f754) {
            ctx->pc = 0x16F758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F754u;
            // 0x16f758: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F760u;
            goto label_16f760;
        }
    }
    ctx->pc = 0x16F75Cu;
label_16f75c:
    // 0x16f75c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x16f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_16f760:
    // 0x16f760: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x16f760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_16f764:
    // 0x16f764: 0x1000006c  b           . + 4 + (0x6C << 2)
label_16f768:
    if (ctx->pc == 0x16F768u) {
        ctx->pc = 0x16F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F764u;
        // 0x16f768: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F76Cu;
        goto label_16f76c;
    }
    ctx->pc = 0x16F764u;
    {
        const bool branch_taken_0x16f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F764u;
        // 0x16f768: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f764) {
            ctx->pc = 0x16F918u;
            goto label_16f918;
        }
    }
    ctx->pc = 0x16F76Cu;
label_16f76c:
    // 0x16f76c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f770:
    // 0x16f770: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_16f774:
    if (ctx->pc == 0x16F774u) {
        ctx->pc = 0x16F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F770u;
        // 0x16f774: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F778u;
        goto label_16f778;
    }
    ctx->pc = 0x16F770u;
    {
        const bool branch_taken_0x16f770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f770) {
            ctx->pc = 0x16F774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F770u;
            // 0x16f774: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F7D8u;
            goto label_16f7d8;
        }
    }
    ctx->pc = 0x16F778u;
label_16f778:
    // 0x16f778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f77c:
    // 0x16f77c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16f780:
    // 0x16f780: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x16f780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_16f784:
    // 0x16f784: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16f784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16f788:
    // 0x16f788: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f78c:
    // 0x16f78c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x16f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_16f790:
    // 0x16f790: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f794:
    // 0x16f794: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f798:
    if (ctx->pc == 0x16F798u) {
        ctx->pc = 0x16F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F794u;
        // 0x16f798: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F79Cu;
        goto label_16f79c;
    }
    ctx->pc = 0x16F794u;
    {
        const bool branch_taken_0x16f794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f794) {
            ctx->pc = 0x16F798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F794u;
            // 0x16f798: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F79Cu;
            goto label_16f79c;
        }
    }
    ctx->pc = 0x16F79Cu;
label_16f79c:
    // 0x16f79c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16f7a0:
    // 0x16f7a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16f7a4:
    // 0x16f7a4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f7a8:
    // 0x16f7a8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16f7ac:
    if (ctx->pc == 0x16F7ACu) {
        ctx->pc = 0x16F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7A8u;
        // 0x16f7ac: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7B0u;
        goto label_16f7b0;
    }
    ctx->pc = 0x16F7A8u;
    {
        const bool branch_taken_0x16f7a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f7a8) {
            ctx->pc = 0x16F7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F7A8u;
            // 0x16f7ac: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F7B8u;
            goto label_16f7b8;
        }
    }
    ctx->pc = 0x16F7B0u;
label_16f7b0:
    // 0x16f7b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f7b4:
    if (ctx->pc == 0x16F7B4u) {
        ctx->pc = 0x16F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7B0u;
        // 0x16f7b4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7B8u;
        goto label_16f7b8;
    }
    ctx->pc = 0x16F7B0u;
    {
        const bool branch_taken_0x16f7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7B0u;
        // 0x16f7b4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7b0) {
            ctx->pc = 0x16F7C8u;
            goto label_16f7c8;
        }
    }
    ctx->pc = 0x16F7B8u;
label_16f7b8:
    // 0x16f7b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16f7bc:
    // 0x16f7bc: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16f7c0:
    if (ctx->pc == 0x16F7C0u) {
        ctx->pc = 0x16F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7BCu;
        // 0x16f7c0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7C4u;
        goto label_16f7c4;
    }
    ctx->pc = 0x16F7BCu;
    {
        const bool branch_taken_0x16f7bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f7bc) {
            ctx->pc = 0x16F7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F7BCu;
            // 0x16f7c0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F7C8u;
            goto label_16f7c8;
        }
    }
    ctx->pc = 0x16F7C4u;
label_16f7c4:
    // 0x16f7c4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x16f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_16f7c8:
    // 0x16f7c8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x16f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_16f7cc:
    // 0x16f7cc: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x16f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_16f7d0:
    // 0x16f7d0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16f7d4:
    // 0x16f7d4: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f7d8:
    // 0x16f7d8: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_16f7dc:
    if (ctx->pc == 0x16F7DCu) {
        ctx->pc = 0x16F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7D8u;
        // 0x16f7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7E0u;
        goto label_16f7e0;
    }
    ctx->pc = 0x16F7D8u;
    {
        const bool branch_taken_0x16f7d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7D8u;
        // 0x16f7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7d8) {
            ctx->pc = 0x16F7ECu;
            goto label_16f7ec;
        }
    }
    ctx->pc = 0x16F7E0u;
label_16f7e0:
    // 0x16f7e0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x16f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16f7e4:
    // 0x16f7e4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_16f7e8:
    if (ctx->pc == 0x16F7E8u) {
        ctx->pc = 0x16F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7E4u;
        // 0x16f7e8: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7ECu;
        goto label_16f7ec;
    }
    ctx->pc = 0x16F7E4u;
    {
        const bool branch_taken_0x16f7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7E4u;
        // 0x16f7e8: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7e4) {
            ctx->pc = 0x16F814u;
            goto label_16f814;
        }
    }
    ctx->pc = 0x16F7ECu;
label_16f7ec:
    // 0x16f7ec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x16f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f7f0:
    // 0x16f7f0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_16f7f4:
    if (ctx->pc == 0x16F7F4u) {
        ctx->pc = 0x16F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7F0u;
        // 0x16f7f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7F8u;
        goto label_16f7f8;
    }
    ctx->pc = 0x16F7F0u;
    {
        const bool branch_taken_0x16f7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7F0u;
        // 0x16f7f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7f0) {
            ctx->pc = 0x16F804u;
            goto label_16f804;
        }
    }
    ctx->pc = 0x16F7F8u;
label_16f7f8:
    // 0x16f7f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16f7fc:
    // 0x16f7fc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_16f800:
    if (ctx->pc == 0x16F800u) {
        ctx->pc = 0x16F804u;
        goto label_16f804;
    }
    ctx->pc = 0x16F7FCu;
    {
        const bool branch_taken_0x16f7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f7fc) {
            ctx->pc = 0x16F814u;
            goto label_16f814;
        }
    }
    ctx->pc = 0x16F804u;
label_16f804:
    // 0x16f804: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16f804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_16f808:
    // 0x16f808: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x16f808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16f80c:
    // 0x16f80c: 0x10000039  b           . + 4 + (0x39 << 2)
label_16f810:
    if (ctx->pc == 0x16F810u) {
        ctx->pc = 0x16F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F80Cu;
        // 0x16f810: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F814u;
        goto label_16f814;
    }
    ctx->pc = 0x16F80Cu;
    {
        const bool branch_taken_0x16f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F80Cu;
        // 0x16f810: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f80c) {
            ctx->pc = 0x16F8F4u;
            goto label_16f8f4;
        }
    }
    ctx->pc = 0x16F814u;
label_16f814:
    // 0x16f814: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_16f818:
    if (ctx->pc == 0x16F818u) {
        ctx->pc = 0x16F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F814u;
        // 0x16f818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F81Cu;
        goto label_16f81c;
    }
    ctx->pc = 0x16F814u;
    {
        const bool branch_taken_0x16f814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F814u;
        // 0x16f818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f814) {
            ctx->pc = 0x16F828u;
            goto label_16f828;
        }
    }
    ctx->pc = 0x16F81Cu;
label_16f81c:
    // 0x16f81c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16f820:
    // 0x16f820: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_16f824:
    if (ctx->pc == 0x16F824u) {
        ctx->pc = 0x16F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F820u;
        // 0x16f824: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F828u;
        goto label_16f828;
    }
    ctx->pc = 0x16F820u;
    {
        const bool branch_taken_0x16f820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f820) {
            ctx->pc = 0x16F824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F820u;
            // 0x16f824: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F88Cu;
            goto label_16f88c;
        }
    }
    ctx->pc = 0x16F828u;
label_16f828:
    // 0x16f828: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_16f82c:
    if (ctx->pc == 0x16F82Cu) {
        ctx->pc = 0x16F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F828u;
        // 0x16f82c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F830u;
        goto label_16f830;
    }
    ctx->pc = 0x16F828u;
    {
        const bool branch_taken_0x16f828 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F828u;
        // 0x16f82c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f828) {
            ctx->pc = 0x16F834u;
            goto label_16f834;
        }
    }
    ctx->pc = 0x16F830u;
label_16f830:
    // 0x16f830: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x16f830u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_16f834:
    // 0x16f834: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x16f834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f838:
    // 0x16f838: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16f838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_16f83c:
    // 0x16f83c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16f840:
    // 0x16f840: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x16f840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_16f844:
    // 0x16f844: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16f848:
    // 0x16f848: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f84c:
    if (ctx->pc == 0x16F84Cu) {
        ctx->pc = 0x16F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F848u;
        // 0x16f84c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F850u;
        goto label_16f850;
    }
    ctx->pc = 0x16F848u;
    {
        const bool branch_taken_0x16f848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f848) {
            ctx->pc = 0x16F84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F848u;
            // 0x16f84c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F850u;
            goto label_16f850;
        }
    }
    ctx->pc = 0x16F850u;
label_16f850:
    // 0x16f850: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_16f854:
    // 0x16f854: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x16f854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_16f858:
    // 0x16f858: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f85c:
    // 0x16f85c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_16f860:
    if (ctx->pc == 0x16F860u) {
        ctx->pc = 0x16F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F85Cu;
        // 0x16f860: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F864u;
        goto label_16f864;
    }
    ctx->pc = 0x16F85Cu;
    {
        const bool branch_taken_0x16f85c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f85c) {
            ctx->pc = 0x16F860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F85Cu;
            // 0x16f860: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F86Cu;
            goto label_16f86c;
        }
    }
    ctx->pc = 0x16F864u;
label_16f864:
    // 0x16f864: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f868:
    if (ctx->pc == 0x16F868u) {
        ctx->pc = 0x16F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F864u;
        // 0x16f868: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F86Cu;
        goto label_16f86c;
    }
    ctx->pc = 0x16F864u;
    {
        const bool branch_taken_0x16f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F864u;
        // 0x16f868: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f864) {
            ctx->pc = 0x16F87Cu;
            goto label_16f87c;
        }
    }
    ctx->pc = 0x16F86Cu;
label_16f86c:
    // 0x16f86c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f870:
    // 0x16f870: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_16f874:
    if (ctx->pc == 0x16F874u) {
        ctx->pc = 0x16F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F870u;
        // 0x16f874: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F878u;
        goto label_16f878;
    }
    ctx->pc = 0x16F870u;
    {
        const bool branch_taken_0x16f870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f870) {
            ctx->pc = 0x16F874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F870u;
            // 0x16f874: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F87Cu;
            goto label_16f87c;
        }
    }
    ctx->pc = 0x16F878u;
label_16f878:
    // 0x16f878: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x16f878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_16f87c:
    // 0x16f87c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x16f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_16f880:
    // 0x16f880: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x16f880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_16f884:
    // 0x16f884: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16f884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16f888:
    // 0x16f888: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16f88c:
    // 0x16f88c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f890:
    // 0x16f890: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16f890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_16f894:
    // 0x16f894: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16f894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_16f898:
    // 0x16f898: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f89c:
    // 0x16f89c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f8a0:
    if (ctx->pc == 0x16F8A0u) {
        ctx->pc = 0x16F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F89Cu;
        // 0x16f8a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8A4u;
        goto label_16f8a4;
    }
    ctx->pc = 0x16F89Cu;
    {
        const bool branch_taken_0x16f89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f89c) {
            ctx->pc = 0x16F8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F89Cu;
            // 0x16f8a0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F8A4u;
            goto label_16f8a4;
        }
    }
    ctx->pc = 0x16F8A4u;
label_16f8a4:
    // 0x16f8a4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16f8a8:
    // 0x16f8a8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f8ac:
    // 0x16f8ac: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x16f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_16f8b0:
    // 0x16f8b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f8b4:
    // 0x16f8b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_16f8b8:
    if (ctx->pc == 0x16F8B8u) {
        ctx->pc = 0x16F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8B4u;
        // 0x16f8b8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8BCu;
        goto label_16f8bc;
    }
    ctx->pc = 0x16F8B4u;
    {
        const bool branch_taken_0x16f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f8b4) {
            ctx->pc = 0x16F8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F8B4u;
            // 0x16f8b8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F8BCu;
            goto label_16f8bc;
        }
    }
    ctx->pc = 0x16F8BCu;
label_16f8bc:
    // 0x16f8bc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x16f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_16f8c0:
    // 0x16f8c0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_16f8c4:
    // 0x16f8c4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f8c8:
    // 0x16f8c8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_16f8cc:
    if (ctx->pc == 0x16F8CCu) {
        ctx->pc = 0x16F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8C8u;
        // 0x16f8cc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8D0u;
        goto label_16f8d0;
    }
    ctx->pc = 0x16F8C8u;
    {
        const bool branch_taken_0x16f8c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f8c8) {
            ctx->pc = 0x16F8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F8C8u;
            // 0x16f8cc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F8D8u;
            goto label_16f8d8;
        }
    }
    ctx->pc = 0x16F8D0u;
label_16f8d0:
    // 0x16f8d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16f8d4:
    if (ctx->pc == 0x16F8D4u) {
        ctx->pc = 0x16F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8D0u;
        // 0x16f8d4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8D8u;
        goto label_16f8d8;
    }
    ctx->pc = 0x16F8D0u;
    {
        const bool branch_taken_0x16f8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8D0u;
        // 0x16f8d4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8d0) {
            ctx->pc = 0x16F8E8u;
            goto label_16f8e8;
        }
    }
    ctx->pc = 0x16F8D8u;
label_16f8d8:
    // 0x16f8d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16f8dc:
    // 0x16f8dc: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_16f8e0:
    if (ctx->pc == 0x16F8E0u) {
        ctx->pc = 0x16F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8DCu;
        // 0x16f8e0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8E4u;
        goto label_16f8e4;
    }
    ctx->pc = 0x16F8DCu;
    {
        const bool branch_taken_0x16f8dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f8dc) {
            ctx->pc = 0x16F8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F8DCu;
            // 0x16f8e0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F8E8u;
            goto label_16f8e8;
        }
    }
    ctx->pc = 0x16F8E4u;
label_16f8e4:
    // 0x16f8e4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x16f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_16f8e8:
    // 0x16f8e8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x16f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_16f8ec:
    // 0x16f8ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_16f8f0:
    if (ctx->pc == 0x16F8F0u) {
        ctx->pc = 0x16F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8ECu;
        // 0x16f8f0: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8F4u;
        goto label_16f8f4;
    }
    ctx->pc = 0x16F8ECu;
    {
        const bool branch_taken_0x16f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8ECu;
        // 0x16f8f0: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8ec) {
            ctx->pc = 0x16F918u;
            goto label_16f918;
        }
    }
    ctx->pc = 0x16F8F4u;
label_16f8f4:
    // 0x16f8f4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x16f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_16f8f8:
    // 0x16f8f8: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_16f8fc:
    if (ctx->pc == 0x16F8FCu) {
        ctx->pc = 0x16F900u;
        goto label_16f900;
    }
    ctx->pc = 0x16F8F8u;
    {
        const bool branch_taken_0x16f8f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f8f8) {
            ctx->pc = 0x16F918u;
            goto label_16f918;
        }
    }
    ctx->pc = 0x16F900u;
label_16f900:
    // 0x16f900: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_16f904:
    if (ctx->pc == 0x16F904u) {
        ctx->pc = 0x16F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F900u;
        // 0x16f904: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F908u;
        goto label_16f908;
    }
    ctx->pc = 0x16F900u;
    {
        const bool branch_taken_0x16f900 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f900) {
            ctx->pc = 0x16F904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F900u;
            // 0x16f904: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f5e8;
        }
    }
    ctx->pc = 0x16F908u;
label_16f908:
    // 0x16f908: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x16f908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_16f90c:
    // 0x16f90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f910:
    // 0x16f910: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_16f914:
    if (ctx->pc == 0x16F914u) {
        ctx->pc = 0x16F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F910u;
        // 0x16f914: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F918u;
        goto label_16f918;
    }
    ctx->pc = 0x16F910u;
    {
        const bool branch_taken_0x16f910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f910) {
            ctx->pc = 0x16F914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F910u;
            // 0x16f914: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f5e8;
        }
    }
    ctx->pc = 0x16F918u;
label_16f918:
    // 0x16f918: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_16f91c:
    if (ctx->pc == 0x16F91Cu) {
        ctx->pc = 0x16F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F918u;
        // 0x16f91c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F920u;
        goto label_16f920;
    }
    ctx->pc = 0x16F918u;
    {
        const bool branch_taken_0x16f918 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F918u;
        // 0x16f91c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f918) {
            ctx->pc = 0x16F924u;
            goto label_16f924;
        }
    }
    ctx->pc = 0x16F920u;
label_16f920:
    // 0x16f920: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x16f920u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_16f924:
    // 0x16f924: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_16f928:
    if (ctx->pc == 0x16F928u) {
        ctx->pc = 0x16F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F924u;
        // 0x16f928: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F92Cu;
        goto label_16f92c;
    }
    ctx->pc = 0x16F924u;
    {
        const bool branch_taken_0x16f924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F924u;
        // 0x16f928: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f924) {
            ctx->pc = 0x16F950u;
            goto label_16f950;
        }
    }
    ctx->pc = 0x16F92Cu;
label_16f92c:
    // 0x16f92c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16f92cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16f930:
    // 0x16f930: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_16f934:
    // 0x16f934: 0x24c61938  addiu       $a2, $a2, 0x1938
    ctx->pc = 0x16f934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6456));
label_16f938:
    // 0x16f938: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x16f938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_16f93c:
    // 0x16f93c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x16f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16f940:
    // 0x16f940: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x16f940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_16f944:
    // 0x16f944: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x16f944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_16f948:
    // 0x16f948: 0x60f809  jalr        $v1
label_16f94c:
    if (ctx->pc == 0x16F94Cu) {
        ctx->pc = 0x16F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F948u;
        // 0x16f94c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F950u;
        goto label_16f950;
    }
    ctx->pc = 0x16F948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F950u);
        ctx->pc = 0x16F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F948u;
        // 0x16f94c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F948u, 0x16F950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F950u;
label_16f950:
    // 0x16f950: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x16f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_16f954:
    // 0x16f954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f958:
    // 0x16f958: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16f95c:
    // 0x16f95c: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x16f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_16f960:
    // 0x16f960: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16f960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16f964:
    // 0x16f964: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16f964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16f968:
    // 0x16f968: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16f968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16f96c:
    // 0x16f96c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16f96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16f970:
    // 0x16f970: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16f970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f974:
    // 0x16f974: 0x3e00008  jr          $ra
label_16f978:
    if (ctx->pc == 0x16F978u) {
        ctx->pc = 0x16F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F974u;
        // 0x16f978: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F97Cu;
        goto label_16f97c;
    }
    ctx->pc = 0x16F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F974u;
        // 0x16f978: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F97Cu;
label_16f97c:
    // 0x16f97c: 0x0  nop
    ctx->pc = 0x16f97cu;
    // NOP
    ctx->pc = 0x16f980u;
}
