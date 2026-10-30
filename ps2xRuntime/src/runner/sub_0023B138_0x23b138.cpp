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

// Function: sub_0023B138
// Address: 0x23b138 - 0x23b778
void sub_0023B138_0x23b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B138_0x23b138");
#endif

    switch (ctx->pc) {
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        case 0x23b158u: goto label_23b158;
        case 0x23b15cu: goto label_23b15c;
        case 0x23b160u: goto label_23b160;
        case 0x23b164u: goto label_23b164;
        case 0x23b168u: goto label_23b168;
        case 0x23b16cu: goto label_23b16c;
        case 0x23b170u: goto label_23b170;
        case 0x23b174u: goto label_23b174;
        case 0x23b178u: goto label_23b178;
        case 0x23b17cu: goto label_23b17c;
        case 0x23b180u: goto label_23b180;
        case 0x23b184u: goto label_23b184;
        case 0x23b188u: goto label_23b188;
        case 0x23b18cu: goto label_23b18c;
        case 0x23b190u: goto label_23b190;
        case 0x23b194u: goto label_23b194;
        case 0x23b198u: goto label_23b198;
        case 0x23b19cu: goto label_23b19c;
        case 0x23b1a0u: goto label_23b1a0;
        case 0x23b1a4u: goto label_23b1a4;
        case 0x23b1a8u: goto label_23b1a8;
        case 0x23b1acu: goto label_23b1ac;
        case 0x23b1b0u: goto label_23b1b0;
        case 0x23b1b4u: goto label_23b1b4;
        case 0x23b1b8u: goto label_23b1b8;
        case 0x23b1bcu: goto label_23b1bc;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b1c4u: goto label_23b1c4;
        case 0x23b1c8u: goto label_23b1c8;
        case 0x23b1ccu: goto label_23b1cc;
        case 0x23b1d0u: goto label_23b1d0;
        case 0x23b1d4u: goto label_23b1d4;
        case 0x23b1d8u: goto label_23b1d8;
        case 0x23b1dcu: goto label_23b1dc;
        case 0x23b1e0u: goto label_23b1e0;
        case 0x23b1e4u: goto label_23b1e4;
        case 0x23b1e8u: goto label_23b1e8;
        case 0x23b1ecu: goto label_23b1ec;
        case 0x23b1f0u: goto label_23b1f0;
        case 0x23b1f4u: goto label_23b1f4;
        case 0x23b1f8u: goto label_23b1f8;
        case 0x23b1fcu: goto label_23b1fc;
        case 0x23b200u: goto label_23b200;
        case 0x23b204u: goto label_23b204;
        case 0x23b208u: goto label_23b208;
        case 0x23b20cu: goto label_23b20c;
        case 0x23b210u: goto label_23b210;
        case 0x23b214u: goto label_23b214;
        case 0x23b218u: goto label_23b218;
        case 0x23b21cu: goto label_23b21c;
        case 0x23b220u: goto label_23b220;
        case 0x23b224u: goto label_23b224;
        case 0x23b228u: goto label_23b228;
        case 0x23b22cu: goto label_23b22c;
        case 0x23b230u: goto label_23b230;
        case 0x23b234u: goto label_23b234;
        case 0x23b238u: goto label_23b238;
        case 0x23b23cu: goto label_23b23c;
        case 0x23b240u: goto label_23b240;
        case 0x23b244u: goto label_23b244;
        case 0x23b248u: goto label_23b248;
        case 0x23b24cu: goto label_23b24c;
        case 0x23b250u: goto label_23b250;
        case 0x23b254u: goto label_23b254;
        case 0x23b258u: goto label_23b258;
        case 0x23b25cu: goto label_23b25c;
        case 0x23b260u: goto label_23b260;
        case 0x23b264u: goto label_23b264;
        case 0x23b268u: goto label_23b268;
        case 0x23b26cu: goto label_23b26c;
        case 0x23b270u: goto label_23b270;
        case 0x23b274u: goto label_23b274;
        case 0x23b278u: goto label_23b278;
        case 0x23b27cu: goto label_23b27c;
        case 0x23b280u: goto label_23b280;
        case 0x23b284u: goto label_23b284;
        case 0x23b288u: goto label_23b288;
        case 0x23b28cu: goto label_23b28c;
        case 0x23b290u: goto label_23b290;
        case 0x23b294u: goto label_23b294;
        case 0x23b298u: goto label_23b298;
        case 0x23b29cu: goto label_23b29c;
        case 0x23b2a0u: goto label_23b2a0;
        case 0x23b2a4u: goto label_23b2a4;
        case 0x23b2a8u: goto label_23b2a8;
        case 0x23b2acu: goto label_23b2ac;
        case 0x23b2b0u: goto label_23b2b0;
        case 0x23b2b4u: goto label_23b2b4;
        case 0x23b2b8u: goto label_23b2b8;
        case 0x23b2bcu: goto label_23b2bc;
        case 0x23b2c0u: goto label_23b2c0;
        case 0x23b2c4u: goto label_23b2c4;
        case 0x23b2c8u: goto label_23b2c8;
        case 0x23b2ccu: goto label_23b2cc;
        case 0x23b2d0u: goto label_23b2d0;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2d8u: goto label_23b2d8;
        case 0x23b2dcu: goto label_23b2dc;
        case 0x23b2e0u: goto label_23b2e0;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2e8u: goto label_23b2e8;
        case 0x23b2ecu: goto label_23b2ec;
        case 0x23b2f0u: goto label_23b2f0;
        case 0x23b2f4u: goto label_23b2f4;
        case 0x23b2f8u: goto label_23b2f8;
        case 0x23b2fcu: goto label_23b2fc;
        case 0x23b300u: goto label_23b300;
        case 0x23b304u: goto label_23b304;
        case 0x23b308u: goto label_23b308;
        case 0x23b30cu: goto label_23b30c;
        case 0x23b310u: goto label_23b310;
        case 0x23b314u: goto label_23b314;
        case 0x23b318u: goto label_23b318;
        case 0x23b31cu: goto label_23b31c;
        case 0x23b320u: goto label_23b320;
        case 0x23b324u: goto label_23b324;
        case 0x23b328u: goto label_23b328;
        case 0x23b32cu: goto label_23b32c;
        case 0x23b330u: goto label_23b330;
        case 0x23b334u: goto label_23b334;
        case 0x23b338u: goto label_23b338;
        case 0x23b33cu: goto label_23b33c;
        case 0x23b340u: goto label_23b340;
        case 0x23b344u: goto label_23b344;
        case 0x23b348u: goto label_23b348;
        case 0x23b34cu: goto label_23b34c;
        case 0x23b350u: goto label_23b350;
        case 0x23b354u: goto label_23b354;
        case 0x23b358u: goto label_23b358;
        case 0x23b35cu: goto label_23b35c;
        case 0x23b360u: goto label_23b360;
        case 0x23b364u: goto label_23b364;
        case 0x23b368u: goto label_23b368;
        case 0x23b36cu: goto label_23b36c;
        case 0x23b370u: goto label_23b370;
        case 0x23b374u: goto label_23b374;
        case 0x23b378u: goto label_23b378;
        case 0x23b37cu: goto label_23b37c;
        case 0x23b380u: goto label_23b380;
        case 0x23b384u: goto label_23b384;
        case 0x23b388u: goto label_23b388;
        case 0x23b38cu: goto label_23b38c;
        case 0x23b390u: goto label_23b390;
        case 0x23b394u: goto label_23b394;
        case 0x23b398u: goto label_23b398;
        case 0x23b39cu: goto label_23b39c;
        case 0x23b3a0u: goto label_23b3a0;
        case 0x23b3a4u: goto label_23b3a4;
        case 0x23b3a8u: goto label_23b3a8;
        case 0x23b3acu: goto label_23b3ac;
        case 0x23b3b0u: goto label_23b3b0;
        case 0x23b3b4u: goto label_23b3b4;
        case 0x23b3b8u: goto label_23b3b8;
        case 0x23b3bcu: goto label_23b3bc;
        case 0x23b3c0u: goto label_23b3c0;
        case 0x23b3c4u: goto label_23b3c4;
        case 0x23b3c8u: goto label_23b3c8;
        case 0x23b3ccu: goto label_23b3cc;
        case 0x23b3d0u: goto label_23b3d0;
        case 0x23b3d4u: goto label_23b3d4;
        case 0x23b3d8u: goto label_23b3d8;
        case 0x23b3dcu: goto label_23b3dc;
        case 0x23b3e0u: goto label_23b3e0;
        case 0x23b3e4u: goto label_23b3e4;
        case 0x23b3e8u: goto label_23b3e8;
        case 0x23b3ecu: goto label_23b3ec;
        case 0x23b3f0u: goto label_23b3f0;
        case 0x23b3f4u: goto label_23b3f4;
        case 0x23b3f8u: goto label_23b3f8;
        case 0x23b3fcu: goto label_23b3fc;
        case 0x23b400u: goto label_23b400;
        case 0x23b404u: goto label_23b404;
        case 0x23b408u: goto label_23b408;
        case 0x23b40cu: goto label_23b40c;
        case 0x23b410u: goto label_23b410;
        case 0x23b414u: goto label_23b414;
        case 0x23b418u: goto label_23b418;
        case 0x23b41cu: goto label_23b41c;
        case 0x23b420u: goto label_23b420;
        case 0x23b424u: goto label_23b424;
        case 0x23b428u: goto label_23b428;
        case 0x23b42cu: goto label_23b42c;
        case 0x23b430u: goto label_23b430;
        case 0x23b434u: goto label_23b434;
        case 0x23b438u: goto label_23b438;
        case 0x23b43cu: goto label_23b43c;
        case 0x23b440u: goto label_23b440;
        case 0x23b444u: goto label_23b444;
        case 0x23b448u: goto label_23b448;
        case 0x23b44cu: goto label_23b44c;
        case 0x23b450u: goto label_23b450;
        case 0x23b454u: goto label_23b454;
        case 0x23b458u: goto label_23b458;
        case 0x23b45cu: goto label_23b45c;
        case 0x23b460u: goto label_23b460;
        case 0x23b464u: goto label_23b464;
        case 0x23b468u: goto label_23b468;
        case 0x23b46cu: goto label_23b46c;
        case 0x23b470u: goto label_23b470;
        case 0x23b474u: goto label_23b474;
        case 0x23b478u: goto label_23b478;
        case 0x23b47cu: goto label_23b47c;
        case 0x23b480u: goto label_23b480;
        case 0x23b484u: goto label_23b484;
        case 0x23b488u: goto label_23b488;
        case 0x23b48cu: goto label_23b48c;
        case 0x23b490u: goto label_23b490;
        case 0x23b494u: goto label_23b494;
        case 0x23b498u: goto label_23b498;
        case 0x23b49cu: goto label_23b49c;
        case 0x23b4a0u: goto label_23b4a0;
        case 0x23b4a4u: goto label_23b4a4;
        case 0x23b4a8u: goto label_23b4a8;
        case 0x23b4acu: goto label_23b4ac;
        case 0x23b4b0u: goto label_23b4b0;
        case 0x23b4b4u: goto label_23b4b4;
        case 0x23b4b8u: goto label_23b4b8;
        case 0x23b4bcu: goto label_23b4bc;
        case 0x23b4c0u: goto label_23b4c0;
        case 0x23b4c4u: goto label_23b4c4;
        case 0x23b4c8u: goto label_23b4c8;
        case 0x23b4ccu: goto label_23b4cc;
        case 0x23b4d0u: goto label_23b4d0;
        case 0x23b4d4u: goto label_23b4d4;
        case 0x23b4d8u: goto label_23b4d8;
        case 0x23b4dcu: goto label_23b4dc;
        case 0x23b4e0u: goto label_23b4e0;
        case 0x23b4e4u: goto label_23b4e4;
        case 0x23b4e8u: goto label_23b4e8;
        case 0x23b4ecu: goto label_23b4ec;
        case 0x23b4f0u: goto label_23b4f0;
        case 0x23b4f4u: goto label_23b4f4;
        case 0x23b4f8u: goto label_23b4f8;
        case 0x23b4fcu: goto label_23b4fc;
        case 0x23b500u: goto label_23b500;
        case 0x23b504u: goto label_23b504;
        case 0x23b508u: goto label_23b508;
        case 0x23b50cu: goto label_23b50c;
        case 0x23b510u: goto label_23b510;
        case 0x23b514u: goto label_23b514;
        case 0x23b518u: goto label_23b518;
        case 0x23b51cu: goto label_23b51c;
        case 0x23b520u: goto label_23b520;
        case 0x23b524u: goto label_23b524;
        case 0x23b528u: goto label_23b528;
        case 0x23b52cu: goto label_23b52c;
        case 0x23b530u: goto label_23b530;
        case 0x23b534u: goto label_23b534;
        case 0x23b538u: goto label_23b538;
        case 0x23b53cu: goto label_23b53c;
        case 0x23b540u: goto label_23b540;
        case 0x23b544u: goto label_23b544;
        case 0x23b548u: goto label_23b548;
        case 0x23b54cu: goto label_23b54c;
        case 0x23b550u: goto label_23b550;
        case 0x23b554u: goto label_23b554;
        case 0x23b558u: goto label_23b558;
        case 0x23b55cu: goto label_23b55c;
        case 0x23b560u: goto label_23b560;
        case 0x23b564u: goto label_23b564;
        case 0x23b568u: goto label_23b568;
        case 0x23b56cu: goto label_23b56c;
        case 0x23b570u: goto label_23b570;
        case 0x23b574u: goto label_23b574;
        case 0x23b578u: goto label_23b578;
        case 0x23b57cu: goto label_23b57c;
        case 0x23b580u: goto label_23b580;
        case 0x23b584u: goto label_23b584;
        case 0x23b588u: goto label_23b588;
        case 0x23b58cu: goto label_23b58c;
        case 0x23b590u: goto label_23b590;
        case 0x23b594u: goto label_23b594;
        case 0x23b598u: goto label_23b598;
        case 0x23b59cu: goto label_23b59c;
        case 0x23b5a0u: goto label_23b5a0;
        case 0x23b5a4u: goto label_23b5a4;
        case 0x23b5a8u: goto label_23b5a8;
        case 0x23b5acu: goto label_23b5ac;
        case 0x23b5b0u: goto label_23b5b0;
        case 0x23b5b4u: goto label_23b5b4;
        case 0x23b5b8u: goto label_23b5b8;
        case 0x23b5bcu: goto label_23b5bc;
        case 0x23b5c0u: goto label_23b5c0;
        case 0x23b5c4u: goto label_23b5c4;
        case 0x23b5c8u: goto label_23b5c8;
        case 0x23b5ccu: goto label_23b5cc;
        case 0x23b5d0u: goto label_23b5d0;
        case 0x23b5d4u: goto label_23b5d4;
        case 0x23b5d8u: goto label_23b5d8;
        case 0x23b5dcu: goto label_23b5dc;
        case 0x23b5e0u: goto label_23b5e0;
        case 0x23b5e4u: goto label_23b5e4;
        case 0x23b5e8u: goto label_23b5e8;
        case 0x23b5ecu: goto label_23b5ec;
        case 0x23b5f0u: goto label_23b5f0;
        case 0x23b5f4u: goto label_23b5f4;
        case 0x23b5f8u: goto label_23b5f8;
        case 0x23b5fcu: goto label_23b5fc;
        case 0x23b600u: goto label_23b600;
        case 0x23b604u: goto label_23b604;
        case 0x23b608u: goto label_23b608;
        case 0x23b60cu: goto label_23b60c;
        case 0x23b610u: goto label_23b610;
        case 0x23b614u: goto label_23b614;
        case 0x23b618u: goto label_23b618;
        case 0x23b61cu: goto label_23b61c;
        case 0x23b620u: goto label_23b620;
        case 0x23b624u: goto label_23b624;
        case 0x23b628u: goto label_23b628;
        case 0x23b62cu: goto label_23b62c;
        case 0x23b630u: goto label_23b630;
        case 0x23b634u: goto label_23b634;
        case 0x23b638u: goto label_23b638;
        case 0x23b63cu: goto label_23b63c;
        case 0x23b640u: goto label_23b640;
        case 0x23b644u: goto label_23b644;
        case 0x23b648u: goto label_23b648;
        case 0x23b64cu: goto label_23b64c;
        case 0x23b650u: goto label_23b650;
        case 0x23b654u: goto label_23b654;
        case 0x23b658u: goto label_23b658;
        case 0x23b65cu: goto label_23b65c;
        case 0x23b660u: goto label_23b660;
        case 0x23b664u: goto label_23b664;
        case 0x23b668u: goto label_23b668;
        case 0x23b66cu: goto label_23b66c;
        case 0x23b670u: goto label_23b670;
        case 0x23b674u: goto label_23b674;
        case 0x23b678u: goto label_23b678;
        case 0x23b67cu: goto label_23b67c;
        case 0x23b680u: goto label_23b680;
        case 0x23b684u: goto label_23b684;
        case 0x23b688u: goto label_23b688;
        case 0x23b68cu: goto label_23b68c;
        case 0x23b690u: goto label_23b690;
        case 0x23b694u: goto label_23b694;
        case 0x23b698u: goto label_23b698;
        case 0x23b69cu: goto label_23b69c;
        case 0x23b6a0u: goto label_23b6a0;
        case 0x23b6a4u: goto label_23b6a4;
        case 0x23b6a8u: goto label_23b6a8;
        case 0x23b6acu: goto label_23b6ac;
        case 0x23b6b0u: goto label_23b6b0;
        case 0x23b6b4u: goto label_23b6b4;
        case 0x23b6b8u: goto label_23b6b8;
        case 0x23b6bcu: goto label_23b6bc;
        case 0x23b6c0u: goto label_23b6c0;
        case 0x23b6c4u: goto label_23b6c4;
        case 0x23b6c8u: goto label_23b6c8;
        case 0x23b6ccu: goto label_23b6cc;
        case 0x23b6d0u: goto label_23b6d0;
        case 0x23b6d4u: goto label_23b6d4;
        case 0x23b6d8u: goto label_23b6d8;
        case 0x23b6dcu: goto label_23b6dc;
        case 0x23b6e0u: goto label_23b6e0;
        case 0x23b6e4u: goto label_23b6e4;
        case 0x23b6e8u: goto label_23b6e8;
        case 0x23b6ecu: goto label_23b6ec;
        case 0x23b6f0u: goto label_23b6f0;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6f8u: goto label_23b6f8;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b700u: goto label_23b700;
        case 0x23b704u: goto label_23b704;
        case 0x23b708u: goto label_23b708;
        case 0x23b70cu: goto label_23b70c;
        case 0x23b710u: goto label_23b710;
        case 0x23b714u: goto label_23b714;
        case 0x23b718u: goto label_23b718;
        case 0x23b71cu: goto label_23b71c;
        case 0x23b720u: goto label_23b720;
        case 0x23b724u: goto label_23b724;
        case 0x23b728u: goto label_23b728;
        case 0x23b72cu: goto label_23b72c;
        case 0x23b730u: goto label_23b730;
        case 0x23b734u: goto label_23b734;
        case 0x23b738u: goto label_23b738;
        case 0x23b73cu: goto label_23b73c;
        case 0x23b740u: goto label_23b740;
        case 0x23b744u: goto label_23b744;
        case 0x23b748u: goto label_23b748;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b750u: goto label_23b750;
        case 0x23b754u: goto label_23b754;
        case 0x23b758u: goto label_23b758;
        case 0x23b75cu: goto label_23b75c;
        case 0x23b760u: goto label_23b760;
        case 0x23b764u: goto label_23b764;
        case 0x23b768u: goto label_23b768;
        case 0x23b76cu: goto label_23b76c;
        case 0x23b770u: goto label_23b770;
        case 0x23b774u: goto label_23b774;
        default: break;
    }

    ctx->pc = 0x23b138u;

