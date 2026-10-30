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

// Function: sub_0028B358
// Address: 0x28b358 - 0x28ba48
void sub_0028B358_0x28b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B358_0x28b358");
#endif

    switch (ctx->pc) {
        case 0x28b358u: goto label_28b358;
        case 0x28b35cu: goto label_28b35c;
        case 0x28b360u: goto label_28b360;
        case 0x28b364u: goto label_28b364;
        case 0x28b368u: goto label_28b368;
        case 0x28b36cu: goto label_28b36c;
        case 0x28b370u: goto label_28b370;
        case 0x28b374u: goto label_28b374;
        case 0x28b378u: goto label_28b378;
        case 0x28b37cu: goto label_28b37c;
        case 0x28b380u: goto label_28b380;
        case 0x28b384u: goto label_28b384;
        case 0x28b388u: goto label_28b388;
        case 0x28b38cu: goto label_28b38c;
        case 0x28b390u: goto label_28b390;
        case 0x28b394u: goto label_28b394;
        case 0x28b398u: goto label_28b398;
        case 0x28b39cu: goto label_28b39c;
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3a4u: goto label_28b3a4;
        case 0x28b3a8u: goto label_28b3a8;
        case 0x28b3acu: goto label_28b3ac;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b3b4u: goto label_28b3b4;
        case 0x28b3b8u: goto label_28b3b8;
        case 0x28b3bcu: goto label_28b3bc;
        case 0x28b3c0u: goto label_28b3c0;
        case 0x28b3c4u: goto label_28b3c4;
        case 0x28b3c8u: goto label_28b3c8;
        case 0x28b3ccu: goto label_28b3cc;
        case 0x28b3d0u: goto label_28b3d0;
        case 0x28b3d4u: goto label_28b3d4;
        case 0x28b3d8u: goto label_28b3d8;
        case 0x28b3dcu: goto label_28b3dc;
        case 0x28b3e0u: goto label_28b3e0;
        case 0x28b3e4u: goto label_28b3e4;
        case 0x28b3e8u: goto label_28b3e8;
        case 0x28b3ecu: goto label_28b3ec;
        case 0x28b3f0u: goto label_28b3f0;
        case 0x28b3f4u: goto label_28b3f4;
        case 0x28b3f8u: goto label_28b3f8;
        case 0x28b3fcu: goto label_28b3fc;
        case 0x28b400u: goto label_28b400;
        case 0x28b404u: goto label_28b404;
        case 0x28b408u: goto label_28b408;
        case 0x28b40cu: goto label_28b40c;
        case 0x28b410u: goto label_28b410;
        case 0x28b414u: goto label_28b414;
        case 0x28b418u: goto label_28b418;
        case 0x28b41cu: goto label_28b41c;
        case 0x28b420u: goto label_28b420;
        case 0x28b424u: goto label_28b424;
        case 0x28b428u: goto label_28b428;
        case 0x28b42cu: goto label_28b42c;
        case 0x28b430u: goto label_28b430;
        case 0x28b434u: goto label_28b434;
        case 0x28b438u: goto label_28b438;
        case 0x28b43cu: goto label_28b43c;
        case 0x28b440u: goto label_28b440;
        case 0x28b444u: goto label_28b444;
        case 0x28b448u: goto label_28b448;
        case 0x28b44cu: goto label_28b44c;
        case 0x28b450u: goto label_28b450;
        case 0x28b454u: goto label_28b454;
        case 0x28b458u: goto label_28b458;
        case 0x28b45cu: goto label_28b45c;
        case 0x28b460u: goto label_28b460;
        case 0x28b464u: goto label_28b464;
        case 0x28b468u: goto label_28b468;
        case 0x28b46cu: goto label_28b46c;
        case 0x28b470u: goto label_28b470;
        case 0x28b474u: goto label_28b474;
        case 0x28b478u: goto label_28b478;
        case 0x28b47cu: goto label_28b47c;
        case 0x28b480u: goto label_28b480;
        case 0x28b484u: goto label_28b484;
        case 0x28b488u: goto label_28b488;
        case 0x28b48cu: goto label_28b48c;
        case 0x28b490u: goto label_28b490;
        case 0x28b494u: goto label_28b494;
        case 0x28b498u: goto label_28b498;
        case 0x28b49cu: goto label_28b49c;
        case 0x28b4a0u: goto label_28b4a0;
        case 0x28b4a4u: goto label_28b4a4;
        case 0x28b4a8u: goto label_28b4a8;
        case 0x28b4acu: goto label_28b4ac;
        case 0x28b4b0u: goto label_28b4b0;
        case 0x28b4b4u: goto label_28b4b4;
        case 0x28b4b8u: goto label_28b4b8;
        case 0x28b4bcu: goto label_28b4bc;
        case 0x28b4c0u: goto label_28b4c0;
        case 0x28b4c4u: goto label_28b4c4;
        case 0x28b4c8u: goto label_28b4c8;
        case 0x28b4ccu: goto label_28b4cc;
        case 0x28b4d0u: goto label_28b4d0;
        case 0x28b4d4u: goto label_28b4d4;
        case 0x28b4d8u: goto label_28b4d8;
        case 0x28b4dcu: goto label_28b4dc;
        case 0x28b4e0u: goto label_28b4e0;
        case 0x28b4e4u: goto label_28b4e4;
        case 0x28b4e8u: goto label_28b4e8;
        case 0x28b4ecu: goto label_28b4ec;
        case 0x28b4f0u: goto label_28b4f0;
        case 0x28b4f4u: goto label_28b4f4;
        case 0x28b4f8u: goto label_28b4f8;
        case 0x28b4fcu: goto label_28b4fc;
        case 0x28b500u: goto label_28b500;
        case 0x28b504u: goto label_28b504;
        case 0x28b508u: goto label_28b508;
        case 0x28b50cu: goto label_28b50c;
        case 0x28b510u: goto label_28b510;
        case 0x28b514u: goto label_28b514;
        case 0x28b518u: goto label_28b518;
        case 0x28b51cu: goto label_28b51c;
        case 0x28b520u: goto label_28b520;
        case 0x28b524u: goto label_28b524;
        case 0x28b528u: goto label_28b528;
        case 0x28b52cu: goto label_28b52c;
        case 0x28b530u: goto label_28b530;
        case 0x28b534u: goto label_28b534;
        case 0x28b538u: goto label_28b538;
        case 0x28b53cu: goto label_28b53c;
        case 0x28b540u: goto label_28b540;
        case 0x28b544u: goto label_28b544;
        case 0x28b548u: goto label_28b548;
        case 0x28b54cu: goto label_28b54c;
        case 0x28b550u: goto label_28b550;
        case 0x28b554u: goto label_28b554;
        case 0x28b558u: goto label_28b558;
        case 0x28b55cu: goto label_28b55c;
        case 0x28b560u: goto label_28b560;
        case 0x28b564u: goto label_28b564;
        case 0x28b568u: goto label_28b568;
        case 0x28b56cu: goto label_28b56c;
        case 0x28b570u: goto label_28b570;
        case 0x28b574u: goto label_28b574;
        case 0x28b578u: goto label_28b578;
        case 0x28b57cu: goto label_28b57c;
        case 0x28b580u: goto label_28b580;
        case 0x28b584u: goto label_28b584;
        case 0x28b588u: goto label_28b588;
        case 0x28b58cu: goto label_28b58c;
        case 0x28b590u: goto label_28b590;
        case 0x28b594u: goto label_28b594;
        case 0x28b598u: goto label_28b598;
        case 0x28b59cu: goto label_28b59c;
        case 0x28b5a0u: goto label_28b5a0;
        case 0x28b5a4u: goto label_28b5a4;
        case 0x28b5a8u: goto label_28b5a8;
        case 0x28b5acu: goto label_28b5ac;
        case 0x28b5b0u: goto label_28b5b0;
        case 0x28b5b4u: goto label_28b5b4;
        case 0x28b5b8u: goto label_28b5b8;
        case 0x28b5bcu: goto label_28b5bc;
        case 0x28b5c0u: goto label_28b5c0;
        case 0x28b5c4u: goto label_28b5c4;
        case 0x28b5c8u: goto label_28b5c8;
        case 0x28b5ccu: goto label_28b5cc;
        case 0x28b5d0u: goto label_28b5d0;
        case 0x28b5d4u: goto label_28b5d4;
        case 0x28b5d8u: goto label_28b5d8;
        case 0x28b5dcu: goto label_28b5dc;
        case 0x28b5e0u: goto label_28b5e0;
        case 0x28b5e4u: goto label_28b5e4;
        case 0x28b5e8u: goto label_28b5e8;
        case 0x28b5ecu: goto label_28b5ec;
        case 0x28b5f0u: goto label_28b5f0;
        case 0x28b5f4u: goto label_28b5f4;
        case 0x28b5f8u: goto label_28b5f8;
        case 0x28b5fcu: goto label_28b5fc;
        case 0x28b600u: goto label_28b600;
        case 0x28b604u: goto label_28b604;
        case 0x28b608u: goto label_28b608;
        case 0x28b60cu: goto label_28b60c;
        case 0x28b610u: goto label_28b610;
        case 0x28b614u: goto label_28b614;
        case 0x28b618u: goto label_28b618;
        case 0x28b61cu: goto label_28b61c;
        case 0x28b620u: goto label_28b620;
        case 0x28b624u: goto label_28b624;
        case 0x28b628u: goto label_28b628;
        case 0x28b62cu: goto label_28b62c;
        case 0x28b630u: goto label_28b630;
        case 0x28b634u: goto label_28b634;
        case 0x28b638u: goto label_28b638;
        case 0x28b63cu: goto label_28b63c;
        case 0x28b640u: goto label_28b640;
        case 0x28b644u: goto label_28b644;
        case 0x28b648u: goto label_28b648;
        case 0x28b64cu: goto label_28b64c;
        case 0x28b650u: goto label_28b650;
        case 0x28b654u: goto label_28b654;
        case 0x28b658u: goto label_28b658;
        case 0x28b65cu: goto label_28b65c;
        case 0x28b660u: goto label_28b660;
        case 0x28b664u: goto label_28b664;
        case 0x28b668u: goto label_28b668;
        case 0x28b66cu: goto label_28b66c;
        case 0x28b670u: goto label_28b670;
        case 0x28b674u: goto label_28b674;
        case 0x28b678u: goto label_28b678;
        case 0x28b67cu: goto label_28b67c;
        case 0x28b680u: goto label_28b680;
        case 0x28b684u: goto label_28b684;
        case 0x28b688u: goto label_28b688;
        case 0x28b68cu: goto label_28b68c;
        case 0x28b690u: goto label_28b690;
        case 0x28b694u: goto label_28b694;
        case 0x28b698u: goto label_28b698;
        case 0x28b69cu: goto label_28b69c;
        case 0x28b6a0u: goto label_28b6a0;
        case 0x28b6a4u: goto label_28b6a4;
        case 0x28b6a8u: goto label_28b6a8;
        case 0x28b6acu: goto label_28b6ac;
        case 0x28b6b0u: goto label_28b6b0;
        case 0x28b6b4u: goto label_28b6b4;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b6bcu: goto label_28b6bc;
        case 0x28b6c0u: goto label_28b6c0;
        case 0x28b6c4u: goto label_28b6c4;
        case 0x28b6c8u: goto label_28b6c8;
        case 0x28b6ccu: goto label_28b6cc;
        case 0x28b6d0u: goto label_28b6d0;
        case 0x28b6d4u: goto label_28b6d4;
        case 0x28b6d8u: goto label_28b6d8;
        case 0x28b6dcu: goto label_28b6dc;
        case 0x28b6e0u: goto label_28b6e0;
        case 0x28b6e4u: goto label_28b6e4;
        case 0x28b6e8u: goto label_28b6e8;
        case 0x28b6ecu: goto label_28b6ec;
        case 0x28b6f0u: goto label_28b6f0;
        case 0x28b6f4u: goto label_28b6f4;
        case 0x28b6f8u: goto label_28b6f8;
        case 0x28b6fcu: goto label_28b6fc;
        case 0x28b700u: goto label_28b700;
        case 0x28b704u: goto label_28b704;
        case 0x28b708u: goto label_28b708;
        case 0x28b70cu: goto label_28b70c;
        case 0x28b710u: goto label_28b710;
        case 0x28b714u: goto label_28b714;
        case 0x28b718u: goto label_28b718;
        case 0x28b71cu: goto label_28b71c;
        case 0x28b720u: goto label_28b720;
        case 0x28b724u: goto label_28b724;
        case 0x28b728u: goto label_28b728;
        case 0x28b72cu: goto label_28b72c;
        case 0x28b730u: goto label_28b730;
        case 0x28b734u: goto label_28b734;
        case 0x28b738u: goto label_28b738;
        case 0x28b73cu: goto label_28b73c;
        case 0x28b740u: goto label_28b740;
        case 0x28b744u: goto label_28b744;
        case 0x28b748u: goto label_28b748;
        case 0x28b74cu: goto label_28b74c;
        case 0x28b750u: goto label_28b750;
        case 0x28b754u: goto label_28b754;
        case 0x28b758u: goto label_28b758;
        case 0x28b75cu: goto label_28b75c;
        case 0x28b760u: goto label_28b760;
        case 0x28b764u: goto label_28b764;
        case 0x28b768u: goto label_28b768;
        case 0x28b76cu: goto label_28b76c;
        case 0x28b770u: goto label_28b770;
        case 0x28b774u: goto label_28b774;
        case 0x28b778u: goto label_28b778;
        case 0x28b77cu: goto label_28b77c;
        case 0x28b780u: goto label_28b780;
        case 0x28b784u: goto label_28b784;
        case 0x28b788u: goto label_28b788;
        case 0x28b78cu: goto label_28b78c;
        case 0x28b790u: goto label_28b790;
        case 0x28b794u: goto label_28b794;
        case 0x28b798u: goto label_28b798;
        case 0x28b79cu: goto label_28b79c;
        case 0x28b7a0u: goto label_28b7a0;
        case 0x28b7a4u: goto label_28b7a4;
        case 0x28b7a8u: goto label_28b7a8;
        case 0x28b7acu: goto label_28b7ac;
        case 0x28b7b0u: goto label_28b7b0;
        case 0x28b7b4u: goto label_28b7b4;
        case 0x28b7b8u: goto label_28b7b8;
        case 0x28b7bcu: goto label_28b7bc;
        case 0x28b7c0u: goto label_28b7c0;
        case 0x28b7c4u: goto label_28b7c4;
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7ccu: goto label_28b7cc;
        case 0x28b7d0u: goto label_28b7d0;
        case 0x28b7d4u: goto label_28b7d4;
        case 0x28b7d8u: goto label_28b7d8;
        case 0x28b7dcu: goto label_28b7dc;
        case 0x28b7e0u: goto label_28b7e0;
        case 0x28b7e4u: goto label_28b7e4;
        case 0x28b7e8u: goto label_28b7e8;
        case 0x28b7ecu: goto label_28b7ec;
        case 0x28b7f0u: goto label_28b7f0;
        case 0x28b7f4u: goto label_28b7f4;
        case 0x28b7f8u: goto label_28b7f8;
        case 0x28b7fcu: goto label_28b7fc;
        case 0x28b800u: goto label_28b800;
        case 0x28b804u: goto label_28b804;
        case 0x28b808u: goto label_28b808;
        case 0x28b80cu: goto label_28b80c;
        case 0x28b810u: goto label_28b810;
        case 0x28b814u: goto label_28b814;
        case 0x28b818u: goto label_28b818;
        case 0x28b81cu: goto label_28b81c;
        case 0x28b820u: goto label_28b820;
        case 0x28b824u: goto label_28b824;
        case 0x28b828u: goto label_28b828;
        case 0x28b82cu: goto label_28b82c;
        case 0x28b830u: goto label_28b830;
        case 0x28b834u: goto label_28b834;
        case 0x28b838u: goto label_28b838;
        case 0x28b83cu: goto label_28b83c;
        case 0x28b840u: goto label_28b840;
        case 0x28b844u: goto label_28b844;
        case 0x28b848u: goto label_28b848;
        case 0x28b84cu: goto label_28b84c;
        case 0x28b850u: goto label_28b850;
        case 0x28b854u: goto label_28b854;
        case 0x28b858u: goto label_28b858;
        case 0x28b85cu: goto label_28b85c;
        case 0x28b860u: goto label_28b860;
        case 0x28b864u: goto label_28b864;
        case 0x28b868u: goto label_28b868;
        case 0x28b86cu: goto label_28b86c;
        case 0x28b870u: goto label_28b870;
        case 0x28b874u: goto label_28b874;
        case 0x28b878u: goto label_28b878;
        case 0x28b87cu: goto label_28b87c;
        case 0x28b880u: goto label_28b880;
        case 0x28b884u: goto label_28b884;
        case 0x28b888u: goto label_28b888;
        case 0x28b88cu: goto label_28b88c;
        case 0x28b890u: goto label_28b890;
        case 0x28b894u: goto label_28b894;
        case 0x28b898u: goto label_28b898;
        case 0x28b89cu: goto label_28b89c;
        case 0x28b8a0u: goto label_28b8a0;
        case 0x28b8a4u: goto label_28b8a4;
        case 0x28b8a8u: goto label_28b8a8;
        case 0x28b8acu: goto label_28b8ac;
        case 0x28b8b0u: goto label_28b8b0;
        case 0x28b8b4u: goto label_28b8b4;
        case 0x28b8b8u: goto label_28b8b8;
        case 0x28b8bcu: goto label_28b8bc;
        case 0x28b8c0u: goto label_28b8c0;
        case 0x28b8c4u: goto label_28b8c4;
        case 0x28b8c8u: goto label_28b8c8;
        case 0x28b8ccu: goto label_28b8cc;
        case 0x28b8d0u: goto label_28b8d0;
        case 0x28b8d4u: goto label_28b8d4;
        case 0x28b8d8u: goto label_28b8d8;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b8e0u: goto label_28b8e0;
        case 0x28b8e4u: goto label_28b8e4;
        case 0x28b8e8u: goto label_28b8e8;
        case 0x28b8ecu: goto label_28b8ec;
        case 0x28b8f0u: goto label_28b8f0;
        case 0x28b8f4u: goto label_28b8f4;
        case 0x28b8f8u: goto label_28b8f8;
        case 0x28b8fcu: goto label_28b8fc;
        case 0x28b900u: goto label_28b900;
        case 0x28b904u: goto label_28b904;
        case 0x28b908u: goto label_28b908;
        case 0x28b90cu: goto label_28b90c;
        case 0x28b910u: goto label_28b910;
        case 0x28b914u: goto label_28b914;
        case 0x28b918u: goto label_28b918;
        case 0x28b91cu: goto label_28b91c;
        case 0x28b920u: goto label_28b920;
        case 0x28b924u: goto label_28b924;
        case 0x28b928u: goto label_28b928;
        case 0x28b92cu: goto label_28b92c;
        case 0x28b930u: goto label_28b930;
        case 0x28b934u: goto label_28b934;
        case 0x28b938u: goto label_28b938;
        case 0x28b93cu: goto label_28b93c;
        case 0x28b940u: goto label_28b940;
        case 0x28b944u: goto label_28b944;
        case 0x28b948u: goto label_28b948;
        case 0x28b94cu: goto label_28b94c;
        case 0x28b950u: goto label_28b950;
        case 0x28b954u: goto label_28b954;
        case 0x28b958u: goto label_28b958;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b960u: goto label_28b960;
        case 0x28b964u: goto label_28b964;
        case 0x28b968u: goto label_28b968;
        case 0x28b96cu: goto label_28b96c;
        case 0x28b970u: goto label_28b970;
        case 0x28b974u: goto label_28b974;
        case 0x28b978u: goto label_28b978;
        case 0x28b97cu: goto label_28b97c;
        case 0x28b980u: goto label_28b980;
        case 0x28b984u: goto label_28b984;
        case 0x28b988u: goto label_28b988;
        case 0x28b98cu: goto label_28b98c;
        case 0x28b990u: goto label_28b990;
        case 0x28b994u: goto label_28b994;
        case 0x28b998u: goto label_28b998;
        case 0x28b99cu: goto label_28b99c;
        case 0x28b9a0u: goto label_28b9a0;
        case 0x28b9a4u: goto label_28b9a4;
        case 0x28b9a8u: goto label_28b9a8;
        case 0x28b9acu: goto label_28b9ac;
        case 0x28b9b0u: goto label_28b9b0;
        case 0x28b9b4u: goto label_28b9b4;
        case 0x28b9b8u: goto label_28b9b8;
        case 0x28b9bcu: goto label_28b9bc;
        case 0x28b9c0u: goto label_28b9c0;
        case 0x28b9c4u: goto label_28b9c4;
        case 0x28b9c8u: goto label_28b9c8;
        case 0x28b9ccu: goto label_28b9cc;
        case 0x28b9d0u: goto label_28b9d0;
        case 0x28b9d4u: goto label_28b9d4;
        case 0x28b9d8u: goto label_28b9d8;
        case 0x28b9dcu: goto label_28b9dc;
        case 0x28b9e0u: goto label_28b9e0;
        case 0x28b9e4u: goto label_28b9e4;
        case 0x28b9e8u: goto label_28b9e8;
        case 0x28b9ecu: goto label_28b9ec;
        case 0x28b9f0u: goto label_28b9f0;
        case 0x28b9f4u: goto label_28b9f4;
        case 0x28b9f8u: goto label_28b9f8;
        case 0x28b9fcu: goto label_28b9fc;
        case 0x28ba00u: goto label_28ba00;
        case 0x28ba04u: goto label_28ba04;
        case 0x28ba08u: goto label_28ba08;
        case 0x28ba0cu: goto label_28ba0c;
        case 0x28ba10u: goto label_28ba10;
        case 0x28ba14u: goto label_28ba14;
        case 0x28ba18u: goto label_28ba18;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba20u: goto label_28ba20;
        case 0x28ba24u: goto label_28ba24;
        case 0x28ba28u: goto label_28ba28;
        case 0x28ba2cu: goto label_28ba2c;
        case 0x28ba30u: goto label_28ba30;
        case 0x28ba34u: goto label_28ba34;
        case 0x28ba38u: goto label_28ba38;
        case 0x28ba3cu: goto label_28ba3c;
        case 0x28ba40u: goto label_28ba40;
        case 0x28ba44u: goto label_28ba44;
        default: break;
    }

    ctx->pc = 0x28b358u;

