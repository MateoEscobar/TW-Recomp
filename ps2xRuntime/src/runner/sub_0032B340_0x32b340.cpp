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

// Function: sub_0032B340
// Address: 0x32b340 - 0x32bac0
void sub_0032B340_0x32b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B340_0x32b340");
#endif

    switch (ctx->pc) {
        case 0x32b340u: goto label_32b340;
        case 0x32b344u: goto label_32b344;
        case 0x32b348u: goto label_32b348;
        case 0x32b34cu: goto label_32b34c;
        case 0x32b350u: goto label_32b350;
        case 0x32b354u: goto label_32b354;
        case 0x32b358u: goto label_32b358;
        case 0x32b35cu: goto label_32b35c;
        case 0x32b360u: goto label_32b360;
        case 0x32b364u: goto label_32b364;
        case 0x32b368u: goto label_32b368;
        case 0x32b36cu: goto label_32b36c;
        case 0x32b370u: goto label_32b370;
        case 0x32b374u: goto label_32b374;
        case 0x32b378u: goto label_32b378;
        case 0x32b37cu: goto label_32b37c;
        case 0x32b380u: goto label_32b380;
        case 0x32b384u: goto label_32b384;
        case 0x32b388u: goto label_32b388;
        case 0x32b38cu: goto label_32b38c;
        case 0x32b390u: goto label_32b390;
        case 0x32b394u: goto label_32b394;
        case 0x32b398u: goto label_32b398;
        case 0x32b39cu: goto label_32b39c;
        case 0x32b3a0u: goto label_32b3a0;
        case 0x32b3a4u: goto label_32b3a4;
        case 0x32b3a8u: goto label_32b3a8;
        case 0x32b3acu: goto label_32b3ac;
        case 0x32b3b0u: goto label_32b3b0;
        case 0x32b3b4u: goto label_32b3b4;
        case 0x32b3b8u: goto label_32b3b8;
        case 0x32b3bcu: goto label_32b3bc;
        case 0x32b3c0u: goto label_32b3c0;
        case 0x32b3c4u: goto label_32b3c4;
        case 0x32b3c8u: goto label_32b3c8;
        case 0x32b3ccu: goto label_32b3cc;
        case 0x32b3d0u: goto label_32b3d0;
        case 0x32b3d4u: goto label_32b3d4;
        case 0x32b3d8u: goto label_32b3d8;
        case 0x32b3dcu: goto label_32b3dc;
        case 0x32b3e0u: goto label_32b3e0;
        case 0x32b3e4u: goto label_32b3e4;
        case 0x32b3e8u: goto label_32b3e8;
        case 0x32b3ecu: goto label_32b3ec;
        case 0x32b3f0u: goto label_32b3f0;
        case 0x32b3f4u: goto label_32b3f4;
        case 0x32b3f8u: goto label_32b3f8;
        case 0x32b3fcu: goto label_32b3fc;
        case 0x32b400u: goto label_32b400;
        case 0x32b404u: goto label_32b404;
        case 0x32b408u: goto label_32b408;
        case 0x32b40cu: goto label_32b40c;
        case 0x32b410u: goto label_32b410;
        case 0x32b414u: goto label_32b414;
        case 0x32b418u: goto label_32b418;
        case 0x32b41cu: goto label_32b41c;
        case 0x32b420u: goto label_32b420;
        case 0x32b424u: goto label_32b424;
        case 0x32b428u: goto label_32b428;
        case 0x32b42cu: goto label_32b42c;
        case 0x32b430u: goto label_32b430;
        case 0x32b434u: goto label_32b434;
        case 0x32b438u: goto label_32b438;
        case 0x32b43cu: goto label_32b43c;
        case 0x32b440u: goto label_32b440;
        case 0x32b444u: goto label_32b444;
        case 0x32b448u: goto label_32b448;
        case 0x32b44cu: goto label_32b44c;
        case 0x32b450u: goto label_32b450;
        case 0x32b454u: goto label_32b454;
        case 0x32b458u: goto label_32b458;
        case 0x32b45cu: goto label_32b45c;
        case 0x32b460u: goto label_32b460;
        case 0x32b464u: goto label_32b464;
        case 0x32b468u: goto label_32b468;
        case 0x32b46cu: goto label_32b46c;
        case 0x32b470u: goto label_32b470;
        case 0x32b474u: goto label_32b474;
        case 0x32b478u: goto label_32b478;
        case 0x32b47cu: goto label_32b47c;
        case 0x32b480u: goto label_32b480;
        case 0x32b484u: goto label_32b484;
        case 0x32b488u: goto label_32b488;
        case 0x32b48cu: goto label_32b48c;
        case 0x32b490u: goto label_32b490;
        case 0x32b494u: goto label_32b494;
        case 0x32b498u: goto label_32b498;
        case 0x32b49cu: goto label_32b49c;
        case 0x32b4a0u: goto label_32b4a0;
        case 0x32b4a4u: goto label_32b4a4;
        case 0x32b4a8u: goto label_32b4a8;
        case 0x32b4acu: goto label_32b4ac;
        case 0x32b4b0u: goto label_32b4b0;
        case 0x32b4b4u: goto label_32b4b4;
        case 0x32b4b8u: goto label_32b4b8;
        case 0x32b4bcu: goto label_32b4bc;
        case 0x32b4c0u: goto label_32b4c0;
        case 0x32b4c4u: goto label_32b4c4;
        case 0x32b4c8u: goto label_32b4c8;
        case 0x32b4ccu: goto label_32b4cc;
        case 0x32b4d0u: goto label_32b4d0;
        case 0x32b4d4u: goto label_32b4d4;
        case 0x32b4d8u: goto label_32b4d8;
        case 0x32b4dcu: goto label_32b4dc;
        case 0x32b4e0u: goto label_32b4e0;
        case 0x32b4e4u: goto label_32b4e4;
        case 0x32b4e8u: goto label_32b4e8;
        case 0x32b4ecu: goto label_32b4ec;
        case 0x32b4f0u: goto label_32b4f0;
        case 0x32b4f4u: goto label_32b4f4;
        case 0x32b4f8u: goto label_32b4f8;
        case 0x32b4fcu: goto label_32b4fc;
        case 0x32b500u: goto label_32b500;
        case 0x32b504u: goto label_32b504;
        case 0x32b508u: goto label_32b508;
        case 0x32b50cu: goto label_32b50c;
        case 0x32b510u: goto label_32b510;
        case 0x32b514u: goto label_32b514;
        case 0x32b518u: goto label_32b518;
        case 0x32b51cu: goto label_32b51c;
        case 0x32b520u: goto label_32b520;
        case 0x32b524u: goto label_32b524;
        case 0x32b528u: goto label_32b528;
        case 0x32b52cu: goto label_32b52c;
        case 0x32b530u: goto label_32b530;
        case 0x32b534u: goto label_32b534;
        case 0x32b538u: goto label_32b538;
        case 0x32b53cu: goto label_32b53c;
        case 0x32b540u: goto label_32b540;
        case 0x32b544u: goto label_32b544;
        case 0x32b548u: goto label_32b548;
        case 0x32b54cu: goto label_32b54c;
        case 0x32b550u: goto label_32b550;
        case 0x32b554u: goto label_32b554;
        case 0x32b558u: goto label_32b558;
        case 0x32b55cu: goto label_32b55c;
        case 0x32b560u: goto label_32b560;
        case 0x32b564u: goto label_32b564;
        case 0x32b568u: goto label_32b568;
        case 0x32b56cu: goto label_32b56c;
        case 0x32b570u: goto label_32b570;
        case 0x32b574u: goto label_32b574;
        case 0x32b578u: goto label_32b578;
        case 0x32b57cu: goto label_32b57c;
        case 0x32b580u: goto label_32b580;
        case 0x32b584u: goto label_32b584;
        case 0x32b588u: goto label_32b588;
        case 0x32b58cu: goto label_32b58c;
        case 0x32b590u: goto label_32b590;
        case 0x32b594u: goto label_32b594;
        case 0x32b598u: goto label_32b598;
        case 0x32b59cu: goto label_32b59c;
        case 0x32b5a0u: goto label_32b5a0;
        case 0x32b5a4u: goto label_32b5a4;
        case 0x32b5a8u: goto label_32b5a8;
        case 0x32b5acu: goto label_32b5ac;
        case 0x32b5b0u: goto label_32b5b0;
        case 0x32b5b4u: goto label_32b5b4;
        case 0x32b5b8u: goto label_32b5b8;
        case 0x32b5bcu: goto label_32b5bc;
        case 0x32b5c0u: goto label_32b5c0;
        case 0x32b5c4u: goto label_32b5c4;
        case 0x32b5c8u: goto label_32b5c8;
        case 0x32b5ccu: goto label_32b5cc;
        case 0x32b5d0u: goto label_32b5d0;
        case 0x32b5d4u: goto label_32b5d4;
        case 0x32b5d8u: goto label_32b5d8;
        case 0x32b5dcu: goto label_32b5dc;
        case 0x32b5e0u: goto label_32b5e0;
        case 0x32b5e4u: goto label_32b5e4;
        case 0x32b5e8u: goto label_32b5e8;
        case 0x32b5ecu: goto label_32b5ec;
        case 0x32b5f0u: goto label_32b5f0;
        case 0x32b5f4u: goto label_32b5f4;
        case 0x32b5f8u: goto label_32b5f8;
        case 0x32b5fcu: goto label_32b5fc;
        case 0x32b600u: goto label_32b600;
        case 0x32b604u: goto label_32b604;
        case 0x32b608u: goto label_32b608;
        case 0x32b60cu: goto label_32b60c;
        case 0x32b610u: goto label_32b610;
        case 0x32b614u: goto label_32b614;
        case 0x32b618u: goto label_32b618;
        case 0x32b61cu: goto label_32b61c;
        case 0x32b620u: goto label_32b620;
        case 0x32b624u: goto label_32b624;
        case 0x32b628u: goto label_32b628;
        case 0x32b62cu: goto label_32b62c;
        case 0x32b630u: goto label_32b630;
        case 0x32b634u: goto label_32b634;
        case 0x32b638u: goto label_32b638;
        case 0x32b63cu: goto label_32b63c;
        case 0x32b640u: goto label_32b640;
        case 0x32b644u: goto label_32b644;
        case 0x32b648u: goto label_32b648;
        case 0x32b64cu: goto label_32b64c;
        case 0x32b650u: goto label_32b650;
        case 0x32b654u: goto label_32b654;
        case 0x32b658u: goto label_32b658;
        case 0x32b65cu: goto label_32b65c;
        case 0x32b660u: goto label_32b660;
        case 0x32b664u: goto label_32b664;
        case 0x32b668u: goto label_32b668;
        case 0x32b66cu: goto label_32b66c;
        case 0x32b670u: goto label_32b670;
        case 0x32b674u: goto label_32b674;
        case 0x32b678u: goto label_32b678;
        case 0x32b67cu: goto label_32b67c;
        case 0x32b680u: goto label_32b680;
        case 0x32b684u: goto label_32b684;
        case 0x32b688u: goto label_32b688;
        case 0x32b68cu: goto label_32b68c;
        case 0x32b690u: goto label_32b690;
        case 0x32b694u: goto label_32b694;
        case 0x32b698u: goto label_32b698;
        case 0x32b69cu: goto label_32b69c;
        case 0x32b6a0u: goto label_32b6a0;
        case 0x32b6a4u: goto label_32b6a4;
        case 0x32b6a8u: goto label_32b6a8;
        case 0x32b6acu: goto label_32b6ac;
        case 0x32b6b0u: goto label_32b6b0;
        case 0x32b6b4u: goto label_32b6b4;
        case 0x32b6b8u: goto label_32b6b8;
        case 0x32b6bcu: goto label_32b6bc;
        case 0x32b6c0u: goto label_32b6c0;
        case 0x32b6c4u: goto label_32b6c4;
        case 0x32b6c8u: goto label_32b6c8;
        case 0x32b6ccu: goto label_32b6cc;
        case 0x32b6d0u: goto label_32b6d0;
        case 0x32b6d4u: goto label_32b6d4;
        case 0x32b6d8u: goto label_32b6d8;
        case 0x32b6dcu: goto label_32b6dc;
        case 0x32b6e0u: goto label_32b6e0;
        case 0x32b6e4u: goto label_32b6e4;
        case 0x32b6e8u: goto label_32b6e8;
        case 0x32b6ecu: goto label_32b6ec;
        case 0x32b6f0u: goto label_32b6f0;
        case 0x32b6f4u: goto label_32b6f4;
        case 0x32b6f8u: goto label_32b6f8;
        case 0x32b6fcu: goto label_32b6fc;
        case 0x32b700u: goto label_32b700;
        case 0x32b704u: goto label_32b704;
        case 0x32b708u: goto label_32b708;
        case 0x32b70cu: goto label_32b70c;
        case 0x32b710u: goto label_32b710;
        case 0x32b714u: goto label_32b714;
        case 0x32b718u: goto label_32b718;
        case 0x32b71cu: goto label_32b71c;
        case 0x32b720u: goto label_32b720;
        case 0x32b724u: goto label_32b724;
        case 0x32b728u: goto label_32b728;
        case 0x32b72cu: goto label_32b72c;
        case 0x32b730u: goto label_32b730;
        case 0x32b734u: goto label_32b734;
        case 0x32b738u: goto label_32b738;
        case 0x32b73cu: goto label_32b73c;
        case 0x32b740u: goto label_32b740;
        case 0x32b744u: goto label_32b744;
        case 0x32b748u: goto label_32b748;
        case 0x32b74cu: goto label_32b74c;
        case 0x32b750u: goto label_32b750;
        case 0x32b754u: goto label_32b754;
        case 0x32b758u: goto label_32b758;
        case 0x32b75cu: goto label_32b75c;
        case 0x32b760u: goto label_32b760;
        case 0x32b764u: goto label_32b764;
        case 0x32b768u: goto label_32b768;
        case 0x32b76cu: goto label_32b76c;
        case 0x32b770u: goto label_32b770;
        case 0x32b774u: goto label_32b774;
        case 0x32b778u: goto label_32b778;
        case 0x32b77cu: goto label_32b77c;
        case 0x32b780u: goto label_32b780;
        case 0x32b784u: goto label_32b784;
        case 0x32b788u: goto label_32b788;
        case 0x32b78cu: goto label_32b78c;
        case 0x32b790u: goto label_32b790;
        case 0x32b794u: goto label_32b794;
        case 0x32b798u: goto label_32b798;
        case 0x32b79cu: goto label_32b79c;
        case 0x32b7a0u: goto label_32b7a0;
        case 0x32b7a4u: goto label_32b7a4;
        case 0x32b7a8u: goto label_32b7a8;
        case 0x32b7acu: goto label_32b7ac;
        case 0x32b7b0u: goto label_32b7b0;
        case 0x32b7b4u: goto label_32b7b4;
        case 0x32b7b8u: goto label_32b7b8;
        case 0x32b7bcu: goto label_32b7bc;
        case 0x32b7c0u: goto label_32b7c0;
        case 0x32b7c4u: goto label_32b7c4;
        case 0x32b7c8u: goto label_32b7c8;
        case 0x32b7ccu: goto label_32b7cc;
        case 0x32b7d0u: goto label_32b7d0;
        case 0x32b7d4u: goto label_32b7d4;
        case 0x32b7d8u: goto label_32b7d8;
        case 0x32b7dcu: goto label_32b7dc;
        case 0x32b7e0u: goto label_32b7e0;
        case 0x32b7e4u: goto label_32b7e4;
        case 0x32b7e8u: goto label_32b7e8;
        case 0x32b7ecu: goto label_32b7ec;
        case 0x32b7f0u: goto label_32b7f0;
        case 0x32b7f4u: goto label_32b7f4;
        case 0x32b7f8u: goto label_32b7f8;
        case 0x32b7fcu: goto label_32b7fc;
        case 0x32b800u: goto label_32b800;
        case 0x32b804u: goto label_32b804;
        case 0x32b808u: goto label_32b808;
        case 0x32b80cu: goto label_32b80c;
        case 0x32b810u: goto label_32b810;
        case 0x32b814u: goto label_32b814;
        case 0x32b818u: goto label_32b818;
        case 0x32b81cu: goto label_32b81c;
        case 0x32b820u: goto label_32b820;
        case 0x32b824u: goto label_32b824;
        case 0x32b828u: goto label_32b828;
        case 0x32b82cu: goto label_32b82c;
        case 0x32b830u: goto label_32b830;
        case 0x32b834u: goto label_32b834;
        case 0x32b838u: goto label_32b838;
        case 0x32b83cu: goto label_32b83c;
        case 0x32b840u: goto label_32b840;
        case 0x32b844u: goto label_32b844;
        case 0x32b848u: goto label_32b848;
        case 0x32b84cu: goto label_32b84c;
        case 0x32b850u: goto label_32b850;
        case 0x32b854u: goto label_32b854;
        case 0x32b858u: goto label_32b858;
        case 0x32b85cu: goto label_32b85c;
        case 0x32b860u: goto label_32b860;
        case 0x32b864u: goto label_32b864;
        case 0x32b868u: goto label_32b868;
        case 0x32b86cu: goto label_32b86c;
        case 0x32b870u: goto label_32b870;
        case 0x32b874u: goto label_32b874;
        case 0x32b878u: goto label_32b878;
        case 0x32b87cu: goto label_32b87c;
        case 0x32b880u: goto label_32b880;
        case 0x32b884u: goto label_32b884;
        case 0x32b888u: goto label_32b888;
        case 0x32b88cu: goto label_32b88c;
        case 0x32b890u: goto label_32b890;
        case 0x32b894u: goto label_32b894;
        case 0x32b898u: goto label_32b898;
        case 0x32b89cu: goto label_32b89c;
        case 0x32b8a0u: goto label_32b8a0;
        case 0x32b8a4u: goto label_32b8a4;
        case 0x32b8a8u: goto label_32b8a8;
        case 0x32b8acu: goto label_32b8ac;
        case 0x32b8b0u: goto label_32b8b0;
        case 0x32b8b4u: goto label_32b8b4;
        case 0x32b8b8u: goto label_32b8b8;
        case 0x32b8bcu: goto label_32b8bc;
        case 0x32b8c0u: goto label_32b8c0;
        case 0x32b8c4u: goto label_32b8c4;
        case 0x32b8c8u: goto label_32b8c8;
        case 0x32b8ccu: goto label_32b8cc;
        case 0x32b8d0u: goto label_32b8d0;
        case 0x32b8d4u: goto label_32b8d4;
        case 0x32b8d8u: goto label_32b8d8;
        case 0x32b8dcu: goto label_32b8dc;
        case 0x32b8e0u: goto label_32b8e0;
        case 0x32b8e4u: goto label_32b8e4;
        case 0x32b8e8u: goto label_32b8e8;
        case 0x32b8ecu: goto label_32b8ec;
        case 0x32b8f0u: goto label_32b8f0;
        case 0x32b8f4u: goto label_32b8f4;
        case 0x32b8f8u: goto label_32b8f8;
        case 0x32b8fcu: goto label_32b8fc;
        case 0x32b900u: goto label_32b900;
        case 0x32b904u: goto label_32b904;
        case 0x32b908u: goto label_32b908;
        case 0x32b90cu: goto label_32b90c;
        case 0x32b910u: goto label_32b910;
        case 0x32b914u: goto label_32b914;
        case 0x32b918u: goto label_32b918;
        case 0x32b91cu: goto label_32b91c;
        case 0x32b920u: goto label_32b920;
        case 0x32b924u: goto label_32b924;
        case 0x32b928u: goto label_32b928;
        case 0x32b92cu: goto label_32b92c;
        case 0x32b930u: goto label_32b930;
        case 0x32b934u: goto label_32b934;
        case 0x32b938u: goto label_32b938;
        case 0x32b93cu: goto label_32b93c;
        case 0x32b940u: goto label_32b940;
        case 0x32b944u: goto label_32b944;
        case 0x32b948u: goto label_32b948;
        case 0x32b94cu: goto label_32b94c;
        case 0x32b950u: goto label_32b950;
        case 0x32b954u: goto label_32b954;
        case 0x32b958u: goto label_32b958;
        case 0x32b95cu: goto label_32b95c;
        case 0x32b960u: goto label_32b960;
        case 0x32b964u: goto label_32b964;
        case 0x32b968u: goto label_32b968;
        case 0x32b96cu: goto label_32b96c;
        case 0x32b970u: goto label_32b970;
        case 0x32b974u: goto label_32b974;
        case 0x32b978u: goto label_32b978;
        case 0x32b97cu: goto label_32b97c;
        case 0x32b980u: goto label_32b980;
        case 0x32b984u: goto label_32b984;
        case 0x32b988u: goto label_32b988;
        case 0x32b98cu: goto label_32b98c;
        case 0x32b990u: goto label_32b990;
        case 0x32b994u: goto label_32b994;
        case 0x32b998u: goto label_32b998;
        case 0x32b99cu: goto label_32b99c;
        case 0x32b9a0u: goto label_32b9a0;
        case 0x32b9a4u: goto label_32b9a4;
        case 0x32b9a8u: goto label_32b9a8;
        case 0x32b9acu: goto label_32b9ac;
        case 0x32b9b0u: goto label_32b9b0;
        case 0x32b9b4u: goto label_32b9b4;
        case 0x32b9b8u: goto label_32b9b8;
        case 0x32b9bcu: goto label_32b9bc;
        case 0x32b9c0u: goto label_32b9c0;
        case 0x32b9c4u: goto label_32b9c4;
        case 0x32b9c8u: goto label_32b9c8;
        case 0x32b9ccu: goto label_32b9cc;
        case 0x32b9d0u: goto label_32b9d0;
        case 0x32b9d4u: goto label_32b9d4;
        case 0x32b9d8u: goto label_32b9d8;
        case 0x32b9dcu: goto label_32b9dc;
        case 0x32b9e0u: goto label_32b9e0;
        case 0x32b9e4u: goto label_32b9e4;
        case 0x32b9e8u: goto label_32b9e8;
        case 0x32b9ecu: goto label_32b9ec;
        case 0x32b9f0u: goto label_32b9f0;
        case 0x32b9f4u: goto label_32b9f4;
        case 0x32b9f8u: goto label_32b9f8;
        case 0x32b9fcu: goto label_32b9fc;
        case 0x32ba00u: goto label_32ba00;
        case 0x32ba04u: goto label_32ba04;
        case 0x32ba08u: goto label_32ba08;
        case 0x32ba0cu: goto label_32ba0c;
        case 0x32ba10u: goto label_32ba10;
        case 0x32ba14u: goto label_32ba14;
        case 0x32ba18u: goto label_32ba18;
        case 0x32ba1cu: goto label_32ba1c;
        case 0x32ba20u: goto label_32ba20;
        case 0x32ba24u: goto label_32ba24;
        case 0x32ba28u: goto label_32ba28;
        case 0x32ba2cu: goto label_32ba2c;
        case 0x32ba30u: goto label_32ba30;
        case 0x32ba34u: goto label_32ba34;
        case 0x32ba38u: goto label_32ba38;
        case 0x32ba3cu: goto label_32ba3c;
        case 0x32ba40u: goto label_32ba40;
        case 0x32ba44u: goto label_32ba44;
        case 0x32ba48u: goto label_32ba48;
        case 0x32ba4cu: goto label_32ba4c;
        case 0x32ba50u: goto label_32ba50;
        case 0x32ba54u: goto label_32ba54;
        case 0x32ba58u: goto label_32ba58;
        case 0x32ba5cu: goto label_32ba5c;
        case 0x32ba60u: goto label_32ba60;
        case 0x32ba64u: goto label_32ba64;
        case 0x32ba68u: goto label_32ba68;
        case 0x32ba6cu: goto label_32ba6c;
        case 0x32ba70u: goto label_32ba70;
        case 0x32ba74u: goto label_32ba74;
        case 0x32ba78u: goto label_32ba78;
        case 0x32ba7cu: goto label_32ba7c;
        case 0x32ba80u: goto label_32ba80;
        case 0x32ba84u: goto label_32ba84;
        case 0x32ba88u: goto label_32ba88;
        case 0x32ba8cu: goto label_32ba8c;
        case 0x32ba90u: goto label_32ba90;
        case 0x32ba94u: goto label_32ba94;
        case 0x32ba98u: goto label_32ba98;
        case 0x32ba9cu: goto label_32ba9c;
        case 0x32baa0u: goto label_32baa0;
        case 0x32baa4u: goto label_32baa4;
        case 0x32baa8u: goto label_32baa8;
        case 0x32baacu: goto label_32baac;
        case 0x32bab0u: goto label_32bab0;
        case 0x32bab4u: goto label_32bab4;
        case 0x32bab8u: goto label_32bab8;
        case 0x32babcu: goto label_32babc;
        default: break;
    }

    ctx->pc = 0x32b340u;

