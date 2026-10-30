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

// Function: sub_0021B290
// Address: 0x21b290 - 0x21c030
void sub_0021B290_0x21b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B290_0x21b290");
#endif

    switch (ctx->pc) {
        case 0x21b290u: goto label_21b290;
        case 0x21b294u: goto label_21b294;
        case 0x21b298u: goto label_21b298;
        case 0x21b29cu: goto label_21b29c;
        case 0x21b2a0u: goto label_21b2a0;
        case 0x21b2a4u: goto label_21b2a4;
        case 0x21b2a8u: goto label_21b2a8;
        case 0x21b2acu: goto label_21b2ac;
        case 0x21b2b0u: goto label_21b2b0;
        case 0x21b2b4u: goto label_21b2b4;
        case 0x21b2b8u: goto label_21b2b8;
        case 0x21b2bcu: goto label_21b2bc;
        case 0x21b2c0u: goto label_21b2c0;
        case 0x21b2c4u: goto label_21b2c4;
        case 0x21b2c8u: goto label_21b2c8;
        case 0x21b2ccu: goto label_21b2cc;
        case 0x21b2d0u: goto label_21b2d0;
        case 0x21b2d4u: goto label_21b2d4;
        case 0x21b2d8u: goto label_21b2d8;
        case 0x21b2dcu: goto label_21b2dc;
        case 0x21b2e0u: goto label_21b2e0;
        case 0x21b2e4u: goto label_21b2e4;
        case 0x21b2e8u: goto label_21b2e8;
        case 0x21b2ecu: goto label_21b2ec;
        case 0x21b2f0u: goto label_21b2f0;
        case 0x21b2f4u: goto label_21b2f4;
        case 0x21b2f8u: goto label_21b2f8;
        case 0x21b2fcu: goto label_21b2fc;
        case 0x21b300u: goto label_21b300;
        case 0x21b304u: goto label_21b304;
        case 0x21b308u: goto label_21b308;
        case 0x21b30cu: goto label_21b30c;
        case 0x21b310u: goto label_21b310;
        case 0x21b314u: goto label_21b314;
        case 0x21b318u: goto label_21b318;
        case 0x21b31cu: goto label_21b31c;
        case 0x21b320u: goto label_21b320;
        case 0x21b324u: goto label_21b324;
        case 0x21b328u: goto label_21b328;
        case 0x21b32cu: goto label_21b32c;
        case 0x21b330u: goto label_21b330;
        case 0x21b334u: goto label_21b334;
        case 0x21b338u: goto label_21b338;
        case 0x21b33cu: goto label_21b33c;
        case 0x21b340u: goto label_21b340;
        case 0x21b344u: goto label_21b344;
        case 0x21b348u: goto label_21b348;
        case 0x21b34cu: goto label_21b34c;
        case 0x21b350u: goto label_21b350;
        case 0x21b354u: goto label_21b354;
        case 0x21b358u: goto label_21b358;
        case 0x21b35cu: goto label_21b35c;
        case 0x21b360u: goto label_21b360;
        case 0x21b364u: goto label_21b364;
        case 0x21b368u: goto label_21b368;
        case 0x21b36cu: goto label_21b36c;
        case 0x21b370u: goto label_21b370;
        case 0x21b374u: goto label_21b374;
        case 0x21b378u: goto label_21b378;
        case 0x21b37cu: goto label_21b37c;
        case 0x21b380u: goto label_21b380;
        case 0x21b384u: goto label_21b384;
        case 0x21b388u: goto label_21b388;
        case 0x21b38cu: goto label_21b38c;
        case 0x21b390u: goto label_21b390;
        case 0x21b394u: goto label_21b394;
        case 0x21b398u: goto label_21b398;
        case 0x21b39cu: goto label_21b39c;
        case 0x21b3a0u: goto label_21b3a0;
        case 0x21b3a4u: goto label_21b3a4;
        case 0x21b3a8u: goto label_21b3a8;
        case 0x21b3acu: goto label_21b3ac;
        case 0x21b3b0u: goto label_21b3b0;
        case 0x21b3b4u: goto label_21b3b4;
        case 0x21b3b8u: goto label_21b3b8;
        case 0x21b3bcu: goto label_21b3bc;
        case 0x21b3c0u: goto label_21b3c0;
        case 0x21b3c4u: goto label_21b3c4;
        case 0x21b3c8u: goto label_21b3c8;
        case 0x21b3ccu: goto label_21b3cc;
        case 0x21b3d0u: goto label_21b3d0;
        case 0x21b3d4u: goto label_21b3d4;
        case 0x21b3d8u: goto label_21b3d8;
        case 0x21b3dcu: goto label_21b3dc;
        case 0x21b3e0u: goto label_21b3e0;
        case 0x21b3e4u: goto label_21b3e4;
        case 0x21b3e8u: goto label_21b3e8;
        case 0x21b3ecu: goto label_21b3ec;
        case 0x21b3f0u: goto label_21b3f0;
        case 0x21b3f4u: goto label_21b3f4;
        case 0x21b3f8u: goto label_21b3f8;
        case 0x21b3fcu: goto label_21b3fc;
        case 0x21b400u: goto label_21b400;
        case 0x21b404u: goto label_21b404;
        case 0x21b408u: goto label_21b408;
        case 0x21b40cu: goto label_21b40c;
        case 0x21b410u: goto label_21b410;
        case 0x21b414u: goto label_21b414;
        case 0x21b418u: goto label_21b418;
        case 0x21b41cu: goto label_21b41c;
        case 0x21b420u: goto label_21b420;
        case 0x21b424u: goto label_21b424;
        case 0x21b428u: goto label_21b428;
        case 0x21b42cu: goto label_21b42c;
        case 0x21b430u: goto label_21b430;
        case 0x21b434u: goto label_21b434;
        case 0x21b438u: goto label_21b438;
        case 0x21b43cu: goto label_21b43c;
        case 0x21b440u: goto label_21b440;
        case 0x21b444u: goto label_21b444;
        case 0x21b448u: goto label_21b448;
        case 0x21b44cu: goto label_21b44c;
        case 0x21b450u: goto label_21b450;
        case 0x21b454u: goto label_21b454;
        case 0x21b458u: goto label_21b458;
        case 0x21b45cu: goto label_21b45c;
        case 0x21b460u: goto label_21b460;
        case 0x21b464u: goto label_21b464;
        case 0x21b468u: goto label_21b468;
        case 0x21b46cu: goto label_21b46c;
        case 0x21b470u: goto label_21b470;
        case 0x21b474u: goto label_21b474;
        case 0x21b478u: goto label_21b478;
        case 0x21b47cu: goto label_21b47c;
        case 0x21b480u: goto label_21b480;
        case 0x21b484u: goto label_21b484;
        case 0x21b488u: goto label_21b488;
        case 0x21b48cu: goto label_21b48c;
        case 0x21b490u: goto label_21b490;
        case 0x21b494u: goto label_21b494;
        case 0x21b498u: goto label_21b498;
        case 0x21b49cu: goto label_21b49c;
        case 0x21b4a0u: goto label_21b4a0;
        case 0x21b4a4u: goto label_21b4a4;
        case 0x21b4a8u: goto label_21b4a8;
        case 0x21b4acu: goto label_21b4ac;
        case 0x21b4b0u: goto label_21b4b0;
        case 0x21b4b4u: goto label_21b4b4;
        case 0x21b4b8u: goto label_21b4b8;
        case 0x21b4bcu: goto label_21b4bc;
        case 0x21b4c0u: goto label_21b4c0;
        case 0x21b4c4u: goto label_21b4c4;
        case 0x21b4c8u: goto label_21b4c8;
        case 0x21b4ccu: goto label_21b4cc;
        case 0x21b4d0u: goto label_21b4d0;
        case 0x21b4d4u: goto label_21b4d4;
        case 0x21b4d8u: goto label_21b4d8;
        case 0x21b4dcu: goto label_21b4dc;
        case 0x21b4e0u: goto label_21b4e0;
        case 0x21b4e4u: goto label_21b4e4;
        case 0x21b4e8u: goto label_21b4e8;
        case 0x21b4ecu: goto label_21b4ec;
        case 0x21b4f0u: goto label_21b4f0;
        case 0x21b4f4u: goto label_21b4f4;
        case 0x21b4f8u: goto label_21b4f8;
        case 0x21b4fcu: goto label_21b4fc;
        case 0x21b500u: goto label_21b500;
        case 0x21b504u: goto label_21b504;
        case 0x21b508u: goto label_21b508;
        case 0x21b50cu: goto label_21b50c;
        case 0x21b510u: goto label_21b510;
        case 0x21b514u: goto label_21b514;
        case 0x21b518u: goto label_21b518;
        case 0x21b51cu: goto label_21b51c;
        case 0x21b520u: goto label_21b520;
        case 0x21b524u: goto label_21b524;
        case 0x21b528u: goto label_21b528;
        case 0x21b52cu: goto label_21b52c;
        case 0x21b530u: goto label_21b530;
        case 0x21b534u: goto label_21b534;
        case 0x21b538u: goto label_21b538;
        case 0x21b53cu: goto label_21b53c;
        case 0x21b540u: goto label_21b540;
        case 0x21b544u: goto label_21b544;
        case 0x21b548u: goto label_21b548;
        case 0x21b54cu: goto label_21b54c;
        case 0x21b550u: goto label_21b550;
        case 0x21b554u: goto label_21b554;
        case 0x21b558u: goto label_21b558;
        case 0x21b55cu: goto label_21b55c;
        case 0x21b560u: goto label_21b560;
        case 0x21b564u: goto label_21b564;
        case 0x21b568u: goto label_21b568;
        case 0x21b56cu: goto label_21b56c;
        case 0x21b570u: goto label_21b570;
        case 0x21b574u: goto label_21b574;
        case 0x21b578u: goto label_21b578;
        case 0x21b57cu: goto label_21b57c;
        case 0x21b580u: goto label_21b580;
        case 0x21b584u: goto label_21b584;
        case 0x21b588u: goto label_21b588;
        case 0x21b58cu: goto label_21b58c;
        case 0x21b590u: goto label_21b590;
        case 0x21b594u: goto label_21b594;
        case 0x21b598u: goto label_21b598;
        case 0x21b59cu: goto label_21b59c;
        case 0x21b5a0u: goto label_21b5a0;
        case 0x21b5a4u: goto label_21b5a4;
        case 0x21b5a8u: goto label_21b5a8;
        case 0x21b5acu: goto label_21b5ac;
        case 0x21b5b0u: goto label_21b5b0;
        case 0x21b5b4u: goto label_21b5b4;
        case 0x21b5b8u: goto label_21b5b8;
        case 0x21b5bcu: goto label_21b5bc;
        case 0x21b5c0u: goto label_21b5c0;
        case 0x21b5c4u: goto label_21b5c4;
        case 0x21b5c8u: goto label_21b5c8;
        case 0x21b5ccu: goto label_21b5cc;
        case 0x21b5d0u: goto label_21b5d0;
        case 0x21b5d4u: goto label_21b5d4;
        case 0x21b5d8u: goto label_21b5d8;
        case 0x21b5dcu: goto label_21b5dc;
        case 0x21b5e0u: goto label_21b5e0;
        case 0x21b5e4u: goto label_21b5e4;
        case 0x21b5e8u: goto label_21b5e8;
        case 0x21b5ecu: goto label_21b5ec;
        case 0x21b5f0u: goto label_21b5f0;
        case 0x21b5f4u: goto label_21b5f4;
        case 0x21b5f8u: goto label_21b5f8;
        case 0x21b5fcu: goto label_21b5fc;
        case 0x21b600u: goto label_21b600;
        case 0x21b604u: goto label_21b604;
        case 0x21b608u: goto label_21b608;
        case 0x21b60cu: goto label_21b60c;
        case 0x21b610u: goto label_21b610;
        case 0x21b614u: goto label_21b614;
        case 0x21b618u: goto label_21b618;
        case 0x21b61cu: goto label_21b61c;
        case 0x21b620u: goto label_21b620;
        case 0x21b624u: goto label_21b624;
        case 0x21b628u: goto label_21b628;
        case 0x21b62cu: goto label_21b62c;
        case 0x21b630u: goto label_21b630;
        case 0x21b634u: goto label_21b634;
        case 0x21b638u: goto label_21b638;
        case 0x21b63cu: goto label_21b63c;
        case 0x21b640u: goto label_21b640;
        case 0x21b644u: goto label_21b644;
        case 0x21b648u: goto label_21b648;
        case 0x21b64cu: goto label_21b64c;
        case 0x21b650u: goto label_21b650;
        case 0x21b654u: goto label_21b654;
        case 0x21b658u: goto label_21b658;
        case 0x21b65cu: goto label_21b65c;
        case 0x21b660u: goto label_21b660;
        case 0x21b664u: goto label_21b664;
        case 0x21b668u: goto label_21b668;
        case 0x21b66cu: goto label_21b66c;
        case 0x21b670u: goto label_21b670;
        case 0x21b674u: goto label_21b674;
        case 0x21b678u: goto label_21b678;
        case 0x21b67cu: goto label_21b67c;
        case 0x21b680u: goto label_21b680;
        case 0x21b684u: goto label_21b684;
        case 0x21b688u: goto label_21b688;
        case 0x21b68cu: goto label_21b68c;
        case 0x21b690u: goto label_21b690;
        case 0x21b694u: goto label_21b694;
        case 0x21b698u: goto label_21b698;
        case 0x21b69cu: goto label_21b69c;
        case 0x21b6a0u: goto label_21b6a0;
        case 0x21b6a4u: goto label_21b6a4;
        case 0x21b6a8u: goto label_21b6a8;
        case 0x21b6acu: goto label_21b6ac;
        case 0x21b6b0u: goto label_21b6b0;
        case 0x21b6b4u: goto label_21b6b4;
        case 0x21b6b8u: goto label_21b6b8;
        case 0x21b6bcu: goto label_21b6bc;
        case 0x21b6c0u: goto label_21b6c0;
        case 0x21b6c4u: goto label_21b6c4;
        case 0x21b6c8u: goto label_21b6c8;
        case 0x21b6ccu: goto label_21b6cc;
        case 0x21b6d0u: goto label_21b6d0;
        case 0x21b6d4u: goto label_21b6d4;
        case 0x21b6d8u: goto label_21b6d8;
        case 0x21b6dcu: goto label_21b6dc;
        case 0x21b6e0u: goto label_21b6e0;
        case 0x21b6e4u: goto label_21b6e4;
        case 0x21b6e8u: goto label_21b6e8;
        case 0x21b6ecu: goto label_21b6ec;
        case 0x21b6f0u: goto label_21b6f0;
        case 0x21b6f4u: goto label_21b6f4;
        case 0x21b6f8u: goto label_21b6f8;
        case 0x21b6fcu: goto label_21b6fc;
        case 0x21b700u: goto label_21b700;
        case 0x21b704u: goto label_21b704;
        case 0x21b708u: goto label_21b708;
        case 0x21b70cu: goto label_21b70c;
        case 0x21b710u: goto label_21b710;
        case 0x21b714u: goto label_21b714;
        case 0x21b718u: goto label_21b718;
        case 0x21b71cu: goto label_21b71c;
        case 0x21b720u: goto label_21b720;
        case 0x21b724u: goto label_21b724;
        case 0x21b728u: goto label_21b728;
        case 0x21b72cu: goto label_21b72c;
        case 0x21b730u: goto label_21b730;
        case 0x21b734u: goto label_21b734;
        case 0x21b738u: goto label_21b738;
        case 0x21b73cu: goto label_21b73c;
        case 0x21b740u: goto label_21b740;
        case 0x21b744u: goto label_21b744;
        case 0x21b748u: goto label_21b748;
        case 0x21b74cu: goto label_21b74c;
        case 0x21b750u: goto label_21b750;
        case 0x21b754u: goto label_21b754;
        case 0x21b758u: goto label_21b758;
        case 0x21b75cu: goto label_21b75c;
        case 0x21b760u: goto label_21b760;
        case 0x21b764u: goto label_21b764;
        case 0x21b768u: goto label_21b768;
        case 0x21b76cu: goto label_21b76c;
        case 0x21b770u: goto label_21b770;
        case 0x21b774u: goto label_21b774;
        case 0x21b778u: goto label_21b778;
        case 0x21b77cu: goto label_21b77c;
        case 0x21b780u: goto label_21b780;
        case 0x21b784u: goto label_21b784;
        case 0x21b788u: goto label_21b788;
        case 0x21b78cu: goto label_21b78c;
        case 0x21b790u: goto label_21b790;
        case 0x21b794u: goto label_21b794;
        case 0x21b798u: goto label_21b798;
        case 0x21b79cu: goto label_21b79c;
        case 0x21b7a0u: goto label_21b7a0;
        case 0x21b7a4u: goto label_21b7a4;
        case 0x21b7a8u: goto label_21b7a8;
        case 0x21b7acu: goto label_21b7ac;
        case 0x21b7b0u: goto label_21b7b0;
        case 0x21b7b4u: goto label_21b7b4;
        case 0x21b7b8u: goto label_21b7b8;
        case 0x21b7bcu: goto label_21b7bc;
        case 0x21b7c0u: goto label_21b7c0;
        case 0x21b7c4u: goto label_21b7c4;
        case 0x21b7c8u: goto label_21b7c8;
        case 0x21b7ccu: goto label_21b7cc;
        case 0x21b7d0u: goto label_21b7d0;
        case 0x21b7d4u: goto label_21b7d4;
        case 0x21b7d8u: goto label_21b7d8;
        case 0x21b7dcu: goto label_21b7dc;
        case 0x21b7e0u: goto label_21b7e0;
        case 0x21b7e4u: goto label_21b7e4;
        case 0x21b7e8u: goto label_21b7e8;
        case 0x21b7ecu: goto label_21b7ec;
        case 0x21b7f0u: goto label_21b7f0;
        case 0x21b7f4u: goto label_21b7f4;
        case 0x21b7f8u: goto label_21b7f8;
        case 0x21b7fcu: goto label_21b7fc;
        case 0x21b800u: goto label_21b800;
        case 0x21b804u: goto label_21b804;
        case 0x21b808u: goto label_21b808;
        case 0x21b80cu: goto label_21b80c;
        case 0x21b810u: goto label_21b810;
        case 0x21b814u: goto label_21b814;
        case 0x21b818u: goto label_21b818;
        case 0x21b81cu: goto label_21b81c;
        case 0x21b820u: goto label_21b820;
        case 0x21b824u: goto label_21b824;
        case 0x21b828u: goto label_21b828;
        case 0x21b82cu: goto label_21b82c;
        case 0x21b830u: goto label_21b830;
        case 0x21b834u: goto label_21b834;
        case 0x21b838u: goto label_21b838;
        case 0x21b83cu: goto label_21b83c;
        case 0x21b840u: goto label_21b840;
        case 0x21b844u: goto label_21b844;
        case 0x21b848u: goto label_21b848;
        case 0x21b84cu: goto label_21b84c;
        case 0x21b850u: goto label_21b850;
        case 0x21b854u: goto label_21b854;
        case 0x21b858u: goto label_21b858;
        case 0x21b85cu: goto label_21b85c;
        case 0x21b860u: goto label_21b860;
        case 0x21b864u: goto label_21b864;
        case 0x21b868u: goto label_21b868;
        case 0x21b86cu: goto label_21b86c;
        case 0x21b870u: goto label_21b870;
        case 0x21b874u: goto label_21b874;
        case 0x21b878u: goto label_21b878;
        case 0x21b87cu: goto label_21b87c;
        case 0x21b880u: goto label_21b880;
        case 0x21b884u: goto label_21b884;
        case 0x21b888u: goto label_21b888;
        case 0x21b88cu: goto label_21b88c;
        case 0x21b890u: goto label_21b890;
        case 0x21b894u: goto label_21b894;
        case 0x21b898u: goto label_21b898;
        case 0x21b89cu: goto label_21b89c;
        case 0x21b8a0u: goto label_21b8a0;
        case 0x21b8a4u: goto label_21b8a4;
        case 0x21b8a8u: goto label_21b8a8;
        case 0x21b8acu: goto label_21b8ac;
        case 0x21b8b0u: goto label_21b8b0;
        case 0x21b8b4u: goto label_21b8b4;
        case 0x21b8b8u: goto label_21b8b8;
        case 0x21b8bcu: goto label_21b8bc;
        case 0x21b8c0u: goto label_21b8c0;
        case 0x21b8c4u: goto label_21b8c4;
        case 0x21b8c8u: goto label_21b8c8;
        case 0x21b8ccu: goto label_21b8cc;
        case 0x21b8d0u: goto label_21b8d0;
        case 0x21b8d4u: goto label_21b8d4;
        case 0x21b8d8u: goto label_21b8d8;
        case 0x21b8dcu: goto label_21b8dc;
        case 0x21b8e0u: goto label_21b8e0;
        case 0x21b8e4u: goto label_21b8e4;
        case 0x21b8e8u: goto label_21b8e8;
        case 0x21b8ecu: goto label_21b8ec;
        case 0x21b8f0u: goto label_21b8f0;
        case 0x21b8f4u: goto label_21b8f4;
        case 0x21b8f8u: goto label_21b8f8;
        case 0x21b8fcu: goto label_21b8fc;
        case 0x21b900u: goto label_21b900;
        case 0x21b904u: goto label_21b904;
        case 0x21b908u: goto label_21b908;
        case 0x21b90cu: goto label_21b90c;
        case 0x21b910u: goto label_21b910;
        case 0x21b914u: goto label_21b914;
        case 0x21b918u: goto label_21b918;
        case 0x21b91cu: goto label_21b91c;
        case 0x21b920u: goto label_21b920;
        case 0x21b924u: goto label_21b924;
        case 0x21b928u: goto label_21b928;
        case 0x21b92cu: goto label_21b92c;
        case 0x21b930u: goto label_21b930;
        case 0x21b934u: goto label_21b934;
        case 0x21b938u: goto label_21b938;
        case 0x21b93cu: goto label_21b93c;
        case 0x21b940u: goto label_21b940;
        case 0x21b944u: goto label_21b944;
        case 0x21b948u: goto label_21b948;
        case 0x21b94cu: goto label_21b94c;
        case 0x21b950u: goto label_21b950;
        case 0x21b954u: goto label_21b954;
        case 0x21b958u: goto label_21b958;
        case 0x21b95cu: goto label_21b95c;
        case 0x21b960u: goto label_21b960;
        case 0x21b964u: goto label_21b964;
        case 0x21b968u: goto label_21b968;
        case 0x21b96cu: goto label_21b96c;
        case 0x21b970u: goto label_21b970;
        case 0x21b974u: goto label_21b974;
        case 0x21b978u: goto label_21b978;
        case 0x21b97cu: goto label_21b97c;
        case 0x21b980u: goto label_21b980;
        case 0x21b984u: goto label_21b984;
        case 0x21b988u: goto label_21b988;
        case 0x21b98cu: goto label_21b98c;
        case 0x21b990u: goto label_21b990;
        case 0x21b994u: goto label_21b994;
        case 0x21b998u: goto label_21b998;
        case 0x21b99cu: goto label_21b99c;
        case 0x21b9a0u: goto label_21b9a0;
        case 0x21b9a4u: goto label_21b9a4;
        case 0x21b9a8u: goto label_21b9a8;
        case 0x21b9acu: goto label_21b9ac;
        case 0x21b9b0u: goto label_21b9b0;
        case 0x21b9b4u: goto label_21b9b4;
        case 0x21b9b8u: goto label_21b9b8;
        case 0x21b9bcu: goto label_21b9bc;
        case 0x21b9c0u: goto label_21b9c0;
        case 0x21b9c4u: goto label_21b9c4;
        case 0x21b9c8u: goto label_21b9c8;
        case 0x21b9ccu: goto label_21b9cc;
        case 0x21b9d0u: goto label_21b9d0;
        case 0x21b9d4u: goto label_21b9d4;
        case 0x21b9d8u: goto label_21b9d8;
        case 0x21b9dcu: goto label_21b9dc;
        case 0x21b9e0u: goto label_21b9e0;
        case 0x21b9e4u: goto label_21b9e4;
        case 0x21b9e8u: goto label_21b9e8;
        case 0x21b9ecu: goto label_21b9ec;
        case 0x21b9f0u: goto label_21b9f0;
        case 0x21b9f4u: goto label_21b9f4;
        case 0x21b9f8u: goto label_21b9f8;
        case 0x21b9fcu: goto label_21b9fc;
        case 0x21ba00u: goto label_21ba00;
        case 0x21ba04u: goto label_21ba04;
        case 0x21ba08u: goto label_21ba08;
        case 0x21ba0cu: goto label_21ba0c;
        case 0x21ba10u: goto label_21ba10;
        case 0x21ba14u: goto label_21ba14;
        case 0x21ba18u: goto label_21ba18;
        case 0x21ba1cu: goto label_21ba1c;
        case 0x21ba20u: goto label_21ba20;
        case 0x21ba24u: goto label_21ba24;
        case 0x21ba28u: goto label_21ba28;
        case 0x21ba2cu: goto label_21ba2c;
        case 0x21ba30u: goto label_21ba30;
        case 0x21ba34u: goto label_21ba34;
        case 0x21ba38u: goto label_21ba38;
        case 0x21ba3cu: goto label_21ba3c;
        case 0x21ba40u: goto label_21ba40;
        case 0x21ba44u: goto label_21ba44;
        case 0x21ba48u: goto label_21ba48;
        case 0x21ba4cu: goto label_21ba4c;
        case 0x21ba50u: goto label_21ba50;
        case 0x21ba54u: goto label_21ba54;
        case 0x21ba58u: goto label_21ba58;
        case 0x21ba5cu: goto label_21ba5c;
        case 0x21ba60u: goto label_21ba60;
        case 0x21ba64u: goto label_21ba64;
        case 0x21ba68u: goto label_21ba68;
        case 0x21ba6cu: goto label_21ba6c;
        case 0x21ba70u: goto label_21ba70;
        case 0x21ba74u: goto label_21ba74;
        case 0x21ba78u: goto label_21ba78;
        case 0x21ba7cu: goto label_21ba7c;
        case 0x21ba80u: goto label_21ba80;
        case 0x21ba84u: goto label_21ba84;
        case 0x21ba88u: goto label_21ba88;
        case 0x21ba8cu: goto label_21ba8c;
        case 0x21ba90u: goto label_21ba90;
        case 0x21ba94u: goto label_21ba94;
        case 0x21ba98u: goto label_21ba98;
        case 0x21ba9cu: goto label_21ba9c;
        case 0x21baa0u: goto label_21baa0;
        case 0x21baa4u: goto label_21baa4;
        case 0x21baa8u: goto label_21baa8;
        case 0x21baacu: goto label_21baac;
        case 0x21bab0u: goto label_21bab0;
        case 0x21bab4u: goto label_21bab4;
        case 0x21bab8u: goto label_21bab8;
        case 0x21babcu: goto label_21babc;
        case 0x21bac0u: goto label_21bac0;
        case 0x21bac4u: goto label_21bac4;
        case 0x21bac8u: goto label_21bac8;
        case 0x21baccu: goto label_21bacc;
        case 0x21bad0u: goto label_21bad0;
        case 0x21bad4u: goto label_21bad4;
        case 0x21bad8u: goto label_21bad8;
        case 0x21badcu: goto label_21badc;
        case 0x21bae0u: goto label_21bae0;
        case 0x21bae4u: goto label_21bae4;
        case 0x21bae8u: goto label_21bae8;
        case 0x21baecu: goto label_21baec;
        case 0x21baf0u: goto label_21baf0;
        case 0x21baf4u: goto label_21baf4;
        case 0x21baf8u: goto label_21baf8;
        case 0x21bafcu: goto label_21bafc;
        case 0x21bb00u: goto label_21bb00;
        case 0x21bb04u: goto label_21bb04;
        case 0x21bb08u: goto label_21bb08;
        case 0x21bb0cu: goto label_21bb0c;
        case 0x21bb10u: goto label_21bb10;
        case 0x21bb14u: goto label_21bb14;
        case 0x21bb18u: goto label_21bb18;
        case 0x21bb1cu: goto label_21bb1c;
        case 0x21bb20u: goto label_21bb20;
        case 0x21bb24u: goto label_21bb24;
        case 0x21bb28u: goto label_21bb28;
        case 0x21bb2cu: goto label_21bb2c;
        case 0x21bb30u: goto label_21bb30;
        case 0x21bb34u: goto label_21bb34;
        case 0x21bb38u: goto label_21bb38;
        case 0x21bb3cu: goto label_21bb3c;
        case 0x21bb40u: goto label_21bb40;
        case 0x21bb44u: goto label_21bb44;
        case 0x21bb48u: goto label_21bb48;
        case 0x21bb4cu: goto label_21bb4c;
        case 0x21bb50u: goto label_21bb50;
        case 0x21bb54u: goto label_21bb54;
        case 0x21bb58u: goto label_21bb58;
        case 0x21bb5cu: goto label_21bb5c;
        case 0x21bb60u: goto label_21bb60;
        case 0x21bb64u: goto label_21bb64;
        case 0x21bb68u: goto label_21bb68;
        case 0x21bb6cu: goto label_21bb6c;
        case 0x21bb70u: goto label_21bb70;
        case 0x21bb74u: goto label_21bb74;
        case 0x21bb78u: goto label_21bb78;
        case 0x21bb7cu: goto label_21bb7c;
        case 0x21bb80u: goto label_21bb80;
        case 0x21bb84u: goto label_21bb84;
        case 0x21bb88u: goto label_21bb88;
        case 0x21bb8cu: goto label_21bb8c;
        case 0x21bb90u: goto label_21bb90;
        case 0x21bb94u: goto label_21bb94;
        case 0x21bb98u: goto label_21bb98;
        case 0x21bb9cu: goto label_21bb9c;
        case 0x21bba0u: goto label_21bba0;
        case 0x21bba4u: goto label_21bba4;
        case 0x21bba8u: goto label_21bba8;
        case 0x21bbacu: goto label_21bbac;
        case 0x21bbb0u: goto label_21bbb0;
        case 0x21bbb4u: goto label_21bbb4;
        case 0x21bbb8u: goto label_21bbb8;
        case 0x21bbbcu: goto label_21bbbc;
        case 0x21bbc0u: goto label_21bbc0;
        case 0x21bbc4u: goto label_21bbc4;
        case 0x21bbc8u: goto label_21bbc8;
        case 0x21bbccu: goto label_21bbcc;
        case 0x21bbd0u: goto label_21bbd0;
        case 0x21bbd4u: goto label_21bbd4;
        case 0x21bbd8u: goto label_21bbd8;
        case 0x21bbdcu: goto label_21bbdc;
        case 0x21bbe0u: goto label_21bbe0;
        case 0x21bbe4u: goto label_21bbe4;
        case 0x21bbe8u: goto label_21bbe8;
        case 0x21bbecu: goto label_21bbec;
        case 0x21bbf0u: goto label_21bbf0;
        case 0x21bbf4u: goto label_21bbf4;
        case 0x21bbf8u: goto label_21bbf8;
        case 0x21bbfcu: goto label_21bbfc;
        case 0x21bc00u: goto label_21bc00;
        case 0x21bc04u: goto label_21bc04;
        case 0x21bc08u: goto label_21bc08;
        case 0x21bc0cu: goto label_21bc0c;
        case 0x21bc10u: goto label_21bc10;
        case 0x21bc14u: goto label_21bc14;
        case 0x21bc18u: goto label_21bc18;
        case 0x21bc1cu: goto label_21bc1c;
        case 0x21bc20u: goto label_21bc20;
        case 0x21bc24u: goto label_21bc24;
        case 0x21bc28u: goto label_21bc28;
        case 0x21bc2cu: goto label_21bc2c;
        case 0x21bc30u: goto label_21bc30;
        case 0x21bc34u: goto label_21bc34;
        case 0x21bc38u: goto label_21bc38;
        case 0x21bc3cu: goto label_21bc3c;
        case 0x21bc40u: goto label_21bc40;
        case 0x21bc44u: goto label_21bc44;
        case 0x21bc48u: goto label_21bc48;
        case 0x21bc4cu: goto label_21bc4c;
        case 0x21bc50u: goto label_21bc50;
        case 0x21bc54u: goto label_21bc54;
        case 0x21bc58u: goto label_21bc58;
        case 0x21bc5cu: goto label_21bc5c;
        case 0x21bc60u: goto label_21bc60;
        case 0x21bc64u: goto label_21bc64;
        case 0x21bc68u: goto label_21bc68;
        case 0x21bc6cu: goto label_21bc6c;
        case 0x21bc70u: goto label_21bc70;
        case 0x21bc74u: goto label_21bc74;
        case 0x21bc78u: goto label_21bc78;
        case 0x21bc7cu: goto label_21bc7c;
        case 0x21bc80u: goto label_21bc80;
        case 0x21bc84u: goto label_21bc84;
        case 0x21bc88u: goto label_21bc88;
        case 0x21bc8cu: goto label_21bc8c;
        case 0x21bc90u: goto label_21bc90;
        case 0x21bc94u: goto label_21bc94;
        case 0x21bc98u: goto label_21bc98;
        case 0x21bc9cu: goto label_21bc9c;
        case 0x21bca0u: goto label_21bca0;
        case 0x21bca4u: goto label_21bca4;
        case 0x21bca8u: goto label_21bca8;
        case 0x21bcacu: goto label_21bcac;
        case 0x21bcb0u: goto label_21bcb0;
        case 0x21bcb4u: goto label_21bcb4;
        case 0x21bcb8u: goto label_21bcb8;
        case 0x21bcbcu: goto label_21bcbc;
        case 0x21bcc0u: goto label_21bcc0;
        case 0x21bcc4u: goto label_21bcc4;
        case 0x21bcc8u: goto label_21bcc8;
        case 0x21bcccu: goto label_21bccc;
        case 0x21bcd0u: goto label_21bcd0;
        case 0x21bcd4u: goto label_21bcd4;
        case 0x21bcd8u: goto label_21bcd8;
        case 0x21bcdcu: goto label_21bcdc;
        case 0x21bce0u: goto label_21bce0;
        case 0x21bce4u: goto label_21bce4;
        case 0x21bce8u: goto label_21bce8;
        case 0x21bcecu: goto label_21bcec;
        case 0x21bcf0u: goto label_21bcf0;
        case 0x21bcf4u: goto label_21bcf4;
        case 0x21bcf8u: goto label_21bcf8;
        case 0x21bcfcu: goto label_21bcfc;
        case 0x21bd00u: goto label_21bd00;
        case 0x21bd04u: goto label_21bd04;
        case 0x21bd08u: goto label_21bd08;
        case 0x21bd0cu: goto label_21bd0c;
        case 0x21bd10u: goto label_21bd10;
        case 0x21bd14u: goto label_21bd14;
        case 0x21bd18u: goto label_21bd18;
        case 0x21bd1cu: goto label_21bd1c;
        case 0x21bd20u: goto label_21bd20;
        case 0x21bd24u: goto label_21bd24;
        case 0x21bd28u: goto label_21bd28;
        case 0x21bd2cu: goto label_21bd2c;
        case 0x21bd30u: goto label_21bd30;
        case 0x21bd34u: goto label_21bd34;
        case 0x21bd38u: goto label_21bd38;
        case 0x21bd3cu: goto label_21bd3c;
        case 0x21bd40u: goto label_21bd40;
        case 0x21bd44u: goto label_21bd44;
        case 0x21bd48u: goto label_21bd48;
        case 0x21bd4cu: goto label_21bd4c;
        case 0x21bd50u: goto label_21bd50;
        case 0x21bd54u: goto label_21bd54;
        case 0x21bd58u: goto label_21bd58;
        case 0x21bd5cu: goto label_21bd5c;
        case 0x21bd60u: goto label_21bd60;
        case 0x21bd64u: goto label_21bd64;
        case 0x21bd68u: goto label_21bd68;
        case 0x21bd6cu: goto label_21bd6c;
        case 0x21bd70u: goto label_21bd70;
        case 0x21bd74u: goto label_21bd74;
        case 0x21bd78u: goto label_21bd78;
        case 0x21bd7cu: goto label_21bd7c;
        case 0x21bd80u: goto label_21bd80;
        case 0x21bd84u: goto label_21bd84;
        case 0x21bd88u: goto label_21bd88;
        case 0x21bd8cu: goto label_21bd8c;
        case 0x21bd90u: goto label_21bd90;
        case 0x21bd94u: goto label_21bd94;
        case 0x21bd98u: goto label_21bd98;
        case 0x21bd9cu: goto label_21bd9c;
        case 0x21bda0u: goto label_21bda0;
        case 0x21bda4u: goto label_21bda4;
        case 0x21bda8u: goto label_21bda8;
        case 0x21bdacu: goto label_21bdac;
        case 0x21bdb0u: goto label_21bdb0;
        case 0x21bdb4u: goto label_21bdb4;
        case 0x21bdb8u: goto label_21bdb8;
        case 0x21bdbcu: goto label_21bdbc;
        case 0x21bdc0u: goto label_21bdc0;
        case 0x21bdc4u: goto label_21bdc4;
        case 0x21bdc8u: goto label_21bdc8;
        case 0x21bdccu: goto label_21bdcc;
        case 0x21bdd0u: goto label_21bdd0;
        case 0x21bdd4u: goto label_21bdd4;
        case 0x21bdd8u: goto label_21bdd8;
        case 0x21bddcu: goto label_21bddc;
        case 0x21bde0u: goto label_21bde0;
        case 0x21bde4u: goto label_21bde4;
        case 0x21bde8u: goto label_21bde8;
        case 0x21bdecu: goto label_21bdec;
        case 0x21bdf0u: goto label_21bdf0;
        case 0x21bdf4u: goto label_21bdf4;
        case 0x21bdf8u: goto label_21bdf8;
        case 0x21bdfcu: goto label_21bdfc;
        case 0x21be00u: goto label_21be00;
        case 0x21be04u: goto label_21be04;
        case 0x21be08u: goto label_21be08;
        case 0x21be0cu: goto label_21be0c;
        case 0x21be10u: goto label_21be10;
        case 0x21be14u: goto label_21be14;
        case 0x21be18u: goto label_21be18;
        case 0x21be1cu: goto label_21be1c;
        case 0x21be20u: goto label_21be20;
        case 0x21be24u: goto label_21be24;
        case 0x21be28u: goto label_21be28;
        case 0x21be2cu: goto label_21be2c;
        case 0x21be30u: goto label_21be30;
        case 0x21be34u: goto label_21be34;
        case 0x21be38u: goto label_21be38;
        case 0x21be3cu: goto label_21be3c;
        case 0x21be40u: goto label_21be40;
        case 0x21be44u: goto label_21be44;
        case 0x21be48u: goto label_21be48;
        case 0x21be4cu: goto label_21be4c;
        case 0x21be50u: goto label_21be50;
        case 0x21be54u: goto label_21be54;
        case 0x21be58u: goto label_21be58;
        case 0x21be5cu: goto label_21be5c;
        case 0x21be60u: goto label_21be60;
        case 0x21be64u: goto label_21be64;
        case 0x21be68u: goto label_21be68;
        case 0x21be6cu: goto label_21be6c;
        case 0x21be70u: goto label_21be70;
        case 0x21be74u: goto label_21be74;
        case 0x21be78u: goto label_21be78;
        case 0x21be7cu: goto label_21be7c;
        case 0x21be80u: goto label_21be80;
        case 0x21be84u: goto label_21be84;
        case 0x21be88u: goto label_21be88;
        case 0x21be8cu: goto label_21be8c;
        case 0x21be90u: goto label_21be90;
        case 0x21be94u: goto label_21be94;
        case 0x21be98u: goto label_21be98;
        case 0x21be9cu: goto label_21be9c;
        case 0x21bea0u: goto label_21bea0;
        case 0x21bea4u: goto label_21bea4;
        case 0x21bea8u: goto label_21bea8;
        case 0x21beacu: goto label_21beac;
        case 0x21beb0u: goto label_21beb0;
        case 0x21beb4u: goto label_21beb4;
        case 0x21beb8u: goto label_21beb8;
        case 0x21bebcu: goto label_21bebc;
        case 0x21bec0u: goto label_21bec0;
        case 0x21bec4u: goto label_21bec4;
        case 0x21bec8u: goto label_21bec8;
        case 0x21beccu: goto label_21becc;
        case 0x21bed0u: goto label_21bed0;
        case 0x21bed4u: goto label_21bed4;
        case 0x21bed8u: goto label_21bed8;
        case 0x21bedcu: goto label_21bedc;
        case 0x21bee0u: goto label_21bee0;
        case 0x21bee4u: goto label_21bee4;
        case 0x21bee8u: goto label_21bee8;
        case 0x21beecu: goto label_21beec;
        case 0x21bef0u: goto label_21bef0;
        case 0x21bef4u: goto label_21bef4;
        case 0x21bef8u: goto label_21bef8;
        case 0x21befcu: goto label_21befc;
        case 0x21bf00u: goto label_21bf00;
        case 0x21bf04u: goto label_21bf04;
        case 0x21bf08u: goto label_21bf08;
        case 0x21bf0cu: goto label_21bf0c;
        case 0x21bf10u: goto label_21bf10;
        case 0x21bf14u: goto label_21bf14;
        case 0x21bf18u: goto label_21bf18;
        case 0x21bf1cu: goto label_21bf1c;
        case 0x21bf20u: goto label_21bf20;
        case 0x21bf24u: goto label_21bf24;
        case 0x21bf28u: goto label_21bf28;
        case 0x21bf2cu: goto label_21bf2c;
        case 0x21bf30u: goto label_21bf30;
        case 0x21bf34u: goto label_21bf34;
        case 0x21bf38u: goto label_21bf38;
        case 0x21bf3cu: goto label_21bf3c;
        case 0x21bf40u: goto label_21bf40;
        case 0x21bf44u: goto label_21bf44;
        case 0x21bf48u: goto label_21bf48;
        case 0x21bf4cu: goto label_21bf4c;
        case 0x21bf50u: goto label_21bf50;
        case 0x21bf54u: goto label_21bf54;
        case 0x21bf58u: goto label_21bf58;
        case 0x21bf5cu: goto label_21bf5c;
        case 0x21bf60u: goto label_21bf60;
        case 0x21bf64u: goto label_21bf64;
        case 0x21bf68u: goto label_21bf68;
        case 0x21bf6cu: goto label_21bf6c;
        case 0x21bf70u: goto label_21bf70;
        case 0x21bf74u: goto label_21bf74;
        case 0x21bf78u: goto label_21bf78;
        case 0x21bf7cu: goto label_21bf7c;
        case 0x21bf80u: goto label_21bf80;
        case 0x21bf84u: goto label_21bf84;
        case 0x21bf88u: goto label_21bf88;
        case 0x21bf8cu: goto label_21bf8c;
        case 0x21bf90u: goto label_21bf90;
        case 0x21bf94u: goto label_21bf94;
        case 0x21bf98u: goto label_21bf98;
        case 0x21bf9cu: goto label_21bf9c;
        case 0x21bfa0u: goto label_21bfa0;
        case 0x21bfa4u: goto label_21bfa4;
        case 0x21bfa8u: goto label_21bfa8;
        case 0x21bfacu: goto label_21bfac;
        case 0x21bfb0u: goto label_21bfb0;
        case 0x21bfb4u: goto label_21bfb4;
        case 0x21bfb8u: goto label_21bfb8;
        case 0x21bfbcu: goto label_21bfbc;
        case 0x21bfc0u: goto label_21bfc0;
        case 0x21bfc4u: goto label_21bfc4;
        case 0x21bfc8u: goto label_21bfc8;
        case 0x21bfccu: goto label_21bfcc;
        case 0x21bfd0u: goto label_21bfd0;
        case 0x21bfd4u: goto label_21bfd4;
        case 0x21bfd8u: goto label_21bfd8;
        case 0x21bfdcu: goto label_21bfdc;
        case 0x21bfe0u: goto label_21bfe0;
        case 0x21bfe4u: goto label_21bfe4;
        case 0x21bfe8u: goto label_21bfe8;
        case 0x21bfecu: goto label_21bfec;
        case 0x21bff0u: goto label_21bff0;
        case 0x21bff4u: goto label_21bff4;
        case 0x21bff8u: goto label_21bff8;
        case 0x21bffcu: goto label_21bffc;
        case 0x21c000u: goto label_21c000;
        case 0x21c004u: goto label_21c004;
        case 0x21c008u: goto label_21c008;
        case 0x21c00cu: goto label_21c00c;
        case 0x21c010u: goto label_21c010;
        case 0x21c014u: goto label_21c014;
        case 0x21c018u: goto label_21c018;
        case 0x21c01cu: goto label_21c01c;
        case 0x21c020u: goto label_21c020;
        case 0x21c024u: goto label_21c024;
        case 0x21c028u: goto label_21c028;
        case 0x21c02cu: goto label_21c02c;
        default: break;
    }

    ctx->pc = 0x21b290u;

