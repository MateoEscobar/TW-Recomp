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

// Function: sub_0033C288
// Address: 0x33c288 - 0x33cb08
void sub_0033C288_0x33c288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C288_0x33c288");
#endif

    switch (ctx->pc) {
        case 0x33c288u: goto label_33c288;
        case 0x33c28cu: goto label_33c28c;
        case 0x33c290u: goto label_33c290;
        case 0x33c294u: goto label_33c294;
        case 0x33c298u: goto label_33c298;
        case 0x33c29cu: goto label_33c29c;
        case 0x33c2a0u: goto label_33c2a0;
        case 0x33c2a4u: goto label_33c2a4;
        case 0x33c2a8u: goto label_33c2a8;
        case 0x33c2acu: goto label_33c2ac;
        case 0x33c2b0u: goto label_33c2b0;
        case 0x33c2b4u: goto label_33c2b4;
        case 0x33c2b8u: goto label_33c2b8;
        case 0x33c2bcu: goto label_33c2bc;
        case 0x33c2c0u: goto label_33c2c0;
        case 0x33c2c4u: goto label_33c2c4;
        case 0x33c2c8u: goto label_33c2c8;
        case 0x33c2ccu: goto label_33c2cc;
        case 0x33c2d0u: goto label_33c2d0;
        case 0x33c2d4u: goto label_33c2d4;
        case 0x33c2d8u: goto label_33c2d8;
        case 0x33c2dcu: goto label_33c2dc;
        case 0x33c2e0u: goto label_33c2e0;
        case 0x33c2e4u: goto label_33c2e4;
        case 0x33c2e8u: goto label_33c2e8;
        case 0x33c2ecu: goto label_33c2ec;
        case 0x33c2f0u: goto label_33c2f0;
        case 0x33c2f4u: goto label_33c2f4;
        case 0x33c2f8u: goto label_33c2f8;
        case 0x33c2fcu: goto label_33c2fc;
        case 0x33c300u: goto label_33c300;
        case 0x33c304u: goto label_33c304;
        case 0x33c308u: goto label_33c308;
        case 0x33c30cu: goto label_33c30c;
        case 0x33c310u: goto label_33c310;
        case 0x33c314u: goto label_33c314;
        case 0x33c318u: goto label_33c318;
        case 0x33c31cu: goto label_33c31c;
        case 0x33c320u: goto label_33c320;
        case 0x33c324u: goto label_33c324;
        case 0x33c328u: goto label_33c328;
        case 0x33c32cu: goto label_33c32c;
        case 0x33c330u: goto label_33c330;
        case 0x33c334u: goto label_33c334;
        case 0x33c338u: goto label_33c338;
        case 0x33c33cu: goto label_33c33c;
        case 0x33c340u: goto label_33c340;
        case 0x33c344u: goto label_33c344;
        case 0x33c348u: goto label_33c348;
        case 0x33c34cu: goto label_33c34c;
        case 0x33c350u: goto label_33c350;
        case 0x33c354u: goto label_33c354;
        case 0x33c358u: goto label_33c358;
        case 0x33c35cu: goto label_33c35c;
        case 0x33c360u: goto label_33c360;
        case 0x33c364u: goto label_33c364;
        case 0x33c368u: goto label_33c368;
        case 0x33c36cu: goto label_33c36c;
        case 0x33c370u: goto label_33c370;
        case 0x33c374u: goto label_33c374;
        case 0x33c378u: goto label_33c378;
        case 0x33c37cu: goto label_33c37c;
        case 0x33c380u: goto label_33c380;
        case 0x33c384u: goto label_33c384;
        case 0x33c388u: goto label_33c388;
        case 0x33c38cu: goto label_33c38c;
        case 0x33c390u: goto label_33c390;
        case 0x33c394u: goto label_33c394;
        case 0x33c398u: goto label_33c398;
        case 0x33c39cu: goto label_33c39c;
        case 0x33c3a0u: goto label_33c3a0;
        case 0x33c3a4u: goto label_33c3a4;
        case 0x33c3a8u: goto label_33c3a8;
        case 0x33c3acu: goto label_33c3ac;
        case 0x33c3b0u: goto label_33c3b0;
        case 0x33c3b4u: goto label_33c3b4;
        case 0x33c3b8u: goto label_33c3b8;
        case 0x33c3bcu: goto label_33c3bc;
        case 0x33c3c0u: goto label_33c3c0;
        case 0x33c3c4u: goto label_33c3c4;
        case 0x33c3c8u: goto label_33c3c8;
        case 0x33c3ccu: goto label_33c3cc;
        case 0x33c3d0u: goto label_33c3d0;
        case 0x33c3d4u: goto label_33c3d4;
        case 0x33c3d8u: goto label_33c3d8;
        case 0x33c3dcu: goto label_33c3dc;
        case 0x33c3e0u: goto label_33c3e0;
        case 0x33c3e4u: goto label_33c3e4;
        case 0x33c3e8u: goto label_33c3e8;
        case 0x33c3ecu: goto label_33c3ec;
        case 0x33c3f0u: goto label_33c3f0;
        case 0x33c3f4u: goto label_33c3f4;
        case 0x33c3f8u: goto label_33c3f8;
        case 0x33c3fcu: goto label_33c3fc;
        case 0x33c400u: goto label_33c400;
        case 0x33c404u: goto label_33c404;
        case 0x33c408u: goto label_33c408;
        case 0x33c40cu: goto label_33c40c;
        case 0x33c410u: goto label_33c410;
        case 0x33c414u: goto label_33c414;
        case 0x33c418u: goto label_33c418;
        case 0x33c41cu: goto label_33c41c;
        case 0x33c420u: goto label_33c420;
        case 0x33c424u: goto label_33c424;
        case 0x33c428u: goto label_33c428;
        case 0x33c42cu: goto label_33c42c;
        case 0x33c430u: goto label_33c430;
        case 0x33c434u: goto label_33c434;
        case 0x33c438u: goto label_33c438;
        case 0x33c43cu: goto label_33c43c;
        case 0x33c440u: goto label_33c440;
        case 0x33c444u: goto label_33c444;
        case 0x33c448u: goto label_33c448;
        case 0x33c44cu: goto label_33c44c;
        case 0x33c450u: goto label_33c450;
        case 0x33c454u: goto label_33c454;
        case 0x33c458u: goto label_33c458;
        case 0x33c45cu: goto label_33c45c;
        case 0x33c460u: goto label_33c460;
        case 0x33c464u: goto label_33c464;
        case 0x33c468u: goto label_33c468;
        case 0x33c46cu: goto label_33c46c;
        case 0x33c470u: goto label_33c470;
        case 0x33c474u: goto label_33c474;
        case 0x33c478u: goto label_33c478;
        case 0x33c47cu: goto label_33c47c;
        case 0x33c480u: goto label_33c480;
        case 0x33c484u: goto label_33c484;
        case 0x33c488u: goto label_33c488;
        case 0x33c48cu: goto label_33c48c;
        case 0x33c490u: goto label_33c490;
        case 0x33c494u: goto label_33c494;
        case 0x33c498u: goto label_33c498;
        case 0x33c49cu: goto label_33c49c;
        case 0x33c4a0u: goto label_33c4a0;
        case 0x33c4a4u: goto label_33c4a4;
        case 0x33c4a8u: goto label_33c4a8;
        case 0x33c4acu: goto label_33c4ac;
        case 0x33c4b0u: goto label_33c4b0;
        case 0x33c4b4u: goto label_33c4b4;
        case 0x33c4b8u: goto label_33c4b8;
        case 0x33c4bcu: goto label_33c4bc;
        case 0x33c4c0u: goto label_33c4c0;
        case 0x33c4c4u: goto label_33c4c4;
        case 0x33c4c8u: goto label_33c4c8;
        case 0x33c4ccu: goto label_33c4cc;
        case 0x33c4d0u: goto label_33c4d0;
        case 0x33c4d4u: goto label_33c4d4;
        case 0x33c4d8u: goto label_33c4d8;
        case 0x33c4dcu: goto label_33c4dc;
        case 0x33c4e0u: goto label_33c4e0;
        case 0x33c4e4u: goto label_33c4e4;
        case 0x33c4e8u: goto label_33c4e8;
        case 0x33c4ecu: goto label_33c4ec;
        case 0x33c4f0u: goto label_33c4f0;
        case 0x33c4f4u: goto label_33c4f4;
        case 0x33c4f8u: goto label_33c4f8;
        case 0x33c4fcu: goto label_33c4fc;
        case 0x33c500u: goto label_33c500;
        case 0x33c504u: goto label_33c504;
        case 0x33c508u: goto label_33c508;
        case 0x33c50cu: goto label_33c50c;
        case 0x33c510u: goto label_33c510;
        case 0x33c514u: goto label_33c514;
        case 0x33c518u: goto label_33c518;
        case 0x33c51cu: goto label_33c51c;
        case 0x33c520u: goto label_33c520;
        case 0x33c524u: goto label_33c524;
        case 0x33c528u: goto label_33c528;
        case 0x33c52cu: goto label_33c52c;
        case 0x33c530u: goto label_33c530;
        case 0x33c534u: goto label_33c534;
        case 0x33c538u: goto label_33c538;
        case 0x33c53cu: goto label_33c53c;
        case 0x33c540u: goto label_33c540;
        case 0x33c544u: goto label_33c544;
        case 0x33c548u: goto label_33c548;
        case 0x33c54cu: goto label_33c54c;
        case 0x33c550u: goto label_33c550;
        case 0x33c554u: goto label_33c554;
        case 0x33c558u: goto label_33c558;
        case 0x33c55cu: goto label_33c55c;
        case 0x33c560u: goto label_33c560;
        case 0x33c564u: goto label_33c564;
        case 0x33c568u: goto label_33c568;
        case 0x33c56cu: goto label_33c56c;
        case 0x33c570u: goto label_33c570;
        case 0x33c574u: goto label_33c574;
        case 0x33c578u: goto label_33c578;
        case 0x33c57cu: goto label_33c57c;
        case 0x33c580u: goto label_33c580;
        case 0x33c584u: goto label_33c584;
        case 0x33c588u: goto label_33c588;
        case 0x33c58cu: goto label_33c58c;
        case 0x33c590u: goto label_33c590;
        case 0x33c594u: goto label_33c594;
        case 0x33c598u: goto label_33c598;
        case 0x33c59cu: goto label_33c59c;
        case 0x33c5a0u: goto label_33c5a0;
        case 0x33c5a4u: goto label_33c5a4;
        case 0x33c5a8u: goto label_33c5a8;
        case 0x33c5acu: goto label_33c5ac;
        case 0x33c5b0u: goto label_33c5b0;
        case 0x33c5b4u: goto label_33c5b4;
        case 0x33c5b8u: goto label_33c5b8;
        case 0x33c5bcu: goto label_33c5bc;
        case 0x33c5c0u: goto label_33c5c0;
        case 0x33c5c4u: goto label_33c5c4;
        case 0x33c5c8u: goto label_33c5c8;
        case 0x33c5ccu: goto label_33c5cc;
        case 0x33c5d0u: goto label_33c5d0;
        case 0x33c5d4u: goto label_33c5d4;
        case 0x33c5d8u: goto label_33c5d8;
        case 0x33c5dcu: goto label_33c5dc;
        case 0x33c5e0u: goto label_33c5e0;
        case 0x33c5e4u: goto label_33c5e4;
        case 0x33c5e8u: goto label_33c5e8;
        case 0x33c5ecu: goto label_33c5ec;
        case 0x33c5f0u: goto label_33c5f0;
        case 0x33c5f4u: goto label_33c5f4;
        case 0x33c5f8u: goto label_33c5f8;
        case 0x33c5fcu: goto label_33c5fc;
        case 0x33c600u: goto label_33c600;
        case 0x33c604u: goto label_33c604;
        case 0x33c608u: goto label_33c608;
        case 0x33c60cu: goto label_33c60c;
        case 0x33c610u: goto label_33c610;
        case 0x33c614u: goto label_33c614;
        case 0x33c618u: goto label_33c618;
        case 0x33c61cu: goto label_33c61c;
        case 0x33c620u: goto label_33c620;
        case 0x33c624u: goto label_33c624;
        case 0x33c628u: goto label_33c628;
        case 0x33c62cu: goto label_33c62c;
        case 0x33c630u: goto label_33c630;
        case 0x33c634u: goto label_33c634;
        case 0x33c638u: goto label_33c638;
        case 0x33c63cu: goto label_33c63c;
        case 0x33c640u: goto label_33c640;
        case 0x33c644u: goto label_33c644;
        case 0x33c648u: goto label_33c648;
        case 0x33c64cu: goto label_33c64c;
        case 0x33c650u: goto label_33c650;
        case 0x33c654u: goto label_33c654;
        case 0x33c658u: goto label_33c658;
        case 0x33c65cu: goto label_33c65c;
        case 0x33c660u: goto label_33c660;
        case 0x33c664u: goto label_33c664;
        case 0x33c668u: goto label_33c668;
        case 0x33c66cu: goto label_33c66c;
        case 0x33c670u: goto label_33c670;
        case 0x33c674u: goto label_33c674;
        case 0x33c678u: goto label_33c678;
        case 0x33c67cu: goto label_33c67c;
        case 0x33c680u: goto label_33c680;
        case 0x33c684u: goto label_33c684;
        case 0x33c688u: goto label_33c688;
        case 0x33c68cu: goto label_33c68c;
        case 0x33c690u: goto label_33c690;
        case 0x33c694u: goto label_33c694;
        case 0x33c698u: goto label_33c698;
        case 0x33c69cu: goto label_33c69c;
        case 0x33c6a0u: goto label_33c6a0;
        case 0x33c6a4u: goto label_33c6a4;
        case 0x33c6a8u: goto label_33c6a8;
        case 0x33c6acu: goto label_33c6ac;
        case 0x33c6b0u: goto label_33c6b0;
        case 0x33c6b4u: goto label_33c6b4;
        case 0x33c6b8u: goto label_33c6b8;
        case 0x33c6bcu: goto label_33c6bc;
        case 0x33c6c0u: goto label_33c6c0;
        case 0x33c6c4u: goto label_33c6c4;
        case 0x33c6c8u: goto label_33c6c8;
        case 0x33c6ccu: goto label_33c6cc;
        case 0x33c6d0u: goto label_33c6d0;
        case 0x33c6d4u: goto label_33c6d4;
        case 0x33c6d8u: goto label_33c6d8;
        case 0x33c6dcu: goto label_33c6dc;
        case 0x33c6e0u: goto label_33c6e0;
        case 0x33c6e4u: goto label_33c6e4;
        case 0x33c6e8u: goto label_33c6e8;
        case 0x33c6ecu: goto label_33c6ec;
        case 0x33c6f0u: goto label_33c6f0;
        case 0x33c6f4u: goto label_33c6f4;
        case 0x33c6f8u: goto label_33c6f8;
        case 0x33c6fcu: goto label_33c6fc;
        case 0x33c700u: goto label_33c700;
        case 0x33c704u: goto label_33c704;
        case 0x33c708u: goto label_33c708;
        case 0x33c70cu: goto label_33c70c;
        case 0x33c710u: goto label_33c710;
        case 0x33c714u: goto label_33c714;
        case 0x33c718u: goto label_33c718;
        case 0x33c71cu: goto label_33c71c;
        case 0x33c720u: goto label_33c720;
        case 0x33c724u: goto label_33c724;
        case 0x33c728u: goto label_33c728;
        case 0x33c72cu: goto label_33c72c;
        case 0x33c730u: goto label_33c730;
        case 0x33c734u: goto label_33c734;
        case 0x33c738u: goto label_33c738;
        case 0x33c73cu: goto label_33c73c;
        case 0x33c740u: goto label_33c740;
        case 0x33c744u: goto label_33c744;
        case 0x33c748u: goto label_33c748;
        case 0x33c74cu: goto label_33c74c;
        case 0x33c750u: goto label_33c750;
        case 0x33c754u: goto label_33c754;
        case 0x33c758u: goto label_33c758;
        case 0x33c75cu: goto label_33c75c;
        case 0x33c760u: goto label_33c760;
        case 0x33c764u: goto label_33c764;
        case 0x33c768u: goto label_33c768;
        case 0x33c76cu: goto label_33c76c;
        case 0x33c770u: goto label_33c770;
        case 0x33c774u: goto label_33c774;
        case 0x33c778u: goto label_33c778;
        case 0x33c77cu: goto label_33c77c;
        case 0x33c780u: goto label_33c780;
        case 0x33c784u: goto label_33c784;
        case 0x33c788u: goto label_33c788;
        case 0x33c78cu: goto label_33c78c;
        case 0x33c790u: goto label_33c790;
        case 0x33c794u: goto label_33c794;
        case 0x33c798u: goto label_33c798;
        case 0x33c79cu: goto label_33c79c;
        case 0x33c7a0u: goto label_33c7a0;
        case 0x33c7a4u: goto label_33c7a4;
        case 0x33c7a8u: goto label_33c7a8;
        case 0x33c7acu: goto label_33c7ac;
        case 0x33c7b0u: goto label_33c7b0;
        case 0x33c7b4u: goto label_33c7b4;
        case 0x33c7b8u: goto label_33c7b8;
        case 0x33c7bcu: goto label_33c7bc;
        case 0x33c7c0u: goto label_33c7c0;
        case 0x33c7c4u: goto label_33c7c4;
        case 0x33c7c8u: goto label_33c7c8;
        case 0x33c7ccu: goto label_33c7cc;
        case 0x33c7d0u: goto label_33c7d0;
        case 0x33c7d4u: goto label_33c7d4;
        case 0x33c7d8u: goto label_33c7d8;
        case 0x33c7dcu: goto label_33c7dc;
        case 0x33c7e0u: goto label_33c7e0;
        case 0x33c7e4u: goto label_33c7e4;
        case 0x33c7e8u: goto label_33c7e8;
        case 0x33c7ecu: goto label_33c7ec;
        case 0x33c7f0u: goto label_33c7f0;
        case 0x33c7f4u: goto label_33c7f4;
        case 0x33c7f8u: goto label_33c7f8;
        case 0x33c7fcu: goto label_33c7fc;
        case 0x33c800u: goto label_33c800;
        case 0x33c804u: goto label_33c804;
        case 0x33c808u: goto label_33c808;
        case 0x33c80cu: goto label_33c80c;
        case 0x33c810u: goto label_33c810;
        case 0x33c814u: goto label_33c814;
        case 0x33c818u: goto label_33c818;
        case 0x33c81cu: goto label_33c81c;
        case 0x33c820u: goto label_33c820;
        case 0x33c824u: goto label_33c824;
        case 0x33c828u: goto label_33c828;
        case 0x33c82cu: goto label_33c82c;
        case 0x33c830u: goto label_33c830;
        case 0x33c834u: goto label_33c834;
        case 0x33c838u: goto label_33c838;
        case 0x33c83cu: goto label_33c83c;
        case 0x33c840u: goto label_33c840;
        case 0x33c844u: goto label_33c844;
        case 0x33c848u: goto label_33c848;
        case 0x33c84cu: goto label_33c84c;
        case 0x33c850u: goto label_33c850;
        case 0x33c854u: goto label_33c854;
        case 0x33c858u: goto label_33c858;
        case 0x33c85cu: goto label_33c85c;
        case 0x33c860u: goto label_33c860;
        case 0x33c864u: goto label_33c864;
        case 0x33c868u: goto label_33c868;
        case 0x33c86cu: goto label_33c86c;
        case 0x33c870u: goto label_33c870;
        case 0x33c874u: goto label_33c874;
        case 0x33c878u: goto label_33c878;
        case 0x33c87cu: goto label_33c87c;
        case 0x33c880u: goto label_33c880;
        case 0x33c884u: goto label_33c884;
        case 0x33c888u: goto label_33c888;
        case 0x33c88cu: goto label_33c88c;
        case 0x33c890u: goto label_33c890;
        case 0x33c894u: goto label_33c894;
        case 0x33c898u: goto label_33c898;
        case 0x33c89cu: goto label_33c89c;
        case 0x33c8a0u: goto label_33c8a0;
        case 0x33c8a4u: goto label_33c8a4;
        case 0x33c8a8u: goto label_33c8a8;
        case 0x33c8acu: goto label_33c8ac;
        case 0x33c8b0u: goto label_33c8b0;
        case 0x33c8b4u: goto label_33c8b4;
        case 0x33c8b8u: goto label_33c8b8;
        case 0x33c8bcu: goto label_33c8bc;
        case 0x33c8c0u: goto label_33c8c0;
        case 0x33c8c4u: goto label_33c8c4;
        case 0x33c8c8u: goto label_33c8c8;
        case 0x33c8ccu: goto label_33c8cc;
        case 0x33c8d0u: goto label_33c8d0;
        case 0x33c8d4u: goto label_33c8d4;
        case 0x33c8d8u: goto label_33c8d8;
        case 0x33c8dcu: goto label_33c8dc;
        case 0x33c8e0u: goto label_33c8e0;
        case 0x33c8e4u: goto label_33c8e4;
        case 0x33c8e8u: goto label_33c8e8;
        case 0x33c8ecu: goto label_33c8ec;
        case 0x33c8f0u: goto label_33c8f0;
        case 0x33c8f4u: goto label_33c8f4;
        case 0x33c8f8u: goto label_33c8f8;
        case 0x33c8fcu: goto label_33c8fc;
        case 0x33c900u: goto label_33c900;
        case 0x33c904u: goto label_33c904;
        case 0x33c908u: goto label_33c908;
        case 0x33c90cu: goto label_33c90c;
        case 0x33c910u: goto label_33c910;
        case 0x33c914u: goto label_33c914;
        case 0x33c918u: goto label_33c918;
        case 0x33c91cu: goto label_33c91c;
        case 0x33c920u: goto label_33c920;
        case 0x33c924u: goto label_33c924;
        case 0x33c928u: goto label_33c928;
        case 0x33c92cu: goto label_33c92c;
        case 0x33c930u: goto label_33c930;
        case 0x33c934u: goto label_33c934;
        case 0x33c938u: goto label_33c938;
        case 0x33c93cu: goto label_33c93c;
        case 0x33c940u: goto label_33c940;
        case 0x33c944u: goto label_33c944;
        case 0x33c948u: goto label_33c948;
        case 0x33c94cu: goto label_33c94c;
        case 0x33c950u: goto label_33c950;
        case 0x33c954u: goto label_33c954;
        case 0x33c958u: goto label_33c958;
        case 0x33c95cu: goto label_33c95c;
        case 0x33c960u: goto label_33c960;
        case 0x33c964u: goto label_33c964;
        case 0x33c968u: goto label_33c968;
        case 0x33c96cu: goto label_33c96c;
        case 0x33c970u: goto label_33c970;
        case 0x33c974u: goto label_33c974;
        case 0x33c978u: goto label_33c978;
        case 0x33c97cu: goto label_33c97c;
        case 0x33c980u: goto label_33c980;
        case 0x33c984u: goto label_33c984;
        case 0x33c988u: goto label_33c988;
        case 0x33c98cu: goto label_33c98c;
        case 0x33c990u: goto label_33c990;
        case 0x33c994u: goto label_33c994;
        case 0x33c998u: goto label_33c998;
        case 0x33c99cu: goto label_33c99c;
        case 0x33c9a0u: goto label_33c9a0;
        case 0x33c9a4u: goto label_33c9a4;
        case 0x33c9a8u: goto label_33c9a8;
        case 0x33c9acu: goto label_33c9ac;
        case 0x33c9b0u: goto label_33c9b0;
        case 0x33c9b4u: goto label_33c9b4;
        case 0x33c9b8u: goto label_33c9b8;
        case 0x33c9bcu: goto label_33c9bc;
        case 0x33c9c0u: goto label_33c9c0;
        case 0x33c9c4u: goto label_33c9c4;
        case 0x33c9c8u: goto label_33c9c8;
        case 0x33c9ccu: goto label_33c9cc;
        case 0x33c9d0u: goto label_33c9d0;
        case 0x33c9d4u: goto label_33c9d4;
        case 0x33c9d8u: goto label_33c9d8;
        case 0x33c9dcu: goto label_33c9dc;
        case 0x33c9e0u: goto label_33c9e0;
        case 0x33c9e4u: goto label_33c9e4;
        case 0x33c9e8u: goto label_33c9e8;
        case 0x33c9ecu: goto label_33c9ec;
        case 0x33c9f0u: goto label_33c9f0;
        case 0x33c9f4u: goto label_33c9f4;
        case 0x33c9f8u: goto label_33c9f8;
        case 0x33c9fcu: goto label_33c9fc;
        case 0x33ca00u: goto label_33ca00;
        case 0x33ca04u: goto label_33ca04;
        case 0x33ca08u: goto label_33ca08;
        case 0x33ca0cu: goto label_33ca0c;
        case 0x33ca10u: goto label_33ca10;
        case 0x33ca14u: goto label_33ca14;
        case 0x33ca18u: goto label_33ca18;
        case 0x33ca1cu: goto label_33ca1c;
        case 0x33ca20u: goto label_33ca20;
        case 0x33ca24u: goto label_33ca24;
        case 0x33ca28u: goto label_33ca28;
        case 0x33ca2cu: goto label_33ca2c;
        case 0x33ca30u: goto label_33ca30;
        case 0x33ca34u: goto label_33ca34;
        case 0x33ca38u: goto label_33ca38;
        case 0x33ca3cu: goto label_33ca3c;
        case 0x33ca40u: goto label_33ca40;
        case 0x33ca44u: goto label_33ca44;
        case 0x33ca48u: goto label_33ca48;
        case 0x33ca4cu: goto label_33ca4c;
        case 0x33ca50u: goto label_33ca50;
        case 0x33ca54u: goto label_33ca54;
        case 0x33ca58u: goto label_33ca58;
        case 0x33ca5cu: goto label_33ca5c;
        case 0x33ca60u: goto label_33ca60;
        case 0x33ca64u: goto label_33ca64;
        case 0x33ca68u: goto label_33ca68;
        case 0x33ca6cu: goto label_33ca6c;
        case 0x33ca70u: goto label_33ca70;
        case 0x33ca74u: goto label_33ca74;
        case 0x33ca78u: goto label_33ca78;
        case 0x33ca7cu: goto label_33ca7c;
        case 0x33ca80u: goto label_33ca80;
        case 0x33ca84u: goto label_33ca84;
        case 0x33ca88u: goto label_33ca88;
        case 0x33ca8cu: goto label_33ca8c;
        case 0x33ca90u: goto label_33ca90;
        case 0x33ca94u: goto label_33ca94;
        case 0x33ca98u: goto label_33ca98;
        case 0x33ca9cu: goto label_33ca9c;
        case 0x33caa0u: goto label_33caa0;
        case 0x33caa4u: goto label_33caa4;
        case 0x33caa8u: goto label_33caa8;
        case 0x33caacu: goto label_33caac;
        case 0x33cab0u: goto label_33cab0;
        case 0x33cab4u: goto label_33cab4;
        case 0x33cab8u: goto label_33cab8;
        case 0x33cabcu: goto label_33cabc;
        case 0x33cac0u: goto label_33cac0;
        case 0x33cac4u: goto label_33cac4;
        case 0x33cac8u: goto label_33cac8;
        case 0x33caccu: goto label_33cacc;
        case 0x33cad0u: goto label_33cad0;
        case 0x33cad4u: goto label_33cad4;
        case 0x33cad8u: goto label_33cad8;
        case 0x33cadcu: goto label_33cadc;
        case 0x33cae0u: goto label_33cae0;
        case 0x33cae4u: goto label_33cae4;
        case 0x33cae8u: goto label_33cae8;
        case 0x33caecu: goto label_33caec;
        case 0x33caf0u: goto label_33caf0;
        case 0x33caf4u: goto label_33caf4;
        case 0x33caf8u: goto label_33caf8;
        case 0x33cafcu: goto label_33cafc;
        case 0x33cb00u: goto label_33cb00;
        case 0x33cb04u: goto label_33cb04;
        default: break;
    }

    ctx->pc = 0x33c288u;