label_23b138:
    // 0x23b138: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x23b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
label_23b13c:
    // 0x23b13c: 0xafa404a0  sw          $a0, 0x4A0($sp)
    ctx->pc = 0x23b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 4));
label_23b140:
    // 0x23b140: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x23b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_23b144:
    // 0x23b144: 0x7fb00560  sq          $s0, 0x560($sp)
    ctx->pc = 0x23b144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 16));
label_23b148:
    // 0x23b148: 0x7fb10550  sq          $s1, 0x550($sp)
    ctx->pc = 0x23b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 17));
label_23b14c:
    // 0x23b14c: 0x7fb20540  sq          $s2, 0x540($sp)
    ctx->pc = 0x23b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 18));
label_23b150:
    // 0x23b150: 0x7fb30530  sq          $s3, 0x530($sp)
    ctx->pc = 0x23b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 19));
label_23b154:
    // 0x23b154: 0x7fb40520  sq          $s4, 0x520($sp)
    ctx->pc = 0x23b154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 20));
label_23b158:
    // 0x23b158: 0x7fb50510  sq          $s5, 0x510($sp)
    ctx->pc = 0x23b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 21));
label_23b15c:
    // 0x23b15c: 0x7fb60500  sq          $s6, 0x500($sp)
    ctx->pc = 0x23b15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 22));