label_32b340:
    // 0x32b340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32b344:
    // 0x32b344: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32b344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_32b348:
    // 0x32b348: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32b348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_32b34c:
    // 0x32b34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32b350:
    // 0x32b350: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32b350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_32b354:
    // 0x32b354: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32b354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32b358:
    // 0x32b358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32b35c:
    // 0x32b35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32b360:
    // 0x32b360: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32b364:
    // 0x32b364: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x32b364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b368:
    // 0x32b368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32b36c:
    // 0x32b36c: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x32b36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_32b370:
    // 0x32b370: 0x1040019f  beqz        $v0, . + 4 + (0x19F << 2)
label_32b374:
    if (ctx->pc == 0x32B374u) {
        ctx->pc = 0x32B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B370u;
        // 0x32b374: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B378u;
        goto label_32b378;
    }
    ctx->pc = 0x32B370u;
    {
        const bool branch_taken_0x32b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B370u;
        // 0x32b374: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b370) {
            ctx->pc = 0x32B9F0u;
            goto label_32b9f0;
        }
    }
    ctx->pc = 0x32B378u;
label_32b378:
    // 0x32b378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32b37c:
    // 0x32b37c: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x32b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
label_32b380:
    // 0x32b380: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32b380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32b384:
    // 0x32b384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32b388:
    // 0x32b388: 0x800008  jr          $a0
