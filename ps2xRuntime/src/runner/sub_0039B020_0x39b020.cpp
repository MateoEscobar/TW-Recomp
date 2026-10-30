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

// Function: sub_0039B020
// Address: 0x39b020 - 0x39b6b8
void sub_0039B020_0x39b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B020_0x39b020");
#endif

    switch (ctx->pc) {
        case 0x39b020u: goto label_39b020;
        case 0x39b024u: goto label_39b024;
        case 0x39b028u: goto label_39b028;
        case 0x39b02cu: goto label_39b02c;
        case 0x39b030u: goto label_39b030;
        case 0x39b034u: goto label_39b034;
        case 0x39b038u: goto label_39b038;
        case 0x39b03cu: goto label_39b03c;
        case 0x39b040u: goto label_39b040;
        case 0x39b044u: goto label_39b044;
        case 0x39b048u: goto label_39b048;
        case 0x39b04cu: goto label_39b04c;
        case 0x39b050u: goto label_39b050;
        case 0x39b054u: goto label_39b054;
        case 0x39b058u: goto label_39b058;
        case 0x39b05cu: goto label_39b05c;
        case 0x39b060u: goto label_39b060;
        case 0x39b064u: goto label_39b064;
        case 0x39b068u: goto label_39b068;
        case 0x39b06cu: goto label_39b06c;
        case 0x39b070u: goto label_39b070;
        case 0x39b074u: goto label_39b074;
        case 0x39b078u: goto label_39b078;
        case 0x39b07cu: goto label_39b07c;
        case 0x39b080u: goto label_39b080;
        case 0x39b084u: goto label_39b084;
        case 0x39b088u: goto label_39b088;
        case 0x39b08cu: goto label_39b08c;
        case 0x39b090u: goto label_39b090;
        case 0x39b094u: goto label_39b094;
        case 0x39b098u: goto label_39b098;
        case 0x39b09cu: goto label_39b09c;
        case 0x39b0a0u: goto label_39b0a0;
        case 0x39b0a4u: goto label_39b0a4;
        case 0x39b0a8u: goto label_39b0a8;
        case 0x39b0acu: goto label_39b0ac;
        case 0x39b0b0u: goto label_39b0b0;
        case 0x39b0b4u: goto label_39b0b4;
        case 0x39b0b8u: goto label_39b0b8;
        case 0x39b0bcu: goto label_39b0bc;
        case 0x39b0c0u: goto label_39b0c0;
        case 0x39b0c4u: goto label_39b0c4;
        case 0x39b0c8u: goto label_39b0c8;
        case 0x39b0ccu: goto label_39b0cc;
        case 0x39b0d0u: goto label_39b0d0;
        case 0x39b0d4u: goto label_39b0d4;
        case 0x39b0d8u: goto label_39b0d8;
        case 0x39b0dcu: goto label_39b0dc;
        case 0x39b0e0u: goto label_39b0e0;
        case 0x39b0e4u: goto label_39b0e4;
        case 0x39b0e8u: goto label_39b0e8;
        case 0x39b0ecu: goto label_39b0ec;
        case 0x39b0f0u: goto label_39b0f0;
        case 0x39b0f4u: goto label_39b0f4;
        case 0x39b0f8u: goto label_39b0f8;
        case 0x39b0fcu: goto label_39b0fc;
        case 0x39b100u: goto label_39b100;
        case 0x39b104u: goto label_39b104;
        case 0x39b108u: goto label_39b108;
        case 0x39b10cu: goto label_39b10c;
        case 0x39b110u: goto label_39b110;
        case 0x39b114u: goto label_39b114;
        case 0x39b118u: goto label_39b118;
        case 0x39b11cu: goto label_39b11c;
        case 0x39b120u: goto label_39b120;
        case 0x39b124u: goto label_39b124;
        case 0x39b128u: goto label_39b128;
        case 0x39b12cu: goto label_39b12c;
        case 0x39b130u: goto label_39b130;
        case 0x39b134u: goto label_39b134;
        case 0x39b138u: goto label_39b138;
        case 0x39b13cu: goto label_39b13c;
        case 0x39b140u: goto label_39b140;
        case 0x39b144u: goto label_39b144;
        case 0x39b148u: goto label_39b148;
        case 0x39b14cu: goto label_39b14c;
        case 0x39b150u: goto label_39b150;
        case 0x39b154u: goto label_39b154;
        case 0x39b158u: goto label_39b158;
        case 0x39b15cu: goto label_39b15c;
        case 0x39b160u: goto label_39b160;
        case 0x39b164u: goto label_39b164;
        case 0x39b168u: goto label_39b168;
        case 0x39b16cu: goto label_39b16c;
        case 0x39b170u: goto label_39b170;
        case 0x39b174u: goto label_39b174;
        case 0x39b178u: goto label_39b178;
        case 0x39b17cu: goto label_39b17c;
        case 0x39b180u: goto label_39b180;
        case 0x39b184u: goto label_39b184;
        case 0x39b188u: goto label_39b188;
        case 0x39b18cu: goto label_39b18c;
        case 0x39b190u: goto label_39b190;
        case 0x39b194u: goto label_39b194;
        case 0x39b198u: goto label_39b198;
        case 0x39b19cu: goto label_39b19c;
        case 0x39b1a0u: goto label_39b1a0;
        case 0x39b1a4u: goto label_39b1a4;
        case 0x39b1a8u: goto label_39b1a8;
        case 0x39b1acu: goto label_39b1ac;
        case 0x39b1b0u: goto label_39b1b0;
        case 0x39b1b4u: goto label_39b1b4;
        case 0x39b1b8u: goto label_39b1b8;
        case 0x39b1bcu: goto label_39b1bc;
        case 0x39b1c0u: goto label_39b1c0;
        case 0x39b1c4u: goto label_39b1c4;
        case 0x39b1c8u: goto label_39b1c8;
        case 0x39b1ccu: goto label_39b1cc;
        case 0x39b1d0u: goto label_39b1d0;
        case 0x39b1d4u: goto label_39b1d4;
        case 0x39b1d8u: goto label_39b1d8;
        case 0x39b1dcu: goto label_39b1dc;
        case 0x39b1e0u: goto label_39b1e0;
        case 0x39b1e4u: goto label_39b1e4;
        case 0x39b1e8u: goto label_39b1e8;
        case 0x39b1ecu: goto label_39b1ec;
        case 0x39b1f0u: goto label_39b1f0;
        case 0x39b1f4u: goto label_39b1f4;
        case 0x39b1f8u: goto label_39b1f8;
        case 0x39b1fcu: goto label_39b1fc;
        case 0x39b200u: goto label_39b200;
        case 0x39b204u: goto label_39b204;
        case 0x39b208u: goto label_39b208;
        case 0x39b20cu: goto label_39b20c;
        case 0x39b210u: goto label_39b210;
        case 0x39b214u: goto label_39b214;
        case 0x39b218u: goto label_39b218;
        case 0x39b21cu: goto label_39b21c;
        case 0x39b220u: goto label_39b220;
        case 0x39b224u: goto label_39b224;
        case 0x39b228u: goto label_39b228;
        case 0x39b22cu: goto label_39b22c;
        case 0x39b230u: goto label_39b230;
        case 0x39b234u: goto label_39b234;
        case 0x39b238u: goto label_39b238;
        case 0x39b23cu: goto label_39b23c;
        case 0x39b240u: goto label_39b240;
        case 0x39b244u: goto label_39b244;
        case 0x39b248u: goto label_39b248;
        case 0x39b24cu: goto label_39b24c;
        case 0x39b250u: goto label_39b250;
        case 0x39b254u: goto label_39b254;
        case 0x39b258u: goto label_39b258;
        case 0x39b25cu: goto label_39b25c;
        case 0x39b260u: goto label_39b260;
        case 0x39b264u: goto label_39b264;
        case 0x39b268u: goto label_39b268;
        case 0x39b26cu: goto label_39b26c;
        case 0x39b270u: goto label_39b270;
        case 0x39b274u: goto label_39b274;
        case 0x39b278u: goto label_39b278;
        case 0x39b27cu: goto label_39b27c;
        case 0x39b280u: goto label_39b280;
        case 0x39b284u: goto label_39b284;
        case 0x39b288u: goto label_39b288;
        case 0x39b28cu: goto label_39b28c;
        case 0x39b290u: goto label_39b290;
        case 0x39b294u: goto label_39b294;
        case 0x39b298u: goto label_39b298;
        case 0x39b29cu: goto label_39b29c;
        case 0x39b2a0u: goto label_39b2a0;
        case 0x39b2a4u: goto label_39b2a4;
        case 0x39b2a8u: goto label_39b2a8;
        case 0x39b2acu: goto label_39b2ac;
        case 0x39b2b0u: goto label_39b2b0;
        case 0x39b2b4u: goto label_39b2b4;
        case 0x39b2b8u: goto label_39b2b8;
        case 0x39b2bcu: goto label_39b2bc;
        case 0x39b2c0u: goto label_39b2c0;
        case 0x39b2c4u: goto label_39b2c4;
        case 0x39b2c8u: goto label_39b2c8;
        case 0x39b2ccu: goto label_39b2cc;
        case 0x39b2d0u: goto label_39b2d0;
        case 0x39b2d4u: goto label_39b2d4;
        case 0x39b2d8u: goto label_39b2d8;
        case 0x39b2dcu: goto label_39b2dc;
        case 0x39b2e0u: goto label_39b2e0;
        case 0x39b2e4u: goto label_39b2e4;
        case 0x39b2e8u: goto label_39b2e8;
        case 0x39b2ecu: goto label_39b2ec;
        case 0x39b2f0u: goto label_39b2f0;
        case 0x39b2f4u: goto label_39b2f4;
        case 0x39b2f8u: goto label_39b2f8;
        case 0x39b2fcu: goto label_39b2fc;
        case 0x39b300u: goto label_39b300;
        case 0x39b304u: goto label_39b304;
        case 0x39b308u: goto label_39b308;
        case 0x39b30cu: goto label_39b30c;
        case 0x39b310u: goto label_39b310;
        case 0x39b314u: goto label_39b314;
        case 0x39b318u: goto label_39b318;
        case 0x39b31cu: goto label_39b31c;
        case 0x39b320u: goto label_39b320;
        case 0x39b324u: goto label_39b324;
        case 0x39b328u: goto label_39b328;
        case 0x39b32cu: goto label_39b32c;
        case 0x39b330u: goto label_39b330;
        case 0x39b334u: goto label_39b334;
        case 0x39b338u: goto label_39b338;
        case 0x39b33cu: goto label_39b33c;
        case 0x39b340u: goto label_39b340;
        case 0x39b344u: goto label_39b344;
        case 0x39b348u: goto label_39b348;
        case 0x39b34cu: goto label_39b34c;
        case 0x39b350u: goto label_39b350;
        case 0x39b354u: goto label_39b354;
        case 0x39b358u: goto label_39b358;
        case 0x39b35cu: goto label_39b35c;
        case 0x39b360u: goto label_39b360;
        case 0x39b364u: goto label_39b364;
        case 0x39b368u: goto label_39b368;
        case 0x39b36cu: goto label_39b36c;
        case 0x39b370u: goto label_39b370;
        case 0x39b374u: goto label_39b374;
        case 0x39b378u: goto label_39b378;
        case 0x39b37cu: goto label_39b37c;
        case 0x39b380u: goto label_39b380;
        case 0x39b384u: goto label_39b384;
        case 0x39b388u: goto label_39b388;
        case 0x39b38cu: goto label_39b38c;
        case 0x39b390u: goto label_39b390;
        case 0x39b394u: goto label_39b394;
        case 0x39b398u: goto label_39b398;
        case 0x39b39cu: goto label_39b39c;
        case 0x39b3a0u: goto label_39b3a0;
        case 0x39b3a4u: goto label_39b3a4;
        case 0x39b3a8u: goto label_39b3a8;
        case 0x39b3acu: goto label_39b3ac;
        case 0x39b3b0u: goto label_39b3b0;
        case 0x39b3b4u: goto label_39b3b4;
        case 0x39b3b8u: goto label_39b3b8;
        case 0x39b3bcu: goto label_39b3bc;
        case 0x39b3c0u: goto label_39b3c0;
        case 0x39b3c4u: goto label_39b3c4;
        case 0x39b3c8u: goto label_39b3c8;
        case 0x39b3ccu: goto label_39b3cc;
        case 0x39b3d0u: goto label_39b3d0;
        case 0x39b3d4u: goto label_39b3d4;
        case 0x39b3d8u: goto label_39b3d8;
        case 0x39b3dcu: goto label_39b3dc;
        case 0x39b3e0u: goto label_39b3e0;
        case 0x39b3e4u: goto label_39b3e4;
        case 0x39b3e8u: goto label_39b3e8;
        case 0x39b3ecu: goto label_39b3ec;
        case 0x39b3f0u: goto label_39b3f0;
        case 0x39b3f4u: goto label_39b3f4;
        case 0x39b3f8u: goto label_39b3f8;
        case 0x39b3fcu: goto label_39b3fc;
        case 0x39b400u: goto label_39b400;
        case 0x39b404u: goto label_39b404;
        case 0x39b408u: goto label_39b408;
        case 0x39b40cu: goto label_39b40c;
        case 0x39b410u: goto label_39b410;
        case 0x39b414u: goto label_39b414;
        case 0x39b418u: goto label_39b418;
        case 0x39b41cu: goto label_39b41c;
        case 0x39b420u: goto label_39b420;
        case 0x39b424u: goto label_39b424;
        case 0x39b428u: goto label_39b428;
        case 0x39b42cu: goto label_39b42c;
        case 0x39b430u: goto label_39b430;
        case 0x39b434u: goto label_39b434;
        case 0x39b438u: goto label_39b438;
        case 0x39b43cu: goto label_39b43c;
        case 0x39b440u: goto label_39b440;
        case 0x39b444u: goto label_39b444;
        case 0x39b448u: goto label_39b448;
        case 0x39b44cu: goto label_39b44c;
        case 0x39b450u: goto label_39b450;
        case 0x39b454u: goto label_39b454;
        case 0x39b458u: goto label_39b458;
        case 0x39b45cu: goto label_39b45c;
        case 0x39b460u: goto label_39b460;
        case 0x39b464u: goto label_39b464;
        case 0x39b468u: goto label_39b468;
        case 0x39b46cu: goto label_39b46c;
        case 0x39b470u: goto label_39b470;
        case 0x39b474u: goto label_39b474;
        case 0x39b478u: goto label_39b478;
        case 0x39b47cu: goto label_39b47c;
        case 0x39b480u: goto label_39b480;
        case 0x39b484u: goto label_39b484;
        case 0x39b488u: goto label_39b488;
        case 0x39b48cu: goto label_39b48c;
        case 0x39b490u: goto label_39b490;
        case 0x39b494u: goto label_39b494;
        case 0x39b498u: goto label_39b498;
        case 0x39b49cu: goto label_39b49c;
        case 0x39b4a0u: goto label_39b4a0;
        case 0x39b4a4u: goto label_39b4a4;
        case 0x39b4a8u: goto label_39b4a8;
        case 0x39b4acu: goto label_39b4ac;
        case 0x39b4b0u: goto label_39b4b0;
        case 0x39b4b4u: goto label_39b4b4;
        case 0x39b4b8u: goto label_39b4b8;
        case 0x39b4bcu: goto label_39b4bc;
        case 0x39b4c0u: goto label_39b4c0;
        case 0x39b4c4u: goto label_39b4c4;
        case 0x39b4c8u: goto label_39b4c8;
        case 0x39b4ccu: goto label_39b4cc;
        case 0x39b4d0u: goto label_39b4d0;
        case 0x39b4d4u: goto label_39b4d4;
        case 0x39b4d8u: goto label_39b4d8;
        case 0x39b4dcu: goto label_39b4dc;
        case 0x39b4e0u: goto label_39b4e0;
        case 0x39b4e4u: goto label_39b4e4;
        case 0x39b4e8u: goto label_39b4e8;
        case 0x39b4ecu: goto label_39b4ec;
        case 0x39b4f0u: goto label_39b4f0;
        case 0x39b4f4u: goto label_39b4f4;
        case 0x39b4f8u: goto label_39b4f8;
        case 0x39b4fcu: goto label_39b4fc;
        case 0x39b500u: goto label_39b500;
        case 0x39b504u: goto label_39b504;
        case 0x39b508u: goto label_39b508;
        case 0x39b50cu: goto label_39b50c;
        case 0x39b510u: goto label_39b510;
        case 0x39b514u: goto label_39b514;
        case 0x39b518u: goto label_39b518;
        case 0x39b51cu: goto label_39b51c;
        case 0x39b520u: goto label_39b520;
        case 0x39b524u: goto label_39b524;
        case 0x39b528u: goto label_39b528;
        case 0x39b52cu: goto label_39b52c;
        case 0x39b530u: goto label_39b530;
        case 0x39b534u: goto label_39b534;
        case 0x39b538u: goto label_39b538;
        case 0x39b53cu: goto label_39b53c;
        case 0x39b540u: goto label_39b540;
        case 0x39b544u: goto label_39b544;
        case 0x39b548u: goto label_39b548;
        case 0x39b54cu: goto label_39b54c;
        case 0x39b550u: goto label_39b550;
        case 0x39b554u: goto label_39b554;
        case 0x39b558u: goto label_39b558;
        case 0x39b55cu: goto label_39b55c;
        case 0x39b560u: goto label_39b560;
        case 0x39b564u: goto label_39b564;
        case 0x39b568u: goto label_39b568;
        case 0x39b56cu: goto label_39b56c;
        case 0x39b570u: goto label_39b570;
        case 0x39b574u: goto label_39b574;
        case 0x39b578u: goto label_39b578;
        case 0x39b57cu: goto label_39b57c;
        case 0x39b580u: goto label_39b580;
        case 0x39b584u: goto label_39b584;
        case 0x39b588u: goto label_39b588;
        case 0x39b58cu: goto label_39b58c;
        case 0x39b590u: goto label_39b590;
        case 0x39b594u: goto label_39b594;
        case 0x39b598u: goto label_39b598;
        case 0x39b59cu: goto label_39b59c;
        case 0x39b5a0u: goto label_39b5a0;
        case 0x39b5a4u: goto label_39b5a4;
        case 0x39b5a8u: goto label_39b5a8;
        case 0x39b5acu: goto label_39b5ac;
        case 0x39b5b0u: goto label_39b5b0;
        case 0x39b5b4u: goto label_39b5b4;
        case 0x39b5b8u: goto label_39b5b8;
        case 0x39b5bcu: goto label_39b5bc;
        case 0x39b5c0u: goto label_39b5c0;
        case 0x39b5c4u: goto label_39b5c4;
        case 0x39b5c8u: goto label_39b5c8;
        case 0x39b5ccu: goto label_39b5cc;
        case 0x39b5d0u: goto label_39b5d0;
        case 0x39b5d4u: goto label_39b5d4;
        case 0x39b5d8u: goto label_39b5d8;
        case 0x39b5dcu: goto label_39b5dc;
        case 0x39b5e0u: goto label_39b5e0;
        case 0x39b5e4u: goto label_39b5e4;
        case 0x39b5e8u: goto label_39b5e8;
        case 0x39b5ecu: goto label_39b5ec;
        case 0x39b5f0u: goto label_39b5f0;
        case 0x39b5f4u: goto label_39b5f4;
        case 0x39b5f8u: goto label_39b5f8;
        case 0x39b5fcu: goto label_39b5fc;
        case 0x39b600u: goto label_39b600;
        case 0x39b604u: goto label_39b604;
        case 0x39b608u: goto label_39b608;
        case 0x39b60cu: goto label_39b60c;
        case 0x39b610u: goto label_39b610;
        case 0x39b614u: goto label_39b614;
        case 0x39b618u: goto label_39b618;
        case 0x39b61cu: goto label_39b61c;
        case 0x39b620u: goto label_39b620;
        case 0x39b624u: goto label_39b624;
        case 0x39b628u: goto label_39b628;
        case 0x39b62cu: goto label_39b62c;
        case 0x39b630u: goto label_39b630;
        case 0x39b634u: goto label_39b634;
        case 0x39b638u: goto label_39b638;
        case 0x39b63cu: goto label_39b63c;
        case 0x39b640u: goto label_39b640;
        case 0x39b644u: goto label_39b644;
        case 0x39b648u: goto label_39b648;
        case 0x39b64cu: goto label_39b64c;
        case 0x39b650u: goto label_39b650;
        case 0x39b654u: goto label_39b654;
        case 0x39b658u: goto label_39b658;
        case 0x39b65cu: goto label_39b65c;
        case 0x39b660u: goto label_39b660;
        case 0x39b664u: goto label_39b664;
        case 0x39b668u: goto label_39b668;
        case 0x39b66cu: goto label_39b66c;
        case 0x39b670u: goto label_39b670;
        case 0x39b674u: goto label_39b674;
        case 0x39b678u: goto label_39b678;
        case 0x39b67cu: goto label_39b67c;
        case 0x39b680u: goto label_39b680;
        case 0x39b684u: goto label_39b684;
        case 0x39b688u: goto label_39b688;
        case 0x39b68cu: goto label_39b68c;
        case 0x39b690u: goto label_39b690;
        case 0x39b694u: goto label_39b694;
        case 0x39b698u: goto label_39b698;
        case 0x39b69cu: goto label_39b69c;
        case 0x39b6a0u: goto label_39b6a0;
        case 0x39b6a4u: goto label_39b6a4;
        case 0x39b6a8u: goto label_39b6a8;
        case 0x39b6acu: goto label_39b6ac;
        case 0x39b6b0u: goto label_39b6b0;
        case 0x39b6b4u: goto label_39b6b4;
        default: break;
    }

    ctx->pc = 0x39b020u;