label_28b358:
    // 0x28b358: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x28b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_28b35c:
    // 0x28b35c: 0x7fb402b0  sq          $s4, 0x2B0($sp)
    ctx->pc = 0x28b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 20));
label_28b360:
    // 0x28b360: 0x7fb002f0  sq          $s0, 0x2F0($sp)
    ctx->pc = 0x28b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 16));
label_28b364:
    // 0x28b364: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28b364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b368:
    // 0x28b368: 0x7fb102e0  sq          $s1, 0x2E0($sp)
    ctx->pc = 0x28b368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 17));
label_28b36c:
    // 0x28b36c: 0x7fb202d0  sq          $s2, 0x2D0($sp)
    ctx->pc = 0x28b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 18));
label_28b370:
    // 0x28b370: 0x7fb302c0  sq          $s3, 0x2C0($sp)
    ctx->pc = 0x28b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 19));
label_28b374:
    // 0x28b374: 0x7fb502a0  sq          $s5, 0x2A0($sp)
    ctx->pc = 0x28b374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 21));
label_28b378:
    // 0x28b378: 0x7fb60290  sq          $s6, 0x290($sp)
    ctx->pc = 0x28b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 22));
label_28b37c:
    // 0x28b37c: 0x7fb70280  sq          $s7, 0x280($sp)
    ctx->pc = 0x28b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 23));