label_21b290:
    // 0x21b290: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_21b294:
    // 0x21b294: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x21b294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_21b298:
    // 0x21b298: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x21b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_21b29c:
    // 0x21b29c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x21b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_21b2a0:
    // 0x21b2a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21b2a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b2a4:
    // 0x21b2a4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x21b2a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_21b2a8:
    // 0x21b2a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21b2a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21b2ac:
    // 0x21b2ac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x21b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_21b2b0:
    // 0x21b2b0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x21b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_21b2b4:
    // 0x21b2b4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x21b2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_21b2b8:
    // 0x21b2b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_21b2bc:
    // 0x21b2bc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x21b2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_21b2c0:
    // 0x21b2c0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x21b2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_21b2c4:
    // 0x21b2c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_21b2c8:
    // 0x21b2c8: 0xc08a61a  jal         func_229868
label_21b2cc:
    if (ctx->pc == 0x21B2CCu) {
        ctx->pc = 0x21B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2C8u;
        // 0x21b2cc: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2D0u;
        goto label_21b2d0;
    }
    ctx->pc = 0x21B2C8u;
    SET_GPR_U32(ctx, 31, 0x21B2D0u);
    ctx->pc = 0x21B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2C8u;
    // 0x21b2cc: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x21B2C8u, 0x21B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2D0u;