label_39b020:
    // 0x39b020: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x39b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_39b024:
    // 0x39b024: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x39b024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_39b028:
    // 0x39b028: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x39b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_39b02c:
    // 0x39b02c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39b02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b030:
    // 0x39b030: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x39b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_39b034:
    // 0x39b034: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x39b034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_39b038:
    // 0x39b038: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x39b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_39b03c:
    // 0x39b03c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x39b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_39b040:
    // 0x39b040: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x39b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_39b044:
    // 0x39b044: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x39b044u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_39b048:
    // 0x39b048: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x39b048u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_39b04c:
    // 0x39b04c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x39b04cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_39b050:
    // 0x39b050: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x39b050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_39b054:
    // 0x39b054: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x39b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_39b058:
    // 0x39b058: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39b058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39b05c:
    // 0x39b05c: 0x14400189  bnez        $v0, . + 4 + (0x189 << 2)
label_39b060:
    if (ctx->pc == 0x39B060u) {
        ctx->pc = 0x39B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B05Cu;
        // 0x39b060: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B064u;
        goto label_39b064;
    }
    ctx->pc = 0x39B05Cu;
    {
        const bool branch_taken_0x39b05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B05Cu;
        // 0x39b060: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b05c) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B064u;
label_39b064:
    // 0x39b064: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39b064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39b068:
    // 0x39b068: 0x964500c6  lhu         $a1, 0xC6($s2)
    ctx->pc = 0x39b068u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
label_39b06c:
    // 0x39b06c: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x39b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_39b070:
    // 0x39b070: 0xc0616ac  jal         func_185AB0
label_39b074:
    if (ctx->pc == 0x39B074u) {
        ctx->pc = 0x39B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B070u;
        // 0x39b074: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B078u;
        goto label_39b078;
    }
    ctx->pc = 0x39B070u;
    SET_GPR_U32(ctx, 31, 0x39B078u);
    ctx->pc = 0x39B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B070u;
    // 0x39b074: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x39B070u, 0x39B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B078u;
label_39b078:
    // 0x39b078: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39b078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b07c:
    // 0x39b07c: 0x12600181  beqz        $s3, . + 4 + (0x181 << 2)
label_39b080:
    if (ctx->pc == 0x39B080u) {
        ctx->pc = 0x39B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B07Cu;
        // 0x39b080: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B084u;
        goto label_39b084;
    }
    ctx->pc = 0x39B07Cu;
    {
        const bool branch_taken_0x39b07c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B07Cu;
        // 0x39b080: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b07c) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B084u;
label_39b084:
    // 0x39b084: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x39b084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
label_39b088:
    // 0x39b088: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39b08c:
    if (ctx->pc == 0x39B08Cu) {
        ctx->pc = 0x39B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B088u;
        // 0x39b08c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B090u;
        goto label_39b090;
    }
    ctx->pc = 0x39B088u;
    {
        const bool branch_taken_0x39b088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B088u;
        // 0x39b08c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b088) {
            ctx->pc = 0x39B0ACu;
            goto label_39b0ac;
        }
    }
    ctx->pc = 0x39B090u;
label_39b090:
    // 0x39b090: 0xc13d008  jal         func_4F4020
label_39b094:
    if (ctx->pc == 0x39B094u) {
        ctx->pc = 0x39B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B090u;
        // 0x39b094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B098u;
        goto label_39b098;
    }
    ctx->pc = 0x39B090u;
    SET_GPR_U32(ctx, 31, 0x39B098u);
    ctx->pc = 0x39B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B090u;
    // 0x39b094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4020u, 0x39B090u, 0x39B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B098u;
label_39b098:
    // 0x39b098: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39b09c:
    if (ctx->pc == 0x39B09Cu) {
        ctx->pc = 0x39B0A0u;
        goto label_39b0a0;
    }
    ctx->pc = 0x39B098u;
    {
        const bool branch_taken_0x39b098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b098) {
            ctx->pc = 0x39B0ACu;
            goto label_39b0ac;
        }
    }
    ctx->pc = 0x39B0A0u;