label_28b380:
    // 0x28b380: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x28b380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
label_28b384:
    // 0x28b384: 0xe7b60310  swc1        $f22, 0x310($sp)
    ctx->pc = 0x28b384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_28b388:
    // 0x28b388: 0xe7b50308  swc1        $f21, 0x308($sp)
    ctx->pc = 0x28b388u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_28b38c:
    // 0x28b38c: 0xe7b40300  swc1        $f20, 0x300($sp)
    ctx->pc = 0x28b38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_28b390:
    // 0x28b390: 0xafa5023c  sw          $a1, 0x23C($sp)
    ctx->pc = 0x28b390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 5));
label_28b394:
    // 0x28b394: 0x7fbe0270  sq          $fp, 0x270($sp)
    ctx->pc = 0x28b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 30));
label_28b398:
    // 0x28b398: 0x8e9e0000  lw          $fp, 0x0($s4)
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28b39c:
    // 0x28b39c: 0xc089f98  jal         func_227E60
label_28b3a0:
    if (ctx->pc == 0x28B3A0u) {
        ctx->pc = 0x28B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B39Cu;
        // 0x28b3a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3A4u;
        goto label_28b3a4;
    }
    ctx->pc = 0x28B39Cu;
    SET_GPR_U32(ctx, 31, 0x28B3A4u);
    ctx->pc = 0x28B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B39Cu;
    // 0x28b3a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x28B39Cu, 0x28B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3A4u;
label_28b3a4:
    // 0x28b3a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b3a8:
    // 0x28b3a8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_28b3ac:
    if (ctx->pc == 0x28B3ACu) {
        ctx->pc = 0x28B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A8u;
        // 0x28b3ac: 0x27c40090  addiu       $a0, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3B0u;
        goto label_28b3b0;
    }
    ctx->pc = 0x28B3A8u;
    {
        const bool branch_taken_0x28b3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A8u;
        // 0x28b3ac: 0x27c40090  addiu       $a0, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3a8) {
            ctx->pc = 0x28B3DCu;
            goto label_28b3dc;
        }
    }
    ctx->pc = 0x28B3B0u;
label_28b3b0:
    // 0x28b3b0: 0x26900164  addiu       $s0, $s4, 0x164
    ctx->pc = 0x28b3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
label_28b3b4:
    // 0x28b3b4: 0xc137832  jal         func_4DE0C8
label_28b3b8:
    if (ctx->pc == 0x28B3B8u) {
        ctx->pc = 0x28B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B4u;
        // 0x28b3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3BCu;
        goto label_28b3bc;
    }
    ctx->pc = 0x28B3B4u;
    SET_GPR_U32(ctx, 31, 0x28B3BCu);
    ctx->pc = 0x28B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3B4u;
    // 0x28b3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x28B3B4u, 0x28B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3BCu;
label_28b3bc:
    // 0x28b3bc: 0x54400194  bnel        $v0, $zero, . + 4 + (0x194 << 2)
label_28b3c0:
    if (ctx->pc == 0x28B3C0u) {
        ctx->pc = 0x28B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3BCu;
        // 0x28b3c0: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3C4u;
        goto label_28b3c4;
    }
    ctx->pc = 0x28B3BCu;
    {
        const bool branch_taken_0x28b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b3bc) {
            ctx->pc = 0x28B3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B3BCu;
            // 0x28b3c0: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BA10u;
            goto label_28ba10;
        }
    }
    ctx->pc = 0x28B3C4u;
label_28b3c4:
    // 0x28b3c4: 0xc0a3bd2  jal         func_28EF48
label_28b3c8:
    if (ctx->pc == 0x28B3C8u) {
        ctx->pc = 0x28B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C4u;
        // 0x28b3c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3CCu;
        goto label_28b3cc;
    }
    ctx->pc = 0x28B3C4u;
    SET_GPR_U32(ctx, 31, 0x28B3CCu);
    ctx->pc = 0x28B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3C4u;
    // 0x28b3c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x28B3C4u, 0x28B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3CCu;
label_28b3cc:
    // 0x28b3cc: 0xc13782a  jal         func_4DE0A8
label_28b3d0:
    if (ctx->pc == 0x28B3D0u) {
        ctx->pc = 0x28B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3CCu;
        // 0x28b3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3D4u;
        goto label_28b3d4;
    }
    ctx->pc = 0x28B3CCu;
    SET_GPR_U32(ctx, 31, 0x28B3D4u);
    ctx->pc = 0x28B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3CCu;
    // 0x28b3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x28B3CCu, 0x28B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3D4u;
label_28b3d4:
    // 0x28b3d4: 0x1000018e  b           . + 4 + (0x18E << 2)
label_28b3d8:
    if (ctx->pc == 0x28B3D8u) {
        ctx->pc = 0x28B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D4u;
        // 0x28b3d8: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3DCu;
        goto label_28b3dc;
    }
    ctx->pc = 0x28B3D4u;
    {
        const bool branch_taken_0x28b3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D4u;
        // 0x28b3d8: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3d4) {
            ctx->pc = 0x28BA10u;
            goto label_28ba10;
        }
    }
    ctx->pc = 0x28B3DCu;
label_28b3dc:
    // 0x28b3dc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x28b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_28b3e0:
    // 0x28b3e0: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x28b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
label_28b3e4:
    // 0x28b3e4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x28b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_28b3e8:
    // 0x28b3e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28b3e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b3ec:
    // 0x28b3ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b3f0:
    // 0x28b3f0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x28b3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_28b3f4:
    // 0x28b3f4: 0x8e85020c  lw          $a1, 0x20C($s4)
    ctx->pc = 0x28b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_28b3f8:
    // 0x28b3f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28b3fc:
    // 0x28b3fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_28b400:
    // 0x28b400: 0xafa50240  sw          $a1, 0x240($sp)
    ctx->pc = 0x28b400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 5));
label_28b404:
    // 0x28b404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28b408:
    // 0x28b408: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28b408u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28b40c:
    // 0x28b40c: 0x26820164  addiu       $v0, $s4, 0x164
    ctx->pc = 0x28b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
label_28b410:
    // 0x28b410: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x28b410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_28b414:
    // 0x28b414: 0xc0a2fc0  jal         func_28BF00
label_28b418:
    if (ctx->pc == 0x28B418u) {
        ctx->pc = 0x28B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B414u;
        // 0x28b418: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B41Cu;
        goto label_28b41c;
    }
    ctx->pc = 0x28B414u;
    SET_GPR_U32(ctx, 31, 0x28B41Cu);
    ctx->pc = 0x28B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B414u;
    // 0x28b418: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x28B414u, 0x28B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B41Cu;
label_28b41c:
    // 0x28b41c: 0x46000582  mul.s       $f22, $f0, $f0
    ctx->pc = 0x28b41cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28b420:
    // 0x28b420: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28b420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_28b424:
    // 0x28b424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28b424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b428:
    // 0x28b428: 0xc680012c  lwc1        $f0, 0x12C($s4)
    ctx->pc = 0x28b428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b42c:
    // 0x28b42c: 0xc12e29c  jal         func_4B8A70
label_28b430:
    if (ctx->pc == 0x28B430u) {
        ctx->pc = 0x28B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B42Cu;
        // 0x28b430: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B434u;
        goto label_28b434;
    }
    ctx->pc = 0x28B42Cu;
    SET_GPR_U32(ctx, 31, 0x28B434u);
    ctx->pc = 0x28B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B42Cu;
    // 0x28b430: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x28B42Cu, 0x28B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B434u;
label_28b434:
    // 0x28b434: 0x27a30230  addiu       $v1, $sp, 0x230
    ctx->pc = 0x28b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_28b438:
    // 0x28b438: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28b438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28b43c:
    // 0x28b43c: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x28b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
label_28b440:
    // 0x28b440: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x28b440u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_28b444:
    // 0x28b444: 0xafa4025c  sw          $a0, 0x25C($sp)
    ctx->pc = 0x28b444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 4));
label_28b448:
    // 0x28b448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b44c:
    // 0x28b44c: 0x0  nop
    ctx->pc = 0x28b44cu;
    // NOP
label_28b450:
    // 0x28b450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28b450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28b454:
    // 0x28b454: 0xc05b0e2  jal         func_16C388
label_28b458:
    if (ctx->pc == 0x28B458u) {
        ctx->pc = 0x28B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B454u;
        // 0x28b458: 0xafb00258  sw          $s0, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B45Cu;
        goto label_28b45c;
    }
    ctx->pc = 0x28B454u;
    SET_GPR_U32(ctx, 31, 0x28B45Cu);
    ctx->pc = 0x28B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B454u;
    // 0x28b458: 0xafb00258  sw          $s0, 0x258($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x28B454u, 0x28B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B45Cu;
label_28b45c:
    // 0x28b45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b460:
    // 0x28b460: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_28b464:
    // 0x28b464: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_28b468:
    if (ctx->pc == 0x28B468u) {
        ctx->pc = 0x28B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B464u;
        // 0x28b468: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B46Cu;
        goto label_28b46c;
    }
    ctx->pc = 0x28B464u;
    {
        const bool branch_taken_0x28b464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B464u;
        // 0x28b468: 0x8fa40240  lw          $a0, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b464) {
            ctx->pc = 0x28B704u;
            goto label_28b704;
        }
    }
    ctx->pc = 0x28B46Cu;
label_28b46c:
    // 0x28b46c: 0xc05a3f8  jal         func_168FE0
