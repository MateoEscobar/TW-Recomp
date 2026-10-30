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

// Function: sub_0025B200
// Address: 0x25b200 - 0x25b9f8
void sub_0025B200_0x25b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B200_0x25b200");
#endif

    switch (ctx->pc) {
        case 0x25b200u: goto label_25b200;
        case 0x25b204u: goto label_25b204;
        case 0x25b208u: goto label_25b208;
        case 0x25b20cu: goto label_25b20c;
        case 0x25b210u: goto label_25b210;
        case 0x25b214u: goto label_25b214;
        case 0x25b218u: goto label_25b218;
        case 0x25b21cu: goto label_25b21c;
        case 0x25b220u: goto label_25b220;
        case 0x25b224u: goto label_25b224;
        case 0x25b228u: goto label_25b228;
        case 0x25b22cu: goto label_25b22c;
        case 0x25b230u: goto label_25b230;
        case 0x25b234u: goto label_25b234;
        case 0x25b238u: goto label_25b238;
        case 0x25b23cu: goto label_25b23c;
        case 0x25b240u: goto label_25b240;
        case 0x25b244u: goto label_25b244;
        case 0x25b248u: goto label_25b248;
        case 0x25b24cu: goto label_25b24c;
        case 0x25b250u: goto label_25b250;
        case 0x25b254u: goto label_25b254;
        case 0x25b258u: goto label_25b258;
        case 0x25b25cu: goto label_25b25c;
        case 0x25b260u: goto label_25b260;
        case 0x25b264u: goto label_25b264;
        case 0x25b268u: goto label_25b268;
        case 0x25b26cu: goto label_25b26c;
        case 0x25b270u: goto label_25b270;
        case 0x25b274u: goto label_25b274;
        case 0x25b278u: goto label_25b278;
        case 0x25b27cu: goto label_25b27c;
        case 0x25b280u: goto label_25b280;
        case 0x25b284u: goto label_25b284;
        case 0x25b288u: goto label_25b288;
        case 0x25b28cu: goto label_25b28c;
        case 0x25b290u: goto label_25b290;
        case 0x25b294u: goto label_25b294;
        case 0x25b298u: goto label_25b298;
        case 0x25b29cu: goto label_25b29c;
        case 0x25b2a0u: goto label_25b2a0;
        case 0x25b2a4u: goto label_25b2a4;
        case 0x25b2a8u: goto label_25b2a8;
        case 0x25b2acu: goto label_25b2ac;
        case 0x25b2b0u: goto label_25b2b0;
        case 0x25b2b4u: goto label_25b2b4;
        case 0x25b2b8u: goto label_25b2b8;
        case 0x25b2bcu: goto label_25b2bc;
        case 0x25b2c0u: goto label_25b2c0;
        case 0x25b2c4u: goto label_25b2c4;
        case 0x25b2c8u: goto label_25b2c8;
        case 0x25b2ccu: goto label_25b2cc;
        case 0x25b2d0u: goto label_25b2d0;
        case 0x25b2d4u: goto label_25b2d4;
        case 0x25b2d8u: goto label_25b2d8;
        case 0x25b2dcu: goto label_25b2dc;
        case 0x25b2e0u: goto label_25b2e0;
        case 0x25b2e4u: goto label_25b2e4;
        case 0x25b2e8u: goto label_25b2e8;
        case 0x25b2ecu: goto label_25b2ec;
        case 0x25b2f0u: goto label_25b2f0;
        case 0x25b2f4u: goto label_25b2f4;
        case 0x25b2f8u: goto label_25b2f8;
        case 0x25b2fcu: goto label_25b2fc;
        case 0x25b300u: goto label_25b300;
        case 0x25b304u: goto label_25b304;
        case 0x25b308u: goto label_25b308;
        case 0x25b30cu: goto label_25b30c;
        case 0x25b310u: goto label_25b310;
        case 0x25b314u: goto label_25b314;
        case 0x25b318u: goto label_25b318;
        case 0x25b31cu: goto label_25b31c;
        case 0x25b320u: goto label_25b320;
        case 0x25b324u: goto label_25b324;
        case 0x25b328u: goto label_25b328;
        case 0x25b32cu: goto label_25b32c;
        case 0x25b330u: goto label_25b330;
        case 0x25b334u: goto label_25b334;
        case 0x25b338u: goto label_25b338;
        case 0x25b33cu: goto label_25b33c;
        case 0x25b340u: goto label_25b340;
        case 0x25b344u: goto label_25b344;
        case 0x25b348u: goto label_25b348;
        case 0x25b34cu: goto label_25b34c;
        case 0x25b350u: goto label_25b350;
        case 0x25b354u: goto label_25b354;
        case 0x25b358u: goto label_25b358;
        case 0x25b35cu: goto label_25b35c;
        case 0x25b360u: goto label_25b360;
        case 0x25b364u: goto label_25b364;
        case 0x25b368u: goto label_25b368;
        case 0x25b36cu: goto label_25b36c;
        case 0x25b370u: goto label_25b370;
        case 0x25b374u: goto label_25b374;
        case 0x25b378u: goto label_25b378;
        case 0x25b37cu: goto label_25b37c;
        case 0x25b380u: goto label_25b380;
        case 0x25b384u: goto label_25b384;
        case 0x25b388u: goto label_25b388;
        case 0x25b38cu: goto label_25b38c;
        case 0x25b390u: goto label_25b390;
        case 0x25b394u: goto label_25b394;
        case 0x25b398u: goto label_25b398;
        case 0x25b39cu: goto label_25b39c;
        case 0x25b3a0u: goto label_25b3a0;
        case 0x25b3a4u: goto label_25b3a4;
        case 0x25b3a8u: goto label_25b3a8;
        case 0x25b3acu: goto label_25b3ac;
        case 0x25b3b0u: goto label_25b3b0;
        case 0x25b3b4u: goto label_25b3b4;
        case 0x25b3b8u: goto label_25b3b8;
        case 0x25b3bcu: goto label_25b3bc;
        case 0x25b3c0u: goto label_25b3c0;
        case 0x25b3c4u: goto label_25b3c4;
        case 0x25b3c8u: goto label_25b3c8;
        case 0x25b3ccu: goto label_25b3cc;
        case 0x25b3d0u: goto label_25b3d0;
        case 0x25b3d4u: goto label_25b3d4;
        case 0x25b3d8u: goto label_25b3d8;
        case 0x25b3dcu: goto label_25b3dc;
        case 0x25b3e0u: goto label_25b3e0;
        case 0x25b3e4u: goto label_25b3e4;
        case 0x25b3e8u: goto label_25b3e8;
        case 0x25b3ecu: goto label_25b3ec;
        case 0x25b3f0u: goto label_25b3f0;
        case 0x25b3f4u: goto label_25b3f4;
        case 0x25b3f8u: goto label_25b3f8;
        case 0x25b3fcu: goto label_25b3fc;
        case 0x25b400u: goto label_25b400;
        case 0x25b404u: goto label_25b404;
        case 0x25b408u: goto label_25b408;
        case 0x25b40cu: goto label_25b40c;
        case 0x25b410u: goto label_25b410;
        case 0x25b414u: goto label_25b414;
        case 0x25b418u: goto label_25b418;
        case 0x25b41cu: goto label_25b41c;
        case 0x25b420u: goto label_25b420;
        case 0x25b424u: goto label_25b424;
        case 0x25b428u: goto label_25b428;
        case 0x25b42cu: goto label_25b42c;
        case 0x25b430u: goto label_25b430;
        case 0x25b434u: goto label_25b434;
        case 0x25b438u: goto label_25b438;
        case 0x25b43cu: goto label_25b43c;
        case 0x25b440u: goto label_25b440;
        case 0x25b444u: goto label_25b444;
        case 0x25b448u: goto label_25b448;
        case 0x25b44cu: goto label_25b44c;
        case 0x25b450u: goto label_25b450;
        case 0x25b454u: goto label_25b454;
        case 0x25b458u: goto label_25b458;
        case 0x25b45cu: goto label_25b45c;
        case 0x25b460u: goto label_25b460;
        case 0x25b464u: goto label_25b464;
        case 0x25b468u: goto label_25b468;
        case 0x25b46cu: goto label_25b46c;
        case 0x25b470u: goto label_25b470;
        case 0x25b474u: goto label_25b474;
        case 0x25b478u: goto label_25b478;
        case 0x25b47cu: goto label_25b47c;
        case 0x25b480u: goto label_25b480;
        case 0x25b484u: goto label_25b484;
        case 0x25b488u: goto label_25b488;
        case 0x25b48cu: goto label_25b48c;
        case 0x25b490u: goto label_25b490;
        case 0x25b494u: goto label_25b494;
        case 0x25b498u: goto label_25b498;
        case 0x25b49cu: goto label_25b49c;
        case 0x25b4a0u: goto label_25b4a0;
        case 0x25b4a4u: goto label_25b4a4;
        case 0x25b4a8u: goto label_25b4a8;
        case 0x25b4acu: goto label_25b4ac;
        case 0x25b4b0u: goto label_25b4b0;
        case 0x25b4b4u: goto label_25b4b4;
        case 0x25b4b8u: goto label_25b4b8;
        case 0x25b4bcu: goto label_25b4bc;
        case 0x25b4c0u: goto label_25b4c0;
        case 0x25b4c4u: goto label_25b4c4;
        case 0x25b4c8u: goto label_25b4c8;
        case 0x25b4ccu: goto label_25b4cc;
        case 0x25b4d0u: goto label_25b4d0;
        case 0x25b4d4u: goto label_25b4d4;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4dcu: goto label_25b4dc;
        case 0x25b4e0u: goto label_25b4e0;
        case 0x25b4e4u: goto label_25b4e4;
        case 0x25b4e8u: goto label_25b4e8;
        case 0x25b4ecu: goto label_25b4ec;
        case 0x25b4f0u: goto label_25b4f0;
        case 0x25b4f4u: goto label_25b4f4;
        case 0x25b4f8u: goto label_25b4f8;
        case 0x25b4fcu: goto label_25b4fc;
        case 0x25b500u: goto label_25b500;
        case 0x25b504u: goto label_25b504;
        case 0x25b508u: goto label_25b508;
        case 0x25b50cu: goto label_25b50c;
        case 0x25b510u: goto label_25b510;
        case 0x25b514u: goto label_25b514;
        case 0x25b518u: goto label_25b518;
        case 0x25b51cu: goto label_25b51c;
        case 0x25b520u: goto label_25b520;
        case 0x25b524u: goto label_25b524;
        case 0x25b528u: goto label_25b528;
        case 0x25b52cu: goto label_25b52c;
        case 0x25b530u: goto label_25b530;
        case 0x25b534u: goto label_25b534;
        case 0x25b538u: goto label_25b538;
        case 0x25b53cu: goto label_25b53c;
        case 0x25b540u: goto label_25b540;
        case 0x25b544u: goto label_25b544;
        case 0x25b548u: goto label_25b548;
        case 0x25b54cu: goto label_25b54c;
        case 0x25b550u: goto label_25b550;
        case 0x25b554u: goto label_25b554;
        case 0x25b558u: goto label_25b558;
        case 0x25b55cu: goto label_25b55c;
        case 0x25b560u: goto label_25b560;
        case 0x25b564u: goto label_25b564;
        case 0x25b568u: goto label_25b568;
        case 0x25b56cu: goto label_25b56c;
        case 0x25b570u: goto label_25b570;
        case 0x25b574u: goto label_25b574;
        case 0x25b578u: goto label_25b578;
        case 0x25b57cu: goto label_25b57c;
        case 0x25b580u: goto label_25b580;
        case 0x25b584u: goto label_25b584;
        case 0x25b588u: goto label_25b588;
        case 0x25b58cu: goto label_25b58c;
        case 0x25b590u: goto label_25b590;
        case 0x25b594u: goto label_25b594;
        case 0x25b598u: goto label_25b598;
        case 0x25b59cu: goto label_25b59c;
        case 0x25b5a0u: goto label_25b5a0;
        case 0x25b5a4u: goto label_25b5a4;
        case 0x25b5a8u: goto label_25b5a8;
        case 0x25b5acu: goto label_25b5ac;
        case 0x25b5b0u: goto label_25b5b0;
        case 0x25b5b4u: goto label_25b5b4;
        case 0x25b5b8u: goto label_25b5b8;
        case 0x25b5bcu: goto label_25b5bc;
        case 0x25b5c0u: goto label_25b5c0;
        case 0x25b5c4u: goto label_25b5c4;
        case 0x25b5c8u: goto label_25b5c8;
        case 0x25b5ccu: goto label_25b5cc;
        case 0x25b5d0u: goto label_25b5d0;
        case 0x25b5d4u: goto label_25b5d4;
        case 0x25b5d8u: goto label_25b5d8;
        case 0x25b5dcu: goto label_25b5dc;
        case 0x25b5e0u: goto label_25b5e0;
        case 0x25b5e4u: goto label_25b5e4;
        case 0x25b5e8u: goto label_25b5e8;
        case 0x25b5ecu: goto label_25b5ec;
        case 0x25b5f0u: goto label_25b5f0;
        case 0x25b5f4u: goto label_25b5f4;
        case 0x25b5f8u: goto label_25b5f8;
        case 0x25b5fcu: goto label_25b5fc;
        case 0x25b600u: goto label_25b600;
        case 0x25b604u: goto label_25b604;
        case 0x25b608u: goto label_25b608;
        case 0x25b60cu: goto label_25b60c;
        case 0x25b610u: goto label_25b610;
        case 0x25b614u: goto label_25b614;
        case 0x25b618u: goto label_25b618;
        case 0x25b61cu: goto label_25b61c;
        case 0x25b620u: goto label_25b620;
        case 0x25b624u: goto label_25b624;
        case 0x25b628u: goto label_25b628;
        case 0x25b62cu: goto label_25b62c;
        case 0x25b630u: goto label_25b630;
        case 0x25b634u: goto label_25b634;
        case 0x25b638u: goto label_25b638;
        case 0x25b63cu: goto label_25b63c;
        case 0x25b640u: goto label_25b640;
        case 0x25b644u: goto label_25b644;
        case 0x25b648u: goto label_25b648;
        case 0x25b64cu: goto label_25b64c;
        case 0x25b650u: goto label_25b650;
        case 0x25b654u: goto label_25b654;
        case 0x25b658u: goto label_25b658;
        case 0x25b65cu: goto label_25b65c;
        case 0x25b660u: goto label_25b660;
        case 0x25b664u: goto label_25b664;
        case 0x25b668u: goto label_25b668;
        case 0x25b66cu: goto label_25b66c;
        case 0x25b670u: goto label_25b670;
        case 0x25b674u: goto label_25b674;
        case 0x25b678u: goto label_25b678;
        case 0x25b67cu: goto label_25b67c;
        case 0x25b680u: goto label_25b680;
        case 0x25b684u: goto label_25b684;
        case 0x25b688u: goto label_25b688;
        case 0x25b68cu: goto label_25b68c;
        case 0x25b690u: goto label_25b690;
        case 0x25b694u: goto label_25b694;
        case 0x25b698u: goto label_25b698;
        case 0x25b69cu: goto label_25b69c;
        case 0x25b6a0u: goto label_25b6a0;
        case 0x25b6a4u: goto label_25b6a4;
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6acu: goto label_25b6ac;
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6b4u: goto label_25b6b4;
        case 0x25b6b8u: goto label_25b6b8;
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6c4u: goto label_25b6c4;
        case 0x25b6c8u: goto label_25b6c8;
        case 0x25b6ccu: goto label_25b6cc;
        case 0x25b6d0u: goto label_25b6d0;
        case 0x25b6d4u: goto label_25b6d4;
        case 0x25b6d8u: goto label_25b6d8;
        case 0x25b6dcu: goto label_25b6dc;
        case 0x25b6e0u: goto label_25b6e0;
        case 0x25b6e4u: goto label_25b6e4;
        case 0x25b6e8u: goto label_25b6e8;
        case 0x25b6ecu: goto label_25b6ec;
        case 0x25b6f0u: goto label_25b6f0;
        case 0x25b6f4u: goto label_25b6f4;
        case 0x25b6f8u: goto label_25b6f8;
        case 0x25b6fcu: goto label_25b6fc;
        case 0x25b700u: goto label_25b700;
        case 0x25b704u: goto label_25b704;
        case 0x25b708u: goto label_25b708;
        case 0x25b70cu: goto label_25b70c;
        case 0x25b710u: goto label_25b710;
        case 0x25b714u: goto label_25b714;
        case 0x25b718u: goto label_25b718;
        case 0x25b71cu: goto label_25b71c;
        case 0x25b720u: goto label_25b720;
        case 0x25b724u: goto label_25b724;
        case 0x25b728u: goto label_25b728;
        case 0x25b72cu: goto label_25b72c;
        case 0x25b730u: goto label_25b730;
        case 0x25b734u: goto label_25b734;
        case 0x25b738u: goto label_25b738;
        case 0x25b73cu: goto label_25b73c;
        case 0x25b740u: goto label_25b740;
        case 0x25b744u: goto label_25b744;
        case 0x25b748u: goto label_25b748;
        case 0x25b74cu: goto label_25b74c;
        case 0x25b750u: goto label_25b750;
        case 0x25b754u: goto label_25b754;
        case 0x25b758u: goto label_25b758;
        case 0x25b75cu: goto label_25b75c;
        case 0x25b760u: goto label_25b760;
        case 0x25b764u: goto label_25b764;
        case 0x25b768u: goto label_25b768;
        case 0x25b76cu: goto label_25b76c;
        case 0x25b770u: goto label_25b770;
        case 0x25b774u: goto label_25b774;
        case 0x25b778u: goto label_25b778;
        case 0x25b77cu: goto label_25b77c;
        case 0x25b780u: goto label_25b780;
        case 0x25b784u: goto label_25b784;
        case 0x25b788u: goto label_25b788;
        case 0x25b78cu: goto label_25b78c;
        case 0x25b790u: goto label_25b790;
        case 0x25b794u: goto label_25b794;
        case 0x25b798u: goto label_25b798;
        case 0x25b79cu: goto label_25b79c;
        case 0x25b7a0u: goto label_25b7a0;
        case 0x25b7a4u: goto label_25b7a4;
        case 0x25b7a8u: goto label_25b7a8;
        case 0x25b7acu: goto label_25b7ac;
        case 0x25b7b0u: goto label_25b7b0;
        case 0x25b7b4u: goto label_25b7b4;
        case 0x25b7b8u: goto label_25b7b8;
        case 0x25b7bcu: goto label_25b7bc;
        case 0x25b7c0u: goto label_25b7c0;
        case 0x25b7c4u: goto label_25b7c4;
        case 0x25b7c8u: goto label_25b7c8;
        case 0x25b7ccu: goto label_25b7cc;
        case 0x25b7d0u: goto label_25b7d0;
        case 0x25b7d4u: goto label_25b7d4;
        case 0x25b7d8u: goto label_25b7d8;
        case 0x25b7dcu: goto label_25b7dc;
        case 0x25b7e0u: goto label_25b7e0;
        case 0x25b7e4u: goto label_25b7e4;
        case 0x25b7e8u: goto label_25b7e8;
        case 0x25b7ecu: goto label_25b7ec;
        case 0x25b7f0u: goto label_25b7f0;
        case 0x25b7f4u: goto label_25b7f4;
        case 0x25b7f8u: goto label_25b7f8;
        case 0x25b7fcu: goto label_25b7fc;
        case 0x25b800u: goto label_25b800;
        case 0x25b804u: goto label_25b804;
        case 0x25b808u: goto label_25b808;
        case 0x25b80cu: goto label_25b80c;
        case 0x25b810u: goto label_25b810;
        case 0x25b814u: goto label_25b814;
        case 0x25b818u: goto label_25b818;
        case 0x25b81cu: goto label_25b81c;
        case 0x25b820u: goto label_25b820;
        case 0x25b824u: goto label_25b824;
        case 0x25b828u: goto label_25b828;
        case 0x25b82cu: goto label_25b82c;
        case 0x25b830u: goto label_25b830;
        case 0x25b834u: goto label_25b834;
        case 0x25b838u: goto label_25b838;
        case 0x25b83cu: goto label_25b83c;
        case 0x25b840u: goto label_25b840;
        case 0x25b844u: goto label_25b844;
        case 0x25b848u: goto label_25b848;
        case 0x25b84cu: goto label_25b84c;
        case 0x25b850u: goto label_25b850;
        case 0x25b854u: goto label_25b854;
        case 0x25b858u: goto label_25b858;
        case 0x25b85cu: goto label_25b85c;
        case 0x25b860u: goto label_25b860;
        case 0x25b864u: goto label_25b864;
        case 0x25b868u: goto label_25b868;
        case 0x25b86cu: goto label_25b86c;
        case 0x25b870u: goto label_25b870;
        case 0x25b874u: goto label_25b874;
        case 0x25b878u: goto label_25b878;
        case 0x25b87cu: goto label_25b87c;
        case 0x25b880u: goto label_25b880;
        case 0x25b884u: goto label_25b884;
        case 0x25b888u: goto label_25b888;
        case 0x25b88cu: goto label_25b88c;
        case 0x25b890u: goto label_25b890;
        case 0x25b894u: goto label_25b894;
        case 0x25b898u: goto label_25b898;
        case 0x25b89cu: goto label_25b89c;
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8a4u: goto label_25b8a4;
        case 0x25b8a8u: goto label_25b8a8;
        case 0x25b8acu: goto label_25b8ac;
        case 0x25b8b0u: goto label_25b8b0;
        case 0x25b8b4u: goto label_25b8b4;
        case 0x25b8b8u: goto label_25b8b8;
        case 0x25b8bcu: goto label_25b8bc;
        case 0x25b8c0u: goto label_25b8c0;
        case 0x25b8c4u: goto label_25b8c4;
        case 0x25b8c8u: goto label_25b8c8;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8d0u: goto label_25b8d0;
        case 0x25b8d4u: goto label_25b8d4;
        case 0x25b8d8u: goto label_25b8d8;
        case 0x25b8dcu: goto label_25b8dc;
        case 0x25b8e0u: goto label_25b8e0;
        case 0x25b8e4u: goto label_25b8e4;
        case 0x25b8e8u: goto label_25b8e8;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8f0u: goto label_25b8f0;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b8f8u: goto label_25b8f8;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b900u: goto label_25b900;
        case 0x25b904u: goto label_25b904;
        case 0x25b908u: goto label_25b908;
        case 0x25b90cu: goto label_25b90c;
        case 0x25b910u: goto label_25b910;
        case 0x25b914u: goto label_25b914;
        case 0x25b918u: goto label_25b918;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b920u: goto label_25b920;
        case 0x25b924u: goto label_25b924;
        case 0x25b928u: goto label_25b928;
        case 0x25b92cu: goto label_25b92c;
        case 0x25b930u: goto label_25b930;
        case 0x25b934u: goto label_25b934;
        case 0x25b938u: goto label_25b938;
        case 0x25b93cu: goto label_25b93c;
        case 0x25b940u: goto label_25b940;
        case 0x25b944u: goto label_25b944;
        case 0x25b948u: goto label_25b948;
        case 0x25b94cu: goto label_25b94c;
        case 0x25b950u: goto label_25b950;
        case 0x25b954u: goto label_25b954;
        case 0x25b958u: goto label_25b958;
        case 0x25b95cu: goto label_25b95c;
        case 0x25b960u: goto label_25b960;
        case 0x25b964u: goto label_25b964;
        case 0x25b968u: goto label_25b968;
        case 0x25b96cu: goto label_25b96c;
        case 0x25b970u: goto label_25b970;
        case 0x25b974u: goto label_25b974;
        case 0x25b978u: goto label_25b978;
        case 0x25b97cu: goto label_25b97c;
        case 0x25b980u: goto label_25b980;
        case 0x25b984u: goto label_25b984;
        case 0x25b988u: goto label_25b988;
        case 0x25b98cu: goto label_25b98c;
        case 0x25b990u: goto label_25b990;
        case 0x25b994u: goto label_25b994;
        case 0x25b998u: goto label_25b998;
        case 0x25b99cu: goto label_25b99c;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9a4u: goto label_25b9a4;
        case 0x25b9a8u: goto label_25b9a8;
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9b0u: goto label_25b9b0;
        case 0x25b9b4u: goto label_25b9b4;
        case 0x25b9b8u: goto label_25b9b8;
        case 0x25b9bcu: goto label_25b9bc;
        case 0x25b9c0u: goto label_25b9c0;
        case 0x25b9c4u: goto label_25b9c4;
        case 0x25b9c8u: goto label_25b9c8;
        case 0x25b9ccu: goto label_25b9cc;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9d8u: goto label_25b9d8;
        case 0x25b9dcu: goto label_25b9dc;
        case 0x25b9e0u: goto label_25b9e0;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9e8u: goto label_25b9e8;
        case 0x25b9ecu: goto label_25b9ec;
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        default: break;
    }

    ctx->pc = 0x25b200u;