label_39b0a0:
    // 0x39b0a0: 0xc13d004  jal         func_4F4010
label_39b0a4:
    if (ctx->pc == 0x39B0A4u) {
        ctx->pc = 0x39B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0A0u;
        // 0x39b0a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B0A8u;
        goto label_39b0a8;
    }
    ctx->pc = 0x39B0A0u;
    SET_GPR_U32(ctx, 31, 0x39B0A8u);
    ctx->pc = 0x39B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0A0u;
    // 0x39b0a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4010u, 0x39B0A0u, 0x39B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0A8u;
label_39b0a8:
    // 0x39b0a8: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x39b0a8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39b0ac:
    // 0x39b0ac: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_39b0b0:
    if (ctx->pc == 0x39B0B0u) {
        ctx->pc = 0x39B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0ACu;
        // 0x39b0b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B0B4u;
        goto label_39b0b4;
    }
    ctx->pc = 0x39B0ACu;
    {
        const bool branch_taken_0x39b0ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b0ac) {
            ctx->pc = 0x39B0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B0ACu;
            // 0x39b0b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B0C0u;
            goto label_39b0c0;
        }
    }
    ctx->pc = 0x39B0B4u;
label_39b0b4:
    // 0x39b0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b0b8:
    // 0x39b0b8: 0x10000171  b           . + 4 + (0x171 << 2)