label_21b2d0:
    // 0x21b2d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b2d4:
    // 0x21b2d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b2d8:
    // 0x21b2d8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x21b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_21b2dc:
    // 0x21b2dc: 0xc0950ba  jal         func_2542E8
label_21b2e0:
    if (ctx->pc == 0x21B2E0u) {
        ctx->pc = 0x21B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2DCu;
        // 0x21b2e0: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2E4u;
        goto label_21b2e4;
    }
    ctx->pc = 0x21B2DCu;
    SET_GPR_U32(ctx, 31, 0x21B2E4u);
    ctx->pc = 0x21B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2DCu;
    // 0x21b2e0: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x21B2DCu, 0x21B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2E4u;
label_21b2e4:
    // 0x21b2e4: 0x8e4301a0  lw          $v1, 0x1A0($s2)
    ctx->pc = 0x21b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_21b2e8:
    // 0x21b2e8: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x21b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
label_21b2ec:
    // 0x21b2ec: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_21b2f0:
    if (ctx->pc == 0x21B2F0u) {
        ctx->pc = 0x21B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2ECu;
        // 0x21b2f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2F4u;
        goto label_21b2f4;
    }
    ctx->pc = 0x21B2ECu;
    {
        const bool branch_taken_0x21b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2ECu;
        // 0x21b2f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2ec) {
            ctx->pc = 0x21B3A4u;
            goto label_21b3a4;
        }
    }
    ctx->pc = 0x21B2F4u;
label_21b2f4:
    // 0x21b2f4: 0xc089bfc  jal         func_226FF0
label_21b2f8:
    if (ctx->pc == 0x21B2F8u) {
        ctx->pc = 0x21B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F4u;
        // 0x21b2f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2FCu;
        goto label_21b2fc;
    }
    ctx->pc = 0x21B2F4u;
    SET_GPR_U32(ctx, 31, 0x21B2FCu);
    ctx->pc = 0x21B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2F4u;
    // 0x21b2f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21B2F4u, 0x21B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2FCu;
label_21b2fc:
    // 0x21b2fc: 0xc0e57ce  jal         func_395F38
label_21b300:
    if (ctx->pc == 0x21B300u) {
        ctx->pc = 0x21B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2FCu;
        // 0x21b300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B304u;
        goto label_21b304;
    }
    ctx->pc = 0x21B2FCu;
    SET_GPR_U32(ctx, 31, 0x21B304u);
    ctx->pc = 0x21B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2FCu;
    // 0x21b300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21B2FCu, 0x21B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B304u;
label_21b304:
    // 0x21b304: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_21b308:
    if (ctx->pc == 0x21B308u) {
        ctx->pc = 0x21B30Cu;
        goto label_21b30c;
    }
    ctx->pc = 0x21B304u;
    {
        const bool branch_taken_0x21b304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b304) {
            ctx->pc = 0x21B3A4u;
            goto label_21b3a4;
        }
    }
    ctx->pc = 0x21B30Cu;
label_21b30c:
    // 0x21b30c: 0xc089bfc  jal         func_226FF0
label_21b310:
    if (ctx->pc == 0x21B310u) {
        ctx->pc = 0x21B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B30Cu;
        // 0x21b310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B314u;
        goto label_21b314;
    }
    ctx->pc = 0x21B30Cu;
    SET_GPR_U32(ctx, 31, 0x21B314u);
    ctx->pc = 0x21B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B30Cu;
    // 0x21b310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21B30Cu, 0x21B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B314u;
label_21b314:
    // 0x21b314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21b314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b318:
    // 0x21b318: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x21b318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_21b31c:
    // 0x21b31c: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x21b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21b320:
    // 0x21b320: 0xa0f809  jalr        $a1
label_21b324:
    if (ctx->pc == 0x21B324u) {
        ctx->pc = 0x21B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B320u;
        // 0x21b324: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B328u;
        goto label_21b328;
    }
    ctx->pc = 0x21B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x21B328u);
        ctx->pc = 0x21B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B320u;
        // 0x21b324: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B320u, 0x21B328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B328u;
label_21b328:
    // 0x21b328: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x21b328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_21b32c:
    // 0x21b32c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21b32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21b330:
    // 0x21b330: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_21b334:
    if (ctx->pc == 0x21B334u) {
        ctx->pc = 0x21B338u;
        goto label_21b338;
    }
    ctx->pc = 0x21B330u;
    {
        const bool branch_taken_0x21b330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b330) {
            ctx->pc = 0x21B3A4u;
            goto label_21b3a4;
        }
    }
    ctx->pc = 0x21B338u;
label_21b338:
    // 0x21b338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b33c:
    // 0x21b33c: 0xc089bfc  jal         func_226FF0
label_21b340:
    if (ctx->pc == 0x21B340u) {
        ctx->pc = 0x21B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B33Cu;
        // 0x21b340: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B344u;
        goto label_21b344;
    }
    ctx->pc = 0x21B33Cu;
    SET_GPR_U32(ctx, 31, 0x21B344u);
    ctx->pc = 0x21B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B33Cu;
    // 0x21b340: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21B33Cu, 0x21B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B344u;
label_21b344:
    // 0x21b344: 0xc0e57ce  jal         func_395F38
label_21b348:
    if (ctx->pc == 0x21B348u) {
        ctx->pc = 0x21B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B344u;
        // 0x21b348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B34Cu;
        goto label_21b34c;
    }
    ctx->pc = 0x21B344u;
    SET_GPR_U32(ctx, 31, 0x21B34Cu);
    ctx->pc = 0x21B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B344u;
    // 0x21b348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21B344u, 0x21B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B34Cu;
label_21b34c:
    // 0x21b34c: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x21b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_21b350:
    // 0x21b350: 0xc0e44cc  jal         func_391330
label_21b354:
    if (ctx->pc == 0x21B354u) {
        ctx->pc = 0x21B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B350u;
        // 0x21b354: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B358u;
        goto label_21b358;
    }
    ctx->pc = 0x21B350u;
    SET_GPR_U32(ctx, 31, 0x21B358u);
    ctx->pc = 0x21B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B350u;
    // 0x21b354: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21B350u, 0x21B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B358u;
label_21b358:
    // 0x21b358: 0x94420058  lhu         $v0, 0x58($v0)
    ctx->pc = 0x21b358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_21b35c:
    // 0x21b35c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_21b360:
    if (ctx->pc == 0x21B360u) {
        ctx->pc = 0x21B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B35Cu;
        // 0x21b360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B364u;
        goto label_21b364;
    }
    ctx->pc = 0x21B35Cu;
    {
        const bool branch_taken_0x21b35c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B35Cu;
        // 0x21b360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b35c) {
            ctx->pc = 0x21B378u;
            goto label_21b378;
        }
    }
    ctx->pc = 0x21B364u;
label_21b364:
    // 0x21b364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21b368:
    // 0x21b368: 0x0  nop
    ctx->pc = 0x21b368u;
    // NOP
label_21b36c:
    // 0x21b36c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21b36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_21b370:
    // 0x21b370: 0x10000008  b           . + 4 + (0x8 << 2)
label_21b374:
    if (ctx->pc == 0x21B374u) {
        ctx->pc = 0x21B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B370u;
        // 0x21b374: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B378u;
        goto label_21b378;
    }
    ctx->pc = 0x21B370u;
    {
        const bool branch_taken_0x21b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B370u;
        // 0x21b374: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b370) {
            ctx->pc = 0x21B394u;
            goto label_21b394;
        }
    }
    ctx->pc = 0x21B378u;
label_21b378:
    // 0x21b378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21b37c:
    // 0x21b37c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21b380:
    // 0x21b380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21b384:
    // 0x21b384: 0x0  nop
    ctx->pc = 0x21b384u;
    // NOP
label_21b388:
    // 0x21b388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21b388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_21b38c:
    // 0x21b38c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x21b38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_21b390:
    // 0x21b390: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x21b390u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_21b394:
    // 0x21b394: 0xc088ade  jal         func_222B78
label_21b398:
    if (ctx->pc == 0x21B398u) {
        ctx->pc = 0x21B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B394u;
        // 0x21b398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B39Cu;
        goto label_21b39c;
    }
    ctx->pc = 0x21B394u;
    SET_GPR_U32(ctx, 31, 0x21B39Cu);
    ctx->pc = 0x21B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B394u;
    // 0x21b398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x21B394u, 0x21B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B39Cu;
label_21b39c:
    // 0x21b39c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b3a0:
    // 0x21b3a0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x21b3a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_21b3a4:
    // 0x21b3a4: 0x522000e4  beql        $s1, $zero, . + 4 + (0xE4 << 2)
label_21b3a8:
    if (ctx->pc == 0x21B3A8u) {
        ctx->pc = 0x21B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3A4u;
        // 0x21b3a8: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3ACu;
        goto label_21b3ac;
    }
    ctx->pc = 0x21B3A4u;
    {
        const bool branch_taken_0x21b3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b3a4) {
            ctx->pc = 0x21B3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B3A4u;
            // 0x21b3a8: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B738u;
            goto label_21b738;
        }
    }
    ctx->pc = 0x21B3ACu;
label_21b3ac:
    // 0x21b3ac: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_21b3b0:
    // 0x21b3b0: 0x504000e1  beql        $v0, $zero, . + 4 + (0xE1 << 2)
label_21b3b4:
    if (ctx->pc == 0x21B3B4u) {
        ctx->pc = 0x21B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3B0u;
        // 0x21b3b4: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3B8u;
        goto label_21b3b8;
    }
    ctx->pc = 0x21B3B0u;
    {
        const bool branch_taken_0x21b3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b3b0) {
            ctx->pc = 0x21B3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B3B0u;
            // 0x21b3b4: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B738u;
            goto label_21b738;
        }
    }
    ctx->pc = 0x21B3B8u;
label_21b3b8:
    // 0x21b3b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21b3bc:
    // 0x21b3bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21b3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21b3c0:
    // 0x21b3c0: 0x0  nop
    ctx->pc = 0x21b3c0u;
    // NOP
label_21b3c4:
    // 0x21b3c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x21b3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21b3c8:
    // 0x21b3c8: 0x0  nop
    ctx->pc = 0x21b3c8u;
    // NOP
label_21b3cc:
    // 0x21b3cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_21b3d0:
    if (ctx->pc == 0x21B3D0u) {
        ctx->pc = 0x21B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3CCu;
        // 0x21b3d0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3D4u;
        goto label_21b3d4;
    }
    ctx->pc = 0x21B3CCu;
    {
        const bool branch_taken_0x21b3cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3CCu;
        // 0x21b3d0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3cc) {
            ctx->pc = 0x21B3E8u;
            goto label_21b3e8;
        }
    }
    ctx->pc = 0x21B3D4u;
label_21b3d4:
    // 0x21b3d4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x21b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_21b3d8:
    // 0x21b3d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x21b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21b3dc:
    // 0x21b3dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21b3e0:
    // 0x21b3e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_21b3e4:
    if (ctx->pc == 0x21B3E4u) {
        ctx->pc = 0x21B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3E0u;
        // 0x21b3e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3E8u;
        goto label_21b3e8;
    }
    ctx->pc = 0x21B3E0u;
    {
        const bool branch_taken_0x21b3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b3e0) {
            ctx->pc = 0x21B3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B3E0u;
            // 0x21b3e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B3E8u;
            goto label_21b3e8;
        }
    }
    ctx->pc = 0x21B3E8u;
label_21b3e8:
    // 0x21b3e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b3ec:
    // 0x21b3ec: 0xc088aa4  jal         func_222A90
label_21b3f0:
    if (ctx->pc == 0x21B3F0u) {
        ctx->pc = 0x21B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3ECu;
        // 0x21b3f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3F4u;
        goto label_21b3f4;
    }
    ctx->pc = 0x21B3ECu;
    SET_GPR_U32(ctx, 31, 0x21B3F4u);
    ctx->pc = 0x21B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3ECu;
    // 0x21b3f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x21B3ECu, 0x21B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3F4u;
label_21b3f4:
    // 0x21b3f4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_21b3f8:
    if (ctx->pc == 0x21B3F8u) {
        ctx->pc = 0x21B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3F4u;
        // 0x21b3f8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B3FCu;
        goto label_21b3fc;
    }
    ctx->pc = 0x21B3F4u;
    {
        const bool branch_taken_0x21b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b3f4) {
            ctx->pc = 0x21B3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B3F4u;
            // 0x21b3f8: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4A8u;
            goto label_21b4a8;
        }
    }
    ctx->pc = 0x21B3FCu;
label_21b3fc:
    // 0x21b3fc: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21b3fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21b400:
    // 0x21b400: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b400u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21b404:
    // 0x21b404: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_21b408:
    if (ctx->pc == 0x21B408u) {
        ctx->pc = 0x21B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B404u;
        // 0x21b408: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B40Cu;
        goto label_21b40c;
    }
    ctx->pc = 0x21B404u;
    {
        const bool branch_taken_0x21b404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B404u;
        // 0x21b408: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b404) {
            ctx->pc = 0x21B4DCu;
            goto label_21b4dc;
        }
    }
    ctx->pc = 0x21B40Cu;
label_21b40c:
    // 0x21b40c: 0xc089b98  jal         func_226E60
label_21b410:
    if (ctx->pc == 0x21B410u) {
        ctx->pc = 0x21B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B40Cu;
        // 0x21b410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B414u;
        goto label_21b414;
    }
    ctx->pc = 0x21B40Cu;
    SET_GPR_U32(ctx, 31, 0x21B414u);
    ctx->pc = 0x21B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B40Cu;
    // 0x21b410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x21B40Cu, 0x21B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B414u;
label_21b414:
    // 0x21b414: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_21b418:
    if (ctx->pc == 0x21B418u) {
        ctx->pc = 0x21B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B414u;
        // 0x21b418: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B41Cu;
        goto label_21b41c;
    }
    ctx->pc = 0x21B414u;
    {
        const bool branch_taken_0x21b414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b414) {
            ctx->pc = 0x21B418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B414u;
            // 0x21b418: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4E0u;
            goto label_21b4e0;
        }
    }
    ctx->pc = 0x21B41Cu;
label_21b41c:
    // 0x21b41c: 0xc087502  jal         func_21D408
label_21b420:
    if (ctx->pc == 0x21B420u) {
        ctx->pc = 0x21B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B41Cu;
        // 0x21b420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B424u;
        goto label_21b424;
    }
    ctx->pc = 0x21B41Cu;
    SET_GPR_U32(ctx, 31, 0x21B424u);
    ctx->pc = 0x21B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B41Cu;
    // 0x21b420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21B41Cu, 0x21B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B424u;
label_21b424:
    // 0x21b424: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21b428:
    // 0x21b428: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21b42c:
    // 0x21b42c: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
label_21b430:
    if (ctx->pc == 0x21B430u) {
        ctx->pc = 0x21B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B42Cu;
        // 0x21b430: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B434u;
        goto label_21b434;
    }
    ctx->pc = 0x21B42Cu;
    {
        const bool branch_taken_0x21b42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b42c) {
            ctx->pc = 0x21B430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B42Cu;
            // 0x21b430: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4E0u;
            goto label_21b4e0;
        }
    }
    ctx->pc = 0x21B434u;
label_21b434:
    // 0x21b434: 0xc08a096  jal         func_228258
label_21b438:
    if (ctx->pc == 0x21B438u) {
        ctx->pc = 0x21B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B434u;
        // 0x21b438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B43Cu;
        goto label_21b43c;
    }
    ctx->pc = 0x21B434u;
    SET_GPR_U32(ctx, 31, 0x21B43Cu);
    ctx->pc = 0x21B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B434u;
    // 0x21b438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x21B434u, 0x21B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B43Cu;
label_21b43c:
    // 0x21b43c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_21b440:
    if (ctx->pc == 0x21B440u) {
        ctx->pc = 0x21B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B43Cu;
        // 0x21b440: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B444u;
        goto label_21b444;
    }
    ctx->pc = 0x21B43Cu;
    {
        const bool branch_taken_0x21b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b43c) {
            ctx->pc = 0x21B440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B43Cu;
            // 0x21b440: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4E0u;
            goto label_21b4e0;
        }
    }
    ctx->pc = 0x21B444u;
label_21b444:
    // 0x21b444: 0xc0a47b4  jal         func_291ED0
label_21b448:
    if (ctx->pc == 0x21B448u) {
        ctx->pc = 0x21B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B444u;
        // 0x21b448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B44Cu;
        goto label_21b44c;
    }
    ctx->pc = 0x21B444u;
    SET_GPR_U32(ctx, 31, 0x21B44Cu);
    ctx->pc = 0x21B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B444u;
    // 0x21b448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x21B444u, 0x21B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B44Cu;
label_21b44c:
    // 0x21b44c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_21b450:
    if (ctx->pc == 0x21B450u) {
        ctx->pc = 0x21B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B44Cu;
        // 0x21b450: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B454u;
        goto label_21b454;
    }
    ctx->pc = 0x21B44Cu;
    {
        const bool branch_taken_0x21b44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b44c) {
            ctx->pc = 0x21B450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B44Cu;
            // 0x21b450: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4E0u;
            goto label_21b4e0;
        }
    }
    ctx->pc = 0x21B454u;
label_21b454:
    // 0x21b454: 0xc088bbc  jal         func_222EF0
label_21b458:
    if (ctx->pc == 0x21B458u) {
        ctx->pc = 0x21B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B454u;
        // 0x21b458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B45Cu;
        goto label_21b45c;
    }
    ctx->pc = 0x21B454u;
    SET_GPR_U32(ctx, 31, 0x21B45Cu);
    ctx->pc = 0x21B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B454u;
    // 0x21b458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x21B454u, 0x21B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B45Cu;
label_21b45c:
    // 0x21b45c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x21b45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_21b460:
    // 0x21b460: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21b460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21b464:
    // 0x21b464: 0x0  nop
    ctx->pc = 0x21b464u;
    // NOP
label_21b468:
    // 0x21b468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21b468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21b46c:
    // 0x21b46c: 0x0  nop
    ctx->pc = 0x21b46cu;
    // NOP
label_21b470:
    // 0x21b470: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_21b474:
    if (ctx->pc == 0x21B474u) {
        ctx->pc = 0x21B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B470u;
        // 0x21b474: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B478u;
        goto label_21b478;
    }
    ctx->pc = 0x21B470u;
    {
        const bool branch_taken_0x21b470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B470u;
        // 0x21b474: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b470) {
            ctx->pc = 0x21B4DCu;
            goto label_21b4dc;
        }
    }
    ctx->pc = 0x21B478u;
label_21b478:
    // 0x21b478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21b478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21b47c:
    // 0x21b47c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21b47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21b480:
    // 0x21b480: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x21b480u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21b484:
    // 0x21b484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b488:
    // 0x21b488: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x21b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_21b48c:
    // 0x21b48c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21b48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b490:
    // 0x21b490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21b490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b494:
    // 0x21b494: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21b494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b498:
    // 0x21b498: 0xc088178  jal         func_2205E0
label_21b49c:
    if (ctx->pc == 0x21B49Cu) {
        ctx->pc = 0x21B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B498u;
        // 0x21b49c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4A0u;
        goto label_21b4a0;
    }
    ctx->pc = 0x21B498u;
    SET_GPR_U32(ctx, 31, 0x21B4A0u);
    ctx->pc = 0x21B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B498u;
    // 0x21b49c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x21B498u, 0x21B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4A0u;
label_21b4a0:
    // 0x21b4a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_21b4a4:
    if (ctx->pc == 0x21B4A4u) {
        ctx->pc = 0x21B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4A0u;
        // 0x21b4a4: 0xa2200194  sb          $zero, 0x194($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4A8u;
        goto label_21b4a8;
    }
    ctx->pc = 0x21B4A0u;
    {
        const bool branch_taken_0x21b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4A0u;
        // 0x21b4a4: 0xa2200194  sb          $zero, 0x194($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4a0) {
            ctx->pc = 0x21B4DCu;
            goto label_21b4dc;
        }
    }
    ctx->pc = 0x21B4A8u;
label_21b4a8:
    // 0x21b4a8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x21b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21b4ac:
    // 0x21b4ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21b4b0:
    // 0x21b4b0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_21b4b4:
    if (ctx->pc == 0x21B4B4u) {
        ctx->pc = 0x21B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4B0u;
        // 0x21b4b4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4B8u;
        goto label_21b4b8;
    }
    ctx->pc = 0x21B4B0u;
    {
        const bool branch_taken_0x21b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b4b0) {
            ctx->pc = 0x21B4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B4B0u;
            // 0x21b4b4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4E0u;
            goto label_21b4e0;
        }
    }
    ctx->pc = 0x21B4B8u;
label_21b4b8:
    // 0x21b4b8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21b4b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21b4bc:
    // 0x21b4bc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b4bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21b4c0:
    // 0x21b4c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21b4c4:
    if (ctx->pc == 0x21B4C4u) {
        ctx->pc = 0x21B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4C0u;
        // 0x21b4c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4C8u;
        goto label_21b4c8;
    }
    ctx->pc = 0x21B4C0u;
    {
        const bool branch_taken_0x21b4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4C0u;
        // 0x21b4c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4c0) {
            ctx->pc = 0x21B4DCu;
            goto label_21b4dc;
        }
    }
    ctx->pc = 0x21B4C8u;
label_21b4c8:
    // 0x21b4c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b4cc:
    // 0x21b4cc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21b4d0:
    // 0x21b4d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21b4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b4d4:
    // 0x21b4d4: 0xc13b632  jal         func_4ED8C8
label_21b4d8:
    if (ctx->pc == 0x21B4D8u) {
        ctx->pc = 0x21B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4D4u;
        // 0x21b4d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4DCu;
        goto label_21b4dc;
    }
    ctx->pc = 0x21B4D4u;
    SET_GPR_U32(ctx, 31, 0x21B4DCu);
    ctx->pc = 0x21B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B4D4u;
    // 0x21b4d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x21B4D4u, 0x21B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4DCu;