label_32b38c:
    if (ctx->pc == 0x32B38Cu) {
        ctx->pc = 0x32B390u;
        goto label_32b390;
    }
    ctx->pc = 0x32B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32B390u: goto label_32b390;
            case 0x32B3DCu: goto label_32b3dc;
            case 0x32B3ECu: goto label_32b3ec;
            case 0x32B408u: goto label_32b408;
            case 0x32B590u: goto label_32b590;
            case 0x32B5F4u: goto label_32b5f4;
            case 0x32B694u: goto label_32b694;
            case 0x32B73Cu: goto label_32b73c;
            case 0x32B7E4u: goto label_32b7e4;
            case 0x32B88Cu: goto label_32b88c;
            case 0x32B8A4u: goto label_32b8a4;
            case 0x32B9CCu: goto label_32b9cc;
            case 0x32B9E8u: goto label_32b9e8;
            case 0x32B9F0u: goto label_32b9f0;
            case 0x32BA6Cu: goto label_32ba6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B388u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32B390u;
label_32b390:
    // 0x32b390: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b394:
    // 0x32b394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b398:
    // 0x32b398: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b39c:
    // 0x32b39c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b3a0:
    // 0x32b3a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b3a4:
    if (ctx->pc == 0x32B3A4u) {
        ctx->pc = 0x32B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3A0u;
        // 0x32b3a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3A8u;
        goto label_32b3a8;
    }
    ctx->pc = 0x32B3A0u;
    {
        const bool branch_taken_0x32b3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3A0u;
        // 0x32b3a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3a0) {
            ctx->pc = 0x32B3C0u;
            goto label_32b3c0;
        }
    }
    ctx->pc = 0x32B3A8u;
label_32b3a8:
    // 0x32b3a8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b3ac:
    // 0x32b3ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b3b0:
    // 0x32b3b0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b3b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b3b4:
    // 0x32b3b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b3b8:
    // 0x32b3b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b3bc:
    if (ctx->pc == 0x32B3BCu) {
        ctx->pc = 0x32B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3B8u;
        // 0x32b3bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3C0u;
        goto label_32b3c0;
    }
    ctx->pc = 0x32B3B8u;
    {
        const bool branch_taken_0x32b3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3B8u;
        // 0x32b3bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3b8) {
            ctx->pc = 0x32B3D4u;
            goto label_32b3d4;
        }
    }
    ctx->pc = 0x32B3C0u;
label_32b3c0:
    // 0x32b3c0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b3c4:
    // 0x32b3c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b3c8:
    // 0x32b3c8: 0x40f809  jalr        $v0
label_32b3cc:
    if (ctx->pc == 0x32B3CCu) {
        ctx->pc = 0x32B3D0u;
        goto label_32b3d0;
    }
    ctx->pc = 0x32B3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B3D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B3C8u, 0x32B3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B3D0u;
label_32b3d0:
    // 0x32b3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b3d4:
    // 0x32b3d4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_32b3d8:
    if (ctx->pc == 0x32B3D8u) {
        ctx->pc = 0x32B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3D4u;
        // 0x32b3d8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3DCu;
        goto label_32b3dc;
    }
    ctx->pc = 0x32B3D4u;
    {
        const bool branch_taken_0x32b3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3D4u;
        // 0x32b3d8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3d4) {
            ctx->pc = 0x32B360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b360;
        }
    }
    ctx->pc = 0x32B3DCu;
label_32b3dc:
    // 0x32b3dc: 0xc0ca8fa  jal         func_32A3E8
label_32b3e0:
    if (ctx->pc == 0x32B3E0u) {
        ctx->pc = 0x32B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3DCu;
        // 0x32b3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3E4u;
        goto label_32b3e4;
    }
    ctx->pc = 0x32B3DCu;
    SET_GPR_U32(ctx, 31, 0x32B3E4u);
    ctx->pc = 0x32B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3DCu;
    // 0x32b3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A3E8u, 0x32B3DCu, 0x32B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3E4u;
label_32b3e4:
    // 0x32b3e4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_32b3e8:
    if (ctx->pc == 0x32B3E8u) {
        ctx->pc = 0x32B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3E4u;
        // 0x32b3e8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3ECu;
        goto label_32b3ec;
    }
    ctx->pc = 0x32B3E4u;
    {
        const bool branch_taken_0x32b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3E4u;
        // 0x32b3e8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3e4) {
            ctx->pc = 0x32B364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b364;
        }
    }
    ctx->pc = 0x32B3ECu;
label_32b3ec:
    // 0x32b3ec: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_32b3f0:
    // 0x32b3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b3f4:
    // 0x32b3f4: 0x24a55558  addiu       $a1, $a1, 0x5558
    ctx->pc = 0x32b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21848));
label_32b3f8:
    // 0x32b3f8: 0xc0ca8bc  jal         func_32A2F0
label_32b3fc:
    if (ctx->pc == 0x32B3FCu) {
        ctx->pc = 0x32B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3F8u;
        // 0x32b3fc: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B400u;
        goto label_32b400;
    }
    ctx->pc = 0x32B3F8u;
    SET_GPR_U32(ctx, 31, 0x32B400u);
    ctx->pc = 0x32B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3F8u;
    // 0x32b3fc: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32B3F8u, 0x32B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B400u;
label_32b400:
    // 0x32b400: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
label_32b404:
    if (ctx->pc == 0x32B404u) {
        ctx->pc = 0x32B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B400u;
        // 0x32b404: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B408u;
        goto label_32b408;
    }
    ctx->pc = 0x32B400u;
    {
        const bool branch_taken_0x32b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B400u;
        // 0x32b404: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b400) {
            ctx->pc = 0x32B364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b364;
        }
    }
    ctx->pc = 0x32B408u;
label_32b408:
    // 0x32b408: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b40c:
    // 0x32b40c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b410:
    // 0x32b410: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b414:
    // 0x32b414: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b418:
    // 0x32b418: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b41c:
    if (ctx->pc == 0x32B41Cu) {
        ctx->pc = 0x32B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B418u;
        // 0x32b41c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B420u;
        goto label_32b420;
    }
    ctx->pc = 0x32B418u;
    {
        const bool branch_taken_0x32b418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B418u;
        // 0x32b41c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b418) {
            ctx->pc = 0x32B438u;
            goto label_32b438;
        }
    }
    ctx->pc = 0x32B420u;
label_32b420:
    // 0x32b420: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b424:
    // 0x32b424: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b428:
    // 0x32b428: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b428u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b42c:
    // 0x32b42c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b430:
    // 0x32b430: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b434:
    if (ctx->pc == 0x32B434u) {
        ctx->pc = 0x32B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B430u;
        // 0x32b434: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B438u;
        goto label_32b438;
    }
    ctx->pc = 0x32B430u;
    {
        const bool branch_taken_0x32b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B430u;
        // 0x32b434: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b430) {
            ctx->pc = 0x32B44Cu;
            goto label_32b44c;
        }
    }
    ctx->pc = 0x32B438u;