label_25b200:
    // 0x25b200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25b204:
    // 0x25b204: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25b204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_25b208:
    // 0x25b208: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x25b208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_25b20c:
    // 0x25b20c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25b20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25b210:
    // 0x25b210: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x25b210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_25b214:
    // 0x25b214: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25b214u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_25b218:
    // 0x25b218: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_25b21c:
    // 0x25b21c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25b220:
    // 0x25b220: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x25b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_25b224:
    // 0x25b224: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x25b224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_25b228:
    // 0x25b228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25b22c:
    // 0x25b22c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x25b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25b230:
    // 0x25b230: 0xc088ee6  jal         func_223B98
label_25b234:
    if (ctx->pc == 0x25B234u) {
        ctx->pc = 0x25B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B230u;
        // 0x25b234: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B238u;
        goto label_25b238;
    }
    ctx->pc = 0x25B230u;
    SET_GPR_U32(ctx, 31, 0x25B238u);
    ctx->pc = 0x25B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B230u;
    // 0x25b234: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x25B230u, 0x25B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B238u;
label_25b238:
    // 0x25b238: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_25b23c:
    if (ctx->pc == 0x25B23Cu) {
        ctx->pc = 0x25B240u;
        goto label_25b240;
    }
    ctx->pc = 0x25B238u;
    {
        const bool branch_taken_0x25b238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b238) {
            ctx->pc = 0x25B25Cu;
            goto label_25b25c;
        }
    }
    ctx->pc = 0x25B240u;