label_33c288:
    // 0x33c288: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x33c288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_33c28c:
    // 0x33c28c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x33c28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_33c290:
    // 0x33c290: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x33c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33c294:
    // 0x33c294: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x33c294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_33c298:
    // 0x33c298: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x33c298u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c29c:
    // 0x33c29c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x33c29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_33c2a0:
    // 0x33c2a0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x33c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33c2a4:
    // 0x33c2a4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x33c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_33c2a8:
    // 0x33c2a8: 0x27d00120  addiu       $s0, $fp, 0x120
    ctx->pc = 0x33c2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 288));
label_33c2ac:
    // 0x33c2ac: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x33c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_33c2b0:
    // 0x33c2b0: 0x2412012b  addiu       $s2, $zero, 0x12B
    ctx->pc = 0x33c2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
label_33c2b4:
    // 0x33c2b4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x33c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_33c2b8:
    // 0x33c2b8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x33c2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c2bc:
    // 0x33c2bc: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x33c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_33c2c0:
    // 0x33c2c0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x33c2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_33c2c4:
    // 0x33c2c4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x33c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_33c2c8:
    // 0x33c2c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x33c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_33c2cc:
    // 0x33c2cc: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x33c2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_33c2d0:
    // 0x33c2d0: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x33c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_33c2d4:
    // 0x33c2d4: 0xa7c00010  sh          $zero, 0x10($fp)
    ctx->pc = 0x33c2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 16), (uint16_t)GPR_U32(ctx, 0));