label_39b0bc:
    if (ctx->pc == 0x39B0BCu) {
        ctx->pc = 0x39B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0B8u;
        // 0x39b0bc: 0xa2620014  sb          $v0, 0x14($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B0C0u;
        goto label_39b0c0;
    }
    ctx->pc = 0x39B0B8u;
    {
        const bool branch_taken_0x39b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0B8u;
        // 0x39b0bc: 0xa2620014  sb          $v0, 0x14($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b0b8) {
            ctx->pc = 0x39B680u;
            goto label_39b680;
        }
    }
    ctx->pc = 0x39B0C0u;
label_39b0c0:
    // 0x39b0c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39b0c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39b0c4:
    // 0x39b0c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39b0c8:
    // 0x39b0c8: 0x40f809  jalr        $v0
label_39b0cc:
    if (ctx->pc == 0x39B0CCu) {
        ctx->pc = 0x39B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0C8u;
        // 0x39b0cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B0D0u;
        goto label_39b0d0;
    }
    ctx->pc = 0x39B0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B0D0u);
        ctx->pc = 0x39B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0C8u;
        // 0x39b0cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B0C8u, 0x39B0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B0D0u;
label_39b0d0:
    // 0x39b0d0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x39b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_39b0d4:
    // 0x39b0d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39b0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39b0d8:
    // 0x39b0d8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_39b0dc:
    if (ctx->pc == 0x39B0DCu) {
        ctx->pc = 0x39B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0D8u;
        // 0x39b0dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B0E0u;
        goto label_39b0e0;
    }
    ctx->pc = 0x39B0D8u;
    {
        const bool branch_taken_0x39b0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0D8u;
        // 0x39b0dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b0d8) {
            ctx->pc = 0x39B138u;
            goto label_39b138;
        }
    }
    ctx->pc = 0x39B0E0u;
label_39b0e0:
    // 0x39b0e0: 0xc04808c  jal         func_120230
label_39b0e4:
    if (ctx->pc == 0x39B0E4u) {
        ctx->pc = 0x39B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0E0u;
        // 0x39b0e4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B0E8u;
        goto label_39b0e8;
    }
    ctx->pc = 0x39B0E0u;
    SET_GPR_U32(ctx, 31, 0x39B0E8u);
    ctx->pc = 0x39B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B0E0u;
    // 0x39b0e4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x39B0E0u, 0x39B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B0E8u;
label_39b0e8:
    // 0x39b0e8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x39b0e8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_39b0ec:
    // 0x39b0ec: 0xc64100c8  lwc1        $f1, 0xC8($s2)
    ctx->pc = 0x39b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b0f0:
    // 0x39b0f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39b0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39b0f4:
    // 0x39b0f4: 0x0  nop
    ctx->pc = 0x39b0f4u;
    // NOP
label_39b0f8:
    // 0x39b0f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x39b0f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b0fc:
    // 0x39b0fc: 0x0  nop
    ctx->pc = 0x39b0fcu;
    // NOP
label_39b100:
    // 0x39b100: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_39b104:
    if (ctx->pc == 0x39B104u) {
        ctx->pc = 0x39B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B100u;
        // 0x39b104: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B108u;
        goto label_39b108;
    }
    ctx->pc = 0x39B100u;
    {
        const bool branch_taken_0x39b100 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B100u;
        // 0x39b104: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b100) {
            ctx->pc = 0x39B138u;
            goto label_39b138;
        }
    }
    ctx->pc = 0x39B108u;
label_39b108:
    // 0x39b108: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x39b108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_39b10c:
    // 0x39b10c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39b10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39b110:
    // 0x39b110: 0x0  nop
    ctx->pc = 0x39b110u;
    // NOP
label_39b114:
    // 0x39b114: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x39b114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b118:
    // 0x39b118: 0x0  nop
    ctx->pc = 0x39b118u;
    // NOP
label_39b11c:
    // 0x39b11c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_39b120:
    if (ctx->pc == 0x39B120u) {
        ctx->pc = 0x39B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B11Cu;
        // 0x39b120: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B124u;
        goto label_39b124;
    }
    ctx->pc = 0x39B11Cu;
    {
        const bool branch_taken_0x39b11c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B11Cu;
        // 0x39b120: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b11c) {
            ctx->pc = 0x39B134u;
            goto label_39b134;
        }
    }
    ctx->pc = 0x39B124u;
label_39b124:
    // 0x39b124: 0xc062bee  jal         func_18AFB8
label_39b128:
    if (ctx->pc == 0x39B128u) {
        ctx->pc = 0x39B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B124u;
        // 0x39b128: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B12Cu;
        goto label_39b12c;
    }
    ctx->pc = 0x39B124u;
    SET_GPR_U32(ctx, 31, 0x39B12Cu);
    ctx->pc = 0x39B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B124u;
    // 0x39b128: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AFB8u, 0x39B124u, 0x39B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B12Cu;
label_39b12c:
    // 0x39b12c: 0x10000155  b           . + 4 + (0x155 << 2)