label_28b470:
    if (ctx->pc == 0x28B470u) {
        ctx->pc = 0x28B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B46Cu;
        // 0x28b470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B474u;
        goto label_28b474;
    }
    ctx->pc = 0x28B46Cu;
    SET_GPR_U32(ctx, 31, 0x28B474u);
    ctx->pc = 0x28B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B46Cu;
    // 0x28b470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x28B46Cu, 0x28B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B474u;
label_28b474:
    // 0x28b474: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_28b478:
    if (ctx->pc == 0x28B478u) {
        ctx->pc = 0x28B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B474u;
        // 0x28b478: 0x1720c0  sll         $a0, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B47Cu;
        goto label_28b47c;
    }
    ctx->pc = 0x28B474u;
    {
        const bool branch_taken_0x28b474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B474u;
        // 0x28b478: 0x1720c0  sll         $a0, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b474) {
            ctx->pc = 0x28B704u;
            goto label_28b704;
        }
    }
    ctx->pc = 0x28B47Cu;
label_28b47c:
    // 0x28b47c: 0x920200dc  lbu         $v0, 0xDC($s0)
    ctx->pc = 0x28b47cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_28b480:
    // 0x28b480: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_28b484:
    // 0x28b484: 0x8fa5025c  lw          $a1, 0x25C($sp)
    ctx->pc = 0x28b484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_28b488:
    // 0x28b488: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x28b488u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28b48c:
    // 0x28b48c: 0xafb00244  sw          $s0, 0x244($sp)
    ctx->pc = 0x28b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 16));
label_28b490:
    // 0x28b490: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x28b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_28b494:
    // 0x28b494: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x28b494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28b498:
    // 0x28b498: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28b498u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b49c:
    // 0x28b49c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28b49cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b4a0:
    // 0x28b4a0: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x28b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_28b4a4:
    // 0x28b4a4: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x28b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_28b4a8:
    // 0x28b4a8: 0xc137866  jal         func_4DE198
label_28b4ac:
    if (ctx->pc == 0x28B4ACu) {
        ctx->pc = 0x28B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A8u;
        // 0x28b4ac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4B0u;
        goto label_28b4b0;
    }
    ctx->pc = 0x28B4A8u;
    SET_GPR_U32(ctx, 31, 0x28B4B0u);
    ctx->pc = 0x28B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4A8u;
    // 0x28b4ac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x28B4A8u, 0x28B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4B0u;
label_28b4b0:
    // 0x28b4b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b4b4:
    // 0x28b4b4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x28b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_28b4b8:
    // 0x28b4b8: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x28b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_28b4bc:
    // 0x28b4bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b4c0:
    // 0x28b4c0: 0x5043008d  beql        $v0, $v1, . + 4 + (0x8D << 2)
label_28b4c4:
    if (ctx->pc == 0x28B4C4u) {
        ctx->pc = 0x28B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4C0u;
        // 0x28b4c4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4C8u;
        goto label_28b4c8;
    }
    ctx->pc = 0x28B4C0u;
    {
        const bool branch_taken_0x28b4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b4c0) {
            ctx->pc = 0x28B4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B4C0u;
            // 0x28b4c4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B4C8u;
label_28b4c8:
    // 0x28b4c8: 0xc0e409a  jal         func_390268
label_28b4cc:
    if (ctx->pc == 0x28B4CCu) {
        ctx->pc = 0x28B4D0u;
        goto label_28b4d0;
    }
    ctx->pc = 0x28B4C8u;
    SET_GPR_U32(ctx, 31, 0x28B4D0u);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28B4C8u, 0x28B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4D0u;
label_28b4d0:
    // 0x28b4d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b4d4:
    // 0x28b4d4: 0x12000087  beqz        $s0, . + 4 + (0x87 << 2)
label_28b4d8:
    if (ctx->pc == 0x28B4D8u) {
        ctx->pc = 0x28B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D4u;
        // 0x28b4d8: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4DCu;
        goto label_28b4dc;
    }
    ctx->pc = 0x28B4D4u;
    {
        const bool branch_taken_0x28b4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D4u;
        // 0x28b4d8: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d4) {
            ctx->pc = 0x28B6F4u;
            goto label_28b6f4;
        }
    }
    ctx->pc = 0x28B4DCu;
label_28b4dc:
    // 0x28b4dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b4e0:
    // 0x28b4e0: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x28b4e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_28b4e4:
    // 0x28b4e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28b4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b4e8:
    // 0x28b4e8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x28b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_28b4ec:
    // 0x28b4ec: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_28b4f0:
    // 0x28b4f0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x28b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_28b4f4:
    // 0x28b4f4: 0xc0cdb38  jal         func_336CE0
label_28b4f8:
    if (ctx->pc == 0x28B4F8u) {
        ctx->pc = 0x28B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4F4u;
        // 0x28b4f8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4FCu;
        goto label_28b4fc;
    }
    ctx->pc = 0x28B4F4u;
    SET_GPR_U32(ctx, 31, 0x28B4FCu);
    ctx->pc = 0x28B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4F4u;
    // 0x28b4f8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28B4F4u, 0x28B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4FCu;
label_28b4fc:
    // 0x28b4fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28b4fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28b500:
    // 0x28b500: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x28b500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b504:
    // 0x28b504: 0x0  nop
    ctx->pc = 0x28b504u;
    // NOP
label_28b508:
    // 0x28b508: 0x4503007b  bc1tl       . + 4 + (0x7B << 2)
label_28b50c:
    if (ctx->pc == 0x28B50Cu) {
        ctx->pc = 0x28B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B508u;
        // 0x28b50c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B510u;
        goto label_28b510;
    }
    ctx->pc = 0x28B508u;
    {
        const bool branch_taken_0x28b508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b508) {
            ctx->pc = 0x28B50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B508u;
            // 0x28b50c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B510u;
label_28b510:
    // 0x28b510: 0xc087502  jal         func_21D408
label_28b514:
    if (ctx->pc == 0x28B514u) {
        ctx->pc = 0x28B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B510u;
        // 0x28b514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B518u;
        goto label_28b518;
    }
    ctx->pc = 0x28B510u;
    SET_GPR_U32(ctx, 31, 0x28B518u);
    ctx->pc = 0x28B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B510u;
    // 0x28b514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28B510u, 0x28B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B518u;
label_28b518:
    // 0x28b518: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28b518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_28b51c:
    // 0x28b51c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b520:
    // 0x28b520: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x28b520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_28b524:
    // 0x28b524: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28b524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b528:
    // 0x28b528: 0x0  nop
    ctx->pc = 0x28b528u;
    // NOP
label_28b52c:
    // 0x28b52c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28b530:
    if (ctx->pc == 0x28B530u) {
        ctx->pc = 0x28B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B52Cu;
        // 0x28b530: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B534u;
        goto label_28b534;
    }
    ctx->pc = 0x28B52Cu;
    {
        const bool branch_taken_0x28b52c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B52Cu;
        // 0x28b530: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b52c) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B534u;
label_28b534:
    // 0x28b534: 0x50750070  beql        $v1, $s5, . + 4 + (0x70 << 2)
label_28b538:
    if (ctx->pc == 0x28B538u) {
        ctx->pc = 0x28B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B534u;
        // 0x28b538: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B53Cu;
        goto label_28b53c;
    }
    ctx->pc = 0x28B534u;
    {
        const bool branch_taken_0x28b534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x28b534) {
            ctx->pc = 0x28B538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B534u;
            // 0x28b538: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B53Cu;
label_28b53c:
    // 0x28b53c: 0x10000006  b           . + 4 + (0x6 << 2)
label_28b540:
    if (ctx->pc == 0x28B540u) {
        ctx->pc = 0x28B544u;
        goto label_28b544;
    }
    ctx->pc = 0x28B53Cu;
    {
        const bool branch_taken_0x28b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b53c) {
            ctx->pc = 0x28B558u;
            goto label_28b558;
        }
    }
    ctx->pc = 0x28B544u;
label_28b544:
    // 0x28b544: 0x14750004  bne         $v1, $s5, . + 4 + (0x4 << 2)
label_28b548:
    if (ctx->pc == 0x28B548u) {
        ctx->pc = 0x28B54Cu;
        goto label_28b54c;
    }
    ctx->pc = 0x28B544u;
    {
        const bool branch_taken_0x28b544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x28b544) {
            ctx->pc = 0x28B558u;
            goto label_28b558;
        }
    }
    ctx->pc = 0x28B54Cu;
label_28b54c:
    // 0x28b54c: 0x928202d5  lbu         $v0, 0x2D5($s4)
    ctx->pc = 0x28b54cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 725)));
label_28b550:
    // 0x28b550: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
label_28b554:
    if (ctx->pc == 0x28B554u) {
        ctx->pc = 0x28B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B550u;
        // 0x28b554: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B558u;
        goto label_28b558;
    }
    ctx->pc = 0x28B550u;
    {
        const bool branch_taken_0x28b550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b550) {
            ctx->pc = 0x28B554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B550u;
            // 0x28b554: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B558u;
label_28b558:
    // 0x28b558: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
label_28b55c:
    if (ctx->pc == 0x28B55Cu) {
        ctx->pc = 0x28B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B558u;
        // 0x28b55c: 0x8fa3023c  lw          $v1, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B560u;
        goto label_28b560;
    }
    ctx->pc = 0x28B558u;
    {
        const bool branch_taken_0x28b558 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B558u;
        // 0x28b55c: 0x8fa3023c  lw          $v1, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b558) {
            ctx->pc = 0x28B574u;
            goto label_28b574;
        }
    }
    ctx->pc = 0x28B560u;
label_28b560:
    // 0x28b560: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28b560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b564:
    // 0x28b564: 0xc088976  jal         func_2225D8
label_28b568:
    if (ctx->pc == 0x28B568u) {
        ctx->pc = 0x28B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B564u;
        // 0x28b568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B56Cu;
        goto label_28b56c;
    }
    ctx->pc = 0x28B564u;
    SET_GPR_U32(ctx, 31, 0x28B56Cu);
    ctx->pc = 0x28B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B564u;
    // 0x28b568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225D8u, 0x28B564u, 0x28B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B56Cu;
label_28b56c:
    // 0x28b56c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_28b570:
    if (ctx->pc == 0x28B570u) {
        ctx->pc = 0x28B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B56Cu;
        // 0x28b570: 0x8fa3023c  lw          $v1, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B574u;
        goto label_28b574;
    }
    ctx->pc = 0x28B56Cu;
    {
        const bool branch_taken_0x28b56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B56Cu;
        // 0x28b570: 0x8fa3023c  lw          $v1, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b56c) {
            ctx->pc = 0x28B6F4u;
            goto label_28b6f4;
        }
    }
    ctx->pc = 0x28B574u;
label_28b574:
    // 0x28b574: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28b574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b578:
    // 0x28b578: 0x60f809  jalr        $v1
label_28b57c:
    if (ctx->pc == 0x28B57Cu) {
        ctx->pc = 0x28B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B578u;
        // 0x28b57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B580u;
        goto label_28b580;
    }
    ctx->pc = 0x28B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28B580u);
        ctx->pc = 0x28B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B578u;
        // 0x28b57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B578u, 0x28B580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B580u;