label_25b240:
    // 0x25b240: 0xc095018  jal         func_254060
label_25b244:
    if (ctx->pc == 0x25B244u) {
        ctx->pc = 0x25B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B240u;
        // 0x25b244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B248u;
        goto label_25b248;
    }
    ctx->pc = 0x25B240u;
    SET_GPR_U32(ctx, 31, 0x25B248u);
    ctx->pc = 0x25B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B240u;
    // 0x25b244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x25B240u, 0x25B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B248u;
label_25b248:
    // 0x25b248: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x25b248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25b24c:
    // 0x25b24c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_25b250:
    if (ctx->pc == 0x25B250u) {
        ctx->pc = 0x25B254u;
        goto label_25b254;
    }
    ctx->pc = 0x25B24Cu;
    {
        const bool branch_taken_0x25b24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25b24c) {
            ctx->pc = 0x25B25Cu;
            goto label_25b25c;
        }
    }
    ctx->pc = 0x25B254u;
label_25b254:
    // 0x25b254: 0xc094fca  jal         func_253F28
label_25b258:
    if (ctx->pc == 0x25B258u) {
        ctx->pc = 0x25B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B254u;
        // 0x25b258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B25Cu;
        goto label_25b25c;
    }
    ctx->pc = 0x25B254u;
    SET_GPR_U32(ctx, 31, 0x25B25Cu);
    ctx->pc = 0x25B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B254u;
    // 0x25b258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x25B254u, 0x25B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B25Cu;
label_25b25c:
    // 0x25b25c: 0xc08a05a  jal         func_228168
label_25b260:
    if (ctx->pc == 0x25B260u) {
        ctx->pc = 0x25B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B25Cu;
        // 0x25b260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B264u;
        goto label_25b264;
    }
    ctx->pc = 0x25B25Cu;
    SET_GPR_U32(ctx, 31, 0x25B264u);
    ctx->pc = 0x25B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B25Cu;
    // 0x25b260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25B25Cu, 0x25B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B264u;
label_25b264:
    // 0x25b264: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_25b268:
    if (ctx->pc == 0x25B268u) {
        ctx->pc = 0x25B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B264u;
        // 0x25b268: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B26Cu;
        goto label_25b26c;
    }
    ctx->pc = 0x25B264u;
    {
        const bool branch_taken_0x25b264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b264) {
            ctx->pc = 0x25B268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B264u;
            // 0x25b268: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B2DCu;
            goto label_25b2dc;
        }
    }
    ctx->pc = 0x25B26Cu;
label_25b26c:
    // 0x25b26c: 0xc089694  jal         func_225A50
label_25b270:
    if (ctx->pc == 0x25B270u) {
        ctx->pc = 0x25B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B26Cu;
        // 0x25b270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B274u;
        goto label_25b274;
    }
    ctx->pc = 0x25B26Cu;
    SET_GPR_U32(ctx, 31, 0x25B274u);
    ctx->pc = 0x25B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B26Cu;
    // 0x25b270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225A50u, 0x25B26Cu, 0x25B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B274u;
label_25b274:
    // 0x25b274: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25b278:
    if (ctx->pc == 0x25B278u) {
        ctx->pc = 0x25B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B274u;
        // 0x25b278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B27Cu;
        goto label_25b27c;
    }
    ctx->pc = 0x25B274u;
    {
        const bool branch_taken_0x25b274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B274u;
        // 0x25b278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b274) {
            ctx->pc = 0x25B28Cu;
            goto label_25b28c;
        }
    }
    ctx->pc = 0x25B27Cu;
label_25b27c:
    // 0x25b27c: 0xc08997c  jal         func_2265F0
label_25b280:
    if (ctx->pc == 0x25B280u) {
        ctx->pc = 0x25B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B27Cu;
        // 0x25b280: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B284u;
        goto label_25b284;
    }
    ctx->pc = 0x25B27Cu;
    SET_GPR_U32(ctx, 31, 0x25B284u);
    ctx->pc = 0x25B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B27Cu;
    // 0x25b280: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25B27Cu, 0x25B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B284u;
label_25b284:
    // 0x25b284: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_25b288:
    if (ctx->pc == 0x25B288u) {
        ctx->pc = 0x25B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B284u;
        // 0x25b288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B28Cu;
        goto label_25b28c;
    }
    ctx->pc = 0x25B284u;
    {
        const bool branch_taken_0x25b284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B284u;
        // 0x25b288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b284) {
            ctx->pc = 0x25B2BCu;
            goto label_25b2bc;
        }
    }
    ctx->pc = 0x25B28Cu;
label_25b28c:
    // 0x25b28c: 0xc089704  jal         func_225C10
label_25b290:
    if (ctx->pc == 0x25B290u) {
        ctx->pc = 0x25B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B28Cu;
        // 0x25b290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B294u;
        goto label_25b294;
    }
    ctx->pc = 0x25B28Cu;
    SET_GPR_U32(ctx, 31, 0x25B294u);
    ctx->pc = 0x25B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B28Cu;
    // 0x25b290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C10u, 0x25B28Cu, 0x25B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B294u;
label_25b294:
    // 0x25b294: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25b298:
    if (ctx->pc == 0x25B298u) {
        ctx->pc = 0x25B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B294u;
        // 0x25b298: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B29Cu;
        goto label_25b29c;
    }
    ctx->pc = 0x25B294u;
    {
        const bool branch_taken_0x25b294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B294u;
        // 0x25b298: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b294) {
            ctx->pc = 0x25B2D8u;
            goto label_25b2d8;
        }
    }
    ctx->pc = 0x25B29Cu;
label_25b29c:
    // 0x25b29c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_25b2a0:
    // 0x25b2a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_25b2a4:
    if (ctx->pc == 0x25B2A4u) {
        ctx->pc = 0x25B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A0u;
        // 0x25b2a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2A8u;
        goto label_25b2a8;
    }
    ctx->pc = 0x25B2A0u;
    {
        const bool branch_taken_0x25b2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A0u;
        // 0x25b2a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2a0) {
            ctx->pc = 0x25B2B8u;
            goto label_25b2b8;
        }
    }
    ctx->pc = 0x25B2A8u;
label_25b2a8:
    // 0x25b2a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_25b2ac:
    if (ctx->pc == 0x25B2ACu) {
        ctx->pc = 0x25B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A8u;
        // 0x25b2ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2B0u;
        goto label_25b2b0;
    }
    ctx->pc = 0x25B2A8u;
    {
        const bool branch_taken_0x25b2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A8u;
        // 0x25b2ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2a8) {
            ctx->pc = 0x25B2B8u;
            goto label_25b2b8;
        }
    }
    ctx->pc = 0x25B2B0u;
label_25b2b0:
    // 0x25b2b0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_25b2b4:
    if (ctx->pc == 0x25B2B4u) {
        ctx->pc = 0x25B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2B0u;
        // 0x25b2b4: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2B8u;
        goto label_25b2b8;
    }
    ctx->pc = 0x25B2B0u;
    {
        const bool branch_taken_0x25b2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2B0u;
        // 0x25b2b4: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2b0) {
            ctx->pc = 0x25B2DCu;
            goto label_25b2dc;
        }
    }
    ctx->pc = 0x25B2B8u;
label_25b2b8:
    // 0x25b2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b2bc:
    // 0x25b2bc: 0xc096e7e  jal         func_25B9F8
label_25b2c0:
    if (ctx->pc == 0x25B2C0u) {
        ctx->pc = 0x25B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2BCu;
        // 0x25b2c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2C4u;
        goto label_25b2c4;
    }
    ctx->pc = 0x25B2BCu;
    SET_GPR_U32(ctx, 31, 0x25B2C4u);
    ctx->pc = 0x25B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2BCu;
    // 0x25b2c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B9F8u, 0x25B2BCu, 0x25B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2C4u;
label_25b2c4:
    // 0x25b2c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b2c8:
    // 0x25b2c8: 0xc0899aa  jal         func_2266A8
label_25b2cc:
    if (ctx->pc == 0x25B2CCu) {
        ctx->pc = 0x25B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2C8u;
        // 0x25b2cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2D0u;
        goto label_25b2d0;
    }
    ctx->pc = 0x25B2C8u;
    SET_GPR_U32(ctx, 31, 0x25B2D0u);
    ctx->pc = 0x25B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2C8u;
    // 0x25b2cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25B2C8u, 0x25B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2D0u;
label_25b2d0:
    // 0x25b2d0: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_25b2d4:
    if (ctx->pc == 0x25B2D4u) {
        ctx->pc = 0x25B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2D0u;
        // 0x25b2d4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2D8u;
        goto label_25b2d8;
    }
    ctx->pc = 0x25B2D0u;
    {
        const bool branch_taken_0x25b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2D0u;
        // 0x25b2d4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2d0) {
            ctx->pc = 0x25B9D0u;
            goto label_25b9d0;
        }
    }
    ctx->pc = 0x25B2D8u;
label_25b2d8:
    // 0x25b2d8: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25b2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25b2dc:
    // 0x25b2dc: 0x8e5100d8  lw          $s1, 0xD8($s2)
    ctx->pc = 0x25b2dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b2e0:
    // 0x25b2e0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x25b2e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b2e4:
    // 0x25b2e4: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25b2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25b2e8:
    // 0x25b2e8: 0xc041532  jal         func_1054C8
label_25b2ec:
    if (ctx->pc == 0x25B2ECu) {
        ctx->pc = 0x25B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2E8u;
        // 0x25b2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2F0u;
        goto label_25b2f0;
    }
    ctx->pc = 0x25B2E8u;
    SET_GPR_U32(ctx, 31, 0x25B2F0u);
    ctx->pc = 0x25B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2E8u;
    // 0x25b2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25B2E8u, 0x25B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2F0u;
label_25b2f0:
    // 0x25b2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b2f4:
    // 0x25b2f4: 0xc041532  jal         func_1054C8
label_25b2f8:
    if (ctx->pc == 0x25B2F8u) {
        ctx->pc = 0x25B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2F4u;
        // 0x25b2f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B2FCu;
        goto label_25b2fc;
    }
    ctx->pc = 0x25B2F4u;
    SET_GPR_U32(ctx, 31, 0x25B2FCu);
    ctx->pc = 0x25B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2F4u;
    // 0x25b2f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25B2F4u, 0x25B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2FCu;
label_25b2fc:
    // 0x25b2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b300:
    // 0x25b300: 0xc05d484  jal         func_175210