label_23b160:
    // 0x23b160: 0x7fb704f0  sq          $s7, 0x4F0($sp)
    ctx->pc = 0x23b160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 23));
label_23b164:
    // 0x23b164: 0x7fbe04e0  sq          $fp, 0x4E0($sp)
    ctx->pc = 0x23b164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 30));
label_23b168:
    // 0x23b168: 0xffbf04d0  sd          $ra, 0x4D0($sp)
    ctx->pc = 0x23b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 31));
label_23b16c:
    // 0x23b16c: 0xe7b80590  swc1        $f24, 0x590($sp)
    ctx->pc = 0x23b16cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_23b170:
    // 0x23b170: 0xe7b70588  swc1        $f23, 0x588($sp)
    ctx->pc = 0x23b170u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_23b174:
    // 0x23b174: 0xe7b60580  swc1        $f22, 0x580($sp)
    ctx->pc = 0x23b174u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_23b178:
    // 0x23b178: 0xe7b50578  swc1        $f21, 0x578($sp)
    ctx->pc = 0x23b178u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_23b17c:
    // 0x23b17c: 0xe7b40570  swc1        $f20, 0x570($sp)
    ctx->pc = 0x23b17cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_23b180:
    // 0x23b180: 0xc0e4060  jal         func_390180
label_23b184:
    if (ctx->pc == 0x23B184u) {
        ctx->pc = 0x23B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B180u;
        // 0x23b184: 0xafa504a4  sw          $a1, 0x4A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B188u;
        goto label_23b188;
    }
    ctx->pc = 0x23B180u;
    SET_GPR_U32(ctx, 31, 0x23B188u);
    ctx->pc = 0x23B184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B180u;
    // 0x23b184: 0xafa504a4  sw          $a1, 0x4A4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23B180u, 0x23B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B188u;
label_23b188:
    // 0x23b188: 0xc08a61a  jal         func_229868
label_23b18c:
    if (ctx->pc == 0x23B18Cu) {
        ctx->pc = 0x23B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B188u;
        // 0x23b18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B190u;
        goto label_23b190;
    }
    ctx->pc = 0x23B188u;
    SET_GPR_U32(ctx, 31, 0x23B190u);
    ctx->pc = 0x23B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B188u;
    // 0x23b18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23B188u, 0x23B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B190u;
label_23b190:
    // 0x23b190: 0x10400167  beqz        $v0, . + 4 + (0x167 << 2)
label_23b194:
    if (ctx->pc == 0x23B194u) {
        ctx->pc = 0x23B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B190u;
        // 0x23b194: 0xafa204ac  sw          $v0, 0x4AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B198u;
        goto label_23b198;
    }
    ctx->pc = 0x23B190u;
    {
        const bool branch_taken_0x23b190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B190u;
        // 0x23b194: 0xafa204ac  sw          $v0, 0x4AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b190) {
            ctx->pc = 0x23B730u;
            goto label_23b730;
        }
    }
    ctx->pc = 0x23B198u;
label_23b198:
    // 0x23b198: 0xc0e4060  jal         func_390180
label_23b19c:
    if (ctx->pc == 0x23B19Cu) {
        ctx->pc = 0x23B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B198u;
        // 0x23b19c: 0x27a404a4  addiu       $a0, $sp, 0x4A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1A0u;
        goto label_23b1a0;
    }
    ctx->pc = 0x23B198u;
    SET_GPR_U32(ctx, 31, 0x23B1A0u);
    ctx->pc = 0x23B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B198u;
    // 0x23b19c: 0x27a404a4  addiu       $a0, $sp, 0x4A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23B198u, 0x23B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1A0u;
label_23b1a0:
    // 0x23b1a0: 0xc08a61a  jal         func_229868
label_23b1a4:
    if (ctx->pc == 0x23B1A4u) {
        ctx->pc = 0x23B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1A0u;
        // 0x23b1a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1A8u;
        goto label_23b1a8;
    }
    ctx->pc = 0x23B1A0u;
    SET_GPR_U32(ctx, 31, 0x23B1A8u);
    ctx->pc = 0x23B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B1A0u;
    // 0x23b1a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23B1A0u, 0x23B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1A8u;
label_23b1a8:
    // 0x23b1a8: 0x10400161  beqz        $v0, . + 4 + (0x161 << 2)
label_23b1ac:
    if (ctx->pc == 0x23B1ACu) {
        ctx->pc = 0x23B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1A8u;
        // 0x23b1ac: 0xafa204b0  sw          $v0, 0x4B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1B0u;
        goto label_23b1b0;
    }
    ctx->pc = 0x23B1A8u;
    {
        const bool branch_taken_0x23b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1A8u;
        // 0x23b1ac: 0xafa204b0  sw          $v0, 0x4B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1a8) {
            ctx->pc = 0x23B730u;
            goto label_23b730;
        }
    }
    ctx->pc = 0x23B1B0u;
label_23b1b0:
    // 0x23b1b0: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_23b1b4:
    // 0x23b1b4: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x23b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