label_33c2d8:
    // 0x33c2d8: 0xa7c00012  sh          $zero, 0x12($fp)
    ctx->pc = 0x33c2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 18), (uint16_t)GPR_U32(ctx, 0));
label_33c2dc:
    // 0x33c2dc: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x33c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
label_33c2e0:
    // 0x33c2e0: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x33c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_33c2e4:
    // 0x33c2e4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x33c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_33c2e8:
    // 0x33c2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c2ec:
    // 0x33c2ec: 0xc0d0aa8  jal         func_342AA0
label_33c2f0:
    if (ctx->pc == 0x33C2F0u) {
        ctx->pc = 0x33C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2ECu;
        // 0x33c2f0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C2F4u;
        goto label_33c2f4;
    }
    ctx->pc = 0x33C2ECu;
    SET_GPR_U32(ctx, 31, 0x33C2F4u);
    ctx->pc = 0x33C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C2ECu;
    // 0x33c2f0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x33C2ECu, 0x33C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C2F4u;
label_33c2f4:
    // 0x33c2f4: 0x0  nop
    ctx->pc = 0x33c2f4u;
    // NOP
label_33c2f8:
    // 0x33c2f8: 0x1651fffb  bne         $s2, $s1, . + 4 + (-0x5 << 2)
label_33c2fc:
    if (ctx->pc == 0x33C2FCu) {
        ctx->pc = 0x33C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2F8u;
        // 0x33c2fc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C300u;
        goto label_33c300;
    }
    ctx->pc = 0x33C2F8u;
    {
        const bool branch_taken_0x33c2f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x33C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2F8u;
        // 0x33c2fc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2f8) {
            ctx->pc = 0x33C2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c2e8;
        }
    }
    ctx->pc = 0x33C300u;
label_33c300:
    // 0x33c300: 0x27d071a0  addiu       $s0, $fp, 0x71A0
    ctx->pc = 0x33c300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 29088));
label_33c304:
    // 0x33c304: 0x2411012b  addiu       $s1, $zero, 0x12B
    ctx->pc = 0x33c304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
label_33c308:
    // 0x33c308: 0x27d30018  addiu       $s3, $fp, 0x18
    ctx->pc = 0x33c308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
label_33c30c:
    // 0x33c30c: 0x27d4007c  addiu       $s4, $fp, 0x7C
    ctx->pc = 0x33c30cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 124));
label_33c310:
    // 0x33c310: 0x27d500e0  addiu       $s5, $fp, 0xE0
    ctx->pc = 0x33c310u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 224));
label_33c314:
    // 0x33c314: 0x27d600f4  addiu       $s6, $fp, 0xF4
    ctx->pc = 0x33c314u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 244));
label_33c318:
    // 0x33c318: 0x27d70108  addiu       $s7, $fp, 0x108
    ctx->pc = 0x33c318u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
label_33c31c:
    // 0x33c31c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c31cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c320:
    // 0x33c320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c324:
    // 0x33c324: 0xc0d0dec  jal         func_3437B0
label_33c328:
    if (ctx->pc == 0x33C328u) {
        ctx->pc = 0x33C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C324u;
        // 0x33c328: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C32Cu;
        goto label_33c32c;
    }
    ctx->pc = 0x33C324u;
    SET_GPR_U32(ctx, 31, 0x33C32Cu);
    ctx->pc = 0x33C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C324u;
    // 0x33c328: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3437B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3437B0u, 0x33C324u, 0x33C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C32Cu;
label_33c32c:
    // 0x33c32c: 0x0  nop
    ctx->pc = 0x33c32cu;
    // NOP
label_33c330:
    // 0x33c330: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c334:
    if (ctx->pc == 0x33C334u) {
        ctx->pc = 0x33C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C330u;
        // 0x33c334: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C338u;
        goto label_33c338;
    }
    ctx->pc = 0x33C330u;
    {
        const bool branch_taken_0x33c330 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C330u;
        // 0x33c334: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c330) {
            ctx->pc = 0x33C320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c320;
        }
    }
    ctx->pc = 0x33C338u;
label_33c338:
    // 0x33c338: 0x3402f7b0  ori         $v0, $zero, 0xF7B0
    ctx->pc = 0x33c338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63408);
label_33c33c:
    // 0x33c33c: 0x2411003b  addiu       $s1, $zero, 0x3B
    ctx->pc = 0x33c33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_33c340:
    // 0x33c340: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c344:
    // 0x33c344: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c348:
    // 0x33c348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c34c:
    // 0x33c34c: 0xc0d0aa8  jal         func_342AA0
label_33c350:
    if (ctx->pc == 0x33C350u) {
        ctx->pc = 0x33C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C34Cu;
        // 0x33c350: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C354u;
        goto label_33c354;
    }
    ctx->pc = 0x33C34Cu;
    SET_GPR_U32(ctx, 31, 0x33C354u);
    ctx->pc = 0x33C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C34Cu;
    // 0x33c350: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x33C34Cu, 0x33C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C354u;
label_33c354:
    // 0x33c354: 0x0  nop
    ctx->pc = 0x33c354u;
    // NOP
label_33c358:
    // 0x33c358: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c35c:
    if (ctx->pc == 0x33C35Cu) {
        ctx->pc = 0x33C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C358u;
        // 0x33c35c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C360u;
        goto label_33c360;
    }
    ctx->pc = 0x33C358u;
    {
        const bool branch_taken_0x33c358 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C358u;
        // 0x33c35c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c358) {
            ctx->pc = 0x33C348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c348;
        }
    }
    ctx->pc = 0x33C360u;
label_33c360:
    // 0x33c360: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33c360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33c364:
    // 0x33c364: 0x2411003b  addiu       $s1, $zero, 0x3B
    ctx->pc = 0x33c364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_33c368:
    // 0x33c368: 0x34420e30  ori         $v0, $v0, 0xE30
    ctx->pc = 0x33c368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3632);
label_33c36c:
    // 0x33c36c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c370:
    // 0x33c370: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c374:
    // 0x33c374: 0x0  nop
    ctx->pc = 0x33c374u;
    // NOP
label_33c378:
    // 0x33c378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c37c:
    // 0x33c37c: 0xc0d0d2a  jal         func_3434A8
label_33c380:
    if (ctx->pc == 0x33C380u) {
        ctx->pc = 0x33C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C37Cu;
        // 0x33c380: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C384u;
        goto label_33c384;
    }
    ctx->pc = 0x33C37Cu;
    SET_GPR_U32(ctx, 31, 0x33C384u);
    ctx->pc = 0x33C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C37Cu;
    // 0x33c380: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434A8u, 0x33C37Cu, 0x33C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C384u;