label_25b304:
    if (ctx->pc == 0x25B304u) {
        ctx->pc = 0x25B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B300u;
        // 0x25b304: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B308u;
        goto label_25b308;
    }
    ctx->pc = 0x25B300u;
    SET_GPR_U32(ctx, 31, 0x25B308u);
    ctx->pc = 0x25B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B300u;
    // 0x25b304: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B300u, 0x25B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B308u;
label_25b308:
    // 0x25b308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b30c:
    // 0x25b30c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b310:
    // 0x25b310: 0xc089998  jal         func_226660
label_25b314:
    if (ctx->pc == 0x25B314u) {
        ctx->pc = 0x25B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B310u;
        // 0x25b314: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B318u;
        goto label_25b318;
    }
    ctx->pc = 0x25B310u;
    SET_GPR_U32(ctx, 31, 0x25B318u);
    ctx->pc = 0x25B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B310u;
    // 0x25b314: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25B310u, 0x25B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B318u;
label_25b318:
    // 0x25b318: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25b31c:
    if (ctx->pc == 0x25B31Cu) {
        ctx->pc = 0x25B320u;
        goto label_25b320;
    }
    ctx->pc = 0x25B318u;
    {
        const bool branch_taken_0x25b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b318) {
            ctx->pc = 0x25B334u;
            goto label_25b334;
        }
    }
    ctx->pc = 0x25B320u;
label_25b320:
    // 0x25b320: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25b324:
    // 0x25b324: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25b324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25b328:
    // 0x25b328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b32c:
    // 0x25b32c: 0x0  nop
    ctx->pc = 0x25b32cu;
    // NOP
label_25b330:
    // 0x25b330: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x25b330u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25b334:
    // 0x25b334: 0xc089f66  jal         func_227D98
label_25b338:
    if (ctx->pc == 0x25B338u) {
        ctx->pc = 0x25B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B334u;
        // 0x25b338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B33Cu;
        goto label_25b33c;
    }
    ctx->pc = 0x25B334u;
    SET_GPR_U32(ctx, 31, 0x25B33Cu);
    ctx->pc = 0x25B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B334u;
    // 0x25b338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x25B334u, 0x25B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B33Cu;
label_25b33c:
    // 0x25b33c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_25b340:
    if (ctx->pc == 0x25B340u) {
        ctx->pc = 0x25B344u;
        goto label_25b344;
    }
    ctx->pc = 0x25B33Cu;
    {
        const bool branch_taken_0x25b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b33c) {
            ctx->pc = 0x25B410u;
            goto label_25b410;
        }
    }
    ctx->pc = 0x25B344u;
label_25b344:
    // 0x25b344: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_25b348:
    if (ctx->pc == 0x25B348u) {
        ctx->pc = 0x25B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B344u;
        // 0x25b348: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B34Cu;
        goto label_25b34c;
    }
    ctx->pc = 0x25B344u;
    {
        const bool branch_taken_0x25b344 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B344u;
        // 0x25b348: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b344) {
            ctx->pc = 0x25B364u;
            goto label_25b364;
        }
    }
    ctx->pc = 0x25B34Cu;
label_25b34c:
    // 0x25b34c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b350:
    // 0x25b350: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25b350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b354:
    // 0x25b354: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25b354u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25b358:
    // 0x25b358: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b35c:
    // 0x25b35c: 0xc041b20  jal         func_106C80
label_25b360:
    if (ctx->pc == 0x25B360u) {
        ctx->pc = 0x25B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B35Cu;
        // 0x25b360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B364u;
        goto label_25b364;
    }
    ctx->pc = 0x25B35Cu;
    SET_GPR_U32(ctx, 31, 0x25B364u);
    ctx->pc = 0x25B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B35Cu;
    // 0x25b360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25B35Cu, 0x25B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B364u;
label_25b364:
    // 0x25b364: 0xc05d484  jal         func_175210
label_25b368:
    if (ctx->pc == 0x25B368u) {
        ctx->pc = 0x25B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B364u;
        // 0x25b368: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B36Cu;
        goto label_25b36c;
    }
    ctx->pc = 0x25B364u;
    SET_GPR_U32(ctx, 31, 0x25B36Cu);
    ctx->pc = 0x25B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B364u;
    // 0x25b368: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B364u, 0x25B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B36Cu;
label_25b36c:
    // 0x25b36c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b370:
    // 0x25b370: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25b370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25b374:
    // 0x25b374: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25b374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25b378:
    // 0x25b378: 0xa0f809  jalr        $a1
label_25b37c:
    if (ctx->pc == 0x25B37Cu) {
        ctx->pc = 0x25B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B378u;
        // 0x25b37c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B380u;
        goto label_25b380;
    }
    ctx->pc = 0x25B378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25B380u);
        ctx->pc = 0x25B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B378u;
        // 0x25b37c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B378u, 0x25B380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B380u;
label_25b380:
    // 0x25b380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b384:
    // 0x25b384: 0xc087016  jal         func_21C058
label_25b388:
    if (ctx->pc == 0x25B388u) {
        ctx->pc = 0x25B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B384u;
        // 0x25b388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B38Cu;
        goto label_25b38c;
    }
    ctx->pc = 0x25B384u;
    SET_GPR_U32(ctx, 31, 0x25B38Cu);
    ctx->pc = 0x25B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B384u;
    // 0x25b388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25B384u, 0x25B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B38Cu;
label_25b38c:
    // 0x25b38c: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25b390:
    if (ctx->pc == 0x25B390u) {
        ctx->pc = 0x25B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B38Cu;
        // 0x25b390: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B394u;
        goto label_25b394;
    }
    ctx->pc = 0x25B38Cu;
    {
        const bool branch_taken_0x25b38c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B38Cu;
        // 0x25b390: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b38c) {
            ctx->pc = 0x25B3CCu;
            goto label_25b3cc;
        }
    }
    ctx->pc = 0x25B394u;
label_25b394:
    // 0x25b394: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x25b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b398:
    // 0x25b398: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x25b398u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b39c:
    // 0x25b39c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b3a0:
    // 0x25b3a0: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x25b3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_25b3a4:
    // 0x25b3a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25b3a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b3a8:
    // 0x25b3a8: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b3ac:
    // 0x25b3ac: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25b3b0:
    // 0x25b3b0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x25b3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25b3b4:
    // 0x25b3b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25b3b8:
    // 0x25b3b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25b3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b3bc:
    // 0x25b3bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25b3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_25b3c0:
    // 0x25b3c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25b3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25b3c4:
    // 0x25b3c4: 0xc041bd4  jal         func_106F50
label_25b3c8:
    if (ctx->pc == 0x25B3C8u) {
        ctx->pc = 0x25B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3C4u;
        // 0x25b3c8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B3CCu;
        goto label_25b3cc;
    }
    ctx->pc = 0x25B3C4u;
    SET_GPR_U32(ctx, 31, 0x25B3CCu);
    ctx->pc = 0x25B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3C4u;
    // 0x25b3c8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x25B3C4u, 0x25B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3CCu;
label_25b3cc:
    // 0x25b3cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b3d0:
    // 0x25b3d0: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x25b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_25b3d4:
    // 0x25b3d4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25b3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25b3d8:
    // 0x25b3d8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25b3dc:
    // 0x25b3dc: 0x60f809  jalr        $v1
label_25b3e0:
    if (ctx->pc == 0x25B3E0u) {
        ctx->pc = 0x25B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3DCu;
        // 0x25b3e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B3E4u;
        goto label_25b3e4;
    }
    ctx->pc = 0x25B3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B3E4u);
        ctx->pc = 0x25B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3DCu;
        // 0x25b3e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B3DCu, 0x25B3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B3E4u;
label_25b3e4:
    // 0x25b3e4: 0x8e4600d4  lw          $a2, 0xD4($s2)
    ctx->pc = 0x25b3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b3e8:
    // 0x25b3e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b3ec:
    // 0x25b3ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25b3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b3f0:
    // 0x25b3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b3f4:
    // 0x25b3f4: 0xc05d53a  jal         func_1754E8
label_25b3f8:
    if (ctx->pc == 0x25B3F8u) {
        ctx->pc = 0x25B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3F4u;
        // 0x25b3f8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B3FCu;
        goto label_25b3fc;
    }
    ctx->pc = 0x25B3F4u;
    SET_GPR_U32(ctx, 31, 0x25B3FCu);
    ctx->pc = 0x25B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3F4u;
    // 0x25b3f8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25B3F4u, 0x25B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3FCu;
label_25b3fc:
    // 0x25b3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b400:
    // 0x25b400: 0xc05d4f6  jal         func_1753D8
label_25b404:
    if (ctx->pc == 0x25B404u) {
        ctx->pc = 0x25B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B400u;
        // 0x25b404: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B408u;
        goto label_25b408;
    }
    ctx->pc = 0x25B400u;
    SET_GPR_U32(ctx, 31, 0x25B408u);
    ctx->pc = 0x25B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B400u;
    // 0x25b404: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25B400u, 0x25B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B408u;
label_25b408:
    // 0x25b408: 0x1000016e  b           . + 4 + (0x16E << 2)
label_25b40c:
    if (ctx->pc == 0x25B40Cu) {
        ctx->pc = 0x25B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B408u;
        // 0x25b40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B410u;
        goto label_25b410;
    }
    ctx->pc = 0x25B408u;
    {
        const bool branch_taken_0x25b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B408u;
        // 0x25b40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b408) {
            ctx->pc = 0x25B9C4u;
            goto label_25b9c4;
        }
    }
    ctx->pc = 0x25B410u;
label_25b410:
    // 0x25b410: 0xc08a062  jal         func_228188
label_25b414:
    if (ctx->pc == 0x25B414u) {
        ctx->pc = 0x25B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B410u;
        // 0x25b414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B418u;
        goto label_25b418;
    }
    ctx->pc = 0x25B410u;
    SET_GPR_U32(ctx, 31, 0x25B418u);
    ctx->pc = 0x25B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B410u;
    // 0x25b414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228188u, 0x25B410u, 0x25B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B418u;
label_25b418:
    // 0x25b418: 0x50400074  beql        $v0, $zero, . + 4 + (0x74 << 2)
label_25b41c:
    if (ctx->pc == 0x25B41Cu) {
        ctx->pc = 0x25B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B418u;
        // 0x25b41c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B420u;
        goto label_25b420;
    }
    ctx->pc = 0x25B418u;
    {
        const bool branch_taken_0x25b418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b418) {
            ctx->pc = 0x25B41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B418u;
            // 0x25b41c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B420u;
label_25b420:
    // 0x25b420: 0xc089000  jal         func_224000
label_25b424:
    if (ctx->pc == 0x25B424u) {
        ctx->pc = 0x25B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B420u;
        // 0x25b424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B428u;
        goto label_25b428;
    }
    ctx->pc = 0x25B420u;
    SET_GPR_U32(ctx, 31, 0x25B428u);
    ctx->pc = 0x25B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B420u;
    // 0x25b424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x25B420u, 0x25B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B428u;
label_25b428:
    // 0x25b428: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
label_25b42c:
    if (ctx->pc == 0x25B42Cu) {
        ctx->pc = 0x25B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B428u;
        // 0x25b42c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B430u;
        goto label_25b430;
    }
    ctx->pc = 0x25B428u;
    {
        const bool branch_taken_0x25b428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b428) {
            ctx->pc = 0x25B42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B428u;
            // 0x25b42c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B430u;
label_25b430:
    // 0x25b430: 0xc0899ae  jal         func_2266B8
label_25b434:
    if (ctx->pc == 0x25B434u) {
        ctx->pc = 0x25B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B430u;
        // 0x25b434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B438u;
        goto label_25b438;
    }
    ctx->pc = 0x25B430u;
    SET_GPR_U32(ctx, 31, 0x25B438u);
    ctx->pc = 0x25B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B430u;
    // 0x25b434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25B430u, 0x25B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B438u;
label_25b438:
    // 0x25b438: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_25b43c:
    if (ctx->pc == 0x25B43Cu) {
        ctx->pc = 0x25B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B438u;
        // 0x25b43c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B440u;
        goto label_25b440;
    }
    ctx->pc = 0x25B438u;
    {
        const bool branch_taken_0x25b438 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B438u;
        // 0x25b43c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b438) {
            ctx->pc = 0x25B458u;
            goto label_25b458;
        }
    }
    ctx->pc = 0x25B440u;
label_25b440:
    // 0x25b440: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b444:
    // 0x25b444: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b448:
    // 0x25b448: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b44c:
    // 0x25b44c: 0x24060279  addiu       $a2, $zero, 0x279
    ctx->pc = 0x25b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
label_25b450:
    // 0x25b450: 0xc042c24  jal         func_10B090
label_25b454:
    if (ctx->pc == 0x25B454u) {
        ctx->pc = 0x25B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B450u;
        // 0x25b454: 0x2407027c  addiu       $a3, $zero, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B458u;
        goto label_25b458;
    }
    ctx->pc = 0x25B450u;
    SET_GPR_U32(ctx, 31, 0x25B458u);
    ctx->pc = 0x25B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B450u;
    // 0x25b454: 0x2407027c  addiu       $a3, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B090u, 0x25B450u, 0x25B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B458u;
label_25b458:
    // 0x25b458: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b45c:
    // 0x25b45c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x25b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_25b460:
    // 0x25b460: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25b460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25b464:
    // 0x25b464: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25b468:
    // 0x25b468: 0x60f809  jalr        $v1
label_25b46c:
    if (ctx->pc == 0x25B46Cu) {
        ctx->pc = 0x25B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B468u;
        // 0x25b46c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B470u;
        goto label_25b470;
    }
    ctx->pc = 0x25B468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B470u);
        ctx->pc = 0x25B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B468u;
        // 0x25b46c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B468u, 0x25B470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B470u;