label_23b1b8:
    // 0x23b1b8: 0x1062015e  beq         $v1, $v0, . + 4 + (0x15E << 2)
label_23b1bc:
    if (ctx->pc == 0x23B1BCu) {
        ctx->pc = 0x23B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1B8u;
        // 0x23b1bc: 0x7bb00560  lq          $s0, 0x560($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1C0u;
        goto label_23b1c0;
    }
    ctx->pc = 0x23B1B8u;
    {
        const bool branch_taken_0x23b1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1B8u;
        // 0x23b1bc: 0x7bb00560  lq          $s0, 0x560($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1b8) {
            ctx->pc = 0x23B734u;
            goto label_23b734;
        }
    }
    ctx->pc = 0x23B1C0u;
label_23b1c0:
    // 0x23b1c0: 0xc086618  jal         func_219860
label_23b1c4:
    if (ctx->pc == 0x23B1C4u) {
        ctx->pc = 0x23B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1C0u;
        // 0x23b1c4: 0x8fa404ac  lw          $a0, 0x4AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1C8u;
        goto label_23b1c8;
    }
    ctx->pc = 0x23B1C0u;
    SET_GPR_U32(ctx, 31, 0x23B1C8u);
    ctx->pc = 0x23B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B1C0u;
    // 0x23b1c4: 0x8fa404ac  lw          $a0, 0x4AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x23B1C0u, 0x23B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1C8u;
label_23b1c8:
    // 0x23b1c8: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_23b1cc:
    // 0x23b1cc: 0xc086618  jal         func_219860
label_23b1d0:
    if (ctx->pc == 0x23B1D0u) {
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1CCu;
        // 0x23b1d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1D4u;
        goto label_23b1d4;
    }
    ctx->pc = 0x23B1CCu;
    SET_GPR_U32(ctx, 31, 0x23B1D4u);
    ctx->pc = 0x23B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B1CCu;
    // 0x23b1d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x23B1CCu, 0x23B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1D4u;
label_23b1d4:
    // 0x23b1d4: 0x8fa204b0  lw          $v0, 0x4B0($sp)
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_23b1d8:
    // 0x23b1d8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x23b1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_23b1dc:
    // 0x23b1dc: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x23b1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_23b1e0:
    // 0x23b1e0: 0x4615a840  add.s       $f1, $f21, $f21
    ctx->pc = 0x23b1e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_23b1e4:
    // 0x23b1e4: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x23b1e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_23b1e8:
    // 0x23b1e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b1ec:
    // 0x23b1ec: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x23b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
label_23b1f0:
    // 0x23b1f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_23b1f4:
    // 0x23b1f4: 0x46010580  add.s       $f22, $f0, $f1
    ctx->pc = 0x23b1f4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23b1f8:
    // 0x23b1f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23b1fc:
    // 0x23b1fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x23b1fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23b200:
    // 0x23b200: 0xc091e56  jal         func_247958
label_23b204:
    if (ctx->pc == 0x23B204u) {
        ctx->pc = 0x23B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B200u;
        // 0x23b204: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B208u;
        goto label_23b208;
    }
    ctx->pc = 0x23B200u;
    SET_GPR_U32(ctx, 31, 0x23B208u);
    ctx->pc = 0x23B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B200u;
    // 0x23b204: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x23B200u, 0x23B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B208u;
label_23b208:
    // 0x23b208: 0xafa204b4  sw          $v0, 0x4B4($sp)
    ctx->pc = 0x23b208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 2));
label_23b20c:
    // 0x23b20c: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x23b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_23b210:
    // 0x23b210: 0x3c01414f  lui         $at, 0x414F
    ctx->pc = 0x23b210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16719 << 16));
label_23b214:
    // 0x23b214: 0x34215c28  ori         $at, $at, 0x5C28
    ctx->pc = 0x23b214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23592);
label_23b218:
    // 0x23b218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23b218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23b21c:
    // 0x23b21c: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x23b21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_23b220:
    // 0x23b220: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x23b220u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23b224:
    // 0x23b224: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23b224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_23b228:
    // 0x23b228: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x23b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_23b22c:
    // 0x23b22c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x23b22cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23b230:
    // 0x23b230: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23b230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23b234:
    // 0x23b234: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b238:
    // 0x23b238: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23b238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23b23c:
    // 0x23b23c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23b23cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23b240:
    // 0x23b240: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x23b240u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_23b244:
    // 0x23b244: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23b244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23b248:
    // 0x23b248: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x23b248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23b24c:
    // 0x23b24c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23b24cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23b250:
    // 0x23b250: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x23b250u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_23b254:
    // 0x23b254: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x23b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_23b258:
    // 0x23b258: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23b258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23b25c:
    // 0x23b25c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x23b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_23b260:
    // 0x23b260: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23b260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b264:
    // 0x23b264: 0x0  nop
    ctx->pc = 0x23b264u;
    // NOP
label_23b268:
    // 0x23b268: 0x45010131  bc1t        . + 4 + (0x131 << 2)
label_23b26c:
    if (ctx->pc == 0x23B26Cu) {
        ctx->pc = 0x23B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B268u;
        // 0x23b26c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B270u;
        goto label_23b270;
    }
    ctx->pc = 0x23B268u;
    {
        const bool branch_taken_0x23b268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B268u;
        // 0x23b26c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b268) {
            ctx->pc = 0x23B730u;
            goto label_23b730;
        }
    }
    ctx->pc = 0x23B270u;
label_23b270:
    // 0x23b270: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x23b270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
label_23b274:
    // 0x23b274: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x23b274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_23b278:
    // 0x23b278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23b278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23b27c:
    // 0x23b27c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x23b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_23b280:
    // 0x23b280: 0x8fa604b0  lw          $a2, 0x4B0($sp)
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_23b284:
    // 0x23b284: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x23b284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23b288:
    // 0x23b288: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x23b288u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_23b28c:
    // 0x23b28c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x23b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23b290:
    // 0x23b290: 0x460cab00  add.s       $f12, $f21, $f12
    ctx->pc = 0x23b290u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
label_23b294:
    // 0x23b294: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_23b298:
    // 0x23b298: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x23b298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_23b29c:
    // 0x23b29c: 0xc089d2a  jal         func_2274A8
label_23b2a0:
    if (ctx->pc == 0x23B2A0u) {
        ctx->pc = 0x23B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B29Cu;
        // 0x23b2a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2A4u;
        goto label_23b2a4;
    }
    ctx->pc = 0x23B29Cu;
    SET_GPR_U32(ctx, 31, 0x23B2A4u);
    ctx->pc = 0x23B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B29Cu;
    // 0x23b2a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x23B29Cu, 0x23B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2A4u;
label_23b2a4:
    // 0x23b2a4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x23b2a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b2a8:
    // 0x23b2a8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23b2ac:
    // 0x23b2ac: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x23b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_23b2b0:
    // 0x23b2b0: 0xafa304bc  sw          $v1, 0x4BC($sp)
    ctx->pc = 0x23b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1212), GPR_U32(ctx, 3));
label_23b2b4:
    // 0x23b2b4: 0xafa204c8  sw          $v0, 0x4C8($sp)
    ctx->pc = 0x23b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 2));
label_23b2b8:
    // 0x23b2b8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_23b2bc:
    // 0x23b2bc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x23b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23b2c0:
    // 0x23b2c0: 0xafa404c0  sw          $a0, 0x4C0($sp)
    ctx->pc = 0x23b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 4));
label_23b2c4:
    // 0x23b2c4: 0xafa204c4  sw          $v0, 0x4C4($sp)
    ctx->pc = 0x23b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 2));
label_23b2c8:
    // 0x23b2c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23b2cc:
    // 0x23b2cc: 0xafa004b8  sw          $zero, 0x4B8($sp)
    ctx->pc = 0x23b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 0));
label_23b2d0:
    // 0x23b2d0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x23b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_23b2d4:
    // 0x23b2d4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x23b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_23b2d8:
    // 0x23b2d8: 0x3051001f  andi        $s1, $v0, 0x1F
    ctx->pc = 0x23b2d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_23b2dc:
    // 0x23b2dc: 0x0  nop
    ctx->pc = 0x23b2dcu;
    // NOP
label_23b2e0:
    // 0x23b2e0: 0x8fa304bc  lw          $v1, 0x4BC($sp)
    ctx->pc = 0x23b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1212)));