label_33c384:
    // 0x33c384: 0x0  nop
    ctx->pc = 0x33c384u;
    // NOP
label_33c388:
    // 0x33c388: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c38c:
    if (ctx->pc == 0x33C38Cu) {
        ctx->pc = 0x33C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C388u;
        // 0x33c38c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C390u;
        goto label_33c390;
    }
    ctx->pc = 0x33C388u;
    {
        const bool branch_taken_0x33c388 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C388u;
        // 0x33c38c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c388) {
            ctx->pc = 0x33C378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c378;
        }
    }
    ctx->pc = 0x33C390u;
label_33c390:
    // 0x33c390: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33c394:
    // 0x33c394: 0x2411003b  addiu       $s1, $zero, 0x3B
    ctx->pc = 0x33c394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_33c398:
    // 0x33c398: 0x344224b0  ori         $v0, $v0, 0x24B0
    ctx->pc = 0x33c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9392);
label_33c39c:
    // 0x33c39c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c39cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c3a0:
    // 0x33c3a0: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c3a4:
    // 0x33c3a4: 0x0  nop
    ctx->pc = 0x33c3a4u;
    // NOP
label_33c3a8:
    // 0x33c3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c3ac:
    // 0x33c3ac: 0xc0d07a6  jal         func_341E98
label_33c3b0:
    if (ctx->pc == 0x33C3B0u) {
        ctx->pc = 0x33C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3ACu;
        // 0x33c3b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C3B4u;
        goto label_33c3b4;
    }
    ctx->pc = 0x33C3ACu;
    SET_GPR_U32(ctx, 31, 0x33C3B4u);
    ctx->pc = 0x33C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C3ACu;
    // 0x33c3b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E98u, 0x33C3ACu, 0x33C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C3B4u;
label_33c3b4:
    // 0x33c3b4: 0x0  nop
    ctx->pc = 0x33c3b4u;
    // NOP
label_33c3b8:
    // 0x33c3b8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c3bc:
    if (ctx->pc == 0x33C3BCu) {
        ctx->pc = 0x33C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3B8u;
        // 0x33c3bc: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C3C0u;
        goto label_33c3c0;
    }
    ctx->pc = 0x33C3B8u;
    {
        const bool branch_taken_0x33c3b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3B8u;
        // 0x33c3bc: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3b8) {
            ctx->pc = 0x33C3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c3a8;
        }
    }
    ctx->pc = 0x33C3C0u;
label_33c3c0:
    // 0x33c3c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33c3c4:
    // 0x33c3c4: 0x2411019f  addiu       $s1, $zero, 0x19F
    ctx->pc = 0x33c3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
label_33c3c8:
    // 0x33c3c8: 0x34425930  ori         $v0, $v0, 0x5930
    ctx->pc = 0x33c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22832);
label_33c3cc:
    // 0x33c3cc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c3d0:
    // 0x33c3d0: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c3d4:
    // 0x33c3d4: 0x0  nop
    ctx->pc = 0x33c3d4u;
    // NOP
label_33c3d8:
    // 0x33c3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c3dc:
    // 0x33c3dc: 0xc0d063e  jal         func_3418F8
label_33c3e0:
    if (ctx->pc == 0x33C3E0u) {
        ctx->pc = 0x33C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3DCu;
        // 0x33c3e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C3E4u;
        goto label_33c3e4;
    }
    ctx->pc = 0x33C3DCu;
    SET_GPR_U32(ctx, 31, 0x33C3E4u);
    ctx->pc = 0x33C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C3DCu;
    // 0x33c3e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418F8u, 0x33C3DCu, 0x33C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C3E4u;
label_33c3e4:
    // 0x33c3e4: 0x0  nop
    ctx->pc = 0x33c3e4u;
    // NOP
label_33c3e8:
    // 0x33c3e8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c3ec:
    if (ctx->pc == 0x33C3ECu) {
        ctx->pc = 0x33C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3E8u;
        // 0x33c3ec: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C3F0u;
        goto label_33c3f0;
    }
    ctx->pc = 0x33C3E8u;
    {
        const bool branch_taken_0x33c3e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3E8u;
        // 0x33c3ec: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3e8) {
            ctx->pc = 0x33C3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c3d8;
        }
    }
    ctx->pc = 0x33C3F0u;
label_33c3f0:
    // 0x33c3f0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x33c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_33c3f4:
    // 0x33c3f4: 0x2411019f  addiu       $s1, $zero, 0x19F
    ctx->pc = 0x33c3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
label_33c3f8:
    // 0x33c3f8: 0x34422930  ori         $v0, $v0, 0x2930
    ctx->pc = 0x33c3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10544);
label_33c3fc:
    // 0x33c3fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c3fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c400:
    // 0x33c400: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c404:
    // 0x33c404: 0x0  nop
    ctx->pc = 0x33c404u;
    // NOP
label_33c408:
    // 0x33c408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c40c:
    // 0x33c40c: 0xc0d0aa8  jal         func_342AA0
label_33c410:
    if (ctx->pc == 0x33C410u) {
        ctx->pc = 0x33C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C40Cu;
        // 0x33c410: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C414u;
        goto label_33c414;
    }
    ctx->pc = 0x33C40Cu;
    SET_GPR_U32(ctx, 31, 0x33C414u);
    ctx->pc = 0x33C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C40Cu;
    // 0x33c410: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x33C40Cu, 0x33C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C414u;
label_33c414:
    // 0x33c414: 0x0  nop
    ctx->pc = 0x33c414u;
    // NOP
label_33c418:
    // 0x33c418: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c41c:
    if (ctx->pc == 0x33C41Cu) {
        ctx->pc = 0x33C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C418u;
        // 0x33c41c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C420u;
        goto label_33c420;
    }
    ctx->pc = 0x33C418u;
    {
        const bool branch_taken_0x33c418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C418u;
        // 0x33c41c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c418) {
            ctx->pc = 0x33C408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c408;
        }
    }
    ctx->pc = 0x33C420u;
label_33c420:
    // 0x33c420: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x33c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_33c424:
    // 0x33c424: 0x2411019f  addiu       $s1, $zero, 0x19F
    ctx->pc = 0x33c424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
label_33c428:
    // 0x33c428: 0x3442c530  ori         $v0, $v0, 0xC530
    ctx->pc = 0x33c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50480);
label_33c42c:
    // 0x33c42c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c430:
    // 0x33c430: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c434:
    // 0x33c434: 0x0  nop
    ctx->pc = 0x33c434u;
    // NOP
label_33c438:
    // 0x33c438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c43c:
    // 0x33c43c: 0xc0d0b46  jal         func_342D18
label_33c440:
    if (ctx->pc == 0x33C440u) {
        ctx->pc = 0x33C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C43Cu;
        // 0x33c440: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C444u;
        goto label_33c444;
    }
    ctx->pc = 0x33C43Cu;
    SET_GPR_U32(ctx, 31, 0x33C444u);
    ctx->pc = 0x33C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C43Cu;
    // 0x33c440: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D18u, 0x33C43Cu, 0x33C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C444u;
label_33c444:
    // 0x33c444: 0x0  nop
    ctx->pc = 0x33c444u;
    // NOP
label_33c448:
    // 0x33c448: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c44c:
    if (ctx->pc == 0x33C44Cu) {
        ctx->pc = 0x33C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C448u;
        // 0x33c44c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C450u;
        goto label_33c450;
    }
    ctx->pc = 0x33C448u;
    {
        const bool branch_taken_0x33c448 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C448u;
        // 0x33c44c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c448) {
            ctx->pc = 0x33C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c438;
        }
    }
    ctx->pc = 0x33C450u;
label_33c450:
    // 0x33c450: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x33c450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_33c454:
    // 0x33c454: 0x241100fe  addiu       $s1, $zero, 0xFE
    ctx->pc = 0x33c454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_33c458:
    // 0x33c458: 0x3442af30  ori         $v0, $v0, 0xAF30
    ctx->pc = 0x33c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44848);
label_33c45c:
    // 0x33c45c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c45cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c460:
    // 0x33c460: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c464:
    // 0x33c464: 0x0  nop
    ctx->pc = 0x33c464u;
    // NOP
label_33c468:
    // 0x33c468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c46c:
    // 0x33c46c: 0xc0d063e  jal         func_3418F8
label_33c470:
    if (ctx->pc == 0x33C470u) {
        ctx->pc = 0x33C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C46Cu;
        // 0x33c470: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C474u;
        goto label_33c474;
    }
    ctx->pc = 0x33C46Cu;
    SET_GPR_U32(ctx, 31, 0x33C474u);
    ctx->pc = 0x33C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C46Cu;
    // 0x33c470: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418F8u, 0x33C46Cu, 0x33C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C474u;
label_33c474:
    // 0x33c474: 0x0  nop
    ctx->pc = 0x33c474u;
    // NOP
label_33c478:
    // 0x33c478: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c47c:
    if (ctx->pc == 0x33C47Cu) {
        ctx->pc = 0x33C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C478u;
        // 0x33c47c: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C480u;
        goto label_33c480;
    }
    ctx->pc = 0x33C478u;
    {
        const bool branch_taken_0x33c478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C478u;
        // 0x33c47c: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c478) {
            ctx->pc = 0x33C468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c468;
        }
    }
    ctx->pc = 0x33C480u;
label_33c480:
    // 0x33c480: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33c484:
    // 0x33c484: 0x241100fe  addiu       $s1, $zero, 0xFE
    ctx->pc = 0x33c484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_33c488:
    // 0x33c488: 0x34422eb0  ori         $v0, $v0, 0x2EB0
    ctx->pc = 0x33c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11952);
label_33c48c:
    // 0x33c48c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c490:
    // 0x33c490: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c494:
    // 0x33c494: 0x0  nop
    ctx->pc = 0x33c494u;
    // NOP
label_33c498:
    // 0x33c498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c49c:
    // 0x33c49c: 0xc0d0b46  jal         func_342D18
label_33c4a0:
    if (ctx->pc == 0x33C4A0u) {
        ctx->pc = 0x33C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C49Cu;
        // 0x33c4a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4A4u;
        goto label_33c4a4;
    }
    ctx->pc = 0x33C49Cu;
    SET_GPR_U32(ctx, 31, 0x33C4A4u);
    ctx->pc = 0x33C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C49Cu;
    // 0x33c4a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D18u, 0x33C49Cu, 0x33C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C4A4u;
label_33c4a4:
    // 0x33c4a4: 0x0  nop
    ctx->pc = 0x33c4a4u;
    // NOP
label_33c4a8:
    // 0x33c4a8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c4ac:
    if (ctx->pc == 0x33C4ACu) {
        ctx->pc = 0x33C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4A8u;
        // 0x33c4ac: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4B0u;
        goto label_33c4b0;
    }
    ctx->pc = 0x33C4A8u;
    {
        const bool branch_taken_0x33c4a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4A8u;
        // 0x33c4ac: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c4a8) {
            ctx->pc = 0x33C498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c498;
        }
    }
    ctx->pc = 0x33C4B0u;
label_33c4b0:
    // 0x33c4b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33c4b4:
    // 0x33c4b4: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x33c4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_33c4b8:
    // 0x33c4b8: 0x3442be20  ori         $v0, $v0, 0xBE20
    ctx->pc = 0x33c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48672);
label_33c4bc:
    // 0x33c4bc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c4c0:
    // 0x33c4c0: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c4c4:
    // 0x33c4c4: 0x0  nop
    ctx->pc = 0x33c4c4u;
    // NOP
label_33c4c8:
    // 0x33c4c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c4cc:
    // 0x33c4cc: 0xc0d063e  jal         func_3418F8
label_33c4d0:
    if (ctx->pc == 0x33C4D0u) {
        ctx->pc = 0x33C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4CCu;
        // 0x33c4d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4D4u;
        goto label_33c4d4;
    }
    ctx->pc = 0x33C4CCu;
    SET_GPR_U32(ctx, 31, 0x33C4D4u);
    ctx->pc = 0x33C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C4CCu;
    // 0x33c4d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418F8u, 0x33C4CCu, 0x33C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C4D4u;
label_33c4d4:
    // 0x33c4d4: 0x0  nop
    ctx->pc = 0x33c4d4u;
    // NOP