label_21b4dc:
    // 0x21b4dc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x21b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21b4e0:
    // 0x21b4e0: 0x8e840044  lw          $a0, 0x44($s4)
    ctx->pc = 0x21b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_21b4e4:
    // 0x21b4e4: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21b4e8:
    // 0x21b4e8: 0x80530031  lb          $s3, 0x31($v0)
    ctx->pc = 0x21b4e8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 49)));
label_21b4ec:
    // 0x21b4ec: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21b4ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_21b4f0:
    // 0x21b4f0: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_21b4f4:
    if (ctx->pc == 0x21B4F4u) {
        ctx->pc = 0x21B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4F0u;
        // 0x21b4f4: 0x80950031  lb          $s5, 0x31($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B4F8u;
        goto label_21b4f8;
    }
    ctx->pc = 0x21B4F0u;
    {
        const bool branch_taken_0x21b4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4F0u;
        // 0x21b4f4: 0x80950031  lb          $s5, 0x31($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4f0) {
            ctx->pc = 0x21B5E4u;
            goto label_21b5e4;
        }
    }
    ctx->pc = 0x21B4F8u;
label_21b4f8:
    // 0x21b4f8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x21b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_21b4fc:
    // 0x21b4fc: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_21b500:
    if (ctx->pc == 0x21B500u) {
        ctx->pc = 0x21B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4FCu;
        // 0x21b500: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B504u;
        goto label_21b504;
    }
    ctx->pc = 0x21B4FCu;
    {
        const bool branch_taken_0x21b4fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4FCu;
        // 0x21b500: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4fc) {
            ctx->pc = 0x21B50Cu;
            goto label_21b50c;
        }
    }
    ctx->pc = 0x21B504u;
label_21b504:
    // 0x21b504: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
label_21b508:
    if (ctx->pc == 0x21B508u) {
        ctx->pc = 0x21B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B504u;
        // 0x21b508: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B50Cu;
        goto label_21b50c;
    }
    ctx->pc = 0x21B504u;
    {
        const bool branch_taken_0x21b504 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B504u;
        // 0x21b508: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b504) {
            ctx->pc = 0x21B544u;
            goto label_21b544;
        }
    }
    ctx->pc = 0x21B50Cu;
label_21b50c:
    // 0x21b50c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x21b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_21b510:
    // 0x21b510: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21b514:
    // 0x21b514: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x21b514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_21b518:
    // 0x21b518: 0xc10904c  jal         func_424130
label_21b51c:
    if (ctx->pc == 0x21B51Cu) {
        ctx->pc = 0x21B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B518u;
        // 0x21b51c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B520u;
        goto label_21b520;
    }
    ctx->pc = 0x21B518u;
    SET_GPR_U32(ctx, 31, 0x21B520u);
    ctx->pc = 0x21B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B518u;
    // 0x21b51c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x21B518u, 0x21B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B520u;
label_21b520:
    // 0x21b520: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_21b524:
    if (ctx->pc == 0x21B524u) {
        ctx->pc = 0x21B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B520u;
        // 0x21b524: 0x3aa20006  xori        $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B528u;
        goto label_21b528;
    }
    ctx->pc = 0x21B520u;
    {
        const bool branch_taken_0x21b520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B520u;
        // 0x21b524: 0x3aa20006  xori        $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b520) {
            ctx->pc = 0x21B5E8u;
            goto label_21b5e8;
        }
    }
    ctx->pc = 0x21B528u;
label_21b528:
    // 0x21b528: 0xc08a218  jal         func_228860
label_21b52c:
    if (ctx->pc == 0x21B52Cu) {
        ctx->pc = 0x21B530u;
        goto label_21b530;
    }
    ctx->pc = 0x21B528u;
    SET_GPR_U32(ctx, 31, 0x21B530u);
    ctx->pc = 0x228860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228860u, 0x21B528u, 0x21B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B530u;
label_21b530:
    // 0x21b530: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21b530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21b534:
    // 0x21b534: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
label_21b538:
    if (ctx->pc == 0x21B538u) {
        ctx->pc = 0x21B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B534u;
        // 0x21b538: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B53Cu;
        goto label_21b53c;
    }
    ctx->pc = 0x21B534u;
    {
        const bool branch_taken_0x21b534 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B534u;
        // 0x21b538: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b534) {
            ctx->pc = 0x21B594u;
            goto label_21b594;
        }
    }
    ctx->pc = 0x21B53Cu;
label_21b53c:
    // 0x21b53c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_21b540:
    if (ctx->pc == 0x21B540u) {
        ctx->pc = 0x21B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B53Cu;
        // 0x21b540: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B544u;
        goto label_21b544;
    }
    ctx->pc = 0x21B53Cu;
    {
        const bool branch_taken_0x21b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B53Cu;
        // 0x21b540: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b53c) {
            ctx->pc = 0x21B5ACu;
            goto label_21b5ac;
        }
    }
    ctx->pc = 0x21B544u;
label_21b544:
    // 0x21b544: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_21b548:
    if (ctx->pc == 0x21B548u) {
        ctx->pc = 0x21B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B544u;
        // 0x21b548: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B54Cu;
        goto label_21b54c;
    }
    ctx->pc = 0x21B544u;
    {
        const bool branch_taken_0x21b544 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B544u;
        // 0x21b548: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b544) {
            ctx->pc = 0x21B564u;
            goto label_21b564;
        }
    }
    ctx->pc = 0x21B54Cu;
label_21b54c:
    // 0x21b54c: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_21b550:
    if (ctx->pc == 0x21B550u) {
        ctx->pc = 0x21B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B54Cu;
        // 0x21b550: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B554u;
        goto label_21b554;
    }
    ctx->pc = 0x21B54Cu;
    {
        const bool branch_taken_0x21b54c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B54Cu;
        // 0x21b550: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b54c) {
            ctx->pc = 0x21B564u;
            goto label_21b564;
        }
    }
    ctx->pc = 0x21B554u;
label_21b554:
    // 0x21b554: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_21b558:
    if (ctx->pc == 0x21B558u) {
        ctx->pc = 0x21B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B554u;
        // 0x21b558: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B55Cu;
        goto label_21b55c;
    }
    ctx->pc = 0x21B554u;
    {
        const bool branch_taken_0x21b554 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B554u;
        // 0x21b558: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b554) {
            ctx->pc = 0x21B564u;
            goto label_21b564;
        }
    }
    ctx->pc = 0x21B55Cu;
label_21b55c:
    // 0x21b55c: 0x16620022  bne         $s3, $v0, . + 4 + (0x22 << 2)
label_21b560:
    if (ctx->pc == 0x21B560u) {
        ctx->pc = 0x21B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B55Cu;
        // 0x21b560: 0x3aa20006  xori        $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B564u;
        goto label_21b564;
    }
    ctx->pc = 0x21B55Cu;
    {
        const bool branch_taken_0x21b55c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B55Cu;
        // 0x21b560: 0x3aa20006  xori        $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b55c) {
            ctx->pc = 0x21B5E8u;
            goto label_21b5e8;
        }
    }
    ctx->pc = 0x21B564u;
label_21b564:
    // 0x21b564: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x21b564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_21b568:
    // 0x21b568: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21b56c:
    // 0x21b56c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x21b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_21b570:
    // 0x21b570: 0xc10904c  jal         func_424130
label_21b574:
    if (ctx->pc == 0x21B574u) {
        ctx->pc = 0x21B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B570u;
        // 0x21b574: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B578u;
        goto label_21b578;
    }
    ctx->pc = 0x21B570u;
    SET_GPR_U32(ctx, 31, 0x21B578u);
    ctx->pc = 0x21B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B570u;
    // 0x21b574: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x21B570u, 0x21B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B578u;
label_21b578:
    // 0x21b578: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_21b57c:
    if (ctx->pc == 0x21B57Cu) {
        ctx->pc = 0x21B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B578u;
        // 0x21b57c: 0x3aa20006  xori        $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B580u;
        goto label_21b580;
    }
    ctx->pc = 0x21B578u;
    {
        const bool branch_taken_0x21b578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B578u;
        // 0x21b57c: 0x3aa20006  xori        $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b578) {
            ctx->pc = 0x21B5E8u;
            goto label_21b5e8;
        }
    }
    ctx->pc = 0x21B580u;
label_21b580:
    // 0x21b580: 0xc08a218  jal         func_228860
label_21b584:
    if (ctx->pc == 0x21B584u) {
        ctx->pc = 0x21B588u;
        goto label_21b588;
    }
    ctx->pc = 0x21B580u;
    SET_GPR_U32(ctx, 31, 0x21B588u);
    ctx->pc = 0x228860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228860u, 0x21B580u, 0x21B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B588u;
label_21b588:
    // 0x21b588: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x21b588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_21b58c:
    // 0x21b58c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_21b590:
    if (ctx->pc == 0x21B590u) {
        ctx->pc = 0x21B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B58Cu;
        // 0x21b590: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B594u;
        goto label_21b594;
    }
    ctx->pc = 0x21B58Cu;
    {
        const bool branch_taken_0x21b58c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B58Cu;
        // 0x21b590: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b58c) {
            ctx->pc = 0x21B5A8u;
            goto label_21b5a8;
        }
    }
    ctx->pc = 0x21B594u;
label_21b594:
    // 0x21b594: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21b594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21b598:
    // 0x21b598: 0x0  nop
    ctx->pc = 0x21b598u;
    // NOP
label_21b59c:
    // 0x21b59c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x21b59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_21b5a0:
    // 0x21b5a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_21b5a4:
    if (ctx->pc == 0x21B5A4u) {
        ctx->pc = 0x21B5A8u;
        goto label_21b5a8;
    }
    ctx->pc = 0x21B5A0u;
    {
        const bool branch_taken_0x21b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b5a0) {
            ctx->pc = 0x21B5C0u;
            goto label_21b5c0;
        }
    }
    ctx->pc = 0x21B5A8u;
label_21b5a8:
    // 0x21b5a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21b5ac:
    // 0x21b5ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21b5b0:
    // 0x21b5b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21b5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21b5b4:
    // 0x21b5b4: 0x0  nop
    ctx->pc = 0x21b5b4u;
    // NOP
label_21b5b8:
    // 0x21b5b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x21b5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_21b5bc:
    // 0x21b5bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x21b5bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_21b5c0:
    // 0x21b5c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x21b5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_21b5c4:
    // 0x21b5c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21b5c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_21b5c8:
    // 0x21b5c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21b5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21b5cc:
    // 0x21b5cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21b5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_21b5d0:
    // 0x21b5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21b5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21b5d4:
    // 0x21b5d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21b5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21b5d8:
    // 0x21b5d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x21b5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_21b5dc:
    // 0x21b5dc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x21b5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_21b5e0:
    // 0x21b5e0: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x21b5e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21b5e4:
    // 0x21b5e4: 0x3aa20006  xori        $v0, $s5, 0x6
    ctx->pc = 0x21b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)6);
label_21b5e8:
    // 0x21b5e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21b5ec:
    // 0x21b5ec: 0x151827  nor         $v1, $zero, $s5
    ctx->pc = 0x21b5ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
label_21b5f0:
    // 0x21b5f0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x21b5f0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21b5f4:
    // 0x21b5f4: 0x83a80a  movz        $s5, $a0, $v1
    ctx->pc = 0x21b5f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
label_21b5f8:
    // 0x21b5f8: 0x3c050140  lui         $a1, 0x140
    ctx->pc = 0x21b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
label_21b5fc:
    // 0x21b5fc: 0xc089998  jal         func_226660
label_21b600:
    if (ctx->pc == 0x21B600u) {
        ctx->pc = 0x21B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5FCu;
        // 0x21b600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B604u;
        goto label_21b604;
    }
    ctx->pc = 0x21B5FCu;
    SET_GPR_U32(ctx, 31, 0x21B604u);
    ctx->pc = 0x21B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5FCu;
    // 0x21b600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21B5FCu, 0x21B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B604u;
label_21b604:
    // 0x21b604: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_21b608:
    if (ctx->pc == 0x21B608u) {
        ctx->pc = 0x21B60Cu;
        goto label_21b60c;
    }
    ctx->pc = 0x21B604u;
    {
        const bool branch_taken_0x21b604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b604) {
            ctx->pc = 0x21B644u;
            goto label_21b644;
        }
    }
    ctx->pc = 0x21B60Cu;
label_21b60c:
    // 0x21b60c: 0x8e4801a0  lw          $t0, 0x1A0($s2)
    ctx->pc = 0x21b60cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_21b610:
    // 0x21b610: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_21b614:
    if (ctx->pc == 0x21B614u) {
        ctx->pc = 0x21B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B610u;
        // 0x21b614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B618u;
        goto label_21b618;
    }
    ctx->pc = 0x21B610u;
    {
        const bool branch_taken_0x21b610 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B610u;
        // 0x21b614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b610) {
            ctx->pc = 0x21B668u;
            goto label_21b668;
        }
    }
    ctx->pc = 0x21B618u;
label_21b618:
    // 0x21b618: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x21b618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_21b61c:
    // 0x21b61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b620:
    // 0x21b620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b624:
    // 0x21b624: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21b624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21b628:
    // 0x21b628: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21b62c:
    // 0x21b62c: 0x40f809  jalr        $v0
label_21b630:
    if (ctx->pc == 0x21B630u) {
        ctx->pc = 0x21B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B62Cu;
        // 0x21b630: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B634u;
        goto label_21b634;
    }
    ctx->pc = 0x21B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B634u);
        ctx->pc = 0x21B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B62Cu;
        // 0x21b630: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B62Cu, 0x21B634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B634u;
label_21b634:
    // 0x21b634: 0x94430032  lhu         $v1, 0x32($v0)
    ctx->pc = 0x21b634u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_21b638:
    // 0x21b638: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x21b638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_21b63c:
    // 0x21b63c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_21b640:
    if (ctx->pc == 0x21B640u) {
        ctx->pc = 0x21B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B63Cu;
        // 0x21b640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B644u;
        goto label_21b644;
    }
    ctx->pc = 0x21B63Cu;
    {
        const bool branch_taken_0x21b63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B63Cu;
        // 0x21b640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b63c) {
            ctx->pc = 0x21B66Cu;
            goto label_21b66c;
        }
    }
    ctx->pc = 0x21B644u;
label_21b644:
    // 0x21b644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21b644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21b648:
    // 0x21b648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21b648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21b64c:
    // 0x21b64c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b650:
    // 0x21b650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b654:
    // 0x21b654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21b654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b658:
    // 0x21b658: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x21b658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21b65c:
    // 0x21b65c: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x21b65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21b660:
    // 0x21b660: 0xc0882b2  jal         func_220AC8
label_21b664:
    if (ctx->pc == 0x21B664u) {
        ctx->pc = 0x21B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B660u;
        // 0x21b664: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B668u;
        goto label_21b668;
    }
    ctx->pc = 0x21B660u;
    SET_GPR_U32(ctx, 31, 0x21B668u);
    ctx->pc = 0x21B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B660u;
    // 0x21b664: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x21B660u, 0x21B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B668u;
label_21b668:
    // 0x21b668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b66c:
    // 0x21b66c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21b66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b670:
    // 0x21b670: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21b670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21b674:
    // 0x21b674: 0xc08837c  jal         func_220DF0
label_21b678:
    if (ctx->pc == 0x21B678u) {
        ctx->pc = 0x21B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B674u;
        // 0x21b678: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B67Cu;
        goto label_21b67c;
    }
    ctx->pc = 0x21B674u;
    SET_GPR_U32(ctx, 31, 0x21B67Cu);
    ctx->pc = 0x21B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B674u;
    // 0x21b678: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220DF0u, 0x21B674u, 0x21B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B67Cu;
label_21b67c:
    // 0x21b67c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21b67cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21b680:
    // 0x21b680: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x21b680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_21b684:
    // 0x21b684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b688:
    // 0x21b688: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21b688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b68c:
    // 0x21b68c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x21b68cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21b690:
    // 0x21b690: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21b690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b694:
    // 0x21b694: 0xc0875a0  jal         func_21D680
label_21b698:
    if (ctx->pc == 0x21B698u) {
        ctx->pc = 0x21B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B694u;
        // 0x21b698: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B69Cu;
        goto label_21b69c;
    }
    ctx->pc = 0x21B694u;
    SET_GPR_U32(ctx, 31, 0x21B69Cu);
    ctx->pc = 0x21B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B694u;
    // 0x21b698: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x21B694u, 0x21B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B69Cu;
label_21b69c:
    // 0x21b69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b6a0:
    // 0x21b6a0: 0xc089998  jal         func_226660
label_21b6a4:
    if (ctx->pc == 0x21B6A4u) {
        ctx->pc = 0x21B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A0u;
        // 0x21b6a4: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6A8u;
        goto label_21b6a8;
    }
    ctx->pc = 0x21B6A0u;
    SET_GPR_U32(ctx, 31, 0x21B6A8u);
    ctx->pc = 0x21B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6A0u;
    // 0x21b6a4: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21B6A0u, 0x21B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6A8u;
label_21b6a8:
    // 0x21b6a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_21b6ac:
    if (ctx->pc == 0x21B6ACu) {
        ctx->pc = 0x21B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A8u;
        // 0x21b6ac: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6B0u;
        goto label_21b6b0;
    }
    ctx->pc = 0x21B6A8u;
    {
        const bool branch_taken_0x21b6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A8u;
        // 0x21b6ac: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6a8) {
            ctx->pc = 0x21B6F4u;
            goto label_21b6f4;
        }
    }
    ctx->pc = 0x21B6B0u;
label_21b6b0:
    // 0x21b6b0: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x21b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_21b6b4:
    // 0x21b6b4: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x21b6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_21b6b8:
    // 0x21b6b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21b6bc:
    // 0x21b6bc: 0x40f809  jalr        $v0
label_21b6c0:
    if (ctx->pc == 0x21B6C0u) {
        ctx->pc = 0x21B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6BCu;
        // 0x21b6c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6C4u;
        goto label_21b6c4;
    }
    ctx->pc = 0x21B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B6C4u);
        ctx->pc = 0x21B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6BCu;
        // 0x21b6c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B6BCu, 0x21B6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B6C4u;
label_21b6c4:
    // 0x21b6c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b6c8:
    // 0x21b6c8: 0xc088eb4  jal         func_223AD0
label_21b6cc:
    if (ctx->pc == 0x21B6CCu) {
        ctx->pc = 0x21B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6C8u;
        // 0x21b6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6D0u;
        goto label_21b6d0;
    }
    ctx->pc = 0x21B6C8u;
    SET_GPR_U32(ctx, 31, 0x21B6D0u);
    ctx->pc = 0x21B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6C8u;
    // 0x21b6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x21B6C8u, 0x21B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6D0u;
label_21b6d0:
    // 0x21b6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b6d4:
    // 0x21b6d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21b6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b6d8:
    // 0x21b6d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21b6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b6dc:
    // 0x21b6dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x21b6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b6e0:
    // 0x21b6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21b6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b6e4:
    // 0x21b6e4: 0xc08764a  jal         func_21D928
label_21b6e8:
    if (ctx->pc == 0x21B6E8u) {
        ctx->pc = 0x21B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6E4u;
        // 0x21b6e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6ECu;
        goto label_21b6ec;
    }
    ctx->pc = 0x21B6E4u;
    SET_GPR_U32(ctx, 31, 0x21B6ECu);
    ctx->pc = 0x21B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6E4u;
    // 0x21b6e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D928u, 0x21B6E4u, 0x21B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6ECu;
label_21b6ec:
    // 0x21b6ec: 0x10000242  b           . + 4 + (0x242 << 2)
label_21b6f0:
    if (ctx->pc == 0x21B6F0u) {
        ctx->pc = 0x21B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6ECu;
        // 0x21b6f0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6F4u;
        goto label_21b6f4;
    }
    ctx->pc = 0x21B6ECu;
    {
        const bool branch_taken_0x21b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6ECu;
        // 0x21b6f0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6ec) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21B6F4u;
label_21b6f4:
    // 0x21b6f4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x21b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_21b6f8:
    // 0x21b6f8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x21b6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_21b6fc:
    // 0x21b6fc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21b700:
    // 0x21b700: 0x40f809  jalr        $v0
label_21b704:
    if (ctx->pc == 0x21B704u) {
        ctx->pc = 0x21B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B700u;
        // 0x21b704: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B708u;
        goto label_21b708;
    }
    ctx->pc = 0x21B700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B708u);
        ctx->pc = 0x21B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B700u;
        // 0x21b704: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B700u, 0x21B708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B708u;
label_21b708:
    // 0x21b708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b70c:
    // 0x21b70c: 0xc088eb4  jal         func_223AD0
label_21b710:
    if (ctx->pc == 0x21B710u) {
        ctx->pc = 0x21B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B70Cu;
        // 0x21b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B714u;
        goto label_21b714;
    }
    ctx->pc = 0x21B70Cu;
    SET_GPR_U32(ctx, 31, 0x21B714u);
    ctx->pc = 0x21B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B70Cu;
    // 0x21b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x21B70Cu, 0x21B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B714u;
label_21b714:
    // 0x21b714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b718:
    // 0x21b718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21b718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b71c:
    // 0x21b71c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21b71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b720:
    // 0x21b720: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21b720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21b724:
    // 0x21b724: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21b724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b728:
    // 0x21b728: 0xc08764a  jal         func_21D928
label_21b72c:
    if (ctx->pc == 0x21B72Cu) {
        ctx->pc = 0x21B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B728u;
        // 0x21b72c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B730u;
        goto label_21b730;
    }
    ctx->pc = 0x21B728u;
    SET_GPR_U32(ctx, 31, 0x21B730u);
    ctx->pc = 0x21B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B728u;
    // 0x21b72c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D928u, 0x21B728u, 0x21B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B730u;
label_21b730:
    // 0x21b730: 0x10000231  b           . + 4 + (0x231 << 2)
label_21b734:
    if (ctx->pc == 0x21B734u) {
        ctx->pc = 0x21B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B730u;
        // 0x21b734: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B738u;
        goto label_21b738;
    }
    ctx->pc = 0x21B730u;
    {
        const bool branch_taken_0x21b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B730u;
        // 0x21b734: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b730) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21B738u;
label_21b738:
    // 0x21b738: 0x50a001dd  beql        $a1, $zero, . + 4 + (0x1DD << 2)
label_21b73c:
    if (ctx->pc == 0x21B73Cu) {
        ctx->pc = 0x21B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B738u;
        // 0x21b73c: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B740u;
        goto label_21b740;
    }
    ctx->pc = 0x21B738u;
    {
        const bool branch_taken_0x21b738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b738) {
            ctx->pc = 0x21B73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B738u;
            // 0x21b73c: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BEB0u;
            goto label_21beb0;
        }
    }
    ctx->pc = 0x21B740u;