label_32b438:
    // 0x32b438: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b43c:
    // 0x32b43c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b440:
    // 0x32b440: 0x40f809  jalr        $v0
label_32b444:
    if (ctx->pc == 0x32B444u) {
        ctx->pc = 0x32B448u;
        goto label_32b448;
    }
    ctx->pc = 0x32B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B448u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B440u, 0x32B448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B448u;
label_32b448:
    // 0x32b448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b44c:
    // 0x32b44c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x32b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_32b450:
    // 0x32b450: 0x14820193  bne         $a0, $v0, . + 4 + (0x193 << 2)
label_32b454:
    if (ctx->pc == 0x32B454u) {
        ctx->pc = 0x32B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B450u;
        // 0x32b454: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B458u;
        goto label_32b458;
    }
    ctx->pc = 0x32B450u;
    {
        const bool branch_taken_0x32b450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B450u;
        // 0x32b454: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b450) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B458u;
label_32b458:
    // 0x32b458: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b45c:
    // 0x32b45c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b460:
    // 0x32b460: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b464:
    // 0x32b464: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b468:
    // 0x32b468: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b46c:
    if (ctx->pc == 0x32B46Cu) {
        ctx->pc = 0x32B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B468u;
        // 0x32b46c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B470u;
        goto label_32b470;
    }
    ctx->pc = 0x32B468u;
    {
        const bool branch_taken_0x32b468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B468u;
        // 0x32b46c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b468) {
            ctx->pc = 0x32B488u;
            goto label_32b488;
        }
    }
    ctx->pc = 0x32B470u;
label_32b470:
    // 0x32b470: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b474:
    // 0x32b474: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b478:
    // 0x32b478: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b47c:
    // 0x32b47c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b480:
    // 0x32b480: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b484:
    if (ctx->pc == 0x32B484u) {
        ctx->pc = 0x32B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B480u;
        // 0x32b484: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B488u;
        goto label_32b488;
    }
    ctx->pc = 0x32B480u;
    {
        const bool branch_taken_0x32b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B480u;
        // 0x32b484: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b480) {
            ctx->pc = 0x32B49Cu;
            goto label_32b49c;
        }
    }
    ctx->pc = 0x32B488u;
label_32b488:
    // 0x32b488: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b48c:
    // 0x32b48c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b490:
    // 0x32b490: 0x40f809  jalr        $v0
label_32b494:
    if (ctx->pc == 0x32B494u) {
        ctx->pc = 0x32B498u;
        goto label_32b498;
    }
    ctx->pc = 0x32B490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B490u, 0x32B498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B498u;
label_32b498:
    // 0x32b498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b49c:
    // 0x32b49c: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_32b4a0:
    // 0x32b4a0: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
label_32b4a4:
    if (ctx->pc == 0x32B4A4u) {
        ctx->pc = 0x32B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4A0u;
        // 0x32b4a4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4A8u;
        goto label_32b4a8;
    }
    ctx->pc = 0x32B4A0u;
    {
        const bool branch_taken_0x32b4a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4A0u;
        // 0x32b4a4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4a0) {
            ctx->pc = 0x32B50Cu;
            goto label_32b50c;
        }
    }
    ctx->pc = 0x32B4A8u;
label_32b4a8:
    // 0x32b4a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b4ac:
    // 0x32b4ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b4b0:
    // 0x32b4b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b4b4:
    // 0x32b4b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b4b8:
    // 0x32b4b8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b4bc:
    if (ctx->pc == 0x32B4BCu) {
        ctx->pc = 0x32B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4B8u;
        // 0x32b4bc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4C0u;
        goto label_32b4c0;
    }
    ctx->pc = 0x32B4B8u;
    {
        const bool branch_taken_0x32b4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4B8u;
        // 0x32b4bc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4b8) {
            ctx->pc = 0x32B4D8u;
            goto label_32b4d8;
        }
    }
    ctx->pc = 0x32B4C0u;
label_32b4c0:
    // 0x32b4c0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b4c4:
    // 0x32b4c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b4c8:
    // 0x32b4c8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b4c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b4cc:
    // 0x32b4cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b4d0:
    // 0x32b4d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b4d4:
    if (ctx->pc == 0x32B4D4u) {
        ctx->pc = 0x32B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4D0u;
        // 0x32b4d4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4D8u;
        goto label_32b4d8;
    }
    ctx->pc = 0x32B4D0u;
    {
        const bool branch_taken_0x32b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4D0u;
        // 0x32b4d4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4d0) {
            ctx->pc = 0x32B4ECu;
            goto label_32b4ec;
        }
    }
    ctx->pc = 0x32B4D8u;
label_32b4d8:
    // 0x32b4d8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b4dc:
    // 0x32b4dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b4e0:
    // 0x32b4e0: 0x40f809  jalr        $v0
label_32b4e4:
    if (ctx->pc == 0x32B4E4u) {
        ctx->pc = 0x32B4E8u;
        goto label_32b4e8;
    }
    ctx->pc = 0x32B4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B4E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B4E0u, 0x32B4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B4E8u;
label_32b4e8:
    // 0x32b4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b4ec:
    // 0x32b4ec: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_32b4f0:
    // 0x32b4f0: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_32b4f4:
    if (ctx->pc == 0x32B4F4u) {
        ctx->pc = 0x32B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4F0u;
        // 0x32b4f4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4F8u;
        goto label_32b4f8;
    }
    ctx->pc = 0x32B4F0u;
    {
        const bool branch_taken_0x32b4f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4F0u;
        // 0x32b4f4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4f0) {
            ctx->pc = 0x32B50Cu;
            goto label_32b50c;
        }
    }
    ctx->pc = 0x32B4F8u;
label_32b4f8:
    // 0x32b4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b4fc:
    // 0x32b4fc: 0xc0caaca  jal         func_32AB28
label_32b500:
    if (ctx->pc == 0x32B500u) {
        ctx->pc = 0x32B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4FCu;
        // 0x32b500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B504u;
        goto label_32b504;
    }
    ctx->pc = 0x32B4FCu;
    SET_GPR_U32(ctx, 31, 0x32B504u);
    ctx->pc = 0x32B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4FCu;
    // 0x32b500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AB28u, 0x32B4FCu, 0x32B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B504u;
label_32b504:
    // 0x32b504: 0x1000ff97  b           . + 4 + (-0x69 << 2)
label_32b508:
    if (ctx->pc == 0x32B508u) {
        ctx->pc = 0x32B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B504u;
        // 0x32b508: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B50Cu;
        goto label_32b50c;
    }
    ctx->pc = 0x32B504u;
    {
        const bool branch_taken_0x32b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B504u;
        // 0x32b508: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b504) {
            ctx->pc = 0x32B364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b364;
        }
    }
    ctx->pc = 0x32B50Cu;
label_32b50c:
    // 0x32b50c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32b510:
    // 0x32b510: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x32b510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_32b514:
    // 0x32b514: 0x1062ff94  beq         $v1, $v0, . + 4 + (-0x6C << 2)
label_32b518:
    if (ctx->pc == 0x32B518u) {
        ctx->pc = 0x32B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B514u;
        // 0x32b518: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B51Cu;
        goto label_32b51c;
    }
    ctx->pc = 0x32B514u;
    {
        const bool branch_taken_0x32b514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B514u;
        // 0x32b518: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b514) {
            ctx->pc = 0x32B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b368;
        }
    }
    ctx->pc = 0x32B51Cu;
label_32b51c:
    // 0x32b51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32b520:
    // 0x32b520: 0x1062ff92  beq         $v1, $v0, . + 4 + (-0x6E << 2)
label_32b524:
    if (ctx->pc == 0x32B524u) {
        ctx->pc = 0x32B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B520u;
        // 0x32b524: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B528u;
        goto label_32b528;
    }
    ctx->pc = 0x32B520u;
    {
        const bool branch_taken_0x32b520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B520u;
        // 0x32b524: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b520) {
            ctx->pc = 0x32B36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b36c;
        }
    }
    ctx->pc = 0x32B528u;
label_32b528:
    // 0x32b528: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x32b528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_32b52c:
    // 0x32b52c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x32b52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32b530:
    // 0x32b530: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b534:
    // 0x32b534: 0x0  nop
    ctx->pc = 0x32b534u;
    // NOP
label_32b538:
    // 0x32b538: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b53c:
    // 0x32b53c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b540:
    // 0x32b540: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b544:
    // 0x32b544: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b548:
    if (ctx->pc == 0x32B548u) {
        ctx->pc = 0x32B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B544u;
        // 0x32b548: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B54Cu;
        goto label_32b54c;
    }
    ctx->pc = 0x32B544u;
    {
        const bool branch_taken_0x32b544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B544u;
        // 0x32b548: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b544) {
            ctx->pc = 0x32B564u;
            goto label_32b564;
        }
    }
    ctx->pc = 0x32B54Cu;
label_32b54c:
    // 0x32b54c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b550:
    // 0x32b550: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b554:
    // 0x32b554: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b558:
    // 0x32b558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b55c:
    // 0x32b55c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b560:
    if (ctx->pc == 0x32B560u) {
        ctx->pc = 0x32B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B55Cu;
        // 0x32b560: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B564u;
        goto label_32b564;
    }
    ctx->pc = 0x32B55Cu;
    {
        const bool branch_taken_0x32b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B55Cu;
        // 0x32b560: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b55c) {
            ctx->pc = 0x32B578u;
            goto label_32b578;
        }
    }
    ctx->pc = 0x32B564u;
label_32b564:
    // 0x32b564: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b568:
    // 0x32b568: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b56c:
    // 0x32b56c: 0x40f809  jalr        $v0
label_32b570:
    if (ctx->pc == 0x32B570u) {
        ctx->pc = 0x32B574u;
        goto label_32b574;
    }
    ctx->pc = 0x32B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B574u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B56Cu, 0x32B574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B574u;
label_32b574:
    // 0x32b574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b578:
    // 0x32b578: 0x1092ff79  beq         $a0, $s2, . + 4 + (-0x87 << 2)
label_32b57c:
    if (ctx->pc == 0x32B57Cu) {
        ctx->pc = 0x32B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B578u;
        // 0x32b57c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B580u;
        goto label_32b580;
    }
    ctx->pc = 0x32B578u;
    {
        const bool branch_taken_0x32b578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x32B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B578u;
        // 0x32b57c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b578) {
            ctx->pc = 0x32B360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b360;
        }
    }
    ctx->pc = 0x32B580u;
label_32b580:
    // 0x32b580: 0x5491ffed  bnel        $a0, $s1, . + 4 + (-0x13 << 2)