label_25b470:
    // 0x25b470: 0x8e4600d4  lw          $a2, 0xD4($s2)
    ctx->pc = 0x25b470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b474:
    // 0x25b474: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b478:
    // 0x25b478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b47c:
    // 0x25b47c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25b47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b480:
    // 0x25b480: 0xc05d53a  jal         func_1754E8
label_25b484:
    if (ctx->pc == 0x25B484u) {
        ctx->pc = 0x25B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B480u;
        // 0x25b484: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B488u;
        goto label_25b488;
    }
    ctx->pc = 0x25B480u;
    SET_GPR_U32(ctx, 31, 0x25B488u);
    ctx->pc = 0x25B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B480u;
    // 0x25b484: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25B480u, 0x25B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B488u;
label_25b488:
    // 0x25b488: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_25b48c:
    if (ctx->pc == 0x25B48Cu) {
        ctx->pc = 0x25B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B488u;
        // 0x25b48c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B490u;
        goto label_25b490;
    }
    ctx->pc = 0x25B488u;
    {
        const bool branch_taken_0x25b488 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B488u;
        // 0x25b48c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b488) {
            ctx->pc = 0x25B4B0u;
            goto label_25b4b0;
        }
    }
    ctx->pc = 0x25B490u;
label_25b490:
    // 0x25b490: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b494:
    // 0x25b494: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25b494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b498:
    // 0x25b498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b49c:
    // 0x25b49c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25b49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25b4a0:
    // 0x25b4a0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25b4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25b4a4:
    // 0x25b4a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25b4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b4a8:
    // 0x25b4a8: 0xc041b20  jal         func_106C80
label_25b4ac:
    if (ctx->pc == 0x25B4ACu) {
        ctx->pc = 0x25B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4A8u;
        // 0x25b4ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4B0u;
        goto label_25b4b0;
    }
    ctx->pc = 0x25B4A8u;
    SET_GPR_U32(ctx, 31, 0x25B4B0u);
    ctx->pc = 0x25B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4A8u;
    // 0x25b4ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25B4A8u, 0x25B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4B0u;
label_25b4b0:
    // 0x25b4b0: 0xc05d484  jal         func_175210
label_25b4b4:
    if (ctx->pc == 0x25B4B4u) {
        ctx->pc = 0x25B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4B0u;
        // 0x25b4b4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4B8u;
        goto label_25b4b8;
    }
    ctx->pc = 0x25B4B0u;
    SET_GPR_U32(ctx, 31, 0x25B4B8u);
    ctx->pc = 0x25B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4B0u;
    // 0x25b4b4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B4B0u, 0x25B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4B8u;
label_25b4b8:
    // 0x25b4b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b4bc:
    // 0x25b4bc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25b4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25b4c0:
    // 0x25b4c0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25b4c4:
    // 0x25b4c4: 0xa0f809  jalr        $a1
label_25b4c8:
    if (ctx->pc == 0x25B4C8u) {
        ctx->pc = 0x25B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4C4u;
        // 0x25b4c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4CCu;
        goto label_25b4cc;
    }
    ctx->pc = 0x25B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25B4CCu);
        ctx->pc = 0x25B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4C4u;
        // 0x25b4c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B4C4u, 0x25B4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B4CCu;
label_25b4cc:
    // 0x25b4cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b4d0:
    // 0x25b4d0: 0xc087016  jal         func_21C058
label_25b4d4:
    if (ctx->pc == 0x25B4D4u) {
        ctx->pc = 0x25B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4D0u;
        // 0x25b4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4D8u;
        goto label_25b4d8;
    }
    ctx->pc = 0x25B4D0u;
    SET_GPR_U32(ctx, 31, 0x25B4D8u);
    ctx->pc = 0x25B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4D0u;
    // 0x25b4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25B4D0u, 0x25B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4D8u;
label_25b4d8:
    // 0x25b4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b4dc:
    // 0x25b4dc: 0xc05d4f6  jal         func_1753D8
label_25b4e0:
    if (ctx->pc == 0x25B4E0u) {
        ctx->pc = 0x25B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4DCu;
        // 0x25b4e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4E4u;
        goto label_25b4e4;
    }
    ctx->pc = 0x25B4DCu;
    SET_GPR_U32(ctx, 31, 0x25B4E4u);
    ctx->pc = 0x25B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4DCu;
    // 0x25b4e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25B4DCu, 0x25B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4E4u;
label_25b4e4:
    // 0x25b4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b4e8:
    // 0x25b4e8: 0xc0899aa  jal         func_2266A8
label_25b4ec:
    if (ctx->pc == 0x25B4ECu) {
        ctx->pc = 0x25B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4E8u;
        // 0x25b4ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B4F0u;
        goto label_25b4f0;
    }
    ctx->pc = 0x25B4E8u;
    SET_GPR_U32(ctx, 31, 0x25B4F0u);
    ctx->pc = 0x25B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4E8u;
    // 0x25b4ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25B4E8u, 0x25B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4F0u;
label_25b4f0:
    // 0x25b4f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x25b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_25b4f4:
    // 0x25b4f4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25b4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_25b4f8:
    // 0x25b4f8: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_25b4fc:
    if (ctx->pc == 0x25B4FCu) {
        ctx->pc = 0x25B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4F8u;
        // 0x25b4fc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B500u;
        goto label_25b500;
    }
    ctx->pc = 0x25B4F8u;
    {
        const bool branch_taken_0x25b4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b4f8) {
            ctx->pc = 0x25B4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B4F8u;
            // 0x25b4fc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B59Cu;
            goto label_25b59c;
        }
    }
    ctx->pc = 0x25B500u;
label_25b500:
    // 0x25b500: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b504:
    // 0x25b504: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25b504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25b508:
    // 0x25b508: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25b50c:
    // 0x25b50c: 0x60f809  jalr        $v1
label_25b510:
    if (ctx->pc == 0x25B510u) {
        ctx->pc = 0x25B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B50Cu;
        // 0x25b510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B514u;
        goto label_25b514;
    }
    ctx->pc = 0x25B50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B514u);
        ctx->pc = 0x25B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B50Cu;
        // 0x25b510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B50Cu, 0x25B514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B514u;
label_25b514:
    // 0x25b514: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b518:
    // 0x25b518: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b518u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25b51c:
    // 0x25b51c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25b51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25b520:
    // 0x25b520: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25b524:
    // 0x25b524: 0x60f809  jalr        $v1
label_25b528:
    if (ctx->pc == 0x25B528u) {
        ctx->pc = 0x25B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B524u;
        // 0x25b528: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B52Cu;
        goto label_25b52c;
    }
    ctx->pc = 0x25B524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B52Cu);
        ctx->pc = 0x25B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B524u;
        // 0x25b528: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B524u, 0x25B52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B52Cu;
label_25b52c:
    // 0x25b52c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b530:
    // 0x25b530: 0x0  nop
    ctx->pc = 0x25b530u;
    // NOP
label_25b534:
    // 0x25b534: 0x0  nop
    ctx->pc = 0x25b534u;
    // NOP
label_25b538:
    // 0x25b538: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x25b538u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_25b53c:
    // 0x25b53c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25b53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25b540:
    // 0x25b540: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25b544:
    // 0x25b544: 0x60f809  jalr        $v1
label_25b548:
    if (ctx->pc == 0x25B548u) {
        ctx->pc = 0x25B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B544u;
        // 0x25b548: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B54Cu;
        goto label_25b54c;
    }
    ctx->pc = 0x25B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B54Cu);
        ctx->pc = 0x25B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B544u;
        // 0x25b548: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B544u, 0x25B54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B54Cu;
label_25b54c:
    // 0x25b54c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b550:
    // 0x25b550: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25b550u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_25b554:
    // 0x25b554: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25b558:
    // 0x25b558: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25b55c:
    // 0x25b55c: 0x60f809  jalr        $v1
label_25b560:
    if (ctx->pc == 0x25B560u) {
        ctx->pc = 0x25B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B55Cu;
        // 0x25b560: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B564u;
        goto label_25b564;
    }
    ctx->pc = 0x25B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B564u);
        ctx->pc = 0x25B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B55Cu;
        // 0x25b560: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B55Cu, 0x25B564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B564u;
label_25b564:
    // 0x25b564: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x25b564u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25b568:
    // 0x25b568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b56c:
    // 0x25b56c: 0x0  nop
    ctx->pc = 0x25b56cu;
    // NOP
label_25b570:
    // 0x25b570: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25b570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b574:
    // 0x25b574: 0x0  nop
    ctx->pc = 0x25b574u;
    // NOP
label_25b578:
    // 0x25b578: 0x45000115  bc1f        . + 4 + (0x115 << 2)
label_25b57c:
    if (ctx->pc == 0x25B57Cu) {
        ctx->pc = 0x25B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B578u;
        // 0x25b57c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B580u;
        goto label_25b580;
    }
    ctx->pc = 0x25B578u;
    {
        const bool branch_taken_0x25b578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B578u;
        // 0x25b57c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b578) {
            ctx->pc = 0x25B9D0u;
            goto label_25b9d0;
        }
    }
    ctx->pc = 0x25B580u;
label_25b580:
    // 0x25b580: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b584:
    // 0x25b584: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x25b584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_25b588:
    // 0x25b588: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_25b58c:
    // 0x25b58c: 0x60f809  jalr        $v1
label_25b590:
    if (ctx->pc == 0x25B590u) {
        ctx->pc = 0x25B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B58Cu;
        // 0x25b590: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B594u;
        goto label_25b594;
    }
    ctx->pc = 0x25B58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B594u);
        ctx->pc = 0x25B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B58Cu;
        // 0x25b590: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B58Cu, 0x25B594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B594u;
label_25b594:
    // 0x25b594: 0x1000010e  b           . + 4 + (0x10E << 2)
label_25b598:
    if (ctx->pc == 0x25B598u) {
        ctx->pc = 0x25B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B594u;
        // 0x25b598: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B59Cu;
        goto label_25b59c;
    }
    ctx->pc = 0x25B594u;
    {
        const bool branch_taken_0x25b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B594u;
        // 0x25b598: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b594) {
            ctx->pc = 0x25B9D0u;
            goto label_25b9d0;
        }
    }
    ctx->pc = 0x25B59Cu;
label_25b59c:
    // 0x25b59c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_25b5a0:
    // 0x25b5a0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_25b5a4:
    if (ctx->pc == 0x25B5A4u) {
        ctx->pc = 0x25B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5A0u;
        // 0x25b5a4: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5A8u;
        goto label_25b5a8;
    }
    ctx->pc = 0x25B5A0u;
    {
        const bool branch_taken_0x25b5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5A0u;
        // 0x25b5a4: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5a0) {
            ctx->pc = 0x25B5D8u;
            goto label_25b5d8;
        }
    }
    ctx->pc = 0x25B5A8u;
label_25b5a8:
    // 0x25b5a8: 0x16a2000b  bne         $s5, $v0, . + 4 + (0xB << 2)