label_39b130:
    if (ctx->pc == 0x39B130u) {
        ctx->pc = 0x39B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B12Cu;
        // 0x39b130: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B134u;
        goto label_39b134;
    }
    ctx->pc = 0x39B12Cu;
    {
        const bool branch_taken_0x39b12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B12Cu;
        // 0x39b130: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b12c) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B134u;
label_39b134:
    // 0x39b134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39b134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b138:
    // 0x39b138: 0xc060c0e  jal         func_183038
label_39b13c:
    if (ctx->pc == 0x39B13Cu) {
        ctx->pc = 0x39B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B138u;
        // 0x39b13c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B140u;
        goto label_39b140;
    }
    ctx->pc = 0x39B138u;
    SET_GPR_U32(ctx, 31, 0x39B140u);
    ctx->pc = 0x39B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B138u;
    // 0x39b13c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183038u, 0x39B138u, 0x39B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B140u;
label_39b140:
    // 0x39b140: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
label_39b144:
    if (ctx->pc == 0x39B144u) {
        ctx->pc = 0x39B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B140u;
        // 0x39b144: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B148u;
        goto label_39b148;
    }
    ctx->pc = 0x39B140u;
    {
        const bool branch_taken_0x39b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B140u;
        // 0x39b144: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b140) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B148u;
label_39b148:
    // 0x39b148: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x39b148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_39b14c:
    // 0x39b14c: 0xc060b58  jal         func_182D60
label_39b150:
    if (ctx->pc == 0x39B150u) {
        ctx->pc = 0x39B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B14Cu;
        // 0x39b150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B154u;
        goto label_39b154;
    }
    ctx->pc = 0x39B14Cu;
    SET_GPR_U32(ctx, 31, 0x39B154u);
    ctx->pc = 0x39B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B14Cu;
    // 0x39b150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x39B14Cu, 0x39B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B154u;
label_39b154:
    // 0x39b154: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x39b154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_39b158:
    // 0x39b158: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39b158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b15c:
    // 0x39b15c: 0xc06078e  jal         func_181E38
label_39b160:
    if (ctx->pc == 0x39B160u) {
        ctx->pc = 0x39B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B15Cu;
        // 0x39b160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B164u;
        goto label_39b164;
    }
    ctx->pc = 0x39B15Cu;
    SET_GPR_U32(ctx, 31, 0x39B164u);
    ctx->pc = 0x39B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B15Cu;
    // 0x39b160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x39B15Cu, 0x39B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B164u;
label_39b164:
    // 0x39b164: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x39b164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39b168:
    // 0x39b168: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x39b168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39b16c:
    // 0x39b16c: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x39b16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_39b170:
    // 0x39b170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39b174:
    // 0x39b174: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x39b174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_39b178:
    // 0x39b178: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x39b178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_39b17c:
    // 0x39b17c: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x39b17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_39b180:
    // 0x39b180: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x39b180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_39b184:
    // 0x39b184: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x39b184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b188:
    // 0x39b188: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x39b188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b18c:
    // 0x39b18c: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x39b18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b190:
    // 0x39b190: 0xc0e85a2  jal         func_3A1688
label_39b194:
    if (ctx->pc == 0x39B194u) {
        ctx->pc = 0x39B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B190u;
        // 0x39b194: 0xb4660008  sdr         $a2, 0x8($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B198u;
        goto label_39b198;
    }
    ctx->pc = 0x39B190u;
    SET_GPR_U32(ctx, 31, 0x39B198u);
    ctx->pc = 0x39B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B190u;
    // 0x39b194: 0xb4660008  sdr         $a2, 0x8($v1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x39B190u, 0x39B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B198u;
label_39b198:
    // 0x39b198: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x39b198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_39b19c:
    // 0x39b19c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39b19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b1a0:
    // 0x39b1a0: 0xc64d0064  lwc1        $f13, 0x64($s2)
    ctx->pc = 0x39b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_39b1a4:
    // 0x39b1a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x39b1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39b1a8:
    // 0x39b1a8: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x39b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_39b1ac:
    // 0x39b1ac: 0xc0ce090  jal         func_338240
label_39b1b0:
    if (ctx->pc == 0x39B1B0u) {
        ctx->pc = 0x39B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1ACu;
        // 0x39b1b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B1B4u;
        goto label_39b1b4;
    }
    ctx->pc = 0x39B1ACu;
    SET_GPR_U32(ctx, 31, 0x39B1B4u);
    ctx->pc = 0x39B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B1ACu;
    // 0x39b1b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x338240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338240u, 0x39B1ACu, 0x39B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B1B4u;
label_39b1b4:
    // 0x39b1b4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x39b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39b1b8:
    // 0x39b1b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x39b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39b1bc:
    // 0x39b1bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39b1bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b1c0:
    // 0x39b1c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_39b1c4:
    // 0x39b1c4: 0xc64000bc  lwc1        $f0, 0xBC($s2)
    ctx->pc = 0x39b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b1c8:
    // 0x39b1c8: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x39b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b1cc:
    // 0x39b1cc: 0xc64100c0  lwc1        $f1, 0xC0($s2)
    ctx->pc = 0x39b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b1d0:
    // 0x39b1d0: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x39b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b1d4:
    // 0x39b1d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x39b1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_39b1d8:
    // 0x39b1d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39b1dc:
    // 0x39b1dc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x39b1dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_39b1e0:
    // 0x39b1e0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x39b1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39b1e4:
    // 0x39b1e4: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x39b1e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_39b1e8:
    // 0x39b1e8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x39b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_39b1ec:
    // 0x39b1ec: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x39b1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_39b1f0:
    // 0x39b1f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x39b1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_39b1f4:
    // 0x39b1f4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x39b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_39b1f8:
    // 0x39b1f8: 0x60f809  jalr        $v1
label_39b1fc:
    if (ctx->pc == 0x39B1FCu) {
        ctx->pc = 0x39B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1F8u;
        // 0x39b1fc: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B200u;
        goto label_39b200;
    }
    ctx->pc = 0x39B1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39B200u);
        ctx->pc = 0x39B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1F8u;
        // 0x39b1fc: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B1F8u, 0x39B200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B200u;
label_39b200:
    // 0x39b200: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x39b200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_39b204:
    // 0x39b204: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_39b208:
    // 0x39b208: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x39b208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39b20c:
    // 0x39b20c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_39b210:
    if (ctx->pc == 0x39B210u) {
        ctx->pc = 0x39B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B20Cu;
        // 0x39b210: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B214u;
        goto label_39b214;
    }
    ctx->pc = 0x39B20Cu;
    {
        const bool branch_taken_0x39b20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B20Cu;
        // 0x39b210: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b20c) {
            ctx->pc = 0x39B2CCu;
            goto label_39b2cc;
        }
    }
    ctx->pc = 0x39B214u;
label_39b214:
    // 0x39b214: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x39b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b218:
    // 0x39b218: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x39b218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b21c:
    // 0x39b21c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x39b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b220:
    // 0x39b220: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39b220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_39b224:
    // 0x39b224: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x39b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b228:
    // 0x39b228: 0x3c013f6c  lui         $at, 0x3F6C
    ctx->pc = 0x39b228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16236 << 16));
label_39b22c:
    // 0x39b22c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x39b22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_39b230:
    // 0x39b230: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x39b230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_39b234:
    // 0x39b234: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x39b234u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_39b238:
    // 0x39b238: 0xc64400c8  lwc1        $f4, 0xC8($s2)
    ctx->pc = 0x39b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39b23c:
    // 0x39b23c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x39b23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_39b240:
    // 0x39b240: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39b240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39b244:
    // 0x39b244: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39b244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39b248:
    // 0x39b248: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x39b248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b24c:
    // 0x39b24c: 0x4603a542  mul.s       $f21, $f20, $f3
    ctx->pc = 0x39b24cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_39b250:
    // 0x39b250: 0x46050502  mul.s       $f20, $f0, $f5
    ctx->pc = 0x39b250u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_39b254:
    // 0x39b254: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x39b254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b258:
    // 0x39b258: 0x0  nop
    ctx->pc = 0x39b258u;
    // NOP
label_39b25c:
    // 0x39b25c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_39b260:
    if (ctx->pc == 0x39B260u) {
        ctx->pc = 0x39B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B25Cu;
        // 0x39b260: 0x4602a502  mul.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B264u;
        goto label_39b264;
    }
    ctx->pc = 0x39B25Cu;
    {
        const bool branch_taken_0x39b25c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B25Cu;
        // 0x39b260: 0x4602a502  mul.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b25c) {
            ctx->pc = 0x39B294u;
            goto label_39b294;
        }
    }
    ctx->pc = 0x39B264u;
label_39b264:
    // 0x39b264: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x39b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b268:
    // 0x39b268: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x39b268u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b26c:
    // 0x39b26c: 0x0  nop
    ctx->pc = 0x39b26cu;
    // NOP
label_39b270:
    // 0x39b270: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_39b274:
    if (ctx->pc == 0x39B274u) {
        ctx->pc = 0x39B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B270u;
        // 0x39b274: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B278u;
        goto label_39b278;
    }
    ctx->pc = 0x39B270u;
    {
        const bool branch_taken_0x39b270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B270u;
        // 0x39b274: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b270) {
            ctx->pc = 0x39B294u;
            goto label_39b294;
        }
    }
    ctx->pc = 0x39B278u;
label_39b278:
    // 0x39b278: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x39b278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_39b27c:
    // 0x39b27c: 0xc10c313  jal         func_430C4C
label_39b280:
    if (ctx->pc == 0x39B280u) {
        ctx->pc = 0x39B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B27Cu;
        // 0x39b280: 0x24a513a0  addiu       $a1, $a1, 0x13A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B284u;
        goto label_39b284;
    }
    ctx->pc = 0x39B27Cu;
    SET_GPR_U32(ctx, 31, 0x39B284u);
    ctx->pc = 0x39B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B27Cu;
    // 0x39b280: 0x24a513a0  addiu       $a1, $a1, 0x13A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x39B27Cu, 0x39B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B284u;
label_39b284:
    // 0x39b284: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_39b288:
    if (ctx->pc == 0x39B288u) {
        ctx->pc = 0x39B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B284u;
        // 0x39b288: 0xc6030000  lwc1        $f3, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B28Cu;
        goto label_39b28c;
    }
    ctx->pc = 0x39B284u;
    {
        const bool branch_taken_0x39b284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b284) {
            ctx->pc = 0x39B288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B284u;
            // 0x39b288: 0xc6030000  lwc1        $f3, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B298u;
            goto label_39b298;
        }
    }
    ctx->pc = 0x39B28Cu;
label_39b28c:
    // 0x39b28c: 0xe65500a0  swc1        $f21, 0xA0($s2)
    ctx->pc = 0x39b28cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
label_39b290:
    // 0x39b290: 0xe65400a4  swc1        $f20, 0xA4($s2)
    ctx->pc = 0x39b290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
label_39b294:
    // 0x39b294: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x39b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b298:
    // 0x39b298: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x39b298u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
label_39b29c:
    // 0x39b29c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x39b29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b2a0:
    // 0x39b2a0: 0xc64100c8  lwc1        $f1, 0xC8($s2)
    ctx->pc = 0x39b2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b2a4:
    // 0x39b2a4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x39b2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_39b2a8:
    // 0x39b2a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39b2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_39b2ac:
    // 0x39b2ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x39b2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39b2b0:
    // 0x39b2b0: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x39b2b0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_39b2b4:
    // 0x39b2b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39b2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39b2b8:
    // 0x39b2b8: 0x4615b581  sub.s       $f22, $f22, $f21
    ctx->pc = 0x39b2b8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_39b2bc:
    // 0x39b2bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39b2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_39b2c0:
    // 0x39b2c0: 0x4602b582  mul.s       $f22, $f22, $f2
    ctx->pc = 0x39b2c0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_39b2c4:
    // 0x39b2c4: 0x1000000e  b           . + 4 + (0xE << 2)