label_32b584:
    if (ctx->pc == 0x32B584u) {
        ctx->pc = 0x32B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B580u;
        // 0x32b584: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B588u;
        goto label_32b588;
    }
    ctx->pc = 0x32B580u;
    {
        const bool branch_taken_0x32b580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x32b580) {
            ctx->pc = 0x32B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B580u;
            // 0x32b584: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b538;
        }
    }
    ctx->pc = 0x32B588u;
label_32b588:
    // 0x32b588: 0x1000ff76  b           . + 4 + (-0x8A << 2)
label_32b58c:
    if (ctx->pc == 0x32B58Cu) {
        ctx->pc = 0x32B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B588u;
        // 0x32b58c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B590u;
        goto label_32b590;
    }
    ctx->pc = 0x32B588u;
    {
        const bool branch_taken_0x32b588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B588u;
        // 0x32b58c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b588) {
            ctx->pc = 0x32B364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b364;
        }
    }
    ctx->pc = 0x32B590u;
label_32b590:
    // 0x32b590: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b594:
    // 0x32b594: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b598:
    // 0x32b598: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b59c:
    // 0x32b59c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b5a0:
    // 0x32b5a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b5a4:
    if (ctx->pc == 0x32B5A4u) {
        ctx->pc = 0x32B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5A0u;
        // 0x32b5a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5A8u;
        goto label_32b5a8;
    }
    ctx->pc = 0x32B5A0u;
    {
        const bool branch_taken_0x32b5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5A0u;
        // 0x32b5a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5a0) {
            ctx->pc = 0x32B5C0u;
            goto label_32b5c0;
        }
    }
    ctx->pc = 0x32B5A8u;
label_32b5a8:
    // 0x32b5a8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b5ac:
    // 0x32b5ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b5b0:
    // 0x32b5b0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b5b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b5b4:
    // 0x32b5b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b5b8:
    // 0x32b5b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b5bc:
    if (ctx->pc == 0x32B5BCu) {
        ctx->pc = 0x32B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5B8u;
        // 0x32b5bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5C0u;
        goto label_32b5c0;
    }
    ctx->pc = 0x32B5B8u;
    {
        const bool branch_taken_0x32b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5B8u;
        // 0x32b5bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5b8) {
            ctx->pc = 0x32B5D4u;
            goto label_32b5d4;
        }
    }
    ctx->pc = 0x32B5C0u;
label_32b5c0:
    // 0x32b5c0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b5c4:
    // 0x32b5c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b5c8:
    // 0x32b5c8: 0x40f809  jalr        $v0
label_32b5cc:
    if (ctx->pc == 0x32B5CCu) {
        ctx->pc = 0x32B5D0u;
        goto label_32b5d0;
    }
    ctx->pc = 0x32B5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B5D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B5C8u, 0x32B5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B5D0u;
label_32b5d0:
    // 0x32b5d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b5d4:
    // 0x32b5d4: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_32b5d8:
    // 0x32b5d8: 0x14820131  bne         $a0, $v0, . + 4 + (0x131 << 2)
label_32b5dc:
    if (ctx->pc == 0x32B5DCu) {
        ctx->pc = 0x32B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5D8u;
        // 0x32b5dc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5E0u;
        goto label_32b5e0;
    }
    ctx->pc = 0x32B5D8u;
    {
        const bool branch_taken_0x32b5d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5D8u;
        // 0x32b5dc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5d8) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B5E0u;
label_32b5e0:
    // 0x32b5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b5e4:
    // 0x32b5e4: 0xc0caaca  jal         func_32AB28
label_32b5e8:
    if (ctx->pc == 0x32B5E8u) {
        ctx->pc = 0x32B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5E4u;
        // 0x32b5e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5ECu;
        goto label_32b5ec;
    }
    ctx->pc = 0x32B5E4u;
    SET_GPR_U32(ctx, 31, 0x32B5ECu);
    ctx->pc = 0x32B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5E4u;
    // 0x32b5e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AB28u, 0x32B5E4u, 0x32B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5ECu;
label_32b5ec:
    // 0x32b5ec: 0x1000012c  b           . + 4 + (0x12C << 2)
label_32b5f0:
    if (ctx->pc == 0x32B5F0u) {
        ctx->pc = 0x32B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5ECu;
        // 0x32b5f0: 0x2402011b  addiu       $v0, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5F4u;
        goto label_32b5f4;
    }
    ctx->pc = 0x32B5ECu;
    {
        const bool branch_taken_0x32b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5ECu;
        // 0x32b5f0: 0x2402011b  addiu       $v0, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5ec) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B5F4u;
label_32b5f4:
    // 0x32b5f4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b5f8:
    // 0x32b5f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b5fc:
    // 0x32b5fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b600:
    // 0x32b600: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b604:
    // 0x32b604: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b608:
    if (ctx->pc == 0x32B608u) {
        ctx->pc = 0x32B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B604u;
        // 0x32b608: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B60Cu;
        goto label_32b60c;
    }
    ctx->pc = 0x32B604u;
    {
        const bool branch_taken_0x32b604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B604u;
        // 0x32b608: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b604) {
            ctx->pc = 0x32B624u;
            goto label_32b624;
        }
    }
    ctx->pc = 0x32B60Cu;
label_32b60c:
    // 0x32b60c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b610:
    // 0x32b610: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b614:
    // 0x32b614: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b618:
    // 0x32b618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b61c:
    // 0x32b61c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b620:
    if (ctx->pc == 0x32B620u) {
        ctx->pc = 0x32B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B61Cu;
        // 0x32b620: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B624u;
        goto label_32b624;
    }
    ctx->pc = 0x32B61Cu;
    {
        const bool branch_taken_0x32b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B61Cu;
        // 0x32b620: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b61c) {
            ctx->pc = 0x32B638u;
            goto label_32b638;
        }
    }
    ctx->pc = 0x32B624u;
label_32b624:
    // 0x32b624: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b628:
    // 0x32b628: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b62c:
    // 0x32b62c: 0x40f809  jalr        $v0
label_32b630:
    if (ctx->pc == 0x32B630u) {
        ctx->pc = 0x32B634u;
        goto label_32b634;
    }
    ctx->pc = 0x32B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B62Cu, 0x32B634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B634u;
label_32b634:
    // 0x32b634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b638:
    // 0x32b638: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x32b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32b63c:
    // 0x32b63c: 0x14820118  bne         $a0, $v0, . + 4 + (0x118 << 2)
label_32b640:
    if (ctx->pc == 0x32B640u) {
        ctx->pc = 0x32B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B63Cu;
        // 0x32b640: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B644u;
        goto label_32b644;
    }
    ctx->pc = 0x32B63Cu;
    {
        const bool branch_taken_0x32b63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B63Cu;
        // 0x32b640: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b63c) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B644u;
label_32b644:
    // 0x32b644: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b648:
    // 0x32b648: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b64c:
    // 0x32b64c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b650:
    // 0x32b650: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b654:
    // 0x32b654: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b658:
    if (ctx->pc == 0x32B658u) {
        ctx->pc = 0x32B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B654u;
        // 0x32b658: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B65Cu;
        goto label_32b65c;
    }
    ctx->pc = 0x32B654u;
    {
        const bool branch_taken_0x32b654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B654u;
        // 0x32b658: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b654) {
            ctx->pc = 0x32B674u;
            goto label_32b674;
        }
    }
    ctx->pc = 0x32B65Cu;
label_32b65c:
    // 0x32b65c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b660:
    // 0x32b660: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b664:
    // 0x32b664: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b664u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b668:
    // 0x32b668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b66c:
    // 0x32b66c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b670:
    if (ctx->pc == 0x32B670u) {
        ctx->pc = 0x32B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B66Cu;
        // 0x32b670: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B674u;
        goto label_32b674;
    }
    ctx->pc = 0x32B66Cu;
    {
        const bool branch_taken_0x32b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B66Cu;
        // 0x32b670: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b66c) {
            ctx->pc = 0x32B688u;
            goto label_32b688;
        }
    }
    ctx->pc = 0x32B674u;
label_32b674:
    // 0x32b674: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b678:
    // 0x32b678: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b67c:
    // 0x32b67c: 0x40f809  jalr        $v0
label_32b680:
    if (ctx->pc == 0x32B680u) {
        ctx->pc = 0x32B684u;
        goto label_32b684;
    }
    ctx->pc = 0x32B67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B684u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B67Cu, 0x32B684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B684u;
label_32b684:
    // 0x32b684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b688:
    // 0x32b688: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32b688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32b68c:
    // 0x32b68c: 0x10000104  b           . + 4 + (0x104 << 2)
label_32b690:
    if (ctx->pc == 0x32B690u) {
        ctx->pc = 0x32B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B68Cu;
        // 0x32b690: 0x24020116  addiu       $v0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B694u;
        goto label_32b694;
    }
    ctx->pc = 0x32B68Cu;
    {
        const bool branch_taken_0x32b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B68Cu;
        // 0x32b690: 0x24020116  addiu       $v0, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b68c) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B694u;
label_32b694:
    // 0x32b694: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b698:
    // 0x32b698: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b69c:
    // 0x32b69c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b6a0:
    // 0x32b6a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b6a4:
    // 0x32b6a4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b6a8:
    if (ctx->pc == 0x32B6A8u) {
        ctx->pc = 0x32B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6A4u;
        // 0x32b6a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6ACu;
        goto label_32b6ac;
    }
    ctx->pc = 0x32B6A4u;
    {
        const bool branch_taken_0x32b6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6A4u;
        // 0x32b6a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6a4) {
            ctx->pc = 0x32B6C4u;
            goto label_32b6c4;
        }
    }
    ctx->pc = 0x32B6ACu;
label_32b6ac:
    // 0x32b6ac: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b6b0:
    // 0x32b6b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b6b4:
    // 0x32b6b4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b6b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b6b8:
    // 0x32b6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b6bc:
    // 0x32b6bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b6c0:
    if (ctx->pc == 0x32B6C0u) {
        ctx->pc = 0x32B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6BCu;
        // 0x32b6c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6C4u;
        goto label_32b6c4;
    }
    ctx->pc = 0x32B6BCu;
    {
        const bool branch_taken_0x32b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6BCu;
        // 0x32b6c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6bc) {
            ctx->pc = 0x32B6D8u;
            goto label_32b6d8;
        }
    }
    ctx->pc = 0x32B6C4u;
label_32b6c4:
    // 0x32b6c4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b6c8:
    // 0x32b6c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b6cc:
    // 0x32b6cc: 0x40f809  jalr        $v0
label_32b6d0:
    if (ctx->pc == 0x32B6D0u) {
        ctx->pc = 0x32B6D4u;
        goto label_32b6d4;
    }
    ctx->pc = 0x32B6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B6D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B6CCu, 0x32B6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B6D4u;
label_32b6d4:
    // 0x32b6d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b6d8:
    // 0x32b6d8: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x32b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32b6dc:
    // 0x32b6dc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_32b6e0:
    if (ctx->pc == 0x32B6E0u) {
        ctx->pc = 0x32B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6DCu;
        // 0x32b6e0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6E4u;
        goto label_32b6e4;
    }
    ctx->pc = 0x32B6DCu;
    {
        const bool branch_taken_0x32b6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6DCu;
        // 0x32b6e0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6dc) {
            ctx->pc = 0x32B6ECu;
            goto label_32b6ec;
        }
    }
    ctx->pc = 0x32B6E4u;