label_25b5ac:
    if (ctx->pc == 0x25B5ACu) {
        ctx->pc = 0x25B5B0u;
        goto label_25b5b0;
    }
    ctx->pc = 0x25B5A8u;
    {
        const bool branch_taken_0x25b5a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b5a8) {
            ctx->pc = 0x25B5D8u;
            goto label_25b5d8;
        }
    }
    ctx->pc = 0x25B5B0u;
label_25b5b0:
    // 0x25b5b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b5b4:
    // 0x25b5b4: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x25b5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_25b5b8:
    // 0x25b5b8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x25b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_25b5bc:
    // 0x25b5bc: 0x60f809  jalr        $v1
label_25b5c0:
    if (ctx->pc == 0x25B5C0u) {
        ctx->pc = 0x25B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5BCu;
        // 0x25b5c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5C4u;
        goto label_25b5c4;
    }
    ctx->pc = 0x25B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B5C4u);
        ctx->pc = 0x25B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5BCu;
        // 0x25b5c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B5BCu, 0x25B5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B5C4u;
label_25b5c4:
    // 0x25b5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b5c8:
    // 0x25b5c8: 0xc097ac0  jal         func_25EB00
label_25b5cc:
    if (ctx->pc == 0x25B5CCu) {
        ctx->pc = 0x25B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5C8u;
        // 0x25b5cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5D0u;
        goto label_25b5d0;
    }
    ctx->pc = 0x25B5C8u;
    SET_GPR_U32(ctx, 31, 0x25B5D0u);
    ctx->pc = 0x25B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B5C8u;
    // 0x25b5cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB00u, 0x25B5C8u, 0x25B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5D0u;
label_25b5d0:
    // 0x25b5d0: 0x100000ff  b           . + 4 + (0xFF << 2)
label_25b5d4:
    if (ctx->pc == 0x25B5D4u) {
        ctx->pc = 0x25B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5D0u;
        // 0x25b5d4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5D8u;
        goto label_25b5d8;
    }
    ctx->pc = 0x25B5D0u;
    {
        const bool branch_taken_0x25b5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5D0u;
        // 0x25b5d4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5d0) {
            ctx->pc = 0x25B9D0u;
            goto label_25b9d0;
        }
    }
    ctx->pc = 0x25B5D8u;
label_25b5d8:
    // 0x25b5d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b5dc:
    // 0x25b5dc: 0xc097ac0  jal         func_25EB00
label_25b5e0:
    if (ctx->pc == 0x25B5E0u) {
        ctx->pc = 0x25B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5DCu;
        // 0x25b5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5E4u;
        goto label_25b5e4;
    }
    ctx->pc = 0x25B5DCu;
    SET_GPR_U32(ctx, 31, 0x25B5E4u);
    ctx->pc = 0x25B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B5DCu;
    // 0x25b5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB00u, 0x25B5DCu, 0x25B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5E4u;
label_25b5e4:
    // 0x25b5e4: 0x100000fa  b           . + 4 + (0xFA << 2)
label_25b5e8:
    if (ctx->pc == 0x25B5E8u) {
        ctx->pc = 0x25B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5E4u;
        // 0x25b5e8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5ECu;
        goto label_25b5ec;
    }
    ctx->pc = 0x25B5E4u;
    {
        const bool branch_taken_0x25b5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5E4u;
        // 0x25b5e8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5e4) {
            ctx->pc = 0x25B9D0u;
            goto label_25b9d0;
        }
    }
    ctx->pc = 0x25B5ECu;
label_25b5ec:
    // 0x25b5ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_25b5f0:
    // 0x25b5f0: 0x5462003d  bnel        $v1, $v0, . + 4 + (0x3D << 2)
label_25b5f4:
    if (ctx->pc == 0x25B5F4u) {
        ctx->pc = 0x25B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5F0u;
        // 0x25b5f4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B5F8u;
        goto label_25b5f8;
    }
    ctx->pc = 0x25B5F0u;
    {
        const bool branch_taken_0x25b5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b5f0) {
            ctx->pc = 0x25B5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B5F0u;
            // 0x25b5f4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B6E8u;
            goto label_25b6e8;
        }
    }
    ctx->pc = 0x25B5F8u;
label_25b5f8:
    // 0x25b5f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b5fc:
    // 0x25b5fc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25b5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25b600:
    // 0x25b600: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25b600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25b604:
    // 0x25b604: 0x60f809  jalr        $v1
label_25b608:
    if (ctx->pc == 0x25B608u) {
        ctx->pc = 0x25B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B604u;
        // 0x25b608: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B60Cu;
        goto label_25b60c;
    }
    ctx->pc = 0x25B604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B60Cu);
        ctx->pc = 0x25B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B604u;
        // 0x25b608: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B604u, 0x25B60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B60Cu;
label_25b60c:
    // 0x25b60c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b610:
    // 0x25b610: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b610u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25b614:
    // 0x25b614: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25b614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25b618:
    // 0x25b618: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25b618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25b61c:
    // 0x25b61c: 0x60f809  jalr        $v1
label_25b620:
    if (ctx->pc == 0x25B620u) {
        ctx->pc = 0x25B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B61Cu;
        // 0x25b620: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B624u;
        goto label_25b624;
    }
    ctx->pc = 0x25B61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B624u);
        ctx->pc = 0x25B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B61Cu;
        // 0x25b620: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B61Cu, 0x25B624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B624u;
label_25b624:
    // 0x25b624: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x25b624u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_25b628:
    // 0x25b628: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_25b62c:
    if (ctx->pc == 0x25B62Cu) {
        ctx->pc = 0x25B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B628u;
        // 0x25b62c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B630u;
        goto label_25b630;
    }
    ctx->pc = 0x25B628u;
    {
        const bool branch_taken_0x25b628 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B628u;
        // 0x25b62c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b628) {
            ctx->pc = 0x25B650u;
            goto label_25b650;
        }
    }
    ctx->pc = 0x25B630u;
label_25b630:
    // 0x25b630: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b634:
    // 0x25b634: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25b634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b638:
    // 0x25b638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b63c:
    // 0x25b63c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25b640:
    // 0x25b640: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25b640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25b644:
    // 0x25b644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25b644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b648:
    // 0x25b648: 0xc041b20  jal         func_106C80
label_25b64c:
    if (ctx->pc == 0x25B64Cu) {
        ctx->pc = 0x25B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B648u;
        // 0x25b64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B650u;
        goto label_25b650;
    }
    ctx->pc = 0x25B648u;
    SET_GPR_U32(ctx, 31, 0x25B650u);
    ctx->pc = 0x25B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B648u;
    // 0x25b64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25B648u, 0x25B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B650u;
label_25b650:
    // 0x25b650: 0xc05d484  jal         func_175210
label_25b654:
    if (ctx->pc == 0x25B654u) {
        ctx->pc = 0x25B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B650u;
        // 0x25b654: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B658u;
        goto label_25b658;
    }
    ctx->pc = 0x25B650u;
    SET_GPR_U32(ctx, 31, 0x25B658u);
    ctx->pc = 0x25B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B650u;
    // 0x25b654: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B650u, 0x25B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B658u;
label_25b658:
    // 0x25b658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b65c:
    // 0x25b65c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25b65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25b660:
    // 0x25b660: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25b660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25b664:
    // 0x25b664: 0xa0f809  jalr        $a1
label_25b668:
    if (ctx->pc == 0x25B668u) {
        ctx->pc = 0x25B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B664u;
        // 0x25b668: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B66Cu;
        goto label_25b66c;
    }
    ctx->pc = 0x25B664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25B66Cu);
        ctx->pc = 0x25B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B664u;
        // 0x25b668: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B664u, 0x25B66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B66Cu;
label_25b66c:
    // 0x25b66c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b670:
    // 0x25b670: 0xc087016  jal         func_21C058
label_25b674:
    if (ctx->pc == 0x25B674u) {
        ctx->pc = 0x25B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B670u;
        // 0x25b674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B678u;
        goto label_25b678;
    }
    ctx->pc = 0x25B670u;
    SET_GPR_U32(ctx, 31, 0x25B678u);
    ctx->pc = 0x25B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B670u;
    // 0x25b674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25B670u, 0x25B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B678u;
label_25b678:
    // 0x25b678: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25b67c:
    if (ctx->pc == 0x25B67Cu) {
        ctx->pc = 0x25B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B678u;
        // 0x25b67c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B680u;
        goto label_25b680;
    }
    ctx->pc = 0x25B678u;
    {
        const bool branch_taken_0x25b678 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B678u;
        // 0x25b67c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b678) {
            ctx->pc = 0x25B6B8u;
            goto label_25b6b8;
        }
    }
    ctx->pc = 0x25B680u;
label_25b680:
    // 0x25b680: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b684:
    // 0x25b684: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25b684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25b688:
    // 0x25b688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b68c:
    // 0x25b68c: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x25b68cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25b690:
    // 0x25b690: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25b694:
    // 0x25b694: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b698:
    // 0x25b698: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25b69c:
    // 0x25b69c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25b69cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25b6a0:
    // 0x25b6a0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x25b6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25b6a4:
    // 0x25b6a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b6a8:
    // 0x25b6a8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25b6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25b6ac:
    // 0x25b6ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25b6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25b6b0:
    // 0x25b6b0: 0xc0428c4  jal         func_10A310
label_25b6b4:
    if (ctx->pc == 0x25B6B4u) {
        ctx->pc = 0x25B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6B0u;
        // 0x25b6b4: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6B8u;
        goto label_25b6b8;
    }
    ctx->pc = 0x25B6B0u;
    SET_GPR_U32(ctx, 31, 0x25B6B8u);
    ctx->pc = 0x25B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6B0u;
    // 0x25b6b4: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x25B6B0u, 0x25B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6B8u;
label_25b6b8:
    // 0x25b6b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b6bc:
    // 0x25b6bc: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x25b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_25b6c0:
    // 0x25b6c0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25b6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25b6c4:
    // 0x25b6c4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25b6c8:
    // 0x25b6c8: 0x60f809  jalr        $v1
label_25b6cc:
    if (ctx->pc == 0x25B6CCu) {
        ctx->pc = 0x25B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6C8u;
        // 0x25b6cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6D0u;
        goto label_25b6d0;
    }
    ctx->pc = 0x25B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B6D0u);
        ctx->pc = 0x25B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6C8u;
        // 0x25b6cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B6C8u, 0x25B6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B6D0u;
label_25b6d0:
    // 0x25b6d0: 0x8e4600d4  lw          $a2, 0xD4($s2)
    ctx->pc = 0x25b6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b6d4:
    // 0x25b6d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b6d8:
    // 0x25b6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b6dc:
    // 0x25b6dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25b6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b6e0:
    // 0x25b6e0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_25b6e4:
    if (ctx->pc == 0x25B6E4u) {
        ctx->pc = 0x25B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6E0u;
        // 0x25b6e4: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6E8u;
        goto label_25b6e8;
    }
    ctx->pc = 0x25B6E0u;
    {
        const bool branch_taken_0x25b6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6E0u;
        // 0x25b6e4: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6e0) {
            ctx->pc = 0x25B7A0u;
            goto label_25b7a0;
        }
    }
    ctx->pc = 0x25B6E8u;
label_25b6e8:
    // 0x25b6e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_25b6ec:
    // 0x25b6ec: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
label_25b6f0:
    if (ctx->pc == 0x25B6F0u) {
        ctx->pc = 0x25B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6ECu;
        // 0x25b6f0: 0x26a4d9f0  addiu       $a0, $s5, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6F4u;
        goto label_25b6f4;
    }
    ctx->pc = 0x25B6ECu;
    {
        const bool branch_taken_0x25b6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b6ec) {
            ctx->pc = 0x25B6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B6ECu;
            // 0x25b6f0: 0x26a4d9f0  addiu       $a0, $s5, -0x2610 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B818u;
            goto label_25b818;
        }
    }
    ctx->pc = 0x25B6F4u;
label_25b6f4:
    // 0x25b6f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b6f8:
    // 0x25b6f8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25b6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25b6fc:
    // 0x25b6fc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25b700:
    // 0x25b700: 0x60f809  jalr        $v1
label_25b704:
    if (ctx->pc == 0x25B704u) {
        ctx->pc = 0x25B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B700u;
        // 0x25b704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B708u;
        goto label_25b708;
    }
    ctx->pc = 0x25B700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B708u);
        ctx->pc = 0x25B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B700u;
        // 0x25b704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B700u, 0x25B708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B708u;