label_33c4d8:
    // 0x33c4d8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c4dc:
    if (ctx->pc == 0x33C4DCu) {
        ctx->pc = 0x33C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4D8u;
        // 0x33c4dc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4E0u;
        goto label_33c4e0;
    }
    ctx->pc = 0x33C4D8u;
    {
        const bool branch_taken_0x33c4d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4D8u;
        // 0x33c4dc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c4d8) {
            ctx->pc = 0x33C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c4c8;
        }
    }
    ctx->pc = 0x33C4E0u;
label_33c4e0:
    // 0x33c4e0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33c4e4:
    // 0x33c4e4: 0x24110023  addiu       $s1, $zero, 0x23
    ctx->pc = 0x33c4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_33c4e8:
    // 0x33c4e8: 0x3442c720  ori         $v0, $v0, 0xC720
    ctx->pc = 0x33c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50976);
label_33c4ec:
    // 0x33c4ec: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c4f0:
    // 0x33c4f0: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c4f4:
    // 0x33c4f4: 0x0  nop
    ctx->pc = 0x33c4f4u;
    // NOP
label_33c4f8:
    // 0x33c4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c4fc:
    // 0x33c4fc: 0xc0d0b46  jal         func_342D18
label_33c500:
    if (ctx->pc == 0x33C500u) {
        ctx->pc = 0x33C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4FCu;
        // 0x33c500: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C504u;
        goto label_33c504;
    }
    ctx->pc = 0x33C4FCu;
    SET_GPR_U32(ctx, 31, 0x33C504u);
    ctx->pc = 0x33C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C4FCu;
    // 0x33c500: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D18u, 0x33C4FCu, 0x33C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C504u;
label_33c504:
    // 0x33c504: 0x0  nop
    ctx->pc = 0x33c504u;
    // NOP
label_33c508:
    // 0x33c508: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c50c:
    if (ctx->pc == 0x33C50Cu) {
        ctx->pc = 0x33C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C508u;
        // 0x33c50c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C510u;
        goto label_33c510;
    }
    ctx->pc = 0x33C508u;
    {
        const bool branch_taken_0x33c508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C508u;
        // 0x33c50c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c508) {
            ctx->pc = 0x33C4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c4f8;
        }
    }
    ctx->pc = 0x33C510u;
label_33c510:
    // 0x33c510: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33c510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33c514:
    // 0x33c514: 0x2411001d  addiu       $s1, $zero, 0x1D
    ctx->pc = 0x33c514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_33c518:
    // 0x33c518: 0x3442db60  ori         $v0, $v0, 0xDB60
    ctx->pc = 0x33c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56160);
label_33c51c:
    // 0x33c51c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x33c51cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c520:
    // 0x33c520: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x33c520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c524:
    // 0x33c524: 0x0  nop
    ctx->pc = 0x33c524u;
    // NOP
label_33c528:
    // 0x33c528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c52c:
    // 0x33c52c: 0xc0d0aa8  jal         func_342AA0
label_33c530:
    if (ctx->pc == 0x33C530u) {
        ctx->pc = 0x33C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C52Cu;
        // 0x33c530: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C534u;
        goto label_33c534;
    }
    ctx->pc = 0x33C52Cu;
    SET_GPR_U32(ctx, 31, 0x33C534u);
    ctx->pc = 0x33C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C52Cu;
    // 0x33c530: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x33C52Cu, 0x33C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C534u;
label_33c534:
    // 0x33c534: 0x0  nop
    ctx->pc = 0x33c534u;
    // NOP
label_33c538:
    // 0x33c538: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_33c53c:
    if (ctx->pc == 0x33C53Cu) {
        ctx->pc = 0x33C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C538u;
        // 0x33c53c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C540u;
        goto label_33c540;
    }
    ctx->pc = 0x33C538u;
    {
        const bool branch_taken_0x33c538 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C538u;
        // 0x33c53c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c538) {
            ctx->pc = 0x33C528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c528;
        }
    }
    ctx->pc = 0x33C540u;
label_33c540:
    // 0x33c540: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33c540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33c544:
    // 0x33c544: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x33c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_33c548:
    // 0x33c548: 0x3442e6a0  ori         $v0, $v0, 0xE6A0
    ctx->pc = 0x33c548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59040);
label_33c54c:
    // 0x33c54c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c550:
    // 0x33c550: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x33c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c554:
    // 0x33c554: 0x0  nop
    ctx->pc = 0x33c554u;
    // NOP
label_33c558:
    // 0x33c558: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33c558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_33c55c:
    // 0x33c55c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33c560:
    // 0x33c560: 0x0  nop
    ctx->pc = 0x33c560u;
    // NOP
label_33c564:
    // 0x33c564: 0x0  nop
    ctx->pc = 0x33c564u;
    // NOP
label_33c568:
    // 0x33c568: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_33c56c:
    if (ctx->pc == 0x33C56Cu) {
        ctx->pc = 0x33C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C568u;
        // 0x33c56c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C570u;
        goto label_33c570;
    }
    ctx->pc = 0x33C568u;
    {
        const bool branch_taken_0x33c568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x33C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C568u;
        // 0x33c56c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c568) {
            ctx->pc = 0x33C558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c558;
        }
    }
    ctx->pc = 0x33C570u;
label_33c570:
    // 0x33c570: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x33c570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_33c574:
    // 0x33c574: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x33c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_33c578:
    // 0x33c578: 0x3484f2a0  ori         $a0, $a0, 0xF2A0
    ctx->pc = 0x33c578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62112);
label_33c57c:
    // 0x33c57c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x33c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_33c580:
    // 0x33c580: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x33c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_33c584:
    // 0x33c584: 0xc0d07a6  jal         func_341E98
label_33c588:
    if (ctx->pc == 0x33C588u) {
        ctx->pc = 0x33C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C584u;
        // 0x33c588: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C58Cu;
        goto label_33c58c;
    }
    ctx->pc = 0x33C584u;
    SET_GPR_U32(ctx, 31, 0x33C58Cu);
    ctx->pc = 0x33C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C584u;
    // 0x33c588: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E98u, 0x33C584u, 0x33C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C58Cu;
label_33c58c:
    // 0x33c58c: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x33c58cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_33c590:
    // 0x33c590: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x33c590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_33c594:
    // 0x33c594: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x33c594u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_33c598:
    // 0x33c598: 0x3484f380  ori         $a0, $a0, 0xF380
    ctx->pc = 0x33c598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62336);
label_33c59c:
    // 0x33c59c: 0xc0d0dec  jal         func_3437B0
label_33c5a0:
    if (ctx->pc == 0x33C5A0u) {
        ctx->pc = 0x33C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C59Cu;
        // 0x33c5a0: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5A4u;
        goto label_33c5a4;
    }
    ctx->pc = 0x33C59Cu;
    SET_GPR_U32(ctx, 31, 0x33C5A4u);
    ctx->pc = 0x33C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C59Cu;
    // 0x33c5a0: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3437B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3437B0u, 0x33C59Cu, 0x33C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5A4u;
label_33c5a4:
    // 0x33c5a4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x33c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_33c5a8:
    // 0x33c5a8: 0x3484f3f0  ori         $a0, $a0, 0xF3F0
    ctx->pc = 0x33c5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62448);
label_33c5ac:
    // 0x33c5ac: 0xc0d0d2a  jal         func_3434A8
label_33c5b0:
    if (ctx->pc == 0x33C5B0u) {
        ctx->pc = 0x33C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5ACu;
        // 0x33c5b0: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5B4u;
        goto label_33c5b4;
    }
    ctx->pc = 0x33C5ACu;
    SET_GPR_U32(ctx, 31, 0x33C5B4u);
    ctx->pc = 0x33C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5ACu;
    // 0x33c5b0: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434A8u, 0x33C5ACu, 0x33C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5B4u;
label_33c5b4:
    // 0x33c5b4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x33c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_33c5b8:
    // 0x33c5b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33c5bc:
    // 0x33c5bc: 0x3463f450  ori         $v1, $v1, 0xF450
    ctx->pc = 0x33c5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62544);
label_33c5c0:
    // 0x33c5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c5c4:
    // 0x33c5c4: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x33c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_33c5c8:
    // 0x33c5c8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x33c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_33c5cc:
    // 0x33c5cc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x33c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_33c5d0:
    // 0x33c5d0: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x33c5d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_33c5d4:
    // 0x33c5d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_33c5d8:
    // 0x33c5d8: 0xc10c1fa  jal         func_4307E8
label_33c5dc:
    if (ctx->pc == 0x33C5DCu) {
        ctx->pc = 0x33C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5D8u;
        // 0x33c5dc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5E0u;
        goto label_33c5e0;
    }
    ctx->pc = 0x33C5D8u;
    SET_GPR_U32(ctx, 31, 0x33C5E0u);
    ctx->pc = 0x33C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5D8u;
    // 0x33c5dc: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33C5D8u, 0x33C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5E0u;
label_33c5e0:
    // 0x33c5e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33c5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33c5e4:
    // 0x33c5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c5e8:
    // 0x33c5e8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x33c5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_33c5ec:
    // 0x33c5ec: 0xc10c1fa  jal         func_4307E8
label_33c5f0:
    if (ctx->pc == 0x33C5F0u) {
        ctx->pc = 0x33C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5ECu;
        // 0x33c5f0: 0x3c140034  lui         $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5F4u;
        goto label_33c5f4;
    }
    ctx->pc = 0x33C5ECu;
    SET_GPR_U32(ctx, 31, 0x33C5F4u);
    ctx->pc = 0x33C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5ECu;
    // 0x33c5f0: 0x3c140034  lui         $s4, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33C5ECu, 0x33C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5F4u;
label_33c5f4:
    // 0x33c5f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33c5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33c5f8:
    // 0x33c5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c5fc:
    // 0x33c5fc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x33c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33c600:
    // 0x33c600: 0xc10c1fa  jal         func_4307E8
label_33c604:
    if (ctx->pc == 0x33C604u) {
        ctx->pc = 0x33C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C600u;
        // 0x33c604: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C608u;
        goto label_33c608;
    }
    ctx->pc = 0x33C600u;
    SET_GPR_U32(ctx, 31, 0x33C608u);
    ctx->pc = 0x33C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C600u;
    // 0x33c604: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33C600u, 0x33C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C608u;
label_33c608:
    // 0x33c608: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33c60c:
    // 0x33c60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c610:
    // 0x33c610: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x33c610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33c614:
    // 0x33c614: 0xc10c1fa  jal         func_4307E8
label_33c618:
    if (ctx->pc == 0x33C618u) {
        ctx->pc = 0x33C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C614u;
        // 0x33c618: 0x3c160034  lui         $s6, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C61Cu;
        goto label_33c61c;
    }
    ctx->pc = 0x33C614u;
    SET_GPR_U32(ctx, 31, 0x33C61Cu);
    ctx->pc = 0x33C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C614u;
    // 0x33c618: 0x3c160034  lui         $s6, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33C614u, 0x33C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C61Cu;
label_33c61c:
    // 0x33c61c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33c61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33c620:
    // 0x33c620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c624:
    // 0x33c624: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x33c624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33c628:
    // 0x33c628: 0xc10c1fa  jal         func_4307E8
label_33c62c:
    if (ctx->pc == 0x33C62Cu) {
        ctx->pc = 0x33C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C628u;
        // 0x33c62c: 0x3c170034  lui         $s7, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C630u;
        goto label_33c630;
    }
    ctx->pc = 0x33C628u;
    SET_GPR_U32(ctx, 31, 0x33C630u);
    ctx->pc = 0x33C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C628u;
    // 0x33c62c: 0x3c170034  lui         $s7, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33C628u, 0x33C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C630u;
label_33c630:
    // 0x33c630: 0x3c190035  lui         $t9, 0x35
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)53 << 16));
label_33c634:
    // 0x33c634: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c638:
    // 0x33c638: 0x27398a50  addiu       $t9, $t9, -0x75B0
    ctx->pc = 0x33c638u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294937168));
label_33c63c:
    // 0x33c63c: 0x24425b90  addiu       $v0, $v0, 0x5B90
    ctx->pc = 0x33c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23440));