label_23b2e4:
    // 0x23b2e4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23b2e8:
    // 0x23b2e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23b2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b2ec:
    // 0x23b2ec: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x23b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23b2f0:
    // 0x23b2f0: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x23b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_23b2f4:
    // 0x23b2f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b2f8:
    // 0x23b2f8: 0xe4580000  swc1        $f24, 0x0($v0)
    ctx->pc = 0x23b2f8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_23b2fc:
    // 0x23b2fc: 0x8fa204c0  lw          $v0, 0x4C0($sp)
    ctx->pc = 0x23b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_23b300:
    // 0x23b300: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23b300u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_23b304:
    // 0x23b304: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x23b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23b308:
    // 0x23b308: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_23b30c:
    if (ctx->pc == 0x23B30Cu) {
        ctx->pc = 0x23B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B308u;
        // 0x23b30c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B310u;
        goto label_23b310;
    }
    ctx->pc = 0x23B308u;
    {
        const bool branch_taken_0x23b308 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x23B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B308u;
        // 0x23b30c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b308) {
            ctx->pc = 0x23B324u;
            goto label_23b324;
        }
    }
    ctx->pc = 0x23B310u;
label_23b310:
    // 0x23b310: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x23b310u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23b314:
    // 0x23b314: 0x0  nop
    ctx->pc = 0x23b314u;
    // NOP
label_23b318:
    // 0x23b318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23b318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_23b31c:
    // 0x23b31c: 0x10000008  b           . + 4 + (0x8 << 2)
label_23b320:
    if (ctx->pc == 0x23B320u) {
        ctx->pc = 0x23B324u;
        goto label_23b324;
    }
    ctx->pc = 0x23B31Cu;
    {
        const bool branch_taken_0x23b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b31c) {
            ctx->pc = 0x23B340u;
            goto label_23b340;
        }
    }
    ctx->pc = 0x23B324u;
label_23b324:
    // 0x23b324: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x23b324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_23b328:
    // 0x23b328: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_23b32c:
    // 0x23b32c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23b330:
    // 0x23b330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23b330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23b334:
    // 0x23b334: 0x0  nop
    ctx->pc = 0x23b334u;
    // NOP
label_23b338:
    // 0x23b338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23b338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_23b33c:
    // 0x23b33c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23b33cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23b340:
    // 0x23b340: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x23b340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_23b344:
    // 0x23b344: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23b344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23b348:
    // 0x23b348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23b34c:
    // 0x23b34c: 0x8fa404c4  lw          $a0, 0x4C4($sp)
    ctx->pc = 0x23b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1220)));
label_23b350:
    // 0x23b350: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23b350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23b354:
    // 0x23b354: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x23b354u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_23b358:
    // 0x23b358: 0xc0cd790  jal         func_335E40
label_23b35c:
    if (ctx->pc == 0x23B35Cu) {
        ctx->pc = 0x23B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B358u;
        // 0x23b35c: 0xe7a004a8  swc1        $f0, 0x4A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B360u;
        goto label_23b360;
    }
    ctx->pc = 0x23B358u;
    SET_GPR_U32(ctx, 31, 0x23B360u);
    ctx->pc = 0x23B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B358u;
    // 0x23b35c: 0xe7a004a8  swc1        $f0, 0x4A8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x23B358u, 0x23B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B360u;
label_23b360:
    // 0x23b360: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x23b360u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23b364:
    // 0x23b364: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x23b364u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_23b368:
    // 0x23b368: 0x4402c000  mfc1        $v0, $f24
    ctx->pc = 0x23b368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_23b36c:
    // 0x23b36c: 0xbd8021  addu        $s0, $a1, $sp
    ctx->pc = 0x23b36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_23b370:
    // 0x23b370: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x23b370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_23b374:
    // 0x23b374: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b378:
    // 0x23b378: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23b378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23b37c:
    // 0x23b37c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x23b37cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_23b380:
    // 0x23b380: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x23b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_23b384:
    // 0x23b384: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23b384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23b388:
    // 0x23b388: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23b388u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b38c:
    // 0x23b38c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b38cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b390:
    // 0x23b390: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23b390u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23b394:
    // 0x23b394: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23b394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23b398:
    // 0x23b398: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23b398u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23b39c:
    // 0x23b39c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x23b39cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_23b3a0:
    // 0x23b3a0: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x23b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_23b3a4:
    // 0x23b3a4: 0x7fa30400  sq          $v1, 0x400($sp)
    ctx->pc = 0x23b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 3));
label_23b3a8:
    // 0x23b3a8: 0x7fa303f0  sq          $v1, 0x3F0($sp)
    ctx->pc = 0x23b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 3));
label_23b3ac:
    // 0x23b3ac: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x23b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_23b3b0:
    // 0x23b3b0: 0x7fa20400  sq          $v0, 0x400($sp)
    ctx->pc = 0x23b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
label_23b3b4:
    // 0x23b3b4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x23b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_23b3b8:
    // 0x23b3b8: 0x7e0201f0  sq          $v0, 0x1F0($s0)
    ctx->pc = 0x23b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
label_23b3bc:
    // 0x23b3bc: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x23b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
label_23b3c0:
    // 0x23b3c0: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_23b3c4:
    if (ctx->pc == 0x23B3C4u) {
        ctx->pc = 0x23B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3C0u;
        // 0x23b3c4: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3C8u;
        goto label_23b3c8;
    }
    ctx->pc = 0x23B3C0u;
    {
        const bool branch_taken_0x23b3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3C0u;
        // 0x23b3c4: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3c0) {
            ctx->pc = 0x23B474u;
            goto label_23b474;
        }
    }
    ctx->pc = 0x23B3C8u;
label_23b3c8:
    // 0x23b3c8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23b3cc:
    // 0x23b3cc: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x23b3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_23b3d0:
    // 0x23b3d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23b3d4:
    // 0x23b3d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23b3d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b3d8:
    // 0x23b3d8: 0xc093dc6  jal         func_24F718
label_23b3dc:
    if (ctx->pc == 0x23B3DCu) {
        ctx->pc = 0x23B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3D8u;
        // 0x23b3dc: 0x27a804a8  addiu       $t0, $sp, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3E0u;
        goto label_23b3e0;
    }
    ctx->pc = 0x23B3D8u;
    SET_GPR_U32(ctx, 31, 0x23B3E0u);
    ctx->pc = 0x23B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B3D8u;
    // 0x23b3dc: 0x27a804a8  addiu       $t0, $sp, 0x4A8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F718u, 0x23B3D8u, 0x23B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3E0u;
label_23b3e0:
    // 0x23b3e0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_23b3e4:
    if (ctx->pc == 0x23B3E4u) {
        ctx->pc = 0x23B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3E0u;
        // 0x23b3e4: 0x8fa404bc  lw          $a0, 0x4BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3E8u;
        goto label_23b3e8;
    }
    ctx->pc = 0x23B3E0u;
    {
        const bool branch_taken_0x23b3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3E0u;
        // 0x23b3e4: 0x8fa404bc  lw          $a0, 0x4BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3e0) {
            ctx->pc = 0x23B478u;
            goto label_23b478;
        }
    }
    ctx->pc = 0x23B3E8u;
label_23b3e8:
    // 0x23b3e8: 0xc7a004a8  lwc1        $f0, 0x4A8($sp)
    ctx->pc = 0x23b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b3ec:
    // 0x23b3ec: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x23b3ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_23b3f0:
    // 0x23b3f0: 0x8fa404c8  lw          $a0, 0x4C8($sp)
    ctx->pc = 0x23b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_23b3f4:
    // 0x23b3f4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x23b3f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_23b3f8:
    // 0x23b3f8: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_23b3fc:
    // 0x23b3fc: 0xe7a004a8  swc1        $f0, 0x4A8($sp)
    ctx->pc = 0x23b3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1192), bits); }
label_23b400:
    // 0x23b400: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x23b400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_23b404:
    // 0x23b404: 0xc7a004a8  lwc1        $f0, 0x4A8($sp)
    ctx->pc = 0x23b404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b408:
    // 0x23b408: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23b408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b40c:
    // 0x23b40c: 0x0  nop
    ctx->pc = 0x23b40cu;
    // NOP
label_23b410:
    // 0x23b410: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23b414:
    if (ctx->pc == 0x23B414u) {
        ctx->pc = 0x23B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B410u;
        // 0x23b414: 0x8fa204bc  lw          $v0, 0x4BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B418u;
        goto label_23b418;
    }
    ctx->pc = 0x23B410u;
    {
        const bool branch_taken_0x23b410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B410u;
        // 0x23b414: 0x8fa204bc  lw          $v0, 0x4BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b410) {
            ctx->pc = 0x23B428u;
            goto label_23b428;
        }
    }
    ctx->pc = 0x23B418u;
label_23b418:
    // 0x23b418: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x23b418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23b41c:
    // 0x23b41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b420:
    // 0x23b420: 0x10000014  b           . + 4 + (0x14 << 2)
label_23b424:
    if (ctx->pc == 0x23B424u) {
        ctx->pc = 0x23B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B420u;
        // 0x23b424: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B428u;
        goto label_23b428;
    }
    ctx->pc = 0x23B420u;
    {
        const bool branch_taken_0x23b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B420u;
        // 0x23b424: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b420) {
            ctx->pc = 0x23B474u;
            goto label_23b474;
        }
    }
    ctx->pc = 0x23B428u;