label_21b740:
    // 0x21b740: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x21b740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_21b744:
    // 0x21b744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21b744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21b748:
    // 0x21b748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b74c:
    // 0x21b74c: 0xc0a4daa  jal         func_2936A8
label_21b750:
    if (ctx->pc == 0x21B750u) {
        ctx->pc = 0x21B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B74Cu;
        // 0x21b750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B754u;
        goto label_21b754;
    }
    ctx->pc = 0x21B74Cu;
    SET_GPR_U32(ctx, 31, 0x21B754u);
    ctx->pc = 0x21B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B74Cu;
    // 0x21b750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x21B74Cu, 0x21B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B754u;
label_21b754:
    // 0x21b754: 0xc0e2612  jal         func_389848
label_21b758:
    if (ctx->pc == 0x21B758u) {
        ctx->pc = 0x21B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B754u;
        // 0x21b758: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B75Cu;
        goto label_21b75c;
    }
    ctx->pc = 0x21B754u;
    SET_GPR_U32(ctx, 31, 0x21B75Cu);
    ctx->pc = 0x21B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B754u;
    // 0x21b758: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x21B754u, 0x21B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B75Cu;
label_21b75c:
    // 0x21b75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b760:
    // 0x21b760: 0x12000089  beqz        $s0, . + 4 + (0x89 << 2)
label_21b764:
    if (ctx->pc == 0x21B764u) {
        ctx->pc = 0x21B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B760u;
        // 0x21b764: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B768u;
        goto label_21b768;
    }
    ctx->pc = 0x21B760u;
    {
        const bool branch_taken_0x21b760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B760u;
        // 0x21b764: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b760) {
            ctx->pc = 0x21B988u;
            goto label_21b988;
        }
    }
    ctx->pc = 0x21B768u;
label_21b768:
    // 0x21b768: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21b768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21b76c:
    // 0x21b76c: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x21b76cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21b770:
    // 0x21b770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21b774:
    // 0x21b774: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21b774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21b778:
    // 0x21b778: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x21b778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_21b77c:
    // 0x21b77c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x21b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_21b780:
    // 0x21b780: 0x40f809  jalr        $v0
label_21b784:
    if (ctx->pc == 0x21B784u) {
        ctx->pc = 0x21B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B780u;
        // 0x21b784: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B788u;
        goto label_21b788;
    }
    ctx->pc = 0x21B780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B788u);
        ctx->pc = 0x21B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B780u;
        // 0x21b784: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B780u, 0x21B788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B788u;
label_21b788:
    // 0x21b788: 0x8e0511f0  lw          $a1, 0x11F0($s0)
    ctx->pc = 0x21b788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4592)));
label_21b78c:
    // 0x21b78c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x21b78cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21b790:
    // 0x21b790: 0x8e0611f4  lw          $a2, 0x11F4($s0)
    ctx->pc = 0x21b790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4596)));
label_21b794:
    // 0x21b794: 0x8e0311f8  lw          $v1, 0x11F8($s0)
    ctx->pc = 0x21b794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4600)));
label_21b798:
    // 0x21b798: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x21b798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_21b79c:
    // 0x21b79c: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x21b79cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21b7a0:
    // 0x21b7a0: 0x651827  nor         $v1, $v1, $a1
    ctx->pc = 0x21b7a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 5)));
label_21b7a4:
    // 0x21b7a4: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x21b7a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21b7a8:
    // 0x21b7a8: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x21b7a8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_21b7ac:
    // 0x21b7ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_21b7b0:
    if (ctx->pc == 0x21B7B0u) {
        ctx->pc = 0x21B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7ACu;
        // 0x21b7b0: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7B4u;
        goto label_21b7b4;
    }
    ctx->pc = 0x21B7ACu;
    {
        const bool branch_taken_0x21b7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7ACu;
        // 0x21b7b0: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7ac) {
            ctx->pc = 0x21B7BCu;
            goto label_21b7bc;
        }
    }
    ctx->pc = 0x21B7B4u;
label_21b7b4:
    // 0x21b7b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21b7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_21b7b8:
    // 0x21b7b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21b7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21b7bc:
    // 0x21b7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b7c0:
    // 0x21b7c0: 0xc089998  jal         func_226660
label_21b7c4:
    if (ctx->pc == 0x21B7C4u) {
        ctx->pc = 0x21B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C0u;
        // 0x21b7c4: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7C8u;
        goto label_21b7c8;
    }
    ctx->pc = 0x21B7C0u;
    SET_GPR_U32(ctx, 31, 0x21B7C8u);
    ctx->pc = 0x21B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7C0u;
    // 0x21b7c4: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21B7C0u, 0x21B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7C8u;
label_21b7c8:
    // 0x21b7c8: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_21b7cc:
    if (ctx->pc == 0x21B7CCu) {
        ctx->pc = 0x21B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C8u;
        // 0x21b7cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7D0u;
        goto label_21b7d0;
    }
    ctx->pc = 0x21B7C8u;
    {
        const bool branch_taken_0x21b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C8u;
        // 0x21b7cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7c8) {
            ctx->pc = 0x21B8E4u;
            goto label_21b8e4;
        }
    }
    ctx->pc = 0x21B7D0u;
label_21b7d0:
    // 0x21b7d0: 0xc089a76  jal         func_2269D8
label_21b7d4:
    if (ctx->pc == 0x21B7D4u) {
        ctx->pc = 0x21B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7D0u;
        // 0x21b7d4: 0x2414001a  addiu       $s4, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7D8u;
        goto label_21b7d8;
    }
    ctx->pc = 0x21B7D0u;
    SET_GPR_U32(ctx, 31, 0x21B7D8u);
    ctx->pc = 0x21B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7D0u;
    // 0x21b7d4: 0x2414001a  addiu       $s4, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x21B7D0u, 0x21B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7D8u;
label_21b7d8:
    // 0x21b7d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b7dc:
    // 0x21b7dc: 0xc08a0fa  jal         func_2283E8
label_21b7e0:
    if (ctx->pc == 0x21B7E0u) {
        ctx->pc = 0x21B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7DCu;
        // 0x21b7e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7E4u;
        goto label_21b7e4;
    }
    ctx->pc = 0x21B7DCu;
    SET_GPR_U32(ctx, 31, 0x21B7E4u);
    ctx->pc = 0x21B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7DCu;
    // 0x21b7e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283E8u, 0x21B7DCu, 0x21B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7E4u;
label_21b7e4:
    // 0x21b7e4: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_21b7e8:
    if (ctx->pc == 0x21B7E8u) {
        ctx->pc = 0x21B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7E4u;
        // 0x21b7e8: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7ECu;
        goto label_21b7ec;
    }
    ctx->pc = 0x21B7E4u;
    {
        const bool branch_taken_0x21b7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b7e4) {
            ctx->pc = 0x21B7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B7E4u;
            // 0x21b7e8: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B8B4u;
            goto label_21b8b4;
        }
    }
    ctx->pc = 0x21B7ECu;
label_21b7ec:
    // 0x21b7ec: 0x52200031  beql        $s1, $zero, . + 4 + (0x31 << 2)
label_21b7f0:
    if (ctx->pc == 0x21B7F0u) {
        ctx->pc = 0x21B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7ECu;
        // 0x21b7f0: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B7F4u;
        goto label_21b7f4;
    }
    ctx->pc = 0x21B7ECu;
    {
        const bool branch_taken_0x21b7ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b7ec) {
            ctx->pc = 0x21B7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B7ECu;
            // 0x21b7f0: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B8B4u;
            goto label_21b8b4;
        }
    }
    ctx->pc = 0x21B7F4u;
label_21b7f4:
    // 0x21b7f4: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x21b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_21b7f8:
    // 0x21b7f8: 0x84620144  lh          $v0, 0x144($v1)
    ctx->pc = 0x21b7f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 324)));
label_21b7fc:
    // 0x21b7fc: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x21b7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_21b800:
    // 0x21b800: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_21b804:
    if (ctx->pc == 0x21B804u) {
        ctx->pc = 0x21B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B800u;
        // 0x21b804: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B808u;
        goto label_21b808;
    }
    ctx->pc = 0x21B800u;
    {
        const bool branch_taken_0x21b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B800u;
        // 0x21b804: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b800) {
            ctx->pc = 0x21B82Cu;
            goto label_21b82c;
        }
    }
    ctx->pc = 0x21B808u;
label_21b808:
    // 0x21b808: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21b808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_21b80c:
    // 0x21b80c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x21b80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
label_21b810:
    // 0x21b810: 0xc08997c  jal         func_2265F0
label_21b814:
    if (ctx->pc == 0x21B814u) {
        ctx->pc = 0x21B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B810u;
        // 0x21b814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B818u;
        goto label_21b818;
    }
    ctx->pc = 0x21B810u;
    SET_GPR_U32(ctx, 31, 0x21B818u);
    ctx->pc = 0x21B814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B810u;
    // 0x21b814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x21B810u, 0x21B818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B818u;
label_21b818:
    // 0x21b818: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21b81c:
    if (ctx->pc == 0x21B81Cu) {
        ctx->pc = 0x21B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B818u;
        // 0x21b81c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B820u;
        goto label_21b820;
    }
    ctx->pc = 0x21B818u;
    {
        const bool branch_taken_0x21b818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B818u;
        // 0x21b81c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b818) {
            ctx->pc = 0x21B82Cu;
            goto label_21b82c;
        }
    }
    ctx->pc = 0x21B820u;
label_21b820:
    // 0x21b820: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x21b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_21b824:
    // 0x21b824: 0x84430144  lh          $v1, 0x144($v0)
    ctx->pc = 0x21b824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
label_21b828:
    // 0x21b828: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x21b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21b82c:
    // 0x21b82c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b82cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b830:
    // 0x21b830: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21b830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b834:
    // 0x21b834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b838:
    // 0x21b838: 0xc0992f6  jal         func_264BD8
label_21b83c:
    if (ctx->pc == 0x21B83Cu) {
        ctx->pc = 0x21B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B838u;
        // 0x21b83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B840u;
        goto label_21b840;
    }
    ctx->pc = 0x21B838u;
    SET_GPR_U32(ctx, 31, 0x21B840u);
    ctx->pc = 0x21B83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B838u;
    // 0x21b83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x21B838u, 0x21B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B840u;
label_21b840:
    // 0x21b840: 0xc047e6c  jal         func_11F9B0
label_21b844:
    if (ctx->pc == 0x21B844u) {
        ctx->pc = 0x21B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B840u;
        // 0x21b844: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B848u;
        goto label_21b848;
    }
    ctx->pc = 0x21B840u;
    SET_GPR_U32(ctx, 31, 0x21B848u);
    ctx->pc = 0x21B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B840u;
    // 0x21b844: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x21B840u, 0x21B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B848u;
label_21b848:
    // 0x21b848: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21b84c:
    // 0x21b84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21b84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b850:
    // 0x21b850: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21b850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b854:
    // 0x21b854: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21b854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b858:
    // 0x21b858: 0x85040158  lh          $a0, 0x158($t0)
    ctx->pc = 0x21b858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 344)));
label_21b85c:
    // 0x21b85c: 0x8d03015c  lw          $v1, 0x15C($t0)
    ctx->pc = 0x21b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 348)));
label_21b860:
    // 0x21b860: 0x60f809  jalr        $v1
label_21b864:
    if (ctx->pc == 0x21B864u) {
        ctx->pc = 0x21B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B860u;
        // 0x21b864: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B868u;
        goto label_21b868;
    }
    ctx->pc = 0x21B860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21B868u);
        ctx->pc = 0x21B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B860u;
        // 0x21b864: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B860u, 0x21B868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B868u;
label_21b868:
    // 0x21b868: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x21b868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_21b86c:
    // 0x21b86c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b86cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21b870:
    // 0x21b870: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_21b874:
    if (ctx->pc == 0x21B874u) {
        ctx->pc = 0x21B878u;
        goto label_21b878;
    }
    ctx->pc = 0x21B870u;
    {
        const bool branch_taken_0x21b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b870) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B878u;
label_21b878:
    // 0x21b878: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_21b87c:
    if (ctx->pc == 0x21B87Cu) {
        ctx->pc = 0x21B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B878u;
        // 0x21b87c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B880u;
        goto label_21b880;
    }
    ctx->pc = 0x21B878u;
    {
        const bool branch_taken_0x21b878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B878u;
        // 0x21b87c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b878) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B880u;
label_21b880:
    // 0x21b880: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21b880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b884:
    // 0x21b884: 0x2610e490  addiu       $s0, $s0, -0x1B70
    ctx->pc = 0x21b884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
label_21b888:
    // 0x21b888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21b888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b88c:
    // 0x21b88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b890:
    // 0x21b890: 0xc13b662  jal         func_4ED988
label_21b894:
    if (ctx->pc == 0x21B894u) {
        ctx->pc = 0x21B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B890u;
        // 0x21b894: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B898u;
        goto label_21b898;
    }
    ctx->pc = 0x21B890u;
    SET_GPR_U32(ctx, 31, 0x21B898u);
    ctx->pc = 0x21B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B890u;
    // 0x21b894: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x21B890u, 0x21B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B898u;
label_21b898:
    // 0x21b898: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21b898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b89c:
    // 0x21b89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b8a0:
    // 0x21b8a0: 0xc09933e  jal         func_264CF8
label_21b8a4:
    if (ctx->pc == 0x21B8A4u) {
        ctx->pc = 0x21B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8A0u;
        // 0x21b8a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8A8u;
        goto label_21b8a8;
    }
    ctx->pc = 0x21B8A0u;
    SET_GPR_U32(ctx, 31, 0x21B8A8u);
    ctx->pc = 0x21B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8A0u;
    // 0x21b8a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x21B8A0u, 0x21B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8A8u;
label_21b8a8:
    // 0x21b8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b8ac:
    // 0x21b8ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_21b8b0:
    if (ctx->pc == 0x21B8B0u) {
        ctx->pc = 0x21B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8ACu;
        // 0x21b8b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8B4u;
        goto label_21b8b4;
    }
    ctx->pc = 0x21B8ACu;
    {
        const bool branch_taken_0x21b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8ACu;
        // 0x21b8b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8ac) {
            ctx->pc = 0x21B8D0u;
            goto label_21b8d0;
        }
    }
    ctx->pc = 0x21B8B4u;
label_21b8b4:
    // 0x21b8b4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b8b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21b8b8:
    // 0x21b8b8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_21b8bc:
    if (ctx->pc == 0x21B8BCu) {
        ctx->pc = 0x21B8C0u;
        goto label_21b8c0;
    }
    ctx->pc = 0x21B8B8u;
    {
        const bool branch_taken_0x21b8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8b8) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B8C0u;
label_21b8c0:
    // 0x21b8c0: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_21b8c4:
    if (ctx->pc == 0x21B8C4u) {
        ctx->pc = 0x21B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8C0u;
        // 0x21b8c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8C8u;
        goto label_21b8c8;
    }
    ctx->pc = 0x21B8C0u;
    {
        const bool branch_taken_0x21b8c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8C0u;
        // 0x21b8c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8c0) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B8C8u;
label_21b8c8:
    // 0x21b8c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b8cc:
    // 0x21b8cc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21b8d0:
    // 0x21b8d0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21b8d4:
    // 0x21b8d4: 0xc13b652  jal         func_4ED948
label_21b8d8:
    if (ctx->pc == 0x21B8D8u) {
        ctx->pc = 0x21B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8D4u;
        // 0x21b8d8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8DCu;
        goto label_21b8dc;
    }
    ctx->pc = 0x21B8D4u;
    SET_GPR_U32(ctx, 31, 0x21B8DCu);
    ctx->pc = 0x21B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8D4u;
    // 0x21b8d8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x21B8D4u, 0x21B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8DCu;
label_21b8dc:
    // 0x21b8dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_21b8e0:
    if (ctx->pc == 0x21B8E0u) {
        ctx->pc = 0x21B8E4u;
        goto label_21b8e4;
    }
    ctx->pc = 0x21B8DCu;
    {
        const bool branch_taken_0x21b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8dc) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B8E4u;
label_21b8e4:
    // 0x21b8e4: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_21b8e8:
    if (ctx->pc == 0x21B8E8u) {
        ctx->pc = 0x21B8ECu;
        goto label_21b8ec;
    }
    ctx->pc = 0x21B8E4u;
    {
        const bool branch_taken_0x21b8e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8e4) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B8ECu;
label_21b8ec:
    // 0x21b8ec: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21b8ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21b8f0:
    // 0x21b8f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b8f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21b8f4:
    // 0x21b8f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21b8f8:
    if (ctx->pc == 0x21B8F8u) {
        ctx->pc = 0x21B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8F4u;
        // 0x21b8f8: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B8FCu;
        goto label_21b8fc;
    }
    ctx->pc = 0x21B8F4u;
    {
        const bool branch_taken_0x21b8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8F4u;
        // 0x21b8f8: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8f4) {
            ctx->pc = 0x21B910u;
            goto label_21b910;
        }
    }
    ctx->pc = 0x21B8FCu;
label_21b8fc:
    // 0x21b8fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21b8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b900:
    // 0x21b900: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21b904:
    // 0x21b904: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21b908:
    // 0x21b908: 0xc13b652  jal         func_4ED948
label_21b90c:
    if (ctx->pc == 0x21B90Cu) {
        ctx->pc = 0x21B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B908u;
        // 0x21b90c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B910u;
        goto label_21b910;
    }
    ctx->pc = 0x21B908u;
    SET_GPR_U32(ctx, 31, 0x21B910u);
    ctx->pc = 0x21B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B908u;
    // 0x21b90c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x21B908u, 0x21B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B910u;
label_21b910:
    // 0x21b910: 0xc087502  jal         func_21D408
label_21b914:
    if (ctx->pc == 0x21B914u) {
        ctx->pc = 0x21B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B910u;
        // 0x21b914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B918u;
        goto label_21b918;
    }
    ctx->pc = 0x21B910u;
    SET_GPR_U32(ctx, 31, 0x21B918u);
    ctx->pc = 0x21B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B910u;
    // 0x21b914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21B910u, 0x21B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B918u;
label_21b918:
    // 0x21b918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b91c:
    // 0x21b91c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21b920:
    // 0x21b920: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21b924:
    // 0x21b924: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_21b928:
    if (ctx->pc == 0x21B928u) {
        ctx->pc = 0x21B92Cu;
        goto label_21b92c;
    }
    ctx->pc = 0x21B924u;
    {
        const bool branch_taken_0x21b924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21b924) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B92Cu;
label_21b92c:
    // 0x21b92c: 0xc05959e  jal         func_165678
label_21b930:
    if (ctx->pc == 0x21B930u) {
        ctx->pc = 0x21B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B92Cu;
        // 0x21b930: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B934u;
        goto label_21b934;
    }
    ctx->pc = 0x21B92Cu;
    SET_GPR_U32(ctx, 31, 0x21B934u);
    ctx->pc = 0x21B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B92Cu;
    // 0x21b930: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x21B92Cu, 0x21B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B934u;
label_21b934:
    // 0x21b934: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21b938:
    if (ctx->pc == 0x21B938u) {
        ctx->pc = 0x21B93Cu;
        goto label_21b93c;
    }
    ctx->pc = 0x21B934u;
    {
        const bool branch_taken_0x21b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b934) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B93Cu;
label_21b93c:
    // 0x21b93c: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x21b93cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_21b940:
    // 0x21b940: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b940u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21b944:
    // 0x21b944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21b948:
    if (ctx->pc == 0x21B948u) {
        ctx->pc = 0x21B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B944u;
        // 0x21b948: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B94Cu;
        goto label_21b94c;
    }
    ctx->pc = 0x21B944u;
    {
        const bool branch_taken_0x21b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B944u;
        // 0x21b948: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b944) {
            ctx->pc = 0x21B95Cu;
            goto label_21b95c;
        }
    }
    ctx->pc = 0x21B94Cu;
label_21b94c:
    // 0x21b94c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x21b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21b950:
    // 0x21b950: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21b954:
    // 0x21b954: 0xc13ce7a  jal         func_4F39E8
label_21b958:
    if (ctx->pc == 0x21B958u) {
        ctx->pc = 0x21B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B954u;
        // 0x21b958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B95Cu;
        goto label_21b95c;
    }
    ctx->pc = 0x21B954u;
    SET_GPR_U32(ctx, 31, 0x21B95Cu);
    ctx->pc = 0x21B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B954u;
    // 0x21b958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F39E8u, 0x21B954u, 0x21B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B95Cu;
label_21b95c:
    // 0x21b95c: 0x126001a5  beqz        $s3, . + 4 + (0x1A5 << 2)
label_21b960:
    if (ctx->pc == 0x21B960u) {
        ctx->pc = 0x21B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B95Cu;
        // 0x21b960: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B964u;
        goto label_21b964;
    }
    ctx->pc = 0x21B95Cu;
    {
        const bool branch_taken_0x21b95c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B95Cu;
        // 0x21b960: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b95c) {
            ctx->pc = 0x21BFF4u;
            goto label_21bff4;
        }
    }
    ctx->pc = 0x21B964u;
label_21b964:
    // 0x21b964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b968:
    // 0x21b968: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21b968u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_21b96c:
    // 0x21b96c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21b96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b970:
    // 0x21b970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21b970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b974:
    // 0x21b974: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x21b974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21b978:
    // 0x21b978: 0xc0882b2  jal         func_220AC8
label_21b97c:
    if (ctx->pc == 0x21B97Cu) {
        ctx->pc = 0x21B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B978u;
        // 0x21b97c: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B980u;
        goto label_21b980;
    }
    ctx->pc = 0x21B978u;
    SET_GPR_U32(ctx, 31, 0x21B980u);
    ctx->pc = 0x21B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B978u;
    // 0x21b97c: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x21B978u, 0x21B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B980u;
label_21b980:
    // 0x21b980: 0x1000019d  b           . + 4 + (0x19D << 2)