label_33c640:
    // 0x33c640: 0xafd900e8  sw          $t9, 0xE8($fp)
    ctx->pc = 0x33c640u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 232), GPR_U32(ctx, 25));
label_33c644:
    // 0x33c644: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33c644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_33c648:
    // 0x33c648: 0x3c190034  lui         $t9, 0x34
    ctx->pc = 0x33c648u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)52 << 16));
label_33c64c:
    // 0x33c64c: 0xafc2010c  sw          $v0, 0x10C($fp)
    ctx->pc = 0x33c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 268), GPR_U32(ctx, 2));
label_33c650:
    // 0x33c650: 0x273973c8  addiu       $t9, $t9, 0x73C8
    ctx->pc = 0x33c650u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 29640));
label_33c654:
    // 0x33c654: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c658:
    // 0x33c658: 0xafd900fc  sw          $t9, 0xFC($fp)
    ctx->pc = 0x33c658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 25));
label_33c65c:
    // 0x33c65c: 0x244273c0  addiu       $v0, $v0, 0x73C0
    ctx->pc = 0x33c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29632));
label_33c660:
    // 0x33c660: 0x3c190034  lui         $t9, 0x34
    ctx->pc = 0x33c660u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)52 << 16));
label_33c664:
    // 0x33c664: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x33c664u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
label_33c668:
    // 0x33c668: 0x273973b8  addiu       $t9, $t9, 0x73B8
    ctx->pc = 0x33c668u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 29624));
label_33c66c:
    // 0x33c66c: 0x3402f7b0  ori         $v0, $zero, 0xF7B0
    ctx->pc = 0x33c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63408);
label_33c670:
    // 0x33c670: 0xafd900f8  sw          $t9, 0xF8($fp)
    ctx->pc = 0x33c670u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 248), GPR_U32(ctx, 25));
label_33c674:
    // 0x33c674: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33c674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_33c678:
    // 0x33c678: 0x3c2c821  addu        $t9, $fp, $v0
    ctx->pc = 0x33c678u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c67c:
    // 0x33c67c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x33c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_33c680:
    // 0x33c680: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c684:
    // 0x33c684: 0x246359f0  addiu       $v1, $v1, 0x59F0
    ctx->pc = 0x33c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23024));
label_33c688:
    // 0x33c688: 0x24423cd8  addiu       $v0, $v0, 0x3CD8
    ctx->pc = 0x33c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15576));
label_33c68c:
    // 0x33c68c: 0x24847c08  addiu       $a0, $a0, 0x7C08
    ctx->pc = 0x33c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31752));
label_33c690:
    // 0x33c690: 0xafc200c4  sw          $v0, 0xC4($fp)
    ctx->pc = 0x33c690u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 2));
label_33c694:
    // 0x33c694: 0x24a58530  addiu       $a1, $a1, -0x7AD0
    ctx->pc = 0x33c694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935856));
label_33c698:
    // 0x33c698: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c69c:
    // 0x33c69c: 0x3c180034  lui         $t8, 0x34
    ctx->pc = 0x33c69cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)52 << 16));
label_33c6a0:
    // 0x33c6a0: 0x244240d0  addiu       $v0, $v0, 0x40D0
    ctx->pc = 0x33c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16592));
label_33c6a4:
    // 0x33c6a4: 0x3c0f0034  lui         $t7, 0x34
    ctx->pc = 0x33c6a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)52 << 16));
label_33c6a8:
    // 0x33c6a8: 0xafc200ac  sw          $v0, 0xAC($fp)
    ctx->pc = 0x33c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 2));
label_33c6ac:
    // 0x33c6ac: 0x3c0e0034  lui         $t6, 0x34
    ctx->pc = 0x33c6acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)52 << 16));
label_33c6b0:
    // 0x33c6b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c6b4:
    // 0x33c6b4: 0x3c0d0034  lui         $t5, 0x34
    ctx->pc = 0x33c6b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)52 << 16));
label_33c6b8:
    // 0x33c6b8: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x33c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_33c6bc:
    // 0x33c6bc: 0x3c0c0034  lui         $t4, 0x34
    ctx->pc = 0x33c6bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52 << 16));
label_33c6c0:
    // 0x33c6c0: 0xafc200dc  sw          $v0, 0xDC($fp)
    ctx->pc = 0x33c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 220), GPR_U32(ctx, 2));
label_33c6c4:
    // 0x33c6c4: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x33c6c4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
label_33c6c8:
    // 0x33c6c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c6cc:
    // 0x33c6cc: 0x3c0a0034  lui         $t2, 0x34
    ctx->pc = 0x33c6ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)52 << 16));
label_33c6d0:
    // 0x33c6d0: 0x244251e8  addiu       $v0, $v0, 0x51E8
    ctx->pc = 0x33c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20968));
label_33c6d4:
    // 0x33c6d4: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x33c6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
label_33c6d8:
    // 0x33c6d8: 0xafc20094  sw          $v0, 0x94($fp)
    ctx->pc = 0x33c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 148), GPR_U32(ctx, 2));
label_33c6dc:
    // 0x33c6dc: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x33c6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_33c6e0:
    // 0x33c6e0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c6e4:
    // 0x33c6e4: 0xafc30114  sw          $v1, 0x114($fp)
    ctx->pc = 0x33c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 276), GPR_U32(ctx, 3));
label_33c6e8:
    // 0x33c6e8: 0x24425dd8  addiu       $v0, $v0, 0x5DD8
    ctx->pc = 0x33c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24024));
label_33c6ec:
    // 0x33c6ec: 0xafc400ec  sw          $a0, 0xEC($fp)
    ctx->pc = 0x33c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 236), GPR_U32(ctx, 4));
label_33c6f0:
    // 0x33c6f0: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x33c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_33c6f4:
    // 0x33c6f4: 0x271854c0  addiu       $t8, $t8, 0x54C0
    ctx->pc = 0x33c6f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 21696));
label_33c6f8:
    // 0x33c6f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c6fc:
    // 0x33c6fc: 0xafc500e4  sw          $a1, 0xE4($fp)
    ctx->pc = 0x33c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 5));
label_33c700:
    // 0x33c700: 0x24425d58  addiu       $v0, $v0, 0x5D58
    ctx->pc = 0x33c700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23896));
label_33c704:
    // 0x33c704: 0x26f753f8  addiu       $s7, $s7, 0x53F8
    ctx->pc = 0x33c704u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 21496));
label_33c708:
    // 0x33c708: 0xafc20048  sw          $v0, 0x48($fp)
    ctx->pc = 0x33c708u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 2));
label_33c70c:
    // 0x33c70c: 0x26d65590  addiu       $s6, $s6, 0x5590
    ctx->pc = 0x33c70cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 21904));
label_33c710:
    // 0x33c710: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c714:
    // 0x33c714: 0x26b55588  addiu       $s5, $s5, 0x5588
    ctx->pc = 0x33c714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 21896));
label_33c718:
    // 0x33c718: 0x24426500  addiu       $v0, $v0, 0x6500
    ctx->pc = 0x33c718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25856));
label_33c71c:
    // 0x33c71c: 0x26944538  addiu       $s4, $s4, 0x4538
    ctx->pc = 0x33c71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17720));
label_33c720:
    // 0x33c720: 0xafc20078  sw          $v0, 0x78($fp)
    ctx->pc = 0x33c720u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 120), GPR_U32(ctx, 2));
label_33c724:
    // 0x33c724: 0x26734320  addiu       $s3, $s3, 0x4320
    ctx->pc = 0x33c724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 17184));
label_33c728:
    // 0x33c728: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_33c72c:
    // 0x33c72c: 0x26524618  addiu       $s2, $s2, 0x4618
    ctx->pc = 0x33c72cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17944));
label_33c730:
    // 0x33c730: 0x26315108  addiu       $s1, $s1, 0x5108
    ctx->pc = 0x33c730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20744));
label_33c734:
    // 0x33c734: 0x26105910  addiu       $s0, $s0, 0x5910
    ctx->pc = 0x33c734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22800));
label_33c738:
    // 0x33c738: 0x25ef5670  addiu       $t7, $t7, 0x5670
    ctx->pc = 0x33c738u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22128));
label_33c73c:
    // 0x33c73c: 0x25ce5d18  addiu       $t6, $t6, 0x5D18
    ctx->pc = 0x33c73cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23832));
label_33c740:
    // 0x33c740: 0x25ad5d38  addiu       $t5, $t5, 0x5D38
    ctx->pc = 0x33c740u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 23864));
label_33c744:
    // 0x33c744: 0x258c7148  addiu       $t4, $t4, 0x7148
    ctx->pc = 0x33c744u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 29000));
label_33c748:
    // 0x33c748: 0x256b6fb8  addiu       $t3, $t3, 0x6FB8
    ctx->pc = 0x33c748u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 28600));
label_33c74c:
    // 0x33c74c: 0x254a6808  addiu       $t2, $t2, 0x6808
    ctx->pc = 0x33c74cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26632));
label_33c750:
    // 0x33c750: 0x25296d18  addiu       $t1, $t1, 0x6D18
    ctx->pc = 0x33c750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27928));
label_33c754:
    // 0x33c754: 0x25086680  addiu       $t0, $t0, 0x6680
    ctx->pc = 0x33c754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26240));
label_33c758:
    // 0x33c758: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33c758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_33c75c:
    // 0x33c75c: 0x24426388  addiu       $v0, $v0, 0x6388
    ctx->pc = 0x33c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25480));
label_33c760:
    // 0x33c760: 0x24e76db8  addiu       $a3, $a3, 0x6DB8
    ctx->pc = 0x33c760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28088));
label_33c764:
    // 0x33c764: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33c764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_33c768:
    // 0x33c768: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x33c768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_33c76c:
    // 0x33c76c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_33c770:
    // 0x33c770: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33c770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_33c774:
    // 0x33c774: 0xafc20060  sw          $v0, 0x60($fp)
    ctx->pc = 0x33c774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 2));
label_33c778:
    // 0x33c778: 0xafd80098  sw          $t8, 0x98($fp)
    ctx->pc = 0x33c778u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 152), GPR_U32(ctx, 24));
label_33c77c:
    // 0x33c77c: 0x24c66de0  addiu       $a2, $a2, 0x6DE0
    ctx->pc = 0x33c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28128));
label_33c780:
    // 0x33c780: 0xafd700a8  sw          $s7, 0xA8($fp)
    ctx->pc = 0x33c780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 23));
label_33c784:
    // 0x33c784: 0x24a56eb0  addiu       $a1, $a1, 0x6EB0
    ctx->pc = 0x33c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28336));
label_33c788:
    // 0x33c788: 0xafd600a0  sw          $s6, 0xA0($fp)
    ctx->pc = 0x33c788u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 160), GPR_U32(ctx, 22));
label_33c78c:
    // 0x33c78c: 0x24846ed8  addiu       $a0, $a0, 0x6ED8
    ctx->pc = 0x33c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28376));
label_33c790:
    // 0x33c790: 0xafd500d0  sw          $s5, 0xD0($fp)
    ctx->pc = 0x33c790u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 208), GPR_U32(ctx, 21));
label_33c794:
    // 0x33c794: 0x24636f90  addiu       $v1, $v1, 0x6F90
    ctx->pc = 0x33c794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28560));
label_33c798:
    // 0x33c798: 0xafd400d4  sw          $s4, 0xD4($fp)
    ctx->pc = 0x33c798u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 212), GPR_U32(ctx, 20));
label_33c79c:
    // 0x33c79c: 0xafd300b4  sw          $s3, 0xB4($fp)
    ctx->pc = 0x33c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 180), GPR_U32(ctx, 19));
label_33c7a0:
    // 0x33c7a0: 0xafd200bc  sw          $s2, 0xBC($fp)
    ctx->pc = 0x33c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 188), GPR_U32(ctx, 18));
label_33c7a4:
    // 0x33c7a4: 0xafd1009c  sw          $s1, 0x9C($fp)
    ctx->pc = 0x33c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 156), GPR_U32(ctx, 17));