label_28b580:
    // 0x28b580: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_28b584:
    if (ctx->pc == 0x28B584u) {
        ctx->pc = 0x28B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B580u;
        // 0x28b584: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B588u;
        goto label_28b588;
    }
    ctx->pc = 0x28B580u;
    {
        const bool branch_taken_0x28b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b580) {
            ctx->pc = 0x28B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B580u;
            // 0x28b584: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B588u;
label_28b588:
    // 0x28b588: 0x56600057  bnel        $s3, $zero, . + 4 + (0x57 << 2)
label_28b58c:
    if (ctx->pc == 0x28B58Cu) {
        ctx->pc = 0x28B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B588u;
        // 0x28b58c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B590u;
        goto label_28b590;
    }
    ctx->pc = 0x28B588u;
    {
        const bool branch_taken_0x28b588 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b588) {
            ctx->pc = 0x28B58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B588u;
            // 0x28b58c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6E8u;
            goto label_28b6e8;
        }
    }
    ctx->pc = 0x28B590u;
label_28b590:
    // 0x28b590: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x28b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_28b594:
    // 0x28b594: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x28b594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_28b598:
    // 0x28b598: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28b598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b59c:
    // 0x28b59c: 0x14550009  bne         $v0, $s5, . + 4 + (0x9 << 2)
label_28b5a0:
    if (ctx->pc == 0x28B5A0u) {
        ctx->pc = 0x28B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B59Cu;
        // 0x28b5a0: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5A4u;
        goto label_28b5a4;
    }
    ctx->pc = 0x28B59Cu;
    {
        const bool branch_taken_0x28b59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x28B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B59Cu;
        // 0x28b5a0: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b59c) {
            ctx->pc = 0x28B5C4u;
            goto label_28b5c4;
        }
    }
    ctx->pc = 0x28B5A4u;
label_28b5a4:
    // 0x28b5a4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x28b5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_28b5a8:
    // 0x28b5a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_28b5ac:
    // 0x28b5ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28b5b0:
    if (ctx->pc == 0x28B5B0u) {
        ctx->pc = 0x28B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5ACu;
        // 0x28b5b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5B4u;
        goto label_28b5b4;
    }
    ctx->pc = 0x28B5ACu;
    {
        const bool branch_taken_0x28b5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5ACu;
        // 0x28b5b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5ac) {
            ctx->pc = 0x28B5C8u;
            goto label_28b5c8;
        }
    }
    ctx->pc = 0x28B5B4u;
label_28b5b4:
    // 0x28b5b4: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x28b5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
label_28b5b8:
    // 0x28b5b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28b5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b5bc:
    // 0x28b5bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_28b5c0:
    if (ctx->pc == 0x28B5C0u) {
        ctx->pc = 0x28B5C4u;
        goto label_28b5c4;
    }
    ctx->pc = 0x28B5BCu;
    {
        const bool branch_taken_0x28b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b5bc) {
            ctx->pc = 0x28B5E8u;
            goto label_28b5e8;
        }
    }
    ctx->pc = 0x28B5C4u;
label_28b5c4:
    // 0x28b5c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28b5c8:
    // 0x28b5c8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x28b5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b5cc:
    // 0x28b5cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28b5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_28b5d0:
    // 0x28b5d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28b5d4:
    if (ctx->pc == 0x28B5D4u) {
        ctx->pc = 0x28B5D8u;
        goto label_28b5d8;
    }
    ctx->pc = 0x28B5D0u;
    {
        const bool branch_taken_0x28b5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b5d0) {
            ctx->pc = 0x28B5E8u;
            goto label_28b5e8;
        }
    }
    ctx->pc = 0x28B5D8u;
label_28b5d8:
    // 0x28b5d8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x28b5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_28b5dc:
    // 0x28b5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b5e0:
    // 0x28b5e0: 0x0  nop
    ctx->pc = 0x28b5e0u;
    // NOP
label_28b5e4:
    // 0x28b5e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28b5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28b5e8:
    // 0x28b5e8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x28b5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b5ec:
    // 0x28b5ec: 0x0  nop
    ctx->pc = 0x28b5ecu;
    // NOP
label_28b5f0:
    // 0x28b5f0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_28b5f4:
    if (ctx->pc == 0x28B5F4u) {
        ctx->pc = 0x28B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F0u;
        // 0x28b5f4: 0x86430002  lh          $v1, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5F8u;
        goto label_28b5f8;
    }
    ctx->pc = 0x28B5F0u;
    {
        const bool branch_taken_0x28b5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b5f0) {
            ctx->pc = 0x28B5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B5F0u;
            // 0x28b5f4: 0x86430002  lh          $v1, 0x2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B60Cu;
            goto label_28b60c;
        }
    }
    ctx->pc = 0x28B5F8u;
label_28b5f8:
    // 0x28b5f8: 0xc088f14  jal         func_223C50
label_28b5fc:
    if (ctx->pc == 0x28B5FCu) {
        ctx->pc = 0x28B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F8u;
        // 0x28b5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B600u;
        goto label_28b600;
    }
    ctx->pc = 0x28B5F8u;
    SET_GPR_U32(ctx, 31, 0x28B600u);
    ctx->pc = 0x28B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B5F8u;
    // 0x28b5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C50u, 0x28B5F8u, 0x28B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B600u;
label_28b600:
    // 0x28b600: 0x14550032  bne         $v0, $s5, . + 4 + (0x32 << 2)
label_28b604:
    if (ctx->pc == 0x28B604u) {
        ctx->pc = 0x28B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B600u;
        // 0x28b604: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B608u;
        goto label_28b608;
    }
    ctx->pc = 0x28B600u;
    {
        const bool branch_taken_0x28b600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x28B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B600u;
        // 0x28b604: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b600) {
            ctx->pc = 0x28B6CCu;
            goto label_28b6cc;
        }
    }
    ctx->pc = 0x28B608u;
label_28b608:
    // 0x28b608: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x28b608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_28b60c:
    // 0x28b60c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x28b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_28b610:
    // 0x28b610: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x28b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_28b614:
    // 0x28b614: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x28b614u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28b618:
    // 0x28b618: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_28b61c:
    // 0x28b61c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x28b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_28b620:
    // 0x28b620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b624:
    // 0x28b624: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x28b624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_28b628:
    // 0x28b628: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x28b628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_28b62c:
    // 0x28b62c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x28b62cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_28b630:
    // 0x28b630: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x28b630u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_28b634:
    // 0x28b634: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x28b634u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_28b638:
    // 0x28b638: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x28b638u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_28b63c:
    // 0x28b63c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x28b63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_28b640:
    // 0x28b640: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x28b640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_28b644:
    // 0x28b644: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x28b644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_28b648:
    // 0x28b648: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x28b648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_28b64c:
    // 0x28b64c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x28b64cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_28b650:
    // 0x28b650: 0x4a0003bf  vwaitq
    ctx->pc = 0x28b650u;
    // VWAITQ (Q already resolved in this runtime)
label_28b654:
    // 0x28b654: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x28b654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_28b658:
    // 0x28b658: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x28b658u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_28b65c:
    // 0x28b65c: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x28b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_28b660:
    // 0x28b660: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x28b660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_28b664:
    // 0x28b664: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x28b664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_28b668:
    // 0x28b668: 0x7fa301f0  sq          $v1, 0x1F0($sp)
    ctx->pc = 0x28b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 3));
label_28b66c:
    // 0x28b66c: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x28b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_28b670:
    // 0x28b670: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x28b670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_28b674:
    // 0x28b674: 0x7fa30210  sq          $v1, 0x210($sp)
    ctx->pc = 0x28b674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 3));
label_28b678:
    // 0x28b678: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_28b67c:
    // 0x28b67c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_28b680:
    // 0x28b680: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x28b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_28b684:
    // 0x28b684: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_28b688:
    // 0x28b688: 0xc0cd8ec  jal         func_3363B0
label_28b68c:
    if (ctx->pc == 0x28B68Cu) {
        ctx->pc = 0x28B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B688u;
        // 0x28b68c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B690u;
        goto label_28b690;
    }
    ctx->pc = 0x28B688u;
    SET_GPR_U32(ctx, 31, 0x28B690u);
    ctx->pc = 0x28B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B688u;
    // 0x28b68c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x28B688u, 0x28B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B690u;
label_28b690:
    // 0x28b690: 0x7ba301f0  lq          $v1, 0x1F0($sp)
    ctx->pc = 0x28b690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_28b694:
    // 0x28b694: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x28b694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_28b698:
    // 0x28b698: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x28b698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_28b69c:
    // 0x28b69c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x28b69cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_28b6a0:
    // 0x28b6a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x28b6a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_28b6a4:
    // 0x28b6a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x28b6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_28b6a8:
    // 0x28b6a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x28b6a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_28b6ac:
    // 0x28b6ac: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x28b6acu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_28b6b0:
    // 0x28b6b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28b6b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b6b4:
    // 0x28b6b4: 0x0  nop
    ctx->pc = 0x28b6b4u;
    // NOP
label_28b6b8:
    // 0x28b6b8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x28b6b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b6bc:
    // 0x28b6bc: 0x0  nop
    ctx->pc = 0x28b6bcu;
    // NOP
label_28b6c0:
    // 0x28b6c0: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_28b6c4:
    if (ctx->pc == 0x28B6C4u) {
        ctx->pc = 0x28B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6C0u;
        // 0x28b6c4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6C8u;
        goto label_28b6c8;
    }
    ctx->pc = 0x28B6C0u;
    {
        const bool branch_taken_0x28b6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b6c0) {
            ctx->pc = 0x28B6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B6C0u;
            // 0x28b6c4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B6C8u;
label_28b6c8:
    // 0x28b6c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28b6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b6cc:
    // 0x28b6cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b6d0:
    // 0x28b6d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b6d4:
    // 0x28b6d4: 0xc0888a2  jal         func_222288
label_28b6d8:
    if (ctx->pc == 0x28B6D8u) {
        ctx->pc = 0x28B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6D4u;
        // 0x28b6d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6DCu;
        goto label_28b6dc;
    }
    ctx->pc = 0x28B6D4u;
    SET_GPR_U32(ctx, 31, 0x28B6DCu);
    ctx->pc = 0x28B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B6D4u;
    // 0x28b6d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x28B6D4u, 0x28B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6DCu;
label_28b6dc:
    // 0x28b6dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_28b6e0:
    if (ctx->pc == 0x28B6E0u) {
        ctx->pc = 0x28B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6DCu;
        // 0x28b6e0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6E4u;
        goto label_28b6e4;
    }
    ctx->pc = 0x28B6DCu;
    {
        const bool branch_taken_0x28b6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6dc) {
            ctx->pc = 0x28B6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B6DCu;
            // 0x28b6e0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B6E4u;
label_28b6e4:
    // 0x28b6e4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x28b6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_28b6e8:
    // 0x28b6e8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28b6e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b6ec:
    // 0x28b6ec: 0xe634fffc  swc1        $f20, -0x4($s1)
    ctx->pc = 0x28b6ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), bits); }
label_28b6f0:
    // 0x28b6f0: 0xae30fff8  sw          $s0, -0x8($s1)
    ctx->pc = 0x28b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 16));