label_21b984:
    if (ctx->pc == 0x21B984u) {
        ctx->pc = 0x21B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B980u;
        // 0x21b984: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B988u;
        goto label_21b988;
    }
    ctx->pc = 0x21B980u;
    {
        const bool branch_taken_0x21b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B980u;
        // 0x21b984: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b980) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21B988u;
label_21b988:
    // 0x21b988: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21b988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_21b98c:
    // 0x21b98c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21b990:
    // 0x21b990: 0xc0e8b48  jal         func_3A2D20
label_21b994:
    if (ctx->pc == 0x21B994u) {
        ctx->pc = 0x21B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B990u;
        // 0x21b994: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B998u;
        goto label_21b998;
    }
    ctx->pc = 0x21B990u;
    SET_GPR_U32(ctx, 31, 0x21B998u);
    ctx->pc = 0x21B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B990u;
    // 0x21b994: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x21B990u, 0x21B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B998u;
label_21b998:
    // 0x21b998: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21b99c:
    // 0x21b99c: 0xc0e8b70  jal         func_3A2DC0
label_21b9a0:
    if (ctx->pc == 0x21B9A0u) {
        ctx->pc = 0x21B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B99Cu;
        // 0x21b9a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9A4u;
        goto label_21b9a4;
    }
    ctx->pc = 0x21B99Cu;
    SET_GPR_U32(ctx, 31, 0x21B9A4u);
    ctx->pc = 0x21B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B99Cu;
    // 0x21b9a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x21B99Cu, 0x21B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9A4u;
label_21b9a4:
    // 0x21b9a4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21b9a8:
    // 0x21b9a8: 0xc0e8b70  jal         func_3A2DC0
label_21b9ac:
    if (ctx->pc == 0x21B9ACu) {
        ctx->pc = 0x21B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9A8u;
        // 0x21b9ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9B0u;
        goto label_21b9b0;
    }
    ctx->pc = 0x21B9A8u;
    SET_GPR_U32(ctx, 31, 0x21B9B0u);
    ctx->pc = 0x21B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9A8u;
    // 0x21b9ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x21B9A8u, 0x21B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9B0u;
label_21b9b0:
    // 0x21b9b0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x21b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_21b9b4:
    // 0x21b9b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x21b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21b9b8:
    // 0x21b9b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21b9bc:
    // 0x21b9bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21b9c0:
    if (ctx->pc == 0x21B9C0u) {
        ctx->pc = 0x21B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9BCu;
        // 0x21b9c0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9C4u;
        goto label_21b9c4;
    }
    ctx->pc = 0x21B9BCu;
    {
        const bool branch_taken_0x21b9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9BCu;
        // 0x21b9c0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9bc) {
            ctx->pc = 0x21B9DCu;
            goto label_21b9dc;
        }
    }
    ctx->pc = 0x21B9C4u;
label_21b9c4:
    // 0x21b9c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b9c8:
    // 0x21b9c8: 0xc089998  jal         func_226660
label_21b9cc:
    if (ctx->pc == 0x21B9CCu) {
        ctx->pc = 0x21B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9C8u;
        // 0x21b9cc: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9D0u;
        goto label_21b9d0;
    }
    ctx->pc = 0x21B9C8u;
    SET_GPR_U32(ctx, 31, 0x21B9D0u);
    ctx->pc = 0x21B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9C8u;
    // 0x21b9cc: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21B9C8u, 0x21B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9D0u;
label_21b9d0:
    // 0x21b9d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21b9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b9d4:
    // 0x21b9d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21b9d8:
    // 0x21b9d8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21b9d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_21b9dc:
    // 0x21b9dc: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x21b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_21b9e0:
    // 0x21b9e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b9e4:
    // 0x21b9e4: 0xc0e8b68  jal         func_3A2DA0
label_21b9e8:
    if (ctx->pc == 0x21B9E8u) {
        ctx->pc = 0x21B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9E4u;
        // 0x21b9e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9ECu;
        goto label_21b9ec;
    }
    ctx->pc = 0x21B9E4u;
    SET_GPR_U32(ctx, 31, 0x21B9ECu);
    ctx->pc = 0x21B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9E4u;
    // 0x21b9e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21B9E4u, 0x21B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9ECu;
label_21b9ec:
    // 0x21b9ec: 0xc0e57ce  jal         func_395F38
label_21b9f0:
    if (ctx->pc == 0x21B9F0u) {
        ctx->pc = 0x21B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9ECu;
        // 0x21b9f0: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B9F4u;
        goto label_21b9f4;
    }
    ctx->pc = 0x21B9ECu;
    SET_GPR_U32(ctx, 31, 0x21B9F4u);
    ctx->pc = 0x21B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9ECu;
    // 0x21b9f0: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21B9ECu, 0x21B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9F4u;
label_21b9f4:
    // 0x21b9f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21b9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b9f8:
    // 0x21b9f8: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_21b9fc:
    if (ctx->pc == 0x21B9FCu) {
        ctx->pc = 0x21B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9F8u;
        // 0x21b9fc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA00u;
        goto label_21ba00;
    }
    ctx->pc = 0x21B9F8u;
    {
        const bool branch_taken_0x21b9f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9F8u;
        // 0x21b9fc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9f8) {
            ctx->pc = 0x21BA34u;
            goto label_21ba34;
        }
    }
    ctx->pc = 0x21BA00u;
label_21ba00:
    // 0x21ba00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21ba04:
    // 0x21ba04: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x21ba04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_21ba08:
    // 0x21ba08: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x21ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_21ba0c:
    // 0x21ba0c: 0x40f809  jalr        $v0
label_21ba10:
    if (ctx->pc == 0x21BA10u) {
        ctx->pc = 0x21BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA0Cu;
        // 0x21ba10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA14u;
        goto label_21ba14;
    }
    ctx->pc = 0x21BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BA14u);
        ctx->pc = 0x21BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA0Cu;
        // 0x21ba10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BA0Cu, 0x21BA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BA14u;
label_21ba14:
    // 0x21ba14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21ba18:
    if (ctx->pc == 0x21BA18u) {
        ctx->pc = 0x21BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA14u;
        // 0x21ba18: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA1Cu;
        goto label_21ba1c;
    }
    ctx->pc = 0x21BA14u;
    {
        const bool branch_taken_0x21ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA14u;
        // 0x21ba18: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba14) {
            ctx->pc = 0x21BA34u;
            goto label_21ba34;
        }
    }
    ctx->pc = 0x21BA1Cu;
label_21ba1c:
    // 0x21ba1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21ba20:
    // 0x21ba20: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x21ba20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_21ba24:
    // 0x21ba24: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x21ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_21ba28:
    // 0x21ba28: 0x40f809  jalr        $v0
label_21ba2c:
    if (ctx->pc == 0x21BA2Cu) {
        ctx->pc = 0x21BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA28u;
        // 0x21ba2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA30u;
        goto label_21ba30;
    }
    ctx->pc = 0x21BA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BA30u);
        ctx->pc = 0x21BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA28u;
        // 0x21ba2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BA28u, 0x21BA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BA30u;
label_21ba30:
    // 0x21ba30: 0x8c5e0040  lw          $fp, 0x40($v0)
    ctx->pc = 0x21ba30u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_21ba34:
    // 0x21ba34: 0xc089a76  jal         func_2269D8
label_21ba38:
    if (ctx->pc == 0x21BA38u) {
        ctx->pc = 0x21BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA34u;
        // 0x21ba38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA3Cu;
        goto label_21ba3c;
    }
    ctx->pc = 0x21BA34u;
    SET_GPR_U32(ctx, 31, 0x21BA3Cu);
    ctx->pc = 0x21BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA34u;
    // 0x21ba38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x21BA34u, 0x21BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA3Cu;
label_21ba3c:
    // 0x21ba3c: 0x12600034  beqz        $s3, . + 4 + (0x34 << 2)
label_21ba40:
    if (ctx->pc == 0x21BA40u) {
        ctx->pc = 0x21BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA3Cu;
        // 0x21ba40: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA44u;
        goto label_21ba44;
    }
    ctx->pc = 0x21BA3Cu;
    {
        const bool branch_taken_0x21ba3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA3Cu;
        // 0x21ba40: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba3c) {
            ctx->pc = 0x21BB10u;
            goto label_21bb10;
        }
    }
    ctx->pc = 0x21BA44u;
label_21ba44:
    // 0x21ba44: 0x9262010d  lbu         $v0, 0x10D($s3)
    ctx->pc = 0x21ba44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_21ba48:
    // 0x21ba48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21ba4c:
    if (ctx->pc == 0x21BA4Cu) {
        ctx->pc = 0x21BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA48u;
        // 0x21ba4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA50u;
        goto label_21ba50;
    }
    ctx->pc = 0x21BA48u;
    {
        const bool branch_taken_0x21ba48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA48u;
        // 0x21ba4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba48) {
            ctx->pc = 0x21BA5Cu;
            goto label_21ba5c;
        }
    }
    ctx->pc = 0x21BA50u;
label_21ba50:
    // 0x21ba50: 0x9262010e  lbu         $v0, 0x10E($s3)
    ctx->pc = 0x21ba50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 270)));
label_21ba54:
    // 0x21ba54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21ba58:
    if (ctx->pc == 0x21BA58u) {
        ctx->pc = 0x21BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA54u;
        // 0x21ba58: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA5Cu;
        goto label_21ba5c;
    }
    ctx->pc = 0x21BA54u;
    {
        const bool branch_taken_0x21ba54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA54u;
        // 0x21ba58: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba54) {
            ctx->pc = 0x21BA64u;
            goto label_21ba64;
        }
    }
    ctx->pc = 0x21BA5Cu;
label_21ba5c:
    // 0x21ba5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ba60:
    // 0x21ba60: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x21ba60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21ba64:
    // 0x21ba64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21ba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ba68:
    // 0x21ba68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21ba6c:
    // 0x21ba6c: 0xc0e4d14  jal         func_393450
label_21ba70:
    if (ctx->pc == 0x21BA70u) {
        ctx->pc = 0x21BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA6Cu;
        // 0x21ba70: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA74u;
        goto label_21ba74;
    }
    ctx->pc = 0x21BA6Cu;
    SET_GPR_U32(ctx, 31, 0x21BA74u);
    ctx->pc = 0x21BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA6Cu;
    // 0x21ba70: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393450u, 0x21BA6Cu, 0x21BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA74u;
label_21ba74:
    // 0x21ba74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21ba78:
    // 0x21ba78: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x21ba78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_21ba7c:
    // 0x21ba7c: 0xc0e44cc  jal         func_391330
label_21ba80:
    if (ctx->pc == 0x21BA80u) {
        ctx->pc = 0x21BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA7Cu;
        // 0x21ba80: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA84u;
        goto label_21ba84;
    }
    ctx->pc = 0x21BA7Cu;
    SET_GPR_U32(ctx, 31, 0x21BA84u);
    ctx->pc = 0x21BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA7Cu;
    // 0x21ba80: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21BA7Cu, 0x21BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA84u;
label_21ba84:
    // 0x21ba84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21ba84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ba88:
    // 0x21ba88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ba8c:
    // 0x21ba8c: 0xc089998  jal         func_226660
label_21ba90:
    if (ctx->pc == 0x21BA90u) {
        ctx->pc = 0x21BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA8Cu;
        // 0x21ba90: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BA94u;
        goto label_21ba94;
    }
    ctx->pc = 0x21BA8Cu;
    SET_GPR_U32(ctx, 31, 0x21BA94u);
    ctx->pc = 0x21BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA8Cu;
    // 0x21ba90: 0x3c050140  lui         $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21BA8Cu, 0x21BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA94u;
label_21ba94:
    // 0x21ba94: 0x92080064  lbu         $t0, 0x64($s0)
    ctx->pc = 0x21ba94u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_21ba98:
    // 0x21ba98: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x21ba98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21ba9c:
    // 0x21ba9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ba9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21baa0:
    // 0x21baa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21baa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21baa4:
    // 0x21baa4: 0x222380a  movz        $a3, $s1, $v0
    ctx->pc = 0x21baa4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
label_21baa8:
    // 0x21baa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21baa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21baac:
    // 0x21baac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21baacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bab0:
    // 0x21bab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21bab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bab4:
    // 0x21bab4: 0xc0882b2  jal         func_220AC8
label_21bab8:
    if (ctx->pc == 0x21BAB8u) {
        ctx->pc = 0x21BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAB4u;
        // 0x21bab8: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BABCu;
        goto label_21babc;
    }
    ctx->pc = 0x21BAB4u;
    SET_GPR_U32(ctx, 31, 0x21BABCu);
    ctx->pc = 0x21BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAB4u;
    // 0x21bab8: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x21BAB4u, 0x21BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BABCu;
label_21babc:
    // 0x21babc: 0x3c031c21  lui         $v1, 0x1C21
    ctx->pc = 0x21babcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7201 << 16));
label_21bac0:
    // 0x21bac0: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x21bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_21bac4:
    // 0x21bac4: 0x3463bdc3  ori         $v1, $v1, 0xBDC3
    ctx->pc = 0x21bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48579);
label_21bac8:
    // 0x21bac8: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_21bacc:
    if (ctx->pc == 0x21BACCu) {
        ctx->pc = 0x21BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAC8u;
        // 0x21bacc: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAD0u;
        goto label_21bad0;
    }
    ctx->pc = 0x21BAC8u;
    {
        const bool branch_taken_0x21bac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21bac8) {
            ctx->pc = 0x21BACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BAC8u;
            // 0x21bacc: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB14u;
            goto label_21bb14;
        }
    }
    ctx->pc = 0x21BAD0u;
label_21bad0:
    // 0x21bad0: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x21bad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_21bad4:
    // 0x21bad4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x21bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_21bad8:
    // 0x21bad8: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x21bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_21badc:
    // 0x21badc: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x21badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_21bae0:
    // 0x21bae0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_21bae4:
    // 0x21bae4: 0xc0cdb5a  jal         func_336D68
label_21bae8:
    if (ctx->pc == 0x21BAE8u) {
        ctx->pc = 0x21BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAE4u;
        // 0x21bae8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BAECu;
        goto label_21baec;
    }
    ctx->pc = 0x21BAE4u;
    SET_GPR_U32(ctx, 31, 0x21BAECu);
    ctx->pc = 0x21BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAE4u;
    // 0x21bae8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D68u, 0x21BAE4u, 0x21BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAECu;
label_21baec:
    // 0x21baec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_21baf0:
    // 0x21baf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21baf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21baf4:
    // 0x21baf4: 0x0  nop
    ctx->pc = 0x21baf4u;
    // NOP
label_21baf8:
    // 0x21baf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21baf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21bafc:
    // 0x21bafc: 0x0  nop
    ctx->pc = 0x21bafcu;
    // NOP
label_21bb00:
    // 0x21bb00: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_21bb04:
    if (ctx->pc == 0x21BB04u) {
        ctx->pc = 0x21BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB00u;
        // 0x21bb04: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB08u;
        goto label_21bb08;
    }
    ctx->pc = 0x21BB00u;
    {
        const bool branch_taken_0x21bb00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21bb00) {
            ctx->pc = 0x21BB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB00u;
            // 0x21bb04: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB14u;
            goto label_21bb14;
        }
    }
    ctx->pc = 0x21BB08u;
label_21bb08:
    // 0x21bb08: 0xc08648e  jal         func_219238
label_21bb0c:
    if (ctx->pc == 0x21BB0Cu) {
        ctx->pc = 0x21BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB08u;
        // 0x21bb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB10u;
        goto label_21bb10;
    }
    ctx->pc = 0x21BB08u;
    SET_GPR_U32(ctx, 31, 0x21BB10u);
    ctx->pc = 0x21BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB08u;
    // 0x21bb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219238u, 0x21BB08u, 0x21BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB10u;
label_21bb10:
    // 0x21bb10: 0x8e900040  lw          $s0, 0x40($s4)
    ctx->pc = 0x21bb10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_21bb14:
    // 0x21bb14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21bb14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bb18:
    // 0x21bb18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21bb18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_21bb1c:
    // 0x21bb1c: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x21bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_21bb20:
    // 0x21bb20: 0xc10b1c6  jal         func_42C718
label_21bb24:
    if (ctx->pc == 0x21BB24u) {
        ctx->pc = 0x21BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB20u;
        // 0x21bb24: 0xafb00024  sw          $s0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB28u;
        goto label_21bb28;
    }
    ctx->pc = 0x21BB20u;
    SET_GPR_U32(ctx, 31, 0x21BB28u);
    ctx->pc = 0x21BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB20u;
    // 0x21bb24: 0xafb00024  sw          $s0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x21BB20u, 0x21BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB28u;
label_21bb28:
    // 0x21bb28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_21bb2c:
    // 0x21bb2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21bb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21bb30:
    // 0x21bb30: 0xa3b10011  sb          $s1, 0x11($sp)
    ctx->pc = 0x21bb30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 17));
label_21bb34:
    // 0x21bb34: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x21bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_21bb38:
    // 0x21bb38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21bb3c:
    // 0x21bb3c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x21bb3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_21bb40:
    // 0x21bb40: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x21bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_21bb44:
    // 0x21bb44: 0x40f809  jalr        $v0
label_21bb48:
    if (ctx->pc == 0x21BB48u) {
        ctx->pc = 0x21BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB44u;
        // 0x21bb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB4Cu;
        goto label_21bb4c;
    }
    ctx->pc = 0x21BB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BB4Cu);
        ctx->pc = 0x21BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB44u;
        // 0x21bb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BB44u, 0x21BB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BB4Cu;
label_21bb4c:
    // 0x21bb4c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_21bb50:
    if (ctx->pc == 0x21BB50u) {
        ctx->pc = 0x21BB54u;
        goto label_21bb54;
    }
    ctx->pc = 0x21BB4Cu;
    {
        const bool branch_taken_0x21bb4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bb4c) {
            ctx->pc = 0x21BB60u;
            goto label_21bb60;
        }
    }
    ctx->pc = 0x21BB54u;
label_21bb54:
    // 0x21bb54: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x21bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_21bb58:
    // 0x21bb58: 0xc104c06  jal         func_413018
label_21bb5c:
    if (ctx->pc == 0x21BB5Cu) {
        ctx->pc = 0x21BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB58u;
        // 0x21bb5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB60u;
        goto label_21bb60;
    }
    ctx->pc = 0x21BB58u;
    SET_GPR_U32(ctx, 31, 0x21BB60u);
    ctx->pc = 0x21BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB58u;
    // 0x21bb5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413018u, 0x21BB58u, 0x21BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB60u;
label_21bb60:
    // 0x21bb60: 0xc0e3d62  jal         func_38F588
label_21bb64:
    if (ctx->pc == 0x21BB64u) {
        ctx->pc = 0x21BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB60u;
        // 0x21bb64: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB68u;
        goto label_21bb68;
    }
    ctx->pc = 0x21BB60u;
    SET_GPR_U32(ctx, 31, 0x21BB68u);
    ctx->pc = 0x21BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB60u;
    // 0x21bb64: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x21BB60u, 0x21BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB68u;
label_21bb68:
    // 0x21bb68: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_21bb6c:
    if (ctx->pc == 0x21BB6Cu) {
        ctx->pc = 0x21BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB68u;
        // 0x21bb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB70u;
        goto label_21bb70;
    }
    ctx->pc = 0x21BB68u;
    {
        const bool branch_taken_0x21bb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB68u;
        // 0x21bb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb68) {
            ctx->pc = 0x21BC4Cu;
            goto label_21bc4c;
        }
    }
    ctx->pc = 0x21BB70u;
label_21bb70:
    // 0x21bb70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bb74:
    // 0x21bb74: 0xc0e3cde  jal         func_38F378
label_21bb78:
    if (ctx->pc == 0x21BB78u) {
        ctx->pc = 0x21BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB74u;
        // 0x21bb78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB7Cu;
        goto label_21bb7c;
    }
    ctx->pc = 0x21BB74u;
    SET_GPR_U32(ctx, 31, 0x21BB7Cu);
    ctx->pc = 0x21BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB74u;
    // 0x21bb78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F378u, 0x21BB74u, 0x21BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB7Cu;
label_21bb7c:
    // 0x21bb7c: 0xc0899ae  jal         func_2266B8
label_21bb80:
    if (ctx->pc == 0x21BB80u) {
        ctx->pc = 0x21BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB7Cu;
        // 0x21bb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB84u;
        goto label_21bb84;
    }
    ctx->pc = 0x21BB7Cu;
    SET_GPR_U32(ctx, 31, 0x21BB84u);
    ctx->pc = 0x21BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB7Cu;
    // 0x21bb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x21BB7Cu, 0x21BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB84u;
label_21bb84:
    // 0x21bb84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21bb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21bb88:
    // 0x21bb88: 0xc0950ba  jal         func_2542E8
label_21bb8c:
    if (ctx->pc == 0x21BB8Cu) {
        ctx->pc = 0x21BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB88u;
        // 0x21bb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BB90u;
        goto label_21bb90;
    }
    ctx->pc = 0x21BB88u;
    SET_GPR_U32(ctx, 31, 0x21BB90u);
    ctx->pc = 0x21BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB88u;
    // 0x21bb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x21BB88u, 0x21BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB90u;
label_21bb90:
    // 0x21bb90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21bb90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_21bb94:
    // 0x21bb94: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x21bb94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_21bb98:
    // 0x21bb98: 0x6030012  bgezl       $s0, . + 4 + (0x12 << 2)
label_21bb9c:
    if (ctx->pc == 0x21BB9Cu) {
        ctx->pc = 0x21BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB98u;
        // 0x21bb9c: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBA0u;
        goto label_21bba0;
    }
    ctx->pc = 0x21BB98u;
    {
        const bool branch_taken_0x21bb98 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x21bb98) {
            ctx->pc = 0x21BB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB98u;
            // 0x21bb9c: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBE4u;
            goto label_21bbe4;
        }
    }
    ctx->pc = 0x21BBA0u;
label_21bba0:
    // 0x21bba0: 0x52a00010  beql        $s5, $zero, . + 4 + (0x10 << 2)
label_21bba4:
    if (ctx->pc == 0x21BBA4u) {
        ctx->pc = 0x21BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBA0u;
        // 0x21bba4: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBA8u;
        goto label_21bba8;
    }
    ctx->pc = 0x21BBA0u;
    {
        const bool branch_taken_0x21bba0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bba0) {
            ctx->pc = 0x21BBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BBA0u;
            // 0x21bba4: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBE4u;
            goto label_21bbe4;
        }
    }
    ctx->pc = 0x21BBA8u;
label_21bba8:
    // 0x21bba8: 0xc08a0fa  jal         func_2283E8
label_21bbac:
    if (ctx->pc == 0x21BBACu) {
        ctx->pc = 0x21BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBA8u;
        // 0x21bbac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBB0u;
        goto label_21bbb0;
    }
    ctx->pc = 0x21BBA8u;
    SET_GPR_U32(ctx, 31, 0x21BBB0u);
    ctx->pc = 0x21BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BBA8u;
    // 0x21bbac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283E8u, 0x21BBA8u, 0x21BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BBB0u;
label_21bbb0:
    // 0x21bbb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_21bbb4:
    if (ctx->pc == 0x21BBB4u) {
        ctx->pc = 0x21BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB0u;
        // 0x21bbb4: 0x104823  negu        $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBB8u;
        goto label_21bbb8;
    }
    ctx->pc = 0x21BBB0u;
    {
        const bool branch_taken_0x21bbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB0u;
        // 0x21bbb4: 0x104823  negu        $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbb0) {
            ctx->pc = 0x21BBE0u;
            goto label_21bbe0;
        }
    }
    ctx->pc = 0x21BBB8u;