label_33c7a8:
    // 0x33c7a8: 0xafd000c0  sw          $s0, 0xC0($fp)
    ctx->pc = 0x33c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 192), GPR_U32(ctx, 16));
label_33c7ac:
    // 0x33c7ac: 0xafcf00b0  sw          $t7, 0xB0($fp)
    ctx->pc = 0x33c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 15));
label_33c7b0:
    // 0x33c7b0: 0xafce00c8  sw          $t6, 0xC8($fp)
    ctx->pc = 0x33c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 200), GPR_U32(ctx, 14));
label_33c7b4:
    // 0x33c7b4: 0xafcd00d8  sw          $t5, 0xD8($fp)
    ctx->pc = 0x33c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 216), GPR_U32(ctx, 13));
label_33c7b8:
    // 0x33c7b8: 0xafcc0064  sw          $t4, 0x64($fp)
    ctx->pc = 0x33c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 12));
label_33c7bc:
    // 0x33c7bc: 0xafcb0074  sw          $t3, 0x74($fp)
    ctx->pc = 0x33c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 11));
label_33c7c0:
    // 0x33c7c0: 0xafca0058  sw          $t2, 0x58($fp)
    ctx->pc = 0x33c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 10));
label_33c7c4:
    // 0x33c7c4: 0xafc90038  sw          $t1, 0x38($fp)
    ctx->pc = 0x33c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 9));
label_33c7c8:
    // 0x33c7c8: 0xafc80034  sw          $t0, 0x34($fp)
    ctx->pc = 0x33c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 8));
label_33c7cc:
    // 0x33c7cc: 0xafc70044  sw          $a3, 0x44($fp)
    ctx->pc = 0x33c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 7));
label_33c7d0:
    // 0x33c7d0: 0xafc60070  sw          $a2, 0x70($fp)
    ctx->pc = 0x33c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 6));
label_33c7d4:
    // 0x33c7d4: 0xafc50050  sw          $a1, 0x50($fp)
    ctx->pc = 0x33c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 5));
label_33c7d8:
    // 0x33c7d8: 0xafc4005c  sw          $a0, 0x5C($fp)
    ctx->pc = 0x33c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 92), GPR_U32(ctx, 4));
label_33c7dc:
    // 0x33c7dc: 0xafc3004c  sw          $v1, 0x4C($fp)
    ctx->pc = 0x33c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 3));
label_33c7e0:
    // 0x33c7e0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x33c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_33c7e4:
    // 0x33c7e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c7e8:
    // 0x33c7e8: 0x8f220034  lw          $v0, 0x34($t9)
    ctx->pc = 0x33c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_33c7ec:
    // 0x33c7ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33c7f0:
    // 0x33c7f0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x33c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_33c7f4:
    // 0x33c7f4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x33c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_33c7f8:
    // 0x33c7f8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x33c7f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_33c7fc:
    // 0x33c7fc: 0x7fb90070  sq          $t9, 0x70($sp)
    ctx->pc = 0x33c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 25));
label_33c800:
    // 0x33c800: 0x60f809  jalr        $v1
label_33c804:
    if (ctx->pc == 0x33C804u) {
        ctx->pc = 0x33C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C800u;
        // 0x33c804: 0x3242021  addu        $a0, $t9, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C808u;
        goto label_33c808;
    }
    ctx->pc = 0x33C800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C808u);
        ctx->pc = 0x33C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C800u;
        // 0x33c804: 0x3242021  addu        $a0, $t9, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C800u, 0x33C808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C808u;
label_33c808:
    // 0x33c808: 0x7bb90070  lq          $t9, 0x70($sp)
    ctx->pc = 0x33c808u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33c80c:
    // 0x33c80c: 0x97220032  lhu         $v0, 0x32($t9)
    ctx->pc = 0x33c80cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 50)));
label_33c810:
    // 0x33c810: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_33c814:
    // 0x33c814: 0xa7220032  sh          $v0, 0x32($t9)
    ctx->pc = 0x33c814u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 50), (uint16_t)GPR_U32(ctx, 2));
label_33c818:
    // 0x33c818: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x33c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_33c81c:
    // 0x33c81c: 0x481fff0  bgez        $a0, . + 4 + (-0x10 << 2)
label_33c820:
    if (ctx->pc == 0x33C820u) {
        ctx->pc = 0x33C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C81Cu;
        // 0x33c820: 0x27390060  addiu       $t9, $t9, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C824u;
        goto label_33c824;
    }
    ctx->pc = 0x33C81Cu;
    {
        const bool branch_taken_0x33c81c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x33C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C81Cu;
        // 0x33c820: 0x27390060  addiu       $t9, $t9, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c81c) {
            ctx->pc = 0x33C7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c7e0;
        }
    }
    ctx->pc = 0x33C824u;
label_33c824:
    // 0x33c824: 0x3404f4e0  ori         $a0, $zero, 0xF4E0
    ctx->pc = 0x33c824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62688);
label_33c828:
    // 0x33c828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c82c:
    // 0x33c82c: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x33c82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_33c830:
    // 0x33c830: 0xc10c1fa  jal         func_4307E8
label_33c834:
    if (ctx->pc == 0x33C834u) {
        ctx->pc = 0x33C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C830u;
        // 0x33c834: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C838u;
        goto label_33c838;
    }
    ctx->pc = 0x33C830u;
    SET_GPR_U32(ctx, 31, 0x33C838u);
    ctx->pc = 0x33C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C830u;
    // 0x33c834: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x33C830u, 0x33C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C838u;
label_33c838:
    // 0x33c838: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x33c838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c83c:
    // 0x33c83c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x33c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_33c840:
    // 0x33c840: 0x24437198  addiu       $v1, $v0, 0x7198
    ctx->pc = 0x33c840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29080));
label_33c844:
    // 0x33c844: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x33c844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_33c848:
    // 0x33c848: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x33c848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_33c84c:
    // 0x33c84c: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x33c84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_33c850:
    // 0x33c850: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x33c850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_33c854:
    // 0x33c854: 0x8c790010  lw          $t9, 0x10($v1)
    ctx->pc = 0x33c854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_33c858:
    // 0x33c858: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x33c858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c85c:
    // 0x33c85c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x33c85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c860:
    // 0x33c860: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x33c860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c864:
    // 0x33c864: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x33c864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c868:
    // 0x33c868: 0xafb90020  sw          $t9, 0x20($sp)
    ctx->pc = 0x33c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 25));
label_33c86c:
    // 0x33c86c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x33c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_33c870:
    // 0x33c870: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x33c870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_33c874:
    // 0x33c874: 0x245971b0  addiu       $t9, $v0, 0x71B0
    ctx->pc = 0x33c874u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 29104));
label_33c878:
    // 0x33c878: 0x6b240007  ldl         $a0, 0x7($t9)
    ctx->pc = 0x33c878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_33c87c:
    // 0x33c87c: 0x6f240000  ldr         $a0, 0x0($t9)
    ctx->pc = 0x33c87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_33c880:
    // 0x33c880: 0x6b25000f  ldl         $a1, 0xF($t9)
    ctx->pc = 0x33c880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_33c884:
    // 0x33c884: 0x6f250008  ldr         $a1, 0x8($t9)
    ctx->pc = 0x33c884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_33c888:
    // 0x33c888: 0x8f260010  lw          $a2, 0x10($t9)
    ctx->pc = 0x33c888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33c88c:
    // 0x33c88c: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x33c88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c890:
    // 0x33c890: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x33c890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c894:
    // 0x33c894: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x33c894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c898:
    // 0x33c898: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x33c898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33c89c:
    // 0x33c89c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x33c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_33c8a0:
    // 0x33c8a0: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x33c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_33c8a4:
    // 0x33c8a4: 0x0  nop
    ctx->pc = 0x33c8a4u;
    // NOP
label_33c8a8:
    // 0x33c8a8: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x33c8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_33c8ac:
    // 0x33c8ac: 0x2a22018  mult        $a0, $s5, $v0
    ctx->pc = 0x33c8acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33c8b0:
    // 0x33c8b0: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x33c8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_33c8b4:
    // 0x33c8b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x33c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_33c8b8:
    // 0x33c8b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33c8bc:
    // 0x33c8bc: 0x34630e30  ori         $v1, $v1, 0xE30
    ctx->pc = 0x33c8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3632);
label_33c8c0:
    // 0x33c8c0: 0x344224b0  ori         $v0, $v0, 0x24B0
    ctx->pc = 0x33c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9392);
label_33c8c4:
    // 0x33c8c4: 0x15b880  sll         $s7, $s5, 2
    ctx->pc = 0x33c8c4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_33c8c8:
    // 0x33c8c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x33c8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_33c8cc:
    // 0x33c8cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33c8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33c8d0:
    // 0x33c8d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33c8d4:
    // 0x33c8d4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x33c8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33c8d8:
    // 0x33c8d8: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x33c8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_33c8dc:
    // 0x33c8dc: 0x3c4b021  addu        $s6, $fp, $a0
    ctx->pc = 0x33c8dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_33c8e0:
    // 0x33c8e0: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x33c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
label_33c8e4:
    // 0x33c8e4: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x33c8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_33c8e8:
    // 0x33c8e8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x33c8e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_33c8ec:
    // 0x33c8ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x33c8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33c8f0:
    // 0x33c8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c8f4:
    // 0x33c8f4: 0xc0d0d42  jal         func_343508
label_33c8f8:
    if (ctx->pc == 0x33C8F8u) {
        ctx->pc = 0x33C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8F4u;
        // 0x33c8f8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C8FCu;
        goto label_33c8fc;
    }
    ctx->pc = 0x33C8F4u;
    SET_GPR_U32(ctx, 31, 0x33C8FCu);
    ctx->pc = 0x33C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8F4u;
    // 0x33c8f8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343508u, 0x33C8F4u, 0x33C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8FCu;
label_33c8fc:
    // 0x33c8fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x33c8fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c900:
    // 0x33c900: 0xaed00030  sw          $s0, 0x30($s6)
    ctx->pc = 0x33c900u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 16));
label_33c904:
    // 0x33c904: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x33c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_33c908:
    // 0x33c908: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x33c908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_33c90c:
    // 0x33c90c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x33c90cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_33c910:
    // 0x33c910: 0x265228e0  addiu       $s2, $s2, 0x28E0
    ctx->pc = 0x33c910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10464));
label_33c914:
    // 0x33c914: 0x8fb3005c  lw          $s3, 0x5C($sp)
    ctx->pc = 0x33c914u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_33c918:
    // 0x33c918: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x33c918u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_33c91c:
    // 0x33c91c: 0x263128b0  addiu       $s1, $s1, 0x28B0
    ctx->pc = 0x33c91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10416));
label_33c920:
    // 0x33c920: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x33c920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_33c924:
    // 0x33c924: 0x26102810  addiu       $s0, $s0, 0x2810
    ctx->pc = 0x33c924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10256));
label_33c928:
    // 0x33c928: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x33c928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_33c92c:
    // 0x33c92c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x33c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_33c930:
    // 0x33c930: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x33c930u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_33c934:
    // 0x33c934: 0x24190003  addiu       $t9, $zero, 0x3
    ctx->pc = 0x33c934u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33c938:
    // 0x33c938: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x33c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_33c93c:
    // 0x33c93c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x33c93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33c940:
    // 0x33c940: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x33c940u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33c944:
    // 0x33c944: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x33c944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_33c948:
    // 0x33c948: 0x244271a0  addiu       $v0, $v0, 0x71A0
    ctx->pc = 0x33c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29088));
label_33c94c:
    // 0x33c94c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x33c94cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_33c950:
    // 0x33c950: 0x3c23021  addu        $a2, $fp, $v0
    ctx->pc = 0x33c950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c954:
    // 0x33c954: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x33c954u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_33c958:
    // 0x33c958: 0x94c20032  lhu         $v0, 0x32($a2)
    ctx->pc = 0x33c958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 50)));
label_33c95c:
    // 0x33c95c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x33c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33c960:
    // 0x33c960: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33c960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_33c964:
    // 0x33c964: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x33c964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
label_33c968:
    // 0x33c968: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x33c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33c96c:
    // 0x33c96c: 0xa0c50031  sb          $a1, 0x31($a2)
    ctx->pc = 0x33c96cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 49), (uint8_t)GPR_U32(ctx, 5));