label_32b6e4:
    // 0x32b6e4: 0x100000ee  b           . + 4 + (0xEE << 2)
label_32b6e8:
    if (ctx->pc == 0x32B6E8u) {
        ctx->pc = 0x32B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6E4u;
        // 0x32b6e8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6ECu;
        goto label_32b6ec;
    }
    ctx->pc = 0x32B6E4u;
    {
        const bool branch_taken_0x32b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6E4u;
        // 0x32b6e8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6e4) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B6ECu;
label_32b6ec:
    // 0x32b6ec: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b6f0:
    // 0x32b6f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b6f4:
    // 0x32b6f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b6f8:
    // 0x32b6f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b6fc:
    // 0x32b6fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b700:
    if (ctx->pc == 0x32B700u) {
        ctx->pc = 0x32B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6FCu;
        // 0x32b700: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B704u;
        goto label_32b704;
    }
    ctx->pc = 0x32B6FCu;
    {
        const bool branch_taken_0x32b6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6FCu;
        // 0x32b700: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6fc) {
            ctx->pc = 0x32B71Cu;
            goto label_32b71c;
        }
    }
    ctx->pc = 0x32B704u;
label_32b704:
    // 0x32b704: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b708:
    // 0x32b708: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b70c:
    // 0x32b70c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b70cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b710:
    // 0x32b710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b714:
    // 0x32b714: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b718:
    if (ctx->pc == 0x32B718u) {
        ctx->pc = 0x32B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B714u;
        // 0x32b718: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B71Cu;
        goto label_32b71c;
    }
    ctx->pc = 0x32B714u;
    {
        const bool branch_taken_0x32b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B714u;
        // 0x32b718: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b714) {
            ctx->pc = 0x32B730u;
            goto label_32b730;
        }
    }
    ctx->pc = 0x32B71Cu;
label_32b71c:
    // 0x32b71c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b720:
    // 0x32b720: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b724:
    // 0x32b724: 0x40f809  jalr        $v0
label_32b728:
    if (ctx->pc == 0x32B728u) {
        ctx->pc = 0x32B72Cu;
        goto label_32b72c;
    }
    ctx->pc = 0x32B724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B72Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B724u, 0x32B72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B72Cu;
label_32b72c:
    // 0x32b72c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b730:
    // 0x32b730: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32b730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32b734:
    // 0x32b734: 0x100000da  b           . + 4 + (0xDA << 2)
label_32b738:
    if (ctx->pc == 0x32B738u) {
        ctx->pc = 0x32B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B734u;
        // 0x32b738: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B73Cu;
        goto label_32b73c;
    }
    ctx->pc = 0x32B734u;
    {
        const bool branch_taken_0x32b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B734u;
        // 0x32b738: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b734) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B73Cu;
label_32b73c:
    // 0x32b73c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b740:
    // 0x32b740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b744:
    // 0x32b744: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b748:
    // 0x32b748: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b74c:
    // 0x32b74c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b750:
    if (ctx->pc == 0x32B750u) {
        ctx->pc = 0x32B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B74Cu;
        // 0x32b750: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B754u;
        goto label_32b754;
    }
    ctx->pc = 0x32B74Cu;
    {
        const bool branch_taken_0x32b74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B74Cu;
        // 0x32b750: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b74c) {
            ctx->pc = 0x32B76Cu;
            goto label_32b76c;
        }
    }
    ctx->pc = 0x32B754u;
label_32b754:
    // 0x32b754: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b758:
    // 0x32b758: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b75c:
    // 0x32b75c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b75cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b760:
    // 0x32b760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b764:
    // 0x32b764: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b768:
    if (ctx->pc == 0x32B768u) {
        ctx->pc = 0x32B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B764u;
        // 0x32b768: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B76Cu;
        goto label_32b76c;
    }
    ctx->pc = 0x32B764u;
    {
        const bool branch_taken_0x32b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B764u;
        // 0x32b768: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b764) {
            ctx->pc = 0x32B780u;
            goto label_32b780;
        }
    }
    ctx->pc = 0x32B76Cu;
label_32b76c:
    // 0x32b76c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b770:
    // 0x32b770: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b774:
    // 0x32b774: 0x40f809  jalr        $v0
label_32b778:
    if (ctx->pc == 0x32B778u) {
        ctx->pc = 0x32B77Cu;
        goto label_32b77c;
    }
    ctx->pc = 0x32B774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B77Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B774u, 0x32B77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B77Cu;
label_32b77c:
    // 0x32b77c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b780:
    // 0x32b780: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x32b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32b784:
    // 0x32b784: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_32b788:
    if (ctx->pc == 0x32B788u) {
        ctx->pc = 0x32B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B784u;
        // 0x32b788: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B78Cu;
        goto label_32b78c;
    }
    ctx->pc = 0x32B784u;
    {
        const bool branch_taken_0x32b784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B784u;
        // 0x32b788: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b784) {
            ctx->pc = 0x32B794u;
            goto label_32b794;
        }
    }
    ctx->pc = 0x32B78Cu;
label_32b78c:
    // 0x32b78c: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_32b790:
    if (ctx->pc == 0x32B790u) {
        ctx->pc = 0x32B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B78Cu;
        // 0x32b790: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B794u;
        goto label_32b794;
    }
    ctx->pc = 0x32B78Cu;
    {
        const bool branch_taken_0x32b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B78Cu;
        // 0x32b790: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b78c) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B794u;
label_32b794:
    // 0x32b794: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b798:
    // 0x32b798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b79c:
    // 0x32b79c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b7a0:
    // 0x32b7a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b7a4:
    // 0x32b7a4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b7a8:
    if (ctx->pc == 0x32B7A8u) {
        ctx->pc = 0x32B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7A4u;
        // 0x32b7a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7ACu;
        goto label_32b7ac;
    }
    ctx->pc = 0x32B7A4u;
    {
        const bool branch_taken_0x32b7a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7A4u;
        // 0x32b7a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7a4) {
            ctx->pc = 0x32B7C4u;
            goto label_32b7c4;
        }
    }
    ctx->pc = 0x32B7ACu;
label_32b7ac:
    // 0x32b7ac: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b7b0:
    // 0x32b7b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b7b4:
    // 0x32b7b4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b7b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b7b8:
    // 0x32b7b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b7bc:
    // 0x32b7bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b7c0:
    if (ctx->pc == 0x32B7C0u) {
        ctx->pc = 0x32B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7BCu;
        // 0x32b7c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7C4u;
        goto label_32b7c4;
    }
    ctx->pc = 0x32B7BCu;
    {
        const bool branch_taken_0x32b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7BCu;
        // 0x32b7c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7bc) {
            ctx->pc = 0x32B7D8u;
            goto label_32b7d8;
        }
    }
    ctx->pc = 0x32B7C4u;
label_32b7c4:
    // 0x32b7c4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b7c8:
    // 0x32b7c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b7cc:
    // 0x32b7cc: 0x40f809  jalr        $v0
label_32b7d0:
    if (ctx->pc == 0x32B7D0u) {
        ctx->pc = 0x32B7D4u;
        goto label_32b7d4;
    }
    ctx->pc = 0x32B7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B7D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B7CCu, 0x32B7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B7D4u;
label_32b7d4:
    // 0x32b7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b7d8:
    // 0x32b7d8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32b7dc:
    // 0x32b7dc: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_32b7e0:
    if (ctx->pc == 0x32B7E0u) {
        ctx->pc = 0x32B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7DCu;
        // 0x32b7e0: 0x24020117  addiu       $v0, $zero, 0x117 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7E4u;
        goto label_32b7e4;
    }
    ctx->pc = 0x32B7DCu;
    {
        const bool branch_taken_0x32b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7DCu;
        // 0x32b7e0: 0x24020117  addiu       $v0, $zero, 0x117 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7dc) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B7E4u;
label_32b7e4:
    // 0x32b7e4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b7e8:
    // 0x32b7e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b7ec:
    // 0x32b7ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b7f0:
    // 0x32b7f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b7f4:
    // 0x32b7f4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b7f8:
    if (ctx->pc == 0x32B7F8u) {
        ctx->pc = 0x32B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7F4u;
        // 0x32b7f8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7FCu;
        goto label_32b7fc;
    }
    ctx->pc = 0x32B7F4u;
    {
        const bool branch_taken_0x32b7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7F4u;
        // 0x32b7f8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7f4) {
            ctx->pc = 0x32B814u;
            goto label_32b814;
        }
    }
    ctx->pc = 0x32B7FCu;
label_32b7fc:
    // 0x32b7fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b800:
    // 0x32b800: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b804:
    // 0x32b804: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b804u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b808:
    // 0x32b808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b80c:
    // 0x32b80c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b810:
    if (ctx->pc == 0x32B810u) {
        ctx->pc = 0x32B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B80Cu;
        // 0x32b810: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B814u;
        goto label_32b814;
    }
    ctx->pc = 0x32B80Cu;
    {
        const bool branch_taken_0x32b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B80Cu;
        // 0x32b810: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b80c) {
            ctx->pc = 0x32B828u;
            goto label_32b828;
        }
    }
    ctx->pc = 0x32B814u;
label_32b814:
    // 0x32b814: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b818:
    // 0x32b818: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b81c:
    // 0x32b81c: 0x40f809  jalr        $v0
label_32b820:
    if (ctx->pc == 0x32B820u) {
        ctx->pc = 0x32B824u;
        goto label_32b824;
    }
    ctx->pc = 0x32B81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B824u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B81Cu, 0x32B824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B824u;
label_32b824:
    // 0x32b824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b828:
    // 0x32b828: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x32b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_32b82c:
    // 0x32b82c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_32b830:
    if (ctx->pc == 0x32B830u) {
        ctx->pc = 0x32B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B82Cu;
        // 0x32b830: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B834u;
        goto label_32b834;
    }
    ctx->pc = 0x32B82Cu;
    {
        const bool branch_taken_0x32b82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B82Cu;
        // 0x32b830: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b82c) {
            ctx->pc = 0x32B83Cu;
            goto label_32b83c;
        }
    }
    ctx->pc = 0x32B834u;
label_32b834:
    // 0x32b834: 0x1000009a  b           . + 4 + (0x9A << 2)
label_32b838:
    if (ctx->pc == 0x32B838u) {
        ctx->pc = 0x32B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B834u;
        // 0x32b838: 0x2402007e  addiu       $v0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B83Cu;
        goto label_32b83c;
    }
    ctx->pc = 0x32B834u;
    {
        const bool branch_taken_0x32b834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B834u;
        // 0x32b838: 0x2402007e  addiu       $v0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b834) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B83Cu;
label_32b83c:
    // 0x32b83c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b840:
    // 0x32b840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b844:
    // 0x32b844: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b848:
    // 0x32b848: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b84c:
    // 0x32b84c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b850:
    if (ctx->pc == 0x32B850u) {
        ctx->pc = 0x32B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B84Cu;
        // 0x32b850: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B854u;
        goto label_32b854;
    }
    ctx->pc = 0x32B84Cu;
    {
        const bool branch_taken_0x32b84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B84Cu;
        // 0x32b850: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b84c) {
            ctx->pc = 0x32B86Cu;
            goto label_32b86c;
        }
    }
    ctx->pc = 0x32B854u;