label_28b6f4:
    // 0x28b6f4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28b6f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28b6f8:
    // 0x28b6f8: 0x2ec20010  sltiu       $v0, $s6, 0x10
    ctx->pc = 0x28b6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28b6fc:
    // 0x28b6fc: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
label_28b700:
    if (ctx->pc == 0x28B700u) {
        ctx->pc = 0x28B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6FCu;
        // 0x28b700: 0x8fa40244  lw          $a0, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B704u;
        goto label_28b704;
    }
    ctx->pc = 0x28B6FCu;
    {
        const bool branch_taken_0x28b6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6FCu;
        // 0x28b700: 0x8fa40244  lw          $a0, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6fc) {
            ctx->pc = 0x28B4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b4a8;
        }
    }
    ctx->pc = 0x28B704u;
label_28b704:
    // 0x28b704: 0x8fa50258  lw          $a1, 0x258($sp)
    ctx->pc = 0x28b704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_28b708:
    // 0x28b708: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x28b708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_28b70c:
    // 0x28b70c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x28b70cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_28b710:
    // 0x28b710: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x28b710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_28b714:
    // 0x28b714: 0x5460ff4e  bnel        $v1, $zero, . + 4 + (-0xB2 << 2)
label_28b718:
    if (ctx->pc == 0x28B718u) {
        ctx->pc = 0x28B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B714u;
        // 0x28b718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B71Cu;
        goto label_28b71c;
    }
    ctx->pc = 0x28B714u;
    {
        const bool branch_taken_0x28b714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b714) {
            ctx->pc = 0x28B718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B714u;
            // 0x28b718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b450;
        }
    }
    ctx->pc = 0x28B71Cu;
label_28b71c:
    // 0x28b71c: 0x8e83020c  lw          $v1, 0x20C($s4)
    ctx->pc = 0x28b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_28b720:
    // 0x28b720: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x28b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_28b724:
    // 0x28b724: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x28b724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_28b728:
    // 0x28b728: 0xc0e409a  jal         func_390268
label_28b72c:
    if (ctx->pc == 0x28B72Cu) {
        ctx->pc = 0x28B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B728u;
        // 0x28b72c: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B730u;
        goto label_28b730;
    }
    ctx->pc = 0x28B728u;
    SET_GPR_U32(ctx, 31, 0x28B730u);
    ctx->pc = 0x28B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B728u;
    // 0x28b72c: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28B728u, 0x28B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B730u;
label_28b730:
    // 0x28b730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28b730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b734:
    // 0x28b734: 0xc0a34d6  jal         func_28D358
label_28b738:
    if (ctx->pc == 0x28B738u) {
        ctx->pc = 0x28B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B734u;
        // 0x28b738: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B73Cu;
        goto label_28b73c;
    }
    ctx->pc = 0x28B734u;
    SET_GPR_U32(ctx, 31, 0x28B73Cu);
    ctx->pc = 0x28B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B734u;
    // 0x28b738: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x28B734u, 0x28B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B73Cu;
label_28b73c:
    // 0x28b73c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b740:
    // 0x28b740: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_28b744:
    if (ctx->pc == 0x28B744u) {
        ctx->pc = 0x28B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B740u;
        // 0x28b744: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B748u;
        goto label_28b748;
    }
    ctx->pc = 0x28B740u;
    {
        const bool branch_taken_0x28b740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B740u;
        // 0x28b744: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b740) {
            ctx->pc = 0x28B774u;
            goto label_28b774;
        }
    }
    ctx->pc = 0x28B748u;
label_28b748:
    // 0x28b748: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28b74c:
    // 0x28b74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b750:
    // 0x28b750: 0xc0e1a54  jal         func_386950
label_28b754:
    if (ctx->pc == 0x28B754u) {
        ctx->pc = 0x28B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B750u;
        // 0x28b754: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B758u;
        goto label_28b758;
    }
    ctx->pc = 0x28B750u;
    SET_GPR_U32(ctx, 31, 0x28B758u);
    ctx->pc = 0x28B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B750u;
    // 0x28b754: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386950u, 0x28B750u, 0x28B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B758u;
label_28b758:
    // 0x28b758: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_28b75c:
    if (ctx->pc == 0x28B75Cu) {
        ctx->pc = 0x28B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B758u;
        // 0x28b75c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B760u;
        goto label_28b760;
    }
    ctx->pc = 0x28B758u;
    {
        const bool branch_taken_0x28b758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B758u;
        // 0x28b75c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b758) {
            ctx->pc = 0x28B778u;
            goto label_28b778;
        }
    }
    ctx->pc = 0x28B760u;
label_28b760:
    // 0x28b760: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x28b760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_28b764:
    // 0x28b764: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28b768:
    // 0x28b768: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28b768u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b76c:
    // 0x28b76c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_28b770:
    // 0x28b770: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28b770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_28b774:
    // 0x28b774: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x28b774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_28b778:
    // 0x28b778: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x28b778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_28b77c:
    // 0x28b77c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x28b77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_28b780:
    // 0x28b780: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x28b780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_28b784:
    // 0x28b784: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b788:
    // 0x28b788: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28b788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b78c:
    // 0x28b78c: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x28b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_28b790:
    // 0x28b790: 0xc137826  jal         func_4DE098
label_28b794:
    if (ctx->pc == 0x28B794u) {
        ctx->pc = 0x28B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B790u;
        // 0x28b794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B798u;
        goto label_28b798;
    }
    ctx->pc = 0x28B790u;
    SET_GPR_U32(ctx, 31, 0x28B798u);
    ctx->pc = 0x28B794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B790u;
    // 0x28b794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28B790u, 0x28B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B798u;
label_28b798:
    // 0x28b798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b79c:
    // 0x28b79c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_28b7a0:
    // 0x28b7a0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x28b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_28b7a4:
    // 0x28b7a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b7a8:
    // 0x28b7a8: 0x50430038  beql        $v0, $v1, . + 4 + (0x38 << 2)
label_28b7ac:
    if (ctx->pc == 0x28B7ACu) {
        ctx->pc = 0x28B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7A8u;
        // 0x28b7ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7B0u;
        goto label_28b7b0;
    }
    ctx->pc = 0x28B7A8u;
    {
        const bool branch_taken_0x28b7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b7a8) {
            ctx->pc = 0x28B7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B7A8u;
            // 0x28b7ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B88Cu;
            goto label_28b88c;
        }
    }
    ctx->pc = 0x28B7B0u;
label_28b7b0:
    // 0x28b7b0: 0xc0e409a  jal         func_390268
label_28b7b4:
    if (ctx->pc == 0x28B7B4u) {
        ctx->pc = 0x28B7B8u;
        goto label_28b7b8;
    }
    ctx->pc = 0x28B7B0u;
    SET_GPR_U32(ctx, 31, 0x28B7B8u);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28B7B0u, 0x28B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7B8u;
label_28b7b8:
    // 0x28b7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b7bc:
    // 0x28b7bc: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
label_28b7c0:
    if (ctx->pc == 0x28B7C0u) {
        ctx->pc = 0x28B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7BCu;
        // 0x28b7c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7C4u;
        goto label_28b7c4;
    }
    ctx->pc = 0x28B7BCu;
    {
        const bool branch_taken_0x28b7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b7bc) {
            ctx->pc = 0x28B7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B7BCu;
            // 0x28b7c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B88Cu;
            goto label_28b88c;
        }
    }
    ctx->pc = 0x28B7C4u;
label_28b7c4:
    // 0x28b7c4: 0xc087502  jal         func_21D408
label_28b7c8:
    if (ctx->pc == 0x28B7C8u) {
        ctx->pc = 0x28B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7C4u;
        // 0x28b7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7CCu;
        goto label_28b7cc;
    }
    ctx->pc = 0x28B7C4u;
    SET_GPR_U32(ctx, 31, 0x28B7CCu);
    ctx->pc = 0x28B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7C4u;
    // 0x28b7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28B7C4u, 0x28B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7CCu;
label_28b7cc:
    // 0x28b7cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b7d0:
    // 0x28b7d0: 0xc0a3bcc  jal         func_28EF30
label_28b7d4:
    if (ctx->pc == 0x28B7D4u) {
        ctx->pc = 0x28B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7D0u;
        // 0x28b7d4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7D8u;
        goto label_28b7d8;
    }
    ctx->pc = 0x28B7D0u;
    SET_GPR_U32(ctx, 31, 0x28B7D8u);
    ctx->pc = 0x28B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7D0u;
    // 0x28b7d4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF30u, 0x28B7D0u, 0x28B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7D8u;
label_28b7d8:
    // 0x28b7d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28b7dc:
    // 0x28b7dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28b7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28b7e0:
    // 0x28b7e0: 0xc0e1a54  jal         func_386950
label_28b7e4:
    if (ctx->pc == 0x28B7E4u) {
        ctx->pc = 0x28B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7E0u;
        // 0x28b7e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7E8u;
        goto label_28b7e8;
    }
    ctx->pc = 0x28B7E0u;
    SET_GPR_U32(ctx, 31, 0x28B7E8u);
    ctx->pc = 0x28B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7E0u;
    // 0x28b7e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386950u, 0x28B7E0u, 0x28B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7E8u;
label_28b7e8:
    // 0x28b7e8: 0x10530027  beq         $v0, $s3, . + 4 + (0x27 << 2)
label_28b7ec:
    if (ctx->pc == 0x28B7ECu) {
        ctx->pc = 0x28B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7E8u;
        // 0x28b7ec: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7F0u;
        goto label_28b7f0;
    }
    ctx->pc = 0x28B7E8u;
    {
        const bool branch_taken_0x28b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x28B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7E8u;
        // 0x28b7ec: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7e8) {
            ctx->pc = 0x28B888u;
            goto label_28b888;
        }
    }
    ctx->pc = 0x28B7F0u;
label_28b7f0:
    // 0x28b7f0: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x28b7f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_28b7f4:
    // 0x28b7f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b7f8:
    // 0x28b7f8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x28b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_28b7fc:
    // 0x28b7fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_28b800:
    // 0x28b800: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x28b800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_28b804:
    // 0x28b804: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x28b804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_28b808:
    // 0x28b808: 0xc0cdb38  jal         func_336CE0
label_28b80c:
    if (ctx->pc == 0x28B80Cu) {
        ctx->pc = 0x28B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B808u;
        // 0x28b80c: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B810u;
        goto label_28b810;
    }
    ctx->pc = 0x28B808u;
    SET_GPR_U32(ctx, 31, 0x28B810u);
    ctx->pc = 0x28B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B808u;
    // 0x28b80c: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28B808u, 0x28B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B810u;
label_28b810:
    // 0x28b810: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28b810u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28b814:
    // 0x28b814: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x28b814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b818:
    // 0x28b818: 0x0  nop
    ctx->pc = 0x28b818u;
    // NOP
label_28b81c:
    // 0x28b81c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_28b820:
    if (ctx->pc == 0x28B820u) {
        ctx->pc = 0x28B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B81Cu;
        // 0x28b820: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B824u;
        goto label_28b824;
    }
    ctx->pc = 0x28B81Cu;
    {
        const bool branch_taken_0x28b81c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B81Cu;
        // 0x28b820: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b81c) {
            ctx->pc = 0x28B864u;
            goto label_28b864;
        }
    }
    ctx->pc = 0x28B824u;