label_39b2c8:
    if (ctx->pc == 0x39B2C8u) {
        ctx->pc = 0x39B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2C4u;
        // 0x39b2c8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2CCu;
        goto label_39b2cc;
    }
    ctx->pc = 0x39B2C4u;
    {
        const bool branch_taken_0x39b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2C4u;
        // 0x39b2c8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b2c4) {
            ctx->pc = 0x39B300u;
            goto label_39b300;
        }
    }
    ctx->pc = 0x39B2CCu;
label_39b2cc:
    // 0x39b2cc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x39b2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_39b2d0:
    // 0x39b2d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_39b2d4:
    if (ctx->pc == 0x39B2D4u) {
        ctx->pc = 0x39B2D8u;
        goto label_39b2d8;
    }
    ctx->pc = 0x39B2D0u;
    {
        const bool branch_taken_0x39b2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b2d0) {
            ctx->pc = 0x39B300u;
            goto label_39b300;
        }
    }
    ctx->pc = 0x39B2D8u;
label_39b2d8:
    // 0x39b2d8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x39b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b2dc:
    // 0x39b2dc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x39b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b2e0:
    // 0x39b2e0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x39b2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b2e4:
    // 0x39b2e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x39b2e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_39b2e8:
    // 0x39b2e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x39b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b2ec:
    // 0x39b2ec: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x39b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b2f0:
    // 0x39b2f0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x39b2f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_39b2f4:
    // 0x39b2f4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x39b2f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_39b2f8:
    // 0x39b2f8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x39b2f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_39b2fc:
    // 0x39b2fc: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x39b2fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_39b300:
    // 0x39b300: 0xc060acc  jal         func_182B30
label_39b304:
    if (ctx->pc == 0x39B304u) {
        ctx->pc = 0x39B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B300u;
        // 0x39b304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B308u;
        goto label_39b308;
    }
    ctx->pc = 0x39B300u;
    SET_GPR_U32(ctx, 31, 0x39B308u);
    ctx->pc = 0x39B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B300u;
    // 0x39b304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B30u, 0x39B300u, 0x39B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B308u;
label_39b308:
    // 0x39b308: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39b308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39b30c:
    // 0x39b30c: 0x54430036  bnel        $v0, $v1, . + 4 + (0x36 << 2)
label_39b310:
    if (ctx->pc == 0x39B310u) {
        ctx->pc = 0x39B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B30Cu;
        // 0x39b310: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B314u;
        goto label_39b314;
    }
    ctx->pc = 0x39B30Cu;
    {
        const bool branch_taken_0x39b30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39b30c) {
            ctx->pc = 0x39B310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B30Cu;
            // 0x39b310: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B3E8u;
            goto label_39b3e8;
        }
    }
    ctx->pc = 0x39B314u;
label_39b314:
    // 0x39b314: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x39b314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39b318:
    // 0x39b318: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x39b318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39b31c:
    // 0x39b31c: 0xc0cda02  jal         func_336808
label_39b320:
    if (ctx->pc == 0x39B320u) {
        ctx->pc = 0x39B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B31Cu;
        // 0x39b320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B324u;
        goto label_39b324;
    }
    ctx->pc = 0x39B31Cu;
    SET_GPR_U32(ctx, 31, 0x39B324u);
    ctx->pc = 0x39B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B31Cu;
    // 0x39b320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x39B31Cu, 0x39B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B324u;
label_39b324:
    // 0x39b324: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x39b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_39b328:
    // 0x39b328: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x39b328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_39b32c:
    // 0x39b32c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_39b330:
    if (ctx->pc == 0x39B330u) {
        ctx->pc = 0x39B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B32Cu;
        // 0x39b330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B334u;
        goto label_39b334;
    }
    ctx->pc = 0x39B32Cu;
    {
        const bool branch_taken_0x39b32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B32Cu;
        // 0x39b330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b32c) {
            ctx->pc = 0x39B360u;
            goto label_39b360;
        }
    }
    ctx->pc = 0x39B334u;
label_39b334:
    // 0x39b334: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39b334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_39b338:
    // 0x39b338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39b338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39b33c:
    // 0x39b33c: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x39b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b340:
    // 0x39b340: 0x4601a0c2  mul.s       $f3, $f20, $f1
    ctx->pc = 0x39b340u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_39b344:
    // 0x39b344: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x39b344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b348:
    // 0x39b348: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x39b348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_39b34c:
    // 0x39b34c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39b34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_39b350:
    // 0x39b350: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x39b350u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_39b354:
    // 0x39b354: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x39b354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_39b358:
    // 0x39b358: 0x1000000f  b           . + 4 + (0xF << 2)
label_39b35c:
    if (ctx->pc == 0x39B35Cu) {
        ctx->pc = 0x39B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B358u;
        // 0x39b35c: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B360u;
        goto label_39b360;
    }
    ctx->pc = 0x39B358u;
    {
        const bool branch_taken_0x39b358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B358u;
        // 0x39b35c: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b358) {
            ctx->pc = 0x39B398u;
            goto label_39b398;
        }
    }
    ctx->pc = 0x39B360u;
label_39b360:
    // 0x39b360: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x39b360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39b364:
    // 0x39b364: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x39b364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39b368:
    // 0x39b368: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x39b368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39b36c:
    // 0x39b36c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39b36cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39b370:
    // 0x39b370: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39b370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39b374:
    // 0x39b374: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x39b374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39b378:
    // 0x39b378: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x39b378u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_39b37c:
    // 0x39b37c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x39b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39b380:
    // 0x39b380: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x39b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_39b384:
    // 0x39b384: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x39b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_39b388:
    // 0x39b388: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x39b388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_39b38c:
    // 0x39b38c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x39b38cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_39b390:
    // 0x39b390: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x39b390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39b394:
    // 0x39b394: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x39b394u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_39b398:
    // 0x39b398: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x39b398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39b39c:
    // 0x39b39c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x39b39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_39b3a0:
    // 0x39b3a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39b3a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39b3a4:
    // 0x39b3a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x39b3a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39b3a8:
    // 0x39b3a8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x39b3a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39b3ac:
    // 0x39b3ac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x39b3acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_39b3b0:
    // 0x39b3b0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x39b3b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39b3b4:
    // 0x39b3b4: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x39b3b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_39b3b8:
    // 0x39b3b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39b3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39b3bc:
    // 0x39b3bc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x39b3bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_39b3c0:
    // 0x39b3c0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x39b3c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39b3c4:
    // 0x39b3c4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x39b3c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_39b3c8:
    // 0x39b3c8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x39b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_39b3cc:
    // 0x39b3cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39b3d0:
    // 0x39b3d0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x39b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_39b3d4:
    // 0x39b3d4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x39b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_39b3d8:
    // 0x39b3d8: 0xc0cda36  jal         func_3368D8
label_39b3dc:
    if (ctx->pc == 0x39B3DCu) {
        ctx->pc = 0x39B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3D8u;
        // 0x39b3dc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3E0u;
        goto label_39b3e0;
    }
    ctx->pc = 0x39B3D8u;
    SET_GPR_U32(ctx, 31, 0x39B3E0u);
    ctx->pc = 0x39B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3D8u;
    // 0x39b3dc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x39B3D8u, 0x39B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3E0u;
label_39b3e0:
    // 0x39b3e0: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_39b3e4:
    if (ctx->pc == 0x39B3E4u) {
        ctx->pc = 0x39B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3E0u;
        // 0x39b3e4: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3E8u;
        goto label_39b3e8;
    }
    ctx->pc = 0x39B3E0u;
    {
        const bool branch_taken_0x39b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3E0u;
        // 0x39b3e4: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3e0) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B3E8u;
label_39b3e8:
    // 0x39b3e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x39b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_39b3ec:
    // 0x39b3ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_39b3f0:
    if (ctx->pc == 0x39B3F0u) {
        ctx->pc = 0x39B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3ECu;
        // 0x39b3f0: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3F4u;
        goto label_39b3f4;
    }
    ctx->pc = 0x39B3ECu;
    {
        const bool branch_taken_0x39b3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3ECu;
        // 0x39b3f0: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3ec) {
            ctx->pc = 0x39B41Cu;
            goto label_39b41c;
        }
    }
    ctx->pc = 0x39B3F4u;
label_39b3f4:
    // 0x39b3f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39b3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_39b3f8:
    // 0x39b3f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39b3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39b3fc:
    // 0x39b3fc: 0x0  nop
    ctx->pc = 0x39b3fcu;
    // NOP