label_25b708:
    // 0x25b708: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b70c:
    // 0x25b70c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b70cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25b710:
    // 0x25b710: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25b710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25b714:
    // 0x25b714: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25b718:
    // 0x25b718: 0x60f809  jalr        $v1
label_25b71c:
    if (ctx->pc == 0x25B71Cu) {
        ctx->pc = 0x25B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B718u;
        // 0x25b71c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B720u;
        goto label_25b720;
    }
    ctx->pc = 0x25B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B720u);
        ctx->pc = 0x25B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B718u;
        // 0x25b71c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B718u, 0x25B720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B720u;
label_25b720:
    // 0x25b720: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x25b720u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_25b724:
    // 0x25b724: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_25b728:
    if (ctx->pc == 0x25B728u) {
        ctx->pc = 0x25B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B724u;
        // 0x25b728: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B72Cu;
        goto label_25b72c;
    }
    ctx->pc = 0x25B724u;
    {
        const bool branch_taken_0x25b724 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B724u;
        // 0x25b728: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b724) {
            ctx->pc = 0x25B74Cu;
            goto label_25b74c;
        }
    }
    ctx->pc = 0x25B72Cu;
label_25b72c:
    // 0x25b72c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b730:
    // 0x25b730: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25b730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b734:
    // 0x25b734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b738:
    // 0x25b738: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25b738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25b73c:
    // 0x25b73c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25b73cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25b740:
    // 0x25b740: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25b740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b744:
    // 0x25b744: 0xc041b20  jal         func_106C80
label_25b748:
    if (ctx->pc == 0x25B748u) {
        ctx->pc = 0x25B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B744u;
        // 0x25b748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B74Cu;
        goto label_25b74c;
    }
    ctx->pc = 0x25B744u;
    SET_GPR_U32(ctx, 31, 0x25B74Cu);
    ctx->pc = 0x25B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B744u;
    // 0x25b748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25B744u, 0x25B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B74Cu;
label_25b74c:
    // 0x25b74c: 0xc05d484  jal         func_175210
label_25b750:
    if (ctx->pc == 0x25B750u) {
        ctx->pc = 0x25B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B74Cu;
        // 0x25b750: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B754u;
        goto label_25b754;
    }
    ctx->pc = 0x25B74Cu;
    SET_GPR_U32(ctx, 31, 0x25B754u);
    ctx->pc = 0x25B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B74Cu;
    // 0x25b750: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B74Cu, 0x25B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B754u;
label_25b754:
    // 0x25b754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b758:
    // 0x25b758: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25b758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25b75c:
    // 0x25b75c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25b75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25b760:
    // 0x25b760: 0xa0f809  jalr        $a1
label_25b764:
    if (ctx->pc == 0x25B764u) {
        ctx->pc = 0x25B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B760u;
        // 0x25b764: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B768u;
        goto label_25b768;
    }
    ctx->pc = 0x25B760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25B768u);
        ctx->pc = 0x25B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B760u;
        // 0x25b764: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B760u, 0x25B768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B768u;
label_25b768:
    // 0x25b768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b76c:
    // 0x25b76c: 0xc087016  jal         func_21C058
label_25b770:
    if (ctx->pc == 0x25B770u) {
        ctx->pc = 0x25B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B76Cu;
        // 0x25b770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B774u;
        goto label_25b774;
    }
    ctx->pc = 0x25B76Cu;
    SET_GPR_U32(ctx, 31, 0x25B774u);
    ctx->pc = 0x25B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B76Cu;
    // 0x25b770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25B76Cu, 0x25B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B774u;
label_25b774:
    // 0x25b774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25b778:
    // 0x25b778: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x25b778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_25b77c:
    // 0x25b77c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_25b780:
    // 0x25b780: 0x60f809  jalr        $v1
label_25b784:
    if (ctx->pc == 0x25B784u) {
        ctx->pc = 0x25B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B780u;
        // 0x25b784: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B788u;
        goto label_25b788;
    }
    ctx->pc = 0x25B780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B788u);
        ctx->pc = 0x25B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B780u;
        // 0x25b784: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B780u, 0x25B788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B788u;
label_25b788:
    // 0x25b788: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25b788u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25b78c:
    // 0x25b78c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b790:
    // 0x25b790: 0xc097fd4  jal         func_25FF50
label_25b794:
    if (ctx->pc == 0x25B794u) {
        ctx->pc = 0x25B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B790u;
        // 0x25b794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B798u;
        goto label_25b798;
    }
    ctx->pc = 0x25B790u;
    SET_GPR_U32(ctx, 31, 0x25B798u);
    ctx->pc = 0x25B794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B790u;
    // 0x25b794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF50u, 0x25B790u, 0x25B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B798u;
label_25b798:
    // 0x25b798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b79c:
    // 0x25b79c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25b79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b7a0:
    // 0x25b7a0: 0xc05d53a  jal         func_1754E8
label_25b7a4:
    if (ctx->pc == 0x25B7A4u) {
        ctx->pc = 0x25B7A8u;
        goto label_25b7a8;
    }
    ctx->pc = 0x25B7A0u;
    SET_GPR_U32(ctx, 31, 0x25B7A8u);
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25B7A0u, 0x25B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B7A8u;
label_25b7a8:
    // 0x25b7a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25b7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b7ac:
    // 0x25b7ac: 0xc05d4f6  jal         func_1753D8
label_25b7b0:
    if (ctx->pc == 0x25B7B0u) {
        ctx->pc = 0x25B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7ACu;
        // 0x25b7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B7B4u;
        goto label_25b7b4;
    }
    ctx->pc = 0x25B7ACu;
    SET_GPR_U32(ctx, 31, 0x25B7B4u);
    ctx->pc = 0x25B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B7ACu;
    // 0x25b7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25B7ACu, 0x25B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B7B4u;
label_25b7b4:
    // 0x25b7b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b7b8:
    // 0x25b7b8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25b7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25b7bc:
    // 0x25b7bc: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25b7c0:
    // 0x25b7c0: 0x60f809  jalr        $v1
label_25b7c4:
    if (ctx->pc == 0x25B7C4u) {
        ctx->pc = 0x25B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7C0u;
        // 0x25b7c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B7C8u;
        goto label_25b7c8;
    }
    ctx->pc = 0x25B7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B7C8u);
        ctx->pc = 0x25B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7C0u;
        // 0x25b7c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B7C0u, 0x25B7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B7C8u;
label_25b7c8:
    // 0x25b7c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b7cc:
    // 0x25b7cc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x25b7ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_25b7d0:
    // 0x25b7d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25b7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25b7d4:
    // 0x25b7d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25b7d8:
    // 0x25b7d8: 0x60f809  jalr        $v1
label_25b7dc:
    if (ctx->pc == 0x25B7DCu) {
        ctx->pc = 0x25B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7D8u;
        // 0x25b7dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B7E0u;
        goto label_25b7e0;
    }
    ctx->pc = 0x25B7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B7E0u);
        ctx->pc = 0x25B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7D8u;
        // 0x25b7dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B7D8u, 0x25B7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B7E0u;
label_25b7e0:
    // 0x25b7e0: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x25b7e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25b7e4:
    // 0x25b7e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b7e8:
    // 0x25b7e8: 0x0  nop
    ctx->pc = 0x25b7e8u;
    // NOP
label_25b7ec:
    // 0x25b7ec: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25b7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b7f0:
    // 0x25b7f0: 0x0  nop
    ctx->pc = 0x25b7f0u;
    // NOP
label_25b7f4:
    // 0x25b7f4: 0x45020073  bc1fl       . + 4 + (0x73 << 2)
label_25b7f8:
    if (ctx->pc == 0x25B7F8u) {
        ctx->pc = 0x25B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7F4u;
        // 0x25b7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B7FCu;
        goto label_25b7fc;
    }
    ctx->pc = 0x25B7F4u;
    {
        const bool branch_taken_0x25b7f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b7f4) {
            ctx->pc = 0x25B7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B7F4u;
            // 0x25b7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B9C4u;
            goto label_25b9c4;
        }
    }
    ctx->pc = 0x25B7FCu;
label_25b7fc:
    // 0x25b7fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b800:
    // 0x25b800: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x25b800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_25b804:
    // 0x25b804: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x25b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_25b808:
    // 0x25b808: 0x60f809  jalr        $v1
label_25b80c:
    if (ctx->pc == 0x25B80Cu) {
        ctx->pc = 0x25B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B808u;
        // 0x25b80c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B810u;
        goto label_25b810;
    }
    ctx->pc = 0x25B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B810u);
        ctx->pc = 0x25B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B808u;
        // 0x25b80c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B808u, 0x25B810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B810u;
label_25b810:
    // 0x25b810: 0x1000006c  b           . + 4 + (0x6C << 2)
label_25b814:
    if (ctx->pc == 0x25B814u) {
        ctx->pc = 0x25B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B810u;
        // 0x25b814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B818u;
        goto label_25b818;
    }
    ctx->pc = 0x25B810u;
    {
        const bool branch_taken_0x25b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B810u;
        // 0x25b814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b810) {
            ctx->pc = 0x25B9C4u;
            goto label_25b9c4;
        }
    }
    ctx->pc = 0x25B818u;
label_25b818:
    // 0x25b818: 0xc041532  jal         func_1054C8
label_25b81c:
    if (ctx->pc == 0x25B81Cu) {
        ctx->pc = 0x25B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B818u;
        // 0x25b81c: 0x8e5600d8  lw          $s6, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B820u;
        goto label_25b820;
    }
    ctx->pc = 0x25B818u;
    SET_GPR_U32(ctx, 31, 0x25B820u);
    ctx->pc = 0x25B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B818u;
    // 0x25b81c: 0x8e5600d8  lw          $s6, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25B818u, 0x25B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B820u;
label_25b820:
    // 0x25b820: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_25b824:
    if (ctx->pc == 0x25B824u) {
        ctx->pc = 0x25B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B820u;
        // 0x25b824: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B828u;
        goto label_25b828;
    }
    ctx->pc = 0x25B820u;
    {
        const bool branch_taken_0x25b820 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B820u;
        // 0x25b824: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b820) {
            ctx->pc = 0x25B844u;
            goto label_25b844;
        }
    }
    ctx->pc = 0x25B828u;
label_25b828:
    // 0x25b828: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25b82c:
    // 0x25b82c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b830:
    // 0x25b830: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25b830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b834:
    // 0x25b834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b838:
    // 0x25b838: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b83c:
    // 0x25b83c: 0xc041b20  jal         func_106C80
label_25b840:
    if (ctx->pc == 0x25B840u) {
        ctx->pc = 0x25B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B83Cu;
        // 0x25b840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B844u;
        goto label_25b844;
    }
    ctx->pc = 0x25B83Cu;
    SET_GPR_U32(ctx, 31, 0x25B844u);
    ctx->pc = 0x25B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B83Cu;
    // 0x25b840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25B83Cu, 0x25B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B844u;
label_25b844:
    // 0x25b844: 0xc05d484  jal         func_175210
label_25b848:
    if (ctx->pc == 0x25B848u) {
        ctx->pc = 0x25B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B844u;
        // 0x25b848: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B84Cu;
        goto label_25b84c;
    }
    ctx->pc = 0x25B844u;
    SET_GPR_U32(ctx, 31, 0x25B84Cu);
    ctx->pc = 0x25B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B844u;
    // 0x25b848: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B844u, 0x25B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B84Cu;
label_25b84c:
    // 0x25b84c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b850:
    // 0x25b850: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25b850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25b854:
    // 0x25b854: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25b854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25b858:
    // 0x25b858: 0xa0f809  jalr        $a1
label_25b85c:
    if (ctx->pc == 0x25B85Cu) {
        ctx->pc = 0x25B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B858u;
        // 0x25b85c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B860u;
        goto label_25b860;
    }
    ctx->pc = 0x25B858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25B860u);
        ctx->pc = 0x25B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B858u;
        // 0x25b85c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B858u, 0x25B860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B860u;
label_25b860:
    // 0x25b860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b864:
    // 0x25b864: 0xc087016  jal         func_21C058
label_25b868:
    if (ctx->pc == 0x25B868u) {
        ctx->pc = 0x25B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B864u;
        // 0x25b868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B86Cu;
        goto label_25b86c;
    }
    ctx->pc = 0x25B864u;
    SET_GPR_U32(ctx, 31, 0x25B86Cu);
    ctx->pc = 0x25B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B864u;
    // 0x25b868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25B864u, 0x25B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B86Cu;