label_28b824:
    // 0x28b824: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28b828:
    // 0x28b828: 0xc0a34d6  jal         func_28D358
label_28b82c:
    if (ctx->pc == 0x28B82Cu) {
        ctx->pc = 0x28B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B828u;
        // 0x28b82c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B830u;
        goto label_28b830;
    }
    ctx->pc = 0x28B828u;
    SET_GPR_U32(ctx, 31, 0x28B830u);
    ctx->pc = 0x28B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B828u;
    // 0x28b82c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x28B828u, 0x28B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B830u;
label_28b830:
    // 0x28b830: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_28b834:
    if (ctx->pc == 0x28B834u) {
        ctx->pc = 0x28B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B830u;
        // 0x28b834: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B838u;
        goto label_28b838;
    }
    ctx->pc = 0x28B830u;
    {
        const bool branch_taken_0x28b830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B830u;
        // 0x28b834: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b830) {
            ctx->pc = 0x28B864u;
            goto label_28b864;
        }
    }
    ctx->pc = 0x28B838u;
label_28b838:
    // 0x28b838: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x28b838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b83c:
    // 0x28b83c: 0x0  nop
    ctx->pc = 0x28b83cu;
    // NOP
label_28b840:
    // 0x28b840: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_28b844:
    if (ctx->pc == 0x28B844u) {
        ctx->pc = 0x28B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B840u;
        // 0x28b844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B848u;
        goto label_28b848;
    }
    ctx->pc = 0x28B840u;
    {
        const bool branch_taken_0x28b840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B840u;
        // 0x28b844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b840) {
            ctx->pc = 0x28B874u;
            goto label_28b874;
        }
    }
    ctx->pc = 0x28B848u;
label_28b848:
    // 0x28b848: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x28b848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28b84c:
    // 0x28b84c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b850:
    // 0x28b850: 0xc0888a2  jal         func_222288
label_28b854:
    if (ctx->pc == 0x28B854u) {
        ctx->pc = 0x28B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B850u;
        // 0x28b854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B858u;
        goto label_28b858;
    }
    ctx->pc = 0x28B850u;
    SET_GPR_U32(ctx, 31, 0x28B858u);
    ctx->pc = 0x28B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B850u;
    // 0x28b854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x28B850u, 0x28B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B858u;
label_28b858:
    // 0x28b858: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_28b85c:
    if (ctx->pc == 0x28B85Cu) {
        ctx->pc = 0x28B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B858u;
        // 0x28b85c: 0x1710c0  sll         $v0, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B860u;
        goto label_28b860;
    }
    ctx->pc = 0x28B858u;
    {
        const bool branch_taken_0x28b858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B858u;
        // 0x28b85c: 0x1710c0  sll         $v0, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b858) {
            ctx->pc = 0x28B878u;
            goto label_28b878;
        }
    }
    ctx->pc = 0x28B860u;
label_28b860:
    // 0x28b860: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x28b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_28b864:
    // 0x28b864: 0xc13788e  jal         func_4DE238
label_28b868:
    if (ctx->pc == 0x28B868u) {
        ctx->pc = 0x28B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B864u;
        // 0x28b868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B86Cu;
        goto label_28b86c;
    }
    ctx->pc = 0x28B864u;
    SET_GPR_U32(ctx, 31, 0x28B86Cu);
    ctx->pc = 0x28B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B864u;
    // 0x28b868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE238u, 0x28B864u, 0x28B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B86Cu;
label_28b86c:
    // 0x28b86c: 0x10000007  b           . + 4 + (0x7 << 2)
label_28b870:
    if (ctx->pc == 0x28B870u) {
        ctx->pc = 0x28B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B86Cu;
        // 0x28b870: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B874u;
        goto label_28b874;
    }
    ctx->pc = 0x28B86Cu;
    {
        const bool branch_taken_0x28b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B86Cu;
        // 0x28b870: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b86c) {
            ctx->pc = 0x28B88Cu;
            goto label_28b88c;
        }
    }
    ctx->pc = 0x28B874u;
label_28b874:
    // 0x28b874: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x28b874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_28b878:
    // 0x28b878: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x28b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_28b87c:
    // 0x28b87c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28b87cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28b880:
    // 0x28b880: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28b880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_28b884:
    // 0x28b884: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x28b884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28b888:
    // 0x28b888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28b888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28b88c:
    // 0x28b88c: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x28b88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28b890:
    // 0x28b890: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_28b894:
    if (ctx->pc == 0x28B894u) {
        ctx->pc = 0x28B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B890u;
        // 0x28b894: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B898u;
        goto label_28b898;
    }
    ctx->pc = 0x28B890u;
    {
        const bool branch_taken_0x28b890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B890u;
        // 0x28b894: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b890) {
            ctx->pc = 0x28B790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b790;
        }
    }
    ctx->pc = 0x28B898u;
label_28b898:
    // 0x28b898: 0x2ee20011  sltiu       $v0, $s7, 0x11
    ctx->pc = 0x28b898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_28b89c:
    // 0x28b89c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_28b8a0:
    if (ctx->pc == 0x28B8A0u) {
        ctx->pc = 0x28B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B89Cu;
        // 0x28b8a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8A4u;
        goto label_28b8a4;
    }
    ctx->pc = 0x28B89Cu;
    {
        const bool branch_taken_0x28b89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B89Cu;
        // 0x28b8a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b89c) {
            ctx->pc = 0x28B8B8u;
            goto label_28b8b8;
        }
    }
    ctx->pc = 0x28B8A4u;
label_28b8a4:
    // 0x28b8a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28b8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28b8a8:
    // 0x28b8a8: 0xc0e1a34  jal         func_3868D0
label_28b8ac:
    if (ctx->pc == 0x28B8ACu) {
        ctx->pc = 0x28B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8A8u;
        // 0x28b8ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8B0u;
        goto label_28b8b0;
    }
    ctx->pc = 0x28B8A8u;
    SET_GPR_U32(ctx, 31, 0x28B8B0u);
    ctx->pc = 0x28B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8A8u;
    // 0x28b8ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x28B8A8u, 0x28B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8B0u;
label_28b8b0:
    // 0x28b8b0: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x28b8b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28b8b4:
    // 0x28b8b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b8b8:
    // 0x28b8b8: 0x12e0002d  beqz        $s7, . + 4 + (0x2D << 2)
label_28b8bc:
    if (ctx->pc == 0x28B8BCu) {
        ctx->pc = 0x28B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8B8u;
        // 0x28b8bc: 0x2ef50010  sltiu       $s5, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8C0u;
        goto label_28b8c0;
    }
    ctx->pc = 0x28B8B8u;
    {
        const bool branch_taken_0x28b8b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8B8u;
        // 0x28b8bc: 0x2ef50010  sltiu       $s5, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8b8) {
            ctx->pc = 0x28B970u;
            goto label_28b970;
        }
    }
    ctx->pc = 0x28B8C0u;
label_28b8c0:
    // 0x28b8c0: 0x27b301f0  addiu       $s3, $sp, 0x1F0
    ctx->pc = 0x28b8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_28b8c4:
    // 0x28b8c4: 0x2416000b  addiu       $s6, $zero, 0xB
    ctx->pc = 0x28b8c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28b8c8:
    // 0x28b8c8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x28b8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28b8cc:
    // 0x28b8cc: 0x0  nop
    ctx->pc = 0x28b8ccu;
    // NOP
label_28b8d0:
    // 0x28b8d0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x28b8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28b8d4:
    // 0x28b8d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28b8d8:
    // 0x28b8d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28b8d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28b8dc:
    // 0x28b8dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28b8e0:
    // 0x28b8e0: 0x40f809  jalr        $v0
label_28b8e4:
    if (ctx->pc == 0x28B8E4u) {
        ctx->pc = 0x28B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8E0u;
        // 0x28b8e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8E8u;
        goto label_28b8e8;
    }
    ctx->pc = 0x28B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B8E8u);
        ctx->pc = 0x28B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8E0u;
        // 0x28b8e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B8E0u, 0x28B8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B8E8u;
label_28b8e8:
    // 0x28b8e8: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x28b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_28b8ec:
    // 0x28b8ec: 0x27a50234  addiu       $a1, $sp, 0x234
    ctx->pc = 0x28b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
label_28b8f0:
    // 0x28b8f0: 0xc137882  jal         func_4DE208
label_28b8f4:
    if (ctx->pc == 0x28B8F4u) {
        ctx->pc = 0x28B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8F0u;
        // 0x28b8f4: 0xafa20234  sw          $v0, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8F8u;
        goto label_28b8f8;
    }
    ctx->pc = 0x28B8F0u;
    SET_GPR_U32(ctx, 31, 0x28B8F8u);
    ctx->pc = 0x28B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8F0u;
    // 0x28b8f4: 0xafa20234  sw          $v0, 0x234($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28B8F0u, 0x28B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8F8u;
label_28b8f8:
    // 0x28b8f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28b8fc:
    // 0x28b8fc: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_28b900:
    if (ctx->pc == 0x28B900u) {
        ctx->pc = 0x28B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8FCu;
        // 0x28b900: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B904u;
        goto label_28b904;
    }
    ctx->pc = 0x28B8FCu;
    {
        const bool branch_taken_0x28b8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28b8fc) {
            ctx->pc = 0x28B900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B8FCu;
            // 0x28b900: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B964u;
            goto label_28b964;
        }
    }
    ctx->pc = 0x28B904u;
label_28b904:
    // 0x28b904: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x28b904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28b908:
    // 0x28b908: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28b908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b90c:
    // 0x28b90c: 0xae760020  sw          $s6, 0x20($s3)
    ctx->pc = 0x28b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 22));
label_28b910:
    // 0x28b910: 0xafa60214  sw          $a2, 0x214($sp)
    ctx->pc = 0x28b910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
label_28b914:
    // 0x28b914: 0xafb001f0  sw          $s0, 0x1F0($sp)
    ctx->pc = 0x28b914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
label_28b918:
    // 0x28b918: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28b918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28b91c:
    // 0x28b91c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28b91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28b920:
    // 0x28b920: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28b924:
    // 0x28b924: 0x40f809  jalr        $v0
label_28b928:
    if (ctx->pc == 0x28B928u) {
        ctx->pc = 0x28B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B924u;
        // 0x28b928: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B92Cu;
        goto label_28b92c;
    }
    ctx->pc = 0x28B924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B92Cu);
        ctx->pc = 0x28B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B924u;
        // 0x28b928: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B924u, 0x28B92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B92Cu;
label_28b92c:
    // 0x28b92c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28b930:
    // 0x28b930: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28b930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28b934:
    // 0x28b934: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28b938:
    // 0x28b938: 0x40f809  jalr        $v0
label_28b93c:
    if (ctx->pc == 0x28B93Cu) {
        ctx->pc = 0x28B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B938u;
        // 0x28b93c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B940u;
        goto label_28b940;
    }
    ctx->pc = 0x28B938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B940u);
        ctx->pc = 0x28B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B938u;
        // 0x28b93c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B938u, 0x28B940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B940u;