label_23b428:
    // 0x23b428: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23b428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23b42c:
    // 0x23b42c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23b42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_23b430:
    // 0x23b430: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b434:
    // 0x23b434: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23b434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23b438:
    // 0x23b438: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23b438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23b43c:
    // 0x23b43c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23b43cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_23b440:
    // 0x23b440: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x23b440u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23b444:
    // 0x23b444: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23b444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23b448:
    // 0x23b448: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b448u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b44c:
    // 0x23b44c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23b44cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23b450:
    // 0x23b450: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23b450u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23b454:
    // 0x23b454: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x23b454u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_23b458:
    // 0x23b458: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x23b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_23b45c:
    // 0x23b45c: 0x7fa20400  sq          $v0, 0x400($sp)
    ctx->pc = 0x23b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
label_23b460:
    // 0x23b460: 0x7fa203f0  sq          $v0, 0x3F0($sp)
    ctx->pc = 0x23b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 2));
label_23b464:
    // 0x23b464: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x23b464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_23b468:
    // 0x23b468: 0x7fa30400  sq          $v1, 0x400($sp)
    ctx->pc = 0x23b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 3));
label_23b46c:
    // 0x23b46c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x23b46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_23b470:
    // 0x23b470: 0x7e0301f0  sq          $v1, 0x1F0($s0)
    ctx->pc = 0x23b470u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 3));
label_23b474:
    // 0x23b474: 0x8fa404bc  lw          $a0, 0x4BC($sp)
    ctx->pc = 0x23b474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1212)));
label_23b478:
    // 0x23b478: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x23b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_23b47c:
    // 0x23b47c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23b47cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23b480:
    // 0x23b480: 0x146000a5  bnez        $v1, . + 4 + (0xA5 << 2)
label_23b484:
    if (ctx->pc == 0x23B484u) {
        ctx->pc = 0x23B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B480u;
        // 0x23b484: 0x8fa404b8  lw          $a0, 0x4B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B488u;
        goto label_23b488;
    }
    ctx->pc = 0x23B480u;
    {
        const bool branch_taken_0x23b480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B480u;
        // 0x23b484: 0x8fa404b8  lw          $a0, 0x4B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b480) {
            ctx->pc = 0x23B718u;
            goto label_23b718;
        }
    }
    ctx->pc = 0x23B488u;
label_23b488:
    // 0x23b488: 0x12e00053  beqz        $s7, . + 4 + (0x53 << 2)
label_23b48c:
    if (ctx->pc == 0x23B48Cu) {
        ctx->pc = 0x23B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B488u;
        // 0x23b48c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B490u;
        goto label_23b490;
    }
    ctx->pc = 0x23B488u;
    {
        const bool branch_taken_0x23b488 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B488u;
        // 0x23b48c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b488) {
            ctx->pc = 0x23B5D8u;
            goto label_23b5d8;
        }
    }
    ctx->pc = 0x23B490u;
label_23b490:
    // 0x23b490: 0xc0e1a3e  jal         func_3868F8
label_23b494:
    if (ctx->pc == 0x23B494u) {
        ctx->pc = 0x23B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B490u;
        // 0x23b494: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B498u;
        goto label_23b498;
    }
    ctx->pc = 0x23B490u;
    SET_GPR_U32(ctx, 31, 0x23B498u);
    ctx->pc = 0x23B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B490u;
    // 0x23b494: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868F8u, 0x23B490u, 0x23B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B498u;
label_23b498:
    // 0x23b498: 0x12e0004f  beqz        $s7, . + 4 + (0x4F << 2)
label_23b49c:
    if (ctx->pc == 0x23B49Cu) {
        ctx->pc = 0x23B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B498u;
        // 0x23b49c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4A0u;
        goto label_23b4a0;
    }
    ctx->pc = 0x23B498u;
    {
        const bool branch_taken_0x23b498 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B498u;
        // 0x23b49c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b498) {
            ctx->pc = 0x23B5D8u;
            goto label_23b5d8;
        }
    }
    ctx->pc = 0x23B4A0u;
label_23b4a0:
    // 0x23b4a0: 0x8fa204c0  lw          $v0, 0x4C0($sp)
    ctx->pc = 0x23b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_23b4a4:
    // 0x23b4a4: 0x2bd9821  addu        $s3, $s5, $sp
    ctx->pc = 0x23b4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_23b4a8:
    // 0x23b4a8: 0x267301f0  addiu       $s3, $s3, 0x1F0
    ctx->pc = 0x23b4a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 496));
label_23b4ac:
    // 0x23b4ac: 0x2bdb021  addu        $s6, $s5, $sp
    ctx->pc = 0x23b4acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_23b4b0:
    // 0x23b4b0: 0x51f021  addu        $fp, $v0, $s1
    ctx->pc = 0x23b4b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23b4b4:
    // 0x23b4b4: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x23b4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_23b4b8:
    // 0x23b4b8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x23b4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23b4bc:
    // 0x23b4bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x23b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_23b4c0:
    // 0x23b4c0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x23b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_23b4c4:
    // 0x23b4c4: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x23b4c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_23b4c8:
    // 0x23b4c8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_23b4cc:
    // 0x23b4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b4d0:
    // 0x23b4d0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_23b4d4:
    // 0x23b4d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b4d8:
    // 0x23b4d8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x23b4d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23b4dc:
    // 0x23b4dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b4dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b4e0:
    // 0x23b4e0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x23b4e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_23b4e4:
    // 0x23b4e4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23b4e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23b4e8:
    // 0x23b4e8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23b4e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23b4ec:
    // 0x23b4ec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x23b4ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_23b4f0:
    // 0x23b4f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b4f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b4f4:
    // 0x23b4f4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x23b4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23b4f8:
    // 0x23b4f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23b4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23b4fc:
    // 0x23b4fc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x23b4fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_23b500:
    // 0x23b500: 0x7fa20400  sq          $v0, 0x400($sp)
    ctx->pc = 0x23b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
label_23b504:
    // 0x23b504: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x23b504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23b508:
    // 0x23b508: 0x7fa203f0  sq          $v0, 0x3F0($sp)
    ctx->pc = 0x23b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 2));
label_23b50c:
    // 0x23b50c: 0xc086618  jal         func_219860
label_23b510:
    if (ctx->pc == 0x23B510u) {
        ctx->pc = 0x23B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B50Cu;
        // 0x23b510: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B514u;
        goto label_23b514;
    }
    ctx->pc = 0x23B50Cu;
    SET_GPR_U32(ctx, 31, 0x23B514u);
    ctx->pc = 0x23B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B50Cu;
    // 0x23b510: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x23B50Cu, 0x23B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B514u;
label_23b514:
    // 0x23b514: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x23b514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_23b518:
    // 0x23b518: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23b518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b51c:
    // 0x23b51c: 0x0  nop
    ctx->pc = 0x23b51cu;
    // NOP
label_23b520:
    // 0x23b520: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_23b524:
    if (ctx->pc == 0x23B524u) {
        ctx->pc = 0x23B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B520u;
        // 0x23b524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B528u;
        goto label_23b528;
    }
    ctx->pc = 0x23B520u;
    {
        const bool branch_taken_0x23b520 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B520u;
        // 0x23b524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b520) {
            ctx->pc = 0x23B52Cu;
            goto label_23b52c;
        }
    }
    ctx->pc = 0x23B528u;
label_23b528:
    // 0x23b528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b52c:
    // 0x23b52c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_23b530:
    if (ctx->pc == 0x23B530u) {
        ctx->pc = 0x23B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B52Cu;
        // 0x23b530: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B534u;
        goto label_23b534;
    }
    ctx->pc = 0x23B52Cu;
    {
        const bool branch_taken_0x23b52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b52c) {
            ctx->pc = 0x23B530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B52Cu;
            // 0x23b530: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B5CCu;
            goto label_23b5cc;
        }
    }
    ctx->pc = 0x23B534u;
label_23b534:
    // 0x23b534: 0xc086618  jal         func_219860
label_23b538:
    if (ctx->pc == 0x23B538u) {
        ctx->pc = 0x23B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B534u;
        // 0x23b538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B53Cu;
        goto label_23b53c;
    }
    ctx->pc = 0x23B534u;
    SET_GPR_U32(ctx, 31, 0x23B53Cu);
    ctx->pc = 0x23B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B534u;
    // 0x23b538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x23B534u, 0x23B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B53Cu;
label_23b53c:
    // 0x23b53c: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x23b53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_23b540:
    // 0x23b540: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x23b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b544:
    // 0x23b544: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x23b544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_23b548:
    // 0x23b548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b54c:
    // 0x23b54c: 0x0  nop
    ctx->pc = 0x23b54cu;
    // NOP