label_32b854:
    // 0x32b854: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b858:
    // 0x32b858: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b85c:
    // 0x32b85c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b85cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b860:
    // 0x32b860: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b864:
    // 0x32b864: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b868:
    if (ctx->pc == 0x32B868u) {
        ctx->pc = 0x32B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B864u;
        // 0x32b868: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B86Cu;
        goto label_32b86c;
    }
    ctx->pc = 0x32B864u;
    {
        const bool branch_taken_0x32b864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B864u;
        // 0x32b868: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b864) {
            ctx->pc = 0x32B880u;
            goto label_32b880;
        }
    }
    ctx->pc = 0x32B86Cu;
label_32b86c:
    // 0x32b86c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b870:
    // 0x32b870: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b874:
    // 0x32b874: 0x40f809  jalr        $v0
label_32b878:
    if (ctx->pc == 0x32B878u) {
        ctx->pc = 0x32B87Cu;
        goto label_32b87c;
    }
    ctx->pc = 0x32B874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B87Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B874u, 0x32B87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B87Cu;
label_32b87c:
    // 0x32b87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b880:
    // 0x32b880: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32b880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32b884:
    // 0x32b884: 0x10000086  b           . + 4 + (0x86 << 2)
label_32b888:
    if (ctx->pc == 0x32B888u) {
        ctx->pc = 0x32B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B884u;
        // 0x32b888: 0x24020119  addiu       $v0, $zero, 0x119 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B88Cu;
        goto label_32b88c;
    }
    ctx->pc = 0x32B884u;
    {
        const bool branch_taken_0x32b884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B884u;
        // 0x32b888: 0x24020119  addiu       $v0, $zero, 0x119 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b884) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B88Cu;
label_32b88c:
    // 0x32b88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b890:
    // 0x32b890: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32b890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b894:
    // 0x32b894: 0xc0cabb4  jal         func_32AED0
label_32b898:
    if (ctx->pc == 0x32B898u) {
        ctx->pc = 0x32B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B894u;
        // 0x32b898: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B89Cu;
        goto label_32b89c;
    }
    ctx->pc = 0x32B894u;
    SET_GPR_U32(ctx, 31, 0x32B89Cu);
    ctx->pc = 0x32B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B894u;
    // 0x32b898: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AED0u, 0x32B894u, 0x32B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B89Cu;
label_32b89c:
    // 0x32b89c: 0x10000080  b           . + 4 + (0x80 << 2)
label_32b8a0:
    if (ctx->pc == 0x32B8A0u) {
        ctx->pc = 0x32B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B89Cu;
        // 0x32b8a0: 0x2402011b  addiu       $v0, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8A4u;
        goto label_32b8a4;
    }
    ctx->pc = 0x32B89Cu;
    {
        const bool branch_taken_0x32b89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B89Cu;
        // 0x32b8a0: 0x2402011b  addiu       $v0, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b89c) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B8A4u;
label_32b8a4:
    // 0x32b8a4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b8a8:
    // 0x32b8a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b8ac:
    // 0x32b8ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b8b0:
    // 0x32b8b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b8b4:
    // 0x32b8b4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b8b8:
    if (ctx->pc == 0x32B8B8u) {
        ctx->pc = 0x32B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8B4u;
        // 0x32b8b8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8BCu;
        goto label_32b8bc;
    }
    ctx->pc = 0x32B8B4u;
    {
        const bool branch_taken_0x32b8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8B4u;
        // 0x32b8b8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8b4) {
            ctx->pc = 0x32B8D4u;
            goto label_32b8d4;
        }
    }
    ctx->pc = 0x32B8BCu;
label_32b8bc:
    // 0x32b8bc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b8c0:
    // 0x32b8c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b8c4:
    // 0x32b8c4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b8c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b8c8:
    // 0x32b8c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b8cc:
    // 0x32b8cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b8d0:
    if (ctx->pc == 0x32B8D0u) {
        ctx->pc = 0x32B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8CCu;
        // 0x32b8d0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8D4u;
        goto label_32b8d4;
    }
    ctx->pc = 0x32B8CCu;
    {
        const bool branch_taken_0x32b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8CCu;
        // 0x32b8d0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8cc) {
            ctx->pc = 0x32B8E8u;
            goto label_32b8e8;
        }
    }
    ctx->pc = 0x32B8D4u;
label_32b8d4:
    // 0x32b8d4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b8d8:
    // 0x32b8d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b8dc:
    // 0x32b8dc: 0x40f809  jalr        $v0
label_32b8e0:
    if (ctx->pc == 0x32B8E0u) {
        ctx->pc = 0x32B8E4u;
        goto label_32b8e4;
    }
    ctx->pc = 0x32B8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B8E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B8DCu, 0x32B8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B8E4u;
label_32b8e4:
    // 0x32b8e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b8e8:
    // 0x32b8e8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x32b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_32b8ec:
    // 0x32b8ec: 0x1482002b  bne         $a0, $v0, . + 4 + (0x2B << 2)
label_32b8f0:
    if (ctx->pc == 0x32B8F0u) {
        ctx->pc = 0x32B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8ECu;
        // 0x32b8f0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8F4u;
        goto label_32b8f4;
    }
    ctx->pc = 0x32B8ECu;
    {
        const bool branch_taken_0x32b8ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8ECu;
        // 0x32b8f0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8ec) {
            ctx->pc = 0x32B99Cu;
            goto label_32b99c;
        }
    }
    ctx->pc = 0x32B8F4u;
label_32b8f4:
    // 0x32b8f4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b8f8:
    // 0x32b8f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b8fc:
    // 0x32b8fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b900:
    // 0x32b900: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b904:
    // 0x32b904: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b908:
    if (ctx->pc == 0x32B908u) {
        ctx->pc = 0x32B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B904u;
        // 0x32b908: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B90Cu;
        goto label_32b90c;
    }
    ctx->pc = 0x32B904u;
    {
        const bool branch_taken_0x32b904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B904u;
        // 0x32b908: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b904) {
            ctx->pc = 0x32B924u;
            goto label_32b924;
        }
    }
    ctx->pc = 0x32B90Cu;
label_32b90c:
    // 0x32b90c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b910:
    // 0x32b910: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b914:
    // 0x32b914: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b918:
    // 0x32b918: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b91c:
    // 0x32b91c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b920:
    if (ctx->pc == 0x32B920u) {
        ctx->pc = 0x32B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B91Cu;
        // 0x32b920: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B924u;
        goto label_32b924;
    }
    ctx->pc = 0x32B91Cu;
    {
        const bool branch_taken_0x32b91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B91Cu;
        // 0x32b920: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b91c) {
            ctx->pc = 0x32B938u;
            goto label_32b938;
        }
    }
    ctx->pc = 0x32B924u;
label_32b924:
    // 0x32b924: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b928:
    // 0x32b928: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b92c:
    // 0x32b92c: 0x40f809  jalr        $v0
label_32b930:
    if (ctx->pc == 0x32B930u) {
        ctx->pc = 0x32B934u;
        goto label_32b934;
    }
    ctx->pc = 0x32B92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B934u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B92Cu, 0x32B934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B934u;
label_32b934:
    // 0x32b934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b938:
    // 0x32b938: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x32b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_32b93c:
    // 0x32b93c: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
label_32b940:
    if (ctx->pc == 0x32B940u) {
        ctx->pc = 0x32B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B93Cu;
        // 0x32b940: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B944u;
        goto label_32b944;
    }
    ctx->pc = 0x32B93Cu;
    {
        const bool branch_taken_0x32b93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B93Cu;
        // 0x32b940: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b93c) {
            ctx->pc = 0x32B994u;
            goto label_32b994;
        }
    }
    ctx->pc = 0x32B944u;
label_32b944:
    // 0x32b944: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b948:
    // 0x32b948: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32b948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b94c:
    // 0x32b94c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32b94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32b950:
    // 0x32b950: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b954:
    // 0x32b954: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b958:
    if (ctx->pc == 0x32B958u) {
        ctx->pc = 0x32B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B954u;
        // 0x32b958: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B95Cu;
        goto label_32b95c;
    }
    ctx->pc = 0x32B954u;
    {
        const bool branch_taken_0x32b954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B954u;
        // 0x32b958: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b954) {
            ctx->pc = 0x32B974u;
            goto label_32b974;
        }
    }
    ctx->pc = 0x32B95Cu;
label_32b95c:
    // 0x32b95c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b960:
    // 0x32b960: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b964:
    // 0x32b964: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b964u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b968:
    // 0x32b968: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b96c:
    // 0x32b96c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b970:
    if (ctx->pc == 0x32B970u) {
        ctx->pc = 0x32B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B96Cu;
        // 0x32b970: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B974u;
        goto label_32b974;
    }
    ctx->pc = 0x32B96Cu;
    {
        const bool branch_taken_0x32b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B96Cu;
        // 0x32b970: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b96c) {
            ctx->pc = 0x32B988u;
            goto label_32b988;
        }
    }
    ctx->pc = 0x32B974u;
label_32b974:
    // 0x32b974: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b978:
    // 0x32b978: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b97c:
    // 0x32b97c: 0x40f809  jalr        $v0
label_32b980:
    if (ctx->pc == 0x32B980u) {
        ctx->pc = 0x32B984u;
        goto label_32b984;
    }
    ctx->pc = 0x32B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B97Cu, 0x32B984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B984u;
label_32b984:
    // 0x32b984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b988:
    // 0x32b988: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32b988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32b98c:
    // 0x32b98c: 0x10000044  b           . + 4 + (0x44 << 2)