label_28b940:
    // 0x28b940: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x28b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_28b944:
    // 0x28b944: 0x27a50238  addiu       $a1, $sp, 0x238
    ctx->pc = 0x28b944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_28b948:
    // 0x28b948: 0xc137882  jal         func_4DE208
label_28b94c:
    if (ctx->pc == 0x28B94Cu) {
        ctx->pc = 0x28B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B948u;
        // 0x28b94c: 0xafa20238  sw          $v0, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B950u;
        goto label_28b950;
    }
    ctx->pc = 0x28B948u;
    SET_GPR_U32(ctx, 31, 0x28B950u);
    ctx->pc = 0x28B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B948u;
    // 0x28b94c: 0xafa20238  sw          $v0, 0x238($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28B948u, 0x28B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B950u;
label_28b950:
    // 0x28b950: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_28b954:
    if (ctx->pc == 0x28B954u) {
        ctx->pc = 0x28B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B950u;
        // 0x28b954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B958u;
        goto label_28b958;
    }
    ctx->pc = 0x28B950u;
    {
        const bool branch_taken_0x28b950 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B950u;
        // 0x28b954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b950) {
            ctx->pc = 0x28B960u;
            goto label_28b960;
        }
    }
    ctx->pc = 0x28B958u;
label_28b958:
    // 0x28b958: 0xc0a35a8  jal         func_28D6A0
label_28b95c:
    if (ctx->pc == 0x28B95Cu) {
        ctx->pc = 0x28B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B958u;
        // 0x28b95c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B960u;
        goto label_28b960;
    }
    ctx->pc = 0x28B958u;
    SET_GPR_U32(ctx, 31, 0x28B960u);
    ctx->pc = 0x28B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B958u;
    // 0x28b95c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x28B958u, 0x28B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B960u;
label_28b960:
    // 0x28b960: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28b964:
    // 0x28b964: 0x257102b  sltu        $v0, $s2, $s7
    ctx->pc = 0x28b964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_28b968:
    // 0x28b968: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_28b96c:
    if (ctx->pc == 0x28B96Cu) {
        ctx->pc = 0x28B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B968u;
        // 0x28b96c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B970u;
        goto label_28b970;
    }
    ctx->pc = 0x28B968u;
    {
        const bool branch_taken_0x28b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B968u;
        // 0x28b96c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b968) {
            ctx->pc = 0x28B8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b8d0;
        }
    }
    ctx->pc = 0x28B970u;
label_28b970:
    // 0x28b970: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_28b974:
    if (ctx->pc == 0x28B974u) {
        ctx->pc = 0x28B978u;
        goto label_28b978;
    }
    ctx->pc = 0x28B970u;
    {
        const bool branch_taken_0x28b970 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b970) {
            ctx->pc = 0x28B980u;
            goto label_28b980;
        }
    }
    ctx->pc = 0x28B978u;
label_28b978:
    // 0x28b978: 0xc13782a  jal         func_4DE0A8
label_28b97c:
    if (ctx->pc == 0x28B97Cu) {
        ctx->pc = 0x28B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B978u;
        // 0x28b97c: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B980u;
        goto label_28b980;
    }
    ctx->pc = 0x28B978u;
    SET_GPR_U32(ctx, 31, 0x28B980u);
    ctx->pc = 0x28B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B978u;
    // 0x28b97c: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x28B978u, 0x28B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B980u;
label_28b980:
    // 0x28b980: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
label_28b984:
    if (ctx->pc == 0x28B984u) {
        ctx->pc = 0x28B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B980u;
        // 0x28b984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B988u;
        goto label_28b988;
    }
    ctx->pc = 0x28B980u;
    {
        const bool branch_taken_0x28b980 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B980u;
        // 0x28b984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b980) {
            ctx->pc = 0x28B9FCu;
            goto label_28b9fc;
        }
    }
    ctx->pc = 0x28B988u;
label_28b988:
    // 0x28b988: 0x8fb3024c  lw          $s3, 0x24C($sp)
    ctx->pc = 0x28b988u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_28b98c:
    // 0x28b98c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x28b98cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28b990:
    // 0x28b990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b994:
    // 0x28b994: 0x0  nop
    ctx->pc = 0x28b994u;
    // NOP
label_28b998:
    // 0x28b998: 0xc137826  jal         func_4DE098
label_28b99c:
    if (ctx->pc == 0x28B99Cu) {
        ctx->pc = 0x28B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B998u;
        // 0x28b99c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9A0u;
        goto label_28b9a0;
    }
    ctx->pc = 0x28B998u;
    SET_GPR_U32(ctx, 31, 0x28B9A0u);
    ctx->pc = 0x28B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B998u;
    // 0x28b99c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28B998u, 0x28B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9A0u;
label_28b9a0:
    // 0x28b9a0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x28b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b9a4:
    // 0x28b9a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b9a8:
    // 0x28b9a8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x28b9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_28b9ac:
    // 0x28b9ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28b9b0:
    // 0x28b9b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28b9b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28b9b4:
    // 0x28b9b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28b9b8:
    // 0x28b9b8: 0x40f809  jalr        $v0
label_28b9bc:
    if (ctx->pc == 0x28B9BCu) {
        ctx->pc = 0x28B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9B8u;
        // 0x28b9bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9C0u;
        goto label_28b9c0;
    }
    ctx->pc = 0x28B9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B9C0u);
        ctx->pc = 0x28B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9B8u;
        // 0x28b9bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B9B8u, 0x28B9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B9C0u;
label_28b9c0:
    // 0x28b9c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b9c4:
    // 0x28b9c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b9c8:
    // 0x28b9c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28b9cc:
    // 0x28b9cc: 0xc137826  jal         func_4DE098
label_28b9d0:
    if (ctx->pc == 0x28B9D0u) {
        ctx->pc = 0x28B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9CCu;
        // 0x28b9d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9D4u;
        goto label_28b9d4;
    }
    ctx->pc = 0x28B9CCu;
    SET_GPR_U32(ctx, 31, 0x28B9D4u);
    ctx->pc = 0x28B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9CCu;
    // 0x28b9d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28B9CCu, 0x28B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9D4u;
label_28b9d4:
    // 0x28b9d4: 0xc0e409a  jal         func_390268
label_28b9d8:
    if (ctx->pc == 0x28B9D8u) {
        ctx->pc = 0x28B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9D4u;
        // 0x28b9d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9DCu;
        goto label_28b9dc;
    }
    ctx->pc = 0x28B9D4u;
    SET_GPR_U32(ctx, 31, 0x28B9DCu);
    ctx->pc = 0x28B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9D4u;
    // 0x28b9d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28B9D4u, 0x28B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9DCu;
label_28b9dc:
    // 0x28b9dc: 0xc087502  jal         func_21D408
label_28b9e0:
    if (ctx->pc == 0x28B9E0u) {
        ctx->pc = 0x28B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9DCu;
        // 0x28b9e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9E4u;
        goto label_28b9e4;
    }
    ctx->pc = 0x28B9DCu;
    SET_GPR_U32(ctx, 31, 0x28B9E4u);
    ctx->pc = 0x28B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9DCu;
    // 0x28b9e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28B9DCu, 0x28B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9E4u;
label_28b9e4:
    // 0x28b9e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b9e8:
    // 0x28b9e8: 0xc0a3bc8  jal         func_28EF20
label_28b9ec:
    if (ctx->pc == 0x28B9ECu) {
        ctx->pc = 0x28B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9E8u;
        // 0x28b9ec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9F0u;
        goto label_28b9f0;
    }
    ctx->pc = 0x28B9E8u;
    SET_GPR_U32(ctx, 31, 0x28B9F0u);
    ctx->pc = 0x28B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9E8u;
    // 0x28b9ec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF20u, 0x28B9E8u, 0x28B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9F0u;
label_28b9f0:
    // 0x28b9f0: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x28b9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_28b9f4:
    // 0x28b9f4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_28b9f8:
    if (ctx->pc == 0x28B9F8u) {
        ctx->pc = 0x28B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9F4u;
        // 0x28b9f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9FCu;
        goto label_28b9fc;
    }
    ctx->pc = 0x28B9F4u;
    {
        const bool branch_taken_0x28b9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9F4u;
        // 0x28b9f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9f4) {
            ctx->pc = 0x28B998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b998;
        }
    }
    ctx->pc = 0x28B9FCu;
label_28b9fc:
    // 0x28b9fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_28ba00:
    // 0x28ba00: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x28ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28ba04:
    // 0x28ba04: 0xc06cd84  jal         func_1B3610
label_28ba08:
    if (ctx->pc == 0x28BA08u) {
        ctx->pc = 0x28BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA04u;
        // 0x28ba08: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA0Cu;
        goto label_28ba0c;
    }
    ctx->pc = 0x28BA04u;
    SET_GPR_U32(ctx, 31, 0x28BA0Cu);
    ctx->pc = 0x28BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA04u;
    // 0x28ba08: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3610u, 0x28BA04u, 0x28BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA0Cu;
label_28ba0c:
    // 0x28ba0c: 0x7bb002f0  lq          $s0, 0x2F0($sp)
    ctx->pc = 0x28ba0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_28ba10:
    // 0x28ba10: 0x7bb102e0  lq          $s1, 0x2E0($sp)
    ctx->pc = 0x28ba10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_28ba14:
    // 0x28ba14: 0x7bb202d0  lq          $s2, 0x2D0($sp)
    ctx->pc = 0x28ba14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_28ba18:
    // 0x28ba18: 0x7bb302c0  lq          $s3, 0x2C0($sp)
    ctx->pc = 0x28ba18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_28ba1c:
    // 0x28ba1c: 0x7bb402b0  lq          $s4, 0x2B0($sp)
    ctx->pc = 0x28ba1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_28ba20:
    // 0x28ba20: 0x7bb502a0  lq          $s5, 0x2A0($sp)
    ctx->pc = 0x28ba20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_28ba24:
    // 0x28ba24: 0x7bb60290  lq          $s6, 0x290($sp)
    ctx->pc = 0x28ba24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_28ba28:
    // 0x28ba28: 0x7bb70280  lq          $s7, 0x280($sp)
    ctx->pc = 0x28ba28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_28ba2c:
    // 0x28ba2c: 0x7bbe0270  lq          $fp, 0x270($sp)
    ctx->pc = 0x28ba2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_28ba30:
    // 0x28ba30: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x28ba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_28ba34:
    // 0x28ba34: 0xc7b60310  lwc1        $f22, 0x310($sp)
    ctx->pc = 0x28ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_28ba38:
    // 0x28ba38: 0xc7b50308  lwc1        $f21, 0x308($sp)
    ctx->pc = 0x28ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28ba3c:
    // 0x28ba3c: 0xc7b40300  lwc1        $f20, 0x300($sp)
    ctx->pc = 0x28ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28ba40:
    // 0x28ba40: 0x3e00008  jr          $ra
label_28ba44:
    if (ctx->pc == 0x28BA44u) {
        ctx->pc = 0x28BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA40u;
        // 0x28ba44: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA48u;
        goto label_fallthrough_0x28ba40;
    }
    ctx->pc = 0x28BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA40u;
        // 0x28ba44: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28ba40:
    ctx->pc = 0x28BA48u;
}