label_39b400:
    // 0x39b400: 0x4601a0c2  mul.s       $f3, $f20, $f1
    ctx->pc = 0x39b400u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_39b404:
    // 0x39b404: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x39b404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b408:
    // 0x39b408: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x39b408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_39b40c:
    // 0x39b40c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39b40cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_39b410:
    // 0x39b410: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x39b410u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_39b414:
    // 0x39b414: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x39b414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_39b418:
    // 0x39b418: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x39b418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_39b41c:
    // 0x39b41c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x39b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b420:
    // 0x39b420: 0x4600a887  neg.s       $f2, $f21
    ctx->pc = 0x39b420u;
    ctx->f[2] = FPU_NEG_S(ctx->f[21]);
label_39b424:
    // 0x39b424: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39b424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b428:
    // 0x39b428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b42c:
    // 0x39b42c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x39b42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_39b430:
    // 0x39b430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39b434:
    // 0x39b434: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x39b434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_39b438:
    // 0x39b438: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x39b438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_39b43c:
    // 0x39b43c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b440:
    // 0x39b440: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x39b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b444:
    // 0x39b444: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x39b444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_39b448:
    // 0x39b448: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x39b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b44c:
    // 0x39b44c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b450:
    // 0x39b450: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x39b450u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_39b454:
    // 0x39b454: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x39b454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_39b458:
    // 0x39b458: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x39b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_39b45c:
    // 0x39b45c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x39b45cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_39b460:
    // 0x39b460: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x39b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_39b464:
    // 0x39b464: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x39b464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_39b468:
    // 0x39b468: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39b46c:
    // 0x39b46c: 0xc060acc  jal         func_182B30
label_39b470:
    if (ctx->pc == 0x39B470u) {
        ctx->pc = 0x39B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B46Cu;
        // 0x39b470: 0xe457000c  swc1        $f23, 0xC($v0) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B474u;
        goto label_39b474;
    }
    ctx->pc = 0x39B46Cu;
    SET_GPR_U32(ctx, 31, 0x39B474u);
    ctx->pc = 0x39B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B46Cu;
    // 0x39b470: 0xe457000c  swc1        $f23, 0xC($v0) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B30u, 0x39B46Cu, 0x39B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B474u;
label_39b474:
    // 0x39b474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b478:
    // 0x39b478: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_39b47c:
    if (ctx->pc == 0x39B47Cu) {
        ctx->pc = 0x39B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B478u;
        // 0x39b47c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B480u;
        goto label_39b480;
    }
    ctx->pc = 0x39B478u;
    {
        const bool branch_taken_0x39b478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39b478) {
            ctx->pc = 0x39B47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B478u;
            // 0x39b47c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B4ACu;
            goto label_39b4ac;
        }
    }
    ctx->pc = 0x39B480u;
label_39b480:
    // 0x39b480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39b484:
    // 0x39b484: 0xc0e85a2  jal         func_3A1688
label_39b488:
    if (ctx->pc == 0x39B488u) {
        ctx->pc = 0x39B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B484u;
        // 0x39b488: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B48Cu;
        goto label_39b48c;
    }
    ctx->pc = 0x39B484u;
    SET_GPR_U32(ctx, 31, 0x39B48Cu);
    ctx->pc = 0x39B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B484u;
    // 0x39b488: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x39B484u, 0x39B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B48Cu;