label_23b550:
    // 0x23b550: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_23b554:
    if (ctx->pc == 0x23B554u) {
        ctx->pc = 0x23B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B550u;
        // 0x23b554: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B558u;
        goto label_23b558;
    }
    ctx->pc = 0x23B550u;
    {
        const bool branch_taken_0x23b550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B550u;
        // 0x23b554: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b550) {
            ctx->pc = 0x23B560u;
            goto label_23b560;
        }
    }
    ctx->pc = 0x23B558u;
label_23b558:
    // 0x23b558: 0x1000001b  b           . + 4 + (0x1B << 2)
label_23b55c:
    if (ctx->pc == 0x23B55Cu) {
        ctx->pc = 0x23B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B558u;
        // 0x23b55c: 0xa3c40000  sb          $a0, 0x0($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B560u;
        goto label_23b560;
    }
    ctx->pc = 0x23B558u;
    {
        const bool branch_taken_0x23b558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B558u;
        // 0x23b55c: 0xa3c40000  sb          $a0, 0x0($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b558) {
            ctx->pc = 0x23B5C8u;
            goto label_23b5c8;
        }
    }
    ctx->pc = 0x23B560u;
label_23b560:
    // 0x23b560: 0x0  nop
    ctx->pc = 0x23b560u;
    // NOP
label_23b564:
    // 0x23b564: 0x0  nop
    ctx->pc = 0x23b564u;
    // NOP
label_23b568:
    // 0x23b568: 0x46010504  c1          0x10504
    ctx->pc = 0x23b568u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_23b56c:
    // 0x23b56c: 0xc086618  jal         func_219860
label_23b570:
    if (ctx->pc == 0x23B570u) {
        ctx->pc = 0x23B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B56Cu;
        // 0x23b570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B574u;
        goto label_23b574;
    }
    ctx->pc = 0x23B56Cu;
    SET_GPR_U32(ctx, 31, 0x23B574u);
    ctx->pc = 0x23B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B56Cu;
    // 0x23b570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x23B56Cu, 0x23B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B574u;
label_23b574:
    // 0x23b574: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x23b574u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_23b578:
    // 0x23b578: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23b578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23b57c:
    // 0x23b57c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x23b57cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23b580:
    // 0x23b580: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x23b580u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_23b584:
    // 0x23b584: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x23b584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_23b588:
    // 0x23b588: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b58c:
    // 0x23b58c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x23b58cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_23b590:
    // 0x23b590: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23b590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23b594:
    // 0x23b594: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23b594u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_23b598:
    // 0x23b598: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23b598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23b59c:
    // 0x23b59c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b59cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b5a0:
    // 0x23b5a0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23b5a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23b5a4:
    // 0x23b5a4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23b5a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23b5a8:
    // 0x23b5a8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x23b5a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_23b5ac:
    // 0x23b5ac: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x23b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_23b5b0:
    // 0x23b5b0: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x23b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_23b5b4:
    // 0x23b5b4: 0x7fa20400  sq          $v0, 0x400($sp)
    ctx->pc = 0x23b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
label_23b5b8:
    // 0x23b5b8: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x23b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_23b5bc:
    // 0x23b5bc: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x23b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_23b5c0:
    // 0x23b5c0: 0x7fa303f0  sq          $v1, 0x3F0($sp)
    ctx->pc = 0x23b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 3));
label_23b5c4:
    // 0x23b5c4: 0x7ec301f0  sq          $v1, 0x1F0($s6)
    ctx->pc = 0x23b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 496), GPR_VEC(ctx, 3));
label_23b5c8:
    // 0x23b5c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23b5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23b5cc:
    // 0x23b5cc: 0x257102b  sltu        $v0, $s2, $s7
    ctx->pc = 0x23b5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_23b5d0:
    // 0x23b5d0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_23b5d4:
    if (ctx->pc == 0x23B5D4u) {
        ctx->pc = 0x23B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5D0u;
        // 0x23b5d4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5D8u;
        goto label_23b5d8;
    }
    ctx->pc = 0x23B5D0u;
    {
        const bool branch_taken_0x23b5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5D0u;
        // 0x23b5d4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5d0) {
            ctx->pc = 0x23B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b4b8;
        }
    }
    ctx->pc = 0x23B5D8u;
label_23b5d8:
    // 0x23b5d8: 0x8fa304c0  lw          $v1, 0x4C0($sp)
    ctx->pc = 0x23b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_23b5dc:
    // 0x23b5dc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x23b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23b5e0:
    // 0x23b5e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23b5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23b5e4:
    // 0x23b5e4: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_23b5e8:
    if (ctx->pc == 0x23B5E8u) {
        ctx->pc = 0x23B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5E4u;
        // 0x23b5e8: 0x8fa404b8  lw          $a0, 0x4B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5ECu;
        goto label_23b5ec;
    }
    ctx->pc = 0x23B5E4u;
    {
        const bool branch_taken_0x23b5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5E4u;
        // 0x23b5e8: 0x8fa404b8  lw          $a0, 0x4B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5e4) {
            ctx->pc = 0x23B718u;
            goto label_23b718;
        }
    }
    ctx->pc = 0x23B5ECu;
label_23b5ec:
    // 0x23b5ec: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x23b5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_23b5f0:
    // 0x23b5f0: 0x8e4247c4  lw          $v0, 0x47C4($s2)
    ctx->pc = 0x23b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
label_23b5f4:
    // 0x23b5f4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_23b5f8:
    if (ctx->pc == 0x23B5F8u) {
        ctx->pc = 0x23B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5F4u;
        // 0x23b5f8: 0x27b003f0  addiu       $s0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5FCu;
        goto label_23b5fc;
    }
    ctx->pc = 0x23B5F4u;
    {
        const bool branch_taken_0x23b5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5F4u;
        // 0x23b5f8: 0x27b003f0  addiu       $s0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5f4) {
            ctx->pc = 0x23B6C4u;
            goto label_23b6c4;
        }
    }
    ctx->pc = 0x23B5FCu;
label_23b5fc:
    // 0x23b5fc: 0x2bd8821  addu        $s1, $s5, $sp
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_23b600:
    // 0x23b600: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_23b604:
    // 0x23b604: 0x7a2201f0  lq          $v0, 0x1F0($s1)
    ctx->pc = 0x23b604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
label_23b608:
    // 0x23b608: 0xc086624  jal         func_219890
label_23b60c:
    if (ctx->pc == 0x23B60Cu) {
        ctx->pc = 0x23B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B608u;
        // 0x23b60c: 0x7fa203f0  sq          $v0, 0x3F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B610u;
        goto label_23b610;
    }
    ctx->pc = 0x23B608u;
    SET_GPR_U32(ctx, 31, 0x23B610u);
    ctx->pc = 0x23B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B608u;
    // 0x23b60c: 0x7fa203f0  sq          $v0, 0x3F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x23B608u, 0x23B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B610u;
label_23b610:
    // 0x23b610: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x23b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b614:
    // 0x23b614: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23b618:
    // 0x23b618: 0x24531770  addiu       $s3, $v0, 0x1770
    ctx->pc = 0x23b618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_23b61c:
    // 0x23b61c: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x23b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_23b620:
    // 0x23b620: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23b620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23b624:
    // 0x23b624: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x23b624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_23b628:
    // 0x23b628: 0x7fa20400  sq          $v0, 0x400($sp)
    ctx->pc = 0x23b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
label_23b62c:
    // 0x23b62c: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x23b62cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_23b630:
    // 0x23b630: 0xc086624  jal         func_219890
label_23b634:
    if (ctx->pc == 0x23B634u) {
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B630u;
        // 0x23b634: 0xe7a103f8  swc1        $f1, 0x3F8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B638u;
        goto label_23b638;
    }
    ctx->pc = 0x23B630u;
    SET_GPR_U32(ctx, 31, 0x23B638u);
    ctx->pc = 0x23B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B630u;
    // 0x23b634: 0xe7a103f8  swc1        $f1, 0x3F8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x23B630u, 0x23B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B638u;
label_23b638:
    // 0x23b638: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x23b638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_23b63c:
    // 0x23b63c: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
label_23b640:
    // 0x23b640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b644:
    // 0x23b644: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_23b648:
    // 0x23b648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23b648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b64c:
    // 0x23b64c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23b64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b650:
    // 0x23b650: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x23b650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_23b654:
    // 0x23b654: 0xc1036e2  jal         func_40DB88
label_23b658:
    if (ctx->pc == 0x23B658u) {
        ctx->pc = 0x23B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B654u;
        // 0x23b658: 0xe7a00410  swc1        $f0, 0x410($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B65Cu;
        goto label_23b65c;
    }
    ctx->pc = 0x23B654u;
    SET_GPR_U32(ctx, 31, 0x23B65Cu);
    ctx->pc = 0x23B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B654u;
    // 0x23b658: 0xe7a00410  swc1        $f0, 0x410($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x23B654u, 0x23B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B65Cu;