label_21bbb8:
    // 0x21bbb8: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x21bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_21bbbc:
    // 0x21bbbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bbc0:
    // 0x21bbc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21bbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bbc4:
    // 0x21bbc4: 0x84620144  lh          $v0, 0x144($v1)
    ctx->pc = 0x21bbc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 324)));
label_21bbc8:
    // 0x21bbc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21bbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bbcc:
    // 0x21bbcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21bbccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bbd0:
    // 0x21bbd0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21bbd4:
    // 0x21bbd4: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x21bbd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21bbd8:
    // 0x21bbd8: 0xc0992f6  jal         func_264BD8
label_21bbdc:
    if (ctx->pc == 0x21BBDCu) {
        ctx->pc = 0x21BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBD8u;
        // 0x21bbdc: 0x122280b  movn        $a1, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBE0u;
        goto label_21bbe0;
    }
    ctx->pc = 0x21BBD8u;
    SET_GPR_U32(ctx, 31, 0x21BBE0u);
    ctx->pc = 0x21BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BBD8u;
    // 0x21bbdc: 0x122280b  movn        $a1, $t1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x21BBD8u, 0x21BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BBE0u;
label_21bbe0:
    // 0x21bbe0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21bbe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21bbe4:
    // 0x21bbe4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21bbe4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21bbe8:
    // 0x21bbe8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21bbec:
    if (ctx->pc == 0x21BBECu) {
        ctx->pc = 0x21BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBE8u;
        // 0x21bbec: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BBF0u;
        goto label_21bbf0;
    }
    ctx->pc = 0x21BBE8u;
    {
        const bool branch_taken_0x21bbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBE8u;
        // 0x21bbec: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbe8) {
            ctx->pc = 0x21BC04u;
            goto label_21bc04;
        }
    }
    ctx->pc = 0x21BBF0u;
label_21bbf0:
    // 0x21bbf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bbf4:
    // 0x21bbf4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21bbf8:
    // 0x21bbf8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x21bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21bbfc:
    // 0x21bbfc: 0xc13b652  jal         func_4ED948
label_21bc00:
    if (ctx->pc == 0x21BC00u) {
        ctx->pc = 0x21BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBFCu;
        // 0x21bc00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC04u;
        goto label_21bc04;
    }
    ctx->pc = 0x21BBFCu;
    SET_GPR_U32(ctx, 31, 0x21BC04u);
    ctx->pc = 0x21BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BBFCu;
    // 0x21bc00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x21BBFCu, 0x21BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC04u;
label_21bc04:
    // 0x21bc04: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_21bc08:
    if (ctx->pc == 0x21BC08u) {
        ctx->pc = 0x21BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC04u;
        // 0x21bc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC0Cu;
        goto label_21bc0c;
    }
    ctx->pc = 0x21BC04u;
    {
        const bool branch_taken_0x21bc04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC04u;
        // 0x21bc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc04) {
            ctx->pc = 0x21BC44u;
            goto label_21bc44;
        }
    }
    ctx->pc = 0x21BC0Cu;
label_21bc0c:
    // 0x21bc0c: 0x82a201b0  lb          $v0, 0x1B0($s5)
    ctx->pc = 0x21bc0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 432)));
label_21bc10:
    // 0x21bc10: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21bc10u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21bc14:
    // 0x21bc14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_21bc18:
    if (ctx->pc == 0x21BC18u) {
        ctx->pc = 0x21BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC14u;
        // 0x21bc18: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC1Cu;
        goto label_21bc1c;
    }
    ctx->pc = 0x21BC14u;
    {
        const bool branch_taken_0x21bc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC14u;
        // 0x21bc18: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc14) {
            ctx->pc = 0x21BC40u;
            goto label_21bc40;
        }
    }
    ctx->pc = 0x21BC1Cu;
label_21bc1c:
    // 0x21bc1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21bc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21bc20:
    // 0x21bc20: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21bc24:
    // 0x21bc24: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x21bc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21bc28:
    // 0x21bc28: 0xc13b662  jal         func_4ED988
label_21bc2c:
    if (ctx->pc == 0x21BC2Cu) {
        ctx->pc = 0x21BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC28u;
        // 0x21bc2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC30u;
        goto label_21bc30;
    }
    ctx->pc = 0x21BC28u;
    SET_GPR_U32(ctx, 31, 0x21BC30u);
    ctx->pc = 0x21BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC28u;
    // 0x21bc2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x21BC28u, 0x21BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC30u;
label_21bc30:
    // 0x21bc30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21bc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21bc34:
    // 0x21bc34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21bc38:
    // 0x21bc38: 0xc09933e  jal         func_264CF8
label_21bc3c:
    if (ctx->pc == 0x21BC3Cu) {
        ctx->pc = 0x21BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC38u;
        // 0x21bc3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC40u;
        goto label_21bc40;
    }
    ctx->pc = 0x21BC38u;
    SET_GPR_U32(ctx, 31, 0x21BC40u);
    ctx->pc = 0x21BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC38u;
    // 0x21bc3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x21BC38u, 0x21BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC40u;
label_21bc40:
    // 0x21bc40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bc44:
    // 0x21bc44: 0xc0864c8  jal         func_219320
label_21bc48:
    if (ctx->pc == 0x21BC48u) {
        ctx->pc = 0x21BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC44u;
        // 0x21bc48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC4Cu;
        goto label_21bc4c;
    }
    ctx->pc = 0x21BC44u;
    SET_GPR_U32(ctx, 31, 0x21BC4Cu);
    ctx->pc = 0x21BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC44u;
    // 0x21bc48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219320u, 0x21BC44u, 0x21BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC4Cu;
label_21bc4c:
    // 0x21bc4c: 0x12600087  beqz        $s3, . + 4 + (0x87 << 2)
label_21bc50:
    if (ctx->pc == 0x21BC50u) {
        ctx->pc = 0x21BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC4Cu;
        // 0x21bc50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC54u;
        goto label_21bc54;
    }
    ctx->pc = 0x21BC4Cu;
    {
        const bool branch_taken_0x21bc4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC4Cu;
        // 0x21bc50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc4c) {
            ctx->pc = 0x21BE6Cu;
            goto label_21be6c;
        }
    }
    ctx->pc = 0x21BC54u;
label_21bc54:
    // 0x21bc54: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x21bc54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_21bc58:
    // 0x21bc58: 0xc0e44cc  jal         func_391330
label_21bc5c:
    if (ctx->pc == 0x21BC5Cu) {
        ctx->pc = 0x21BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC58u;
        // 0x21bc5c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC60u;
        goto label_21bc60;
    }
    ctx->pc = 0x21BC58u;
    SET_GPR_U32(ctx, 31, 0x21BC60u);
    ctx->pc = 0x21BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC58u;
    // 0x21bc5c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21BC58u, 0x21BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC60u;
label_21bc60:
    // 0x21bc60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21bc60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21bc64:
    // 0x21bc64: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x21bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_21bc68:
    // 0x21bc68: 0x82220086  lb          $v0, 0x86($s1)
    ctx->pc = 0x21bc68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
label_21bc6c:
    // 0x21bc6c: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_21bc70:
    if (ctx->pc == 0x21BC70u) {
        ctx->pc = 0x21BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC6Cu;
        // 0x21bc70: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC74u;
        goto label_21bc74;
    }
    ctx->pc = 0x21BC6Cu;
    {
        const bool branch_taken_0x21bc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC6Cu;
        // 0x21bc70: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc6c) {
            ctx->pc = 0x21BCC4u;
            goto label_21bcc4;
        }
    }
    ctx->pc = 0x21BC74u;
label_21bc74:
    // 0x21bc74: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21bc74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_21bc78:
    // 0x21bc78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bc7c:
    // 0x21bc7c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x21bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_21bc80:
    // 0x21bc80: 0xc107442  jal         func_41D108
label_21bc84:
    if (ctx->pc == 0x21BC84u) {
        ctx->pc = 0x21BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC80u;
        // 0x21bc84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BC88u;
        goto label_21bc88;
    }
    ctx->pc = 0x21BC80u;
    SET_GPR_U32(ctx, 31, 0x21BC88u);
    ctx->pc = 0x21BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC80u;
    // 0x21bc84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D108u, 0x21BC80u, 0x21BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC88u;
label_21bc88:
    // 0x21bc88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x21bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_21bc8c:
    // 0x21bc8c: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x21bc8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_21bc90:
    // 0x21bc90: 0x8c67bd30  lw          $a3, -0x42D0($v1)
    ctx->pc = 0x21bc90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_21bc94:
    // 0x21bc94: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x21bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_21bc98:
    // 0x21bc98: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_21bc9c:
    // 0x21bc9c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x21bc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_21bca0:
    // 0x21bca0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x21bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_21bca4:
    // 0x21bca4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21bca8:
    // 0x21bca8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21bca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bcac:
    // 0x21bcac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x21bcacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21bcb0:
    // 0x21bcb0: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x21bcb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21bcb4:
    // 0x21bcb4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x21bcb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bcb8:
    // 0x21bcb8: 0xc106e2c  jal         func_41B8B0
label_21bcbc:
    if (ctx->pc == 0x21BCBCu) {
        ctx->pc = 0x21BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCB8u;
        // 0x21bcbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCC0u;
        goto label_21bcc0;
    }
    ctx->pc = 0x21BCB8u;
    SET_GPR_U32(ctx, 31, 0x21BCC0u);
    ctx->pc = 0x21BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCB8u;
    // 0x21bcbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x21BCB8u, 0x21BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCC0u;
label_21bcc0:
    // 0x21bcc0: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x21bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
label_21bcc4:
    // 0x21bcc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21bcc8:
    if (ctx->pc == 0x21BCC8u) {
        ctx->pc = 0x21BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCC4u;
        // 0x21bcc8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCCCu;
        goto label_21bccc;
    }
    ctx->pc = 0x21BCC4u;
    {
        const bool branch_taken_0x21bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCC4u;
        // 0x21bcc8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcc4) {
            ctx->pc = 0x21BCECu;
            goto label_21bcec;
        }
    }
    ctx->pc = 0x21BCCCu;
label_21bccc:
    // 0x21bccc: 0x9262010d  lbu         $v0, 0x10D($s3)
    ctx->pc = 0x21bcccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_21bcd0:
    // 0x21bcd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21bcd4:
    if (ctx->pc == 0x21BCD4u) {
        ctx->pc = 0x21BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCD0u;
        // 0x21bcd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCD8u;
        goto label_21bcd8;
    }
    ctx->pc = 0x21BCD0u;
    {
        const bool branch_taken_0x21bcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCD0u;
        // 0x21bcd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcd0) {
            ctx->pc = 0x21BCE4u;
            goto label_21bce4;
        }
    }
    ctx->pc = 0x21BCD8u;
label_21bcd8:
    // 0x21bcd8: 0x9262010e  lbu         $v0, 0x10E($s3)
    ctx->pc = 0x21bcd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 270)));
label_21bcdc:
    // 0x21bcdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21bce0:
    if (ctx->pc == 0x21BCE0u) {
        ctx->pc = 0x21BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCDCu;
        // 0x21bce0: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCE4u;
        goto label_21bce4;
    }
    ctx->pc = 0x21BCDCu;
    {
        const bool branch_taken_0x21bcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCDCu;
        // 0x21bce0: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcdc) {
            ctx->pc = 0x21BCECu;
            goto label_21bcec;
        }
    }
    ctx->pc = 0x21BCE4u;
label_21bce4:
    // 0x21bce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bce8:
    // 0x21bce8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x21bce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21bcec:
    // 0x21bcec: 0x52c00020  beql        $s6, $zero, . + 4 + (0x20 << 2)
label_21bcf0:
    if (ctx->pc == 0x21BCF0u) {
        ctx->pc = 0x21BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCECu;
        // 0x21bcf0: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCF4u;
        goto label_21bcf4;
    }
    ctx->pc = 0x21BCECu;
    {
        const bool branch_taken_0x21bcec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bcec) {
            ctx->pc = 0x21BCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BCECu;
            // 0x21bcf0: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BD70u;
            goto label_21bd70;
        }
    }
    ctx->pc = 0x21BCF4u;
label_21bcf4:
    // 0x21bcf4: 0xc089a76  jal         func_2269D8
label_21bcf8:
    if (ctx->pc == 0x21BCF8u) {
        ctx->pc = 0x21BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCF4u;
        // 0x21bcf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BCFCu;
        goto label_21bcfc;
    }
    ctx->pc = 0x21BCF4u;
    SET_GPR_U32(ctx, 31, 0x21BCFCu);
    ctx->pc = 0x21BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCF4u;
    // 0x21bcf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x21BCF4u, 0x21BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCFCu;
label_21bcfc:
    // 0x21bcfc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_21bd00:
    if (ctx->pc == 0x21BD00u) {
        ctx->pc = 0x21BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCFCu;
        // 0x21bd00: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD04u;
        goto label_21bd04;
    }
    ctx->pc = 0x21BCFCu;
    {
        const bool branch_taken_0x21bcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bcfc) {
            ctx->pc = 0x21BD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BCFCu;
            // 0x21bd00: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BD70u;
            goto label_21bd70;
        }
    }
    ctx->pc = 0x21BD04u;
label_21bd04:
    // 0x21bd04: 0xc08a0fa  jal         func_2283E8
label_21bd08:
    if (ctx->pc == 0x21BD08u) {
        ctx->pc = 0x21BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD04u;
        // 0x21bd08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD0Cu;
        goto label_21bd0c;
    }
    ctx->pc = 0x21BD04u;
    SET_GPR_U32(ctx, 31, 0x21BD0Cu);
    ctx->pc = 0x21BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD04u;
    // 0x21bd08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283E8u, 0x21BD04u, 0x21BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD0Cu;
label_21bd0c:
    // 0x21bd0c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_21bd10:
    if (ctx->pc == 0x21BD10u) {
        ctx->pc = 0x21BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD0Cu;
        // 0x21bd10: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD14u;
        goto label_21bd14;
    }
    ctx->pc = 0x21BD0Cu;
    {
        const bool branch_taken_0x21bd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bd0c) {
            ctx->pc = 0x21BD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BD0Cu;
            // 0x21bd10: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BD70u;
            goto label_21bd70;
        }
    }
    ctx->pc = 0x21BD14u;
label_21bd14:
    // 0x21bd14: 0x96240058  lhu         $a0, 0x58($s1)
    ctx->pc = 0x21bd14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_21bd18:
    // 0x21bd18: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x21bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_21bd1c:
    // 0x21bd1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21bd20:
    // 0x21bd20: 0x84a20144  lh          $v0, 0x144($a1)
    ctx->pc = 0x21bd20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 324)));
label_21bd24:
    // 0x21bd24: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x21bd24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21bd28:
    // 0x21bd28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21bd28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21bd2c:
    // 0x21bd2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_21bd30:
    if (ctx->pc == 0x21BD30u) {
        ctx->pc = 0x21BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD2Cu;
        // 0x21bd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD34u;
        goto label_21bd34;
    }
    ctx->pc = 0x21BD2Cu;
    {
        const bool branch_taken_0x21bd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD2Cu;
        // 0x21bd30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd2c) {
            ctx->pc = 0x21BD58u;
            goto label_21bd58;
        }
    }
    ctx->pc = 0x21BD34u;
label_21bd34:
    // 0x21bd34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21bd34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_21bd38:
    // 0x21bd38: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x21bd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
label_21bd3c:
    // 0x21bd3c: 0xc08997c  jal         func_2265F0
label_21bd40:
    if (ctx->pc == 0x21BD40u) {
        ctx->pc = 0x21BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD3Cu;
        // 0x21bd40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD44u;
        goto label_21bd44;
    }
    ctx->pc = 0x21BD3Cu;
    SET_GPR_U32(ctx, 31, 0x21BD44u);
    ctx->pc = 0x21BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD3Cu;
    // 0x21bd40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x21BD3Cu, 0x21BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD44u;
label_21bd44:
    // 0x21bd44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21bd48:
    if (ctx->pc == 0x21BD48u) {
        ctx->pc = 0x21BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD44u;
        // 0x21bd48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD4Cu;
        goto label_21bd4c;
    }
    ctx->pc = 0x21BD44u;
    {
        const bool branch_taken_0x21bd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD44u;
        // 0x21bd48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd44) {
            ctx->pc = 0x21BD58u;
            goto label_21bd58;
        }
    }
    ctx->pc = 0x21BD4Cu;
label_21bd4c:
    // 0x21bd4c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x21bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_21bd50:
    // 0x21bd50: 0x84430144  lh          $v1, 0x144($v0)
    ctx->pc = 0x21bd50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
label_21bd54:
    // 0x21bd54: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x21bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21bd58:
    // 0x21bd58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bd5c:
    // 0x21bd5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21bd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bd60:
    // 0x21bd60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21bd60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bd64:
    // 0x21bd64: 0xc0992f6  jal         func_264BD8
label_21bd68:
    if (ctx->pc == 0x21BD68u) {
        ctx->pc = 0x21BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD64u;
        // 0x21bd68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD6Cu;
        goto label_21bd6c;
    }
    ctx->pc = 0x21BD64u;
    SET_GPR_U32(ctx, 31, 0x21BD6Cu);
    ctx->pc = 0x21BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD64u;
    // 0x21bd68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x21BD64u, 0x21BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD6Cu;
label_21bd6c:
    // 0x21bd6c: 0x9262010d  lbu         $v0, 0x10D($s3)
    ctx->pc = 0x21bd6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_21bd70:
    // 0x21bd70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21bd74:
    if (ctx->pc == 0x21BD74u) {
        ctx->pc = 0x21BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD70u;
        // 0x21bd74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BD78u;
        goto label_21bd78;
    }
    ctx->pc = 0x21BD70u;
    {
        const bool branch_taken_0x21bd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD70u;
        // 0x21bd74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd70) {
            ctx->pc = 0x21BD84u;
            goto label_21bd84;
        }
    }
    ctx->pc = 0x21BD78u;
label_21bd78:
    // 0x21bd78: 0x9262010e  lbu         $v0, 0x10E($s3)
    ctx->pc = 0x21bd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 270)));
label_21bd7c:
    // 0x21bd7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_21bd80:
    if (ctx->pc == 0x21BD80u) {
        ctx->pc = 0x21BD84u;
        goto label_21bd84;
    }
    ctx->pc = 0x21BD7Cu;
    {
        const bool branch_taken_0x21bd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bd7c) {
            ctx->pc = 0x21BD88u;
            goto label_21bd88;
        }
    }
    ctx->pc = 0x21BD84u;
label_21bd84:
    // 0x21bd84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bd88:
    // 0x21bd88: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_21bd8c:
    if (ctx->pc == 0x21BD8Cu) {
        ctx->pc = 0x21BD90u;
        goto label_21bd90;
    }
    ctx->pc = 0x21BD88u;
    {
        const bool branch_taken_0x21bd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bd88) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BD90u;
label_21bd90:
    // 0x21bd90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21bd94:
    // 0x21bd94: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x21bd94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_21bd98:
    // 0x21bd98: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x21bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21bd9c:
    // 0x21bd9c: 0x40f809  jalr        $v0
label_21bda0:
    if (ctx->pc == 0x21BDA0u) {
        ctx->pc = 0x21BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD9Cu;
        // 0x21bda0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BDA4u;
        goto label_21bda4;
    }
    ctx->pc = 0x21BD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BDA4u);
        ctx->pc = 0x21BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD9Cu;
        // 0x21bda0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD9Cu, 0x21BDA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BDA4u;
label_21bda4:
    // 0x21bda4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x21bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_21bda8:
    // 0x21bda8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_21bdac:
    if (ctx->pc == 0x21BDACu) {
        ctx->pc = 0x21BDB0u;
        goto label_21bdb0;
    }
    ctx->pc = 0x21BDA8u;
    {
        const bool branch_taken_0x21bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bda8) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BDB0u;
label_21bdb0:
    // 0x21bdb0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21bdb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21bdb4:
    // 0x21bdb4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21bdb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21bdb8:
    // 0x21bdb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_21bdbc:
    if (ctx->pc == 0x21BDBCu) {
        ctx->pc = 0x21BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDB8u;
        // 0x21bdbc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BDC0u;
        goto label_21bdc0;
    }
    ctx->pc = 0x21BDB8u;
    {
        const bool branch_taken_0x21bdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDB8u;
        // 0x21bdbc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdb8) {
            ctx->pc = 0x21BDDCu;
            goto label_21bddc;
        }
    }
    ctx->pc = 0x21BDC0u;
label_21bdc0:
    // 0x21bdc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bdc4:
    // 0x21bdc4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21bdc8:
    // 0x21bdc8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x21bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21bdcc:
    // 0x21bdcc: 0xc13b652  jal         func_4ED948
label_21bdd0:
    if (ctx->pc == 0x21BDD0u) {
        ctx->pc = 0x21BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDCCu;
        // 0x21bdd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BDD4u;
        goto label_21bdd4;
    }
    ctx->pc = 0x21BDCCu;
    SET_GPR_U32(ctx, 31, 0x21BDD4u);
    ctx->pc = 0x21BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDCCu;
    // 0x21bdd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x21BDCCu, 0x21BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDD4u;
label_21bdd4:
    // 0x21bdd4: 0x10000014  b           . + 4 + (0x14 << 2)
label_21bdd8:
    if (ctx->pc == 0x21BDD8u) {
        ctx->pc = 0x21BDDCu;
        goto label_21bddc;
    }
    ctx->pc = 0x21BDD4u;
    {
        const bool branch_taken_0x21bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bdd4) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BDDCu;
label_21bddc:
    // 0x21bddc: 0xc087502  jal         func_21D408
label_21bde0:
    if (ctx->pc == 0x21BDE0u) {
        ctx->pc = 0x21BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDDCu;
        // 0x21bde0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BDE4u;
        goto label_21bde4;
    }
    ctx->pc = 0x21BDDCu;
    SET_GPR_U32(ctx, 31, 0x21BDE4u);
    ctx->pc = 0x21BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDDCu;
    // 0x21bde0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21BDDCu, 0x21BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDE4u;
label_21bde4:
    // 0x21bde4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21bde8:
    // 0x21bde8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21bdec:
    // 0x21bdec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21bdf0:
    // 0x21bdf0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_21bdf4:
    if (ctx->pc == 0x21BDF4u) {
        ctx->pc = 0x21BDF8u;
        goto label_21bdf8;
    }
    ctx->pc = 0x21BDF0u;
    {
        const bool branch_taken_0x21bdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21bdf0) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BDF8u;
label_21bdf8:
    // 0x21bdf8: 0xc05959e  jal         func_165678