label_32b990:
    if (ctx->pc == 0x32B990u) {
        ctx->pc = 0x32B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B98Cu;
        // 0x32b990: 0x24020115  addiu       $v0, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B994u;
        goto label_32b994;
    }
    ctx->pc = 0x32B98Cu;
    {
        const bool branch_taken_0x32b98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B98Cu;
        // 0x32b990: 0x24020115  addiu       $v0, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b98c) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B994u;
label_32b994:
    // 0x32b994: 0x10000042  b           . + 4 + (0x42 << 2)
label_32b998:
    if (ctx->pc == 0x32B998u) {
        ctx->pc = 0x32B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B994u;
        // 0x32b998: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B99Cu;
        goto label_32b99c;
    }
    ctx->pc = 0x32B994u;
    {
        const bool branch_taken_0x32b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B994u;
        // 0x32b998: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b994) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B99Cu;
label_32b99c:
    // 0x32b99c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x32b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_32b9a0:
    // 0x32b9a0: 0x2442c531  addiu       $v0, $v0, -0x3ACF
    ctx->pc = 0x32b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_32b9a4:
    // 0x32b9a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32b9a8:
    // 0x32b9a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x32b9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b9ac:
    // 0x32b9ac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x32b9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_32b9b0:
    // 0x32b9b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_32b9b4:
    if (ctx->pc == 0x32B9B4u) {
        ctx->pc = 0x32B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9B0u;
        // 0x32b9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9B8u;
        goto label_32b9b8;
    }
    ctx->pc = 0x32B9B0u;
    {
        const bool branch_taken_0x32b9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9B0u;
        // 0x32b9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9b0) {
            ctx->pc = 0x32B9C0u;
            goto label_32b9c0;
        }
    }
    ctx->pc = 0x32B9B8u;
label_32b9b8:
    // 0x32b9b8: 0x10000039  b           . + 4 + (0x39 << 2)
label_32b9bc:
    if (ctx->pc == 0x32B9BCu) {
        ctx->pc = 0x32B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9B8u;
        // 0x32b9bc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9C0u;
        goto label_32b9c0;
    }
    ctx->pc = 0x32B9B8u;
    {
        const bool branch_taken_0x32b9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9B8u;
        // 0x32b9bc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9b8) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B9C0u;
label_32b9c0:
    // 0x32b9c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b9c4:
    // 0x32b9c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_32b9c8:
    if (ctx->pc == 0x32B9C8u) {
        ctx->pc = 0x32B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9C4u;
        // 0x32b9c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9CCu;
        goto label_32b9cc;
    }
    ctx->pc = 0x32B9C4u;
    {
        const bool branch_taken_0x32b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9C4u;
        // 0x32b9c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9c4) {
            ctx->pc = 0x32B9D8u;
            goto label_32b9d8;
        }
    }
    ctx->pc = 0x32B9CCu;
label_32b9cc:
    // 0x32b9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b9d0:
    // 0x32b9d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32b9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b9d4:
    // 0x32b9d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b9d8:
    // 0x32b9d8: 0xc0ca9a2  jal         func_32A688
label_32b9dc:
    if (ctx->pc == 0x32B9DCu) {
        ctx->pc = 0x32B9E0u;
        goto label_32b9e0;
    }
    ctx->pc = 0x32B9D8u;
    SET_GPR_U32(ctx, 31, 0x32B9E0u);
    ctx->pc = 0x32A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A688u, 0x32B9D8u, 0x32B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9E0u;
label_32b9e0:
    // 0x32b9e0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_32b9e4:
    if (ctx->pc == 0x32B9E4u) {
        ctx->pc = 0x32B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9E0u;
        // 0x32b9e4: 0x2402011a  addiu       $v0, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9E8u;
        goto label_32b9e8;
    }
    ctx->pc = 0x32B9E0u;
    {
        const bool branch_taken_0x32b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9E0u;
        // 0x32b9e4: 0x2402011a  addiu       $v0, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9e0) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B9E8u;
label_32b9e8:
    // 0x32b9e8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_32b9ec:
    if (ctx->pc == 0x32B9ECu) {
        ctx->pc = 0x32B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9E8u;
        // 0x32b9ec: 0x2402011c  addiu       $v0, $zero, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9F0u;
        goto label_32b9f0;
    }
    ctx->pc = 0x32B9E8u;
    {
        const bool branch_taken_0x32b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9E8u;
        // 0x32b9ec: 0x2402011c  addiu       $v0, $zero, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9e8) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32B9F0u;
label_32b9f0:
    // 0x32b9f0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x32b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_32b9f4:
    // 0x32b9f4: 0x2442c531  addiu       $v0, $v0, -0x3ACF
    ctx->pc = 0x32b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_32b9f8:
    // 0x32b9f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x32b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32b9fc:
    // 0x32b9fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x32b9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32ba00:
    // 0x32ba00: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x32ba00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_32ba04:
    // 0x32ba04: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_32ba08:
    if (ctx->pc == 0x32BA08u) {
        ctx->pc = 0x32BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA04u;
        // 0x32ba08: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA0Cu;
        goto label_32ba0c;
    }
    ctx->pc = 0x32BA04u;
    {
        const bool branch_taken_0x32ba04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA04u;
        // 0x32ba08: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba04) {
            ctx->pc = 0x32BA6Cu;
            goto label_32ba6c;
        }
    }
    ctx->pc = 0x32BA0Cu;
label_32ba0c:
    // 0x32ba0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32ba10:
    if (ctx->pc == 0x32BA10u) {
        ctx->pc = 0x32BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA0Cu;
        // 0x32ba10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA14u;
        goto label_32ba14;
    }
    ctx->pc = 0x32BA0Cu;
    {
        const bool branch_taken_0x32ba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA0Cu;
        // 0x32ba10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba0c) {
            ctx->pc = 0x32BA1Cu;
            goto label_32ba1c;
        }
    }
    ctx->pc = 0x32BA14u;
label_32ba14:
    // 0x32ba14: 0xc0ca8e8  jal         func_32A3A0
label_32ba18:
    if (ctx->pc == 0x32BA18u) {
        ctx->pc = 0x32BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA14u;
        // 0x32ba18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA1Cu;
        goto label_32ba1c;
    }
    ctx->pc = 0x32BA14u;
    SET_GPR_U32(ctx, 31, 0x32BA1Cu);
    ctx->pc = 0x32BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA14u;
    // 0x32ba18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A3A0u, 0x32BA14u, 0x32BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA1Cu;
label_32ba1c:
    // 0x32ba1c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ba20:
    // 0x32ba20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ba24:
    // 0x32ba24: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32ba28:
    // 0x32ba28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32ba2c:
    // 0x32ba2c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32ba30:
    if (ctx->pc == 0x32BA30u) {
        ctx->pc = 0x32BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA2Cu;
        // 0x32ba30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA34u;
        goto label_32ba34;
    }
    ctx->pc = 0x32BA2Cu;
    {
        const bool branch_taken_0x32ba2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA2Cu;
        // 0x32ba30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba2c) {
            ctx->pc = 0x32BA4Cu;
            goto label_32ba4c;
        }
    }
    ctx->pc = 0x32BA34u;
label_32ba34:
    // 0x32ba34: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ba38:
    // 0x32ba38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ba3c:
    // 0x32ba3c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32ba3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32ba40:
    // 0x32ba40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32ba44:
    // 0x32ba44: 0x10000006  b           . + 4 + (0x6 << 2)
label_32ba48:
    if (ctx->pc == 0x32BA48u) {
        ctx->pc = 0x32BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA44u;
        // 0x32ba48: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA4Cu;
        goto label_32ba4c;
    }
    ctx->pc = 0x32BA44u;
    {
        const bool branch_taken_0x32ba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA44u;
        // 0x32ba48: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba44) {
            ctx->pc = 0x32BA60u;
            goto label_32ba60;
        }
    }
    ctx->pc = 0x32BA4Cu;
label_32ba4c:
    // 0x32ba4c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ba50:
    // 0x32ba50: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32ba54:
    // 0x32ba54: 0x40f809  jalr        $v0
label_32ba58:
    if (ctx->pc == 0x32BA58u) {
        ctx->pc = 0x32BA5Cu;
        goto label_32ba5c;
    }
    ctx->pc = 0x32BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32BA5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BA54u, 0x32BA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32BA5Cu;
label_32ba5c:
    // 0x32ba5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ba60:
    // 0x32ba60: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32ba64:
    // 0x32ba64: 0x1000000e  b           . + 4 + (0xE << 2)
label_32ba68:
    if (ctx->pc == 0x32BA68u) {
        ctx->pc = 0x32BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA64u;
        // 0x32ba68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA6Cu;
        goto label_32ba6c;
    }
    ctx->pc = 0x32BA64u;
    {
        const bool branch_taken_0x32ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA64u;
        // 0x32ba68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba64) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32BA6Cu;
label_32ba6c:
    // 0x32ba6c: 0xc0ca95e  jal         func_32A578
label_32ba70:
    if (ctx->pc == 0x32BA70u) {
        ctx->pc = 0x32BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA6Cu;
        // 0x32ba70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA74u;
        goto label_32ba74;
    }
    ctx->pc = 0x32BA6Cu;
    SET_GPR_U32(ctx, 31, 0x32BA74u);
    ctx->pc = 0x32BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA6Cu;
    // 0x32ba70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A578u, 0x32BA6Cu, 0x32BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA74u;
label_32ba74:
    // 0x32ba74: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x32ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_32ba78:
    // 0x32ba78: 0xc0cbf58  jal         func_32FD60
label_32ba7c:
    if (ctx->pc == 0x32BA7Cu) {
        ctx->pc = 0x32BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA78u;
        // 0x32ba7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA80u;
        goto label_32ba80;
    }
    ctx->pc = 0x32BA78u;
    SET_GPR_U32(ctx, 31, 0x32BA80u);
    ctx->pc = 0x32BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA78u;
    // 0x32ba7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x32BA78u, 0x32BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA80u;
label_32ba80:
    // 0x32ba80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ba84:
    // 0x32ba84: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x32ba84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_32ba88:
    // 0x32ba88: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x32ba88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_32ba8c:
    // 0x32ba8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32ba90:
    if (ctx->pc == 0x32BA90u) {
        ctx->pc = 0x32BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA8Cu;
        // 0x32ba90: 0x24020113  addiu       $v0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA94u;
        goto label_32ba94;
    }
    ctx->pc = 0x32BA8Cu;
    {
        const bool branch_taken_0x32ba8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA8Cu;
        // 0x32ba90: 0x24020113  addiu       $v0, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba8c) {
            ctx->pc = 0x32BA9Cu;
            goto label_32ba9c;
        }
    }
    ctx->pc = 0x32BA94u;
label_32ba94:
    // 0x32ba94: 0x10000002  b           . + 4 + (0x2 << 2)
label_32ba98:
    if (ctx->pc == 0x32BA98u) {
        ctx->pc = 0x32BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA94u;
        // 0x32ba98: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA9Cu;
        goto label_32ba9c;
    }
    ctx->pc = 0x32BA94u;
    {
        const bool branch_taken_0x32ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA94u;
        // 0x32ba98: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba94) {
            ctx->pc = 0x32BAA0u;
            goto label_32baa0;
        }
    }
    ctx->pc = 0x32BA9Cu;
label_32ba9c:
    // 0x32ba9c: 0x246200fe  addiu       $v0, $v1, 0xFE
    ctx->pc = 0x32ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 254));
label_32baa0:
    // 0x32baa0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32baa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32baa4:
    // 0x32baa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32baa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32baa8:
    // 0x32baa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32baa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32baac:
    // 0x32baac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32baacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32bab0:
    // 0x32bab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32bab4:
    // 0x32bab4: 0x3e00008  jr          $ra
label_32bab8:
    if (ctx->pc == 0x32BAB8u) {
        ctx->pc = 0x32BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAB4u;
        // 0x32bab8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BABCu;
        goto label_32babc;
    }
    ctx->pc = 0x32BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAB4u;
        // 0x32bab8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BABCu;
label_32babc:
    // 0x32babc: 0x0  nop
    ctx->pc = 0x32babcu;
    // NOP
    ctx->pc = 0x32bac0u;
}