label_23b65c:
    // 0x23b65c: 0x8fa20450  lw          $v0, 0x450($sp)
    ctx->pc = 0x23b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_23b660:
    // 0x23b660: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23b664:
    if (ctx->pc == 0x23B664u) {
        ctx->pc = 0x23B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B660u;
        // 0x23b664: 0xc7a00454  lwc1        $f0, 0x454($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B668u;
        goto label_23b668;
    }
    ctx->pc = 0x23B660u;
    {
        const bool branch_taken_0x23b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B660u;
        // 0x23b664: 0xc7a00454  lwc1        $f0, 0x454($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b660) {
            ctx->pc = 0x23B6C4u;
            goto label_23b6c4;
        }
    }
    ctx->pc = 0x23B668u;
label_23b668:
    // 0x23b668: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_23b66c:
    // 0x23b66c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x23b66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_23b670:
    // 0x23b670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23b670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23b674:
    // 0x23b674: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x23b674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_23b678:
    // 0x23b678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23b678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_23b67c:
    // 0x23b67c: 0x7ba303f0  lq          $v1, 0x3F0($sp)
    ctx->pc = 0x23b67cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_23b680:
    // 0x23b680: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x23b680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_23b684:
    // 0x23b684: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b688:
    // 0x23b688: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x23b688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_23b68c:
    // 0x23b68c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23b68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23b690:
    // 0x23b690: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23b690u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_23b694:
    // 0x23b694: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23b694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23b698:
    // 0x23b698: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b698u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23b69c:
    // 0x23b69c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23b69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23b6a0:
    // 0x23b6a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23b6a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23b6a4:
    // 0x23b6a4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x23b6a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_23b6a8:
    // 0x23b6a8: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x23b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_23b6ac:
    // 0x23b6ac: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x23b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_23b6b0:
    // 0x23b6b0: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x23b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_23b6b4:
    // 0x23b6b4: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x23b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
label_23b6b8:
    // 0x23b6b8: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x23b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_23b6bc:
    // 0x23b6bc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x23b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_23b6c0:
    // 0x23b6c0: 0x7e2301f0  sq          $v1, 0x1F0($s1)
    ctx->pc = 0x23b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 496), GPR_VEC(ctx, 3));
label_23b6c4:
    // 0x23b6c4: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x23b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_23b6c8:
    // 0x23b6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b6cc:
    // 0x23b6cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b6d0:
    // 0x23b6d0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x23b6d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_23b6d4:
    // 0x23b6d4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_23b6d8:
    // 0x23b6d8: 0x8fa204ac  lw          $v0, 0x4AC($sp)
    ctx->pc = 0x23b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_23b6dc:
    // 0x23b6dc: 0x60f809  jalr        $v1
label_23b6e0:
    if (ctx->pc == 0x23B6E0u) {
        ctx->pc = 0x23B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6DCu;
        // 0x23b6e0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6E4u;
        goto label_23b6e4;
    }
    ctx->pc = 0x23B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23B6E4u);
        ctx->pc = 0x23B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6DCu;
        // 0x23b6e0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B6DCu, 0x23B6E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B6E4u;
label_23b6e4:
    // 0x23b6e4: 0x2bd2021  addu        $a0, $s5, $sp
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_23b6e8:
    // 0x23b6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b6ec:
    // 0x23b6ec: 0x788201f0  lq          $v0, 0x1F0($a0)
    ctx->pc = 0x23b6ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 496)));
label_23b6f0:
    // 0x23b6f0: 0x8fa404ac  lw          $a0, 0x4AC($sp)
    ctx->pc = 0x23b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_23b6f4:
    // 0x23b6f4: 0x7fa203f0  sq          $v0, 0x3F0($sp)
    ctx->pc = 0x23b6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 2));
label_23b6f8:
    // 0x23b6f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b6fc:
    // 0x23b6fc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x23b6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_23b700:
    // 0x23b700: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x23b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_23b704:
    // 0x23b704: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_23b708:
    // 0x23b708: 0x40f809  jalr        $v0
label_23b70c:
    if (ctx->pc == 0x23B70Cu) {
        ctx->pc = 0x23B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B708u;
        // 0x23b70c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B710u;
        goto label_23b710;
    }
    ctx->pc = 0x23B708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B710u);
        ctx->pc = 0x23B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B708u;
        // 0x23b70c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B708u, 0x23B710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B710u;
label_23b710:
    // 0x23b710: 0x10000008  b           . + 4 + (0x8 << 2)
label_23b714:
    if (ctx->pc == 0x23B714u) {
        ctx->pc = 0x23B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B710u;
        // 0x23b714: 0x7bb00560  lq          $s0, 0x560($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B718u;
        goto label_23b718;
    }
    ctx->pc = 0x23B710u;
    {
        const bool branch_taken_0x23b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B710u;
        // 0x23b714: 0x7bb00560  lq          $s0, 0x560($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b710) {
            ctx->pc = 0x23B734u;
            goto label_23b734;
        }
    }
    ctx->pc = 0x23B718u;
label_23b718:
    // 0x23b718: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23b71c:
    // 0x23b71c: 0x3071001f  andi        $s1, $v1, 0x1F
    ctx->pc = 0x23b71cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_23b720:
    // 0x23b720: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23b724:
    // 0x23b724: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x23b724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23b728:
    // 0x23b728: 0x1440feed  bnez        $v0, . + 4 + (-0x113 << 2)
label_23b72c:
    if (ctx->pc == 0x23B72Cu) {
        ctx->pc = 0x23B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B728u;
        // 0x23b72c: 0xafa404b8  sw          $a0, 0x4B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B730u;
        goto label_23b730;
    }
    ctx->pc = 0x23B728u;
    {
        const bool branch_taken_0x23b728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B728u;
        // 0x23b72c: 0xafa404b8  sw          $a0, 0x4B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b728) {
            ctx->pc = 0x23B2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b2e0;
        }
    }
    ctx->pc = 0x23B730u;
label_23b730:
    // 0x23b730: 0x7bb00560  lq          $s0, 0x560($sp)
    ctx->pc = 0x23b730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_23b734:
    // 0x23b734: 0x7bb10550  lq          $s1, 0x550($sp)
    ctx->pc = 0x23b734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_23b738:
    // 0x23b738: 0x7bb20540  lq          $s2, 0x540($sp)
    ctx->pc = 0x23b738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_23b73c:
    // 0x23b73c: 0x7bb30530  lq          $s3, 0x530($sp)
    ctx->pc = 0x23b73cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_23b740:
    // 0x23b740: 0x7bb40520  lq          $s4, 0x520($sp)
    ctx->pc = 0x23b740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_23b744:
    // 0x23b744: 0x7bb50510  lq          $s5, 0x510($sp)
    ctx->pc = 0x23b744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_23b748:
    // 0x23b748: 0x7bb60500  lq          $s6, 0x500($sp)
    ctx->pc = 0x23b748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_23b74c:
    // 0x23b74c: 0x7bb704f0  lq          $s7, 0x4F0($sp)
    ctx->pc = 0x23b74cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_23b750:
    // 0x23b750: 0x7bbe04e0  lq          $fp, 0x4E0($sp)
    ctx->pc = 0x23b750u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_23b754:
    // 0x23b754: 0xdfbf04d0  ld          $ra, 0x4D0($sp)
    ctx->pc = 0x23b754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
label_23b758:
    // 0x23b758: 0xc7b80590  lwc1        $f24, 0x590($sp)
    ctx->pc = 0x23b758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_23b75c:
    // 0x23b75c: 0xc7b70588  lwc1        $f23, 0x588($sp)
    ctx->pc = 0x23b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_23b760:
    // 0x23b760: 0xc7b60580  lwc1        $f22, 0x580($sp)
    ctx->pc = 0x23b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_23b764:
    // 0x23b764: 0xc7b50578  lwc1        $f21, 0x578($sp)
    ctx->pc = 0x23b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_23b768:
    // 0x23b768: 0xc7b40570  lwc1        $f20, 0x570($sp)
    ctx->pc = 0x23b768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23b76c:
    // 0x23b76c: 0x3e00008  jr          $ra
label_23b770:
    if (ctx->pc == 0x23B770u) {
        ctx->pc = 0x23B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B76Cu;
        // 0x23b770: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B774u;
        goto label_23b774;
    }
    ctx->pc = 0x23B76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B76Cu;
        // 0x23b770: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B774u;
label_23b774:
    // 0x23b774: 0x0  nop
    ctx->pc = 0x23b774u;
    // NOP
    ctx->pc = 0x23b778u;
}