label_33c970:
    // 0x33c970: 0xe4c10064  swc1        $f1, 0x64($a2)
    ctx->pc = 0x33c970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
label_33c974:
    // 0x33c974: 0x14990003  bne         $a0, $t9, . + 4 + (0x3 << 2)
label_33c978:
    if (ctx->pc == 0x33C978u) {
        ctx->pc = 0x33C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C974u;
        // 0x33c978: 0xa4c20032  sh          $v0, 0x32($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C97Cu;
        goto label_33c97c;
    }
    ctx->pc = 0x33C974u;
    {
        const bool branch_taken_0x33c974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 25));
        ctx->pc = 0x33C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C974u;
        // 0x33c978: 0xa4c20032  sh          $v0, 0x32($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c974) {
            ctx->pc = 0x33C984u;
            goto label_33c984;
        }
    }
    ctx->pc = 0x33C97Cu;
label_33c97c:
    // 0x33c97c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_33c980:
    // 0x33c980: 0xa4c20032  sh          $v0, 0x32($a2)
    ctx->pc = 0x33c980u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 2));
label_33c984:
    // 0x33c984: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33c984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c988:
    // 0x33c988: 0xc0d0a7a  jal         func_3429E8
label_33c98c:
    if (ctx->pc == 0x33C98Cu) {
        ctx->pc = 0x33C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C988u;
        // 0x33c98c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C990u;
        goto label_33c990;
    }
    ctx->pc = 0x33C988u;
    SET_GPR_U32(ctx, 31, 0x33C990u);
    ctx->pc = 0x33C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C988u;
    // 0x33c98c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429E8u, 0x33C988u, 0x33C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C990u;
label_33c990:
    // 0x33c990: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33c990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_33c994:
    // 0x33c994: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x33c994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_33c998:
    // 0x33c998: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x33c998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_33c99c:
    // 0x33c99c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x33c99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_33c9a0:
    // 0x33c9a0: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x33c9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_33c9a4:
    // 0x33c9a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_33c9a8:
    if (ctx->pc == 0x33C9A8u) {
        ctx->pc = 0x33C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9A4u;
        // 0x33c9a8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9ACu;
        goto label_33c9ac;
    }
    ctx->pc = 0x33C9A4u;
    {
        const bool branch_taken_0x33c9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9A4u;
        // 0x33c9a8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9a4) {
            ctx->pc = 0x33C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c928;
        }
    }
    ctx->pc = 0x33C9ACu;
label_33c9ac:
    // 0x33c9ac: 0x2f58021  addu        $s0, $s7, $s5
    ctx->pc = 0x33c9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
label_33c9b0:
    // 0x33c9b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_33c9b4:
    // 0x33c9b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x33c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33c9b8:
    // 0x33c9b8: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x33c9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_33c9bc:
    // 0x33c9bc: 0x245428c8  addiu       $s4, $v0, 0x28C8
    ctx->pc = 0x33c9bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10440));
label_33c9c0:
    // 0x33c9c0: 0x24732860  addiu       $s3, $v1, 0x2860
    ctx->pc = 0x33c9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 10336));
label_33c9c4:
    // 0x33c9c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33c9c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c9c8:
    // 0x33c9c8: 0x24170060  addiu       $s7, $zero, 0x60
    ctx->pc = 0x33c9c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_33c9cc:
    // 0x33c9cc: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x33c9ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33c9d0:
    // 0x33c9d0: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x33c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_33c9d4:
    // 0x33c9d4: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x33c9d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_33c9d8:
    // 0x33c9d8: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x33c9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33c9dc:
    // 0x33c9dc: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x33c9dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_33c9e0:
    // 0x33c9e0: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x33c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_33c9e4:
    // 0x33c9e4: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x33c9e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_33c9e8:
    // 0x33c9e8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_33c9ec:
    // 0x33c9ec: 0x3c23021  addu        $a2, $fp, $v0
    ctx->pc = 0x33c9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_33c9f0:
    // 0x33c9f0: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x33c9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_33c9f4:
    // 0x33c9f4: 0x94c20032  lhu         $v0, 0x32($a2)
    ctx->pc = 0x33c9f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 50)));
label_33c9f8:
    // 0x33c9f8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x33c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33c9fc:
    // 0x33c9fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33c9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_33ca00:
    // 0x33ca00: 0xa0c50031  sb          $a1, 0x31($a2)
    ctx->pc = 0x33ca00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 49), (uint8_t)GPR_U32(ctx, 5));
label_33ca04:
    // 0x33ca04: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x33ca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
label_33ca08:
    // 0x33ca08: 0x14950003  bne         $a0, $s5, . + 4 + (0x3 << 2)
label_33ca0c:
    if (ctx->pc == 0x33CA0Cu) {
        ctx->pc = 0x33CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA08u;
        // 0x33ca0c: 0xa4c20032  sh          $v0, 0x32($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA10u;
        goto label_33ca10;
    }
    ctx->pc = 0x33CA08u;
    {
        const bool branch_taken_0x33ca08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x33CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA08u;
        // 0x33ca0c: 0xa4c20032  sh          $v0, 0x32($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca08) {
            ctx->pc = 0x33CA18u;
            goto label_33ca18;
        }
    }
    ctx->pc = 0x33CA10u;
label_33ca10:
    // 0x33ca10: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33ca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_33ca14:
    // 0x33ca14: 0xa4c20032  sh          $v0, 0x32($a2)
    ctx->pc = 0x33ca14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 2));
label_33ca18:
    // 0x33ca18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33ca18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33ca1c:
    // 0x33ca1c: 0xc0d0a7a  jal         func_3429E8
label_33ca20:
    if (ctx->pc == 0x33CA20u) {
        ctx->pc = 0x33CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA1Cu;
        // 0x33ca20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA24u;
        goto label_33ca24;
    }
    ctx->pc = 0x33CA1Cu;
    SET_GPR_U32(ctx, 31, 0x33CA24u);
    ctx->pc = 0x33CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA1Cu;
    // 0x33ca20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429E8u, 0x33CA1Cu, 0x33CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA24u;
label_33ca24:
    // 0x33ca24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33ca24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33ca28:
    // 0x33ca28: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x33ca28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_33ca2c:
    // 0x33ca2c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x33ca2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_33ca30:
    // 0x33ca30: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x33ca30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_33ca34:
    // 0x33ca34: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_33ca38:
    if (ctx->pc == 0x33CA38u) {
        ctx->pc = 0x33CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA34u;
        // 0x33ca38: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA3Cu;
        goto label_33ca3c;
    }
    ctx->pc = 0x33CA34u;
    {
        const bool branch_taken_0x33ca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA34u;
        // 0x33ca38: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca34) {
            ctx->pc = 0x33C9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c9d0;
        }
    }
    ctx->pc = 0x33CA3Cu;
label_33ca3c:
    // 0x33ca3c: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x33ca3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_33ca40:
    // 0x33ca40: 0x2aa2003c  slti        $v0, $s5, 0x3C
    ctx->pc = 0x33ca40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)60) ? 1 : 0);
label_33ca44:
    // 0x33ca44: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_33ca48:
    if (ctx->pc == 0x33CA48u) {
        ctx->pc = 0x33CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA44u;
        // 0x33ca48: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA4Cu;
        goto label_33ca4c;
    }
    ctx->pc = 0x33CA44u;
    {
        const bool branch_taken_0x33ca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA44u;
        // 0x33ca48: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca44) {
            ctx->pc = 0x33C8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c8a8;
        }
    }
    ctx->pc = 0x33CA4Cu;
label_33ca4c:
    // 0x33ca4c: 0x3c100004  lui         $s0, 0x4
    ctx->pc = 0x33ca4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4 << 16));
label_33ca50:
    // 0x33ca50: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x33ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_33ca54:
    // 0x33ca54: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x33ca54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_33ca58:
    // 0x33ca58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x33ca58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33ca5c:
    // 0x33ca5c: 0x3610f3f0  ori         $s0, $s0, 0xF3F0
    ctx->pc = 0x33ca5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)62448);
label_33ca60:
    // 0x33ca60: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x33ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_33ca64:
    // 0x33ca64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33ca64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33ca68:
    // 0x33ca68: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x33ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_33ca6c:
    // 0x33ca6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x33ca6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_33ca70:
    // 0x33ca70: 0xc0d0d42  jal         func_343508
label_33ca74:
    if (ctx->pc == 0x33CA74u) {
        ctx->pc = 0x33CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA70u;
        // 0x33ca74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA78u;
        goto label_33ca78;
    }
    ctx->pc = 0x33CA70u;
    SET_GPR_U32(ctx, 31, 0x33CA78u);
    ctx->pc = 0x33CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA70u;
    // 0x33ca74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343508u, 0x33CA70u, 0x33CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA78u;
label_33ca78:
    // 0x33ca78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x33ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33ca7c:
    // 0x33ca7c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x33ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_33ca80:
    // 0x33ca80: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x33ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_33ca84:
    // 0x33ca84: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x33ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_33ca88:
    // 0x33ca88: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x33ca88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_33ca8c:
    // 0x33ca8c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x33ca8cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33ca90:
    // 0x33ca90: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x33ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_33ca94:
    // 0x33ca94: 0x3484f380  ori         $a0, $a0, 0xF380
    ctx->pc = 0x33ca94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62336);
label_33ca98:
    // 0x33ca98: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_33ca9c:
    // 0x33ca9c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x33ca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_33caa0:
    // 0x33caa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33caa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33caa4:
    // 0x33caa4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x33caa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33caa8:
    // 0x33caa8: 0xe47473e0  swc1        $f20, 0x73E0($v1)
    ctx->pc = 0x33caa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 29664), bits); }
label_33caac:
    // 0x33caac: 0xac7072d0  sw          $s0, 0x72D0($v1)
    ctx->pc = 0x33caacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29392), GPR_U32(ctx, 16));
label_33cab0:
    // 0x33cab0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33cab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33cab4:
    // 0x33cab4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x33cab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33cab8:
    // 0x33cab8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x33cab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_33cabc:
    // 0x33cabc: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x33cabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_33cac0:
    // 0x33cac0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x33cac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_33cac4:
    // 0x33cac4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x33cac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_33cac8:
    // 0x33cac8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x33cac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33cacc:
    // 0x33cacc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x33caccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_33cad0:
    // 0x33cad0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x33cad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_33cad4:
    // 0x33cad4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x33cad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33cad8:
    // 0x33cad8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x33cad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33cadc:
    // 0x33cadc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x33cadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_33cae0:
    // 0x33cae0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x33cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33cae4:
    // 0x33cae4: 0xac647320  sw          $a0, 0x7320($v1)
    ctx->pc = 0x33cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29472), GPR_U32(ctx, 4));
label_33cae8:
    // 0x33cae8: 0x7c657390  sq          $a1, 0x7390($v1)
    ctx->pc = 0x33cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 29584), GPR_VEC(ctx, 5));
label_33caec:
    // 0x33caec: 0xe46073e4  swc1        $f0, 0x73E4($v1)
    ctx->pc = 0x33caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 29668), bits); }
label_33caf0:
    // 0x33caf0: 0xa06673b1  sb          $a2, 0x73B1($v1)
    ctx->pc = 0x33caf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29617), (uint8_t)GPR_U32(ctx, 6));
label_33caf4:
    // 0x33caf4: 0xa46773b2  sh          $a3, 0x73B2($v1)
    ctx->pc = 0x33caf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 29618), (uint16_t)GPR_U32(ctx, 7));
label_33caf8:
    // 0x33caf8: 0x3e00008  jr          $ra
label_33cafc:
    if (ctx->pc == 0x33CAFCu) {
        ctx->pc = 0x33CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAF8u;
        // 0x33cafc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB00u;
        goto label_33cb00;
    }
    ctx->pc = 0x33CAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAF8u;
        // 0x33cafc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CB00u;
label_33cb00:
    // 0x33cb00: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x33cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_33cb04:
    // 0x33cb04: 0x0  nop
    ctx->pc = 0x33cb04u;
    // NOP
    ctx->pc = 0x33cb08u;
}