label_25b86c:
    // 0x25b86c: 0x924203bc  lbu         $v0, 0x3BC($s2)
    ctx->pc = 0x25b86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 956)));
label_25b870:
    // 0x25b870: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_25b874:
    if (ctx->pc == 0x25B874u) {
        ctx->pc = 0x25B878u;
        goto label_25b878;
    }
    ctx->pc = 0x25B870u;
    {
        const bool branch_taken_0x25b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b870) {
            ctx->pc = 0x25B8F0u;
            goto label_25b8f0;
        }
    }
    ctx->pc = 0x25B878u;
label_25b878:
    // 0x25b878: 0xc087502  jal         func_21D408
label_25b87c:
    if (ctx->pc == 0x25B87Cu) {
        ctx->pc = 0x25B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B878u;
        // 0x25b87c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B880u;
        goto label_25b880;
    }
    ctx->pc = 0x25B878u;
    SET_GPR_U32(ctx, 31, 0x25B880u);
    ctx->pc = 0x25B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B878u;
    // 0x25b87c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25B878u, 0x25B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B880u;
label_25b880:
    // 0x25b880: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25b880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25b884:
    // 0x25b884: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x25b884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_25b888:
    // 0x25b888: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_25b88c:
    if (ctx->pc == 0x25B88Cu) {
        ctx->pc = 0x25B890u;
        goto label_25b890;
    }
    ctx->pc = 0x25B888u;
    {
        const bool branch_taken_0x25b888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b888) {
            ctx->pc = 0x25B8F0u;
            goto label_25b8f0;
        }
    }
    ctx->pc = 0x25B890u;
label_25b890:
    // 0x25b890: 0x52600029  beql        $s3, $zero, . + 4 + (0x29 << 2)
label_25b894:
    if (ctx->pc == 0x25B894u) {
        ctx->pc = 0x25B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B890u;
        // 0x25b894: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B898u;
        goto label_25b898;
    }
    ctx->pc = 0x25B890u;
    {
        const bool branch_taken_0x25b890 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b890) {
            ctx->pc = 0x25B894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B890u;
            // 0x25b894: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B938u;
            goto label_25b938;
        }
    }
    ctx->pc = 0x25B898u;
label_25b898:
    // 0x25b898: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25b89c:
    // 0x25b89c: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x25b89cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b8a0:
    // 0x25b8a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25b8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25b8a4:
    // 0x25b8a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25b8a8:
    // 0x25b8a8: 0x40f809  jalr        $v0
label_25b8ac:
    if (ctx->pc == 0x25B8ACu) {
        ctx->pc = 0x25B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8A8u;
        // 0x25b8ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8B0u;
        goto label_25b8b0;
    }
    ctx->pc = 0x25B8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B8B0u);
        ctx->pc = 0x25B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8A8u;
        // 0x25b8ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B8A8u, 0x25B8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B8B0u;
label_25b8b0:
    // 0x25b8b0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x25b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_25b8b4:
    // 0x25b8b4: 0x8e4c00d4  lw          $t4, 0xD4($s2)
    ctx->pc = 0x25b8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b8b8:
    // 0x25b8b8: 0x2463aeb8  addiu       $v1, $v1, -0x5148
    ctx->pc = 0x25b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946488));
label_25b8bc:
    // 0x25b8bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b8bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b8c0:
    // 0x25b8c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x25b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_25b8c4:
    // 0x25b8c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b8c8:
    // 0x25b8c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25b8cc:
    // 0x25b8cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25b8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25b8d0:
    // 0x25b8d0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x25b8d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b8d4:
    // 0x25b8d4: 0x8d890044  lw          $t1, 0x44($t4)
    ctx->pc = 0x25b8d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
label_25b8d8:
    // 0x25b8d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b8dc:
    // 0x25b8dc: 0x8d860038  lw          $a2, 0x38($t4)
    ctx->pc = 0x25b8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
label_25b8e0:
    // 0x25b8e0: 0x8d87003c  lw          $a3, 0x3C($t4)
    ctx->pc = 0x25b8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
label_25b8e4:
    // 0x25b8e4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25b8e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25b8e8:
    // 0x25b8e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_25b8ec:
    if (ctx->pc == 0x25B8ECu) {
        ctx->pc = 0x25B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8E8u;
        // 0x25b8ec: 0x8d880040  lw          $t0, 0x40($t4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8F0u;
        goto label_25b8f0;
    }
    ctx->pc = 0x25B8E8u;
    {
        const bool branch_taken_0x25b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8E8u;
        // 0x25b8ec: 0x8d880040  lw          $t0, 0x40($t4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8e8) {
            ctx->pc = 0x25B92Cu;
            goto label_25b92c;
        }
    }
    ctx->pc = 0x25B8F0u;
label_25b8f0:
    // 0x25b8f0: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_25b8f4:
    if (ctx->pc == 0x25B8F4u) {
        ctx->pc = 0x25B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8F0u;
        // 0x25b8f4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B8F8u;
        goto label_25b8f8;
    }
    ctx->pc = 0x25B8F0u;
    {
        const bool branch_taken_0x25b8f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8F0u;
        // 0x25b8f4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8f0) {
            ctx->pc = 0x25B934u;
            goto label_25b934;
        }
    }
    ctx->pc = 0x25B8F8u;
label_25b8f8:
    // 0x25b8f8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b8fc:
    // 0x25b8fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25b900:
    // 0x25b900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b904:
    // 0x25b904: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x25b904u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25b908:
    // 0x25b908: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x25b908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25b90c:
    // 0x25b90c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b910:
    // 0x25b910: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x25b910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25b914:
    // 0x25b914: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x25b914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25b918:
    // 0x25b918: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x25b918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_25b91c:
    // 0x25b91c: 0x8c480040  lw          $t0, 0x40($v0)
    ctx->pc = 0x25b91cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_25b920:
    // 0x25b920: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b924:
    // 0x25b924: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25b924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25b928:
    // 0x25b928: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25b928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25b92c:
    // 0x25b92c: 0xc0428c4  jal         func_10A310
label_25b930:
    if (ctx->pc == 0x25B930u) {
        ctx->pc = 0x25B934u;
        goto label_25b934;
    }
    ctx->pc = 0x25B92Cu;
    SET_GPR_U32(ctx, 31, 0x25B934u);
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x25B92Cu, 0x25B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B934u;
label_25b934:
    // 0x25b934: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25b938:
    // 0x25b938: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x25b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_25b93c:
    // 0x25b93c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25b93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25b940:
    // 0x25b940: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25b944:
    // 0x25b944: 0x60f809  jalr        $v1
label_25b948:
    if (ctx->pc == 0x25B948u) {
        ctx->pc = 0x25B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B944u;
        // 0x25b948: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B94Cu;
        goto label_25b94c;
    }
    ctx->pc = 0x25B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B94Cu);
        ctx->pc = 0x25B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B944u;
        // 0x25b948: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B944u, 0x25B94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B94Cu;
label_25b94c:
    // 0x25b94c: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x25b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25b950:
    // 0x25b950: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b954:
    // 0x25b954: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_25b958:
    if (ctx->pc == 0x25B958u) {
        ctx->pc = 0x25B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B954u;
        // 0x25b958: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B95Cu;
        goto label_25b95c;
    }
    ctx->pc = 0x25B954u;
    {
        const bool branch_taken_0x25b954 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B954u;
        // 0x25b958: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b954) {
            ctx->pc = 0x25B99Cu;
            goto label_25b99c;
        }
    }
    ctx->pc = 0x25B95Cu;
label_25b95c:
    // 0x25b95c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25b960:
    // 0x25b960: 0x8e5100d8  lw          $s1, 0xD8($s2)
    ctx->pc = 0x25b960u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25b964:
    // 0x25b964: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25b964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25b968:
    // 0x25b968: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25b96c:
    // 0x25b96c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_25b970:
    // 0x25b970: 0x40f809  jalr        $v0
label_25b974:
    if (ctx->pc == 0x25B974u) {
        ctx->pc = 0x25B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B970u;
        // 0x25b974: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B978u;
        goto label_25b978;
    }
    ctx->pc = 0x25B970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B978u);
        ctx->pc = 0x25B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B970u;
        // 0x25b974: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B970u, 0x25B978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B978u;
label_25b978:
    // 0x25b978: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x25b978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_25b97c:
    // 0x25b97c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b980:
    // 0x25b980: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b984:
    // 0x25b984: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25b984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b988:
    // 0x25b988: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25b988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b98c:
    // 0x25b98c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25b990:
    // 0x25b990: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x25b990u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_25b994:
    // 0x25b994: 0xc041664  jal         func_105990
label_25b998:
    if (ctx->pc == 0x25B998u) {
        ctx->pc = 0x25B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B994u;
        // 0x25b998: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B99Cu;
        goto label_25b99c;
    }
    ctx->pc = 0x25B994u;
    SET_GPR_U32(ctx, 31, 0x25B99Cu);
    ctx->pc = 0x25B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B994u;
    // 0x25b998: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25B994u, 0x25B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B99Cu;
label_25b99c:
    // 0x25b99c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b9a0:
    // 0x25b9a0: 0xc089990  jal         func_226640
label_25b9a4:
    if (ctx->pc == 0x25B9A4u) {
        ctx->pc = 0x25B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9A0u;
        // 0x25b9a4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9A8u;
        goto label_25b9a8;
    }
    ctx->pc = 0x25B9A0u;
    SET_GPR_U32(ctx, 31, 0x25B9A8u);
    ctx->pc = 0x25B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9A0u;
    // 0x25b9a4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25B9A0u, 0x25B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9A8u;
label_25b9a8:
    // 0x25b9a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25b9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25b9ac:
    // 0x25b9ac: 0xc05d53a  jal         func_1754E8
label_25b9b0:
    if (ctx->pc == 0x25B9B0u) {
        ctx->pc = 0x25B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9ACu;
        // 0x25b9b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9B4u;
        goto label_25b9b4;
    }
    ctx->pc = 0x25B9ACu;
    SET_GPR_U32(ctx, 31, 0x25B9B4u);
    ctx->pc = 0x25B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9ACu;
    // 0x25b9b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25B9ACu, 0x25B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9B4u;
label_25b9b4:
    // 0x25b9b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25b9b8:
    // 0x25b9b8: 0xc05d4f6  jal         func_1753D8
label_25b9bc:
    if (ctx->pc == 0x25B9BCu) {
        ctx->pc = 0x25B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9B8u;
        // 0x25b9bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9C0u;
        goto label_25b9c0;
    }
    ctx->pc = 0x25B9B8u;
    SET_GPR_U32(ctx, 31, 0x25B9C0u);
    ctx->pc = 0x25B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9B8u;
    // 0x25b9bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25B9B8u, 0x25B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9C0u;
label_25b9c0:
    // 0x25b9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b9c4:
    // 0x25b9c4: 0xc0899aa  jal         func_2266A8
label_25b9c8:
    if (ctx->pc == 0x25B9C8u) {
        ctx->pc = 0x25B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9C4u;
        // 0x25b9c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9CCu;
        goto label_25b9cc;
    }
    ctx->pc = 0x25B9C4u;
    SET_GPR_U32(ctx, 31, 0x25B9CCu);
    ctx->pc = 0x25B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9C4u;
    // 0x25b9c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25B9C4u, 0x25B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9CCu;
label_25b9cc:
    // 0x25b9cc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x25b9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25b9d0:
    // 0x25b9d0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x25b9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25b9d4:
    // 0x25b9d4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25b9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25b9d8:
    // 0x25b9d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25b9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25b9dc:
    // 0x25b9dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25b9dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25b9e0:
    // 0x25b9e0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x25b9e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25b9e4:
    // 0x25b9e4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x25b9e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25b9e8:
    // 0x25b9e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25b9ec:
    // 0x25b9ec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x25b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25b9f0:
    // 0x25b9f0: 0x3e00008  jr          $ra
label_25b9f4:
    if (ctx->pc == 0x25B9F4u) {
        ctx->pc = 0x25B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9F0u;
        // 0x25b9f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9F8u;
        goto label_fallthrough_0x25b9f0;
    }
    ctx->pc = 0x25B9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9F0u;
        // 0x25b9f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25b9f0:
    ctx->pc = 0x25B9F8u;
}