label_39b48c:
    // 0x39b48c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x39b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b490:
    // 0x39b490: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x39b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_39b494:
    // 0x39b494: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x39b494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b498:
    // 0x39b498: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39b498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39b49c:
    // 0x39b49c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x39b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_39b4a0:
    // 0x39b4a0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x39b4a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_39b4a4:
    // 0x39b4a4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x39b4a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_39b4a8:
    // 0x39b4a8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x39b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_39b4ac:
    // 0x39b4ac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x39b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_39b4b0:
    // 0x39b4b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39b4b4:
    // 0x39b4b4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_39b4b8:
    if (ctx->pc == 0x39B4B8u) {
        ctx->pc = 0x39B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4B4u;
        // 0x39b4b8: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4BCu;
        goto label_39b4bc;
    }
    ctx->pc = 0x39B4B4u;
    {
        const bool branch_taken_0x39b4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4B4u;
        // 0x39b4b8: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b4b4) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B4BCu;
label_39b4bc:
    // 0x39b4bc: 0xc0e87c0  jal         func_3A1F00
label_39b4c0:
    if (ctx->pc == 0x39B4C0u) {
        ctx->pc = 0x39B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4BCu;
        // 0x39b4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4C4u;
        goto label_39b4c4;
    }
    ctx->pc = 0x39B4BCu;
    SET_GPR_U32(ctx, 31, 0x39B4C4u);
    ctx->pc = 0x39B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B4BCu;
    // 0x39b4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x39B4BCu, 0x39B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B4C4u;
label_39b4c4:
    // 0x39b4c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b4c8:
    // 0x39b4c8: 0xc0e87c0  jal         func_3A1F00
label_39b4cc:
    if (ctx->pc == 0x39B4CCu) {
        ctx->pc = 0x39B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4C8u;
        // 0x39b4cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4D0u;
        goto label_39b4d0;
    }
    ctx->pc = 0x39B4C8u;
    SET_GPR_U32(ctx, 31, 0x39B4D0u);
    ctx->pc = 0x39B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B4C8u;
    // 0x39b4cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x39B4C8u, 0x39B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B4D0u;
label_39b4d0:
    // 0x39b4d0: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x39b4d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_39b4d4:
    // 0x39b4d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x39b4d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_39b4d8:
    // 0x39b4d8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39b4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39b4dc:
    // 0x39b4dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39b4dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39b4e0:
    // 0x39b4e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39b4e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39b4e4:
    // 0x39b4e4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39b4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39b4e8:
    // 0x39b4e8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39b4e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39b4ec:
    // 0x39b4ec: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x39b4ecu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_39b4f0:
    // 0x39b4f0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x39b4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_39b4f4:
    // 0x39b4f4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x39b4f4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39b4f8:
    // 0x39b4f8: 0x0  nop
    ctx->pc = 0x39b4f8u;
    // NOP
label_39b4fc:
    // 0x39b4fc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x39b4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b500:
    // 0x39b500: 0x0  nop
    ctx->pc = 0x39b500u;
    // NOP
label_39b504:
    // 0x39b504: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
label_39b508:
    if (ctx->pc == 0x39B508u) {
        ctx->pc = 0x39B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B504u;
        // 0x39b508: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B50Cu;
        goto label_39b50c;
    }
    ctx->pc = 0x39B504u;
    {
        const bool branch_taken_0x39b504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B504u;
        // 0x39b508: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b504) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B50Cu;
label_39b50c:
    // 0x39b50c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x39b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_39b510:
    // 0x39b510: 0x0  nop
    ctx->pc = 0x39b510u;
    // NOP
label_39b514:
    // 0x39b514: 0x0  nop
    ctx->pc = 0x39b514u;
    // NOP
label_39b518:
    // 0x39b518: 0x46000584  c1          0x584
    ctx->pc = 0x39b518u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_39b51c:
    // 0x39b51c: 0xc64200d0  lwc1        $f2, 0xD0($s2)
    ctx->pc = 0x39b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b520:
    // 0x39b520: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x39b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b524:
    // 0x39b524: 0xc64300cc  lwc1        $f3, 0xCC($s2)
    ctx->pc = 0x39b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b528:
    // 0x39b528: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39b528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39b52c:
    // 0x39b52c: 0x0  nop
    ctx->pc = 0x39b52cu;
    // NOP
label_39b530:
    // 0x39b530: 0x0  nop
    ctx->pc = 0x39b530u;
    // NOP
label_39b534:
    // 0x39b534: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x39b534u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
label_39b538:
    // 0x39b538: 0x46001d69  min.s       $f21, $f3, $f0
    ctx->pc = 0x39b538u;
    ctx->f[21] = std::min(ctx->f[3], ctx->f[0]);
label_39b53c:
    // 0x39b53c: 0x46152034  c.lt.s      $f4, $f21
    ctx->pc = 0x39b53cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b540:
    // 0x39b540: 0x0  nop
    ctx->pc = 0x39b540u;
    // NOP
label_39b544:
    // 0x39b544: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_39b548:
    if (ctx->pc == 0x39B548u) {
        ctx->pc = 0x39B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B544u;
        // 0x39b548: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B54Cu;
        goto label_39b54c;
    }
    ctx->pc = 0x39B544u;
    {
        const bool branch_taken_0x39b544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B544u;
        // 0x39b548: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b544) {
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B54Cu;
label_39b54c:
    // 0x39b54c: 0x46150d02  mul.s       $f20, $f1, $f21
    ctx->pc = 0x39b54cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_39b550:
    // 0x39b550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39b554:
    // 0x39b554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39b554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b558:
    // 0x39b558: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x39b558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_39b55c:
    // 0x39b55c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39b55cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b560:
    // 0x39b560: 0xc0e87c0  jal         func_3A1F00
label_39b564:
    if (ctx->pc == 0x39B564u) {
        ctx->pc = 0x39B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B560u;
        // 0x39b564: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B568u;
        goto label_39b568;
    }
    ctx->pc = 0x39B560u;
    SET_GPR_U32(ctx, 31, 0x39B568u);
    ctx->pc = 0x39B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B560u;
    // 0x39b564: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x39B560u, 0x39B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B568u;
label_39b568:
    // 0x39b568: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x39b568u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_39b56c:
    // 0x39b56c: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x39b56cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_39b570:
    // 0x39b570: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x39b570u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_39b574:
    // 0x39b574: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x39b574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_39b578:
    // 0x39b578: 0x0  nop
    ctx->pc = 0x39b578u;
    // NOP
label_39b57c:
    // 0x39b57c: 0x0  nop
    ctx->pc = 0x39b57cu;
    // NOP
label_39b580:
    // 0x39b580: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x39b580u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
label_39b584:
    // 0x39b584: 0xe7b7007c  swc1        $f23, 0x7C($sp)
    ctx->pc = 0x39b584u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_39b588:
    // 0x39b588: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x39b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b58c:
    // 0x39b58c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x39b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b590:
    // 0x39b590: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x39b590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_39b594:
    // 0x39b594: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x39b594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_39b598:
    // 0x39b598: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x39b598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_39b59c:
    // 0x39b59c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x39b59cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_39b5a0:
    // 0x39b5a0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x39b5a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39b5a4:
    // 0x39b5a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39b5a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39b5a8:
    // 0x39b5a8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x39b5a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_39b5ac:
    // 0x39b5ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x39b5acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39b5b0:
    // 0x39b5b0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x39b5b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_39b5b4:
    // 0x39b5b4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x39b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_39b5b8:
    // 0x39b5b8: 0xc10b1c6  jal         func_42C718
label_39b5bc:
    if (ctx->pc == 0x39B5BCu) {
        ctx->pc = 0x39B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5B8u;
        // 0x39b5bc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5C0u;
        goto label_39b5c0;
    }
    ctx->pc = 0x39B5B8u;
    SET_GPR_U32(ctx, 31, 0x39B5C0u);
    ctx->pc = 0x39B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5B8u;
    // 0x39b5bc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x39B5B8u, 0x39B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5C0u;
label_39b5c0:
    // 0x39b5c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39b5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b5c4:
    // 0x39b5c4: 0x5220002f  beql        $s1, $zero, . + 4 + (0x2F << 2)
label_39b5c8:
    if (ctx->pc == 0x39B5C8u) {
        ctx->pc = 0x39B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5C4u;
        // 0x39b5c8: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5CCu;
        goto label_39b5cc;
    }
    ctx->pc = 0x39B5C4u;
    {
        const bool branch_taken_0x39b5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b5c4) {
            ctx->pc = 0x39B5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B5C4u;
            // 0x39b5c8: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B684u;
            goto label_39b684;
        }
    }
    ctx->pc = 0x39B5CCu;
label_39b5cc:
    // 0x39b5cc: 0x0  nop
    ctx->pc = 0x39b5ccu;
    // NOP
label_39b5d0:
    // 0x39b5d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b5d4:
    // 0x39b5d4: 0xc060c0e  jal         func_183038
label_39b5d8:
    if (ctx->pc == 0x39B5D8u) {
        ctx->pc = 0x39B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5D4u;
        // 0x39b5d8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5DCu;
        goto label_39b5dc;
    }
    ctx->pc = 0x39B5D4u;
    SET_GPR_U32(ctx, 31, 0x39B5DCu);
    ctx->pc = 0x39B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5D4u;
    // 0x39b5d8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183038u, 0x39B5D4u, 0x39B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5DCu;
label_39b5dc:
    // 0x39b5dc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_39b5e0:
    if (ctx->pc == 0x39B5E0u) {
        ctx->pc = 0x39B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5DCu;
        // 0x39b5e0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5E4u;
        goto label_39b5e4;
    }
    ctx->pc = 0x39B5DCu;
    {
        const bool branch_taken_0x39b5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5DCu;
        // 0x39b5e0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b5dc) {
            ctx->pc = 0x39B680u;
            goto label_39b680;
        }
    }
    ctx->pc = 0x39B5E4u;
label_39b5e4:
    // 0x39b5e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b5e8:
    // 0x39b5e8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x39b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_39b5ec:
    // 0x39b5ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39b5f0:
    // 0x39b5f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_39b5f4:
    // 0x39b5f4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x39b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_39b5f8:
    // 0x39b5f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x39b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_39b5fc:
    // 0x39b5fc: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x39b5fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_39b600:
    // 0x39b600: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x39b600u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_39b604:
    // 0x39b604: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x39b604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_39b608:
    // 0x39b608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x39b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39b60c:
    // 0x39b60c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x39b60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_39b610:
    // 0x39b610: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x39b610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_39b614:
    // 0x39b614: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x39b614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_39b618:
    // 0x39b618: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x39b618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_39b61c:
    // 0x39b61c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x39b61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b620:
    // 0x39b620: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x39b620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b624:
    // 0x39b624: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x39b624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39b628:
    // 0x39b628: 0xc060acc  jal         func_182B30
label_39b62c:
    if (ctx->pc == 0x39B62Cu) {
        ctx->pc = 0x39B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B628u;
        // 0x39b62c: 0xb4a60008  sdr         $a2, 0x8($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B630u;
        goto label_39b630;
    }
    ctx->pc = 0x39B628u;
    SET_GPR_U32(ctx, 31, 0x39B630u);
    ctx->pc = 0x39B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B628u;
    // 0x39b62c: 0xb4a60008  sdr         $a2, 0x8($a1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B30u, 0x39B628u, 0x39B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B630u;
label_39b630:
    // 0x39b630: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
label_39b634:
    if (ctx->pc == 0x39B634u) {
        ctx->pc = 0x39B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B630u;
        // 0x39b634: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B638u;
        goto label_39b638;
    }
    ctx->pc = 0x39B630u;
    {
        const bool branch_taken_0x39b630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x39B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B630u;
        // 0x39b634: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b630) {
            ctx->pc = 0x39B64Cu;
            goto label_39b64c;
        }
    }
    ctx->pc = 0x39B638u;
label_39b638:
    // 0x39b638: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x39b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_39b63c:
    // 0x39b63c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x39b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_39b640:
    // 0x39b640: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b644:
    // 0x39b644: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x39b644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_39b648:
    // 0x39b648: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x39b648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39b64c:
    // 0x39b64c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39b64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_39b650:
    // 0x39b650: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x39b650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39b654:
    // 0x39b654: 0x211282b  sltu        $a1, $s0, $s1
    ctx->pc = 0x39b654u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_39b658:
    // 0x39b658: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39b658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39b65c:
    // 0x39b65c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39b65cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39b660:
    // 0x39b660: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39b660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39b664:
    // 0x39b664: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39b664u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39b668:
    // 0x39b668: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x39b668u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_39b66c:
    // 0x39b66c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x39b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_39b670:
    // 0x39b670: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x39b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_39b674:
    // 0x39b674: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x39b674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_39b678:
    // 0x39b678: 0x14a0ffd5  bnez        $a1, . + 4 + (-0x2B << 2)
label_39b67c:
    if (ctx->pc == 0x39B67Cu) {
        ctx->pc = 0x39B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B678u;
        // 0x39b67c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B680u;
        goto label_39b680;
    }
    ctx->pc = 0x39B678u;
    {
        const bool branch_taken_0x39b678 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B678u;
        // 0x39b67c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b678) {
            ctx->pc = 0x39B5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b5d0;
        }
    }
    ctx->pc = 0x39B680u;
label_39b680:
    // 0x39b680: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x39b680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_39b684:
    // 0x39b684: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x39b684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_39b688:
    // 0x39b688: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x39b688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_39b68c:
    // 0x39b68c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x39b68cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_39b690:
    // 0x39b690: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x39b690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39b694:
    // 0x39b694: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x39b694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39b698:
    // 0x39b698: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x39b698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_39b69c:
    // 0x39b69c: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x39b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_39b6a0:
    // 0x39b6a0: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x39b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_39b6a4:
    // 0x39b6a4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x39b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39b6a8:
    // 0x39b6a8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x39b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39b6ac:
    // 0x39b6ac: 0x3e00008  jr          $ra
label_39b6b0:
    if (ctx->pc == 0x39B6B0u) {
        ctx->pc = 0x39B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6ACu;
        // 0x39b6b0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B6B4u;
        goto label_39b6b4;
    }
    ctx->pc = 0x39B6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6ACu;
        // 0x39b6b0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B6B4u;
label_39b6b4:
    // 0x39b6b4: 0x0  nop
    ctx->pc = 0x39b6b4u;
    // NOP
    ctx->pc = 0x39b6b8u;
}