label_21bdfc:
    if (ctx->pc == 0x21BDFCu) {
        ctx->pc = 0x21BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDF8u;
        // 0x21bdfc: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE00u;
        goto label_21be00;
    }
    ctx->pc = 0x21BDF8u;
    SET_GPR_U32(ctx, 31, 0x21BE00u);
    ctx->pc = 0x21BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDF8u;
    // 0x21bdfc: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x21BDF8u, 0x21BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE00u;
label_21be00:
    // 0x21be00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21be04:
    if (ctx->pc == 0x21BE04u) {
        ctx->pc = 0x21BE08u;
        goto label_21be08;
    }
    ctx->pc = 0x21BE00u;
    {
        const bool branch_taken_0x21be00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21be00) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BE08u;
label_21be08:
    // 0x21be08: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x21be08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_21be0c:
    // 0x21be0c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21be0cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21be10:
    // 0x21be10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21be14:
    if (ctx->pc == 0x21BE14u) {
        ctx->pc = 0x21BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE10u;
        // 0x21be14: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE18u;
        goto label_21be18;
    }
    ctx->pc = 0x21BE10u;
    {
        const bool branch_taken_0x21be10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE10u;
        // 0x21be14: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be10) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BE18u;
label_21be18:
    // 0x21be18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x21be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21be1c:
    // 0x21be1c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21be20:
    // 0x21be20: 0xc13ce7a  jal         func_4F39E8
label_21be24:
    if (ctx->pc == 0x21BE24u) {
        ctx->pc = 0x21BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE20u;
        // 0x21be24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE28u;
        goto label_21be28;
    }
    ctx->pc = 0x21BE20u;
    SET_GPR_U32(ctx, 31, 0x21BE28u);
    ctx->pc = 0x21BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE20u;
    // 0x21be24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F39E8u, 0x21BE20u, 0x21BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE28u;
label_21be28:
    // 0x21be28: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_21be2c:
    if (ctx->pc == 0x21BE2Cu) {
        ctx->pc = 0x21BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE28u;
        // 0x21be2c: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE30u;
        goto label_21be30;
    }
    ctx->pc = 0x21BE28u;
    {
        const bool branch_taken_0x21be28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE28u;
        // 0x21be2c: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be28) {
            ctx->pc = 0x21BE70u;
            goto label_21be70;
        }
    }
    ctx->pc = 0x21BE30u;
label_21be30:
    // 0x21be30: 0x82a201b0  lb          $v0, 0x1B0($s5)
    ctx->pc = 0x21be30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 432)));
label_21be34:
    // 0x21be34: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21be34u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21be38:
    // 0x21be38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_21be3c:
    if (ctx->pc == 0x21BE3Cu) {
        ctx->pc = 0x21BE40u;
        goto label_21be40;
    }
    ctx->pc = 0x21BE38u;
    {
        const bool branch_taken_0x21be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21be38) {
            ctx->pc = 0x21BE70u;
            goto label_21be70;
        }
    }
    ctx->pc = 0x21BE40u;
label_21be40:
    // 0x21be40: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
label_21be44:
    if (ctx->pc == 0x21BE44u) {
        ctx->pc = 0x21BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE40u;
        // 0x21be44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE48u;
        goto label_21be48;
    }
    ctx->pc = 0x21BE40u;
    {
        const bool branch_taken_0x21be40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE40u;
        // 0x21be44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be40) {
            ctx->pc = 0x21BE70u;
            goto label_21be70;
        }
    }
    ctx->pc = 0x21BE48u;
label_21be48:
    // 0x21be48: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x21be48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_21be4c:
    // 0x21be4c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x21be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_21be50:
    // 0x21be50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21be50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21be54:
    // 0x21be54: 0xc13b662  jal         func_4ED988
label_21be58:
    if (ctx->pc == 0x21BE58u) {
        ctx->pc = 0x21BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE54u;
        // 0x21be58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE5Cu;
        goto label_21be5c;
    }
    ctx->pc = 0x21BE54u;
    SET_GPR_U32(ctx, 31, 0x21BE5Cu);
    ctx->pc = 0x21BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE54u;
    // 0x21be58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x21BE54u, 0x21BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE5Cu;
label_21be5c:
    // 0x21be5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21be60:
    // 0x21be60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21be60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21be64:
    // 0x21be64: 0xc09933e  jal         func_264CF8
label_21be68:
    if (ctx->pc == 0x21BE68u) {
        ctx->pc = 0x21BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE64u;
        // 0x21be68: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE6Cu;
        goto label_21be6c;
    }
    ctx->pc = 0x21BE64u;
    SET_GPR_U32(ctx, 31, 0x21BE6Cu);
    ctx->pc = 0x21BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE64u;
    // 0x21be68: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x21BE64u, 0x21BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE6Cu;
label_21be6c:
    // 0x21be6c: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x21be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_21be70:
    // 0x21be70: 0xc0e8b68  jal         func_3A2DA0
label_21be74:
    if (ctx->pc == 0x21BE74u) {
        ctx->pc = 0x21BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE70u;
        // 0x21be74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE78u;
        goto label_21be78;
    }
    ctx->pc = 0x21BE70u;
    SET_GPR_U32(ctx, 31, 0x21BE78u);
    ctx->pc = 0x21BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE70u;
    // 0x21be74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21BE70u, 0x21BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE78u;
label_21be78:
    // 0x21be78: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x21be78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_21be7c:
    // 0x21be7c: 0xc0e8b58  jal         func_3A2D60
label_21be80:
    if (ctx->pc == 0x21BE80u) {
        ctx->pc = 0x21BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE7Cu;
        // 0x21be80: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE84u;
        goto label_21be84;
    }
    ctx->pc = 0x21BE7Cu;
    SET_GPR_U32(ctx, 31, 0x21BE84u);
    ctx->pc = 0x21BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE7Cu;
    // 0x21be80: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21BE7Cu, 0x21BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE84u;
label_21be84:
    // 0x21be84: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x21be84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_21be88:
    // 0x21be88: 0xc0e8b58  jal         func_3A2D60
label_21be8c:
    if (ctx->pc == 0x21BE8Cu) {
        ctx->pc = 0x21BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE88u;
        // 0x21be8c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BE90u;
        goto label_21be90;
    }
    ctx->pc = 0x21BE88u;
    SET_GPR_U32(ctx, 31, 0x21BE90u);
    ctx->pc = 0x21BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE88u;
    // 0x21be8c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21BE88u, 0x21BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BE90u;
label_21be90:
    // 0x21be90: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x21be90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_21be94:
    // 0x21be94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21be94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21be98:
    // 0x21be98: 0xc0e8b80  jal         func_3A2E00
label_21be9c:
    if (ctx->pc == 0x21BE9Cu) {
        ctx->pc = 0x21BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE98u;
        // 0x21be9c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEA0u;
        goto label_21bea0;
    }
    ctx->pc = 0x21BE98u;
    SET_GPR_U32(ctx, 31, 0x21BEA0u);
    ctx->pc = 0x21BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE98u;
    // 0x21be9c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x21BE98u, 0x21BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEA0u;
label_21bea0:
    // 0x21bea0: 0xc0e8b50  jal         func_3A2D40
label_21bea4:
    if (ctx->pc == 0x21BEA4u) {
        ctx->pc = 0x21BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEA0u;
        // 0x21bea4: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEA8u;
        goto label_21bea8;
    }
    ctx->pc = 0x21BEA0u;
    SET_GPR_U32(ctx, 31, 0x21BEA8u);
    ctx->pc = 0x21BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEA0u;
    // 0x21bea4: 0x8ee42c7c  lw          $a0, 0x2C7C($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x21BEA0u, 0x21BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEA8u;
label_21bea8:
    // 0x21bea8: 0x10000053  b           . + 4 + (0x53 << 2)
label_21beac:
    if (ctx->pc == 0x21BEACu) {
        ctx->pc = 0x21BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEA8u;
        // 0x21beac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEB0u;
        goto label_21beb0;
    }
    ctx->pc = 0x21BEA8u;
    {
        const bool branch_taken_0x21bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEA8u;
        // 0x21beac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bea8) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21BEB0u;
label_21beb0:
    // 0x21beb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21beb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21beb4:
    // 0x21beb4: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x21beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_21beb8:
    // 0x21beb8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x21beb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_21bebc:
    // 0x21bebc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x21bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_21bec0:
    // 0x21bec0: 0x40f809  jalr        $v0
label_21bec4:
    if (ctx->pc == 0x21BEC4u) {
        ctx->pc = 0x21BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC0u;
        // 0x21bec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEC8u;
        goto label_21bec8;
    }
    ctx->pc = 0x21BEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21BEC8u);
        ctx->pc = 0x21BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC0u;
        // 0x21bec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BEC0u, 0x21BEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BEC8u;
label_21bec8:
    // 0x21bec8: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_21becc:
    if (ctx->pc == 0x21BECCu) {
        ctx->pc = 0x21BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC8u;
        // 0x21becc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BED0u;
        goto label_21bed0;
    }
    ctx->pc = 0x21BEC8u;
    {
        const bool branch_taken_0x21bec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC8u;
        // 0x21becc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bec8) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21BED0u;
label_21bed0:
    // 0x21bed0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x21bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_21bed4:
    // 0x21bed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bed8:
    // 0x21bed8: 0xc089998  jal         func_226660
label_21bedc:
    if (ctx->pc == 0x21BEDCu) {
        ctx->pc = 0x21BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BED8u;
        // 0x21bedc: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEE0u;
        goto label_21bee0;
    }
    ctx->pc = 0x21BED8u;
    SET_GPR_U32(ctx, 31, 0x21BEE0u);
    ctx->pc = 0x21BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BED8u;
    // 0x21bedc: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21BED8u, 0x21BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEE0u;
label_21bee0:
    // 0x21bee0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_21bee4:
    if (ctx->pc == 0x21BEE4u) {
        ctx->pc = 0x21BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEE0u;
        // 0x21bee4: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEE8u;
        goto label_21bee8;
    }
    ctx->pc = 0x21BEE0u;
    {
        const bool branch_taken_0x21bee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bee0) {
            ctx->pc = 0x21BEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BEE0u;
            // 0x21bee4: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF68u;
            goto label_21bf68;
        }
    }
    ctx->pc = 0x21BEE8u;
label_21bee8:
    // 0x21bee8: 0xc089fda  jal         func_227F68
label_21beec:
    if (ctx->pc == 0x21BEECu) {
        ctx->pc = 0x21BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEE8u;
        // 0x21beec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEF0u;
        goto label_21bef0;
    }
    ctx->pc = 0x21BEE8u;
    SET_GPR_U32(ctx, 31, 0x21BEF0u);
    ctx->pc = 0x21BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEE8u;
    // 0x21beec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x21BEE8u, 0x21BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEF0u;
label_21bef0:
    // 0x21bef0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_21bef4:
    if (ctx->pc == 0x21BEF4u) {
        ctx->pc = 0x21BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEF0u;
        // 0x21bef4: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BEF8u;
        goto label_21bef8;
    }
    ctx->pc = 0x21BEF0u;
    {
        const bool branch_taken_0x21bef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bef0) {
            ctx->pc = 0x21BEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BEF0u;
            // 0x21bef4: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF68u;
            goto label_21bf68;
        }
    }
    ctx->pc = 0x21BEF8u;
label_21bef8:
    // 0x21bef8: 0xc089fd0  jal         func_227F40
label_21befc:
    if (ctx->pc == 0x21BEFCu) {
        ctx->pc = 0x21BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEF8u;
        // 0x21befc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF00u;
        goto label_21bf00;
    }
    ctx->pc = 0x21BEF8u;
    SET_GPR_U32(ctx, 31, 0x21BF00u);
    ctx->pc = 0x21BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEF8u;
    // 0x21befc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x21BEF8u, 0x21BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF00u;
label_21bf00:
    // 0x21bf00: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_21bf04:
    if (ctx->pc == 0x21BF04u) {
        ctx->pc = 0x21BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF00u;
        // 0x21bf04: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF08u;
        goto label_21bf08;
    }
    ctx->pc = 0x21BF00u;
    {
        const bool branch_taken_0x21bf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf00) {
            ctx->pc = 0x21BF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF00u;
            // 0x21bf04: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF68u;
            goto label_21bf68;
        }
    }
    ctx->pc = 0x21BF08u;
label_21bf08:
    // 0x21bf08: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x21bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_21bf0c:
    // 0x21bf0c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x21bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21bf10:
    // 0x21bf10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21bf14:
    // 0x21bf14: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_21bf18:
    if (ctx->pc == 0x21BF18u) {
        ctx->pc = 0x21BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF14u;
        // 0x21bf18: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF1Cu;
        goto label_21bf1c;
    }
    ctx->pc = 0x21BF14u;
    {
        const bool branch_taken_0x21bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf14) {
            ctx->pc = 0x21BF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF14u;
            // 0x21bf18: 0x8e4601a0  lw          $a2, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF68u;
            goto label_21bf68;
        }
    }
    ctx->pc = 0x21BF1Cu;
label_21bf1c:
    // 0x21bf1c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x21bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_21bf20:
    // 0x21bf20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21bf24:
    // 0x21bf24: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x21bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_21bf28:
    // 0x21bf28: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_21bf2c:
    if (ctx->pc == 0x21BF2Cu) {
        ctx->pc = 0x21BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF28u;
        // 0x21bf2c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF30u;
        goto label_21bf30;
    }
    ctx->pc = 0x21BF28u;
    {
        const bool branch_taken_0x21bf28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF28u;
        // 0x21bf2c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf28) {
            ctx->pc = 0x21BF64u;
            goto label_21bf64;
        }
    }
    ctx->pc = 0x21BF30u;
label_21bf30:
    // 0x21bf30: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_21bf34:
    if (ctx->pc == 0x21BF34u) {
        ctx->pc = 0x21BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF30u;
        // 0x21bf34: 0x240201b2  addiu       $v0, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF38u;
        goto label_21bf38;
    }
    ctx->pc = 0x21BF30u;
    {
        const bool branch_taken_0x21bf30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF30u;
        // 0x21bf34: 0x240201b2  addiu       $v0, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf30) {
            ctx->pc = 0x21BF64u;
            goto label_21bf64;
        }
    }
    ctx->pc = 0x21BF38u;
label_21bf38:
    // 0x21bf38: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_21bf3c:
    if (ctx->pc == 0x21BF3Cu) {
        ctx->pc = 0x21BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF38u;
        // 0x21bf3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF40u;
        goto label_21bf40;
    }
    ctx->pc = 0x21BF38u;
    {
        const bool branch_taken_0x21bf38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF38u;
        // 0x21bf3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf38) {
            ctx->pc = 0x21BF64u;
            goto label_21bf64;
        }
    }
    ctx->pc = 0x21BF40u;
label_21bf40:
    // 0x21bf40: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x21bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_21bf44:
    // 0x21bf44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21bf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bf48:
    // 0x21bf48: 0x3c0142e8  lui         $at, 0x42E8
    ctx->pc = 0x21bf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17128 << 16));
label_21bf4c:
    // 0x21bf4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21bf4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21bf50:
    // 0x21bf50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bf54:
    // 0x21bf54: 0x90480008  lbu         $t0, 0x8($v0)
    ctx->pc = 0x21bf54u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_21bf58:
    // 0x21bf58: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x21bf58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21bf5c:
    // 0x21bf5c: 0xc0882b2  jal         func_220AC8
label_21bf60:
    if (ctx->pc == 0x21BF60u) {
        ctx->pc = 0x21BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF5Cu;
        // 0x21bf60: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF64u;
        goto label_21bf64;
    }
    ctx->pc = 0x21BF5Cu;
    SET_GPR_U32(ctx, 31, 0x21BF64u);
    ctx->pc = 0x21BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF5Cu;
    // 0x21bf60: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x21BF5Cu, 0x21BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF64u;
label_21bf64:
    // 0x21bf64: 0x8e4601a0  lw          $a2, 0x1A0($s2)
    ctx->pc = 0x21bf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_21bf68:
    // 0x21bf68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bf6c:
    // 0x21bf6c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21bf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_21bf70:
    // 0x21bf70: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x21bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_21bf74:
    // 0x21bf74: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x21bf74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_21bf78:
    // 0x21bf78: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x21bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_21bf7c:
    // 0x21bf7c: 0x60f809  jalr        $v1
label_21bf80:
    if (ctx->pc == 0x21BF80u) {
        ctx->pc = 0x21BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF7Cu;
        // 0x21bf80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF84u;
        goto label_21bf84;
    }
    ctx->pc = 0x21BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21BF84u);
        ctx->pc = 0x21BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF7Cu;
        // 0x21bf80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BF7Cu, 0x21BF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21BF84u;
label_21bf84:
    // 0x21bf84: 0xc0e8b48  jal         func_3A2D20
label_21bf88:
    if (ctx->pc == 0x21BF88u) {
        ctx->pc = 0x21BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF84u;
        // 0x21bf88: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF8Cu;
        goto label_21bf8c;
    }
    ctx->pc = 0x21BF84u;
    SET_GPR_U32(ctx, 31, 0x21BF8Cu);
    ctx->pc = 0x21BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF84u;
    // 0x21bf88: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x21BF84u, 0x21BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF8Cu;
label_21bf8c:
    // 0x21bf8c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21bf90:
    // 0x21bf90: 0xc0e8b58  jal         func_3A2D60
label_21bf94:
    if (ctx->pc == 0x21BF94u) {
        ctx->pc = 0x21BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF90u;
        // 0x21bf94: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BF98u;
        goto label_21bf98;
    }
    ctx->pc = 0x21BF90u;
    SET_GPR_U32(ctx, 31, 0x21BF98u);
    ctx->pc = 0x21BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF90u;
    // 0x21bf94: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21BF90u, 0x21BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF98u;
label_21bf98:
    // 0x21bf98: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21bf9c:
    // 0x21bf9c: 0xc0e8b58  jal         func_3A2D60
label_21bfa0:
    if (ctx->pc == 0x21BFA0u) {
        ctx->pc = 0x21BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF9Cu;
        // 0x21bfa0: 0x26850050  addiu       $a1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BFA4u;
        goto label_21bfa4;
    }
    ctx->pc = 0x21BF9Cu;
    SET_GPR_U32(ctx, 31, 0x21BFA4u);
    ctx->pc = 0x21BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF9Cu;
    // 0x21bfa0: 0x26850050  addiu       $a1, $s4, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x21BF9Cu, 0x21BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFA4u;
label_21bfa4:
    // 0x21bfa4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21bfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_21bfa8:
    // 0x21bfa8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21bfa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_21bfac:
    // 0x21bfac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x21bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_21bfb0:
    // 0x21bfb0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x21bfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_21bfb4:
    // 0x21bfb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21bfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21bfb8:
    // 0x21bfb8: 0xc0cd518  jal         func_335460
label_21bfbc:
    if (ctx->pc == 0x21BFBCu) {
        ctx->pc = 0x21BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFB8u;
        // 0x21bfbc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BFC0u;
        goto label_21bfc0;
    }
    ctx->pc = 0x21BFB8u;
    SET_GPR_U32(ctx, 31, 0x21BFC0u);
    ctx->pc = 0x21BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFB8u;
    // 0x21bfbc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x21BFB8u, 0x21BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFC0u;
label_21bfc0:
    // 0x21bfc0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21bfc4:
    // 0x21bfc4: 0xc0e8b78  jal         func_3A2DE0
label_21bfc8:
    if (ctx->pc == 0x21BFC8u) {
        ctx->pc = 0x21BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFC4u;
        // 0x21bfc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BFCCu;
        goto label_21bfcc;
    }
    ctx->pc = 0x21BFC4u;
    SET_GPR_U32(ctx, 31, 0x21BFCCu);
    ctx->pc = 0x21BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFC4u;
    // 0x21bfc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x21BFC4u, 0x21BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFCCu;
label_21bfcc:
    // 0x21bfcc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21bfd0:
    // 0x21bfd0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x21bfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_21bfd4:
    // 0x21bfd4: 0xc0e8b68  jal         func_3A2DA0
label_21bfd8:
    if (ctx->pc == 0x21BFD8u) {
        ctx->pc = 0x21BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFD4u;
        // 0x21bfd8: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BFDCu;
        goto label_21bfdc;
    }
    ctx->pc = 0x21BFD4u;
    SET_GPR_U32(ctx, 31, 0x21BFDCu);
    ctx->pc = 0x21BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFD4u;
    // 0x21bfd8: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x21BFD4u, 0x21BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFDCu;
label_21bfdc:
    // 0x21bfdc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x21bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_21bfe0:
    // 0x21bfe0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21bfe4:
    // 0x21bfe4: 0xc0e8b90  jal         func_3A2E40
label_21bfe8:
    if (ctx->pc == 0x21BFE8u) {
        ctx->pc = 0x21BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFE4u;
        // 0x21bfe8: 0x24a5a928  addiu       $a1, $a1, -0x56D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BFECu;
        goto label_21bfec;
    }
    ctx->pc = 0x21BFE4u;
    SET_GPR_U32(ctx, 31, 0x21BFECu);
    ctx->pc = 0x21BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFE4u;
    // 0x21bfe8: 0x24a5a928  addiu       $a1, $a1, -0x56D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x21BFE4u, 0x21BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFECu;
label_21bfec:
    // 0x21bfec: 0xc0e8b50  jal         func_3A2D40
label_21bff0:
    if (ctx->pc == 0x21BFF0u) {
        ctx->pc = 0x21BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFECu;
        // 0x21bff0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21BFF4u;
        goto label_21bff4;
    }
    ctx->pc = 0x21BFECu;
    SET_GPR_U32(ctx, 31, 0x21BFF4u);
    ctx->pc = 0x21BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFECu;
    // 0x21bff0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x21BFECu, 0x21BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFF4u;
label_21bff4:
    // 0x21bff4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x21bff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21bff8:
    // 0x21bff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bffc:
    // 0x21bffc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x21bffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21c000:
    // 0x21c000: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x21c000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21c004:
    // 0x21c004: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x21c004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21c008:
    // 0x21c008: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x21c008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21c00c:
    // 0x21c00c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x21c00cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c010:
    // 0x21c010: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21c010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21c014:
    // 0x21c014: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x21c014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21c018:
    // 0x21c018: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x21c018u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21c01c:
    // 0x21c01c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21c01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21c020:
    // 0x21c020: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x21c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21c024:
    // 0x21c024: 0x3e00008  jr          $ra
label_21c028:
    if (ctx->pc == 0x21C028u) {
        ctx->pc = 0x21C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C024u;
        // 0x21c028: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C02Cu;
        goto label_21c02c;
    }
    ctx->pc = 0x21C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C024u;
        // 0x21c028: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C02Cu;
label_21c02c:
    // 0x21c02c: 0x0  nop
    ctx->pc = 0x21c02cu;
    // NOP
    ctx->pc = 0x21c030u;
}
