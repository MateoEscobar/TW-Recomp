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

// Function: sub_0012AE58
// Address: 0x12ae58 - 0x12d3b8
void sub_0012AE58_0x12ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AE58_0x12ae58");
#endif

    switch (ctx->pc) {
        case 0x12ae58u: goto label_12ae58;
        case 0x12ae5cu: goto label_12ae5c;
        case 0x12ae60u: goto label_12ae60;
        case 0x12ae64u: goto label_12ae64;
        case 0x12ae68u: goto label_12ae68;
        case 0x12ae6cu: goto label_12ae6c;
        case 0x12ae70u: goto label_12ae70;
        case 0x12ae74u: goto label_12ae74;
        case 0x12ae78u: goto label_12ae78;
        case 0x12ae7cu: goto label_12ae7c;
        case 0x12ae80u: goto label_12ae80;
        case 0x12ae84u: goto label_12ae84;
        case 0x12ae88u: goto label_12ae88;
        case 0x12ae8cu: goto label_12ae8c;
        case 0x12ae90u: goto label_12ae90;
        case 0x12ae94u: goto label_12ae94;
        case 0x12ae98u: goto label_12ae98;
        case 0x12ae9cu: goto label_12ae9c;
        case 0x12aea0u: goto label_12aea0;
        case 0x12aea4u: goto label_12aea4;
        case 0x12aea8u: goto label_12aea8;
        case 0x12aeacu: goto label_12aeac;
        case 0x12aeb0u: goto label_12aeb0;
        case 0x12aeb4u: goto label_12aeb4;
        case 0x12aeb8u: goto label_12aeb8;
        case 0x12aebcu: goto label_12aebc;
        case 0x12aec0u: goto label_12aec0;
        case 0x12aec4u: goto label_12aec4;
        case 0x12aec8u: goto label_12aec8;
        case 0x12aeccu: goto label_12aecc;
        case 0x12aed0u: goto label_12aed0;
        case 0x12aed4u: goto label_12aed4;
        case 0x12aed8u: goto label_12aed8;
        case 0x12aedcu: goto label_12aedc;
        case 0x12aee0u: goto label_12aee0;
        case 0x12aee4u: goto label_12aee4;
        case 0x12aee8u: goto label_12aee8;
        case 0x12aeecu: goto label_12aeec;
        case 0x12aef0u: goto label_12aef0;
        case 0x12aef4u: goto label_12aef4;
        case 0x12aef8u: goto label_12aef8;
        case 0x12aefcu: goto label_12aefc;
        case 0x12af00u: goto label_12af00;
        case 0x12af04u: goto label_12af04;
        case 0x12af08u: goto label_12af08;
        case 0x12af0cu: goto label_12af0c;
        case 0x12af10u: goto label_12af10;
        case 0x12af14u: goto label_12af14;
        case 0x12af18u: goto label_12af18;
        case 0x12af1cu: goto label_12af1c;
        case 0x12af20u: goto label_12af20;
        case 0x12af24u: goto label_12af24;
        case 0x12af28u: goto label_12af28;
        case 0x12af2cu: goto label_12af2c;
        case 0x12af30u: goto label_12af30;
        case 0x12af34u: goto label_12af34;
        case 0x12af38u: goto label_12af38;
        case 0x12af3cu: goto label_12af3c;
        case 0x12af40u: goto label_12af40;
        case 0x12af44u: goto label_12af44;
        case 0x12af48u: goto label_12af48;
        case 0x12af4cu: goto label_12af4c;
        case 0x12af50u: goto label_12af50;
        case 0x12af54u: goto label_12af54;
        case 0x12af58u: goto label_12af58;
        case 0x12af5cu: goto label_12af5c;
        case 0x12af60u: goto label_12af60;
        case 0x12af64u: goto label_12af64;
        case 0x12af68u: goto label_12af68;
        case 0x12af6cu: goto label_12af6c;
        case 0x12af70u: goto label_12af70;
        case 0x12af74u: goto label_12af74;
        case 0x12af78u: goto label_12af78;
        case 0x12af7cu: goto label_12af7c;
        case 0x12af80u: goto label_12af80;
        case 0x12af84u: goto label_12af84;
        case 0x12af88u: goto label_12af88;
        case 0x12af8cu: goto label_12af8c;
        case 0x12af90u: goto label_12af90;
        case 0x12af94u: goto label_12af94;
        case 0x12af98u: goto label_12af98;
        case 0x12af9cu: goto label_12af9c;
        case 0x12afa0u: goto label_12afa0;
        case 0x12afa4u: goto label_12afa4;
        case 0x12afa8u: goto label_12afa8;
        case 0x12afacu: goto label_12afac;
        case 0x12afb0u: goto label_12afb0;
        case 0x12afb4u: goto label_12afb4;
        case 0x12afb8u: goto label_12afb8;
        case 0x12afbcu: goto label_12afbc;
        case 0x12afc0u: goto label_12afc0;
        case 0x12afc4u: goto label_12afc4;
        case 0x12afc8u: goto label_12afc8;
        case 0x12afccu: goto label_12afcc;
        case 0x12afd0u: goto label_12afd0;
        case 0x12afd4u: goto label_12afd4;
        case 0x12afd8u: goto label_12afd8;
        case 0x12afdcu: goto label_12afdc;
        case 0x12afe0u: goto label_12afe0;
        case 0x12afe4u: goto label_12afe4;
        case 0x12afe8u: goto label_12afe8;
        case 0x12afecu: goto label_12afec;
        case 0x12aff0u: goto label_12aff0;
        case 0x12aff4u: goto label_12aff4;
        case 0x12aff8u: goto label_12aff8;
        case 0x12affcu: goto label_12affc;
        case 0x12b000u: goto label_12b000;
        case 0x12b004u: goto label_12b004;
        case 0x12b008u: goto label_12b008;
        case 0x12b00cu: goto label_12b00c;
        case 0x12b010u: goto label_12b010;
        case 0x12b014u: goto label_12b014;
        case 0x12b018u: goto label_12b018;
        case 0x12b01cu: goto label_12b01c;
        case 0x12b020u: goto label_12b020;
        case 0x12b024u: goto label_12b024;
        case 0x12b028u: goto label_12b028;
        case 0x12b02cu: goto label_12b02c;
        case 0x12b030u: goto label_12b030;
        case 0x12b034u: goto label_12b034;
        case 0x12b038u: goto label_12b038;
        case 0x12b03cu: goto label_12b03c;
        case 0x12b040u: goto label_12b040;
        case 0x12b044u: goto label_12b044;
        case 0x12b048u: goto label_12b048;
        case 0x12b04cu: goto label_12b04c;
        case 0x12b050u: goto label_12b050;
        case 0x12b054u: goto label_12b054;
        case 0x12b058u: goto label_12b058;
        case 0x12b05cu: goto label_12b05c;
        case 0x12b060u: goto label_12b060;
        case 0x12b064u: goto label_12b064;
        case 0x12b068u: goto label_12b068;
        case 0x12b06cu: goto label_12b06c;
        case 0x12b070u: goto label_12b070;
        case 0x12b074u: goto label_12b074;
        case 0x12b078u: goto label_12b078;
        case 0x12b07cu: goto label_12b07c;
        case 0x12b080u: goto label_12b080;
        case 0x12b084u: goto label_12b084;
        case 0x12b088u: goto label_12b088;
        case 0x12b08cu: goto label_12b08c;
        case 0x12b090u: goto label_12b090;
        case 0x12b094u: goto label_12b094;
        case 0x12b098u: goto label_12b098;
        case 0x12b09cu: goto label_12b09c;
        case 0x12b0a0u: goto label_12b0a0;
        case 0x12b0a4u: goto label_12b0a4;
        case 0x12b0a8u: goto label_12b0a8;
        case 0x12b0acu: goto label_12b0ac;
        case 0x12b0b0u: goto label_12b0b0;
        case 0x12b0b4u: goto label_12b0b4;
        case 0x12b0b8u: goto label_12b0b8;
        case 0x12b0bcu: goto label_12b0bc;
        case 0x12b0c0u: goto label_12b0c0;
        case 0x12b0c4u: goto label_12b0c4;
        case 0x12b0c8u: goto label_12b0c8;
        case 0x12b0ccu: goto label_12b0cc;
        case 0x12b0d0u: goto label_12b0d0;
        case 0x12b0d4u: goto label_12b0d4;
        case 0x12b0d8u: goto label_12b0d8;
        case 0x12b0dcu: goto label_12b0dc;
        case 0x12b0e0u: goto label_12b0e0;
        case 0x12b0e4u: goto label_12b0e4;
        case 0x12b0e8u: goto label_12b0e8;
        case 0x12b0ecu: goto label_12b0ec;
        case 0x12b0f0u: goto label_12b0f0;
        case 0x12b0f4u: goto label_12b0f4;
        case 0x12b0f8u: goto label_12b0f8;
        case 0x12b0fcu: goto label_12b0fc;
        case 0x12b100u: goto label_12b100;
        case 0x12b104u: goto label_12b104;
        case 0x12b108u: goto label_12b108;
        case 0x12b10cu: goto label_12b10c;
        case 0x12b110u: goto label_12b110;
        case 0x12b114u: goto label_12b114;
        case 0x12b118u: goto label_12b118;
        case 0x12b11cu: goto label_12b11c;
        case 0x12b120u: goto label_12b120;
        case 0x12b124u: goto label_12b124;
        case 0x12b128u: goto label_12b128;
        case 0x12b12cu: goto label_12b12c;
        case 0x12b130u: goto label_12b130;
        case 0x12b134u: goto label_12b134;
        case 0x12b138u: goto label_12b138;
        case 0x12b13cu: goto label_12b13c;
        case 0x12b140u: goto label_12b140;
        case 0x12b144u: goto label_12b144;
        case 0x12b148u: goto label_12b148;
        case 0x12b14cu: goto label_12b14c;
        case 0x12b150u: goto label_12b150;
        case 0x12b154u: goto label_12b154;
        case 0x12b158u: goto label_12b158;
        case 0x12b15cu: goto label_12b15c;
        case 0x12b160u: goto label_12b160;
        case 0x12b164u: goto label_12b164;
        case 0x12b168u: goto label_12b168;
        case 0x12b16cu: goto label_12b16c;
        case 0x12b170u: goto label_12b170;
        case 0x12b174u: goto label_12b174;
        case 0x12b178u: goto label_12b178;
        case 0x12b17cu: goto label_12b17c;
        case 0x12b180u: goto label_12b180;
        case 0x12b184u: goto label_12b184;
        case 0x12b188u: goto label_12b188;
        case 0x12b18cu: goto label_12b18c;
        case 0x12b190u: goto label_12b190;
        case 0x12b194u: goto label_12b194;
        case 0x12b198u: goto label_12b198;
        case 0x12b19cu: goto label_12b19c;
        case 0x12b1a0u: goto label_12b1a0;
        case 0x12b1a4u: goto label_12b1a4;
        case 0x12b1a8u: goto label_12b1a8;
        case 0x12b1acu: goto label_12b1ac;
        case 0x12b1b0u: goto label_12b1b0;
        case 0x12b1b4u: goto label_12b1b4;
        case 0x12b1b8u: goto label_12b1b8;
        case 0x12b1bcu: goto label_12b1bc;
        case 0x12b1c0u: goto label_12b1c0;
        case 0x12b1c4u: goto label_12b1c4;
        case 0x12b1c8u: goto label_12b1c8;
        case 0x12b1ccu: goto label_12b1cc;
        case 0x12b1d0u: goto label_12b1d0;
        case 0x12b1d4u: goto label_12b1d4;
        case 0x12b1d8u: goto label_12b1d8;
        case 0x12b1dcu: goto label_12b1dc;
        case 0x12b1e0u: goto label_12b1e0;
        case 0x12b1e4u: goto label_12b1e4;
        case 0x12b1e8u: goto label_12b1e8;
        case 0x12b1ecu: goto label_12b1ec;
        case 0x12b1f0u: goto label_12b1f0;
        case 0x12b1f4u: goto label_12b1f4;
        case 0x12b1f8u: goto label_12b1f8;
        case 0x12b1fcu: goto label_12b1fc;
        case 0x12b200u: goto label_12b200;
        case 0x12b204u: goto label_12b204;
        case 0x12b208u: goto label_12b208;
        case 0x12b20cu: goto label_12b20c;
        case 0x12b210u: goto label_12b210;
        case 0x12b214u: goto label_12b214;
        case 0x12b218u: goto label_12b218;
        case 0x12b21cu: goto label_12b21c;
        case 0x12b220u: goto label_12b220;
        case 0x12b224u: goto label_12b224;
        case 0x12b228u: goto label_12b228;
        case 0x12b22cu: goto label_12b22c;
        case 0x12b230u: goto label_12b230;
        case 0x12b234u: goto label_12b234;
        case 0x12b238u: goto label_12b238;
        case 0x12b23cu: goto label_12b23c;
        case 0x12b240u: goto label_12b240;
        case 0x12b244u: goto label_12b244;
        case 0x12b248u: goto label_12b248;
        case 0x12b24cu: goto label_12b24c;
        case 0x12b250u: goto label_12b250;
        case 0x12b254u: goto label_12b254;
        case 0x12b258u: goto label_12b258;
        case 0x12b25cu: goto label_12b25c;
        case 0x12b260u: goto label_12b260;
        case 0x12b264u: goto label_12b264;
        case 0x12b268u: goto label_12b268;
        case 0x12b26cu: goto label_12b26c;
        case 0x12b270u: goto label_12b270;
        case 0x12b274u: goto label_12b274;
        case 0x12b278u: goto label_12b278;
        case 0x12b27cu: goto label_12b27c;
        case 0x12b280u: goto label_12b280;
        case 0x12b284u: goto label_12b284;
        case 0x12b288u: goto label_12b288;
        case 0x12b28cu: goto label_12b28c;
        case 0x12b290u: goto label_12b290;
        case 0x12b294u: goto label_12b294;
        case 0x12b298u: goto label_12b298;
        case 0x12b29cu: goto label_12b29c;
        case 0x12b2a0u: goto label_12b2a0;
        case 0x12b2a4u: goto label_12b2a4;
        case 0x12b2a8u: goto label_12b2a8;
        case 0x12b2acu: goto label_12b2ac;
        case 0x12b2b0u: goto label_12b2b0;
        case 0x12b2b4u: goto label_12b2b4;
        case 0x12b2b8u: goto label_12b2b8;
        case 0x12b2bcu: goto label_12b2bc;
        case 0x12b2c0u: goto label_12b2c0;
        case 0x12b2c4u: goto label_12b2c4;
        case 0x12b2c8u: goto label_12b2c8;
        case 0x12b2ccu: goto label_12b2cc;
        case 0x12b2d0u: goto label_12b2d0;
        case 0x12b2d4u: goto label_12b2d4;
        case 0x12b2d8u: goto label_12b2d8;
        case 0x12b2dcu: goto label_12b2dc;
        case 0x12b2e0u: goto label_12b2e0;
        case 0x12b2e4u: goto label_12b2e4;
        case 0x12b2e8u: goto label_12b2e8;
        case 0x12b2ecu: goto label_12b2ec;
        case 0x12b2f0u: goto label_12b2f0;
        case 0x12b2f4u: goto label_12b2f4;
        case 0x12b2f8u: goto label_12b2f8;
        case 0x12b2fcu: goto label_12b2fc;
        case 0x12b300u: goto label_12b300;
        case 0x12b304u: goto label_12b304;
        case 0x12b308u: goto label_12b308;
        case 0x12b30cu: goto label_12b30c;
        case 0x12b310u: goto label_12b310;
        case 0x12b314u: goto label_12b314;
        case 0x12b318u: goto label_12b318;
        case 0x12b31cu: goto label_12b31c;
        case 0x12b320u: goto label_12b320;
        case 0x12b324u: goto label_12b324;
        case 0x12b328u: goto label_12b328;
        case 0x12b32cu: goto label_12b32c;
        case 0x12b330u: goto label_12b330;
        case 0x12b334u: goto label_12b334;
        case 0x12b338u: goto label_12b338;
        case 0x12b33cu: goto label_12b33c;
        case 0x12b340u: goto label_12b340;
        case 0x12b344u: goto label_12b344;
        case 0x12b348u: goto label_12b348;
        case 0x12b34cu: goto label_12b34c;
        case 0x12b350u: goto label_12b350;
        case 0x12b354u: goto label_12b354;
        case 0x12b358u: goto label_12b358;
        case 0x12b35cu: goto label_12b35c;
        case 0x12b360u: goto label_12b360;
        case 0x12b364u: goto label_12b364;
        case 0x12b368u: goto label_12b368;
        case 0x12b36cu: goto label_12b36c;
        case 0x12b370u: goto label_12b370;
        case 0x12b374u: goto label_12b374;
        case 0x12b378u: goto label_12b378;
        case 0x12b37cu: goto label_12b37c;
        case 0x12b380u: goto label_12b380;
        case 0x12b384u: goto label_12b384;
        case 0x12b388u: goto label_12b388;
        case 0x12b38cu: goto label_12b38c;
        case 0x12b390u: goto label_12b390;
        case 0x12b394u: goto label_12b394;
        case 0x12b398u: goto label_12b398;
        case 0x12b39cu: goto label_12b39c;
        case 0x12b3a0u: goto label_12b3a0;
        case 0x12b3a4u: goto label_12b3a4;
        case 0x12b3a8u: goto label_12b3a8;
        case 0x12b3acu: goto label_12b3ac;
        case 0x12b3b0u: goto label_12b3b0;
        case 0x12b3b4u: goto label_12b3b4;
        case 0x12b3b8u: goto label_12b3b8;
        case 0x12b3bcu: goto label_12b3bc;
        case 0x12b3c0u: goto label_12b3c0;
        case 0x12b3c4u: goto label_12b3c4;
        case 0x12b3c8u: goto label_12b3c8;
        case 0x12b3ccu: goto label_12b3cc;
        case 0x12b3d0u: goto label_12b3d0;
        case 0x12b3d4u: goto label_12b3d4;
        case 0x12b3d8u: goto label_12b3d8;
        case 0x12b3dcu: goto label_12b3dc;
        case 0x12b3e0u: goto label_12b3e0;
        case 0x12b3e4u: goto label_12b3e4;
        case 0x12b3e8u: goto label_12b3e8;
        case 0x12b3ecu: goto label_12b3ec;
        case 0x12b3f0u: goto label_12b3f0;
        case 0x12b3f4u: goto label_12b3f4;
        case 0x12b3f8u: goto label_12b3f8;
        case 0x12b3fcu: goto label_12b3fc;
        case 0x12b400u: goto label_12b400;
        case 0x12b404u: goto label_12b404;
        case 0x12b408u: goto label_12b408;
        case 0x12b40cu: goto label_12b40c;
        case 0x12b410u: goto label_12b410;
        case 0x12b414u: goto label_12b414;
        case 0x12b418u: goto label_12b418;
        case 0x12b41cu: goto label_12b41c;
        case 0x12b420u: goto label_12b420;
        case 0x12b424u: goto label_12b424;
        case 0x12b428u: goto label_12b428;
        case 0x12b42cu: goto label_12b42c;
        case 0x12b430u: goto label_12b430;
        case 0x12b434u: goto label_12b434;
        case 0x12b438u: goto label_12b438;
        case 0x12b43cu: goto label_12b43c;
        case 0x12b440u: goto label_12b440;
        case 0x12b444u: goto label_12b444;
        case 0x12b448u: goto label_12b448;
        case 0x12b44cu: goto label_12b44c;
        case 0x12b450u: goto label_12b450;
        case 0x12b454u: goto label_12b454;
        case 0x12b458u: goto label_12b458;
        case 0x12b45cu: goto label_12b45c;
        case 0x12b460u: goto label_12b460;
        case 0x12b464u: goto label_12b464;
        case 0x12b468u: goto label_12b468;
        case 0x12b46cu: goto label_12b46c;
        case 0x12b470u: goto label_12b470;
        case 0x12b474u: goto label_12b474;
        case 0x12b478u: goto label_12b478;
        case 0x12b47cu: goto label_12b47c;
        case 0x12b480u: goto label_12b480;
        case 0x12b484u: goto label_12b484;
        case 0x12b488u: goto label_12b488;
        case 0x12b48cu: goto label_12b48c;
        case 0x12b490u: goto label_12b490;
        case 0x12b494u: goto label_12b494;
        case 0x12b498u: goto label_12b498;
        case 0x12b49cu: goto label_12b49c;
        case 0x12b4a0u: goto label_12b4a0;
        case 0x12b4a4u: goto label_12b4a4;
        case 0x12b4a8u: goto label_12b4a8;
        case 0x12b4acu: goto label_12b4ac;
        case 0x12b4b0u: goto label_12b4b0;
        case 0x12b4b4u: goto label_12b4b4;
        case 0x12b4b8u: goto label_12b4b8;
        case 0x12b4bcu: goto label_12b4bc;
        case 0x12b4c0u: goto label_12b4c0;
        case 0x12b4c4u: goto label_12b4c4;
        case 0x12b4c8u: goto label_12b4c8;
        case 0x12b4ccu: goto label_12b4cc;
        case 0x12b4d0u: goto label_12b4d0;
        case 0x12b4d4u: goto label_12b4d4;
        case 0x12b4d8u: goto label_12b4d8;
        case 0x12b4dcu: goto label_12b4dc;
        case 0x12b4e0u: goto label_12b4e0;
        case 0x12b4e4u: goto label_12b4e4;
        case 0x12b4e8u: goto label_12b4e8;
        case 0x12b4ecu: goto label_12b4ec;
        case 0x12b4f0u: goto label_12b4f0;
        case 0x12b4f4u: goto label_12b4f4;
        case 0x12b4f8u: goto label_12b4f8;
        case 0x12b4fcu: goto label_12b4fc;
        case 0x12b500u: goto label_12b500;
        case 0x12b504u: goto label_12b504;
        case 0x12b508u: goto label_12b508;
        case 0x12b50cu: goto label_12b50c;
        case 0x12b510u: goto label_12b510;
        case 0x12b514u: goto label_12b514;
        case 0x12b518u: goto label_12b518;
        case 0x12b51cu: goto label_12b51c;
        case 0x12b520u: goto label_12b520;
        case 0x12b524u: goto label_12b524;
        case 0x12b528u: goto label_12b528;
        case 0x12b52cu: goto label_12b52c;
        case 0x12b530u: goto label_12b530;
        case 0x12b534u: goto label_12b534;
        case 0x12b538u: goto label_12b538;
        case 0x12b53cu: goto label_12b53c;
        case 0x12b540u: goto label_12b540;
        case 0x12b544u: goto label_12b544;
        case 0x12b548u: goto label_12b548;
        case 0x12b54cu: goto label_12b54c;
        case 0x12b550u: goto label_12b550;
        case 0x12b554u: goto label_12b554;
        case 0x12b558u: goto label_12b558;
        case 0x12b55cu: goto label_12b55c;
        case 0x12b560u: goto label_12b560;
        case 0x12b564u: goto label_12b564;
        case 0x12b568u: goto label_12b568;
        case 0x12b56cu: goto label_12b56c;
        case 0x12b570u: goto label_12b570;
        case 0x12b574u: goto label_12b574;
        case 0x12b578u: goto label_12b578;
        case 0x12b57cu: goto label_12b57c;
        case 0x12b580u: goto label_12b580;
        case 0x12b584u: goto label_12b584;
        case 0x12b588u: goto label_12b588;
        case 0x12b58cu: goto label_12b58c;
        case 0x12b590u: goto label_12b590;
        case 0x12b594u: goto label_12b594;
        case 0x12b598u: goto label_12b598;
        case 0x12b59cu: goto label_12b59c;
        case 0x12b5a0u: goto label_12b5a0;
        case 0x12b5a4u: goto label_12b5a4;
        case 0x12b5a8u: goto label_12b5a8;
        case 0x12b5acu: goto label_12b5ac;
        case 0x12b5b0u: goto label_12b5b0;
        case 0x12b5b4u: goto label_12b5b4;
        case 0x12b5b8u: goto label_12b5b8;
        case 0x12b5bcu: goto label_12b5bc;
        case 0x12b5c0u: goto label_12b5c0;
        case 0x12b5c4u: goto label_12b5c4;
        case 0x12b5c8u: goto label_12b5c8;
        case 0x12b5ccu: goto label_12b5cc;
        case 0x12b5d0u: goto label_12b5d0;
        case 0x12b5d4u: goto label_12b5d4;
        case 0x12b5d8u: goto label_12b5d8;
        case 0x12b5dcu: goto label_12b5dc;
        case 0x12b5e0u: goto label_12b5e0;
        case 0x12b5e4u: goto label_12b5e4;
        case 0x12b5e8u: goto label_12b5e8;
        case 0x12b5ecu: goto label_12b5ec;
        case 0x12b5f0u: goto label_12b5f0;
        case 0x12b5f4u: goto label_12b5f4;
        case 0x12b5f8u: goto label_12b5f8;
        case 0x12b5fcu: goto label_12b5fc;
        case 0x12b600u: goto label_12b600;
        case 0x12b604u: goto label_12b604;
        case 0x12b608u: goto label_12b608;
        case 0x12b60cu: goto label_12b60c;
        case 0x12b610u: goto label_12b610;
        case 0x12b614u: goto label_12b614;
        case 0x12b618u: goto label_12b618;
        case 0x12b61cu: goto label_12b61c;
        case 0x12b620u: goto label_12b620;
        case 0x12b624u: goto label_12b624;
        case 0x12b628u: goto label_12b628;
        case 0x12b62cu: goto label_12b62c;
        case 0x12b630u: goto label_12b630;
        case 0x12b634u: goto label_12b634;
        case 0x12b638u: goto label_12b638;
        case 0x12b63cu: goto label_12b63c;
        case 0x12b640u: goto label_12b640;
        case 0x12b644u: goto label_12b644;
        case 0x12b648u: goto label_12b648;
        case 0x12b64cu: goto label_12b64c;
        case 0x12b650u: goto label_12b650;
        case 0x12b654u: goto label_12b654;
        case 0x12b658u: goto label_12b658;
        case 0x12b65cu: goto label_12b65c;
        case 0x12b660u: goto label_12b660;
        case 0x12b664u: goto label_12b664;
        case 0x12b668u: goto label_12b668;
        case 0x12b66cu: goto label_12b66c;
        case 0x12b670u: goto label_12b670;
        case 0x12b674u: goto label_12b674;
        case 0x12b678u: goto label_12b678;
        case 0x12b67cu: goto label_12b67c;
        case 0x12b680u: goto label_12b680;
        case 0x12b684u: goto label_12b684;
        case 0x12b688u: goto label_12b688;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b690u: goto label_12b690;
        case 0x12b694u: goto label_12b694;
        case 0x12b698u: goto label_12b698;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6acu: goto label_12b6ac;
        case 0x12b6b0u: goto label_12b6b0;
        case 0x12b6b4u: goto label_12b6b4;
        case 0x12b6b8u: goto label_12b6b8;
        case 0x12b6bcu: goto label_12b6bc;
        case 0x12b6c0u: goto label_12b6c0;
        case 0x12b6c4u: goto label_12b6c4;
        case 0x12b6c8u: goto label_12b6c8;
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6d0u: goto label_12b6d0;
        case 0x12b6d4u: goto label_12b6d4;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b6dcu: goto label_12b6dc;
        case 0x12b6e0u: goto label_12b6e0;
        case 0x12b6e4u: goto label_12b6e4;
        case 0x12b6e8u: goto label_12b6e8;
        case 0x12b6ecu: goto label_12b6ec;
        case 0x12b6f0u: goto label_12b6f0;
        case 0x12b6f4u: goto label_12b6f4;
        case 0x12b6f8u: goto label_12b6f8;
        case 0x12b6fcu: goto label_12b6fc;
        case 0x12b700u: goto label_12b700;
        case 0x12b704u: goto label_12b704;
        case 0x12b708u: goto label_12b708;
        case 0x12b70cu: goto label_12b70c;
        case 0x12b710u: goto label_12b710;
        case 0x12b714u: goto label_12b714;
        case 0x12b718u: goto label_12b718;
        case 0x12b71cu: goto label_12b71c;
        case 0x12b720u: goto label_12b720;
        case 0x12b724u: goto label_12b724;
        case 0x12b728u: goto label_12b728;
        case 0x12b72cu: goto label_12b72c;
        case 0x12b730u: goto label_12b730;
        case 0x12b734u: goto label_12b734;
        case 0x12b738u: goto label_12b738;
        case 0x12b73cu: goto label_12b73c;
        case 0x12b740u: goto label_12b740;
        case 0x12b744u: goto label_12b744;
        case 0x12b748u: goto label_12b748;
        case 0x12b74cu: goto label_12b74c;
        case 0x12b750u: goto label_12b750;
        case 0x12b754u: goto label_12b754;
        case 0x12b758u: goto label_12b758;
        case 0x12b75cu: goto label_12b75c;
        case 0x12b760u: goto label_12b760;
        case 0x12b764u: goto label_12b764;
        case 0x12b768u: goto label_12b768;
        case 0x12b76cu: goto label_12b76c;
        case 0x12b770u: goto label_12b770;
        case 0x12b774u: goto label_12b774;
        case 0x12b778u: goto label_12b778;
        case 0x12b77cu: goto label_12b77c;
        case 0x12b780u: goto label_12b780;
        case 0x12b784u: goto label_12b784;
        case 0x12b788u: goto label_12b788;
        case 0x12b78cu: goto label_12b78c;
        case 0x12b790u: goto label_12b790;
        case 0x12b794u: goto label_12b794;
        case 0x12b798u: goto label_12b798;
        case 0x12b79cu: goto label_12b79c;
        case 0x12b7a0u: goto label_12b7a0;
        case 0x12b7a4u: goto label_12b7a4;
        case 0x12b7a8u: goto label_12b7a8;
        case 0x12b7acu: goto label_12b7ac;
        case 0x12b7b0u: goto label_12b7b0;
        case 0x12b7b4u: goto label_12b7b4;
        case 0x12b7b8u: goto label_12b7b8;
        case 0x12b7bcu: goto label_12b7bc;
        case 0x12b7c0u: goto label_12b7c0;
        case 0x12b7c4u: goto label_12b7c4;
        case 0x12b7c8u: goto label_12b7c8;
        case 0x12b7ccu: goto label_12b7cc;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b7d4u: goto label_12b7d4;
        case 0x12b7d8u: goto label_12b7d8;
        case 0x12b7dcu: goto label_12b7dc;
        case 0x12b7e0u: goto label_12b7e0;
        case 0x12b7e4u: goto label_12b7e4;
        case 0x12b7e8u: goto label_12b7e8;
        case 0x12b7ecu: goto label_12b7ec;
        case 0x12b7f0u: goto label_12b7f0;
        case 0x12b7f4u: goto label_12b7f4;
        case 0x12b7f8u: goto label_12b7f8;
        case 0x12b7fcu: goto label_12b7fc;
        case 0x12b800u: goto label_12b800;
        case 0x12b804u: goto label_12b804;
        case 0x12b808u: goto label_12b808;
        case 0x12b80cu: goto label_12b80c;
        case 0x12b810u: goto label_12b810;
        case 0x12b814u: goto label_12b814;
        case 0x12b818u: goto label_12b818;
        case 0x12b81cu: goto label_12b81c;
        case 0x12b820u: goto label_12b820;
        case 0x12b824u: goto label_12b824;
        case 0x12b828u: goto label_12b828;
        case 0x12b82cu: goto label_12b82c;
        case 0x12b830u: goto label_12b830;
        case 0x12b834u: goto label_12b834;
        case 0x12b838u: goto label_12b838;
        case 0x12b83cu: goto label_12b83c;
        case 0x12b840u: goto label_12b840;
        case 0x12b844u: goto label_12b844;
        case 0x12b848u: goto label_12b848;
        case 0x12b84cu: goto label_12b84c;
        case 0x12b850u: goto label_12b850;
        case 0x12b854u: goto label_12b854;
        case 0x12b858u: goto label_12b858;
        case 0x12b85cu: goto label_12b85c;
        case 0x12b860u: goto label_12b860;
        case 0x12b864u: goto label_12b864;
        case 0x12b868u: goto label_12b868;
        case 0x12b86cu: goto label_12b86c;
        case 0x12b870u: goto label_12b870;
        case 0x12b874u: goto label_12b874;
        case 0x12b878u: goto label_12b878;
        case 0x12b87cu: goto label_12b87c;
        case 0x12b880u: goto label_12b880;
        case 0x12b884u: goto label_12b884;
        case 0x12b888u: goto label_12b888;
        case 0x12b88cu: goto label_12b88c;
        case 0x12b890u: goto label_12b890;
        case 0x12b894u: goto label_12b894;
        case 0x12b898u: goto label_12b898;
        case 0x12b89cu: goto label_12b89c;
        case 0x12b8a0u: goto label_12b8a0;
        case 0x12b8a4u: goto label_12b8a4;
        case 0x12b8a8u: goto label_12b8a8;
        case 0x12b8acu: goto label_12b8ac;
        case 0x12b8b0u: goto label_12b8b0;
        case 0x12b8b4u: goto label_12b8b4;
        case 0x12b8b8u: goto label_12b8b8;
        case 0x12b8bcu: goto label_12b8bc;
        case 0x12b8c0u: goto label_12b8c0;
        case 0x12b8c4u: goto label_12b8c4;
        case 0x12b8c8u: goto label_12b8c8;
        case 0x12b8ccu: goto label_12b8cc;
        case 0x12b8d0u: goto label_12b8d0;
        case 0x12b8d4u: goto label_12b8d4;
        case 0x12b8d8u: goto label_12b8d8;
        case 0x12b8dcu: goto label_12b8dc;
        case 0x12b8e0u: goto label_12b8e0;
        case 0x12b8e4u: goto label_12b8e4;
        case 0x12b8e8u: goto label_12b8e8;
        case 0x12b8ecu: goto label_12b8ec;
        case 0x12b8f0u: goto label_12b8f0;
        case 0x12b8f4u: goto label_12b8f4;
        case 0x12b8f8u: goto label_12b8f8;
        case 0x12b8fcu: goto label_12b8fc;
        case 0x12b900u: goto label_12b900;
        case 0x12b904u: goto label_12b904;
        case 0x12b908u: goto label_12b908;
        case 0x12b90cu: goto label_12b90c;
        case 0x12b910u: goto label_12b910;
        case 0x12b914u: goto label_12b914;
        case 0x12b918u: goto label_12b918;
        case 0x12b91cu: goto label_12b91c;
        case 0x12b920u: goto label_12b920;
        case 0x12b924u: goto label_12b924;
        case 0x12b928u: goto label_12b928;
        case 0x12b92cu: goto label_12b92c;
        case 0x12b930u: goto label_12b930;
        case 0x12b934u: goto label_12b934;
        case 0x12b938u: goto label_12b938;
        case 0x12b93cu: goto label_12b93c;
        case 0x12b940u: goto label_12b940;
        case 0x12b944u: goto label_12b944;
        case 0x12b948u: goto label_12b948;
        case 0x12b94cu: goto label_12b94c;
        case 0x12b950u: goto label_12b950;
        case 0x12b954u: goto label_12b954;
        case 0x12b958u: goto label_12b958;
        case 0x12b95cu: goto label_12b95c;
        case 0x12b960u: goto label_12b960;
        case 0x12b964u: goto label_12b964;
        case 0x12b968u: goto label_12b968;
        case 0x12b96cu: goto label_12b96c;
        case 0x12b970u: goto label_12b970;
        case 0x12b974u: goto label_12b974;
        case 0x12b978u: goto label_12b978;
        case 0x12b97cu: goto label_12b97c;
        case 0x12b980u: goto label_12b980;
        case 0x12b984u: goto label_12b984;
        case 0x12b988u: goto label_12b988;
        case 0x12b98cu: goto label_12b98c;
        case 0x12b990u: goto label_12b990;
        case 0x12b994u: goto label_12b994;
        case 0x12b998u: goto label_12b998;
        case 0x12b99cu: goto label_12b99c;
        case 0x12b9a0u: goto label_12b9a0;
        case 0x12b9a4u: goto label_12b9a4;
        case 0x12b9a8u: goto label_12b9a8;
        case 0x12b9acu: goto label_12b9ac;
        case 0x12b9b0u: goto label_12b9b0;
        case 0x12b9b4u: goto label_12b9b4;
        case 0x12b9b8u: goto label_12b9b8;
        case 0x12b9bcu: goto label_12b9bc;
        case 0x12b9c0u: goto label_12b9c0;
        case 0x12b9c4u: goto label_12b9c4;
        case 0x12b9c8u: goto label_12b9c8;
        case 0x12b9ccu: goto label_12b9cc;
        case 0x12b9d0u: goto label_12b9d0;
        case 0x12b9d4u: goto label_12b9d4;
        case 0x12b9d8u: goto label_12b9d8;
        case 0x12b9dcu: goto label_12b9dc;
        case 0x12b9e0u: goto label_12b9e0;
        case 0x12b9e4u: goto label_12b9e4;
        case 0x12b9e8u: goto label_12b9e8;
        case 0x12b9ecu: goto label_12b9ec;
        case 0x12b9f0u: goto label_12b9f0;
        case 0x12b9f4u: goto label_12b9f4;
        case 0x12b9f8u: goto label_12b9f8;
        case 0x12b9fcu: goto label_12b9fc;
        case 0x12ba00u: goto label_12ba00;
        case 0x12ba04u: goto label_12ba04;
        case 0x12ba08u: goto label_12ba08;
        case 0x12ba0cu: goto label_12ba0c;
        case 0x12ba10u: goto label_12ba10;
        case 0x12ba14u: goto label_12ba14;
        case 0x12ba18u: goto label_12ba18;
        case 0x12ba1cu: goto label_12ba1c;
        case 0x12ba20u: goto label_12ba20;
        case 0x12ba24u: goto label_12ba24;
        case 0x12ba28u: goto label_12ba28;
        case 0x12ba2cu: goto label_12ba2c;
        case 0x12ba30u: goto label_12ba30;
        case 0x12ba34u: goto label_12ba34;
        case 0x12ba38u: goto label_12ba38;
        case 0x12ba3cu: goto label_12ba3c;
        case 0x12ba40u: goto label_12ba40;
        case 0x12ba44u: goto label_12ba44;
        case 0x12ba48u: goto label_12ba48;
        case 0x12ba4cu: goto label_12ba4c;
        case 0x12ba50u: goto label_12ba50;
        case 0x12ba54u: goto label_12ba54;
        case 0x12ba58u: goto label_12ba58;
        case 0x12ba5cu: goto label_12ba5c;
        case 0x12ba60u: goto label_12ba60;
        case 0x12ba64u: goto label_12ba64;
        case 0x12ba68u: goto label_12ba68;
        case 0x12ba6cu: goto label_12ba6c;
        case 0x12ba70u: goto label_12ba70;
        case 0x12ba74u: goto label_12ba74;
        case 0x12ba78u: goto label_12ba78;
        case 0x12ba7cu: goto label_12ba7c;
        case 0x12ba80u: goto label_12ba80;
        case 0x12ba84u: goto label_12ba84;
        case 0x12ba88u: goto label_12ba88;
        case 0x12ba8cu: goto label_12ba8c;
        case 0x12ba90u: goto label_12ba90;
        case 0x12ba94u: goto label_12ba94;
        case 0x12ba98u: goto label_12ba98;
        case 0x12ba9cu: goto label_12ba9c;
        case 0x12baa0u: goto label_12baa0;
        case 0x12baa4u: goto label_12baa4;
        case 0x12baa8u: goto label_12baa8;
        case 0x12baacu: goto label_12baac;
        case 0x12bab0u: goto label_12bab0;
        case 0x12bab4u: goto label_12bab4;
        case 0x12bab8u: goto label_12bab8;
        case 0x12babcu: goto label_12babc;
        case 0x12bac0u: goto label_12bac0;
        case 0x12bac4u: goto label_12bac4;
        case 0x12bac8u: goto label_12bac8;
        case 0x12baccu: goto label_12bacc;
        case 0x12bad0u: goto label_12bad0;
        case 0x12bad4u: goto label_12bad4;
        case 0x12bad8u: goto label_12bad8;
        case 0x12badcu: goto label_12badc;
        case 0x12bae0u: goto label_12bae0;
        case 0x12bae4u: goto label_12bae4;
        case 0x12bae8u: goto label_12bae8;
        case 0x12baecu: goto label_12baec;
        case 0x12baf0u: goto label_12baf0;
        case 0x12baf4u: goto label_12baf4;
        case 0x12baf8u: goto label_12baf8;
        case 0x12bafcu: goto label_12bafc;
        case 0x12bb00u: goto label_12bb00;
        case 0x12bb04u: goto label_12bb04;
        case 0x12bb08u: goto label_12bb08;
        case 0x12bb0cu: goto label_12bb0c;
        case 0x12bb10u: goto label_12bb10;
        case 0x12bb14u: goto label_12bb14;
        case 0x12bb18u: goto label_12bb18;
        case 0x12bb1cu: goto label_12bb1c;
        case 0x12bb20u: goto label_12bb20;
        case 0x12bb24u: goto label_12bb24;
        case 0x12bb28u: goto label_12bb28;
        case 0x12bb2cu: goto label_12bb2c;
        case 0x12bb30u: goto label_12bb30;
        case 0x12bb34u: goto label_12bb34;
        case 0x12bb38u: goto label_12bb38;
        case 0x12bb3cu: goto label_12bb3c;
        case 0x12bb40u: goto label_12bb40;
        case 0x12bb44u: goto label_12bb44;
        case 0x12bb48u: goto label_12bb48;
        case 0x12bb4cu: goto label_12bb4c;
        case 0x12bb50u: goto label_12bb50;
        case 0x12bb54u: goto label_12bb54;
        case 0x12bb58u: goto label_12bb58;
        case 0x12bb5cu: goto label_12bb5c;
        case 0x12bb60u: goto label_12bb60;
        case 0x12bb64u: goto label_12bb64;
        case 0x12bb68u: goto label_12bb68;
        case 0x12bb6cu: goto label_12bb6c;
        case 0x12bb70u: goto label_12bb70;
        case 0x12bb74u: goto label_12bb74;
        case 0x12bb78u: goto label_12bb78;
        case 0x12bb7cu: goto label_12bb7c;
        case 0x12bb80u: goto label_12bb80;
        case 0x12bb84u: goto label_12bb84;
        case 0x12bb88u: goto label_12bb88;
        case 0x12bb8cu: goto label_12bb8c;
        case 0x12bb90u: goto label_12bb90;
        case 0x12bb94u: goto label_12bb94;
        case 0x12bb98u: goto label_12bb98;
        case 0x12bb9cu: goto label_12bb9c;
        case 0x12bba0u: goto label_12bba0;
        case 0x12bba4u: goto label_12bba4;
        case 0x12bba8u: goto label_12bba8;
        case 0x12bbacu: goto label_12bbac;
        case 0x12bbb0u: goto label_12bbb0;
        case 0x12bbb4u: goto label_12bbb4;
        case 0x12bbb8u: goto label_12bbb8;
        case 0x12bbbcu: goto label_12bbbc;
        case 0x12bbc0u: goto label_12bbc0;
        case 0x12bbc4u: goto label_12bbc4;
        case 0x12bbc8u: goto label_12bbc8;
        case 0x12bbccu: goto label_12bbcc;
        case 0x12bbd0u: goto label_12bbd0;
        case 0x12bbd4u: goto label_12bbd4;
        case 0x12bbd8u: goto label_12bbd8;
        case 0x12bbdcu: goto label_12bbdc;
        case 0x12bbe0u: goto label_12bbe0;
        case 0x12bbe4u: goto label_12bbe4;
        case 0x12bbe8u: goto label_12bbe8;
        case 0x12bbecu: goto label_12bbec;
        case 0x12bbf0u: goto label_12bbf0;
        case 0x12bbf4u: goto label_12bbf4;
        case 0x12bbf8u: goto label_12bbf8;
        case 0x12bbfcu: goto label_12bbfc;
        case 0x12bc00u: goto label_12bc00;
        case 0x12bc04u: goto label_12bc04;
        case 0x12bc08u: goto label_12bc08;
        case 0x12bc0cu: goto label_12bc0c;
        case 0x12bc10u: goto label_12bc10;
        case 0x12bc14u: goto label_12bc14;
        case 0x12bc18u: goto label_12bc18;
        case 0x12bc1cu: goto label_12bc1c;
        case 0x12bc20u: goto label_12bc20;
        case 0x12bc24u: goto label_12bc24;
        case 0x12bc28u: goto label_12bc28;
        case 0x12bc2cu: goto label_12bc2c;
        case 0x12bc30u: goto label_12bc30;
        case 0x12bc34u: goto label_12bc34;
        case 0x12bc38u: goto label_12bc38;
        case 0x12bc3cu: goto label_12bc3c;
        case 0x12bc40u: goto label_12bc40;
        case 0x12bc44u: goto label_12bc44;
        case 0x12bc48u: goto label_12bc48;
        case 0x12bc4cu: goto label_12bc4c;
        case 0x12bc50u: goto label_12bc50;
        case 0x12bc54u: goto label_12bc54;
        case 0x12bc58u: goto label_12bc58;
        case 0x12bc5cu: goto label_12bc5c;
        case 0x12bc60u: goto label_12bc60;
        case 0x12bc64u: goto label_12bc64;
        case 0x12bc68u: goto label_12bc68;
        case 0x12bc6cu: goto label_12bc6c;
        case 0x12bc70u: goto label_12bc70;
        case 0x12bc74u: goto label_12bc74;
        case 0x12bc78u: goto label_12bc78;
        case 0x12bc7cu: goto label_12bc7c;
        case 0x12bc80u: goto label_12bc80;
        case 0x12bc84u: goto label_12bc84;
        case 0x12bc88u: goto label_12bc88;
        case 0x12bc8cu: goto label_12bc8c;
        case 0x12bc90u: goto label_12bc90;
        case 0x12bc94u: goto label_12bc94;
        case 0x12bc98u: goto label_12bc98;
        case 0x12bc9cu: goto label_12bc9c;
        case 0x12bca0u: goto label_12bca0;
        case 0x12bca4u: goto label_12bca4;
        case 0x12bca8u: goto label_12bca8;
        case 0x12bcacu: goto label_12bcac;
        case 0x12bcb0u: goto label_12bcb0;
        case 0x12bcb4u: goto label_12bcb4;
        case 0x12bcb8u: goto label_12bcb8;
        case 0x12bcbcu: goto label_12bcbc;
        case 0x12bcc0u: goto label_12bcc0;
        case 0x12bcc4u: goto label_12bcc4;
        case 0x12bcc8u: goto label_12bcc8;
        case 0x12bcccu: goto label_12bccc;
        case 0x12bcd0u: goto label_12bcd0;
        case 0x12bcd4u: goto label_12bcd4;
        case 0x12bcd8u: goto label_12bcd8;
        case 0x12bcdcu: goto label_12bcdc;
        case 0x12bce0u: goto label_12bce0;
        case 0x12bce4u: goto label_12bce4;
        case 0x12bce8u: goto label_12bce8;
        case 0x12bcecu: goto label_12bcec;
        case 0x12bcf0u: goto label_12bcf0;
        case 0x12bcf4u: goto label_12bcf4;
        case 0x12bcf8u: goto label_12bcf8;
        case 0x12bcfcu: goto label_12bcfc;
        case 0x12bd00u: goto label_12bd00;
        case 0x12bd04u: goto label_12bd04;
        case 0x12bd08u: goto label_12bd08;
        case 0x12bd0cu: goto label_12bd0c;
        case 0x12bd10u: goto label_12bd10;
        case 0x12bd14u: goto label_12bd14;
        case 0x12bd18u: goto label_12bd18;
        case 0x12bd1cu: goto label_12bd1c;
        case 0x12bd20u: goto label_12bd20;
        case 0x12bd24u: goto label_12bd24;
        case 0x12bd28u: goto label_12bd28;
        case 0x12bd2cu: goto label_12bd2c;
        case 0x12bd30u: goto label_12bd30;
        case 0x12bd34u: goto label_12bd34;
        case 0x12bd38u: goto label_12bd38;
        case 0x12bd3cu: goto label_12bd3c;
        case 0x12bd40u: goto label_12bd40;
        case 0x12bd44u: goto label_12bd44;
        case 0x12bd48u: goto label_12bd48;
        case 0x12bd4cu: goto label_12bd4c;
        case 0x12bd50u: goto label_12bd50;
        case 0x12bd54u: goto label_12bd54;
        case 0x12bd58u: goto label_12bd58;
        case 0x12bd5cu: goto label_12bd5c;
        case 0x12bd60u: goto label_12bd60;
        case 0x12bd64u: goto label_12bd64;
        case 0x12bd68u: goto label_12bd68;
        case 0x12bd6cu: goto label_12bd6c;
        case 0x12bd70u: goto label_12bd70;
        case 0x12bd74u: goto label_12bd74;
        case 0x12bd78u: goto label_12bd78;
        case 0x12bd7cu: goto label_12bd7c;
        case 0x12bd80u: goto label_12bd80;
        case 0x12bd84u: goto label_12bd84;
        case 0x12bd88u: goto label_12bd88;
        case 0x12bd8cu: goto label_12bd8c;
        case 0x12bd90u: goto label_12bd90;
        case 0x12bd94u: goto label_12bd94;
        case 0x12bd98u: goto label_12bd98;
        case 0x12bd9cu: goto label_12bd9c;
        case 0x12bda0u: goto label_12bda0;
        case 0x12bda4u: goto label_12bda4;
        case 0x12bda8u: goto label_12bda8;
        case 0x12bdacu: goto label_12bdac;
        case 0x12bdb0u: goto label_12bdb0;
        case 0x12bdb4u: goto label_12bdb4;
        case 0x12bdb8u: goto label_12bdb8;
        case 0x12bdbcu: goto label_12bdbc;
        case 0x12bdc0u: goto label_12bdc0;
        case 0x12bdc4u: goto label_12bdc4;
        case 0x12bdc8u: goto label_12bdc8;
        case 0x12bdccu: goto label_12bdcc;
        case 0x12bdd0u: goto label_12bdd0;
        case 0x12bdd4u: goto label_12bdd4;
        case 0x12bdd8u: goto label_12bdd8;
        case 0x12bddcu: goto label_12bddc;
        case 0x12bde0u: goto label_12bde0;
        case 0x12bde4u: goto label_12bde4;
        case 0x12bde8u: goto label_12bde8;
        case 0x12bdecu: goto label_12bdec;
        case 0x12bdf0u: goto label_12bdf0;
        case 0x12bdf4u: goto label_12bdf4;
        case 0x12bdf8u: goto label_12bdf8;
        case 0x12bdfcu: goto label_12bdfc;
        case 0x12be00u: goto label_12be00;
        case 0x12be04u: goto label_12be04;
        case 0x12be08u: goto label_12be08;
        case 0x12be0cu: goto label_12be0c;
        case 0x12be10u: goto label_12be10;
        case 0x12be14u: goto label_12be14;
        case 0x12be18u: goto label_12be18;
        case 0x12be1cu: goto label_12be1c;
        case 0x12be20u: goto label_12be20;
        case 0x12be24u: goto label_12be24;
        case 0x12be28u: goto label_12be28;
        case 0x12be2cu: goto label_12be2c;
        case 0x12be30u: goto label_12be30;
        case 0x12be34u: goto label_12be34;
        case 0x12be38u: goto label_12be38;
        case 0x12be3cu: goto label_12be3c;
        case 0x12be40u: goto label_12be40;
        case 0x12be44u: goto label_12be44;
        case 0x12be48u: goto label_12be48;
        case 0x12be4cu: goto label_12be4c;
        case 0x12be50u: goto label_12be50;
        case 0x12be54u: goto label_12be54;
        case 0x12be58u: goto label_12be58;
        case 0x12be5cu: goto label_12be5c;
        case 0x12be60u: goto label_12be60;
        case 0x12be64u: goto label_12be64;
        case 0x12be68u: goto label_12be68;
        case 0x12be6cu: goto label_12be6c;
        case 0x12be70u: goto label_12be70;
        case 0x12be74u: goto label_12be74;
        case 0x12be78u: goto label_12be78;
        case 0x12be7cu: goto label_12be7c;
        case 0x12be80u: goto label_12be80;
        case 0x12be84u: goto label_12be84;
        case 0x12be88u: goto label_12be88;
        case 0x12be8cu: goto label_12be8c;
        case 0x12be90u: goto label_12be90;
        case 0x12be94u: goto label_12be94;
        case 0x12be98u: goto label_12be98;
        case 0x12be9cu: goto label_12be9c;
        case 0x12bea0u: goto label_12bea0;
        case 0x12bea4u: goto label_12bea4;
        case 0x12bea8u: goto label_12bea8;
        case 0x12beacu: goto label_12beac;
        case 0x12beb0u: goto label_12beb0;
        case 0x12beb4u: goto label_12beb4;
        case 0x12beb8u: goto label_12beb8;
        case 0x12bebcu: goto label_12bebc;
        case 0x12bec0u: goto label_12bec0;
        case 0x12bec4u: goto label_12bec4;
        case 0x12bec8u: goto label_12bec8;
        case 0x12beccu: goto label_12becc;
        case 0x12bed0u: goto label_12bed0;
        case 0x12bed4u: goto label_12bed4;
        case 0x12bed8u: goto label_12bed8;
        case 0x12bedcu: goto label_12bedc;
        case 0x12bee0u: goto label_12bee0;
        case 0x12bee4u: goto label_12bee4;
        case 0x12bee8u: goto label_12bee8;
        case 0x12beecu: goto label_12beec;
        case 0x12bef0u: goto label_12bef0;
        case 0x12bef4u: goto label_12bef4;
        case 0x12bef8u: goto label_12bef8;
        case 0x12befcu: goto label_12befc;
        case 0x12bf00u: goto label_12bf00;
        case 0x12bf04u: goto label_12bf04;
        case 0x12bf08u: goto label_12bf08;
        case 0x12bf0cu: goto label_12bf0c;
        case 0x12bf10u: goto label_12bf10;
        case 0x12bf14u: goto label_12bf14;
        case 0x12bf18u: goto label_12bf18;
        case 0x12bf1cu: goto label_12bf1c;
        case 0x12bf20u: goto label_12bf20;
        case 0x12bf24u: goto label_12bf24;
        case 0x12bf28u: goto label_12bf28;
        case 0x12bf2cu: goto label_12bf2c;
        case 0x12bf30u: goto label_12bf30;
        case 0x12bf34u: goto label_12bf34;
        case 0x12bf38u: goto label_12bf38;
        case 0x12bf3cu: goto label_12bf3c;
        case 0x12bf40u: goto label_12bf40;
        case 0x12bf44u: goto label_12bf44;
        case 0x12bf48u: goto label_12bf48;
        case 0x12bf4cu: goto label_12bf4c;
        case 0x12bf50u: goto label_12bf50;
        case 0x12bf54u: goto label_12bf54;
        case 0x12bf58u: goto label_12bf58;
        case 0x12bf5cu: goto label_12bf5c;
        case 0x12bf60u: goto label_12bf60;
        case 0x12bf64u: goto label_12bf64;
        case 0x12bf68u: goto label_12bf68;
        case 0x12bf6cu: goto label_12bf6c;
        case 0x12bf70u: goto label_12bf70;
        case 0x12bf74u: goto label_12bf74;
        case 0x12bf78u: goto label_12bf78;
        case 0x12bf7cu: goto label_12bf7c;
        case 0x12bf80u: goto label_12bf80;
        case 0x12bf84u: goto label_12bf84;
        case 0x12bf88u: goto label_12bf88;
        case 0x12bf8cu: goto label_12bf8c;
        case 0x12bf90u: goto label_12bf90;
        case 0x12bf94u: goto label_12bf94;
        case 0x12bf98u: goto label_12bf98;
        case 0x12bf9cu: goto label_12bf9c;
        case 0x12bfa0u: goto label_12bfa0;
        case 0x12bfa4u: goto label_12bfa4;
        case 0x12bfa8u: goto label_12bfa8;
        case 0x12bfacu: goto label_12bfac;
        case 0x12bfb0u: goto label_12bfb0;
        case 0x12bfb4u: goto label_12bfb4;
        case 0x12bfb8u: goto label_12bfb8;
        case 0x12bfbcu: goto label_12bfbc;
        case 0x12bfc0u: goto label_12bfc0;
        case 0x12bfc4u: goto label_12bfc4;
        case 0x12bfc8u: goto label_12bfc8;
        case 0x12bfccu: goto label_12bfcc;
        case 0x12bfd0u: goto label_12bfd0;
        case 0x12bfd4u: goto label_12bfd4;
        case 0x12bfd8u: goto label_12bfd8;
        case 0x12bfdcu: goto label_12bfdc;
        case 0x12bfe0u: goto label_12bfe0;
        case 0x12bfe4u: goto label_12bfe4;
        case 0x12bfe8u: goto label_12bfe8;
        case 0x12bfecu: goto label_12bfec;
        case 0x12bff0u: goto label_12bff0;
        case 0x12bff4u: goto label_12bff4;
        case 0x12bff8u: goto label_12bff8;
        case 0x12bffcu: goto label_12bffc;
        case 0x12c000u: goto label_12c000;
        case 0x12c004u: goto label_12c004;
        case 0x12c008u: goto label_12c008;
        case 0x12c00cu: goto label_12c00c;
        case 0x12c010u: goto label_12c010;
        case 0x12c014u: goto label_12c014;
        case 0x12c018u: goto label_12c018;
        case 0x12c01cu: goto label_12c01c;
        case 0x12c020u: goto label_12c020;
        case 0x12c024u: goto label_12c024;
        case 0x12c028u: goto label_12c028;
        case 0x12c02cu: goto label_12c02c;
        case 0x12c030u: goto label_12c030;
        case 0x12c034u: goto label_12c034;
        case 0x12c038u: goto label_12c038;
        case 0x12c03cu: goto label_12c03c;
        case 0x12c040u: goto label_12c040;
        case 0x12c044u: goto label_12c044;
        case 0x12c048u: goto label_12c048;
        case 0x12c04cu: goto label_12c04c;
        case 0x12c050u: goto label_12c050;
        case 0x12c054u: goto label_12c054;
        case 0x12c058u: goto label_12c058;
        case 0x12c05cu: goto label_12c05c;
        case 0x12c060u: goto label_12c060;
        case 0x12c064u: goto label_12c064;
        case 0x12c068u: goto label_12c068;
        case 0x12c06cu: goto label_12c06c;
        case 0x12c070u: goto label_12c070;
        case 0x12c074u: goto label_12c074;
        case 0x12c078u: goto label_12c078;
        case 0x12c07cu: goto label_12c07c;
        case 0x12c080u: goto label_12c080;
        case 0x12c084u: goto label_12c084;
        case 0x12c088u: goto label_12c088;
        case 0x12c08cu: goto label_12c08c;
        case 0x12c090u: goto label_12c090;
        case 0x12c094u: goto label_12c094;
        case 0x12c098u: goto label_12c098;
        case 0x12c09cu: goto label_12c09c;
        case 0x12c0a0u: goto label_12c0a0;
        case 0x12c0a4u: goto label_12c0a4;
        case 0x12c0a8u: goto label_12c0a8;
        case 0x12c0acu: goto label_12c0ac;
        case 0x12c0b0u: goto label_12c0b0;
        case 0x12c0b4u: goto label_12c0b4;
        case 0x12c0b8u: goto label_12c0b8;
        case 0x12c0bcu: goto label_12c0bc;
        case 0x12c0c0u: goto label_12c0c0;
        case 0x12c0c4u: goto label_12c0c4;
        case 0x12c0c8u: goto label_12c0c8;
        case 0x12c0ccu: goto label_12c0cc;
        case 0x12c0d0u: goto label_12c0d0;
        case 0x12c0d4u: goto label_12c0d4;
        case 0x12c0d8u: goto label_12c0d8;
        case 0x12c0dcu: goto label_12c0dc;
        case 0x12c0e0u: goto label_12c0e0;
        case 0x12c0e4u: goto label_12c0e4;
        case 0x12c0e8u: goto label_12c0e8;
        case 0x12c0ecu: goto label_12c0ec;
        case 0x12c0f0u: goto label_12c0f0;
        case 0x12c0f4u: goto label_12c0f4;
        case 0x12c0f8u: goto label_12c0f8;
        case 0x12c0fcu: goto label_12c0fc;
        case 0x12c100u: goto label_12c100;
        case 0x12c104u: goto label_12c104;
        case 0x12c108u: goto label_12c108;
        case 0x12c10cu: goto label_12c10c;
        case 0x12c110u: goto label_12c110;
        case 0x12c114u: goto label_12c114;
        case 0x12c118u: goto label_12c118;
        case 0x12c11cu: goto label_12c11c;
        case 0x12c120u: goto label_12c120;
        case 0x12c124u: goto label_12c124;
        case 0x12c128u: goto label_12c128;
        case 0x12c12cu: goto label_12c12c;
        case 0x12c130u: goto label_12c130;
        case 0x12c134u: goto label_12c134;
        case 0x12c138u: goto label_12c138;
        case 0x12c13cu: goto label_12c13c;
        case 0x12c140u: goto label_12c140;
        case 0x12c144u: goto label_12c144;
        case 0x12c148u: goto label_12c148;
        case 0x12c14cu: goto label_12c14c;
        case 0x12c150u: goto label_12c150;
        case 0x12c154u: goto label_12c154;
        case 0x12c158u: goto label_12c158;
        case 0x12c15cu: goto label_12c15c;
        case 0x12c160u: goto label_12c160;
        case 0x12c164u: goto label_12c164;
        case 0x12c168u: goto label_12c168;
        case 0x12c16cu: goto label_12c16c;
        case 0x12c170u: goto label_12c170;
        case 0x12c174u: goto label_12c174;
        case 0x12c178u: goto label_12c178;
        case 0x12c17cu: goto label_12c17c;
        case 0x12c180u: goto label_12c180;
        case 0x12c184u: goto label_12c184;
        case 0x12c188u: goto label_12c188;
        case 0x12c18cu: goto label_12c18c;
        case 0x12c190u: goto label_12c190;
        case 0x12c194u: goto label_12c194;
        case 0x12c198u: goto label_12c198;
        case 0x12c19cu: goto label_12c19c;
        case 0x12c1a0u: goto label_12c1a0;
        case 0x12c1a4u: goto label_12c1a4;
        case 0x12c1a8u: goto label_12c1a8;
        case 0x12c1acu: goto label_12c1ac;
        case 0x12c1b0u: goto label_12c1b0;
        case 0x12c1b4u: goto label_12c1b4;
        case 0x12c1b8u: goto label_12c1b8;
        case 0x12c1bcu: goto label_12c1bc;
        case 0x12c1c0u: goto label_12c1c0;
        case 0x12c1c4u: goto label_12c1c4;
        case 0x12c1c8u: goto label_12c1c8;
        case 0x12c1ccu: goto label_12c1cc;
        case 0x12c1d0u: goto label_12c1d0;
        case 0x12c1d4u: goto label_12c1d4;
        case 0x12c1d8u: goto label_12c1d8;
        case 0x12c1dcu: goto label_12c1dc;
        case 0x12c1e0u: goto label_12c1e0;
        case 0x12c1e4u: goto label_12c1e4;
        case 0x12c1e8u: goto label_12c1e8;
        case 0x12c1ecu: goto label_12c1ec;
        case 0x12c1f0u: goto label_12c1f0;
        case 0x12c1f4u: goto label_12c1f4;
        case 0x12c1f8u: goto label_12c1f8;
        case 0x12c1fcu: goto label_12c1fc;
        case 0x12c200u: goto label_12c200;
        case 0x12c204u: goto label_12c204;
        case 0x12c208u: goto label_12c208;
        case 0x12c20cu: goto label_12c20c;
        case 0x12c210u: goto label_12c210;
        case 0x12c214u: goto label_12c214;
        case 0x12c218u: goto label_12c218;
        case 0x12c21cu: goto label_12c21c;
        case 0x12c220u: goto label_12c220;
        case 0x12c224u: goto label_12c224;
        case 0x12c228u: goto label_12c228;
        case 0x12c22cu: goto label_12c22c;
        case 0x12c230u: goto label_12c230;
        case 0x12c234u: goto label_12c234;
        case 0x12c238u: goto label_12c238;
        case 0x12c23cu: goto label_12c23c;
        case 0x12c240u: goto label_12c240;
        case 0x12c244u: goto label_12c244;
        case 0x12c248u: goto label_12c248;
        case 0x12c24cu: goto label_12c24c;
        case 0x12c250u: goto label_12c250;
        case 0x12c254u: goto label_12c254;
        case 0x12c258u: goto label_12c258;
        case 0x12c25cu: goto label_12c25c;
        case 0x12c260u: goto label_12c260;
        case 0x12c264u: goto label_12c264;
        case 0x12c268u: goto label_12c268;
        case 0x12c26cu: goto label_12c26c;
        case 0x12c270u: goto label_12c270;
        case 0x12c274u: goto label_12c274;
        case 0x12c278u: goto label_12c278;
        case 0x12c27cu: goto label_12c27c;
        case 0x12c280u: goto label_12c280;
        case 0x12c284u: goto label_12c284;
        case 0x12c288u: goto label_12c288;
        case 0x12c28cu: goto label_12c28c;
        case 0x12c290u: goto label_12c290;
        case 0x12c294u: goto label_12c294;
        case 0x12c298u: goto label_12c298;
        case 0x12c29cu: goto label_12c29c;
        case 0x12c2a0u: goto label_12c2a0;
        case 0x12c2a4u: goto label_12c2a4;
        case 0x12c2a8u: goto label_12c2a8;
        case 0x12c2acu: goto label_12c2ac;
        case 0x12c2b0u: goto label_12c2b0;
        case 0x12c2b4u: goto label_12c2b4;
        case 0x12c2b8u: goto label_12c2b8;
        case 0x12c2bcu: goto label_12c2bc;
        case 0x12c2c0u: goto label_12c2c0;
        case 0x12c2c4u: goto label_12c2c4;
        case 0x12c2c8u: goto label_12c2c8;
        case 0x12c2ccu: goto label_12c2cc;
        case 0x12c2d0u: goto label_12c2d0;
        case 0x12c2d4u: goto label_12c2d4;
        case 0x12c2d8u: goto label_12c2d8;
        case 0x12c2dcu: goto label_12c2dc;
        case 0x12c2e0u: goto label_12c2e0;
        case 0x12c2e4u: goto label_12c2e4;
        case 0x12c2e8u: goto label_12c2e8;
        case 0x12c2ecu: goto label_12c2ec;
        case 0x12c2f0u: goto label_12c2f0;
        case 0x12c2f4u: goto label_12c2f4;
        case 0x12c2f8u: goto label_12c2f8;
        case 0x12c2fcu: goto label_12c2fc;
        case 0x12c300u: goto label_12c300;
        case 0x12c304u: goto label_12c304;
        case 0x12c308u: goto label_12c308;
        case 0x12c30cu: goto label_12c30c;
        case 0x12c310u: goto label_12c310;
        case 0x12c314u: goto label_12c314;
        case 0x12c318u: goto label_12c318;
        case 0x12c31cu: goto label_12c31c;
        case 0x12c320u: goto label_12c320;
        case 0x12c324u: goto label_12c324;
        case 0x12c328u: goto label_12c328;
        case 0x12c32cu: goto label_12c32c;
        case 0x12c330u: goto label_12c330;
        case 0x12c334u: goto label_12c334;
        case 0x12c338u: goto label_12c338;
        case 0x12c33cu: goto label_12c33c;
        case 0x12c340u: goto label_12c340;
        case 0x12c344u: goto label_12c344;
        case 0x12c348u: goto label_12c348;
        case 0x12c34cu: goto label_12c34c;
        case 0x12c350u: goto label_12c350;
        case 0x12c354u: goto label_12c354;
        case 0x12c358u: goto label_12c358;
        case 0x12c35cu: goto label_12c35c;
        case 0x12c360u: goto label_12c360;
        case 0x12c364u: goto label_12c364;
        case 0x12c368u: goto label_12c368;
        case 0x12c36cu: goto label_12c36c;
        case 0x12c370u: goto label_12c370;
        case 0x12c374u: goto label_12c374;
        case 0x12c378u: goto label_12c378;
        case 0x12c37cu: goto label_12c37c;
        case 0x12c380u: goto label_12c380;
        case 0x12c384u: goto label_12c384;
        case 0x12c388u: goto label_12c388;
        case 0x12c38cu: goto label_12c38c;
        case 0x12c390u: goto label_12c390;
        case 0x12c394u: goto label_12c394;
        case 0x12c398u: goto label_12c398;
        case 0x12c39cu: goto label_12c39c;
        case 0x12c3a0u: goto label_12c3a0;
        case 0x12c3a4u: goto label_12c3a4;
        case 0x12c3a8u: goto label_12c3a8;
        case 0x12c3acu: goto label_12c3ac;
        case 0x12c3b0u: goto label_12c3b0;
        case 0x12c3b4u: goto label_12c3b4;
        case 0x12c3b8u: goto label_12c3b8;
        case 0x12c3bcu: goto label_12c3bc;
        case 0x12c3c0u: goto label_12c3c0;
        case 0x12c3c4u: goto label_12c3c4;
        case 0x12c3c8u: goto label_12c3c8;
        case 0x12c3ccu: goto label_12c3cc;
        case 0x12c3d0u: goto label_12c3d0;
        case 0x12c3d4u: goto label_12c3d4;
        case 0x12c3d8u: goto label_12c3d8;
        case 0x12c3dcu: goto label_12c3dc;
        case 0x12c3e0u: goto label_12c3e0;
        case 0x12c3e4u: goto label_12c3e4;
        case 0x12c3e8u: goto label_12c3e8;
        case 0x12c3ecu: goto label_12c3ec;
        case 0x12c3f0u: goto label_12c3f0;
        case 0x12c3f4u: goto label_12c3f4;
        case 0x12c3f8u: goto label_12c3f8;
        case 0x12c3fcu: goto label_12c3fc;
        case 0x12c400u: goto label_12c400;
        case 0x12c404u: goto label_12c404;
        case 0x12c408u: goto label_12c408;
        case 0x12c40cu: goto label_12c40c;
        case 0x12c410u: goto label_12c410;
        case 0x12c414u: goto label_12c414;
        case 0x12c418u: goto label_12c418;
        case 0x12c41cu: goto label_12c41c;
        case 0x12c420u: goto label_12c420;
        case 0x12c424u: goto label_12c424;
        case 0x12c428u: goto label_12c428;
        case 0x12c42cu: goto label_12c42c;
        case 0x12c430u: goto label_12c430;
        case 0x12c434u: goto label_12c434;
        case 0x12c438u: goto label_12c438;
        case 0x12c43cu: goto label_12c43c;
        case 0x12c440u: goto label_12c440;
        case 0x12c444u: goto label_12c444;
        case 0x12c448u: goto label_12c448;
        case 0x12c44cu: goto label_12c44c;
        case 0x12c450u: goto label_12c450;
        case 0x12c454u: goto label_12c454;
        case 0x12c458u: goto label_12c458;
        case 0x12c45cu: goto label_12c45c;
        case 0x12c460u: goto label_12c460;
        case 0x12c464u: goto label_12c464;
        case 0x12c468u: goto label_12c468;
        case 0x12c46cu: goto label_12c46c;
        case 0x12c470u: goto label_12c470;
        case 0x12c474u: goto label_12c474;
        case 0x12c478u: goto label_12c478;
        case 0x12c47cu: goto label_12c47c;
        case 0x12c480u: goto label_12c480;
        case 0x12c484u: goto label_12c484;
        case 0x12c488u: goto label_12c488;
        case 0x12c48cu: goto label_12c48c;
        case 0x12c490u: goto label_12c490;
        case 0x12c494u: goto label_12c494;
        case 0x12c498u: goto label_12c498;
        case 0x12c49cu: goto label_12c49c;
        case 0x12c4a0u: goto label_12c4a0;
        case 0x12c4a4u: goto label_12c4a4;
        case 0x12c4a8u: goto label_12c4a8;
        case 0x12c4acu: goto label_12c4ac;
        case 0x12c4b0u: goto label_12c4b0;
        case 0x12c4b4u: goto label_12c4b4;
        case 0x12c4b8u: goto label_12c4b8;
        case 0x12c4bcu: goto label_12c4bc;
        case 0x12c4c0u: goto label_12c4c0;
        case 0x12c4c4u: goto label_12c4c4;
        case 0x12c4c8u: goto label_12c4c8;
        case 0x12c4ccu: goto label_12c4cc;
        case 0x12c4d0u: goto label_12c4d0;
        case 0x12c4d4u: goto label_12c4d4;
        case 0x12c4d8u: goto label_12c4d8;
        case 0x12c4dcu: goto label_12c4dc;
        case 0x12c4e0u: goto label_12c4e0;
        case 0x12c4e4u: goto label_12c4e4;
        case 0x12c4e8u: goto label_12c4e8;
        case 0x12c4ecu: goto label_12c4ec;
        case 0x12c4f0u: goto label_12c4f0;
        case 0x12c4f4u: goto label_12c4f4;
        case 0x12c4f8u: goto label_12c4f8;
        case 0x12c4fcu: goto label_12c4fc;
        case 0x12c500u: goto label_12c500;
        case 0x12c504u: goto label_12c504;
        case 0x12c508u: goto label_12c508;
        case 0x12c50cu: goto label_12c50c;
        case 0x12c510u: goto label_12c510;
        case 0x12c514u: goto label_12c514;
        case 0x12c518u: goto label_12c518;
        case 0x12c51cu: goto label_12c51c;
        case 0x12c520u: goto label_12c520;
        case 0x12c524u: goto label_12c524;
        case 0x12c528u: goto label_12c528;
        case 0x12c52cu: goto label_12c52c;
        case 0x12c530u: goto label_12c530;
        case 0x12c534u: goto label_12c534;
        case 0x12c538u: goto label_12c538;
        case 0x12c53cu: goto label_12c53c;
        case 0x12c540u: goto label_12c540;
        case 0x12c544u: goto label_12c544;
        case 0x12c548u: goto label_12c548;
        case 0x12c54cu: goto label_12c54c;
        case 0x12c550u: goto label_12c550;
        case 0x12c554u: goto label_12c554;
        case 0x12c558u: goto label_12c558;
        case 0x12c55cu: goto label_12c55c;
        case 0x12c560u: goto label_12c560;
        case 0x12c564u: goto label_12c564;
        case 0x12c568u: goto label_12c568;
        case 0x12c56cu: goto label_12c56c;
        case 0x12c570u: goto label_12c570;
        case 0x12c574u: goto label_12c574;
        case 0x12c578u: goto label_12c578;
        case 0x12c57cu: goto label_12c57c;
        case 0x12c580u: goto label_12c580;
        case 0x12c584u: goto label_12c584;
        case 0x12c588u: goto label_12c588;
        case 0x12c58cu: goto label_12c58c;
        case 0x12c590u: goto label_12c590;
        case 0x12c594u: goto label_12c594;
        case 0x12c598u: goto label_12c598;
        case 0x12c59cu: goto label_12c59c;
        case 0x12c5a0u: goto label_12c5a0;
        case 0x12c5a4u: goto label_12c5a4;
        case 0x12c5a8u: goto label_12c5a8;
        case 0x12c5acu: goto label_12c5ac;
        case 0x12c5b0u: goto label_12c5b0;
        case 0x12c5b4u: goto label_12c5b4;
        case 0x12c5b8u: goto label_12c5b8;
        case 0x12c5bcu: goto label_12c5bc;
        case 0x12c5c0u: goto label_12c5c0;
        case 0x12c5c4u: goto label_12c5c4;
        case 0x12c5c8u: goto label_12c5c8;
        case 0x12c5ccu: goto label_12c5cc;
        case 0x12c5d0u: goto label_12c5d0;
        case 0x12c5d4u: goto label_12c5d4;
        case 0x12c5d8u: goto label_12c5d8;
        case 0x12c5dcu: goto label_12c5dc;
        case 0x12c5e0u: goto label_12c5e0;
        case 0x12c5e4u: goto label_12c5e4;
        case 0x12c5e8u: goto label_12c5e8;
        case 0x12c5ecu: goto label_12c5ec;
        case 0x12c5f0u: goto label_12c5f0;
        case 0x12c5f4u: goto label_12c5f4;
        case 0x12c5f8u: goto label_12c5f8;
        case 0x12c5fcu: goto label_12c5fc;
        case 0x12c600u: goto label_12c600;
        case 0x12c604u: goto label_12c604;
        case 0x12c608u: goto label_12c608;
        case 0x12c60cu: goto label_12c60c;
        case 0x12c610u: goto label_12c610;
        case 0x12c614u: goto label_12c614;
        case 0x12c618u: goto label_12c618;
        case 0x12c61cu: goto label_12c61c;
        case 0x12c620u: goto label_12c620;
        case 0x12c624u: goto label_12c624;
        case 0x12c628u: goto label_12c628;
        case 0x12c62cu: goto label_12c62c;
        case 0x12c630u: goto label_12c630;
        case 0x12c634u: goto label_12c634;
        case 0x12c638u: goto label_12c638;
        case 0x12c63cu: goto label_12c63c;
        case 0x12c640u: goto label_12c640;
        case 0x12c644u: goto label_12c644;
        case 0x12c648u: goto label_12c648;
        case 0x12c64cu: goto label_12c64c;
        case 0x12c650u: goto label_12c650;
        case 0x12c654u: goto label_12c654;
        case 0x12c658u: goto label_12c658;
        case 0x12c65cu: goto label_12c65c;
        case 0x12c660u: goto label_12c660;
        case 0x12c664u: goto label_12c664;
        case 0x12c668u: goto label_12c668;
        case 0x12c66cu: goto label_12c66c;
        case 0x12c670u: goto label_12c670;
        case 0x12c674u: goto label_12c674;
        case 0x12c678u: goto label_12c678;
        case 0x12c67cu: goto label_12c67c;
        case 0x12c680u: goto label_12c680;
        case 0x12c684u: goto label_12c684;
        case 0x12c688u: goto label_12c688;
        case 0x12c68cu: goto label_12c68c;
        case 0x12c690u: goto label_12c690;
        case 0x12c694u: goto label_12c694;
        case 0x12c698u: goto label_12c698;
        case 0x12c69cu: goto label_12c69c;
        case 0x12c6a0u: goto label_12c6a0;
        case 0x12c6a4u: goto label_12c6a4;
        case 0x12c6a8u: goto label_12c6a8;
        case 0x12c6acu: goto label_12c6ac;
        case 0x12c6b0u: goto label_12c6b0;
        case 0x12c6b4u: goto label_12c6b4;
        case 0x12c6b8u: goto label_12c6b8;
        case 0x12c6bcu: goto label_12c6bc;
        case 0x12c6c0u: goto label_12c6c0;
        case 0x12c6c4u: goto label_12c6c4;
        case 0x12c6c8u: goto label_12c6c8;
        case 0x12c6ccu: goto label_12c6cc;
        case 0x12c6d0u: goto label_12c6d0;
        case 0x12c6d4u: goto label_12c6d4;
        case 0x12c6d8u: goto label_12c6d8;
        case 0x12c6dcu: goto label_12c6dc;
        case 0x12c6e0u: goto label_12c6e0;
        case 0x12c6e4u: goto label_12c6e4;
        case 0x12c6e8u: goto label_12c6e8;
        case 0x12c6ecu: goto label_12c6ec;
        case 0x12c6f0u: goto label_12c6f0;
        case 0x12c6f4u: goto label_12c6f4;
        case 0x12c6f8u: goto label_12c6f8;
        case 0x12c6fcu: goto label_12c6fc;
        case 0x12c700u: goto label_12c700;
        case 0x12c704u: goto label_12c704;
        case 0x12c708u: goto label_12c708;
        case 0x12c70cu: goto label_12c70c;
        case 0x12c710u: goto label_12c710;
        case 0x12c714u: goto label_12c714;
        case 0x12c718u: goto label_12c718;
        case 0x12c71cu: goto label_12c71c;
        case 0x12c720u: goto label_12c720;
        case 0x12c724u: goto label_12c724;
        case 0x12c728u: goto label_12c728;
        case 0x12c72cu: goto label_12c72c;
        case 0x12c730u: goto label_12c730;
        case 0x12c734u: goto label_12c734;
        case 0x12c738u: goto label_12c738;
        case 0x12c73cu: goto label_12c73c;
        case 0x12c740u: goto label_12c740;
        case 0x12c744u: goto label_12c744;
        case 0x12c748u: goto label_12c748;
        case 0x12c74cu: goto label_12c74c;
        case 0x12c750u: goto label_12c750;
        case 0x12c754u: goto label_12c754;
        case 0x12c758u: goto label_12c758;
        case 0x12c75cu: goto label_12c75c;
        case 0x12c760u: goto label_12c760;
        case 0x12c764u: goto label_12c764;
        case 0x12c768u: goto label_12c768;
        case 0x12c76cu: goto label_12c76c;
        case 0x12c770u: goto label_12c770;
        case 0x12c774u: goto label_12c774;
        case 0x12c778u: goto label_12c778;
        case 0x12c77cu: goto label_12c77c;
        case 0x12c780u: goto label_12c780;
        case 0x12c784u: goto label_12c784;
        case 0x12c788u: goto label_12c788;
        case 0x12c78cu: goto label_12c78c;
        case 0x12c790u: goto label_12c790;
        case 0x12c794u: goto label_12c794;
        case 0x12c798u: goto label_12c798;
        case 0x12c79cu: goto label_12c79c;
        case 0x12c7a0u: goto label_12c7a0;
        case 0x12c7a4u: goto label_12c7a4;
        case 0x12c7a8u: goto label_12c7a8;
        case 0x12c7acu: goto label_12c7ac;
        case 0x12c7b0u: goto label_12c7b0;
        case 0x12c7b4u: goto label_12c7b4;
        case 0x12c7b8u: goto label_12c7b8;
        case 0x12c7bcu: goto label_12c7bc;
        case 0x12c7c0u: goto label_12c7c0;
        case 0x12c7c4u: goto label_12c7c4;
        case 0x12c7c8u: goto label_12c7c8;
        case 0x12c7ccu: goto label_12c7cc;
        case 0x12c7d0u: goto label_12c7d0;
        case 0x12c7d4u: goto label_12c7d4;
        case 0x12c7d8u: goto label_12c7d8;
        case 0x12c7dcu: goto label_12c7dc;
        case 0x12c7e0u: goto label_12c7e0;
        case 0x12c7e4u: goto label_12c7e4;
        case 0x12c7e8u: goto label_12c7e8;
        case 0x12c7ecu: goto label_12c7ec;
        case 0x12c7f0u: goto label_12c7f0;
        case 0x12c7f4u: goto label_12c7f4;
        case 0x12c7f8u: goto label_12c7f8;
        case 0x12c7fcu: goto label_12c7fc;
        case 0x12c800u: goto label_12c800;
        case 0x12c804u: goto label_12c804;
        case 0x12c808u: goto label_12c808;
        case 0x12c80cu: goto label_12c80c;
        case 0x12c810u: goto label_12c810;
        case 0x12c814u: goto label_12c814;
        case 0x12c818u: goto label_12c818;
        case 0x12c81cu: goto label_12c81c;
        case 0x12c820u: goto label_12c820;
        case 0x12c824u: goto label_12c824;
        case 0x12c828u: goto label_12c828;
        case 0x12c82cu: goto label_12c82c;
        case 0x12c830u: goto label_12c830;
        case 0x12c834u: goto label_12c834;
        case 0x12c838u: goto label_12c838;
        case 0x12c83cu: goto label_12c83c;
        case 0x12c840u: goto label_12c840;
        case 0x12c844u: goto label_12c844;
        case 0x12c848u: goto label_12c848;
        case 0x12c84cu: goto label_12c84c;
        case 0x12c850u: goto label_12c850;
        case 0x12c854u: goto label_12c854;
        case 0x12c858u: goto label_12c858;
        case 0x12c85cu: goto label_12c85c;
        case 0x12c860u: goto label_12c860;
        case 0x12c864u: goto label_12c864;
        case 0x12c868u: goto label_12c868;
        case 0x12c86cu: goto label_12c86c;
        case 0x12c870u: goto label_12c870;
        case 0x12c874u: goto label_12c874;
        case 0x12c878u: goto label_12c878;
        case 0x12c87cu: goto label_12c87c;
        case 0x12c880u: goto label_12c880;
        case 0x12c884u: goto label_12c884;
        case 0x12c888u: goto label_12c888;
        case 0x12c88cu: goto label_12c88c;
        case 0x12c890u: goto label_12c890;
        case 0x12c894u: goto label_12c894;
        case 0x12c898u: goto label_12c898;
        case 0x12c89cu: goto label_12c89c;
        case 0x12c8a0u: goto label_12c8a0;
        case 0x12c8a4u: goto label_12c8a4;
        case 0x12c8a8u: goto label_12c8a8;
        case 0x12c8acu: goto label_12c8ac;
        case 0x12c8b0u: goto label_12c8b0;
        case 0x12c8b4u: goto label_12c8b4;
        case 0x12c8b8u: goto label_12c8b8;
        case 0x12c8bcu: goto label_12c8bc;
        case 0x12c8c0u: goto label_12c8c0;
        case 0x12c8c4u: goto label_12c8c4;
        case 0x12c8c8u: goto label_12c8c8;
        case 0x12c8ccu: goto label_12c8cc;
        case 0x12c8d0u: goto label_12c8d0;
        case 0x12c8d4u: goto label_12c8d4;
        case 0x12c8d8u: goto label_12c8d8;
        case 0x12c8dcu: goto label_12c8dc;
        case 0x12c8e0u: goto label_12c8e0;
        case 0x12c8e4u: goto label_12c8e4;
        case 0x12c8e8u: goto label_12c8e8;
        case 0x12c8ecu: goto label_12c8ec;
        case 0x12c8f0u: goto label_12c8f0;
        case 0x12c8f4u: goto label_12c8f4;
        case 0x12c8f8u: goto label_12c8f8;
        case 0x12c8fcu: goto label_12c8fc;
        case 0x12c900u: goto label_12c900;
        case 0x12c904u: goto label_12c904;
        case 0x12c908u: goto label_12c908;
        case 0x12c90cu: goto label_12c90c;
        case 0x12c910u: goto label_12c910;
        case 0x12c914u: goto label_12c914;
        case 0x12c918u: goto label_12c918;
        case 0x12c91cu: goto label_12c91c;
        case 0x12c920u: goto label_12c920;
        case 0x12c924u: goto label_12c924;
        case 0x12c928u: goto label_12c928;
        case 0x12c92cu: goto label_12c92c;
        case 0x12c930u: goto label_12c930;
        case 0x12c934u: goto label_12c934;
        case 0x12c938u: goto label_12c938;
        case 0x12c93cu: goto label_12c93c;
        case 0x12c940u: goto label_12c940;
        case 0x12c944u: goto label_12c944;
        case 0x12c948u: goto label_12c948;
        case 0x12c94cu: goto label_12c94c;
        case 0x12c950u: goto label_12c950;
        case 0x12c954u: goto label_12c954;
        case 0x12c958u: goto label_12c958;
        case 0x12c95cu: goto label_12c95c;
        case 0x12c960u: goto label_12c960;
        case 0x12c964u: goto label_12c964;
        case 0x12c968u: goto label_12c968;
        case 0x12c96cu: goto label_12c96c;
        case 0x12c970u: goto label_12c970;
        case 0x12c974u: goto label_12c974;
        case 0x12c978u: goto label_12c978;
        case 0x12c97cu: goto label_12c97c;
        case 0x12c980u: goto label_12c980;
        case 0x12c984u: goto label_12c984;
        case 0x12c988u: goto label_12c988;
        case 0x12c98cu: goto label_12c98c;
        case 0x12c990u: goto label_12c990;
        case 0x12c994u: goto label_12c994;
        case 0x12c998u: goto label_12c998;
        case 0x12c99cu: goto label_12c99c;
        case 0x12c9a0u: goto label_12c9a0;
        case 0x12c9a4u: goto label_12c9a4;
        case 0x12c9a8u: goto label_12c9a8;
        case 0x12c9acu: goto label_12c9ac;
        case 0x12c9b0u: goto label_12c9b0;
        case 0x12c9b4u: goto label_12c9b4;
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12c9bcu: goto label_12c9bc;
        case 0x12c9c0u: goto label_12c9c0;
        case 0x12c9c4u: goto label_12c9c4;
        case 0x12c9c8u: goto label_12c9c8;
        case 0x12c9ccu: goto label_12c9cc;
        case 0x12c9d0u: goto label_12c9d0;
        case 0x12c9d4u: goto label_12c9d4;
        case 0x12c9d8u: goto label_12c9d8;
        case 0x12c9dcu: goto label_12c9dc;
        case 0x12c9e0u: goto label_12c9e0;
        case 0x12c9e4u: goto label_12c9e4;
        case 0x12c9e8u: goto label_12c9e8;
        case 0x12c9ecu: goto label_12c9ec;
        case 0x12c9f0u: goto label_12c9f0;
        case 0x12c9f4u: goto label_12c9f4;
        case 0x12c9f8u: goto label_12c9f8;
        case 0x12c9fcu: goto label_12c9fc;
        case 0x12ca00u: goto label_12ca00;
        case 0x12ca04u: goto label_12ca04;
        case 0x12ca08u: goto label_12ca08;
        case 0x12ca0cu: goto label_12ca0c;
        case 0x12ca10u: goto label_12ca10;
        case 0x12ca14u: goto label_12ca14;
        case 0x12ca18u: goto label_12ca18;
        case 0x12ca1cu: goto label_12ca1c;
        case 0x12ca20u: goto label_12ca20;
        case 0x12ca24u: goto label_12ca24;
        case 0x12ca28u: goto label_12ca28;
        case 0x12ca2cu: goto label_12ca2c;
        case 0x12ca30u: goto label_12ca30;
        case 0x12ca34u: goto label_12ca34;
        case 0x12ca38u: goto label_12ca38;
        case 0x12ca3cu: goto label_12ca3c;
        case 0x12ca40u: goto label_12ca40;
        case 0x12ca44u: goto label_12ca44;
        case 0x12ca48u: goto label_12ca48;
        case 0x12ca4cu: goto label_12ca4c;
        case 0x12ca50u: goto label_12ca50;
        case 0x12ca54u: goto label_12ca54;
        case 0x12ca58u: goto label_12ca58;
        case 0x12ca5cu: goto label_12ca5c;
        case 0x12ca60u: goto label_12ca60;
        case 0x12ca64u: goto label_12ca64;
        case 0x12ca68u: goto label_12ca68;
        case 0x12ca6cu: goto label_12ca6c;
        case 0x12ca70u: goto label_12ca70;
        case 0x12ca74u: goto label_12ca74;
        case 0x12ca78u: goto label_12ca78;
        case 0x12ca7cu: goto label_12ca7c;
        case 0x12ca80u: goto label_12ca80;
        case 0x12ca84u: goto label_12ca84;
        case 0x12ca88u: goto label_12ca88;
        case 0x12ca8cu: goto label_12ca8c;
        case 0x12ca90u: goto label_12ca90;
        case 0x12ca94u: goto label_12ca94;
        case 0x12ca98u: goto label_12ca98;
        case 0x12ca9cu: goto label_12ca9c;
        case 0x12caa0u: goto label_12caa0;
        case 0x12caa4u: goto label_12caa4;
        case 0x12caa8u: goto label_12caa8;
        case 0x12caacu: goto label_12caac;
        case 0x12cab0u: goto label_12cab0;
        case 0x12cab4u: goto label_12cab4;
        case 0x12cab8u: goto label_12cab8;
        case 0x12cabcu: goto label_12cabc;
        case 0x12cac0u: goto label_12cac0;
        case 0x12cac4u: goto label_12cac4;
        case 0x12cac8u: goto label_12cac8;
        case 0x12caccu: goto label_12cacc;
        case 0x12cad0u: goto label_12cad0;
        case 0x12cad4u: goto label_12cad4;
        case 0x12cad8u: goto label_12cad8;
        case 0x12cadcu: goto label_12cadc;
        case 0x12cae0u: goto label_12cae0;
        case 0x12cae4u: goto label_12cae4;
        case 0x12cae8u: goto label_12cae8;
        case 0x12caecu: goto label_12caec;
        case 0x12caf0u: goto label_12caf0;
        case 0x12caf4u: goto label_12caf4;
        case 0x12caf8u: goto label_12caf8;
        case 0x12cafcu: goto label_12cafc;
        case 0x12cb00u: goto label_12cb00;
        case 0x12cb04u: goto label_12cb04;
        case 0x12cb08u: goto label_12cb08;
        case 0x12cb0cu: goto label_12cb0c;
        case 0x12cb10u: goto label_12cb10;
        case 0x12cb14u: goto label_12cb14;
        case 0x12cb18u: goto label_12cb18;
        case 0x12cb1cu: goto label_12cb1c;
        case 0x12cb20u: goto label_12cb20;
        case 0x12cb24u: goto label_12cb24;
        case 0x12cb28u: goto label_12cb28;
        case 0x12cb2cu: goto label_12cb2c;
        case 0x12cb30u: goto label_12cb30;
        case 0x12cb34u: goto label_12cb34;
        case 0x12cb38u: goto label_12cb38;
        case 0x12cb3cu: goto label_12cb3c;
        case 0x12cb40u: goto label_12cb40;
        case 0x12cb44u: goto label_12cb44;
        case 0x12cb48u: goto label_12cb48;
        case 0x12cb4cu: goto label_12cb4c;
        case 0x12cb50u: goto label_12cb50;
        case 0x12cb54u: goto label_12cb54;
        case 0x12cb58u: goto label_12cb58;
        case 0x12cb5cu: goto label_12cb5c;
        case 0x12cb60u: goto label_12cb60;
        case 0x12cb64u: goto label_12cb64;
        case 0x12cb68u: goto label_12cb68;
        case 0x12cb6cu: goto label_12cb6c;
        case 0x12cb70u: goto label_12cb70;
        case 0x12cb74u: goto label_12cb74;
        case 0x12cb78u: goto label_12cb78;
        case 0x12cb7cu: goto label_12cb7c;
        case 0x12cb80u: goto label_12cb80;
        case 0x12cb84u: goto label_12cb84;
        case 0x12cb88u: goto label_12cb88;
        case 0x12cb8cu: goto label_12cb8c;
        case 0x12cb90u: goto label_12cb90;
        case 0x12cb94u: goto label_12cb94;
        case 0x12cb98u: goto label_12cb98;
        case 0x12cb9cu: goto label_12cb9c;
        case 0x12cba0u: goto label_12cba0;
        case 0x12cba4u: goto label_12cba4;
        case 0x12cba8u: goto label_12cba8;
        case 0x12cbacu: goto label_12cbac;
        case 0x12cbb0u: goto label_12cbb0;
        case 0x12cbb4u: goto label_12cbb4;
        case 0x12cbb8u: goto label_12cbb8;
        case 0x12cbbcu: goto label_12cbbc;
        case 0x12cbc0u: goto label_12cbc0;
        case 0x12cbc4u: goto label_12cbc4;
        case 0x12cbc8u: goto label_12cbc8;
        case 0x12cbccu: goto label_12cbcc;
        case 0x12cbd0u: goto label_12cbd0;
        case 0x12cbd4u: goto label_12cbd4;
        case 0x12cbd8u: goto label_12cbd8;
        case 0x12cbdcu: goto label_12cbdc;
        case 0x12cbe0u: goto label_12cbe0;
        case 0x12cbe4u: goto label_12cbe4;
        case 0x12cbe8u: goto label_12cbe8;
        case 0x12cbecu: goto label_12cbec;
        case 0x12cbf0u: goto label_12cbf0;
        case 0x12cbf4u: goto label_12cbf4;
        case 0x12cbf8u: goto label_12cbf8;
        case 0x12cbfcu: goto label_12cbfc;
        case 0x12cc00u: goto label_12cc00;
        case 0x12cc04u: goto label_12cc04;
        case 0x12cc08u: goto label_12cc08;
        case 0x12cc0cu: goto label_12cc0c;
        case 0x12cc10u: goto label_12cc10;
        case 0x12cc14u: goto label_12cc14;
        case 0x12cc18u: goto label_12cc18;
        case 0x12cc1cu: goto label_12cc1c;
        case 0x12cc20u: goto label_12cc20;
        case 0x12cc24u: goto label_12cc24;
        case 0x12cc28u: goto label_12cc28;
        case 0x12cc2cu: goto label_12cc2c;
        case 0x12cc30u: goto label_12cc30;
        case 0x12cc34u: goto label_12cc34;
        case 0x12cc38u: goto label_12cc38;
        case 0x12cc3cu: goto label_12cc3c;
        case 0x12cc40u: goto label_12cc40;
        case 0x12cc44u: goto label_12cc44;
        case 0x12cc48u: goto label_12cc48;
        case 0x12cc4cu: goto label_12cc4c;
        case 0x12cc50u: goto label_12cc50;
        case 0x12cc54u: goto label_12cc54;
        case 0x12cc58u: goto label_12cc58;
        case 0x12cc5cu: goto label_12cc5c;
        case 0x12cc60u: goto label_12cc60;
        case 0x12cc64u: goto label_12cc64;
        case 0x12cc68u: goto label_12cc68;
        case 0x12cc6cu: goto label_12cc6c;
        case 0x12cc70u: goto label_12cc70;
        case 0x12cc74u: goto label_12cc74;
        case 0x12cc78u: goto label_12cc78;
        case 0x12cc7cu: goto label_12cc7c;
        case 0x12cc80u: goto label_12cc80;
        case 0x12cc84u: goto label_12cc84;
        case 0x12cc88u: goto label_12cc88;
        case 0x12cc8cu: goto label_12cc8c;
        case 0x12cc90u: goto label_12cc90;
        case 0x12cc94u: goto label_12cc94;
        case 0x12cc98u: goto label_12cc98;
        case 0x12cc9cu: goto label_12cc9c;
        case 0x12cca0u: goto label_12cca0;
        case 0x12cca4u: goto label_12cca4;
        case 0x12cca8u: goto label_12cca8;
        case 0x12ccacu: goto label_12ccac;
        case 0x12ccb0u: goto label_12ccb0;
        case 0x12ccb4u: goto label_12ccb4;
        case 0x12ccb8u: goto label_12ccb8;
        case 0x12ccbcu: goto label_12ccbc;
        case 0x12ccc0u: goto label_12ccc0;
        case 0x12ccc4u: goto label_12ccc4;
        case 0x12ccc8u: goto label_12ccc8;
        case 0x12ccccu: goto label_12cccc;
        case 0x12ccd0u: goto label_12ccd0;
        case 0x12ccd4u: goto label_12ccd4;
        case 0x12ccd8u: goto label_12ccd8;
        case 0x12ccdcu: goto label_12ccdc;
        case 0x12cce0u: goto label_12cce0;
        case 0x12cce4u: goto label_12cce4;
        case 0x12cce8u: goto label_12cce8;
        case 0x12ccecu: goto label_12ccec;
        case 0x12ccf0u: goto label_12ccf0;
        case 0x12ccf4u: goto label_12ccf4;
        case 0x12ccf8u: goto label_12ccf8;
        case 0x12ccfcu: goto label_12ccfc;
        case 0x12cd00u: goto label_12cd00;
        case 0x12cd04u: goto label_12cd04;
        case 0x12cd08u: goto label_12cd08;
        case 0x12cd0cu: goto label_12cd0c;
        case 0x12cd10u: goto label_12cd10;
        case 0x12cd14u: goto label_12cd14;
        case 0x12cd18u: goto label_12cd18;
        case 0x12cd1cu: goto label_12cd1c;
        case 0x12cd20u: goto label_12cd20;
        case 0x12cd24u: goto label_12cd24;
        case 0x12cd28u: goto label_12cd28;
        case 0x12cd2cu: goto label_12cd2c;
        case 0x12cd30u: goto label_12cd30;
        case 0x12cd34u: goto label_12cd34;
        case 0x12cd38u: goto label_12cd38;
        case 0x12cd3cu: goto label_12cd3c;
        case 0x12cd40u: goto label_12cd40;
        case 0x12cd44u: goto label_12cd44;
        case 0x12cd48u: goto label_12cd48;
        case 0x12cd4cu: goto label_12cd4c;
        case 0x12cd50u: goto label_12cd50;
        case 0x12cd54u: goto label_12cd54;
        case 0x12cd58u: goto label_12cd58;
        case 0x12cd5cu: goto label_12cd5c;
        case 0x12cd60u: goto label_12cd60;
        case 0x12cd64u: goto label_12cd64;
        case 0x12cd68u: goto label_12cd68;
        case 0x12cd6cu: goto label_12cd6c;
        case 0x12cd70u: goto label_12cd70;
        case 0x12cd74u: goto label_12cd74;
        case 0x12cd78u: goto label_12cd78;
        case 0x12cd7cu: goto label_12cd7c;
        case 0x12cd80u: goto label_12cd80;
        case 0x12cd84u: goto label_12cd84;
        case 0x12cd88u: goto label_12cd88;
        case 0x12cd8cu: goto label_12cd8c;
        case 0x12cd90u: goto label_12cd90;
        case 0x12cd94u: goto label_12cd94;
        case 0x12cd98u: goto label_12cd98;
        case 0x12cd9cu: goto label_12cd9c;
        case 0x12cda0u: goto label_12cda0;
        case 0x12cda4u: goto label_12cda4;
        case 0x12cda8u: goto label_12cda8;
        case 0x12cdacu: goto label_12cdac;
        case 0x12cdb0u: goto label_12cdb0;
        case 0x12cdb4u: goto label_12cdb4;
        case 0x12cdb8u: goto label_12cdb8;
        case 0x12cdbcu: goto label_12cdbc;
        case 0x12cdc0u: goto label_12cdc0;
        case 0x12cdc4u: goto label_12cdc4;
        case 0x12cdc8u: goto label_12cdc8;
        case 0x12cdccu: goto label_12cdcc;
        case 0x12cdd0u: goto label_12cdd0;
        case 0x12cdd4u: goto label_12cdd4;
        case 0x12cdd8u: goto label_12cdd8;
        case 0x12cddcu: goto label_12cddc;
        case 0x12cde0u: goto label_12cde0;
        case 0x12cde4u: goto label_12cde4;
        case 0x12cde8u: goto label_12cde8;
        case 0x12cdecu: goto label_12cdec;
        case 0x12cdf0u: goto label_12cdf0;
        case 0x12cdf4u: goto label_12cdf4;
        case 0x12cdf8u: goto label_12cdf8;
        case 0x12cdfcu: goto label_12cdfc;
        case 0x12ce00u: goto label_12ce00;
        case 0x12ce04u: goto label_12ce04;
        case 0x12ce08u: goto label_12ce08;
        case 0x12ce0cu: goto label_12ce0c;
        case 0x12ce10u: goto label_12ce10;
        case 0x12ce14u: goto label_12ce14;
        case 0x12ce18u: goto label_12ce18;
        case 0x12ce1cu: goto label_12ce1c;
        case 0x12ce20u: goto label_12ce20;
        case 0x12ce24u: goto label_12ce24;
        case 0x12ce28u: goto label_12ce28;
        case 0x12ce2cu: goto label_12ce2c;
        case 0x12ce30u: goto label_12ce30;
        case 0x12ce34u: goto label_12ce34;
        case 0x12ce38u: goto label_12ce38;
        case 0x12ce3cu: goto label_12ce3c;
        case 0x12ce40u: goto label_12ce40;
        case 0x12ce44u: goto label_12ce44;
        case 0x12ce48u: goto label_12ce48;
        case 0x12ce4cu: goto label_12ce4c;
        case 0x12ce50u: goto label_12ce50;
        case 0x12ce54u: goto label_12ce54;
        case 0x12ce58u: goto label_12ce58;
        case 0x12ce5cu: goto label_12ce5c;
        case 0x12ce60u: goto label_12ce60;
        case 0x12ce64u: goto label_12ce64;
        case 0x12ce68u: goto label_12ce68;
        case 0x12ce6cu: goto label_12ce6c;
        case 0x12ce70u: goto label_12ce70;
        case 0x12ce74u: goto label_12ce74;
        case 0x12ce78u: goto label_12ce78;
        case 0x12ce7cu: goto label_12ce7c;
        case 0x12ce80u: goto label_12ce80;
        case 0x12ce84u: goto label_12ce84;
        case 0x12ce88u: goto label_12ce88;
        case 0x12ce8cu: goto label_12ce8c;
        case 0x12ce90u: goto label_12ce90;
        case 0x12ce94u: goto label_12ce94;
        case 0x12ce98u: goto label_12ce98;
        case 0x12ce9cu: goto label_12ce9c;
        case 0x12cea0u: goto label_12cea0;
        case 0x12cea4u: goto label_12cea4;
        case 0x12cea8u: goto label_12cea8;
        case 0x12ceacu: goto label_12ceac;
        case 0x12ceb0u: goto label_12ceb0;
        case 0x12ceb4u: goto label_12ceb4;
        case 0x12ceb8u: goto label_12ceb8;
        case 0x12cebcu: goto label_12cebc;
        case 0x12cec0u: goto label_12cec0;
        case 0x12cec4u: goto label_12cec4;
        case 0x12cec8u: goto label_12cec8;
        case 0x12ceccu: goto label_12cecc;
        case 0x12ced0u: goto label_12ced0;
        case 0x12ced4u: goto label_12ced4;
        case 0x12ced8u: goto label_12ced8;
        case 0x12cedcu: goto label_12cedc;
        case 0x12cee0u: goto label_12cee0;
        case 0x12cee4u: goto label_12cee4;
        case 0x12cee8u: goto label_12cee8;
        case 0x12ceecu: goto label_12ceec;
        case 0x12cef0u: goto label_12cef0;
        case 0x12cef4u: goto label_12cef4;
        case 0x12cef8u: goto label_12cef8;
        case 0x12cefcu: goto label_12cefc;
        case 0x12cf00u: goto label_12cf00;
        case 0x12cf04u: goto label_12cf04;
        case 0x12cf08u: goto label_12cf08;
        case 0x12cf0cu: goto label_12cf0c;
        case 0x12cf10u: goto label_12cf10;
        case 0x12cf14u: goto label_12cf14;
        case 0x12cf18u: goto label_12cf18;
        case 0x12cf1cu: goto label_12cf1c;
        case 0x12cf20u: goto label_12cf20;
        case 0x12cf24u: goto label_12cf24;
        case 0x12cf28u: goto label_12cf28;
        case 0x12cf2cu: goto label_12cf2c;
        case 0x12cf30u: goto label_12cf30;
        case 0x12cf34u: goto label_12cf34;
        case 0x12cf38u: goto label_12cf38;
        case 0x12cf3cu: goto label_12cf3c;
        case 0x12cf40u: goto label_12cf40;
        case 0x12cf44u: goto label_12cf44;
        case 0x12cf48u: goto label_12cf48;
        case 0x12cf4cu: goto label_12cf4c;
        case 0x12cf50u: goto label_12cf50;
        case 0x12cf54u: goto label_12cf54;
        case 0x12cf58u: goto label_12cf58;
        case 0x12cf5cu: goto label_12cf5c;
        case 0x12cf60u: goto label_12cf60;
        case 0x12cf64u: goto label_12cf64;
        case 0x12cf68u: goto label_12cf68;
        case 0x12cf6cu: goto label_12cf6c;
        case 0x12cf70u: goto label_12cf70;
        case 0x12cf74u: goto label_12cf74;
        case 0x12cf78u: goto label_12cf78;
        case 0x12cf7cu: goto label_12cf7c;
        case 0x12cf80u: goto label_12cf80;
        case 0x12cf84u: goto label_12cf84;
        case 0x12cf88u: goto label_12cf88;
        case 0x12cf8cu: goto label_12cf8c;
        case 0x12cf90u: goto label_12cf90;
        case 0x12cf94u: goto label_12cf94;
        case 0x12cf98u: goto label_12cf98;
        case 0x12cf9cu: goto label_12cf9c;
        case 0x12cfa0u: goto label_12cfa0;
        case 0x12cfa4u: goto label_12cfa4;
        case 0x12cfa8u: goto label_12cfa8;
        case 0x12cfacu: goto label_12cfac;
        case 0x12cfb0u: goto label_12cfb0;
        case 0x12cfb4u: goto label_12cfb4;
        case 0x12cfb8u: goto label_12cfb8;
        case 0x12cfbcu: goto label_12cfbc;
        case 0x12cfc0u: goto label_12cfc0;
        case 0x12cfc4u: goto label_12cfc4;
        case 0x12cfc8u: goto label_12cfc8;
        case 0x12cfccu: goto label_12cfcc;
        case 0x12cfd0u: goto label_12cfd0;
        case 0x12cfd4u: goto label_12cfd4;
        case 0x12cfd8u: goto label_12cfd8;
        case 0x12cfdcu: goto label_12cfdc;
        case 0x12cfe0u: goto label_12cfe0;
        case 0x12cfe4u: goto label_12cfe4;
        case 0x12cfe8u: goto label_12cfe8;
        case 0x12cfecu: goto label_12cfec;
        case 0x12cff0u: goto label_12cff0;
        case 0x12cff4u: goto label_12cff4;
        case 0x12cff8u: goto label_12cff8;
        case 0x12cffcu: goto label_12cffc;
        case 0x12d000u: goto label_12d000;
        case 0x12d004u: goto label_12d004;
        case 0x12d008u: goto label_12d008;
        case 0x12d00cu: goto label_12d00c;
        case 0x12d010u: goto label_12d010;
        case 0x12d014u: goto label_12d014;
        case 0x12d018u: goto label_12d018;
        case 0x12d01cu: goto label_12d01c;
        case 0x12d020u: goto label_12d020;
        case 0x12d024u: goto label_12d024;
        case 0x12d028u: goto label_12d028;
        case 0x12d02cu: goto label_12d02c;
        case 0x12d030u: goto label_12d030;
        case 0x12d034u: goto label_12d034;
        case 0x12d038u: goto label_12d038;
        case 0x12d03cu: goto label_12d03c;
        case 0x12d040u: goto label_12d040;
        case 0x12d044u: goto label_12d044;
        case 0x12d048u: goto label_12d048;
        case 0x12d04cu: goto label_12d04c;
        case 0x12d050u: goto label_12d050;
        case 0x12d054u: goto label_12d054;
        case 0x12d058u: goto label_12d058;
        case 0x12d05cu: goto label_12d05c;
        case 0x12d060u: goto label_12d060;
        case 0x12d064u: goto label_12d064;
        case 0x12d068u: goto label_12d068;
        case 0x12d06cu: goto label_12d06c;
        case 0x12d070u: goto label_12d070;
        case 0x12d074u: goto label_12d074;
        case 0x12d078u: goto label_12d078;
        case 0x12d07cu: goto label_12d07c;
        case 0x12d080u: goto label_12d080;
        case 0x12d084u: goto label_12d084;
        case 0x12d088u: goto label_12d088;
        case 0x12d08cu: goto label_12d08c;
        case 0x12d090u: goto label_12d090;
        case 0x12d094u: goto label_12d094;
        case 0x12d098u: goto label_12d098;
        case 0x12d09cu: goto label_12d09c;
        case 0x12d0a0u: goto label_12d0a0;
        case 0x12d0a4u: goto label_12d0a4;
        case 0x12d0a8u: goto label_12d0a8;
        case 0x12d0acu: goto label_12d0ac;
        case 0x12d0b0u: goto label_12d0b0;
        case 0x12d0b4u: goto label_12d0b4;
        case 0x12d0b8u: goto label_12d0b8;
        case 0x12d0bcu: goto label_12d0bc;
        case 0x12d0c0u: goto label_12d0c0;
        case 0x12d0c4u: goto label_12d0c4;
        case 0x12d0c8u: goto label_12d0c8;
        case 0x12d0ccu: goto label_12d0cc;
        case 0x12d0d0u: goto label_12d0d0;
        case 0x12d0d4u: goto label_12d0d4;
        case 0x12d0d8u: goto label_12d0d8;
        case 0x12d0dcu: goto label_12d0dc;
        case 0x12d0e0u: goto label_12d0e0;
        case 0x12d0e4u: goto label_12d0e4;
        case 0x12d0e8u: goto label_12d0e8;
        case 0x12d0ecu: goto label_12d0ec;
        case 0x12d0f0u: goto label_12d0f0;
        case 0x12d0f4u: goto label_12d0f4;
        case 0x12d0f8u: goto label_12d0f8;
        case 0x12d0fcu: goto label_12d0fc;
        case 0x12d100u: goto label_12d100;
        case 0x12d104u: goto label_12d104;
        case 0x12d108u: goto label_12d108;
        case 0x12d10cu: goto label_12d10c;
        case 0x12d110u: goto label_12d110;
        case 0x12d114u: goto label_12d114;
        case 0x12d118u: goto label_12d118;
        case 0x12d11cu: goto label_12d11c;
        case 0x12d120u: goto label_12d120;
        case 0x12d124u: goto label_12d124;
        case 0x12d128u: goto label_12d128;
        case 0x12d12cu: goto label_12d12c;
        case 0x12d130u: goto label_12d130;
        case 0x12d134u: goto label_12d134;
        case 0x12d138u: goto label_12d138;
        case 0x12d13cu: goto label_12d13c;
        case 0x12d140u: goto label_12d140;
        case 0x12d144u: goto label_12d144;
        case 0x12d148u: goto label_12d148;
        case 0x12d14cu: goto label_12d14c;
        case 0x12d150u: goto label_12d150;
        case 0x12d154u: goto label_12d154;
        case 0x12d158u: goto label_12d158;
        case 0x12d15cu: goto label_12d15c;
        case 0x12d160u: goto label_12d160;
        case 0x12d164u: goto label_12d164;
        case 0x12d168u: goto label_12d168;
        case 0x12d16cu: goto label_12d16c;
        case 0x12d170u: goto label_12d170;
        case 0x12d174u: goto label_12d174;
        case 0x12d178u: goto label_12d178;
        case 0x12d17cu: goto label_12d17c;
        case 0x12d180u: goto label_12d180;
        case 0x12d184u: goto label_12d184;
        case 0x12d188u: goto label_12d188;
        case 0x12d18cu: goto label_12d18c;
        case 0x12d190u: goto label_12d190;
        case 0x12d194u: goto label_12d194;
        case 0x12d198u: goto label_12d198;
        case 0x12d19cu: goto label_12d19c;
        case 0x12d1a0u: goto label_12d1a0;
        case 0x12d1a4u: goto label_12d1a4;
        case 0x12d1a8u: goto label_12d1a8;
        case 0x12d1acu: goto label_12d1ac;
        case 0x12d1b0u: goto label_12d1b0;
        case 0x12d1b4u: goto label_12d1b4;
        case 0x12d1b8u: goto label_12d1b8;
        case 0x12d1bcu: goto label_12d1bc;
        case 0x12d1c0u: goto label_12d1c0;
        case 0x12d1c4u: goto label_12d1c4;
        case 0x12d1c8u: goto label_12d1c8;
        case 0x12d1ccu: goto label_12d1cc;
        case 0x12d1d0u: goto label_12d1d0;
        case 0x12d1d4u: goto label_12d1d4;
        case 0x12d1d8u: goto label_12d1d8;
        case 0x12d1dcu: goto label_12d1dc;
        case 0x12d1e0u: goto label_12d1e0;
        case 0x12d1e4u: goto label_12d1e4;
        case 0x12d1e8u: goto label_12d1e8;
        case 0x12d1ecu: goto label_12d1ec;
        case 0x12d1f0u: goto label_12d1f0;
        case 0x12d1f4u: goto label_12d1f4;
        case 0x12d1f8u: goto label_12d1f8;
        case 0x12d1fcu: goto label_12d1fc;
        case 0x12d200u: goto label_12d200;
        case 0x12d204u: goto label_12d204;
        case 0x12d208u: goto label_12d208;
        case 0x12d20cu: goto label_12d20c;
        case 0x12d210u: goto label_12d210;
        case 0x12d214u: goto label_12d214;
        case 0x12d218u: goto label_12d218;
        case 0x12d21cu: goto label_12d21c;
        case 0x12d220u: goto label_12d220;
        case 0x12d224u: goto label_12d224;
        case 0x12d228u: goto label_12d228;
        case 0x12d22cu: goto label_12d22c;
        case 0x12d230u: goto label_12d230;
        case 0x12d234u: goto label_12d234;
        case 0x12d238u: goto label_12d238;
        case 0x12d23cu: goto label_12d23c;
        case 0x12d240u: goto label_12d240;
        case 0x12d244u: goto label_12d244;
        case 0x12d248u: goto label_12d248;
        case 0x12d24cu: goto label_12d24c;
        case 0x12d250u: goto label_12d250;
        case 0x12d254u: goto label_12d254;
        case 0x12d258u: goto label_12d258;
        case 0x12d25cu: goto label_12d25c;
        case 0x12d260u: goto label_12d260;
        case 0x12d264u: goto label_12d264;
        case 0x12d268u: goto label_12d268;
        case 0x12d26cu: goto label_12d26c;
        case 0x12d270u: goto label_12d270;
        case 0x12d274u: goto label_12d274;
        case 0x12d278u: goto label_12d278;
        case 0x12d27cu: goto label_12d27c;
        case 0x12d280u: goto label_12d280;
        case 0x12d284u: goto label_12d284;
        case 0x12d288u: goto label_12d288;
        case 0x12d28cu: goto label_12d28c;
        case 0x12d290u: goto label_12d290;
        case 0x12d294u: goto label_12d294;
        case 0x12d298u: goto label_12d298;
        case 0x12d29cu: goto label_12d29c;
        case 0x12d2a0u: goto label_12d2a0;
        case 0x12d2a4u: goto label_12d2a4;
        case 0x12d2a8u: goto label_12d2a8;
        case 0x12d2acu: goto label_12d2ac;
        case 0x12d2b0u: goto label_12d2b0;
        case 0x12d2b4u: goto label_12d2b4;
        case 0x12d2b8u: goto label_12d2b8;
        case 0x12d2bcu: goto label_12d2bc;
        case 0x12d2c0u: goto label_12d2c0;
        case 0x12d2c4u: goto label_12d2c4;
        case 0x12d2c8u: goto label_12d2c8;
        case 0x12d2ccu: goto label_12d2cc;
        case 0x12d2d0u: goto label_12d2d0;
        case 0x12d2d4u: goto label_12d2d4;
        case 0x12d2d8u: goto label_12d2d8;
        case 0x12d2dcu: goto label_12d2dc;
        case 0x12d2e0u: goto label_12d2e0;
        case 0x12d2e4u: goto label_12d2e4;
        case 0x12d2e8u: goto label_12d2e8;
        case 0x12d2ecu: goto label_12d2ec;
        case 0x12d2f0u: goto label_12d2f0;
        case 0x12d2f4u: goto label_12d2f4;
        case 0x12d2f8u: goto label_12d2f8;
        case 0x12d2fcu: goto label_12d2fc;
        case 0x12d300u: goto label_12d300;
        case 0x12d304u: goto label_12d304;
        case 0x12d308u: goto label_12d308;
        case 0x12d30cu: goto label_12d30c;
        case 0x12d310u: goto label_12d310;
        case 0x12d314u: goto label_12d314;
        case 0x12d318u: goto label_12d318;
        case 0x12d31cu: goto label_12d31c;
        case 0x12d320u: goto label_12d320;
        case 0x12d324u: goto label_12d324;
        case 0x12d328u: goto label_12d328;
        case 0x12d32cu: goto label_12d32c;
        case 0x12d330u: goto label_12d330;
        case 0x12d334u: goto label_12d334;
        case 0x12d338u: goto label_12d338;
        case 0x12d33cu: goto label_12d33c;
        case 0x12d340u: goto label_12d340;
        case 0x12d344u: goto label_12d344;
        case 0x12d348u: goto label_12d348;
        case 0x12d34cu: goto label_12d34c;
        case 0x12d350u: goto label_12d350;
        case 0x12d354u: goto label_12d354;
        case 0x12d358u: goto label_12d358;
        case 0x12d35cu: goto label_12d35c;
        case 0x12d360u: goto label_12d360;
        case 0x12d364u: goto label_12d364;
        case 0x12d368u: goto label_12d368;
        case 0x12d36cu: goto label_12d36c;
        case 0x12d370u: goto label_12d370;
        case 0x12d374u: goto label_12d374;
        case 0x12d378u: goto label_12d378;
        case 0x12d37cu: goto label_12d37c;
        case 0x12d380u: goto label_12d380;
        case 0x12d384u: goto label_12d384;
        case 0x12d388u: goto label_12d388;
        case 0x12d38cu: goto label_12d38c;
        case 0x12d390u: goto label_12d390;
        case 0x12d394u: goto label_12d394;
        case 0x12d398u: goto label_12d398;
        case 0x12d39cu: goto label_12d39c;
        case 0x12d3a0u: goto label_12d3a0;
        case 0x12d3a4u: goto label_12d3a4;
        case 0x12d3a8u: goto label_12d3a8;
        case 0x12d3acu: goto label_12d3ac;
        case 0x12d3b0u: goto label_12d3b0;
        case 0x12d3b4u: goto label_12d3b4;
        default: break;
    }

    ctx->pc = 0x12ae58u;

label_12ae58:
    // 0x12ae58: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x12ae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_12ae5c:
    // 0x12ae5c: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x12ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
label_12ae60:
    // 0x12ae60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12ae60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ae64:
    // 0x12ae64: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x12ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
label_12ae68:
    // 0x12ae68: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x12ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
label_12ae6c:
    // 0x12ae6c: 0x26500200  addiu       $s0, $s2, 0x200
    ctx->pc = 0x12ae6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_12ae70:
    // 0x12ae70: 0xe7b502a8  swc1        $f21, 0x2A8($sp)
    ctx->pc = 0x12ae70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_12ae74:
    // 0x12ae74: 0x26510210  addiu       $s1, $s2, 0x210
    ctx->pc = 0x12ae74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
label_12ae78:
    // 0x12ae78: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x12ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
label_12ae7c:
    // 0x12ae7c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x12ae7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_12ae80:
    // 0x12ae80: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x12ae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
label_12ae84:
    // 0x12ae84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12ae88:
    // 0x12ae88: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x12ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
label_12ae8c:
    // 0x12ae8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ae8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ae90:
    // 0x12ae90: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x12ae90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
label_12ae94:
    // 0x12ae94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12ae94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ae98:
    // 0x12ae98: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x12ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
label_12ae9c:
    // 0x12ae9c: 0x7fbe0210  sq          $fp, 0x210($sp)
    ctx->pc = 0x12ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 30));
label_12aea0:
    // 0x12aea0: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x12aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_12aea4:
    // 0x12aea4: 0xe7b802c0  swc1        $f24, 0x2C0($sp)
    ctx->pc = 0x12aea4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_12aea8:
    // 0x12aea8: 0xe7b702b8  swc1        $f23, 0x2B8($sp)
    ctx->pc = 0x12aea8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_12aeac:
    // 0x12aeac: 0xe7b602b0  swc1        $f22, 0x2B0($sp)
    ctx->pc = 0x12aeacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_12aeb0:
    // 0x12aeb0: 0xc136afa  jal         func_4DABE8
label_12aeb4:
    if (ctx->pc == 0x12AEB4u) {
        ctx->pc = 0x12AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEB0u;
        // 0x12aeb4: 0xe7b402a0  swc1        $f20, 0x2A0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AEB8u;
        goto label_12aeb8;
    }
    ctx->pc = 0x12AEB0u;
    SET_GPR_U32(ctx, 31, 0x12AEB8u);
    ctx->pc = 0x12AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEB0u;
    // 0x12aeb4: 0xe7b402a0  swc1        $f20, 0x2A0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12AEB0u, 0x12AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEB8u;
label_12aeb8:
    // 0x12aeb8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12aeb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12aebc:
    // 0x12aebc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12aebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12aec0:
    // 0x12aec0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12aec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12aec4:
    // 0x12aec4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12aec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12aec8:
    // 0x12aec8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12aec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12aecc:
    // 0x12aecc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12aeccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12aed0:
    // 0x12aed0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12aed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12aed4:
    // 0x12aed4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12aed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12aed8:
    // 0x12aed8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12aedc:
    // 0x12aedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12aedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12aee0:
    // 0x12aee0: 0x0  nop
    ctx->pc = 0x12aee0u;
    // NOP
label_12aee4:
    // 0x12aee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12aee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12aee8:
    // 0x12aee8: 0x0  nop
    ctx->pc = 0x12aee8u;
    // NOP
label_12aeec:
    // 0x12aeec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_12aef0:
    if (ctx->pc == 0x12AEF0u) {
        ctx->pc = 0x12AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEECu;
        // 0x12aef0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AEF4u;
        goto label_12aef4;
    }
    ctx->pc = 0x12AEECu;
    {
        const bool branch_taken_0x12aeec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEECu;
        // 0x12aef0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aeec) {
            ctx->pc = 0x12AF4Cu;
            goto label_12af4c;
        }
    }
    ctx->pc = 0x12AEF4u;
label_12aef4:
    // 0x12aef4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12aef8:
    // 0x12aef8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12aef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12aefc:
    // 0x12aefc: 0xc136afa  jal         func_4DABE8
label_12af00:
    if (ctx->pc == 0x12AF00u) {
        ctx->pc = 0x12AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEFCu;
        // 0x12af00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF04u;
        goto label_12af04;
    }
    ctx->pc = 0x12AEFCu;
    SET_GPR_U32(ctx, 31, 0x12AF04u);
    ctx->pc = 0x12AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEFCu;
    // 0x12af00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12AEFCu, 0x12AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF04u;
label_12af04:
    // 0x12af04: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12af04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12af08:
    // 0x12af08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12af08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12af0c:
    // 0x12af0c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x12af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_12af10:
    // 0x12af10: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12af10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12af14:
    // 0x12af14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12af14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12af18:
    // 0x12af18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12af18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12af1c:
    // 0x12af1c: 0xc136b24  jal         func_4DAC90
label_12af20:
    if (ctx->pc == 0x12AF20u) {
        ctx->pc = 0x12AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF1Cu;
        // 0x12af20: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF24u;
        goto label_12af24;
    }
    ctx->pc = 0x12AF1Cu;
    SET_GPR_U32(ctx, 31, 0x12AF24u);
    ctx->pc = 0x12AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF1Cu;
    // 0x12af20: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12AF1Cu, 0x12AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF24u;
label_12af24:
    // 0x12af24: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12af24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12af28:
    // 0x12af28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12af2c:
    // 0x12af2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12af30:
    // 0x12af30: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12af30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12af34:
    // 0x12af34: 0xc136b18  jal         func_4DAC60
label_12af38:
    if (ctx->pc == 0x12AF38u) {
        ctx->pc = 0x12AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF34u;
        // 0x12af38: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF3Cu;
        goto label_12af3c;
    }
    ctx->pc = 0x12AF34u;
    SET_GPR_U32(ctx, 31, 0x12AF3Cu);
    ctx->pc = 0x12AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF34u;
    // 0x12af38: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12AF34u, 0x12AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF3Cu;
label_12af3c:
    // 0x12af3c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12af3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12af40:
    // 0x12af40: 0x7e420200  sq          $v0, 0x200($s2)
    ctx->pc = 0x12af40u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 512), GPR_VEC(ctx, 2));
label_12af44:
    // 0x12af44: 0x10000003  b           . + 4 + (0x3 << 2)
label_12af48:
    if (ctx->pc == 0x12AF48u) {
        ctx->pc = 0x12AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF44u;
        // 0x12af48: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF4Cu;
        goto label_12af4c;
    }
    ctx->pc = 0x12AF44u;
    {
        const bool branch_taken_0x12af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF44u;
        // 0x12af48: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af44) {
            ctx->pc = 0x12AF54u;
            goto label_12af54;
        }
    }
    ctx->pc = 0x12AF4Cu;
label_12af4c:
    // 0x12af4c: 0x7a420210  lq          $v0, 0x210($s2)
    ctx->pc = 0x12af4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 528)));
label_12af50:
    // 0x12af50: 0x7e420200  sq          $v0, 0x200($s2)
    ctx->pc = 0x12af50u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 512), GPR_VEC(ctx, 2));
label_12af54:
    // 0x12af54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12af54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12af58:
    // 0x12af58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12af58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12af5c:
    // 0x12af5c: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x12af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_12af60:
    // 0x12af60: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x12af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_12af64:
    // 0x12af64: 0xc0579d2  jal         func_15E748
label_12af68:
    if (ctx->pc == 0x12AF68u) {
        ctx->pc = 0x12AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF64u;
        // 0x12af68: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF6Cu;
        goto label_12af6c;
    }
    ctx->pc = 0x12AF64u;
    SET_GPR_U32(ctx, 31, 0x12AF6Cu);
    ctx->pc = 0x12AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF64u;
    // 0x12af68: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x12AF64u, 0x12AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF6Cu;
label_12af6c:
    // 0x12af6c: 0xa250046d  sb          $s0, 0x46D($s2)
    ctx->pc = 0x12af6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1133), (uint8_t)GPR_U32(ctx, 16));
label_12af70:
    // 0x12af70: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x12af70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_12af74:
    // 0x12af74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12af78:
    // 0x12af78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12af7c:
    // 0x12af7c: 0x8ca347c4  lw          $v1, 0x47C4($a1)
    ctx->pc = 0x12af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18372)));
label_12af80:
    // 0x12af80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12af80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12af84:
    // 0x12af84: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x12af84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_12af88:
    // 0x12af88: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x12af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_12af8c:
    // 0x12af8c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12af90:
    // 0x12af90: 0xc04a0a6  jal         func_128298
label_12af94:
    if (ctx->pc == 0x12AF94u) {
        ctx->pc = 0x12AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF90u;
        // 0x12af94: 0xafa201cc  sw          $v0, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF98u;
        goto label_12af98;
    }
    ctx->pc = 0x12AF90u;
    SET_GPR_U32(ctx, 31, 0x12AF98u);
    ctx->pc = 0x12AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF90u;
    // 0x12af94: 0xafa201cc  sw          $v0, 0x1CC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128298u, 0x12AF90u, 0x12AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF98u;
label_12af98:
    // 0x12af98: 0xc04a0a8  jal         func_1282A0
label_12af9c:
    if (ctx->pc == 0x12AF9Cu) {
        ctx->pc = 0x12AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF98u;
        // 0x12af9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AFA0u;
        goto label_12afa0;
    }
    ctx->pc = 0x12AF98u;
    SET_GPR_U32(ctx, 31, 0x12AFA0u);
    ctx->pc = 0x12AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF98u;
    // 0x12af9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1282A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1282A0u, 0x12AF98u, 0x12AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFA0u;
label_12afa0:
    // 0x12afa0: 0x96420444  lhu         $v0, 0x444($s2)
    ctx->pc = 0x12afa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12afa4:
    // 0x12afa4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x12afa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12afa8:
    // 0x12afa8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_12afac:
    if (ctx->pc == 0x12AFACu) {
        ctx->pc = 0x12AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFA8u;
        // 0x12afac: 0xa2500452  sb          $s0, 0x452($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1106), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AFB0u;
        goto label_12afb0;
    }
    ctx->pc = 0x12AFA8u;
    {
        const bool branch_taken_0x12afa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12afa8) {
            ctx->pc = 0x12AFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AFA8u;
            // 0x12afac: 0xa2500452  sb          $s0, 0x452($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1106), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AFB0u;
            goto label_12afb0;
        }
    }
    ctx->pc = 0x12AFB0u;
label_12afb0:
    // 0x12afb0: 0x92420454  lbu         $v0, 0x454($s2)
    ctx->pc = 0x12afb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
label_12afb4:
    // 0x12afb4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12afb8:
    // 0x12afb8: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x12afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_12afbc:
    // 0x12afbc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12afbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12afc0:
    // 0x12afc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12afc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12afc4:
    // 0x12afc4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x12afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_12afc8:
    // 0x12afc8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x12afc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_12afcc:
    // 0x12afcc: 0x8e430314  lw          $v1, 0x314($s2)
    ctx->pc = 0x12afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12afd0:
    // 0x12afd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12afd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12afd4:
    // 0x12afd4: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x12afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
label_12afd8:
    // 0x12afd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12afd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12afdc:
    // 0x12afdc: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x12afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_12afe0:
    // 0x12afe0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12afe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12afe4:
    // 0x12afe4: 0xa2400454  sb          $zero, 0x454($s2)
    ctx->pc = 0x12afe4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1108), (uint8_t)GPR_U32(ctx, 0));
label_12afe8:
    // 0x12afe8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_12afec:
    // 0x12afec: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x12afecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_12aff0:
    // 0x12aff0: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x12aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
label_12aff4:
    // 0x12aff4: 0xafa001e0  sw          $zero, 0x1E0($sp)
    ctx->pc = 0x12aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
label_12aff8:
    // 0x12aff8: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x12aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
label_12affc:
    // 0x12affc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_12b000:
    if (ctx->pc == 0x12B000u) {
        ctx->pc = 0x12B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFFCu;
        // 0x12b000: 0xafa001e8  sw          $zero, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B004u;
        goto label_12b004;
    }
    ctx->pc = 0x12AFFCu;
    {
        const bool branch_taken_0x12affc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFFCu;
        // 0x12b000: 0xafa001e8  sw          $zero, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12affc) {
            ctx->pc = 0x12B014u;
            goto label_12b014;
        }
    }
    ctx->pc = 0x12B004u;
label_12b004:
    // 0x12b004: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x12b004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_12b008:
    // 0x12b008: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12b008u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12b00c:
    // 0x12b00c: 0x10000002  b           . + 4 + (0x2 << 2)
label_12b010:
    if (ctx->pc == 0x12B010u) {
        ctx->pc = 0x12B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B00Cu;
        // 0x12b010: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B014u;
        goto label_12b014;
    }
    ctx->pc = 0x12B00Cu;
    {
        const bool branch_taken_0x12b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B00Cu;
        // 0x12b010: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b00c) {
            ctx->pc = 0x12B018u;
            goto label_12b018;
        }
    }
    ctx->pc = 0x12B014u;
label_12b014:
    // 0x12b014: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12b014u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b018:
    // 0x12b018: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x12b018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b01c:
    // 0x12b01c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_12b020:
    if (ctx->pc == 0x12B020u) {
        ctx->pc = 0x12B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B01Cu;
        // 0x12b020: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B024u;
        goto label_12b024;
    }
    ctx->pc = 0x12B01Cu;
    {
        const bool branch_taken_0x12b01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b01c) {
            ctx->pc = 0x12B020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B01Cu;
            // 0x12b020: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B038u;
            goto label_12b038;
        }
    }
    ctx->pc = 0x12B024u;
label_12b024:
    // 0x12b024: 0xc0874fa  jal         func_21D3E8
label_12b028:
    if (ctx->pc == 0x12B028u) {
        ctx->pc = 0x12B02Cu;
        goto label_12b02c;
    }
    ctx->pc = 0x12B024u;
    SET_GPR_U32(ctx, 31, 0x12B02Cu);
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x12B024u, 0x12B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B02Cu;
label_12b02c:
    // 0x12b02c: 0x80420019  lb          $v0, 0x19($v0)
    ctx->pc = 0x12b02cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_12b030:
    // 0x12b030: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x12b030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_12b034:
    // 0x12b034: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b034u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b038:
    // 0x12b038: 0x106000f6  beqz        $v1, . + 4 + (0xF6 << 2)
label_12b03c:
    if (ctx->pc == 0x12B03Cu) {
        ctx->pc = 0x12B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B038u;
        // 0x12b03c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B040u;
        goto label_12b040;
    }
    ctx->pc = 0x12B038u;
    {
        const bool branch_taken_0x12b038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B038u;
        // 0x12b03c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b038) {
            ctx->pc = 0x12B414u;
            goto label_12b414;
        }
    }
    ctx->pc = 0x12B040u;
label_12b040:
    // 0x12b040: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_12b044:
    // 0x12b044: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12b044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12b048:
    // 0x12b048: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x12b048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_12b04c:
    // 0x12b04c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12b04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_12b050:
    // 0x12b050: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12b050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12b054:
    // 0x12b054: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12b054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12b058:
    // 0x12b058: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_12b05c:
    if (ctx->pc == 0x12B05Cu) {
        ctx->pc = 0x12B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B058u;
        // 0x12b05c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B060u;
        goto label_12b060;
    }
    ctx->pc = 0x12B058u;
    {
        const bool branch_taken_0x12b058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B058u;
        // 0x12b05c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b058) {
            ctx->pc = 0x12B070u;
            goto label_12b070;
        }
    }
    ctx->pc = 0x12B060u;
label_12b060:
    // 0x12b060: 0xc087408  jal         func_21D020
label_12b064:
    if (ctx->pc == 0x12B064u) {
        ctx->pc = 0x12B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B060u;
        // 0x12b064: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B068u;
        goto label_12b068;
    }
    ctx->pc = 0x12B060u;
    SET_GPR_U32(ctx, 31, 0x12B068u);
    ctx->pc = 0x12B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B060u;
    // 0x12b064: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x12B060u, 0x12B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B068u;
label_12b068:
    // 0x12b068: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x12b068u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_12b06c:
    // 0x12b06c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12b070:
    // 0x12b070: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x12b070u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_12b074:
    // 0x12b074: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x12b074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_12b078:
    // 0x12b078: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_12b07c:
    if (ctx->pc == 0x12B07Cu) {
        ctx->pc = 0x12B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B078u;
        // 0x12b07c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B080u;
        goto label_12b080;
    }
    ctx->pc = 0x12B078u;
    {
        const bool branch_taken_0x12b078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B078u;
        // 0x12b07c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b078) {
            ctx->pc = 0x12B0E4u;
            goto label_12b0e4;
        }
    }
    ctx->pc = 0x12B080u;
label_12b080:
    // 0x12b080: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12b084:
    // 0x12b084: 0x8c4304a8  lw          $v1, 0x4A8($v0)
    ctx->pc = 0x12b084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1192)));
label_12b088:
    // 0x12b088: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_12b08c:
    if (ctx->pc == 0x12B08Cu) {
        ctx->pc = 0x12B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B088u;
        // 0x12b08c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B090u;
        goto label_12b090;
    }
    ctx->pc = 0x12B088u;
    {
        const bool branch_taken_0x12b088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B088u;
        // 0x12b08c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b088) {
            ctx->pc = 0x12B0E4u;
            goto label_12b0e4;
        }
    }
    ctx->pc = 0x12B090u;
label_12b090:
    // 0x12b090: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x12b090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b094:
    // 0x12b094: 0x24458a00  addiu       $a1, $v0, -0x7600
    ctx->pc = 0x12b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
label_12b098:
    // 0x12b098: 0x848301be  lh          $v1, 0x1BE($a0)
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 446)));
label_12b09c:
    // 0x12b09c: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x12b09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_12b0a0:
    // 0x12b0a0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_12b0a4:
    if (ctx->pc == 0x12B0A4u) {
        ctx->pc = 0x12B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0A0u;
        // 0x12b0a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0A8u;
        goto label_12b0a8;
    }
    ctx->pc = 0x12B0A0u;
    {
        const bool branch_taken_0x12b0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0A0u;
        // 0x12b0a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0a0) {
            ctx->pc = 0x12B0D8u;
            goto label_12b0d8;
        }
    }
    ctx->pc = 0x12B0A8u;
label_12b0a8:
    // 0x12b0a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b0ac:
    // 0x12b0ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_12b0b0:
    if (ctx->pc == 0x12B0B0u) {
        ctx->pc = 0x12B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0ACu;
        // 0x12b0b0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0B4u;
        goto label_12b0b4;
    }
    ctx->pc = 0x12B0ACu;
    {
        const bool branch_taken_0x12b0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0ACu;
        // 0x12b0b0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0ac) {
            ctx->pc = 0x12B0C4u;
            goto label_12b0c4;
        }
    }
    ctx->pc = 0x12B0B4u;
label_12b0b4:
    // 0x12b0b4: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x12b0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_12b0b8:
    // 0x12b0b8: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x12b0b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
label_12b0bc:
    // 0x12b0bc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_12b0c0:
    if (ctx->pc == 0x12B0C0u) {
        ctx->pc = 0x12B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0BCu;
        // 0x12b0c0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0C4u;
        goto label_12b0c4;
    }
    ctx->pc = 0x12B0BCu;
    {
        const bool branch_taken_0x12b0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0BCu;
        // 0x12b0c0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0bc) {
            ctx->pc = 0x12B0D4u;
            goto label_12b0d4;
        }
    }
    ctx->pc = 0x12B0C4u;
label_12b0c4:
    // 0x12b0c4: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_12b0c8:
    // 0x12b0c8: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x12b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
label_12b0cc:
    // 0x12b0cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_12b0d0:
    if (ctx->pc == 0x12B0D0u) {
        ctx->pc = 0x12B0D4u;
        goto label_12b0d4;
    }
    ctx->pc = 0x12B0CCu;
    {
        const bool branch_taken_0x12b0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b0cc) {
            ctx->pc = 0x12B0D8u;
            goto label_12b0d8;
        }
    }
    ctx->pc = 0x12B0D4u;
label_12b0d4:
    // 0x12b0d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b0d8:
    // 0x12b0d8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
label_12b0dc:
    if (ctx->pc == 0x12B0DCu) {
        ctx->pc = 0x12B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0D8u;
        // 0x12b0dc: 0x8fa501c8  lw          $a1, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0E0u;
        goto label_12b0e0;
    }
    ctx->pc = 0x12B0D8u;
    {
        const bool branch_taken_0x12b0d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0D8u;
        // 0x12b0dc: 0x8fa501c8  lw          $a1, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0d8) {
            ctx->pc = 0x12B0E4u;
            goto label_12b0e4;
        }
    }
    ctx->pc = 0x12B0E0u;
label_12b0e0:
    // 0x12b0e0: 0x38b40001  xori        $s4, $a1, 0x1
    ctx->pc = 0x12b0e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_12b0e4:
    // 0x12b0e4: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b0e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b0e8:
    // 0x12b0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b0ec:
    // 0x12b0ec: 0x54620040  bnel        $v1, $v0, . + 4 + (0x40 << 2)
label_12b0f0:
    if (ctx->pc == 0x12B0F0u) {
        ctx->pc = 0x12B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0ECu;
        // 0x12b0f0: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0F4u;
        goto label_12b0f4;
    }
    ctx->pc = 0x12B0ECu;
    {
        const bool branch_taken_0x12b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b0ec) {
            ctx->pc = 0x12B0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B0ECu;
            // 0x12b0f0: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B1F0u;
            goto label_12b1f0;
        }
    }
    ctx->pc = 0x12B0F4u;
label_12b0f4:
    // 0x12b0f4: 0x8e450314  lw          $a1, 0x314($s2)
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b0f8:
    // 0x12b0f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12b0fc:
    // 0x12b0fc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x12b0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_12b100:
    // 0x12b100: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x12b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_12b104:
    // 0x12b104: 0x40f809  jalr        $v0
label_12b108:
    if (ctx->pc == 0x12B108u) {
        ctx->pc = 0x12B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B104u;
        // 0x12b108: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B10Cu;
        goto label_12b10c;
    }
    ctx->pc = 0x12B104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B10Cu);
        ctx->pc = 0x12B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B104u;
        // 0x12b108: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B104u, 0x12B10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B10Cu;
label_12b10c:
    // 0x12b10c: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_12b110:
    if (ctx->pc == 0x12B110u) {
        ctx->pc = 0x12B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B10Cu;
        // 0x12b110: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B114u;
        goto label_12b114;
    }
    ctx->pc = 0x12B10Cu;
    {
        const bool branch_taken_0x12b10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b10c) {
            ctx->pc = 0x12B110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B10Cu;
            // 0x12b110: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B1F0u;
            goto label_12b1f0;
        }
    }
    ctx->pc = 0x12B114u;
label_12b114:
    // 0x12b114: 0xc087408  jal         func_21D020
label_12b118:
    if (ctx->pc == 0x12B118u) {
        ctx->pc = 0x12B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B114u;
        // 0x12b118: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B11Cu;
        goto label_12b11c;
    }
    ctx->pc = 0x12B114u;
    SET_GPR_U32(ctx, 31, 0x12B11Cu);
    ctx->pc = 0x12B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B114u;
    // 0x12b118: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x12B114u, 0x12B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B11Cu;
label_12b11c:
    // 0x12b11c: 0x8e450314  lw          $a1, 0x314($s2)
    ctx->pc = 0x12b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b120:
    // 0x12b120: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x12b120u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_12b124:
    // 0x12b124: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12b128:
    // 0x12b128: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x12b128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_12b12c:
    // 0x12b12c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x12b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_12b130:
    // 0x12b130: 0x40f809  jalr        $v0
label_12b134:
    if (ctx->pc == 0x12B134u) {
        ctx->pc = 0x12B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B130u;
        // 0x12b134: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B138u;
        goto label_12b138;
    }
    ctx->pc = 0x12B130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B138u);
        ctx->pc = 0x12B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B130u;
        // 0x12b134: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B130u, 0x12B138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B138u;
label_12b138:
    // 0x12b138: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x12b138u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_12b13c:
    // 0x12b13c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b140:
    // 0x12b140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12b140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b144:
    // 0x12b144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12b144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b148:
    // 0x12b148: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x12b148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_12b14c:
    // 0x12b14c: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x12b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_12b150:
    // 0x12b150: 0x60f809  jalr        $v1
label_12b154:
    if (ctx->pc == 0x12B154u) {
        ctx->pc = 0x12B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B150u;
        // 0x12b154: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B158u;
        goto label_12b158;
    }
    ctx->pc = 0x12B150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B158u);
        ctx->pc = 0x12B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B150u;
        // 0x12b154: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B150u, 0x12B158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B158u;
label_12b158:
    // 0x12b158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b15c:
    // 0x12b15c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x12b15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12b160:
    // 0x12b160: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x12b160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_12b164:
    // 0x12b164: 0xde420468  ld          $v0, 0x468($s2)
    ctx->pc = 0x12b164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 1128)));
label_12b168:
    // 0x12b168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_12b16c:
    // 0x12b16c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_12b170:
    if (ctx->pc == 0x12B170u) {
        ctx->pc = 0x12B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B16Cu;
        // 0x12b170: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B174u;
        goto label_12b174;
    }
    ctx->pc = 0x12B16Cu;
    {
        const bool branch_taken_0x12b16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b16c) {
            ctx->pc = 0x12B170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B16Cu;
            // 0x12b170: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B1F0u;
            goto label_12b1f0;
        }
    }
    ctx->pc = 0x12B174u;
label_12b174:
    // 0x12b174: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_12b178:
    if (ctx->pc == 0x12B178u) {
        ctx->pc = 0x12B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B174u;
        // 0x12b178: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B17Cu;
        goto label_12b17c;
    }
    ctx->pc = 0x12B174u;
    {
        const bool branch_taken_0x12b174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B174u;
        // 0x12b178: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b174) {
            ctx->pc = 0x12B1ECu;
            goto label_12b1ec;
        }
    }
    ctx->pc = 0x12B17Cu;
label_12b17c:
    // 0x12b17c: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x12b17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
label_12b180:
    // 0x12b180: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_12b184:
    if (ctx->pc == 0x12B184u) {
        ctx->pc = 0x12B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B180u;
        // 0x12b184: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B188u;
        goto label_12b188;
    }
    ctx->pc = 0x12B180u;
    {
        const bool branch_taken_0x12b180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b180) {
            ctx->pc = 0x12B184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B180u;
            // 0x12b184: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B1F0u;
            goto label_12b1f0;
        }
    }
    ctx->pc = 0x12B188u;
label_12b188:
    // 0x12b188: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x12b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b18c:
    // 0x12b18c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x12b18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_12b190:
    // 0x12b190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b194:
    // 0x12b194: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x12b194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_12b198:
    // 0x12b198: 0xc6420364  lwc1        $f2, 0x364($s2)
    ctx->pc = 0x12b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b19c:
    // 0x12b19c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12b19cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12b1a0:
    // 0x12b1a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12b1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b1a4:
    // 0x12b1a4: 0x0  nop
    ctx->pc = 0x12b1a4u;
    // NOP
label_12b1a8:
    // 0x12b1a8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_12b1ac:
    if (ctx->pc == 0x12B1ACu) {
        ctx->pc = 0x12B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1A8u;
        // 0x12b1ac: 0x4602b801  sub.s       $f0, $f23, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B1B0u;
        goto label_12b1b0;
    }
    ctx->pc = 0x12B1A8u;
    {
        const bool branch_taken_0x12b1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1A8u;
        // 0x12b1ac: 0x4602b801  sub.s       $f0, $f23, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1a8) {
            ctx->pc = 0x12B1D4u;
            goto label_12b1d4;
        }
    }
    ctx->pc = 0x12B1B0u;
label_12b1b0:
    // 0x12b1b0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12b1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12b1b4:
    // 0x12b1b4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12b1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12b1b8:
    // 0x12b1b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b1bc:
    // 0x12b1bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12b1bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12b1c0:
    // 0x12b1c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12b1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b1c4:
    // 0x12b1c4: 0x0  nop
    ctx->pc = 0x12b1c4u;
    // NOP
label_12b1c8:
    // 0x12b1c8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_12b1cc:
    if (ctx->pc == 0x12B1CCu) {
        ctx->pc = 0x12B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1C8u;
        // 0x12b1cc: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B1D0u;
        goto label_12b1d0;
    }
    ctx->pc = 0x12B1C8u;
    {
        const bool branch_taken_0x12b1c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b1c8) {
            ctx->pc = 0x12B1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B1C8u;
            // 0x12b1cc: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B1F0u;
            goto label_12b1f0;
        }
    }
    ctx->pc = 0x12B1D0u;
label_12b1d0:
    // 0x12b1d0: 0x4602b801  sub.s       $f0, $f23, $f2
    ctx->pc = 0x12b1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
label_12b1d4:
    // 0x12b1d4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x12b1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_12b1d8:
    // 0x12b1d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b1d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12b1dc:
    // 0x12b1dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b1e0:
    // 0x12b1e0: 0x0  nop
    ctx->pc = 0x12b1e0u;
    // NOP
label_12b1e4:
    // 0x12b1e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12b1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12b1e8:
    // 0x12b1e8: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x12b1e8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_12b1ec:
    // 0x12b1ec: 0x8e420314  lw          $v0, 0x314($s2)
    ctx->pc = 0x12b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b1f0:
    // 0x12b1f0: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x12b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_12b1f4:
    // 0x12b1f4: 0x246689f8  addiu       $a2, $v1, -0x7608
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937080));
label_12b1f8:
    // 0x12b1f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12b1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b1fc:
    // 0x12b1fc: 0x844501be  lh          $a1, 0x1BE($v0)
    ctx->pc = 0x12b1fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 446)));
label_12b200:
    // 0x12b200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b204:
    // 0x12b204: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x12b204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_12b208:
    // 0x12b208: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
label_12b20c:
    if (ctx->pc == 0x12B20Cu) {
        ctx->pc = 0x12B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B208u;
        // 0x12b20c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B210u;
        goto label_12b210;
    }
    ctx->pc = 0x12B208u;
    {
        const bool branch_taken_0x12b208 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B208u;
        // 0x12b20c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b208) {
            ctx->pc = 0x12B240u;
            goto label_12b240;
        }
    }
    ctx->pc = 0x12B210u;
label_12b210:
    // 0x12b210: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b214:
    // 0x12b214: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_12b218:
    if (ctx->pc == 0x12B218u) {
        ctx->pc = 0x12B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B214u;
        // 0x12b218: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B21Cu;
        goto label_12b21c;
    }
    ctx->pc = 0x12B214u;
    {
        const bool branch_taken_0x12b214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B214u;
        // 0x12b218: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b214) {
            ctx->pc = 0x12B22Cu;
            goto label_12b22c;
        }
    }
    ctx->pc = 0x12B21Cu;
label_12b21c:
    // 0x12b21c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x12b21cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_12b220:
    // 0x12b220: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x12b220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
label_12b224:
    // 0x12b224: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_12b228:
    if (ctx->pc == 0x12B228u) {
        ctx->pc = 0x12B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B224u;
        // 0x12b228: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B22Cu;
        goto label_12b22c;
    }
    ctx->pc = 0x12B224u;
    {
        const bool branch_taken_0x12b224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B224u;
        // 0x12b228: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b224) {
            ctx->pc = 0x12B23Cu;
            goto label_12b23c;
        }
    }
    ctx->pc = 0x12B22Cu;
label_12b22c:
    // 0x12b22c: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_12b230:
    // 0x12b230: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x12b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
label_12b234:
    // 0x12b234: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_12b238:
    if (ctx->pc == 0x12B238u) {
        ctx->pc = 0x12B23Cu;
        goto label_12b23c;
    }
    ctx->pc = 0x12B234u;
    {
        const bool branch_taken_0x12b234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b234) {
            ctx->pc = 0x12B240u;
            goto label_12b240;
        }
    }
    ctx->pc = 0x12B23Cu;
label_12b23c:
    // 0x12b23c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b240:
    // 0x12b240: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
label_12b244:
    if (ctx->pc == 0x12B244u) {
        ctx->pc = 0x12B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B240u;
        // 0x12b244: 0x96510444  lhu         $s1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B248u;
        goto label_12b248;
    }
    ctx->pc = 0x12B240u;
    {
        const bool branch_taken_0x12b240 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b240) {
            ctx->pc = 0x12B244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B240u;
            // 0x12b244: 0x96510444  lhu         $s1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B268u;
            goto label_12b268;
        }
    }
    ctx->pc = 0x12B248u;
label_12b248:
    // 0x12b248: 0x90820256  lbu         $v0, 0x256($a0)
    ctx->pc = 0x12b248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 598)));
label_12b24c:
    // 0x12b24c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_12b250:
    if (ctx->pc == 0x12B250u) {
        ctx->pc = 0x12B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B24Cu;
        // 0x12b250: 0x96510444  lhu         $s1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B254u;
        goto label_12b254;
    }
    ctx->pc = 0x12B24Cu;
    {
        const bool branch_taken_0x12b24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b24c) {
            ctx->pc = 0x12B250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B24Cu;
            // 0x12b250: 0x96510444  lhu         $s1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B268u;
            goto label_12b268;
        }
    }
    ctx->pc = 0x12B254u;
label_12b254:
    // 0x12b254: 0xc089fe4  jal         func_227F90
label_12b258:
    if (ctx->pc == 0x12B258u) {
        ctx->pc = 0x12B25Cu;
        goto label_12b25c;
    }
    ctx->pc = 0x12B254u;
    SET_GPR_U32(ctx, 31, 0x12B25Cu);
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x12B254u, 0x12B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B25Cu;
label_12b25c:
    // 0x12b25c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_12b260:
    if (ctx->pc == 0x12B260u) {
        ctx->pc = 0x12B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B25Cu;
        // 0x12b260: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B264u;
        goto label_12b264;
    }
    ctx->pc = 0x12B25Cu;
    {
        const bool branch_taken_0x12b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b25c) {
            ctx->pc = 0x12B260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B25Cu;
            // 0x12b260: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B264u;
            goto label_12b264;
        }
    }
    ctx->pc = 0x12B264u;
label_12b264:
    // 0x12b264: 0x96510444  lhu         $s1, 0x444($s2)
    ctx->pc = 0x12b264u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b268:
    // 0x12b268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b26c:
    // 0x12b26c: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
label_12b270:
    if (ctx->pc == 0x12B270u) {
        ctx->pc = 0x12B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B26Cu;
        // 0x12b270: 0xa2500454  sb          $s0, 0x454($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1108), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B274u;
        goto label_12b274;
    }
    ctx->pc = 0x12B26Cu;
    {
        const bool branch_taken_0x12b26c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B26Cu;
        // 0x12b270: 0xa2500454  sb          $s0, 0x454($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1108), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b26c) {
            ctx->pc = 0x12B2B0u;
            goto label_12b2b0;
        }
    }
    ctx->pc = 0x12B274u;
label_12b274:
    // 0x12b274: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x12b274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b278:
    // 0x12b278: 0xc087502  jal         func_21D408
label_12b27c:
    if (ctx->pc == 0x12B27Cu) {
        ctx->pc = 0x12B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B278u;
        // 0x12b27c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B280u;
        goto label_12b280;
    }
    ctx->pc = 0x12B278u;
    SET_GPR_U32(ctx, 31, 0x12B280u);
    ctx->pc = 0x12B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B278u;
    // 0x12b27c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x12B278u, 0x12B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B280u;
label_12b280:
    // 0x12b280: 0xc0e409a  jal         func_390268
label_12b284:
    if (ctx->pc == 0x12B284u) {
        ctx->pc = 0x12B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B280u;
        // 0x12b284: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B288u;
        goto label_12b288;
    }
    ctx->pc = 0x12B280u;
    SET_GPR_U32(ctx, 31, 0x12B288u);
    ctx->pc = 0x12B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B280u;
    // 0x12b284: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12B280u, 0x12B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B288u;
label_12b288:
    // 0x12b288: 0x8e500314  lw          $s0, 0x314($s2)
    ctx->pc = 0x12b288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b28c:
    // 0x12b28c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12b28cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b290:
    // 0x12b290: 0xc08a0d0  jal         func_228340
label_12b294:
    if (ctx->pc == 0x12B294u) {
        ctx->pc = 0x12B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B290u;
        // 0x12b294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B298u;
        goto label_12b298;
    }
    ctx->pc = 0x12B290u;
    SET_GPR_U32(ctx, 31, 0x12B298u);
    ctx->pc = 0x12B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B290u;
    // 0x12b294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x12B290u, 0x12B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B298u;
label_12b298:
    // 0x12b298: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_12b29c:
    if (ctx->pc == 0x12B29Cu) {
        ctx->pc = 0x12B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B298u;
        // 0x12b29c: 0xafb301d4  sw          $s3, 0x1D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2A0u;
        goto label_12b2a0;
    }
    ctx->pc = 0x12B298u;
    {
        const bool branch_taken_0x12b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b298) {
            ctx->pc = 0x12B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B298u;
            // 0x12b29c: 0xafb301d4  sw          $s3, 0x1D4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B2B0u;
            goto label_12b2b0;
        }
    }
    ctx->pc = 0x12B2A0u;
label_12b2a0:
    // 0x12b2a0: 0xc048d40  jal         func_123500
label_12b2a4:
    if (ctx->pc == 0x12B2A4u) {
        ctx->pc = 0x12B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2A0u;
        // 0x12b2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2A8u;
        goto label_12b2a8;
    }
    ctx->pc = 0x12B2A0u;
    SET_GPR_U32(ctx, 31, 0x12B2A8u);
    ctx->pc = 0x12B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2A0u;
    // 0x12b2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x12B2A0u, 0x12B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2A8u;
label_12b2a8:
    // 0x12b2a8: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x12b2a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
label_12b2ac:
    // 0x12b2ac: 0xafb301d4  sw          $s3, 0x1D4($sp)
    ctx->pc = 0x12b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 19));
label_12b2b0:
    // 0x12b2b0: 0xc088e30  jal         func_2238C0
label_12b2b4:
    if (ctx->pc == 0x12B2B4u) {
        ctx->pc = 0x12B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B0u;
        // 0x12b2b4: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2B8u;
        goto label_12b2b8;
    }
    ctx->pc = 0x12B2B0u;
    SET_GPR_U32(ctx, 31, 0x12B2B8u);
    ctx->pc = 0x12B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2B0u;
    // 0x12b2b4: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x12B2B0u, 0x12B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2B8u;
label_12b2b8:
    // 0x12b2b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12b2bc:
    if (ctx->pc == 0x12B2BCu) {
        ctx->pc = 0x12B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B8u;
        // 0x12b2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2C0u;
        goto label_12b2c0;
    }
    ctx->pc = 0x12B2B8u;
    {
        const bool branch_taken_0x12b2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B8u;
        // 0x12b2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2b8) {
            ctx->pc = 0x12B2DCu;
            goto label_12b2dc;
        }
    }
    ctx->pc = 0x12B2C0u;
label_12b2c0:
    // 0x12b2c0: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b2c4:
    // 0x12b2c4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_12b2c8:
    if (ctx->pc == 0x12B2C8u) {
        ctx->pc = 0x12B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2C4u;
        // 0x12b2c8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2CCu;
        goto label_12b2cc;
    }
    ctx->pc = 0x12B2C4u;
    {
        const bool branch_taken_0x12b2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b2c4) {
            ctx->pc = 0x12B2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B2C4u;
            // 0x12b2c8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B2DCu;
            goto label_12b2dc;
        }
    }
    ctx->pc = 0x12B2CCu;
label_12b2cc:
    // 0x12b2cc: 0xc088e30  jal         func_2238C0
label_12b2d0:
    if (ctx->pc == 0x12B2D0u) {
        ctx->pc = 0x12B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2CCu;
        // 0x12b2d0: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2D4u;
        goto label_12b2d4;
    }
    ctx->pc = 0x12B2CCu;
    SET_GPR_U32(ctx, 31, 0x12B2D4u);
    ctx->pc = 0x12B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2CCu;
    // 0x12b2d0: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x12B2CCu, 0x12B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2D4u;
label_12b2d4:
    // 0x12b2d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_12b2d8:
    if (ctx->pc == 0x12B2D8u) {
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D4u;
        // 0x12b2d8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2DCu;
        goto label_12b2dc;
    }
    ctx->pc = 0x12B2D4u;
    {
        const bool branch_taken_0x12b2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b2d4) {
            ctx->pc = 0x12B2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B2D4u;
            // 0x12b2d8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B2DCu;
            goto label_12b2dc;
        }
    }
    ctx->pc = 0x12B2DCu;
label_12b2dc:
    // 0x12b2dc: 0xc088e88  jal         func_223A20
label_12b2e0:
    if (ctx->pc == 0x12B2E0u) {
        ctx->pc = 0x12B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2DCu;
        // 0x12b2e0: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2E4u;
        goto label_12b2e4;
    }
    ctx->pc = 0x12B2DCu;
    SET_GPR_U32(ctx, 31, 0x12B2E4u);
    ctx->pc = 0x12B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2DCu;
    // 0x12b2e0: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x12B2DCu, 0x12B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2E4u;
label_12b2e4:
    // 0x12b2e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_12b2e8:
    if (ctx->pc == 0x12B2E8u) {
        ctx->pc = 0x12B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2E4u;
        // 0x12b2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2ECu;
        goto label_12b2ec;
    }
    ctx->pc = 0x12B2E4u;
    {
        const bool branch_taken_0x12b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2E4u;
        // 0x12b2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2e4) {
            ctx->pc = 0x12B310u;
            goto label_12b310;
        }
    }
    ctx->pc = 0x12B2ECu;
label_12b2ec:
    // 0x12b2ec: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b2ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b2f0:
    // 0x12b2f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_12b2f4:
    if (ctx->pc == 0x12B2F4u) {
        ctx->pc = 0x12B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2F0u;
        // 0x12b2f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2F8u;
        goto label_12b2f8;
    }
    ctx->pc = 0x12B2F0u;
    {
        const bool branch_taken_0x12b2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2F0u;
        // 0x12b2f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2f0) {
            ctx->pc = 0x12B308u;
            goto label_12b308;
        }
    }
    ctx->pc = 0x12B2F8u;
label_12b2f8:
    // 0x12b2f8: 0xc088e88  jal         func_223A20
label_12b2fc:
    if (ctx->pc == 0x12B2FCu) {
        ctx->pc = 0x12B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2F8u;
        // 0x12b2fc: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B300u;
        goto label_12b300;
    }
    ctx->pc = 0x12B2F8u;
    SET_GPR_U32(ctx, 31, 0x12B300u);
    ctx->pc = 0x12B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2F8u;
    // 0x12b2fc: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x12B2F8u, 0x12B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B300u;
label_12b300:
    // 0x12b300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b304:
    if (ctx->pc == 0x12B304u) {
        ctx->pc = 0x12B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B300u;
        // 0x12b304: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B308u;
        goto label_12b308;
    }
    ctx->pc = 0x12B300u;
    {
        const bool branch_taken_0x12b300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B300u;
        // 0x12b304: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b300) {
            ctx->pc = 0x12B310u;
            goto label_12b310;
        }
    }
    ctx->pc = 0x12B308u;
label_12b308:
    // 0x12b308: 0x1000003a  b           . + 4 + (0x3A << 2)
label_12b30c:
    if (ctx->pc == 0x12B30Cu) {
        ctx->pc = 0x12B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B308u;
        // 0x12b30c: 0xafa601e0  sw          $a2, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B310u;
        goto label_12b310;
    }
    ctx->pc = 0x12B308u;
    {
        const bool branch_taken_0x12b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B308u;
        // 0x12b30c: 0xafa601e0  sw          $a2, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b308) {
            ctx->pc = 0x12B3F4u;
            goto label_12b3f4;
        }
    }
    ctx->pc = 0x12B310u;
label_12b310:
    // 0x12b310: 0xc088ea6  jal         func_223A98
label_12b314:
    if (ctx->pc == 0x12B314u) {
        ctx->pc = 0x12B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B310u;
        // 0x12b314: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B318u;
        goto label_12b318;
    }
    ctx->pc = 0x12B310u;
    SET_GPR_U32(ctx, 31, 0x12B318u);
    ctx->pc = 0x12B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B310u;
    // 0x12b314: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x12B310u, 0x12B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B318u;
label_12b318:
    // 0x12b318: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_12b31c:
    if (ctx->pc == 0x12B31Cu) {
        ctx->pc = 0x12B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B318u;
        // 0x12b31c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B320u;
        goto label_12b320;
    }
    ctx->pc = 0x12B318u;
    {
        const bool branch_taken_0x12b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B318u;
        // 0x12b31c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b318) {
            ctx->pc = 0x12B37Cu;
            goto label_12b37c;
        }
    }
    ctx->pc = 0x12B320u;
label_12b320:
    // 0x12b320: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b324:
    // 0x12b324: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_12b328:
    if (ctx->pc == 0x12B328u) {
        ctx->pc = 0x12B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B324u;
        // 0x12b328: 0xc641036c  lwc1        $f1, 0x36C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B32Cu;
        goto label_12b32c;
    }
    ctx->pc = 0x12B324u;
    {
        const bool branch_taken_0x12b324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b324) {
            ctx->pc = 0x12B328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B324u;
            // 0x12b328: 0xc641036c  lwc1        $f1, 0x36C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B340u;
            goto label_12b340;
        }
    }
    ctx->pc = 0x12B32Cu;
label_12b32c:
    // 0x12b32c: 0xc088ea6  jal         func_223A98
label_12b330:
    if (ctx->pc == 0x12B330u) {
        ctx->pc = 0x12B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B32Cu;
        // 0x12b330: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B334u;
        goto label_12b334;
    }
    ctx->pc = 0x12B32Cu;
    SET_GPR_U32(ctx, 31, 0x12B334u);
    ctx->pc = 0x12B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B32Cu;
    // 0x12b330: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x12B32Cu, 0x12B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B334u;
label_12b334:
    // 0x12b334: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_12b338:
    if (ctx->pc == 0x12B338u) {
        ctx->pc = 0x12B33Cu;
        goto label_12b33c;
    }
    ctx->pc = 0x12B334u;
    {
        const bool branch_taken_0x12b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b334) {
            ctx->pc = 0x12B37Cu;
            goto label_12b37c;
        }
    }
    ctx->pc = 0x12B33Cu;
label_12b33c:
    // 0x12b33c: 0xc641036c  lwc1        $f1, 0x36C($s2)
    ctx->pc = 0x12b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b340:
    // 0x12b340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12b340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b344:
    // 0x12b344: 0x0  nop
    ctx->pc = 0x12b344u;
    // NOP
label_12b348:
    // 0x12b348: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12b348u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b34c:
    // 0x12b34c: 0x0  nop
    ctx->pc = 0x12b34cu;
    // NOP
label_12b350:
    // 0x12b350: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_12b354:
    if (ctx->pc == 0x12B354u) {
        ctx->pc = 0x12B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B350u;
        // 0x12b354: 0xc640036c  lwc1        $f0, 0x36C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B358u;
        goto label_12b358;
    }
    ctx->pc = 0x12B350u;
    {
        const bool branch_taken_0x12b350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b350) {
            ctx->pc = 0x12B354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B350u;
            // 0x12b354: 0xc640036c  lwc1        $f0, 0x36C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B364u;
            goto label_12b364;
        }
    }
    ctx->pc = 0x12B358u;
label_12b358:
    // 0x12b358: 0x92420468  lbu         $v0, 0x468($s2)
    ctx->pc = 0x12b358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1128)));
label_12b35c:
    // 0x12b35c: 0xa2420467  sb          $v0, 0x467($s2)
    ctx->pc = 0x12b35cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1127), (uint8_t)GPR_U32(ctx, 2));
label_12b360:
    // 0x12b360: 0xc640036c  lwc1        $f0, 0x36C($s2)
    ctx->pc = 0x12b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b364:
    // 0x12b364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b368:
    // 0x12b368: 0xafa701e8  sw          $a3, 0x1E8($sp)
    ctx->pc = 0x12b368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 7));
label_12b36c:
    // 0x12b36c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12b36cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b370:
    // 0x12b370: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x12b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b374:
    // 0x12b374: 0x10000010  b           . + 4 + (0x10 << 2)
label_12b378:
    if (ctx->pc == 0x12B378u) {
        ctx->pc = 0x12B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B374u;
        // 0x12b378: 0xafa701e4  sw          $a3, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B37Cu;
        goto label_12b37c;
    }
    ctx->pc = 0x12B374u;
    {
        const bool branch_taken_0x12b374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B374u;
        // 0x12b378: 0xafa701e4  sw          $a3, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b374) {
            ctx->pc = 0x12B3B8u;
            goto label_12b3b8;
        }
    }
    ctx->pc = 0x12B37Cu;
label_12b37c:
    // 0x12b37c: 0xc088e98  jal         func_223A60
label_12b380:
    if (ctx->pc == 0x12B380u) {
        ctx->pc = 0x12B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B37Cu;
        // 0x12b380: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B384u;
        goto label_12b384;
    }
    ctx->pc = 0x12B37Cu;
    SET_GPR_U32(ctx, 31, 0x12B384u);
    ctx->pc = 0x12B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B37Cu;
    // 0x12b380: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x12B37Cu, 0x12B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B384u;
label_12b384:
    // 0x12b384: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12b388:
    if (ctx->pc == 0x12B388u) {
        ctx->pc = 0x12B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B384u;
        // 0x12b388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B38Cu;
        goto label_12b38c;
    }
    ctx->pc = 0x12B384u;
    {
        const bool branch_taken_0x12b384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B384u;
        // 0x12b388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b384) {
            ctx->pc = 0x12B3C4u;
            goto label_12b3c4;
        }
    }
    ctx->pc = 0x12B38Cu;
label_12b38c:
    // 0x12b38c: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b38cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b390:
    // 0x12b390: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_12b394:
    if (ctx->pc == 0x12B394u) {
        ctx->pc = 0x12B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B390u;
        // 0x12b394: 0xc640036c  lwc1        $f0, 0x36C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B398u;
        goto label_12b398;
    }
    ctx->pc = 0x12B390u;
    {
        const bool branch_taken_0x12b390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b390) {
            ctx->pc = 0x12B394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B390u;
            // 0x12b394: 0xc640036c  lwc1        $f0, 0x36C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B3ACu;
            goto label_12b3ac;
        }
    }
    ctx->pc = 0x12B398u;
label_12b398:
    // 0x12b398: 0xc088e98  jal         func_223A60
label_12b39c:
    if (ctx->pc == 0x12B39Cu) {
        ctx->pc = 0x12B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B398u;
        // 0x12b39c: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3A0u;
        goto label_12b3a0;
    }
    ctx->pc = 0x12B398u;
    SET_GPR_U32(ctx, 31, 0x12B3A0u);
    ctx->pc = 0x12B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B398u;
    // 0x12b39c: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x12B398u, 0x12B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3A0u;
label_12b3a0:
    // 0x12b3a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12b3a4:
    if (ctx->pc == 0x12B3A4u) {
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A0u;
        // 0x12b3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3A8u;
        goto label_12b3a8;
    }
    ctx->pc = 0x12B3A0u;
    {
        const bool branch_taken_0x12b3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A0u;
        // 0x12b3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3a0) {
            ctx->pc = 0x12B3C4u;
            goto label_12b3c4;
        }
    }
    ctx->pc = 0x12B3A8u;
label_12b3a8:
    // 0x12b3a8: 0xc640036c  lwc1        $f0, 0x36C($s2)
    ctx->pc = 0x12b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b3ac:
    // 0x12b3ac: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x12b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_12b3b0:
    // 0x12b3b0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12b3b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b3b4:
    // 0x12b3b4: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x12b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b3b8:
    // 0x12b3b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b3bc:
    // 0x12b3bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_12b3c0:
    if (ctx->pc == 0x12B3C0u) {
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0xe640036c  swc1        $f0, 0x36C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 876), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3C4u;
        goto label_12b3c4;
    }
    ctx->pc = 0x12B3BCu;
    {
        const bool branch_taken_0x12b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0xe640036c  swc1        $f0, 0x36C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3bc) {
            ctx->pc = 0x12B3F4u;
            goto label_12b3f4;
        }
    }
    ctx->pc = 0x12B3C4u;
label_12b3c4:
    // 0x12b3c4: 0xc088e90  jal         func_223A40
label_12b3c8:
    if (ctx->pc == 0x12B3C8u) {
        ctx->pc = 0x12B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3C4u;
        // 0x12b3c8: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3CCu;
        goto label_12b3cc;
    }
    ctx->pc = 0x12B3C4u;
    SET_GPR_U32(ctx, 31, 0x12B3CCu);
    ctx->pc = 0x12B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3C4u;
    // 0x12b3c8: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x12B3C4u, 0x12B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3CCu;
label_12b3cc:
    // 0x12b3cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_12b3d0:
    if (ctx->pc == 0x12B3D0u) {
        ctx->pc = 0x12B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3CCu;
        // 0x12b3d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3D4u;
        goto label_12b3d4;
    }
    ctx->pc = 0x12B3CCu;
    {
        const bool branch_taken_0x12b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3CCu;
        // 0x12b3d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3cc) {
            ctx->pc = 0x12B3F4u;
            goto label_12b3f4;
        }
    }
    ctx->pc = 0x12B3D4u;
label_12b3d4:
    // 0x12b3d4: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b3d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b3d8:
    // 0x12b3d8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_12b3dc:
    if (ctx->pc == 0x12B3DCu) {
        ctx->pc = 0x12B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3D8u;
        // 0x12b3dc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3E0u;
        goto label_12b3e0;
    }
    ctx->pc = 0x12B3D8u;
    {
        const bool branch_taken_0x12b3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b3d8) {
            ctx->pc = 0x12B3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B3D8u;
            // 0x12b3dc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B3F4u;
            goto label_12b3f4;
        }
    }
    ctx->pc = 0x12B3E0u;
label_12b3e0:
    // 0x12b3e0: 0xc088e90  jal         func_223A40
label_12b3e4:
    if (ctx->pc == 0x12B3E4u) {
        ctx->pc = 0x12B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3E0u;
        // 0x12b3e4: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3E8u;
        goto label_12b3e8;
    }
    ctx->pc = 0x12B3E0u;
    SET_GPR_U32(ctx, 31, 0x12B3E8u);
    ctx->pc = 0x12B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3E0u;
    // 0x12b3e4: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x12B3E0u, 0x12B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3E8u;
label_12b3e8:
    // 0x12b3e8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_12b3ec:
    if (ctx->pc == 0x12B3ECu) {
        ctx->pc = 0x12B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3E8u;
        // 0x12b3ec: 0xe6570364  swc1        $f23, 0x364($s2) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 868), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3F0u;
        goto label_12b3f0;
    }
    ctx->pc = 0x12B3E8u;
    {
        const bool branch_taken_0x12b3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b3e8) {
            ctx->pc = 0x12B3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B3E8u;
            // 0x12b3ec: 0xe6570364  swc1        $f23, 0x364($s2) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 868), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B3F8u;
            goto label_12b3f8;
        }
    }
    ctx->pc = 0x12B3F0u;
label_12b3f0:
    // 0x12b3f0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12b3f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b3f4:
    // 0x12b3f4: 0xe6570364  swc1        $f23, 0x364($s2)
    ctx->pc = 0x12b3f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 868), bits); }
label_12b3f8:
    // 0x12b3f8: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x12b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
label_12b3fc:
    // 0x12b3fc: 0xc08a05a  jal         func_228168
label_12b400:
    if (ctx->pc == 0x12B400u) {
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3FCu;
        // 0x12b400: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B404u;
        goto label_12b404;
    }
    ctx->pc = 0x12B3FCu;
    SET_GPR_U32(ctx, 31, 0x12B404u);
    ctx->pc = 0x12B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3FCu;
    // 0x12b400: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x12B3FCu, 0x12B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B404u;
label_12b404:
    // 0x12b404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b408:
    if (ctx->pc == 0x12B408u) {
        ctx->pc = 0x12B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B404u;
        // 0x12b408: 0x8fa301e4  lw          $v1, 0x1E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B40Cu;
        goto label_12b40c;
    }
    ctx->pc = 0x12B404u;
    {
        const bool branch_taken_0x12b404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B404u;
        // 0x12b408: 0x8fa301e4  lw          $v1, 0x1E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b404) {
            ctx->pc = 0x12B414u;
            goto label_12b414;
        }
    }
    ctx->pc = 0x12B40Cu;
label_12b40c:
    // 0x12b40c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x12b40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_12b410:
    // 0x12b410: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x12b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
label_12b414:
    // 0x12b414: 0x82420458  lb          $v0, 0x458($s2)
    ctx->pc = 0x12b414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1112)));
label_12b418:
    // 0x12b418: 0x92430465  lbu         $v1, 0x465($s2)
    ctx->pc = 0x12b418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1125)));
label_12b41c:
    // 0x12b41c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12b41cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12b420:
    // 0x12b420: 0xe65501a0  swc1        $f21, 0x1A0($s2)
    ctx->pc = 0x12b420u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
label_12b424:
    // 0x12b424: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12b424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12b428:
    // 0x12b428: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_12b42c:
    if (ctx->pc == 0x12B42Cu) {
        ctx->pc = 0x12B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B428u;
        // 0x12b42c: 0xafa201ec  sw          $v0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B430u;
        goto label_12b430;
    }
    ctx->pc = 0x12B428u;
    {
        const bool branch_taken_0x12b428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B428u;
        // 0x12b42c: 0xafa201ec  sw          $v0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b428) {
            ctx->pc = 0x12B440u;
            goto label_12b440;
        }
    }
    ctx->pc = 0x12B430u;
label_12b430:
    // 0x12b430: 0xa2400466  sb          $zero, 0x466($s2)
    ctx->pc = 0x12b430u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1126), (uint8_t)GPR_U32(ctx, 0));
label_12b434:
    // 0x12b434: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x12b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
label_12b438:
    // 0x12b438: 0xae400448  sw          $zero, 0x448($s2)
    ctx->pc = 0x12b438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 0));
label_12b43c:
    // 0x12b43c: 0xafa001e8  sw          $zero, 0x1E8($sp)
    ctx->pc = 0x12b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
label_12b440:
    // 0x12b440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12b440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b444:
    // 0x12b444: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x12b444u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_12b448:
    // 0x12b448: 0x96450444  lhu         $a1, 0x444($s2)
    ctx->pc = 0x12b448u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b44c:
    // 0x12b44c: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x12b44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_12b450:
    // 0x12b450: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x12b450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_12b454:
    // 0x12b454: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x12b454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
label_12b458:
    // 0x12b458: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_12b45c:
    if (ctx->pc == 0x12B45Cu) {
        ctx->pc = 0x12B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B458u;
        // 0x12b45c: 0xe7a001a8  swc1        $f0, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B460u;
        goto label_12b460;
    }
    ctx->pc = 0x12B458u;
    {
        const bool branch_taken_0x12b458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B458u;
        // 0x12b45c: 0xe7a001a8  swc1        $f0, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b458) {
            ctx->pc = 0x12B4D8u;
            goto label_12b4d8;
        }
    }
    ctx->pc = 0x12B460u;
label_12b460:
    // 0x12b460: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12b464:
    // 0x12b464: 0x8e64b19c  lw          $a0, -0x4E64($s3)
    ctx->pc = 0x12b464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947228)));
label_12b468:
    // 0x12b468: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x12b468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_12b46c:
    // 0x12b46c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_12b470:
    if (ctx->pc == 0x12B470u) {
        ctx->pc = 0x12B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B46Cu;
        // 0x12b470: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B474u;
        goto label_12b474;
    }
    ctx->pc = 0x12B46Cu;
    {
        const bool branch_taken_0x12b46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x12B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B46Cu;
        // 0x12b470: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b46c) {
            ctx->pc = 0x12B480u;
            goto label_12b480;
        }
    }
    ctx->pc = 0x12B474u;
label_12b474:
    // 0x12b474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b478:
    // 0x12b478: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
label_12b47c:
    if (ctx->pc == 0x12B47Cu) {
        ctx->pc = 0x12B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B478u;
        // 0x12b47c: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B480u;
        goto label_12b480;
    }
    ctx->pc = 0x12B478u;
    {
        const bool branch_taken_0x12b478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b478) {
            ctx->pc = 0x12B47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B478u;
            // 0x12b47c: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B488u;
            goto label_12b488;
        }
    }
    ctx->pc = 0x12B480u;
label_12b480:
    // 0x12b480: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x12b480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b484:
    // 0x12b484: 0x8e420314  lw          $v0, 0x314($s2)
    ctx->pc = 0x12b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b488:
    // 0x12b488: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x12b488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_12b48c:
    // 0x12b48c: 0x8fa501e4  lw          $a1, 0x1E4($sp)
    ctx->pc = 0x12b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_12b490:
    // 0x12b490: 0x27a701a4  addiu       $a3, $sp, 0x1A4
    ctx->pc = 0x12b490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_12b494:
    // 0x12b494: 0x27a801a8  addiu       $t0, $sp, 0x1A8
    ctx->pc = 0x12b494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_12b498:
    // 0x12b498: 0x804401b0  lb          $a0, 0x1B0($v0)
    ctx->pc = 0x12b498u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_12b49c:
    // 0x12b49c: 0x27a901ac  addiu       $t1, $sp, 0x1AC
    ctx->pc = 0x12b49cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_12b4a0:
    // 0x12b4a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_12b4a4:
    if (ctx->pc == 0x12B4A4u) {
        ctx->pc = 0x12B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4A0u;
        // 0x12b4a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4A8u;
        goto label_12b4a8;
    }
    ctx->pc = 0x12B4A0u;
    {
        const bool branch_taken_0x12b4a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4A0u;
        // 0x12b4a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4a0) {
            ctx->pc = 0x12B4BCu;
            goto label_12b4bc;
        }
    }
    ctx->pc = 0x12B4A8u;
label_12b4a8:
    // 0x12b4a8: 0x56a00005  bnel        $s5, $zero, . + 4 + (0x5 << 2)
label_12b4ac:
    if (ctx->pc == 0x12B4ACu) {
        ctx->pc = 0x12B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4A8u;
        // 0x12b4ac: 0xc64c01a0  lwc1        $f12, 0x1A0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4B0u;
        goto label_12b4b0;
    }
    ctx->pc = 0x12B4A8u;
    {
        const bool branch_taken_0x12b4a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b4a8) {
            ctx->pc = 0x12B4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B4A8u;
            // 0x12b4ac: 0xc64c01a0  lwc1        $f12, 0x1A0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B4C0u;
            goto label_12b4c0;
        }
    }
    ctx->pc = 0x12B4B0u;
label_12b4b0:
    // 0x12b4b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12b4b4:
    // 0x12b4b4: 0x9443b23c  lhu         $v1, -0x4DC4($v0)
    ctx->pc = 0x12b4b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294947388)));
label_12b4b8:
    // 0x12b4b8: 0x3582b  sltu        $t3, $zero, $v1
    ctx->pc = 0x12b4b8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_12b4bc:
    // 0x12b4bc: 0xc64c01a0  lwc1        $f12, 0x1A0($s2)
    ctx->pc = 0x12b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12b4c0:
    // 0x12b4c0: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x12b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_12b4c4:
    // 0x12b4c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_12b4c8:
    // 0x12b4c8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x12b4c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12b4cc:
    // 0x12b4cc: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x12b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_12b4d0:
    // 0x12b4d0: 0xc04a414  jal         func_129050
label_12b4d4:
    if (ctx->pc == 0x12B4D4u) {
        ctx->pc = 0x12B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4D0u;
        // 0x12b4d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4D8u;
        goto label_12b4d8;
    }
    ctx->pc = 0x12B4D0u;
    SET_GPR_U32(ctx, 31, 0x12B4D8u);
    ctx->pc = 0x12B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B4D0u;
    // 0x12b4d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129050u, 0x12B4D0u, 0x12B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4D8u;
label_12b4d8:
    // 0x12b4d8: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x12b4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_12b4dc:
    // 0x12b4dc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_12b4e0:
    if (ctx->pc == 0x12B4E0u) {
        ctx->pc = 0x12B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4DCu;
        // 0x12b4e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4E4u;
        goto label_12b4e4;
    }
    ctx->pc = 0x12B4DCu;
    {
        const bool branch_taken_0x12b4dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4DCu;
        // 0x12b4e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4dc) {
            ctx->pc = 0x12B4ECu;
            goto label_12b4ec;
        }
    }
    ctx->pc = 0x12B4E4u;
label_12b4e4:
    // 0x12b4e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_12b4e8:
    if (ctx->pc == 0x12B4E8u) {
        ctx->pc = 0x12B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4E4u;
        // 0x12b4e8: 0xa242046e  sb          $v0, 0x46E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1134), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4ECu;
        goto label_12b4ec;
    }
    ctx->pc = 0x12B4E4u;
    {
        const bool branch_taken_0x12b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4E4u;
        // 0x12b4e8: 0xa242046e  sb          $v0, 0x46E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1134), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4e4) {
            ctx->pc = 0x12B4F0u;
            goto label_12b4f0;
        }
    }
    ctx->pc = 0x12B4ECu;
label_12b4ec:
    // 0x12b4ec: 0xa240046e  sb          $zero, 0x46E($s2)
    ctx->pc = 0x12b4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1134), (uint8_t)GPR_U32(ctx, 0));
label_12b4f0:
    // 0x12b4f0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12b4f4:
    // 0x12b4f4: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b4f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b4f8:
    // 0x12b4f8: 0xc4408ad8  lwc1        $f0, -0x7528($v0)
    ctx->pc = 0x12b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b4fc:
    // 0x12b4fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_12b500:
    if (ctx->pc == 0x12B500u) {
        ctx->pc = 0x12B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4FCu;
        // 0x12b500: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B504u;
        goto label_12b504;
    }
    ctx->pc = 0x12B4FCu;
    {
        const bool branch_taken_0x12b4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4FCu;
        // 0x12b500: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4fc) {
            ctx->pc = 0x12B548u;
            goto label_12b548;
        }
    }
    ctx->pc = 0x12B504u;
label_12b504:
    // 0x12b504: 0xc087502  jal         func_21D408
label_12b508:
    if (ctx->pc == 0x12B508u) {
        ctx->pc = 0x12B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B504u;
        // 0x12b508: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B50Cu;
        goto label_12b50c;
    }
    ctx->pc = 0x12B504u;
    SET_GPR_U32(ctx, 31, 0x12B50Cu);
    ctx->pc = 0x12B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B504u;
    // 0x12b508: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x12B504u, 0x12B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B50Cu;
label_12b50c:
    // 0x12b50c: 0x90430152  lbu         $v1, 0x152($v0)
    ctx->pc = 0x12b50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 338)));
label_12b510:
    // 0x12b510: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_12b514:
    if (ctx->pc == 0x12B514u) {
        ctx->pc = 0x12B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B510u;
        // 0x12b514: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B518u;
        goto label_12b518;
    }
    ctx->pc = 0x12B510u;
    {
        const bool branch_taken_0x12b510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b510) {
            ctx->pc = 0x12B514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B510u;
            // 0x12b514: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B54Cu;
            goto label_12b54c;
        }
    }
    ctx->pc = 0x12B518u;
label_12b518:
    // 0x12b518: 0xc087502  jal         func_21D408
label_12b51c:
    if (ctx->pc == 0x12B51Cu) {
        ctx->pc = 0x12B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B518u;
        // 0x12b51c: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B520u;
        goto label_12b520;
    }
    ctx->pc = 0x12B518u;
    SET_GPR_U32(ctx, 31, 0x12B520u);
    ctx->pc = 0x12B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B518u;
    // 0x12b51c: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x12B518u, 0x12B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B520u;
label_12b520:
    // 0x12b520: 0x8e460314  lw          $a2, 0x314($s2)
    ctx->pc = 0x12b520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b524:
    // 0x12b524: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x12b524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_12b528:
    // 0x12b528: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x12b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_12b52c:
    // 0x12b52c: 0x24440164  addiu       $a0, $v0, 0x164
    ctx->pc = 0x12b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
label_12b530:
    // 0x12b530: 0x84c50092  lh          $a1, 0x92($a2)
    ctx->pc = 0x12b530u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
label_12b534:
    // 0x12b534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12b534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b538:
    // 0x12b538: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x12b538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_12b53c:
    // 0x12b53c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x12b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_12b540:
    // 0x12b540: 0xc136d6c  jal         func_4DB5B0
label_12b544:
    if (ctx->pc == 0x12B544u) {
        ctx->pc = 0x12B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B540u;
        // 0x12b544: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B548u;
        goto label_12b548;
    }
    ctx->pc = 0x12B540u;
    SET_GPR_U32(ctx, 31, 0x12B548u);
    ctx->pc = 0x12B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B540u;
    // 0x12b544: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x12B540u, 0x12B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B548u;
label_12b548:
    // 0x12b548: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b548u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b54c:
    // 0x12b54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b550:
    // 0x12b550: 0x54620065  bnel        $v1, $v0, . + 4 + (0x65 << 2)
label_12b554:
    if (ctx->pc == 0x12B554u) {
        ctx->pc = 0x12B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B550u;
        // 0x12b554: 0x92420451  lbu         $v0, 0x451($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1105)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B558u;
        goto label_12b558;
    }
    ctx->pc = 0x12B550u;
    {
        const bool branch_taken_0x12b550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b550) {
            ctx->pc = 0x12B554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B550u;
            // 0x12b554: 0x92420451  lbu         $v0, 0x451($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1105)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6E8u;
            goto label_12b6e8;
        }
    }
    ctx->pc = 0x12B558u;
label_12b558:
    // 0x12b558: 0x92420466  lbu         $v0, 0x466($s2)
    ctx->pc = 0x12b558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1126)));
label_12b55c:
    // 0x12b55c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_12b560:
    if (ctx->pc == 0x12B560u) {
        ctx->pc = 0x12B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B55Cu;
        // 0x12b560: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B564u;
        goto label_12b564;
    }
    ctx->pc = 0x12B55Cu;
    {
        const bool branch_taken_0x12b55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B55Cu;
        // 0x12b560: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b55c) {
            ctx->pc = 0x12B590u;
            goto label_12b590;
        }
    }
    ctx->pc = 0x12B564u;
label_12b564:
    // 0x12b564: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x12b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_12b568:
    // 0x12b568: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_12b56c:
    if (ctx->pc == 0x12B56Cu) {
        ctx->pc = 0x12B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B568u;
        // 0x12b56c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B570u;
        goto label_12b570;
    }
    ctx->pc = 0x12B568u;
    {
        const bool branch_taken_0x12b568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B568u;
        // 0x12b56c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b568) {
            ctx->pc = 0x12B590u;
            goto label_12b590;
        }
    }
    ctx->pc = 0x12B570u;
label_12b570:
    // 0x12b570: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12b570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12b574:
    // 0x12b574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b578:
    // 0x12b578: 0xc4418adc  lwc1        $f1, -0x7524($v0)
    ctx->pc = 0x12b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b57c:
    // 0x12b57c: 0xe640034c  swc1        $f0, 0x34C($s2)
    ctx->pc = 0x12b57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 844), bits); }
label_12b580:
    // 0x12b580: 0xe64103e4  swc1        $f1, 0x3E4($s2)
    ctx->pc = 0x12b580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 996), bits); }
label_12b584:
    // 0x12b584: 0xa2400466  sb          $zero, 0x466($s2)
    ctx->pc = 0x12b584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1126), (uint8_t)GPR_U32(ctx, 0));
label_12b588:
    // 0x12b588: 0x10000046  b           . + 4 + (0x46 << 2)
label_12b58c:
    if (ctx->pc == 0x12B58Cu) {
        ctx->pc = 0x12B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B588u;
        // 0x12b58c: 0xae400448  sw          $zero, 0x448($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B590u;
        goto label_12b590;
    }
    ctx->pc = 0x12B588u;
    {
        const bool branch_taken_0x12b588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B588u;
        // 0x12b58c: 0xae400448  sw          $zero, 0x448($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b588) {
            ctx->pc = 0x12B6A4u;
            goto label_12b6a4;
        }
    }
    ctx->pc = 0x12B590u;
label_12b590:
    // 0x12b590: 0x8fa701e8  lw          $a3, 0x1E8($sp)
    ctx->pc = 0x12b590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12b594:
    // 0x12b594: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
label_12b598:
    if (ctx->pc == 0x12B598u) {
        ctx->pc = 0x12B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B594u;
        // 0x12b598: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B59Cu;
        goto label_12b59c;
    }
    ctx->pc = 0x12B594u;
    {
        const bool branch_taken_0x12b594 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B594u;
        // 0x12b598: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b594) {
            ctx->pc = 0x12B608u;
            goto label_12b608;
        }
    }
    ctx->pc = 0x12B59Cu;
label_12b59c:
    // 0x12b59c: 0x92420467  lbu         $v0, 0x467($s2)
    ctx->pc = 0x12b59cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1127)));
label_12b5a0:
    // 0x12b5a0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_12b5a4:
    if (ctx->pc == 0x12B5A4u) {
        ctx->pc = 0x12B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5A0u;
        // 0x12b5a4: 0x92430466  lbu         $v1, 0x466($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1126)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5A8u;
        goto label_12b5a8;
    }
    ctx->pc = 0x12B5A0u;
    {
        const bool branch_taken_0x12b5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b5a0) {
            ctx->pc = 0x12B5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B5A0u;
            // 0x12b5a4: 0x92430466  lbu         $v1, 0x466($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1126)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B5E8u;
            goto label_12b5e8;
        }
    }
    ctx->pc = 0x12B5A8u;
label_12b5a8:
    // 0x12b5a8: 0xc087502  jal         func_21D408
label_12b5ac:
    if (ctx->pc == 0x12B5ACu) {
        ctx->pc = 0x12B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5A8u;
        // 0x12b5ac: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5B0u;
        goto label_12b5b0;
    }
    ctx->pc = 0x12B5A8u;
    SET_GPR_U32(ctx, 31, 0x12B5B0u);
    ctx->pc = 0x12B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5A8u;
    // 0x12b5ac: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x12B5A8u, 0x12B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5B0u;
label_12b5b0:
    // 0x12b5b0: 0x90430152  lbu         $v1, 0x152($v0)
    ctx->pc = 0x12b5b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 338)));
label_12b5b4:
    // 0x12b5b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_12b5b8:
    if (ctx->pc == 0x12B5B8u) {
        ctx->pc = 0x12B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B4u;
        // 0x12b5b8: 0xc7a101b0  lwc1        $f1, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5BCu;
        goto label_12b5bc;
    }
    ctx->pc = 0x12B5B4u;
    {
        const bool branch_taken_0x12b5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B4u;
        // 0x12b5b8: 0xc7a101b0  lwc1        $f1, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5b4) {
            ctx->pc = 0x12B5D8u;
            goto label_12b5d8;
        }
    }
    ctx->pc = 0x12B5BCu;
label_12b5bc:
    // 0x12b5bc: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x12b5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_12b5c0:
    // 0x12b5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b5c4:
    // 0x12b5c4: 0x0  nop
    ctx->pc = 0x12b5c4u;
    // NOP
label_12b5c8:
    // 0x12b5c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12b5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b5cc:
    // 0x12b5cc: 0x0  nop
    ctx->pc = 0x12b5ccu;
    // NOP
label_12b5d0:
    // 0x12b5d0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_12b5d4:
    if (ctx->pc == 0x12B5D4u) {
        ctx->pc = 0x12B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5D0u;
        // 0x12b5d4: 0x92430466  lbu         $v1, 0x466($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1126)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5D8u;
        goto label_12b5d8;
    }
    ctx->pc = 0x12B5D0u;
    {
        const bool branch_taken_0x12b5d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b5d0) {
            ctx->pc = 0x12B5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B5D0u;
            // 0x12b5d4: 0x92430466  lbu         $v1, 0x466($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1126)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B5E8u;
            goto label_12b5e8;
        }
    }
    ctx->pc = 0x12B5D8u;
label_12b5d8:
    // 0x12b5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b5dc:
    // 0x12b5dc: 0xa2400467  sb          $zero, 0x467($s2)
    ctx->pc = 0x12b5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1127), (uint8_t)GPR_U32(ctx, 0));
label_12b5e0:
    // 0x12b5e0: 0xa2420466  sb          $v0, 0x466($s2)
    ctx->pc = 0x12b5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1126), (uint8_t)GPR_U32(ctx, 2));
label_12b5e4:
    // 0x12b5e4: 0x92430466  lbu         $v1, 0x466($s2)
    ctx->pc = 0x12b5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1126)));
label_12b5e8:
    // 0x12b5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b5ec:
    // 0x12b5ec: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_12b5f0:
    if (ctx->pc == 0x12B5F0u) {
        ctx->pc = 0x12B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5ECu;
        // 0x12b5f0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B5F4u;
        goto label_12b5f4;
    }
    ctx->pc = 0x12B5ECu;
    {
        const bool branch_taken_0x12b5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5ECu;
        // 0x12b5f0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5ec) {
            ctx->pc = 0x12B6A8u;
            goto label_12b6a8;
        }
    }
    ctx->pc = 0x12B5F4u;
label_12b5f4:
    // 0x12b5f4: 0x8e420448  lw          $v0, 0x448($s2)
    ctx->pc = 0x12b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1096)));
label_12b5f8:
    // 0x12b5f8: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_12b5fc:
    if (ctx->pc == 0x12B5FCu) {
        ctx->pc = 0x12B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5F8u;
        // 0x12b5fc: 0xae430448  sw          $v1, 0x448($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B600u;
        goto label_12b600;
    }
    ctx->pc = 0x12B5F8u;
    {
        const bool branch_taken_0x12b5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b5f8) {
            ctx->pc = 0x12B5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B5F8u;
            // 0x12b5fc: 0xae430448  sw          $v1, 0x448($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6A4u;
            goto label_12b6a4;
        }
    }
    ctx->pc = 0x12B600u;
label_12b600:
    // 0x12b600: 0x10000029  b           . + 4 + (0x29 << 2)
label_12b604:
    if (ctx->pc == 0x12B604u) {
        ctx->pc = 0x12B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B600u;
        // 0x12b604: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B608u;
        goto label_12b608;
    }
    ctx->pc = 0x12B600u;
    {
        const bool branch_taken_0x12b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B600u;
        // 0x12b604: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b600) {
            ctx->pc = 0x12B6A8u;
            goto label_12b6a8;
        }
    }
    ctx->pc = 0x12B608u;
label_12b608:
    // 0x12b608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b60c:
    // 0x12b60c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_12b610:
    if (ctx->pc == 0x12B610u) {
        ctx->pc = 0x12B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B60Cu;
        // 0x12b610: 0x8fa301c4  lw          $v1, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B614u;
        goto label_12b614;
    }
    ctx->pc = 0x12B60Cu;
    {
        const bool branch_taken_0x12b60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B60Cu;
        // 0x12b610: 0x8fa301c4  lw          $v1, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b60c) {
            ctx->pc = 0x12B620u;
            goto label_12b620;
        }
    }
    ctx->pc = 0x12B614u;
label_12b614:
    // 0x12b614: 0xa2400466  sb          $zero, 0x466($s2)
    ctx->pc = 0x12b614u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1126), (uint8_t)GPR_U32(ctx, 0));
label_12b618:
    // 0x12b618: 0x246200fa  addiu       $v0, $v1, 0xFA
    ctx->pc = 0x12b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
label_12b61c:
    // 0x12b61c: 0xae420448  sw          $v0, 0x448($s2)
    ctx->pc = 0x12b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 2));
label_12b620:
    // 0x12b620: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12b620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_12b624:
    // 0x12b624: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x12b624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_12b628:
    // 0x12b628: 0xc08997c  jal         func_2265F0
label_12b62c:
    if (ctx->pc == 0x12B62Cu) {
        ctx->pc = 0x12B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B628u;
        // 0x12b62c: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B630u;
        goto label_12b630;
    }
    ctx->pc = 0x12B628u;
    SET_GPR_U32(ctx, 31, 0x12B630u);
    ctx->pc = 0x12B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B628u;
    // 0x12b62c: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12B628u, 0x12B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B630u;
label_12b630:
    // 0x12b630: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_12b634:
    if (ctx->pc == 0x12B634u) {
        ctx->pc = 0x12B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B630u;
        // 0x12b634: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B638u;
        goto label_12b638;
    }
    ctx->pc = 0x12B630u;
    {
        const bool branch_taken_0x12b630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B630u;
        // 0x12b634: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b630) {
            ctx->pc = 0x12B6A8u;
            goto label_12b6a8;
        }
    }
    ctx->pc = 0x12B638u;
label_12b638:
    // 0x12b638: 0x96420444  lhu         $v0, 0x444($s2)
    ctx->pc = 0x12b638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b63c:
    // 0x12b63c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x12b63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12b640:
    // 0x12b640: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_12b644:
    if (ctx->pc == 0x12B644u) {
        ctx->pc = 0x12B648u;
        goto label_12b648;
    }
    ctx->pc = 0x12B640u;
    {
        const bool branch_taken_0x12b640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b640) {
            ctx->pc = 0x12B660u;
            goto label_12b660;
        }
    }
    ctx->pc = 0x12B648u;
label_12b648:
    // 0x12b648: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12b648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_12b64c:
    // 0x12b64c: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x12b64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_12b650:
    // 0x12b650: 0xc08997c  jal         func_2265F0
label_12b654:
    if (ctx->pc == 0x12B654u) {
        ctx->pc = 0x12B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B650u;
        // 0x12b654: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B658u;
        goto label_12b658;
    }
    ctx->pc = 0x12B650u;
    SET_GPR_U32(ctx, 31, 0x12B658u);
    ctx->pc = 0x12B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B650u;
    // 0x12b654: 0x8e440318  lw          $a0, 0x318($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12B650u, 0x12B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B658u;
label_12b658:
    // 0x12b658: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_12b65c:
    if (ctx->pc == 0x12B65Cu) {
        ctx->pc = 0x12B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B658u;
        // 0x12b65c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B660u;
        goto label_12b660;
    }
    ctx->pc = 0x12B658u;
    {
        const bool branch_taken_0x12b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B658u;
        // 0x12b65c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b658) {
            ctx->pc = 0x12B6A8u;
            goto label_12b6a8;
        }
    }
    ctx->pc = 0x12B660u;
label_12b660:
    // 0x12b660: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12b660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_12b664:
    // 0x12b664: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x12b664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b668:
    // 0x12b668: 0xc089998  jal         func_226660
label_12b66c:
    if (ctx->pc == 0x12B66Cu) {
        ctx->pc = 0x12B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B668u;
        // 0x12b66c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B670u;
        goto label_12b670;
    }
    ctx->pc = 0x12B668u;
    SET_GPR_U32(ctx, 31, 0x12B670u);
    ctx->pc = 0x12B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B668u;
    // 0x12b66c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x12B668u, 0x12B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B670u;
label_12b670:
    // 0x12b670: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_12b674:
    if (ctx->pc == 0x12B674u) {
        ctx->pc = 0x12B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B670u;
        // 0x12b674: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B678u;
        goto label_12b678;
    }
    ctx->pc = 0x12B670u;
    {
        const bool branch_taken_0x12b670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B670u;
        // 0x12b674: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b670) {
            ctx->pc = 0x12B6A8u;
            goto label_12b6a8;
        }
    }
    ctx->pc = 0x12B678u;
label_12b678:
    // 0x12b678: 0x96420444  lhu         $v0, 0x444($s2)
    ctx->pc = 0x12b678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b67c:
    // 0x12b67c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x12b67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12b680:
    // 0x12b680: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_12b684:
    if (ctx->pc == 0x12B684u) {
        ctx->pc = 0x12B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B680u;
        // 0x12b684: 0xae40036c  sw          $zero, 0x36C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B688u;
        goto label_12b688;
    }
    ctx->pc = 0x12B680u;
    {
        const bool branch_taken_0x12b680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b680) {
            ctx->pc = 0x12B684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B680u;
            // 0x12b684: 0xae40036c  sw          $zero, 0x36C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 876), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6A4u;
            goto label_12b6a4;
        }
    }
    ctx->pc = 0x12B688u;
label_12b688:
    // 0x12b688: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12b688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_12b68c:
    // 0x12b68c: 0x8e440318  lw          $a0, 0x318($s2)
    ctx->pc = 0x12b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
label_12b690:
    // 0x12b690: 0xc089998  jal         func_226660
label_12b694:
    if (ctx->pc == 0x12B694u) {
        ctx->pc = 0x12B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B690u;
        // 0x12b694: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B698u;
        goto label_12b698;
    }
    ctx->pc = 0x12B690u;
    SET_GPR_U32(ctx, 31, 0x12B698u);
    ctx->pc = 0x12B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B690u;
    // 0x12b694: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x12B690u, 0x12B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B698u;
label_12b698:
    // 0x12b698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12b69c:
    if (ctx->pc == 0x12B69Cu) {
        ctx->pc = 0x12B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B698u;
        // 0x12b69c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6A0u;
        goto label_12b6a0;
    }
    ctx->pc = 0x12B698u;
    {
        const bool branch_taken_0x12b698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B698u;
        // 0x12b69c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b698) {
            ctx->pc = 0x12B6A8u;
            goto label_12b6a8;
        }
    }
    ctx->pc = 0x12B6A0u;
label_12b6a0:
    // 0x12b6a0: 0xae40036c  sw          $zero, 0x36C($s2)
    ctx->pc = 0x12b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 876), GPR_U32(ctx, 0));
label_12b6a4:
    // 0x12b6a4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12b6a8:
    // 0x12b6a8: 0xc64003d4  lwc1        $f0, 0x3D4($s2)
    ctx->pc = 0x12b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b6ac:
    // 0x12b6ac: 0xc4548ae0  lwc1        $f20, -0x7520($v0)
    ctx->pc = 0x12b6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12b6b0:
    // 0x12b6b0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x12b6b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b6b4:
    // 0x12b6b4: 0x0  nop
    ctx->pc = 0x12b6b4u;
    // NOP
label_12b6b8:
    // 0x12b6b8: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_12b6bc:
    if (ctx->pc == 0x12B6BCu) {
        ctx->pc = 0x12B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6B8u;
        // 0x12b6bc: 0x92420451  lbu         $v0, 0x451($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1105)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6C0u;
        goto label_12b6c0;
    }
    ctx->pc = 0x12B6B8u;
    {
        const bool branch_taken_0x12b6b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b6b8) {
            ctx->pc = 0x12B6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B6B8u;
            // 0x12b6bc: 0x92420451  lbu         $v0, 0x451($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1105)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6E8u;
            goto label_12b6e8;
        }
    }
    ctx->pc = 0x12B6C0u;
label_12b6c0:
    // 0x12b6c0: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x12b6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_12b6c4:
    // 0x12b6c4: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x12b6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_12b6c8:
    // 0x12b6c8: 0xc08997c  jal         func_2265F0
label_12b6cc:
    if (ctx->pc == 0x12B6CCu) {
        ctx->pc = 0x12B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6C8u;
        // 0x12b6cc: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6D0u;
        goto label_12b6d0;
    }
    ctx->pc = 0x12B6C8u;
    SET_GPR_U32(ctx, 31, 0x12B6D0u);
    ctx->pc = 0x12B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B6C8u;
    // 0x12b6cc: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12B6C8u, 0x12B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6D0u;
label_12b6d0:
    // 0x12b6d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_12b6d4:
    if (ctx->pc == 0x12B6D4u) {
        ctx->pc = 0x12B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D0u;
        // 0x12b6d4: 0x92420451  lbu         $v0, 0x451($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1105)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6D8u;
        goto label_12b6d8;
    }
    ctx->pc = 0x12B6D0u;
    {
        const bool branch_taken_0x12b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b6d0) {
            ctx->pc = 0x12B6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B6D0u;
            // 0x12b6d4: 0x92420451  lbu         $v0, 0x451($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1105)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6E8u;
            goto label_12b6e8;
        }
    }
    ctx->pc = 0x12B6D8u;
label_12b6d8:
    // 0x12b6d8: 0xc64003d4  lwc1        $f0, 0x3D4($s2)
    ctx->pc = 0x12b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b6dc:
    // 0x12b6dc: 0xe65403d4  swc1        $f20, 0x3D4($s2)
    ctx->pc = 0x12b6dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 980), bits); }
label_12b6e0:
    // 0x12b6e0: 0xe64003b4  swc1        $f0, 0x3B4($s2)
    ctx->pc = 0x12b6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
label_12b6e4:
    // 0x12b6e4: 0x92420451  lbu         $v0, 0x451($s2)
    ctx->pc = 0x12b6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1105)));
label_12b6e8:
    // 0x12b6e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_12b6ec:
    if (ctx->pc == 0x12B6ECu) {
        ctx->pc = 0x12B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6E8u;
        // 0x12b6ec: 0xae400448  sw          $zero, 0x448($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6F0u;
        goto label_12b6f0;
    }
    ctx->pc = 0x12B6E8u;
    {
        const bool branch_taken_0x12b6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b6e8) {
            ctx->pc = 0x12B6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B6E8u;
            // 0x12b6ec: 0xae400448  sw          $zero, 0x448($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1096), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6F0u;
            goto label_12b6f0;
        }
    }
    ctx->pc = 0x12B6F0u;
label_12b6f0:
    // 0x12b6f0: 0x7a430260  lq          $v1, 0x260($s2)
    ctx->pc = 0x12b6f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 608)));
label_12b6f4:
    // 0x12b6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b6f8:
    // 0x12b6f8: 0x7a420180  lq          $v0, 0x180($s2)
    ctx->pc = 0x12b6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
label_12b6fc:
    // 0x12b6fc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x12b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_12b700:
    // 0x12b700: 0xc04aab8  jal         func_12AAE0
label_12b704:
    if (ctx->pc == 0x12B704u) {
        ctx->pc = 0x12B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B700u;
        // 0x12b704: 0x7e420270  sq          $v0, 0x270($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B708u;
        goto label_12b708;
    }
    ctx->pc = 0x12B700u;
    SET_GPR_U32(ctx, 31, 0x12B708u);
    ctx->pc = 0x12B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B700u;
    // 0x12b704: 0x7e420270  sq          $v0, 0x270($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AAE0u, 0x12B700u, 0x12B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B708u;
label_12b708:
    // 0x12b708: 0xc6410368  lwc1        $f1, 0x368($s2)
    ctx->pc = 0x12b708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b70c:
    // 0x12b70c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12b70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12b710:
    // 0x12b710: 0x0  nop
    ctx->pc = 0x12b710u;
    // NOP
label_12b714:
    // 0x12b714: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x12b714u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b718:
    // 0x12b718: 0x0  nop
    ctx->pc = 0x12b718u;
    // NOP
label_12b71c:
    // 0x12b71c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_12b720:
    if (ctx->pc == 0x12B720u) {
        ctx->pc = 0x12B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B71Cu;
        // 0x12b720: 0x92420455  lbu         $v0, 0x455($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B724u;
        goto label_12b724;
    }
    ctx->pc = 0x12B71Cu;
    {
        const bool branch_taken_0x12b71c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b71c) {
            ctx->pc = 0x12B720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B71Cu;
            // 0x12b720: 0x92420455  lbu         $v0, 0x455($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1109)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B738u;
            goto label_12b738;
        }
    }
    ctx->pc = 0x12B724u;
label_12b724:
    // 0x12b724: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12b724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b728:
    // 0x12b728: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12b728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12b72c:
    // 0x12b72c: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x12b72cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_12b730:
    // 0x12b730: 0xe6400368  swc1        $f0, 0x368($s2)
    ctx->pc = 0x12b730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 872), bits); }
label_12b734:
    // 0x12b734: 0x92420455  lbu         $v0, 0x455($s2)
    ctx->pc = 0x12b734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1109)));
label_12b738:
    // 0x12b738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b73c:
    // 0x12b73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b740:
    // 0x12b740: 0xc049f62  jal         func_127D88
label_12b744:
    if (ctx->pc == 0x12B744u) {
        ctx->pc = 0x12B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B740u;
        // 0x12b744: 0xa2420456  sb          $v0, 0x456($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1110), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B748u;
        goto label_12b748;
    }
    ctx->pc = 0x12B740u;
    SET_GPR_U32(ctx, 31, 0x12B748u);
    ctx->pc = 0x12B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B740u;
    // 0x12b744: 0xa2420456  sb          $v0, 0x456($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1110), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D88u, 0x12B740u, 0x12B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B748u;
label_12b748:
    // 0x12b748: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b74c:
    // 0x12b74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b750:
    // 0x12b750: 0x54620025  bnel        $v1, $v0, . + 4 + (0x25 << 2)
label_12b754:
    if (ctx->pc == 0x12B754u) {
        ctx->pc = 0x12B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B750u;
        // 0x12b754: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B758u;
        goto label_12b758;
    }
    ctx->pc = 0x12B750u;
    {
        const bool branch_taken_0x12b750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b750) {
            ctx->pc = 0x12B754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B750u;
            // 0x12b754: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B7E8u;
            goto label_12b7e8;
        }
    }
    ctx->pc = 0x12B758u;
label_12b758:
    // 0x12b758: 0x92420454  lbu         $v0, 0x454($s2)
    ctx->pc = 0x12b758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
label_12b75c:
    // 0x12b75c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_12b760:
    if (ctx->pc == 0x12B760u) {
        ctx->pc = 0x12B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B75Cu;
        // 0x12b760: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B764u;
        goto label_12b764;
    }
    ctx->pc = 0x12B75Cu;
    {
        const bool branch_taken_0x12b75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B75Cu;
        // 0x12b760: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b75c) {
            ctx->pc = 0x12B788u;
            goto label_12b788;
        }
    }
    ctx->pc = 0x12B764u;
label_12b764:
    // 0x12b764: 0x8e420314  lw          $v0, 0x314($s2)
    ctx->pc = 0x12b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b768:
    // 0x12b768: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x12b768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_12b76c:
    // 0x12b76c: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x12b76cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_12b770:
    // 0x12b770: 0x8cc5489c  lw          $a1, 0x489C($a2)
    ctx->pc = 0x12b770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_12b774:
    // 0x12b774: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x12b774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_12b778:
    // 0x12b778: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12b77c:
    // 0x12b77c: 0x78625750  lq          $v0, 0x5750($v1)
    ctx->pc = 0x12b77cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 22352)));
label_12b780:
    // 0x12b780: 0x1000000e  b           . + 4 + (0xE << 2)
label_12b784:
    if (ctx->pc == 0x12B784u) {
        ctx->pc = 0x12B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B780u;
        // 0x12b784: 0x7e420180  sq          $v0, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B788u;
        goto label_12b788;
    }
    ctx->pc = 0x12B780u;
    {
        const bool branch_taken_0x12b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B780u;
        // 0x12b784: 0x7e420180  sq          $v0, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b780) {
            ctx->pc = 0x12B7BCu;
            goto label_12b7bc;
        }
    }
    ctx->pc = 0x12B788u;
label_12b788:
    // 0x12b788: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x12b788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12b78c:
    // 0x12b78c: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
label_12b790:
    if (ctx->pc == 0x12B790u) {
        ctx->pc = 0x12B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B78Cu;
        // 0x12b790: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B794u;
        goto label_12b794;
    }
    ctx->pc = 0x12B78Cu;
    {
        const bool branch_taken_0x12b78c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B78Cu;
        // 0x12b790: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b78c) {
            ctx->pc = 0x12B7E4u;
            goto label_12b7e4;
        }
    }
    ctx->pc = 0x12B794u;
label_12b794:
    // 0x12b794: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x12b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b798:
    // 0x12b798: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x12b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_12b79c:
    // 0x12b79c: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x12b79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_12b7a0:
    // 0x12b7a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b7a4:
    // 0x12b7a4: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x12b7a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_12b7a8:
    // 0x12b7a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_12b7ac:
    // 0x12b7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12b7b0:
    // 0x12b7b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b7b4:
    // 0x12b7b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b7b8:
    // 0x12b7b8: 0xe6400188  swc1        $f0, 0x188($s2)
    ctx->pc = 0x12b7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 392), bits); }
label_12b7bc:
    // 0x12b7bc: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12b7c0:
    // 0x12b7c0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_12b7c4:
    if (ctx->pc == 0x12B7C4u) {
        ctx->pc = 0x12B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7C0u;
        // 0x12b7c4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7C8u;
        goto label_12b7c8;
    }
    ctx->pc = 0x12B7C0u;
    {
        const bool branch_taken_0x12b7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b7c0) {
            ctx->pc = 0x12B7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B7C0u;
            // 0x12b7c4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B7E8u;
            goto label_12b7e8;
        }
    }
    ctx->pc = 0x12B7C8u;
label_12b7c8:
    // 0x12b7c8: 0xc6400188  lwc1        $f0, 0x188($s2)
    ctx->pc = 0x12b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b7cc:
    // 0x12b7cc: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x12b7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_12b7d0:
    // 0x12b7d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b7d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12b7d4:
    // 0x12b7d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b7d8:
    // 0x12b7d8: 0x0  nop
    ctx->pc = 0x12b7d8u;
    // NOP
label_12b7dc:
    // 0x12b7dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b7e0:
    // 0x12b7e0: 0xe6400188  swc1        $f0, 0x188($s2)
    ctx->pc = 0x12b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 392), bits); }
label_12b7e4:
    // 0x12b7e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b7e8:
    // 0x12b7e8: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x12b7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_12b7ec:
    // 0x12b7ec: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x12b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_12b7f0:
    // 0x12b7f0: 0x60f809  jalr        $v1
label_12b7f4:
    if (ctx->pc == 0x12B7F4u) {
        ctx->pc = 0x12B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7F0u;
        // 0x12b7f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7F8u;
        goto label_12b7f8;
    }
    ctx->pc = 0x12B7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B7F8u);
        ctx->pc = 0x12B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7F0u;
        // 0x12b7f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B7F0u, 0x12B7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B7F8u;
label_12b7f8:
    // 0x12b7f8: 0xc6410394  lwc1        $f1, 0x394($s2)
    ctx->pc = 0x12b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b7fc:
    // 0x12b7fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12b7fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b800:
    // 0x12b800: 0x0  nop
    ctx->pc = 0x12b800u;
    // NOP
label_12b804:
    // 0x12b804: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_12b808:
    if (ctx->pc == 0x12B808u) {
        ctx->pc = 0x12B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B804u;
        // 0x12b808: 0x8e70b19c  lw          $s0, -0x4E64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B80Cu;
        goto label_12b80c;
    }
    ctx->pc = 0x12B804u;
    {
        const bool branch_taken_0x12b804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B804u;
        // 0x12b808: 0x8e70b19c  lw          $s0, -0x4E64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b804) {
            ctx->pc = 0x12B91Cu;
            goto label_12b91c;
        }
    }
    ctx->pc = 0x12B80Cu;
label_12b80c:
    // 0x12b80c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12b80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12b810:
    // 0x12b810: 0xc640040c  lwc1        $f0, 0x40C($s2)
    ctx->pc = 0x12b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b814:
    // 0x12b814: 0xc642039c  lwc1        $f2, 0x39C($s2)
    ctx->pc = 0x12b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b818:
    // 0x12b818: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12b818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b81c:
    // 0x12b81c: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x12b81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_12b820:
    // 0x12b820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b824:
    // 0x12b824: 0x0  nop
    ctx->pc = 0x12b824u;
    // NOP
label_12b828:
    // 0x12b828: 0x46011569  min.s       $f21, $f2, $f1
    ctx->pc = 0x12b828u;
    ctx->f[21] = std::min(ctx->f[2], ctx->f[1]);
label_12b82c:
    // 0x12b82c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12b830:
    if (ctx->pc == 0x12B830u) {
        ctx->pc = 0x12B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B82Cu;
        // 0x12b830: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B834u;
        goto label_12b834;
    }
    ctx->pc = 0x12B82Cu;
    {
        const bool branch_taken_0x12b82c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B82Cu;
        // 0x12b830: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b82c) {
            ctx->pc = 0x12B870u;
            goto label_12b870;
        }
    }
    ctx->pc = 0x12B834u;
label_12b834:
    // 0x12b834: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x12b834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_12b838:
    // 0x12b838: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x12b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_12b83c:
    // 0x12b83c: 0x60f809  jalr        $v1
label_12b840:
    if (ctx->pc == 0x12B840u) {
        ctx->pc = 0x12B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B83Cu;
        // 0x12b840: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B844u;
        goto label_12b844;
    }
    ctx->pc = 0x12B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B844u);
        ctx->pc = 0x12B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B83Cu;
        // 0x12b840: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B83Cu, 0x12B844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B844u;
label_12b844:
    // 0x12b844: 0xc643040c  lwc1        $f3, 0x40C($s2)
    ctx->pc = 0x12b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12b848:
    // 0x12b848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12b84c:
    // 0x12b84c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b850:
    // 0x12b850: 0xc6420394  lwc1        $f2, 0x394($s2)
    ctx->pc = 0x12b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b854:
    // 0x12b854: 0x0  nop
    ctx->pc = 0x12b854u;
    // NOP
label_12b858:
    // 0x12b858: 0x0  nop
    ctx->pc = 0x12b858u;
    // NOP
label_12b85c:
    // 0x12b85c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x12b85cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
label_12b860:
    // 0x12b860: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12b860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_12b864:
    // 0x12b864: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12b864u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12b868:
    // 0x12b868: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x12b868u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12b86c:
    // 0x12b86c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b870:
    // 0x12b870: 0xc6540394  lwc1        $f20, 0x394($s2)
    ctx->pc = 0x12b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12b874:
    // 0x12b874: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x12b874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_12b878:
    // 0x12b878: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_12b87c:
    // 0x12b87c: 0x60f809  jalr        $v1
label_12b880:
    if (ctx->pc == 0x12B880u) {
        ctx->pc = 0x12B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B87Cu;
        // 0x12b880: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B884u;
        goto label_12b884;
    }
    ctx->pc = 0x12B87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B884u);
        ctx->pc = 0x12B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B87Cu;
        // 0x12b880: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B87Cu, 0x12B884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B884u;
label_12b884:
    // 0x12b884: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12b884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b888:
    // 0x12b888: 0x0  nop
    ctx->pc = 0x12b888u;
    // NOP
label_12b88c:
    // 0x12b88c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_12b890:
    if (ctx->pc == 0x12B890u) {
        ctx->pc = 0x12B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B88Cu;
        // 0x12b890: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B894u;
        goto label_12b894;
    }
    ctx->pc = 0x12B88Cu;
    {
        const bool branch_taken_0x12b88c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B88Cu;
        // 0x12b890: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b88c) {
            ctx->pc = 0x12B8C0u;
            goto label_12b8c0;
        }
    }
    ctx->pc = 0x12B894u;
label_12b894:
    // 0x12b894: 0xc6540394  lwc1        $f20, 0x394($s2)
    ctx->pc = 0x12b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12b898:
    // 0x12b898: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x12b898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_12b89c:
    // 0x12b89c: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x12b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_12b8a0:
    // 0x12b8a0: 0x60f809  jalr        $v1
label_12b8a4:
    if (ctx->pc == 0x12B8A4u) {
        ctx->pc = 0x12B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A0u;
        // 0x12b8a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8A8u;
        goto label_12b8a8;
    }
    ctx->pc = 0x12B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B8A8u);
        ctx->pc = 0x12B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A0u;
        // 0x12b8a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8A0u, 0x12B8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B8A8u;
label_12b8a8:
    // 0x12b8a8: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x12b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b8ac:
    // 0x12b8ac: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x12b8acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12b8b0:
    // 0x12b8b0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x12b8b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_12b8b4:
    // 0x12b8b4: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x12b8b4u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
label_12b8b8:
    // 0x12b8b8: 0x1000000c  b           . + 4 + (0xC << 2)
label_12b8bc:
    if (ctx->pc == 0x12B8BCu) {
        ctx->pc = 0x12B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B8u;
        // 0x12b8bc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8C0u;
        goto label_12b8c0;
    }
    ctx->pc = 0x12B8B8u;
    {
        const bool branch_taken_0x12b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B8u;
        // 0x12b8bc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8b8) {
            ctx->pc = 0x12B8ECu;
            goto label_12b8ec;
        }
    }
    ctx->pc = 0x12B8C0u;
label_12b8c0:
    // 0x12b8c0: 0xc6540394  lwc1        $f20, 0x394($s2)
    ctx->pc = 0x12b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12b8c4:
    // 0x12b8c4: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x12b8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_12b8c8:
    // 0x12b8c8: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x12b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_12b8cc:
    // 0x12b8cc: 0x60f809  jalr        $v1
label_12b8d0:
    if (ctx->pc == 0x12B8D0u) {
        ctx->pc = 0x12B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8CCu;
        // 0x12b8d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8D4u;
        goto label_12b8d4;
    }
    ctx->pc = 0x12B8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B8D4u);
        ctx->pc = 0x12B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8CCu;
        // 0x12b8d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8CCu, 0x12B8D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B8D4u;
label_12b8d4:
    // 0x12b8d4: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x12b8d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_12b8d8:
    // 0x12b8d8: 0xc64201a0  lwc1        $f2, 0x1A0($s2)
    ctx->pc = 0x12b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b8dc:
    // 0x12b8dc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x12b8dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12b8e0:
    // 0x12b8e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12b8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_12b8e4:
    // 0x12b8e4: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x12b8e4u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
label_12b8e8:
    // 0x12b8e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b8ec:
    // 0x12b8ec: 0x84500190  lh          $s0, 0x190($v0)
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_12b8f0:
    // 0x12b8f0: 0x24510190  addiu       $s1, $v0, 0x190
    ctx->pc = 0x12b8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_12b8f4:
    // 0x12b8f4: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x12b8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_12b8f8:
    // 0x12b8f8: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x12b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_12b8fc:
    // 0x12b8fc: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x12b8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_12b900:
    // 0x12b900: 0x60f809  jalr        $v1
label_12b904:
    if (ctx->pc == 0x12B904u) {
        ctx->pc = 0x12B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B900u;
        // 0x12b904: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B908u;
        goto label_12b908;
    }
    ctx->pc = 0x12B900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B908u);
        ctx->pc = 0x12B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B900u;
        // 0x12b904: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B900u, 0x12B908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B908u;
label_12b908:
    // 0x12b908: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x12b908u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_12b90c:
    // 0x12b90c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12b910:
    // 0x12b910: 0x40f809  jalr        $v0
label_12b914:
    if (ctx->pc == 0x12B914u) {
        ctx->pc = 0x12B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B910u;
        // 0x12b914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B918u;
        goto label_12b918;
    }
    ctx->pc = 0x12B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B918u);
        ctx->pc = 0x12B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B910u;
        // 0x12b914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B910u, 0x12B918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B918u;
label_12b918:
    // 0x12b918: 0x8e70b19c  lw          $s0, -0x4E64($s3)
    ctx->pc = 0x12b918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947228)));
label_12b91c:
    // 0x12b91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b920:
    // 0x12b920: 0x1602002a  bne         $s0, $v0, . + 4 + (0x2A << 2)
label_12b924:
    if (ctx->pc == 0x12B924u) {
        ctx->pc = 0x12B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B920u;
        // 0x12b924: 0x26550180  addiu       $s5, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B928u;
        goto label_12b928;
    }
    ctx->pc = 0x12B920u;
    {
        const bool branch_taken_0x12b920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B920u;
        // 0x12b924: 0x26550180  addiu       $s5, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b920) {
            ctx->pc = 0x12B9CCu;
            goto label_12b9cc;
        }
    }
    ctx->pc = 0x12B928u;
label_12b928:
    // 0x12b928: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12b92c:
    // 0x12b92c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12b930:
    // 0x12b930: 0xc136afa  jal         func_4DABE8
label_12b934:
    if (ctx->pc == 0x12B934u) {
        ctx->pc = 0x12B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B930u;
        // 0x12b934: 0x26460260  addiu       $a2, $s2, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B938u;
        goto label_12b938;
    }
    ctx->pc = 0x12B930u;
    SET_GPR_U32(ctx, 31, 0x12B938u);
    ctx->pc = 0x12B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B930u;
    // 0x12b934: 0x26460260  addiu       $a2, $s2, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12B930u, 0x12B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B938u;
label_12b938:
    // 0x12b938: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x12b938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12b93c:
    // 0x12b93c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12b93cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12b940:
    // 0x12b940: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x12b940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12b944:
    // 0x12b944: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12b944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12b948:
    // 0x12b948: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12b948u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12b94c:
    // 0x12b94c: 0xc6400304  lwc1        $f0, 0x304($s2)
    ctx->pc = 0x12b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b950:
    // 0x12b950: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12b950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12b954:
    // 0x12b954: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12b954u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12b958:
    // 0x12b958: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x12b958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12b95c:
    // 0x12b95c: 0x1470000a  bne         $v1, $s0, . + 4 + (0xA << 2)
label_12b960:
    if (ctx->pc == 0x12B960u) {
        ctx->pc = 0x12B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B95Cu;
        // 0x12b960: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B964u;
        goto label_12b964;
    }
    ctx->pc = 0x12B95Cu;
    {
        const bool branch_taken_0x12b95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x12B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B95Cu;
        // 0x12b960: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b95c) {
            ctx->pc = 0x12B988u;
            goto label_12b988;
        }
    }
    ctx->pc = 0x12B964u;
label_12b964:
    // 0x12b964: 0x3c013fd8  lui         $at, 0x3FD8
    ctx->pc = 0x12b964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16344 << 16));
label_12b968:
    // 0x12b968: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x12b968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_12b96c:
    // 0x12b96c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b970:
    // 0x12b970: 0x0  nop
    ctx->pc = 0x12b970u;
    // NOP
label_12b974:
    // 0x12b974: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12b974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12b978:
    // 0x12b978: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12b978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b97c:
    // 0x12b97c: 0x0  nop
    ctx->pc = 0x12b97cu;
    // NOP
label_12b980:
    // 0x12b980: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_12b984:
    if (ctx->pc == 0x12B984u) {
        ctx->pc = 0x12B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B980u;
        // 0x12b984: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B988u;
        goto label_12b988;
    }
    ctx->pc = 0x12B980u;
    {
        const bool branch_taken_0x12b980 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B980u;
        // 0x12b984: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b980) {
            ctx->pc = 0x12B9C4u;
            goto label_12b9c4;
        }
    }
    ctx->pc = 0x12B988u;
label_12b988:
    // 0x12b988: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b98c:
    // 0x12b98c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x12b98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_12b990:
    // 0x12b990: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_12b994:
    // 0x12b994: 0x40f809  jalr        $v0
label_12b998:
    if (ctx->pc == 0x12B998u) {
        ctx->pc = 0x12B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B994u;
        // 0x12b998: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B99Cu;
        goto label_12b99c;
    }
    ctx->pc = 0x12B994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B99Cu);
        ctx->pc = 0x12B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B994u;
        // 0x12b998: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B994u, 0x12B99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B99Cu;
label_12b99c:
    // 0x12b99c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b9a0:
    // 0x12b9a0: 0xc6410188  lwc1        $f1, 0x188($s2)
    ctx->pc = 0x12b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b9a4:
    // 0x12b9a4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x12b9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_12b9a8:
    // 0x12b9a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12b9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12b9ac:
    // 0x12b9ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12b9acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12b9b0:
    // 0x12b9b0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12b9b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12b9b4:
    // 0x12b9b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12b9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b9b8:
    // 0x12b9b8: 0x0  nop
    ctx->pc = 0x12b9b8u;
    // NOP
label_12b9bc:
    // 0x12b9bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12b9c0:
    if (ctx->pc == 0x12B9C0u) {
        ctx->pc = 0x12B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9BCu;
        // 0x12b9c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9C4u;
        goto label_12b9c4;
    }
    ctx->pc = 0x12B9BCu;
    {
        const bool branch_taken_0x12b9bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9BCu;
        // 0x12b9c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9bc) {
            ctx->pc = 0x12B9CCu;
            goto label_12b9cc;
        }
    }
    ctx->pc = 0x12B9C4u;
label_12b9c4:
    // 0x12b9c4: 0xc049340  jal         func_124D00
label_12b9c8:
    if (ctx->pc == 0x12B9C8u) {
        ctx->pc = 0x12B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9C4u;
        // 0x12b9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9CCu;
        goto label_12b9cc;
    }
    ctx->pc = 0x12B9C4u;
    SET_GPR_U32(ctx, 31, 0x12B9CCu);
    ctx->pc = 0x12B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B9C4u;
    // 0x12b9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D00u, 0x12B9C4u, 0x12B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9CCu;
label_12b9cc:
    // 0x12b9cc: 0x82420458  lb          $v0, 0x458($s2)
    ctx->pc = 0x12b9ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1112)));
label_12b9d0:
    // 0x12b9d0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_12b9d4:
    if (ctx->pc == 0x12B9D4u) {
        ctx->pc = 0x12B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9D0u;
        // 0x12b9d4: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9D8u;
        goto label_12b9d8;
    }
    ctx->pc = 0x12B9D0u;
    {
        const bool branch_taken_0x12b9d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12b9d0) {
            ctx->pc = 0x12B9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B9D0u;
            // 0x12b9d4: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B9E8u;
            goto label_12b9e8;
        }
    }
    ctx->pc = 0x12B9D8u;
label_12b9d8:
    // 0x12b9d8: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12b9dc:
    // 0x12b9dc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_12b9e0:
    if (ctx->pc == 0x12B9E0u) {
        ctx->pc = 0x12B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9DCu;
        // 0x12b9e0: 0xafa001f0  sw          $zero, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9E4u;
        goto label_12b9e4;
    }
    ctx->pc = 0x12B9DCu;
    {
        const bool branch_taken_0x12b9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b9dc) {
            ctx->pc = 0x12B9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B9DCu;
            // 0x12b9e0: 0xafa001f0  sw          $zero, 0x1F0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B9FCu;
            goto label_12b9fc;
        }
    }
    ctx->pc = 0x12B9E4u;
label_12b9e4:
    // 0x12b9e4: 0x8e420314  lw          $v0, 0x314($s2)
    ctx->pc = 0x12b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12b9e8:
    // 0x12b9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b9ec:
    if (ctx->pc == 0x12B9ECu) {
        ctx->pc = 0x12B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9E8u;
        // 0x12b9ec: 0x8fa501ec  lw          $a1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9F0u;
        goto label_12b9f0;
    }
    ctx->pc = 0x12B9E8u;
    {
        const bool branch_taken_0x12b9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9E8u;
        // 0x12b9ec: 0x8fa501ec  lw          $a1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9e8) {
            ctx->pc = 0x12B9F8u;
            goto label_12b9f8;
        }
    }
    ctx->pc = 0x12B9F0u;
label_12b9f0:
    // 0x12b9f0: 0xc04a630  jal         func_1298C0
label_12b9f4:
    if (ctx->pc == 0x12B9F4u) {
        ctx->pc = 0x12B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9F0u;
        // 0x12b9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B9F8u;
        goto label_12b9f8;
    }
    ctx->pc = 0x12B9F0u;
    SET_GPR_U32(ctx, 31, 0x12B9F8u);
    ctx->pc = 0x12B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B9F0u;
    // 0x12b9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298C0u, 0x12B9F0u, 0x12B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9F8u;
label_12b9f8:
    // 0x12b9f8: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x12b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_12b9fc:
    // 0x12b9fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12b9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12ba00:
    // 0x12ba00: 0xc6400368  lwc1        $f0, 0x368($s2)
    ctx->pc = 0x12ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ba04:
    // 0x12ba04: 0x7a420250  lq          $v0, 0x250($s2)
    ctx->pc = 0x12ba04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 592)));
label_12ba08:
    // 0x12ba08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12ba08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ba0c:
    // 0x12ba0c: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x12ba0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_12ba10:
    // 0x12ba10: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12ba14:
    if (ctx->pc == 0x12BA14u) {
        ctx->pc = 0x12BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA10u;
        // 0x12ba14: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA18u;
        goto label_12ba18;
    }
    ctx->pc = 0x12BA10u;
    {
        const bool branch_taken_0x12ba10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA10u;
        // 0x12ba14: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba10) {
            ctx->pc = 0x12BA24u;
            goto label_12ba24;
        }
    }
    ctx->pc = 0x12BA18u;
label_12ba18:
    // 0x12ba18: 0x92420455  lbu         $v0, 0x455($s2)
    ctx->pc = 0x12ba18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1109)));
label_12ba1c:
    // 0x12ba1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12ba20:
    if (ctx->pc == 0x12BA20u) {
        ctx->pc = 0x12BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA1Cu;
        // 0x12ba20: 0x8fa501c8  lw          $a1, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA24u;
        goto label_12ba24;
    }
    ctx->pc = 0x12BA1Cu;
    {
        const bool branch_taken_0x12ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA1Cu;
        // 0x12ba20: 0x8fa501c8  lw          $a1, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba1c) {
            ctx->pc = 0x12BA38u;
            goto label_12ba38;
        }
    }
    ctx->pc = 0x12BA24u;
label_12ba24:
    // 0x12ba24: 0x8e42047c  lw          $v0, 0x47C($s2)
    ctx->pc = 0x12ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1148)));
label_12ba28:
    // 0x12ba28: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x12ba28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12ba2c:
    // 0x12ba2c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
label_12ba30:
    if (ctx->pc == 0x12BA30u) {
        ctx->pc = 0x12BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA2Cu;
        // 0x12ba30: 0x265e0320  addiu       $fp, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA34u;
        goto label_12ba34;
    }
    ctx->pc = 0x12BA2Cu;
    {
        const bool branch_taken_0x12ba2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA2Cu;
        // 0x12ba30: 0x265e0320  addiu       $fp, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba2c) {
            ctx->pc = 0x12BD88u;
            goto label_12bd88;
        }
    }
    ctx->pc = 0x12BA34u;
label_12ba34:
    // 0x12ba34: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x12ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_12ba38:
    // 0x12ba38: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x12ba38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12ba3c:
    // 0x12ba3c: 0x14a00087  bnez        $a1, . + 4 + (0x87 << 2)
label_12ba40:
    if (ctx->pc == 0x12BA40u) {
        ctx->pc = 0x12BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA3Cu;
        // 0x12ba40: 0x265e0320  addiu       $fp, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA44u;
        goto label_12ba44;
    }
    ctx->pc = 0x12BA3Cu;
    {
        const bool branch_taken_0x12ba3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA3Cu;
        // 0x12ba40: 0x265e0320  addiu       $fp, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba3c) {
            ctx->pc = 0x12BC5Cu;
            goto label_12bc5c;
        }
    }
    ctx->pc = 0x12BA44u;
label_12ba44:
    // 0x12ba44: 0x96500444  lhu         $s0, 0x444($s2)
    ctx->pc = 0x12ba44u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12ba48:
    // 0x12ba48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ba4c:
    // 0x12ba4c: 0x16020066  bne         $s0, $v0, . + 4 + (0x66 << 2)
label_12ba50:
    if (ctx->pc == 0x12BA50u) {
        ctx->pc = 0x12BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA4Cu;
        // 0x12ba50: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA54u;
        goto label_12ba54;
    }
    ctx->pc = 0x12BA4Cu;
    {
        const bool branch_taken_0x12ba4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA4Cu;
        // 0x12ba50: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba4c) {
            ctx->pc = 0x12BBE8u;
            goto label_12bbe8;
        }
    }
    ctx->pc = 0x12BA54u;
label_12ba54:
    // 0x12ba54: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x12ba54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_12ba58:
    // 0x12ba58: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_12ba5c:
    // 0x12ba5c: 0xc0e409a  jal         func_390268
label_12ba60:
    if (ctx->pc == 0x12BA60u) {
        ctx->pc = 0x12BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA5Cu;
        // 0x12ba60: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA64u;
        goto label_12ba64;
    }
    ctx->pc = 0x12BA5Cu;
    SET_GPR_U32(ctx, 31, 0x12BA64u);
    ctx->pc = 0x12BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA5Cu;
    // 0x12ba60: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12BA5Cu, 0x12BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA64u;
label_12ba64:
    // 0x12ba64: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x12ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12ba68:
    // 0x12ba68: 0x5482003d  bnel        $a0, $v0, . + 4 + (0x3D << 2)
label_12ba6c:
    if (ctx->pc == 0x12BA6Cu) {
        ctx->pc = 0x12BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA68u;
        // 0x12ba6c: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA70u;
        goto label_12ba70;
    }
    ctx->pc = 0x12BA68u;
    {
        const bool branch_taken_0x12ba68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12ba68) {
            ctx->pc = 0x12BA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA68u;
            // 0x12ba6c: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BB60u;
            goto label_12bb60;
        }
    }
    ctx->pc = 0x12BA70u;
label_12ba70:
    // 0x12ba70: 0xc0874fa  jal         func_21D3E8
label_12ba74:
    if (ctx->pc == 0x12BA74u) {
        ctx->pc = 0x12BA78u;
        goto label_12ba78;
    }
    ctx->pc = 0x12BA70u;
    SET_GPR_U32(ctx, 31, 0x12BA78u);
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x12BA70u, 0x12BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA78u;
label_12ba78:
    // 0x12ba78: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x12ba78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_12ba7c:
    // 0x12ba7c: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
label_12ba80:
    if (ctx->pc == 0x12BA80u) {
        ctx->pc = 0x12BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA7Cu;
        // 0x12ba80: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA84u;
        goto label_12ba84;
    }
    ctx->pc = 0x12BA7Cu;
    {
        const bool branch_taken_0x12ba7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ba7c) {
            ctx->pc = 0x12BA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA7Cu;
            // 0x12ba80: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BB60u;
            goto label_12bb60;
        }
    }
    ctx->pc = 0x12BA84u;
label_12ba84:
    // 0x12ba84: 0xc08cf14  jal         func_233C50
label_12ba88:
    if (ctx->pc == 0x12BA88u) {
        ctx->pc = 0x12BA8Cu;
        goto label_12ba8c;
    }
    ctx->pc = 0x12BA84u;
    SET_GPR_U32(ctx, 31, 0x12BA8Cu);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x12BA84u, 0x12BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA8Cu;
label_12ba8c:
    // 0x12ba8c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_12ba90:
    if (ctx->pc == 0x12BA90u) {
        ctx->pc = 0x12BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA8Cu;
        // 0x12ba90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA94u;
        goto label_12ba94;
    }
    ctx->pc = 0x12BA8Cu;
    {
        const bool branch_taken_0x12ba8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA8Cu;
        // 0x12ba90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba8c) {
            ctx->pc = 0x12BB5Cu;
            goto label_12bb5c;
        }
    }
    ctx->pc = 0x12BA94u;
label_12ba94:
    // 0x12ba94: 0xa250046f  sb          $s0, 0x46F($s2)
    ctx->pc = 0x12ba94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1135), (uint8_t)GPR_U32(ctx, 16));
label_12ba98:
    // 0x12ba98: 0xafa701f0  sw          $a3, 0x1F0($sp)
    ctx->pc = 0x12ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 7));
label_12ba9c:
    // 0x12ba9c: 0xc089b98  jal         func_226E60
label_12baa0:
    if (ctx->pc == 0x12BAA0u) {
        ctx->pc = 0x12BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA9Cu;
        // 0x12baa0: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAA4u;
        goto label_12baa4;
    }
    ctx->pc = 0x12BA9Cu;
    SET_GPR_U32(ctx, 31, 0x12BAA4u);
    ctx->pc = 0x12BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA9Cu;
    // 0x12baa0: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x12BA9Cu, 0x12BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAA4u;
label_12baa4:
    // 0x12baa4: 0x8e460314  lw          $a2, 0x314($s2)
    ctx->pc = 0x12baa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12baa8:
    // 0x12baa8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x12baa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12baac:
    // 0x12baac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12baacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12bab0:
    // 0x12bab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12bab4:
    // 0x12bab4: 0xc04ba6a  jal         func_12E9A8
label_12bab8:
    if (ctx->pc == 0x12BAB8u) {
        ctx->pc = 0x12BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAB4u;
        // 0x12bab8: 0x27a801b4  addiu       $t0, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BABCu;
        goto label_12babc;
    }
    ctx->pc = 0x12BAB4u;
    SET_GPR_U32(ctx, 31, 0x12BABCu);
    ctx->pc = 0x12BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAB4u;
    // 0x12bab8: 0x27a801b4  addiu       $t0, $sp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E9A8u, 0x12BAB4u, 0x12BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BABCu;
label_12babc:
    // 0x12babc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12babcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12bac0:
    // 0x12bac0: 0xc64003cc  lwc1        $f0, 0x3CC($s2)
    ctx->pc = 0x12bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bac4:
    // 0x12bac4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12bac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bac8:
    // 0x12bac8: 0x0  nop
    ctx->pc = 0x12bac8u;
    // NOP
label_12bacc:
    // 0x12bacc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_12bad0:
    if (ctx->pc == 0x12BAD0u) {
        ctx->pc = 0x12BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BACCu;
        // 0x12bad0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAD4u;
        goto label_12bad4;
    }
    ctx->pc = 0x12BACCu;
    {
        const bool branch_taken_0x12bacc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BACCu;
        // 0x12bad0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bacc) {
            ctx->pc = 0x12BB30u;
            goto label_12bb30;
        }
    }
    ctx->pc = 0x12BAD4u;
label_12bad4:
    // 0x12bad4: 0xc64003e0  lwc1        $f0, 0x3E0($s2)
    ctx->pc = 0x12bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bad8:
    // 0x12bad8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12bad8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12badc:
    // 0x12badc: 0x0  nop
    ctx->pc = 0x12badcu;
    // NOP
label_12bae0:
    // 0x12bae0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_12bae4:
    if (ctx->pc == 0x12BAE4u) {
        ctx->pc = 0x12BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE0u;
        // 0x12bae4: 0xe64003cc  swc1        $f0, 0x3CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAE8u;
        goto label_12bae8;
    }
    ctx->pc = 0x12BAE0u;
    {
        const bool branch_taken_0x12bae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12bae0) {
            ctx->pc = 0x12BAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BAE0u;
            // 0x12bae4: 0xe64003cc  swc1        $f0, 0x3CC($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 972), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BB14u;
            goto label_12bb14;
        }
    }
    ctx->pc = 0x12BAE8u;
label_12bae8:
    // 0x12bae8: 0xc641034c  lwc1        $f1, 0x34C($s2)
    ctx->pc = 0x12bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12baec:
    // 0x12baec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12baf0:
    // 0x12baf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12baf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12baf4:
    // 0x12baf4: 0x0  nop
    ctx->pc = 0x12baf4u;
    // NOP
label_12baf8:
    // 0x12baf8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12baf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bafc:
    // 0x12bafc: 0x0  nop
    ctx->pc = 0x12bafcu;
    // NOP
label_12bb00:
    // 0x12bb00: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_12bb04:
    if (ctx->pc == 0x12BB04u) {
        ctx->pc = 0x12BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB00u;
        // 0x12bb04: 0xe64103cc  swc1        $f1, 0x3CC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB08u;
        goto label_12bb08;
    }
    ctx->pc = 0x12BB00u;
    {
        const bool branch_taken_0x12bb00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12bb00) {
            ctx->pc = 0x12BB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BB00u;
            // 0x12bb04: 0xe64103cc  swc1        $f1, 0x3CC($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 972), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BB18u;
            goto label_12bb18;
        }
    }
    ctx->pc = 0x12BB08u;
label_12bb08:
    // 0x12bb08: 0xc640032c  lwc1        $f0, 0x32C($s2)
    ctx->pc = 0x12bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bb0c:
    // 0x12bb0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_12bb10:
    if (ctx->pc == 0x12BB10u) {
        ctx->pc = 0x12BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB0Cu;
        // 0x12bb10: 0xe64003cc  swc1        $f0, 0x3CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB14u;
        goto label_12bb14;
    }
    ctx->pc = 0x12BB0Cu;
    {
        const bool branch_taken_0x12bb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB0Cu;
        // 0x12bb10: 0xe64003cc  swc1        $f0, 0x3CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb0c) {
            ctx->pc = 0x12BB18u;
            goto label_12bb18;
        }
    }
    ctx->pc = 0x12BB14u;
label_12bb14:
    // 0x12bb14: 0xe64103e0  swc1        $f1, 0x3E0($s2)
    ctx->pc = 0x12bb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 992), bits); }
label_12bb18:
    // 0x12bb18: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x12bb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_12bb1c:
    // 0x12bb1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12bb1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12bb20:
    // 0x12bb20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bb24:
    // 0x12bb24: 0x0  nop
    ctx->pc = 0x12bb24u;
    // NOP
label_12bb28:
    // 0x12bb28: 0xe640034c  swc1        $f0, 0x34C($s2)
    ctx->pc = 0x12bb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 844), bits); }
label_12bb2c:
    // 0x12bb2c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12bb30:
    // 0x12bb30: 0xc64103d0  lwc1        $f1, 0x3D0($s2)
    ctx->pc = 0x12bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bb34:
    // 0x12bb34: 0xc4408ae0  lwc1        $f0, -0x7520($v0)
    ctx->pc = 0x12bb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bb38:
    // 0x12bb38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12bb38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bb3c:
    // 0x12bb3c: 0x0  nop
    ctx->pc = 0x12bb3cu;
    // NOP
label_12bb40:
    // 0x12bb40: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_12bb44:
    if (ctx->pc == 0x12BB44u) {
        ctx->pc = 0x12BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB40u;
        // 0x12bb44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB48u;
        goto label_12bb48;
    }
    ctx->pc = 0x12BB40u;
    {
        const bool branch_taken_0x12bb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB40u;
        // 0x12bb44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb40) {
            ctx->pc = 0x12BBE8u;
            goto label_12bbe8;
        }
    }
    ctx->pc = 0x12BB48u;
label_12bb48:
    // 0x12bb48: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x12bb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_12bb4c:
    // 0x12bb4c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x12bb4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_12bb50:
    // 0x12bb50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bb54:
    // 0x12bb54: 0x10000024  b           . + 4 + (0x24 << 2)
label_12bb58:
    if (ctx->pc == 0x12BB58u) {
        ctx->pc = 0x12BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB54u;
        // 0x12bb58: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB5Cu;
        goto label_12bb5c;
    }
    ctx->pc = 0x12BB54u;
    {
        const bool branch_taken_0x12bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB54u;
        // 0x12bb58: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb54) {
            ctx->pc = 0x12BBE8u;
            goto label_12bbe8;
        }
    }
    ctx->pc = 0x12BB5Cu;
label_12bb5c:
    // 0x12bb5c: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12bb5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12bb60:
    // 0x12bb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12bb64:
    // 0x12bb64: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_12bb68:
    if (ctx->pc == 0x12BB68u) {
        ctx->pc = 0x12BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB64u;
        // 0x12bb68: 0x27b400e0  addiu       $s4, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB6Cu;
        goto label_12bb6c;
    }
    ctx->pc = 0x12BB64u;
    {
        const bool branch_taken_0x12bb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB64u;
        // 0x12bb68: 0x27b400e0  addiu       $s4, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb64) {
            ctx->pc = 0x12BBE4u;
            goto label_12bbe4;
        }
    }
    ctx->pc = 0x12BB6Cu;
label_12bb6c:
    // 0x12bb6c: 0x9242046f  lbu         $v0, 0x46F($s2)
    ctx->pc = 0x12bb6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1135)));
label_12bb70:
    // 0x12bb70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12bb74:
    if (ctx->pc == 0x12BB74u) {
        ctx->pc = 0x12BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB70u;
        // 0x12bb74: 0x8fa301d4  lw          $v1, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB78u;
        goto label_12bb78;
    }
    ctx->pc = 0x12BB70u;
    {
        const bool branch_taken_0x12bb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB70u;
        // 0x12bb74: 0x8fa301d4  lw          $v1, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb70) {
            ctx->pc = 0x12BB8Cu;
            goto label_12bb8c;
        }
    }
    ctx->pc = 0x12BB78u;
label_12bb78:
    // 0x12bb78: 0xc64003cc  lwc1        $f0, 0x3CC($s2)
    ctx->pc = 0x12bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bb7c:
    // 0x12bb7c: 0xae4003cc  sw          $zero, 0x3CC($s2)
    ctx->pc = 0x12bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 972), GPR_U32(ctx, 0));
label_12bb80:
    // 0x12bb80: 0xe640034c  swc1        $f0, 0x34C($s2)
    ctx->pc = 0x12bb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 844), bits); }
label_12bb84:
    // 0x12bb84: 0xa240046f  sb          $zero, 0x46F($s2)
    ctx->pc = 0x12bb84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1135), (uint8_t)GPR_U32(ctx, 0));
label_12bb88:
    // 0x12bb88: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x12bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_12bb8c:
    // 0x12bb8c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_12bb90:
    if (ctx->pc == 0x12BB90u) {
        ctx->pc = 0x12BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB8Cu;
        // 0x12bb90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB94u;
        goto label_12bb94;
    }
    ctx->pc = 0x12BB8Cu;
    {
        const bool branch_taken_0x12bb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB8Cu;
        // 0x12bb90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb8c) {
            ctx->pc = 0x12BBE8u;
            goto label_12bbe8;
        }
    }
    ctx->pc = 0x12BB94u;
label_12bb94:
    // 0x12bb94: 0x92420463  lbu         $v0, 0x463($s2)
    ctx->pc = 0x12bb94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1123)));
label_12bb98:
    // 0x12bb98: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_12bb9c:
    if (ctx->pc == 0x12BB9Cu) {
        ctx->pc = 0x12BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB98u;
        // 0x12bb9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBA0u;
        goto label_12bba0;
    }
    ctx->pc = 0x12BB98u;
    {
        const bool branch_taken_0x12bb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bb98) {
            ctx->pc = 0x12BB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BB98u;
            // 0x12bb9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BBE8u;
            goto label_12bbe8;
        }
    }
    ctx->pc = 0x12BBA0u;
label_12bba0:
    // 0x12bba0: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
label_12bba4:
    if (ctx->pc == 0x12BBA4u) {
        ctx->pc = 0x12BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBA0u;
        // 0x12bba4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBA8u;
        goto label_12bba8;
    }
    ctx->pc = 0x12BBA0u;
    {
        const bool branch_taken_0x12bba0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBA0u;
        // 0x12bba4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bba0) {
            ctx->pc = 0x12BBE4u;
            goto label_12bbe4;
        }
    }
    ctx->pc = 0x12BBA8u;
label_12bba8:
    // 0x12bba8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x12bba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_12bbac:
    // 0x12bbac: 0x0  nop
    ctx->pc = 0x12bbacu;
    // NOP
label_12bbb0:
    // 0x12bbb0: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x12bbb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bbb4:
    // 0x12bbb4: 0x0  nop
    ctx->pc = 0x12bbb4u;
    // NOP
label_12bbb8:
    // 0x12bbb8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_12bbbc:
    if (ctx->pc == 0x12BBBCu) {
        ctx->pc = 0x12BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBB8u;
        // 0x12bbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBC0u;
        goto label_12bbc0;
    }
    ctx->pc = 0x12BBB8u;
    {
        const bool branch_taken_0x12bbb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBB8u;
        // 0x12bbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbb8) {
            ctx->pc = 0x12BBE4u;
            goto label_12bbe4;
        }
    }
    ctx->pc = 0x12BBC0u;
label_12bbc0:
    // 0x12bbc0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x12bbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_12bbc4:
    // 0x12bbc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12bbc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12bbc8:
    // 0x12bbc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12bbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12bbcc:
    // 0x12bbcc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12bbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12bbd0:
    // 0x12bbd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12bbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12bbd4:
    // 0x12bbd4: 0xc04b85c  jal         func_12E170
label_12bbd8:
    if (ctx->pc == 0x12BBD8u) {
        ctx->pc = 0x12BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBD4u;
        // 0x12bbd8: 0x27a701b4  addiu       $a3, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBDCu;
        goto label_12bbdc;
    }
    ctx->pc = 0x12BBD4u;
    SET_GPR_U32(ctx, 31, 0x12BBDCu);
    ctx->pc = 0x12BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBD4u;
    // 0x12bbd8: 0x27a701b4  addiu       $a3, $sp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E170u, 0x12BBD4u, 0x12BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBDCu;
label_12bbdc:
    // 0x12bbdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12bbe0:
    // 0x12bbe0: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x12bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
label_12bbe4:
    // 0x12bbe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x12bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_12bbe8:
    // 0x12bbe8: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x12bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_12bbec:
    // 0x12bbec: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x12bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_12bbf0:
    // 0x12bbf0: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_12bbf4:
    if (ctx->pc == 0x12BBF4u) {
        ctx->pc = 0x12BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBF0u;
        // 0x12bbf4: 0x265e0320  addiu       $fp, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BBF8u;
        goto label_12bbf8;
    }
    ctx->pc = 0x12BBF0u;
    {
        const bool branch_taken_0x12bbf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBF0u;
        // 0x12bbf4: 0x265e0320  addiu       $fp, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbf0) {
            ctx->pc = 0x12BC5Cu;
            goto label_12bc5c;
        }
    }
    ctx->pc = 0x12BBF8u;
label_12bbf8:
    // 0x12bbf8: 0x92420463  lbu         $v0, 0x463($s2)
    ctx->pc = 0x12bbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1123)));
label_12bbfc:
    // 0x12bbfc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_12bc00:
    if (ctx->pc == 0x12BC00u) {
        ctx->pc = 0x12BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBFCu;
        // 0x12bc00: 0x92420462  lbu         $v0, 0x462($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1122)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC04u;
        goto label_12bc04;
    }
    ctx->pc = 0x12BBFCu;
    {
        const bool branch_taken_0x12bbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bbfc) {
            ctx->pc = 0x12BC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BBFCu;
            // 0x12bc00: 0x92420462  lbu         $v0, 0x462($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BC60u;
            goto label_12bc60;
        }
    }
    ctx->pc = 0x12BC04u;
label_12bc04:
    // 0x12bc04: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x12bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bc08:
    // 0x12bc08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12bc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bc0c:
    // 0x12bc0c: 0x0  nop
    ctx->pc = 0x12bc0cu;
    // NOP
label_12bc10:
    // 0x12bc10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12bc10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bc14:
    // 0x12bc14: 0x0  nop
    ctx->pc = 0x12bc14u;
    // NOP
label_12bc18:
    // 0x12bc18: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_12bc1c:
    if (ctx->pc == 0x12BC1Cu) {
        ctx->pc = 0x12BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC18u;
        // 0x12bc1c: 0x92420462  lbu         $v0, 0x462($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1122)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC20u;
        goto label_12bc20;
    }
    ctx->pc = 0x12BC18u;
    {
        const bool branch_taken_0x12bc18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12bc18) {
            ctx->pc = 0x12BC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC18u;
            // 0x12bc1c: 0x92420462  lbu         $v0, 0x462($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BC60u;
            goto label_12bc60;
        }
    }
    ctx->pc = 0x12BC20u;
label_12bc20:
    // 0x12bc20: 0x92420454  lbu         $v0, 0x454($s2)
    ctx->pc = 0x12bc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
label_12bc24:
    // 0x12bc24: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_12bc28:
    if (ctx->pc == 0x12BC28u) {
        ctx->pc = 0x12BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC24u;
        // 0x12bc28: 0x92420462  lbu         $v0, 0x462($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1122)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC2Cu;
        goto label_12bc2c;
    }
    ctx->pc = 0x12BC24u;
    {
        const bool branch_taken_0x12bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bc24) {
            ctx->pc = 0x12BC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC24u;
            // 0x12bc28: 0x92420462  lbu         $v0, 0x462($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BC60u;
            goto label_12bc60;
        }
    }
    ctx->pc = 0x12BC2Cu;
label_12bc2c:
    // 0x12bc2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12bc30:
    // 0x12bc30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12bc34:
    // 0x12bc34: 0xc0e4060  jal         func_390180
label_12bc38:
    if (ctx->pc == 0x12BC38u) {
        ctx->pc = 0x12BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC34u;
        // 0x12bc38: 0xafa501f0  sw          $a1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC3Cu;
        goto label_12bc3c;
    }
    ctx->pc = 0x12BC34u;
    SET_GPR_U32(ctx, 31, 0x12BC3Cu);
    ctx->pc = 0x12BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC34u;
    // 0x12bc38: 0xafa501f0  sw          $a1, 0x1F0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x12BC34u, 0x12BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC3Cu;
label_12bc3c:
    // 0x12bc3c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x12bc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_12bc40:
    // 0x12bc40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12bc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12bc44:
    // 0x12bc44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12bc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12bc48:
    // 0x12bc48: 0xc64d03fc  lwc1        $f13, 0x3FC($s2)
    ctx->pc = 0x12bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12bc4c:
    // 0x12bc4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12bc50:
    // 0x12bc50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12bc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12bc54:
    // 0x12bc54: 0xc04b85c  jal         func_12E170
label_12bc58:
    if (ctx->pc == 0x12BC58u) {
        ctx->pc = 0x12BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC54u;
        // 0x12bc58: 0x27a701b4  addiu       $a3, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC5Cu;
        goto label_12bc5c;
    }
    ctx->pc = 0x12BC54u;
    SET_GPR_U32(ctx, 31, 0x12BC5Cu);
    ctx->pc = 0x12BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC54u;
    // 0x12bc58: 0x27a701b4  addiu       $a3, $sp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E170u, 0x12BC54u, 0x12BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC5Cu;
label_12bc5c:
    // 0x12bc5c: 0x92420462  lbu         $v0, 0x462($s2)
    ctx->pc = 0x12bc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1122)));
label_12bc60:
    // 0x12bc60: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_12bc64:
    if (ctx->pc == 0x12BC64u) {
        ctx->pc = 0x12BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC60u;
        // 0x12bc64: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BC68u;
        goto label_12bc68;
    }
    ctx->pc = 0x12BC60u;
    {
        const bool branch_taken_0x12bc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc60) {
            ctx->pc = 0x12BC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC60u;
            // 0x12bc64: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BD08u;
            goto label_12bd08;
        }
    }
    ctx->pc = 0x12BC68u;
label_12bc68:
    // 0x12bc68: 0x7a420290  lq          $v0, 0x290($s2)
    ctx->pc = 0x12bc68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 656)));
label_12bc6c:
    // 0x12bc6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12bc6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12bc70:
    // 0x12bc70: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12bc70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bc74:
    // 0x12bc74: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12bc74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bc78:
    // 0x12bc78: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12bc78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bc7c:
    // 0x12bc7c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x12bc7cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_12bc80:
    // 0x12bc80: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12bc84:
    // 0x12bc84: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12bc84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12bc88:
    // 0x12bc88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12bc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12bc8c:
    // 0x12bc8c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12bc8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bc90:
    // 0x12bc90: 0x0  nop
    ctx->pc = 0x12bc90u;
    // NOP
label_12bc94:
    // 0x12bc94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12bc94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bc98:
    // 0x12bc98: 0x0  nop
    ctx->pc = 0x12bc98u;
    // NOP
label_12bc9c:
    // 0x12bc9c: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_12bca0:
    if (ctx->pc == 0x12BCA0u) {
        ctx->pc = 0x12BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC9Cu;
        // 0x12bca0: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCA4u;
        goto label_12bca4;
    }
    ctx->pc = 0x12BC9Cu;
    {
        const bool branch_taken_0x12bc9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12bc9c) {
            ctx->pc = 0x12BCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC9Cu;
            // 0x12bca0: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BD08u;
            goto label_12bd08;
        }
    }
    ctx->pc = 0x12BCA4u;
label_12bca4:
    // 0x12bca4: 0xc642032c  lwc1        $f2, 0x32C($s2)
    ctx->pc = 0x12bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12bca8:
    // 0x12bca8: 0xc6400300  lwc1        $f0, 0x300($s2)
    ctx->pc = 0x12bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bcac:
    // 0x12bcac: 0xc643043c  lwc1        $f3, 0x43C($s2)
    ctx->pc = 0x12bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12bcb0:
    // 0x12bcb0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12bcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12bcb4:
    // 0x12bcb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12bcb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12bcb8:
    // 0x12bcb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12bcb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12bcbc:
    // 0x12bcbc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x12bcbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bcc0:
    // 0x12bcc0: 0xe6430350  swc1        $f3, 0x350($s2)
    ctx->pc = 0x12bcc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 848), bits); }
label_12bcc4:
    // 0x12bcc4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_12bcc8:
    if (ctx->pc == 0x12BCC8u) {
        ctx->pc = 0x12BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCC4u;
        // 0x12bcc8: 0xe641040c  swc1        $f1, 0x40C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCCCu;
        goto label_12bccc;
    }
    ctx->pc = 0x12BCC4u;
    {
        const bool branch_taken_0x12bcc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCC4u;
        // 0x12bcc8: 0xe641040c  swc1        $f1, 0x40C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcc4) {
            ctx->pc = 0x12BD04u;
            goto label_12bd04;
        }
    }
    ctx->pc = 0x12BCCCu;
label_12bccc:
    // 0x12bccc: 0xc136dfa  jal         func_4DB7E8
label_12bcd0:
    if (ctx->pc == 0x12BCD0u) {
        ctx->pc = 0x12BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCCCu;
        // 0x12bcd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCD4u;
        goto label_12bcd4;
    }
    ctx->pc = 0x12BCCCu;
    SET_GPR_U32(ctx, 31, 0x12BCD4u);
    ctx->pc = 0x12BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCCCu;
    // 0x12bcd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x12BCCCu, 0x12BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCD4u;
label_12bcd4:
    // 0x12bcd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12bcd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_12bcd8:
    // 0x12bcd8: 0xc136dec  jal         func_4DB7B0
label_12bcdc:
    if (ctx->pc == 0x12BCDCu) {
        ctx->pc = 0x12BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCD8u;
        // 0x12bcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCE0u;
        goto label_12bce0;
    }
    ctx->pc = 0x12BCD8u;
    SET_GPR_U32(ctx, 31, 0x12BCE0u);
    ctx->pc = 0x12BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCD8u;
    // 0x12bcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x12BCD8u, 0x12BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCE0u;
label_12bce0:
    // 0x12bce0: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x12bce0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12bce4:
    // 0x12bce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12bce8:
    // 0x12bce8: 0xc04b5ea  jal         func_12D7A8
label_12bcec:
    if (ctx->pc == 0x12BCECu) {
        ctx->pc = 0x12BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCE8u;
        // 0x12bcec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCF0u;
        goto label_12bcf0;
    }
    ctx->pc = 0x12BCE8u;
    SET_GPR_U32(ctx, 31, 0x12BCF0u);
    ctx->pc = 0x12BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCE8u;
    // 0x12bcec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x12BCE8u, 0x12BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCF0u;
label_12bcf0:
    // 0x12bcf0: 0xc136df8  jal         func_4DB7E0
label_12bcf4:
    if (ctx->pc == 0x12BCF4u) {
        ctx->pc = 0x12BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCF0u;
        // 0x12bcf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BCF8u;
        goto label_12bcf8;
    }
    ctx->pc = 0x12BCF0u;
    SET_GPR_U32(ctx, 31, 0x12BCF8u);
    ctx->pc = 0x12BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCF0u;
    // 0x12bcf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x12BCF0u, 0x12BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCF8u;
label_12bcf8:
    // 0x12bcf8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x12bcf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_12bcfc:
    // 0x12bcfc: 0xc04953c  jal         func_1254F0
label_12bd00:
    if (ctx->pc == 0x12BD00u) {
        ctx->pc = 0x12BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCFCu;
        // 0x12bd00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD04u;
        goto label_12bd04;
    }
    ctx->pc = 0x12BCFCu;
    SET_GPR_U32(ctx, 31, 0x12BD04u);
    ctx->pc = 0x12BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCFCu;
    // 0x12bd00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12BCFCu, 0x12BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD04u;
label_12bd04:
    // 0x12bd04: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12bd04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12bd08:
    // 0x12bd08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12bd0c:
    // 0x12bd0c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_12bd10:
    if (ctx->pc == 0x12BD10u) {
        ctx->pc = 0x12BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD0Cu;
        // 0x12bd10: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD14u;
        goto label_12bd14;
    }
    ctx->pc = 0x12BD0Cu;
    {
        const bool branch_taken_0x12bd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD0Cu;
        // 0x12bd10: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd0c) {
            ctx->pc = 0x12BD8Cu;
            goto label_12bd8c;
        }
    }
    ctx->pc = 0x12BD14u;
label_12bd14:
    // 0x12bd14: 0xc048d40  jal         func_123500
label_12bd18:
    if (ctx->pc == 0x12BD18u) {
        ctx->pc = 0x12BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD14u;
        // 0x12bd18: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD1Cu;
        goto label_12bd1c;
    }
    ctx->pc = 0x12BD14u;
    SET_GPR_U32(ctx, 31, 0x12BD1Cu);
    ctx->pc = 0x12BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD14u;
    // 0x12bd18: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x12BD14u, 0x12BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD1Cu;
label_12bd1c:
    // 0x12bd1c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_12bd20:
    if (ctx->pc == 0x12BD20u) {
        ctx->pc = 0x12BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD1Cu;
        // 0x12bd20: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD24u;
        goto label_12bd24;
    }
    ctx->pc = 0x12BD1Cu;
    {
        const bool branch_taken_0x12bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD1Cu;
        // 0x12bd20: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd1c) {
            ctx->pc = 0x12BD8Cu;
            goto label_12bd8c;
        }
    }
    ctx->pc = 0x12BD24u;
label_12bd24:
    // 0x12bd24: 0xde420460  ld          $v0, 0x460($s2)
    ctx->pc = 0x12bd24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 1120)));
label_12bd28:
    // 0x12bd28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x12bd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12bd2c:
    // 0x12bd2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x12bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_12bd30:
    // 0x12bd30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12bd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_12bd34:
    // 0x12bd34: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_12bd38:
    if (ctx->pc == 0x12BD38u) {
        ctx->pc = 0x12BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD34u;
        // 0x12bd38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD3Cu;
        goto label_12bd3c;
    }
    ctx->pc = 0x12BD34u;
    {
        const bool branch_taken_0x12bd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD34u;
        // 0x12bd38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd34) {
            ctx->pc = 0x12BD90u;
            goto label_12bd90;
        }
    }
    ctx->pc = 0x12BD3Cu;
label_12bd3c:
    // 0x12bd3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x12bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_12bd40:
    // 0x12bd40: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x12bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_12bd44:
    // 0x12bd44: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x12bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_12bd48:
    // 0x12bd48: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_12bd4c:
    if (ctx->pc == 0x12BD4Cu) {
        ctx->pc = 0x12BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD48u;
        // 0x12bd4c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD50u;
        goto label_12bd50;
    }
    ctx->pc = 0x12BD48u;
    {
        const bool branch_taken_0x12bd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD48u;
        // 0x12bd4c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd48) {
            ctx->pc = 0x12BD90u;
            goto label_12bd90;
        }
    }
    ctx->pc = 0x12BD50u;
label_12bd50:
    // 0x12bd50: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x12bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bd54:
    // 0x12bd54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12bd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12bd58:
    // 0x12bd58: 0x0  nop
    ctx->pc = 0x12bd58u;
    // NOP
label_12bd5c:
    // 0x12bd5c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12bd5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bd60:
    // 0x12bd60: 0x0  nop
    ctx->pc = 0x12bd60u;
    // NOP
label_12bd64:
    // 0x12bd64: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_12bd68:
    if (ctx->pc == 0x12BD68u) {
        ctx->pc = 0x12BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD64u;
        // 0x12bd68: 0x8faa01a0  lw          $t2, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD6Cu;
        goto label_12bd6c;
    }
    ctx->pc = 0x12BD64u;
    {
        const bool branch_taken_0x12bd64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD64u;
        // 0x12bd68: 0x8faa01a0  lw          $t2, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd64) {
            ctx->pc = 0x12BD90u;
            goto label_12bd90;
        }
    }
    ctx->pc = 0x12BD6Cu;
label_12bd6c:
    // 0x12bd6c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x12bd6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12bd70:
    // 0x12bd70: 0x8fa701e4  lw          $a3, 0x1E4($sp)
    ctx->pc = 0x12bd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_12bd74:
    // 0x12bd74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12bd78:
    // 0x12bd78: 0x8fa901d4  lw          $t1, 0x1D4($sp)
    ctx->pc = 0x12bd78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_12bd7c:
    // 0x12bd7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12bd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12bd80:
    // 0x12bd80: 0xc04a71e  jal         func_129C78
label_12bd84:
    if (ctx->pc == 0x12BD84u) {
        ctx->pc = 0x12BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD80u;
        // 0x12bd84: 0x27a601b4  addiu       $a2, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD88u;
        goto label_12bd88;
    }
    ctx->pc = 0x12BD80u;
    SET_GPR_U32(ctx, 31, 0x12BD88u);
    ctx->pc = 0x12BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD80u;
    // 0x12bd84: 0x27a601b4  addiu       $a2, $sp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C78u, 0x12BD80u, 0x12BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD88u;
label_12bd88:
    // 0x12bd88: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12bd8c:
    // 0x12bd8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12bd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12bd90:
    // 0x12bd90: 0xc136afa  jal         func_4DABE8
label_12bd94:
    if (ctx->pc == 0x12BD94u) {
        ctx->pc = 0x12BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD90u;
        // 0x12bd94: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BD98u;
        goto label_12bd98;
    }
    ctx->pc = 0x12BD90u;
    SET_GPR_U32(ctx, 31, 0x12BD98u);
    ctx->pc = 0x12BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD90u;
    // 0x12bd94: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12BD90u, 0x12BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD98u;
label_12bd98:
    // 0x12bd98: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12bd98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12bd9c:
    // 0x12bd9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12bda0:
    // 0x12bda0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12bda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12bda4:
    // 0x12bda4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12bda4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bda8:
    // 0x12bda8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12bda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bdac:
    // 0x12bdac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12bdacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bdb0:
    // 0x12bdb0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12bdb0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_12bdb4:
    // 0x12bdb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x12bdb4u;
    // VWAITQ (Q already resolved in this runtime)
label_12bdb8:
    // 0x12bdb8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12bdb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bdbc:
    // 0x12bdbc: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x12bdbcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_12bdc0:
    // 0x12bdc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12bdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12bdc4:
    // 0x12bdc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12bdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12bdc8:
    // 0x12bdc8: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x12bdc8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12bdcc:
    // 0x12bdcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12bdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bdd0:
    // 0x12bdd0: 0x0  nop
    ctx->pc = 0x12bdd0u;
    // NOP
label_12bdd4:
    // 0x12bdd4: 0x0  nop
    ctx->pc = 0x12bdd4u;
    // NOP
label_12bdd8:
    // 0x12bdd8: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x12bdd8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_12bddc:
    // 0x12bddc: 0xc136b24  jal         func_4DAC90
label_12bde0:
    if (ctx->pc == 0x12BDE0u) {
        ctx->pc = 0x12BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDDCu;
        // 0x12bde0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BDE4u;
        goto label_12bde4;
    }
    ctx->pc = 0x12BDDCu;
    SET_GPR_U32(ctx, 31, 0x12BDE4u);
    ctx->pc = 0x12BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BDDCu;
    // 0x12bde0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12BDDCu, 0x12BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDE4u;
label_12bde4:
    // 0x12bde4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12bde8:
    // 0x12bde8: 0xc640032c  lwc1        $f0, 0x32C($s2)
    ctx->pc = 0x12bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bdec:
    // 0x12bdec: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x12bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_12bdf0:
    // 0x12bdf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12bdf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12bdf4:
    // 0x12bdf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12bdf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12bdf8:
    // 0x12bdf8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12bdf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bdfc:
    // 0x12bdfc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12bdfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12be00:
    // 0x12be00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12be00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12be04:
    // 0x12be04: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12be04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12be08:
    // 0x12be08: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x12be08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_12be0c:
    // 0x12be0c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x12be0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12be10:
    // 0x12be10: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x12be10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_12be14:
    // 0x12be14: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x12be14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_12be18:
    // 0x12be18: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_12be1c:
    if (ctx->pc == 0x12BE1Cu) {
        ctx->pc = 0x12BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE18u;
        // 0x12be1c: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE20u;
        goto label_12be20;
    }
    ctx->pc = 0x12BE18u;
    {
        const bool branch_taken_0x12be18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE18u;
        // 0x12be1c: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be18) {
            ctx->pc = 0x12BE34u;
            goto label_12be34;
        }
    }
    ctx->pc = 0x12BE20u;
label_12be20:
    // 0x12be20: 0xc6400330  lwc1        $f0, 0x330($s2)
    ctx->pc = 0x12be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12be24:
    // 0x12be24: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12be24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12be28:
    // 0x12be28: 0x0  nop
    ctx->pc = 0x12be28u;
    // NOP
label_12be2c:
    // 0x12be2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12be30:
    if (ctx->pc == 0x12BE30u) {
        ctx->pc = 0x12BE34u;
        goto label_12be34;
    }
    ctx->pc = 0x12BE2Cu;
    {
        const bool branch_taken_0x12be2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12be2c) {
            ctx->pc = 0x12BE38u;
            goto label_12be38;
        }
    }
    ctx->pc = 0x12BE34u;
label_12be34:
    // 0x12be34: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x12be34u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12be38:
    // 0x12be38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12be38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12be3c:
    // 0x12be3c: 0x0  nop
    ctx->pc = 0x12be3cu;
    // NOP
label_12be40:
    // 0x12be40: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x12be40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12be44:
    // 0x12be44: 0x0  nop
    ctx->pc = 0x12be44u;
    // NOP
label_12be48:
    // 0x12be48: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_12be4c:
    if (ctx->pc == 0x12BE4Cu) {
        ctx->pc = 0x12BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE48u;
        // 0x12be4c: 0x92420453  lbu         $v0, 0x453($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE50u;
        goto label_12be50;
    }
    ctx->pc = 0x12BE48u;
    {
        const bool branch_taken_0x12be48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12be48) {
            ctx->pc = 0x12BE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BE48u;
            // 0x12be4c: 0x92420453  lbu         $v0, 0x453($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BE78u;
            goto label_12be78;
        }
    }
    ctx->pc = 0x12BE50u;
label_12be50:
    // 0x12be50: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x12be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12be54:
    // 0x12be54: 0xc136b24  jal         func_4DAC90
label_12be58:
    if (ctx->pc == 0x12BE58u) {
        ctx->pc = 0x12BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE54u;
        // 0x12be58: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE5Cu;
        goto label_12be5c;
    }
    ctx->pc = 0x12BE54u;
    SET_GPR_U32(ctx, 31, 0x12BE5Cu);
    ctx->pc = 0x12BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE54u;
    // 0x12be58: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12BE54u, 0x12BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE5Cu;
label_12be5c:
    // 0x12be5c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x12be5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_12be60:
    // 0x12be60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12be60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12be64:
    // 0x12be64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12be64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12be68:
    // 0x12be68: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12be6c:
    // 0x12be6c: 0xc136b18  jal         func_4DAC60
label_12be70:
    if (ctx->pc == 0x12BE70u) {
        ctx->pc = 0x12BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE6Cu;
        // 0x12be70: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE74u;
        goto label_12be74;
    }
    ctx->pc = 0x12BE6Cu;
    SET_GPR_U32(ctx, 31, 0x12BE74u);
    ctx->pc = 0x12BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE6Cu;
    // 0x12be70: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12BE6Cu, 0x12BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE74u;
label_12be74:
    // 0x12be74: 0x92420453  lbu         $v0, 0x453($s2)
    ctx->pc = 0x12be74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
label_12be78:
    // 0x12be78: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_12be7c:
    if (ctx->pc == 0x12BE7Cu) {
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x27b100f0  addiu       $s1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE80u;
        goto label_12be80;
    }
    ctx->pc = 0x12BE78u;
    {
        const bool branch_taken_0x12be78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x27b100f0  addiu       $s1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be78) {
            ctx->pc = 0x12BEB4u;
            goto label_12beb4;
        }
    }
    ctx->pc = 0x12BE80u;
label_12be80:
    // 0x12be80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12be80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12be84:
    // 0x12be84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12be88:
    // 0x12be88: 0xc04b642  jal         func_12D908
label_12be8c:
    if (ctx->pc == 0x12BE8Cu) {
        ctx->pc = 0x12BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE88u;
        // 0x12be8c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BE90u;
        goto label_12be90;
    }
    ctx->pc = 0x12BE88u;
    SET_GPR_U32(ctx, 31, 0x12BE90u);
    ctx->pc = 0x12BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE88u;
    // 0x12be8c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D908u, 0x12BE88u, 0x12BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE90u;
label_12be90:
    // 0x12be90: 0xc64c03b4  lwc1        $f12, 0x3B4($s2)
    ctx->pc = 0x12be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12be94:
    // 0x12be94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x12be94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12be98:
    // 0x12be98: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x12be98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_12be9c:
    // 0x12be9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12be9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12bea0:
    // 0x12bea0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x12bea0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_12bea4:
    // 0x12bea4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12bea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12bea8:
    // 0x12bea8: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x12bea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_12beac:
    // 0x12beac: 0xc04b53a  jal         func_12D4E8
label_12beb0:
    if (ctx->pc == 0x12BEB0u) {
        ctx->pc = 0x12BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEACu;
        // 0x12beb0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEB4u;
        goto label_12beb4;
    }
    ctx->pc = 0x12BEACu;
    SET_GPR_U32(ctx, 31, 0x12BEB4u);
    ctx->pc = 0x12BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BEACu;
    // 0x12beb0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x12BEACu, 0x12BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BEB4u;
label_12beb4:
    // 0x12beb4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x12beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12beb8:
    // 0x12beb8: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x12beb8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_12bebc:
    // 0x12bebc: 0xc6410188  lwc1        $f1, 0x188($s2)
    ctx->pc = 0x12bebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bec0:
    // 0x12bec0: 0x92420453  lbu         $v0, 0x453($s2)
    ctx->pc = 0x12bec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
label_12bec4:
    // 0x12bec4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12bec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12bec8:
    // 0x12bec8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_12becc:
    if (ctx->pc == 0x12BECCu) {
        ctx->pc = 0x12BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEC8u;
        // 0x12becc: 0xe6400328  swc1        $f0, 0x328($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 808), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BED0u;
        goto label_12bed0;
    }
    ctx->pc = 0x12BEC8u;
    {
        const bool branch_taken_0x12bec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEC8u;
        // 0x12becc: 0xe6400328  swc1        $f0, 0x328($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 808), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bec8) {
            ctx->pc = 0x12BEE0u;
            goto label_12bee0;
        }
    }
    ctx->pc = 0x12BED0u;
label_12bed0:
    // 0x12bed0: 0xe6410378  swc1        $f1, 0x378($s2)
    ctx->pc = 0x12bed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
label_12bed4:
    // 0x12bed4: 0xe6400324  swc1        $f0, 0x324($s2)
    ctx->pc = 0x12bed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 804), bits); }
label_12bed8:
    // 0x12bed8: 0x1000000e  b           . + 4 + (0xE << 2)
label_12bedc:
    if (ctx->pc == 0x12BEDCu) {
        ctx->pc = 0x12BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BED8u;
        // 0x12bedc: 0xe640037c  swc1        $f0, 0x37C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEE0u;
        goto label_12bee0;
    }
    ctx->pc = 0x12BED8u;
    {
        const bool branch_taken_0x12bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BED8u;
        // 0x12bedc: 0xe640037c  swc1        $f0, 0x37C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bed8) {
            ctx->pc = 0x12BF14u;
            goto label_12bf14;
        }
    }
    ctx->pc = 0x12BEE0u;
label_12bee0:
    // 0x12bee0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12bee4:
    // 0x12bee4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12bee8:
    // 0x12bee8: 0xc136afa  jal         func_4DABE8
label_12beec:
    if (ctx->pc == 0x12BEECu) {
        ctx->pc = 0x12BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEE8u;
        // 0x12beec: 0x26460230  addiu       $a2, $s2, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BEF0u;
        goto label_12bef0;
    }
    ctx->pc = 0x12BEE8u;
    SET_GPR_U32(ctx, 31, 0x12BEF0u);
    ctx->pc = 0x12BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BEE8u;
    // 0x12beec: 0x26460230  addiu       $a2, $s2, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12BEE8u, 0x12BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BEF0u;
label_12bef0:
    // 0x12bef0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12bef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12bef4:
    // 0x12bef4: 0x7a430220  lq          $v1, 0x220($s2)
    ctx->pc = 0x12bef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 544)));
label_12bef8:
    // 0x12bef8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12bef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12befc:
    // 0x12befc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12befcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12bf00:
    // 0x12bf00: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12bf00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bf04:
    // 0x12bf04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12bf04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12bf08:
    // 0x12bf08: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12bf08u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12bf0c:
    // 0x12bf0c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x12bf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_12bf10:
    // 0x12bf10: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x12bf10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_12bf14:
    // 0x12bf14: 0xc6410378  lwc1        $f1, 0x378($s2)
    ctx->pc = 0x12bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bf18:
    // 0x12bf18: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12bf1c:
    // 0x12bf1c: 0xc6400208  lwc1        $f0, 0x208($s2)
    ctx->pc = 0x12bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bf20:
    // 0x12bf20: 0x9243045b  lbu         $v1, 0x45B($s2)
    ctx->pc = 0x12bf20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1115)));
label_12bf24:
    // 0x12bf24: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x12bf24u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12bf28:
    // 0x12bf28: 0x24448ad0  addiu       $a0, $v0, -0x7530
    ctx->pc = 0x12bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
label_12bf2c:
    // 0x12bf2c: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x12bf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_12bf30:
    // 0x12bf30: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x12bf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_12bf34:
    // 0x12bf34: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x12bf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12bf38:
    // 0x12bf38: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x12bf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12bf3c:
    // 0x12bf3c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_12bf40:
    if (ctx->pc == 0x12BF40u) {
        ctx->pc = 0x12BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF3Cu;
        // 0x12bf40: 0x4617ad00  add.s       $f20, $f21, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF44u;
        goto label_12bf44;
    }
    ctx->pc = 0x12BF3Cu;
    {
        const bool branch_taken_0x12bf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF3Cu;
        // 0x12bf40: 0x4617ad00  add.s       $f20, $f21, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf3c) {
            ctx->pc = 0x12BFF0u;
            goto label_12bff0;
        }
    }
    ctx->pc = 0x12BF44u;
label_12bf44:
    // 0x12bf44: 0xc6400268  lwc1        $f0, 0x268($s2)
    ctx->pc = 0x12bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12bf48:
    // 0x12bf48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12bf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12bf4c:
    // 0x12bf4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12bf4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12bf50:
    // 0x12bf50: 0x0  nop
    ctx->pc = 0x12bf50u;
    // NOP
label_12bf54:
    // 0x12bf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12bf58:
    // 0x12bf58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12bf58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12bf5c:
    // 0x12bf5c: 0x0  nop
    ctx->pc = 0x12bf5cu;
    // NOP
label_12bf60:
    // 0x12bf60: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_12bf64:
    if (ctx->pc == 0x12BF64u) {
        ctx->pc = 0x12BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF60u;
        // 0x12bf64: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF68u;
        goto label_12bf68;
    }
    ctx->pc = 0x12BF60u;
    {
        const bool branch_taken_0x12bf60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF60u;
        // 0x12bf64: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf60) {
            ctx->pc = 0x12BFF0u;
            goto label_12bff0;
        }
    }
    ctx->pc = 0x12BF68u;
label_12bf68:
    // 0x12bf68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12bf6c:
    // 0x12bf6c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12bf70:
    // 0x12bf70: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_12bf74:
    // 0x12bf74: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x12bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_12bf78:
    // 0x12bf78: 0x40f809  jalr        $v0
label_12bf7c:
    if (ctx->pc == 0x12BF7Cu) {
        ctx->pc = 0x12BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF78u;
        // 0x12bf7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BF80u;
        goto label_12bf80;
    }
    ctx->pc = 0x12BF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BF80u);
        ctx->pc = 0x12BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF78u;
        // 0x12bf7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BF78u, 0x12BF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12BF80u;
label_12bf80:
    // 0x12bf80: 0xc6410208  lwc1        $f1, 0x208($s2)
    ctx->pc = 0x12bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12bf84:
    // 0x12bf84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12bf88:
    // 0x12bf88: 0xc6430378  lwc1        $f3, 0x378($s2)
    ctx->pc = 0x12bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12bf8c:
    // 0x12bf8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12bf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12bf90:
    // 0x12bf90: 0x4601b841  sub.s       $f1, $f23, $f1
    ctx->pc = 0x12bf90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_12bf94:
    // 0x12bf94: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x12bf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_12bf98:
    // 0x12bf98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12bf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12bf9c:
    // 0x12bf9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12bfa0:
    // 0x12bfa0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12bfa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_12bfa4:
    // 0x12bfa4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12bfa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_12bfa8:
    // 0x12bfa8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12bfa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12bfac:
    // 0x12bfac: 0xc0cdb6a  jal         func_336DA8
label_12bfb0:
    if (ctx->pc == 0x12BFB0u) {
        ctx->pc = 0x12BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFACu;
        // 0x12bfb0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BFB4u;
        goto label_12bfb4;
    }
    ctx->pc = 0x12BFACu;
    SET_GPR_U32(ctx, 31, 0x12BFB4u);
    ctx->pc = 0x12BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFACu;
    // 0x12bfb0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12BFACu, 0x12BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFB4u;
label_12bfb4:
    // 0x12bfb4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12bfb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12bfb8:
    // 0x12bfb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12bfbc:
    // 0x12bfbc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12bfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12bfc0:
    // 0x12bfc0: 0xc0cdb5a  jal         func_336D68
label_12bfc4:
    if (ctx->pc == 0x12BFC4u) {
        ctx->pc = 0x12BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFC0u;
        // 0x12bfc4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BFC8u;
        goto label_12bfc8;
    }
    ctx->pc = 0x12BFC0u;
    SET_GPR_U32(ctx, 31, 0x12BFC8u);
    ctx->pc = 0x12BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFC0u;
    // 0x12bfc4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D68u, 0x12BFC0u, 0x12BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFC8u;
label_12bfc8:
    // 0x12bfc8: 0x8fa401cc  lw          $a0, 0x1CC($sp)
    ctx->pc = 0x12bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_12bfcc:
    // 0x12bfcc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12bfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12bfd0:
    // 0x12bfd0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12bfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12bfd4:
    // 0x12bfd4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12bfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12bfd8:
    // 0x12bfd8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x12bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_12bfdc:
    // 0x12bfdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12bfdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bfe0:
    // 0x12bfe0: 0xc0d4336  jal         func_350CD8
label_12bfe4:
    if (ctx->pc == 0x12BFE4u) {
        ctx->pc = 0x12BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFE0u;
        // 0x12bfe4: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BFE8u;
        goto label_12bfe8;
    }
    ctx->pc = 0x12BFE0u;
    SET_GPR_U32(ctx, 31, 0x12BFE8u);
    ctx->pc = 0x12BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFE0u;
    // 0x12bfe4: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12BFE0u, 0x12BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFE8u;
label_12bfe8:
    // 0x12bfe8: 0x10000003  b           . + 4 + (0x3 << 2)
label_12bfec:
    if (ctx->pc == 0x12BFECu) {
        ctx->pc = 0x12BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFE8u;
        // 0x12bfec: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BFF0u;
        goto label_12bff0;
    }
    ctx->pc = 0x12BFE8u;
    {
        const bool branch_taken_0x12bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFE8u;
        // 0x12bfec: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfe8) {
            ctx->pc = 0x12BFF8u;
            goto label_12bff8;
        }
    }
    ctx->pc = 0x12BFF0u;
label_12bff0:
    // 0x12bff0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x12bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_12bff4:
    // 0x12bff4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x12bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_12bff8:
    // 0x12bff8: 0x92420460  lbu         $v0, 0x460($s2)
    ctx->pc = 0x12bff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1120)));
label_12bffc:
    // 0x12bffc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_12c000:
    if (ctx->pc == 0x12C000u) {
        ctx->pc = 0x12C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFFCu;
        // 0x12c000: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C004u;
        goto label_12c004;
    }
    ctx->pc = 0x12BFFCu;
    {
        const bool branch_taken_0x12bffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFFCu;
        // 0x12c000: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bffc) {
            ctx->pc = 0x12C048u;
            goto label_12c048;
        }
    }
    ctx->pc = 0x12C004u;
label_12c004:
    // 0x12c004: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x12c004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_12c008:
    // 0x12c008: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_12c00c:
    if (ctx->pc == 0x12C00Cu) {
        ctx->pc = 0x12C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C008u;
        // 0x12c00c: 0x92420453  lbu         $v0, 0x453($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C010u;
        goto label_12c010;
    }
    ctx->pc = 0x12C008u;
    {
        const bool branch_taken_0x12c008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c008) {
            ctx->pc = 0x12C00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C008u;
            // 0x12c00c: 0x92420453  lbu         $v0, 0x453($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12C010u;
label_12c010:
    // 0x12c010: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x12c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_12c014:
    // 0x12c014: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_12c018:
    if (ctx->pc == 0x12C018u) {
        ctx->pc = 0x12C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C014u;
        // 0x12c018: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C01Cu;
        goto label_12c01c;
    }
    ctx->pc = 0x12C014u;
    {
        const bool branch_taken_0x12c014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C014u;
        // 0x12c018: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c014) {
            ctx->pc = 0x12C048u;
            goto label_12c048;
        }
    }
    ctx->pc = 0x12C01Cu;
label_12c01c:
    // 0x12c01c: 0x92420453  lbu         $v0, 0x453($s2)
    ctx->pc = 0x12c01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
label_12c020:
    // 0x12c020: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_12c024:
    if (ctx->pc == 0x12C024u) {
        ctx->pc = 0x12C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C020u;
        // 0x12c024: 0x8fa501cc  lw          $a1, 0x1CC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C028u;
        goto label_12c028;
    }
    ctx->pc = 0x12C020u;
    {
        const bool branch_taken_0x12c020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C020u;
        // 0x12c024: 0x8fa501cc  lw          $a1, 0x1CC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c020) {
            ctx->pc = 0x12C05Cu;
            goto label_12c05c;
        }
    }
    ctx->pc = 0x12C028u;
label_12c028:
    // 0x12c028: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12c028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12c02c:
    // 0x12c02c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12c02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12c030:
    // 0x12c030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c034:
    // 0x12c034: 0x0  nop
    ctx->pc = 0x12c034u;
    // NOP
label_12c038:
    // 0x12c038: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x12c038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c03c:
    // 0x12c03c: 0x0  nop
    ctx->pc = 0x12c03cu;
    // NOP
label_12c040:
    // 0x12c040: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_12c044:
    if (ctx->pc == 0x12C044u) {
        ctx->pc = 0x12C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C040u;
        // 0x12c044: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C048u;
        goto label_12c048;
    }
    ctx->pc = 0x12C040u;
    {
        const bool branch_taken_0x12c040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C040u;
        // 0x12c044: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c040) {
            ctx->pc = 0x12C05Cu;
            goto label_12c05c;
        }
    }
    ctx->pc = 0x12C048u;
label_12c048:
    // 0x12c048: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x12c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_12c04c:
    // 0x12c04c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12c04cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12c050:
    // 0x12c050: 0xa2400453  sb          $zero, 0x453($s2)
    ctx->pc = 0x12c050u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1107), (uint8_t)GPR_U32(ctx, 0));
label_12c054:
    // 0x12c054: 0x10000009  b           . + 4 + (0x9 << 2)
label_12c058:
    if (ctx->pc == 0x12C058u) {
        ctx->pc = 0x12C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C054u;
        // 0x12c058: 0x7e430220  sq          $v1, 0x220($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C05Cu;
        goto label_12c05c;
    }
    ctx->pc = 0x12C054u;
    {
        const bool branch_taken_0x12c054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C054u;
        // 0x12c058: 0x7e430220  sq          $v1, 0x220($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c054) {
            ctx->pc = 0x12C07Cu;
            goto label_12c07c;
        }
    }
    ctx->pc = 0x12C05Cu;
label_12c05c:
    // 0x12c05c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12c05cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_12c060:
    // 0x12c060: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x12c060u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_12c064:
    // 0x12c064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c068:
    // 0x12c068: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12c068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12c06c:
    // 0x12c06c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x12c06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12c070:
    // 0x12c070: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x12c070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12c074:
    // 0x12c074: 0xc04a9f6  jal         func_12A7D8
label_12c078:
    if (ctx->pc == 0x12C078u) {
        ctx->pc = 0x12C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C074u;
        // 0x12c078: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C07Cu;
        goto label_12c07c;
    }
    ctx->pc = 0x12C074u;
    SET_GPR_U32(ctx, 31, 0x12C07Cu);
    ctx->pc = 0x12C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C074u;
    // 0x12c078: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7D8u, 0x12C074u, 0x12C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C07Cu;
label_12c07c:
    // 0x12c07c: 0x92420453  lbu         $v0, 0x453($s2)
    ctx->pc = 0x12c07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
label_12c080:
    // 0x12c080: 0xc6440378  lwc1        $f4, 0x378($s2)
    ctx->pc = 0x12c080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12c084:
    // 0x12c084: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_12c088:
    if (ctx->pc == 0x12C088u) {
        ctx->pc = 0x12C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C084u;
        // 0x12c088: 0xc6430324  lwc1        $f3, 0x324($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C08Cu;
        goto label_12c08c;
    }
    ctx->pc = 0x12C084u;
    {
        const bool branch_taken_0x12c084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C084u;
        // 0x12c088: 0xc6430324  lwc1        $f3, 0x324($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c084) {
            ctx->pc = 0x12C138u;
            goto label_12c138;
        }
    }
    ctx->pc = 0x12C08Cu;
label_12c08c:
    // 0x12c08c: 0x264201e0  addiu       $v0, $s2, 0x1E0
    ctx->pc = 0x12c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_12c090:
    // 0x12c090: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x12c090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_12c094:
    // 0x12c094: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c098:
    // 0x12c098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12c098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c09c:
    // 0x12c09c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12c09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12c0a0:
    // 0x12c0a0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12c0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12c0a4:
    // 0x12c0a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12c0a8:
    // 0x12c0a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12c0a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12c0ac:
    // 0x12c0ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12c0acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12c0b0:
    // 0x12c0b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12c0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c0b4:
    // 0x12c0b4: 0x0  nop
    ctx->pc = 0x12c0b4u;
    // NOP
label_12c0b8:
    // 0x12c0b8: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
label_12c0bc:
    if (ctx->pc == 0x12C0BCu) {
        ctx->pc = 0x12C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0B8u;
        // 0x12c0bc: 0x46032040  add.s       $f1, $f4, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C0C0u;
        goto label_12c0c0;
    }
    ctx->pc = 0x12C0B8u;
    {
        const bool branch_taken_0x12c0b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c0b8) {
            ctx->pc = 0x12C0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C0B8u;
            // 0x12c0bc: 0x46032040  add.s       $f1, $f4, $f3 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C13Cu;
            goto label_12c13c;
        }
    }
    ctx->pc = 0x12C0C0u;
label_12c0c0:
    // 0x12c0c0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12c0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_12c0c4:
    // 0x12c0c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12c0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12c0c8:
    // 0x12c0c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12c0cc:
    // 0x12c0cc: 0xc049562  jal         func_125588
label_12c0d0:
    if (ctx->pc == 0x12C0D0u) {
        ctx->pc = 0x12C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0CCu;
        // 0x12c0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C0D4u;
        goto label_12c0d4;
    }
    ctx->pc = 0x12C0CCu;
    SET_GPR_U32(ctx, 31, 0x12C0D4u);
    ctx->pc = 0x12C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0CCu;
    // 0x12c0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125588u, 0x12C0CCu, 0x12C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0D4u;
label_12c0d4:
    // 0x12c0d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c0d8:
    // 0x12c0d8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_12c0dc:
    if (ctx->pc == 0x12C0DCu) {
        ctx->pc = 0x12C0E0u;
        goto label_12c0e0;
    }
    ctx->pc = 0x12C0D8u;
    {
        const bool branch_taken_0x12c0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c0d8) {
            ctx->pc = 0x12C0F4u;
            goto label_12c0f4;
        }
    }
    ctx->pc = 0x12C0E0u;
label_12c0e0:
    // 0x12c0e0: 0x3c013ecf  lui         $at, 0x3ECF
    ctx->pc = 0x12c0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16079 << 16));
label_12c0e4:
    // 0x12c0e4: 0x34215c2a  ori         $at, $at, 0x5C2A
    ctx->pc = 0x12c0e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23594);
label_12c0e8:
    // 0x12c0e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12c0ec:
    // 0x12c0ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_12c0f0:
    if (ctx->pc == 0x12C0F0u) {
        ctx->pc = 0x12C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0ECu;
        // 0x12c0f0: 0xc6400378  lwc1        $f0, 0x378($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C0F4u;
        goto label_12c0f4;
    }
    ctx->pc = 0x12C0ECu;
    {
        const bool branch_taken_0x12c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0ECu;
        // 0x12c0f0: 0xc6400378  lwc1        $f0, 0x378($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0ec) {
            ctx->pc = 0x12C114u;
            goto label_12c114;
        }
    }
    ctx->pc = 0x12C0F4u;
label_12c0f4:
    // 0x12c0f4: 0xc049562  jal         func_125588
label_12c0f8:
    if (ctx->pc == 0x12C0F8u) {
        ctx->pc = 0x12C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0F4u;
        // 0x12c0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C0FCu;
        goto label_12c0fc;
    }
    ctx->pc = 0x12C0F4u;
    SET_GPR_U32(ctx, 31, 0x12C0FCu);
    ctx->pc = 0x12C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0F4u;
    // 0x12c0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125588u, 0x12C0F4u, 0x12C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0FCu;
label_12c0fc:
    // 0x12c0fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12c100:
    // 0x12c100: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_12c104:
    if (ctx->pc == 0x12C104u) {
        ctx->pc = 0x12C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C100u;
        // 0x12c104: 0xc6400378  lwc1        $f0, 0x378($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C108u;
        goto label_12c108;
    }
    ctx->pc = 0x12C100u;
    {
        const bool branch_taken_0x12c100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C100u;
        // 0x12c104: 0xc6400378  lwc1        $f0, 0x378($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c100) {
            ctx->pc = 0x12C114u;
            goto label_12c114;
        }
    }
    ctx->pc = 0x12C108u;
label_12c108:
    // 0x12c108: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x12c108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
label_12c10c:
    // 0x12c10c: 0x3421c290  ori         $at, $at, 0xC290
    ctx->pc = 0x12c10cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49808);
label_12c110:
    // 0x12c110: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12c114:
    // 0x12c114: 0xc6420324  lwc1        $f2, 0x324($s2)
    ctx->pc = 0x12c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c118:
    // 0x12c118: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x12c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c11c:
    // 0x12c11c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12c11cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12c120:
    // 0x12c120: 0xc6430398  lwc1        $f3, 0x398($s2)
    ctx->pc = 0x12c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12c124:
    // 0x12c124: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12c124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12c128:
    // 0x12c128: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x12c128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_12c12c:
    // 0x12c12c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12c12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12c130:
    // 0x12c130: 0x10000006  b           . + 4 + (0x6 << 2)
label_12c134:
    if (ctx->pc == 0x12C134u) {
        ctx->pc = 0x12C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C130u;
        // 0x12c134: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C138u;
        goto label_12c138;
    }
    ctx->pc = 0x12C130u;
    {
        const bool branch_taken_0x12c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C130u;
        // 0x12c134: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c130) {
            ctx->pc = 0x12C14Cu;
            goto label_12c14c;
        }
    }
    ctx->pc = 0x12C138u;
label_12c138:
    // 0x12c138: 0x46032040  add.s       $f1, $f4, $f3
    ctx->pc = 0x12c138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_12c13c:
    // 0x12c13c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12c140:
    // 0x12c140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c144:
    // 0x12c144: 0x0  nop
    ctx->pc = 0x12c144u;
    // NOP
label_12c148:
    // 0x12c148: 0xe6400398  swc1        $f0, 0x398($s2)
    ctx->pc = 0x12c148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 920), bits); }
label_12c14c:
    // 0x12c14c: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x12c14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_12c150:
    // 0x12c150: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x12c150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_12c154:
    // 0x12c154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c158:
    // 0x12c158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c15c:
    // 0x12c15c: 0x96420444  lhu         $v0, 0x444($s2)
    ctx->pc = 0x12c15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12c160:
    // 0x12c160: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_12c164:
    if (ctx->pc == 0x12C164u) {
        ctx->pc = 0x12C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C160u;
        // 0x12c164: 0xe7a001bc  swc1        $f0, 0x1BC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C168u;
        goto label_12c168;
    }
    ctx->pc = 0x12C160u;
    {
        const bool branch_taken_0x12c160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C160u;
        // 0x12c164: 0xe7a001bc  swc1        $f0, 0x1BC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c160) {
            ctx->pc = 0x12C1A0u;
            goto label_12c1a0;
        }
    }
    ctx->pc = 0x12C168u;
label_12c168:
    // 0x12c168: 0x8e430314  lw          $v1, 0x314($s2)
    ctx->pc = 0x12c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12c16c:
    // 0x12c16c: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x12c16cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_12c170:
    // 0x12c170: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12c170u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12c174:
    // 0x12c174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_12c178:
    if (ctx->pc == 0x12C178u) {
        ctx->pc = 0x12C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C174u;
        // 0x12c178: 0x8fa501d8  lw          $a1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C17Cu;
        goto label_12c17c;
    }
    ctx->pc = 0x12C174u;
    {
        const bool branch_taken_0x12c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C174u;
        // 0x12c178: 0x8fa501d8  lw          $a1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c174) {
            ctx->pc = 0x12C1A4u;
            goto label_12c1a4;
        }
    }
    ctx->pc = 0x12C17Cu;
label_12c17c:
    // 0x12c17c: 0x92420454  lbu         $v0, 0x454($s2)
    ctx->pc = 0x12c17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
label_12c180:
    // 0x12c180: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12c184:
    if (ctx->pc == 0x12C184u) {
        ctx->pc = 0x12C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C180u;
        // 0x12c184: 0x8fa601d8  lw          $a2, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C188u;
        goto label_12c188;
    }
    ctx->pc = 0x12C180u;
    {
        const bool branch_taken_0x12c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C180u;
        // 0x12c184: 0x8fa601d8  lw          $a2, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c180) {
            ctx->pc = 0x12C1A4u;
            goto label_12c1a4;
        }
    }
    ctx->pc = 0x12C188u;
label_12c188:
    // 0x12c188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c18c:
    // 0x12c18c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c190:
    // 0x12c190: 0xc04a19e  jal         func_128678
label_12c194:
    if (ctx->pc == 0x12C194u) {
        ctx->pc = 0x12C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C190u;
        // 0x12c194: 0x27a701bc  addiu       $a3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C198u;
        goto label_12c198;
    }
    ctx->pc = 0x12C190u;
    SET_GPR_U32(ctx, 31, 0x12C198u);
    ctx->pc = 0x12C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C190u;
    // 0x12c194: 0x27a701bc  addiu       $a3, $sp, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128678u, 0x12C190u, 0x12C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C198u;
label_12c198:
    // 0x12c198: 0x10000028  b           . + 4 + (0x28 << 2)
label_12c19c:
    if (ctx->pc == 0x12C19Cu) {
        ctx->pc = 0x12C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C198u;
        // 0x12c19c: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C1A0u;
        goto label_12c1a0;
    }
    ctx->pc = 0x12C198u;
    {
        const bool branch_taken_0x12c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C198u;
        // 0x12c19c: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c198) {
            ctx->pc = 0x12C23Cu;
            goto label_12c23c;
        }
    }
    ctx->pc = 0x12C1A0u;
label_12c1a0:
    // 0x12c1a0: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x12c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_12c1a4:
    // 0x12c1a4: 0x50a00025  beql        $a1, $zero, . + 4 + (0x25 << 2)
label_12c1a8:
    if (ctx->pc == 0x12C1A8u) {
        ctx->pc = 0x12C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1A4u;
        // 0x12c1a8: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C1ACu;
        goto label_12c1ac;
    }
    ctx->pc = 0x12C1A4u;
    {
        const bool branch_taken_0x12c1a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c1a4) {
            ctx->pc = 0x12C1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C1A4u;
            // 0x12c1a8: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C23Cu;
            goto label_12c23c;
        }
    }
    ctx->pc = 0x12C1ACu;
label_12c1ac:
    // 0x12c1ac: 0xc6410208  lwc1        $f1, 0x208($s2)
    ctx->pc = 0x12c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c1b0:
    // 0x12c1b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12c1b4:
    // 0x12c1b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12c1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12c1b8:
    // 0x12c1b8: 0xc6420304  lwc1        $f2, 0x304($s2)
    ctx->pc = 0x12c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c1bc:
    // 0x12c1bc: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x12c1bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_12c1c0:
    // 0x12c1c0: 0xc64003cc  lwc1        $f0, 0x3CC($s2)
    ctx->pc = 0x12c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c1c4:
    // 0x12c1c4: 0x0  nop
    ctx->pc = 0x12c1c4u;
    // NOP
label_12c1c8:
    // 0x12c1c8: 0x0  nop
    ctx->pc = 0x12c1c8u;
    // NOP
label_12c1cc:
    // 0x12c1cc: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x12c1ccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
label_12c1d0:
    // 0x12c1d0: 0xc12e34c  jal         func_4B8D30
label_12c1d4:
    if (ctx->pc == 0x12C1D4u) {
        ctx->pc = 0x12C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1D0u;
        // 0x12c1d4: 0xe640034c  swc1        $f0, 0x34C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 844), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C1D8u;
        goto label_12c1d8;
    }
    ctx->pc = 0x12C1D0u;
    SET_GPR_U32(ctx, 31, 0x12C1D8u);
    ctx->pc = 0x12C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1D0u;
    // 0x12c1d4: 0xe640034c  swc1        $f0, 0x34C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 844), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x12C1D0u, 0x12C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1D8u;
label_12c1d8:
    // 0x12c1d8: 0xc642034c  lwc1        $f2, 0x34C($s2)
    ctx->pc = 0x12c1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c1dc:
    // 0x12c1dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c1e0:
    // 0x12c1e0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x12c1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_12c1e4:
    // 0x12c1e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12c1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12c1e8:
    // 0x12c1e8: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x12c1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
label_12c1ec:
    // 0x12c1ec: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x12c1ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_12c1f0:
    // 0x12c1f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12c1f4:
    // 0x12c1f4: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x12c1f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_12c1f8:
    // 0x12c1f8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x12c1f8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_12c1fc:
    // 0x12c1fc: 0xc04953c  jal         func_1254F0
label_12c200:
    if (ctx->pc == 0x12C200u) {
        ctx->pc = 0x12C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1FCu;
        // 0x12c200: 0xe64003b0  swc1        $f0, 0x3B0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 944), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C204u;
        goto label_12c204;
    }
    ctx->pc = 0x12C1FCu;
    SET_GPR_U32(ctx, 31, 0x12C204u);
    ctx->pc = 0x12C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1FCu;
    // 0x12c200: 0xe64003b0  swc1        $f0, 0x3B0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 944), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12C1FCu, 0x12C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C204u;
label_12c204:
    // 0x12c204: 0xc64103b4  lwc1        $f1, 0x3B4($s2)
    ctx->pc = 0x12c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c208:
    // 0x12c208: 0xc64003ac  lwc1        $f0, 0x3AC($s2)
    ctx->pc = 0x12c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c20c:
    // 0x12c20c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x12c20cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_12c210:
    // 0x12c210: 0xc642040c  lwc1        $f2, 0x40C($s2)
    ctx->pc = 0x12c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c214:
    // 0x12c214: 0xc64003b0  lwc1        $f0, 0x3B0($s2)
    ctx->pc = 0x12c214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c218:
    // 0x12c218: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x12c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_12c21c:
    // 0x12c21c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12c21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12c220:
    // 0x12c220: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12c220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12c224:
    // 0x12c224: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x12c224u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
label_12c228:
    // 0x12c228: 0x460310a8  max.s       $f2, $f2, $f3
    ctx->pc = 0x12c228u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[3]);
label_12c22c:
    // 0x12c22c: 0xe64003b4  swc1        $f0, 0x3B4($s2)
    ctx->pc = 0x12c22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
label_12c230:
    // 0x12c230: 0xe642040c  swc1        $f2, 0x40C($s2)
    ctx->pc = 0x12c230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1036), bits); }
label_12c234:
    // 0x12c234: 0xae4003cc  sw          $zero, 0x3CC($s2)
    ctx->pc = 0x12c234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 972), GPR_U32(ctx, 0));
label_12c238:
    // 0x12c238: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12c238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12c23c:
    // 0x12c23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c240:
    // 0x12c240: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_12c244:
    if (ctx->pc == 0x12C244u) {
        ctx->pc = 0x12C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C240u;
        // 0x12c244: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C248u;
        goto label_12c248;
    }
    ctx->pc = 0x12C240u;
    {
        const bool branch_taken_0x12c240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C240u;
        // 0x12c244: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c240) {
            ctx->pc = 0x12C2C8u;
            goto label_12c2c8;
        }
    }
    ctx->pc = 0x12C248u;
label_12c248:
    // 0x12c248: 0xc6400358  lwc1        $f0, 0x358($s2)
    ctx->pc = 0x12c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c24c:
    // 0x12c24c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12c24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12c250:
    // 0x12c250: 0x0  nop
    ctx->pc = 0x12c250u;
    // NOP
label_12c254:
    // 0x12c254: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12c254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c258:
    // 0x12c258: 0x0  nop
    ctx->pc = 0x12c258u;
    // NOP
label_12c25c:
    // 0x12c25c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_12c260:
    if (ctx->pc == 0x12C260u) {
        ctx->pc = 0x12C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C25Cu;
        // 0x12c260: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C264u;
        goto label_12c264;
    }
    ctx->pc = 0x12C25Cu;
    {
        const bool branch_taken_0x12c25c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C25Cu;
        // 0x12c260: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c25c) {
            ctx->pc = 0x12C2CCu;
            goto label_12c2cc;
        }
    }
    ctx->pc = 0x12C264u;
label_12c264:
    // 0x12c264: 0xc64003b8  lwc1        $f0, 0x3B8($s2)
    ctx->pc = 0x12c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c268:
    // 0x12c268: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12c268u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c26c:
    // 0x12c26c: 0x0  nop
    ctx->pc = 0x12c26cu;
    // NOP
label_12c270:
    // 0x12c270: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_12c274:
    if (ctx->pc == 0x12C274u) {
        ctx->pc = 0x12C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C270u;
        // 0x12c274: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C278u;
        goto label_12c278;
    }
    ctx->pc = 0x12C270u;
    {
        const bool branch_taken_0x12c270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C270u;
        // 0x12c274: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c270) {
            ctx->pc = 0x12C2CCu;
            goto label_12c2cc;
        }
    }
    ctx->pc = 0x12C278u;
label_12c278:
    // 0x12c278: 0xc64103f0  lwc1        $f1, 0x3F0($s2)
    ctx->pc = 0x12c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c27c:
    // 0x12c27c: 0xc4c08ae0  lwc1        $f0, -0x7520($a2)
    ctx->pc = 0x12c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c280:
    // 0x12c280: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12c280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c284:
    // 0x12c284: 0x0  nop
    ctx->pc = 0x12c284u;
    // NOP
label_12c288:
    // 0x12c288: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12c28c:
    if (ctx->pc == 0x12C28Cu) {
        ctx->pc = 0x12C290u;
        goto label_12c290;
    }
    ctx->pc = 0x12C288u;
    {
        const bool branch_taken_0x12c288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c288) {
            ctx->pc = 0x12C2CCu;
            goto label_12c2cc;
        }
    }
    ctx->pc = 0x12C290u;
label_12c290:
    // 0x12c290: 0x92420465  lbu         $v0, 0x465($s2)
    ctx->pc = 0x12c290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1125)));
label_12c294:
    // 0x12c294: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_12c298:
    if (ctx->pc == 0x12C298u) {
        ctx->pc = 0x12C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C294u;
        // 0x12c298: 0xc64c03f0  lwc1        $f12, 0x3F0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C29Cu;
        goto label_12c29c;
    }
    ctx->pc = 0x12C294u;
    {
        const bool branch_taken_0x12c294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c294) {
            ctx->pc = 0x12C298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C294u;
            // 0x12c298: 0xc64c03f0  lwc1        $f12, 0x3F0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C2B0u;
            goto label_12c2b0;
        }
    }
    ctx->pc = 0x12C29Cu;
label_12c29c:
    // 0x12c29c: 0xc088e98  jal         func_223A60
label_12c2a0:
    if (ctx->pc == 0x12C2A0u) {
        ctx->pc = 0x12C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C29Cu;
        // 0x12c2a0: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C2A4u;
        goto label_12c2a4;
    }
    ctx->pc = 0x12C29Cu;
    SET_GPR_U32(ctx, 31, 0x12C2A4u);
    ctx->pc = 0x12C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C29Cu;
    // 0x12c2a0: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x12C29Cu, 0x12C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2A4u;
label_12c2a4:
    // 0x12c2a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12c2a8:
    if (ctx->pc == 0x12C2A8u) {
        ctx->pc = 0x12C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2A4u;
        // 0x12c2a8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C2ACu;
        goto label_12c2ac;
    }
    ctx->pc = 0x12C2A4u;
    {
        const bool branch_taken_0x12c2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2A4u;
        // 0x12c2a8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2a4) {
            ctx->pc = 0x12C2C8u;
            goto label_12c2c8;
        }
    }
    ctx->pc = 0x12C2ACu;
label_12c2ac:
    // 0x12c2ac: 0xc64c03f0  lwc1        $f12, 0x3F0($s2)
    ctx->pc = 0x12c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c2b0:
    // 0x12c2b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c2b4:
    // 0x12c2b4: 0xc64d0330  lwc1        $f13, 0x330($s2)
    ctx->pc = 0x12c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12c2b8:
    // 0x12c2b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c2bc:
    // 0x12c2bc: 0xc04942a  jal         func_1250A8
label_12c2c0:
    if (ctx->pc == 0x12C2C0u) {
        ctx->pc = 0x12C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2BCu;
        // 0x12c2c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C2C4u;
        goto label_12c2c4;
    }
    ctx->pc = 0x12C2BCu;
    SET_GPR_U32(ctx, 31, 0x12C2C4u);
    ctx->pc = 0x12C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2BCu;
    // 0x12c2c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250A8u, 0x12C2BCu, 0x12C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2C4u;
label_12c2c4:
    // 0x12c2c4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12c2c8:
    // 0x12c2c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12c2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12c2cc:
    // 0x12c2cc: 0xc136afa  jal         func_4DABE8
label_12c2d0:
    if (ctx->pc == 0x12C2D0u) {
        ctx->pc = 0x12C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2CCu;
        // 0x12c2d0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C2D4u;
        goto label_12c2d4;
    }
    ctx->pc = 0x12C2CCu;
    SET_GPR_U32(ctx, 31, 0x12C2D4u);
    ctx->pc = 0x12C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2CCu;
    // 0x12c2d0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12C2CCu, 0x12C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2D4u;
label_12c2d4:
    // 0x12c2d4: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x12c2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_12c2d8:
    // 0x12c2d8: 0xc6400350  lwc1        $f0, 0x350($s2)
    ctx->pc = 0x12c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c2dc:
    // 0x12c2dc: 0xc4f58ae0  lwc1        $f21, -0x7520($a3)
    ctx->pc = 0x12c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12c2e0:
    // 0x12c2e0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12c2e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12c2e4:
    // 0x12c2e4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x12c2e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c2e8:
    // 0x12c2e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12c2e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12c2ec:
    // 0x12c2ec: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12c2ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c2f0:
    // 0x12c2f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12c2f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c2f4:
    // 0x12c2f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12c2f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12c2f8:
    // 0x12c2f8: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12c2f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12c2fc:
    // 0x12c2fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x12c2fcu;
    // VWAITQ (Q already resolved in this runtime)
label_12c300:
    // 0x12c300: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12c300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12c304:
    // 0x12c304: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12c304u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_12c308:
    // 0x12c308: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x12c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_12c30c:
    // 0x12c30c: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x12c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_12c310:
    // 0x12c310: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
label_12c314:
    if (ctx->pc == 0x12C314u) {
        ctx->pc = 0x12C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C310u;
        // 0x12c314: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C318u;
        goto label_12c318;
    }
    ctx->pc = 0x12C310u;
    {
        const bool branch_taken_0x12c310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C310u;
        // 0x12c314: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c310) {
            ctx->pc = 0x12C490u;
            goto label_12c490;
        }
    }
    ctx->pc = 0x12C318u;
label_12c318:
    // 0x12c318: 0x3c013ae4  lui         $at, 0x3AE4
    ctx->pc = 0x12c318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15076 << 16));
label_12c31c:
    // 0x12c31c: 0x3421c389  ori         $at, $at, 0xC389
    ctx->pc = 0x12c31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50057);
label_12c320:
    // 0x12c320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12c320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12c324:
    // 0x12c324: 0xc12e29c  jal         func_4B8A70
label_12c328:
    if (ctx->pc == 0x12C328u) {
        ctx->pc = 0x12C32Cu;
        goto label_12c32c;
    }
    ctx->pc = 0x12C324u;
    SET_GPR_U32(ctx, 31, 0x12C32Cu);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12C324u, 0x12C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C32Cu;
label_12c32c:
    // 0x12c32c: 0xc64c0350  lwc1        $f12, 0x350($s2)
    ctx->pc = 0x12c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c330:
    // 0x12c330: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12c330u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_12c334:
    // 0x12c334: 0xc0cd790  jal         func_335E40
label_12c338:
    if (ctx->pc == 0x12C338u) {
        ctx->pc = 0x12C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C334u;
        // 0x12c338: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C33Cu;
        goto label_12c33c;
    }
    ctx->pc = 0x12C334u;
    SET_GPR_U32(ctx, 31, 0x12C33Cu);
    ctx->pc = 0x12C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C334u;
    // 0x12c338: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x12C334u, 0x12C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C33Cu;
label_12c33c:
    // 0x12c33c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x12c33cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12c340:
    // 0x12c340: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12c340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12c344:
    // 0x12c344: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12c344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12c348:
    // 0x12c348: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12c348u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12c34c:
    // 0x12c34c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12c34cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12c350:
    // 0x12c350: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12c350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12c354:
    // 0x12c354: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12c354u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12c358:
    // 0x12c358: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x12c358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12c35c:
    // 0x12c35c: 0x0  nop
    ctx->pc = 0x12c35cu;
    // NOP
label_12c360:
    // 0x12c360: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x12c360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c364:
    // 0x12c364: 0x0  nop
    ctx->pc = 0x12c364u;
    // NOP
label_12c368:
    // 0x12c368: 0x45020047  bc1fl       . + 4 + (0x47 << 2)
label_12c36c:
    if (ctx->pc == 0x12C36Cu) {
        ctx->pc = 0x12C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C368u;
        // 0x12c36c: 0xe655043c  swc1        $f21, 0x43C($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C370u;
        goto label_12c370;
    }
    ctx->pc = 0x12C368u;
    {
        const bool branch_taken_0x12c368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c368) {
            ctx->pc = 0x12C36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C368u;
            // 0x12c36c: 0xe655043c  swc1        $f21, 0x43C($s2) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C488u;
            goto label_12c488;
        }
    }
    ctx->pc = 0x12C370u;
label_12c370:
    // 0x12c370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12c374:
    // 0x12c374: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12c378:
    // 0x12c378: 0x0  nop
    ctx->pc = 0x12c378u;
    // NOP
label_12c37c:
    // 0x12c37c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x12c37cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c380:
    // 0x12c380: 0x0  nop
    ctx->pc = 0x12c380u;
    // NOP
label_12c384:
    // 0x12c384: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12c388:
    if (ctx->pc == 0x12C388u) {
        ctx->pc = 0x12C38Cu;
        goto label_12c38c;
    }
    ctx->pc = 0x12C384u;
    {
        const bool branch_taken_0x12c384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c384) {
            ctx->pc = 0x12C398u;
            goto label_12c398;
        }
    }
    ctx->pc = 0x12C38Cu;
label_12c38c:
    // 0x12c38c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x12c38cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_12c390:
    // 0x12c390: 0x1000001c  b           . + 4 + (0x1C << 2)
label_12c394:
    if (ctx->pc == 0x12C394u) {
        ctx->pc = 0x12C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C390u;
        // 0x12c394: 0xc7a10104  lwc1        $f1, 0x104($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C398u;
        goto label_12c398;
    }
    ctx->pc = 0x12C390u;
    {
        const bool branch_taken_0x12c390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C390u;
        // 0x12c394: 0xc7a10104  lwc1        $f1, 0x104($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c390) {
            ctx->pc = 0x12C404u;
            goto label_12c404;
        }
    }
    ctx->pc = 0x12C398u;
label_12c398:
    // 0x12c398: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12c398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12c39c:
    // 0x12c39c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c3a0:
    // 0x12c3a0: 0x0  nop
    ctx->pc = 0x12c3a0u;
    // NOP
label_12c3a4:
    // 0x12c3a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12c3a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c3a8:
    // 0x12c3a8: 0x0  nop
    ctx->pc = 0x12c3a8u;
    // NOP
label_12c3ac:
    // 0x12c3ac: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12c3b0:
    if (ctx->pc == 0x12C3B0u) {
        ctx->pc = 0x12C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3ACu;
        // 0x12c3b0: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C3B4u;
        goto label_12c3b4;
    }
    ctx->pc = 0x12C3ACu;
    {
        const bool branch_taken_0x12c3ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c3ac) {
            ctx->pc = 0x12C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C3ACu;
            // 0x12c3b0: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C3C8u;
            goto label_12c3c8;
        }
    }
    ctx->pc = 0x12C3B4u;
label_12c3b4:
    // 0x12c3b4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12c3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12c3b8:
    // 0x12c3b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12c3b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12c3bc:
    // 0x12c3bc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x12c3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_12c3c0:
    // 0x12c3c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_12c3c4:
    if (ctx->pc == 0x12C3C4u) {
        ctx->pc = 0x12C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3C0u;
        // 0x12c3c4: 0xc7a10104  lwc1        $f1, 0x104($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C3C8u;
        goto label_12c3c8;
    }
    ctx->pc = 0x12C3C0u;
    {
        const bool branch_taken_0x12c3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3C0u;
        // 0x12c3c4: 0xc7a10104  lwc1        $f1, 0x104($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3c0) {
            ctx->pc = 0x12C404u;
            goto label_12c404;
        }
    }
    ctx->pc = 0x12C3C8u;
label_12c3c8:
    // 0x12c3c8: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x12c3c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_12c3cc:
    // 0x12c3cc: 0x0  nop
    ctx->pc = 0x12c3ccu;
    // NOP
label_12c3d0:
    // 0x12c3d0: 0x0  nop
    ctx->pc = 0x12c3d0u;
    // NOP
label_12c3d4:
    // 0x12c3d4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12c3d4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12c3d8:
    // 0x12c3d8: 0x0  nop
    ctx->pc = 0x12c3d8u;
    // NOP
label_12c3dc:
    // 0x12c3dc: 0x0  nop
    ctx->pc = 0x12c3dcu;
    // NOP
label_12c3e0:
    // 0x12c3e0: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x12c3e0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_12c3e4:
    // 0x12c3e4: 0xc0cd5a8  jal         func_3356A0
label_12c3e8:
    if (ctx->pc == 0x12C3E8u) {
        ctx->pc = 0x12C3ECu;
        goto label_12c3ec;
    }
    ctx->pc = 0x12C3E4u;
    SET_GPR_U32(ctx, 31, 0x12C3ECu);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12C3E4u, 0x12C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3ECu;
label_12c3ec:
    // 0x12c3ec: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12c3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12c3f0:
    // 0x12c3f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12c3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12c3f4:
    // 0x12c3f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12c3f8:
    // 0x12c3f8: 0x0  nop
    ctx->pc = 0x12c3f8u;
    // NOP
label_12c3fc:
    // 0x12c3fc: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x12c3fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12c400:
    // 0x12c400: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x12c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c404:
    // 0x12c404: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x12c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c408:
    // 0x12c408: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x12c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c40c:
    // 0x12c40c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12c40cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_12c410:
    // 0x12c410: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x12c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12c414:
    // 0x12c414: 0xc644040c  lwc1        $f4, 0x40C($s2)
    ctx->pc = 0x12c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12c418:
    // 0x12c418: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12c418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12c41c:
    // 0x12c41c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12c41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12c420:
    // 0x12c420: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x12c420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c424:
    // 0x12c424: 0x0  nop
    ctx->pc = 0x12c424u;
    // NOP
label_12c428:
    // 0x12c428: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_12c42c:
    if (ctx->pc == 0x12C42Cu) {
        ctx->pc = 0x12C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C428u;
        // 0x12c42c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C430u;
        goto label_12c430;
    }
    ctx->pc = 0x12C428u;
    {
        const bool branch_taken_0x12c428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C428u;
        // 0x12c42c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c428) {
            ctx->pc = 0x12C450u;
            goto label_12c450;
        }
    }
    ctx->pc = 0x12C430u;
label_12c430:
    // 0x12c430: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c434:
    // 0x12c434: 0x0  nop
    ctx->pc = 0x12c434u;
    // NOP
label_12c438:
    // 0x12c438: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x12c438u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_12c43c:
    // 0x12c43c: 0x46002b02  mul.s       $f12, $f5, $f0
    ctx->pc = 0x12c43cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_12c440:
    // 0x12c440: 0x460c2834  c.lt.s      $f5, $f12
    ctx->pc = 0x12c440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c444:
    // 0x12c444: 0x0  nop
    ctx->pc = 0x12c444u;
    // NOP
label_12c448:
    // 0x12c448: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12c44c:
    if (ctx->pc == 0x12C44Cu) {
        ctx->pc = 0x12C450u;
        goto label_12c450;
    }
    ctx->pc = 0x12C448u;
    {
        const bool branch_taken_0x12c448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c448) {
            ctx->pc = 0x12C454u;
            goto label_12c454;
        }
    }
    ctx->pc = 0x12C450u;
label_12c450:
    // 0x12c450: 0x46002b06  mov.s       $f12, $f5
    ctx->pc = 0x12c450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[5]);
label_12c454:
    // 0x12c454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12c454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c458:
    // 0x12c458: 0x0  nop
    ctx->pc = 0x12c458u;
    // NOP
label_12c45c:
    // 0x12c45c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12c45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c460:
    // 0x12c460: 0x0  nop
    ctx->pc = 0x12c460u;
    // NOP
label_12c464:
    // 0x12c464: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_12c468:
    if (ctx->pc == 0x12C468u) {
        ctx->pc = 0x12C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C464u;
        // 0x12c468: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C46Cu;
        goto label_12c46c;
    }
    ctx->pc = 0x12C464u;
    {
        const bool branch_taken_0x12c464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c464) {
            ctx->pc = 0x12C468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C464u;
            // 0x12c468: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C46Cu;
            goto label_12c46c;
        }
    }
    ctx->pc = 0x12C46Cu;
label_12c46c:
    // 0x12c46c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c470:
    // 0x12c470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c474:
    // 0x12c474: 0xc04b5a2  jal         func_12D688
label_12c478:
    if (ctx->pc == 0x12C478u) {
        ctx->pc = 0x12C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C474u;
        // 0x12c478: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C47Cu;
        goto label_12c47c;
    }
    ctx->pc = 0x12C474u;
    SET_GPR_U32(ctx, 31, 0x12C47Cu);
    ctx->pc = 0x12C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C474u;
    // 0x12c478: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x12C474u, 0x12C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C47Cu;
label_12c47c:
    // 0x12c47c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c480:
    // 0x12c480: 0x1000000f  b           . + 4 + (0xF << 2)
label_12c484:
    if (ctx->pc == 0x12C484u) {
        ctx->pc = 0x12C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C480u;
        // 0x12c484: 0xafa501f0  sw          $a1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C488u;
        goto label_12c488;
    }
    ctx->pc = 0x12C480u;
    {
        const bool branch_taken_0x12c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C480u;
        // 0x12c484: 0xafa501f0  sw          $a1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c480) {
            ctx->pc = 0x12C4C0u;
            goto label_12c4c0;
        }
    }
    ctx->pc = 0x12C488u;
label_12c488:
    // 0x12c488: 0x1000000d  b           . + 4 + (0xD << 2)
label_12c48c:
    if (ctx->pc == 0x12C48Cu) {
        ctx->pc = 0x12C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C488u;
        // 0x12c48c: 0xe6550350  swc1        $f21, 0x350($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 848), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C490u;
        goto label_12c490;
    }
    ctx->pc = 0x12C488u;
    {
        const bool branch_taken_0x12c488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C488u;
        // 0x12c48c: 0xe6550350  swc1        $f21, 0x350($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 848), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c488) {
            ctx->pc = 0x12C4C0u;
            goto label_12c4c0;
        }
    }
    ctx->pc = 0x12C490u;
label_12c490:
    // 0x12c490: 0xc64c0358  lwc1        $f12, 0x358($s2)
    ctx->pc = 0x12c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c494:
    // 0x12c494: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12c494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12c498:
    // 0x12c498: 0x0  nop
    ctx->pc = 0x12c498u;
    // NOP
label_12c49c:
    // 0x12c49c: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x12c49cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c4a0:
    // 0x12c4a0: 0x0  nop
    ctx->pc = 0x12c4a0u;
    // NOP
label_12c4a4:
    // 0x12c4a4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_12c4a8:
    if (ctx->pc == 0x12C4A8u) {
        ctx->pc = 0x12C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4A4u;
        // 0x12c4a8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C4ACu;
        goto label_12c4ac;
    }
    ctx->pc = 0x12C4A4u;
    {
        const bool branch_taken_0x12c4a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4A4u;
        // 0x12c4a8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4a4) {
            ctx->pc = 0x12C4C4u;
            goto label_12c4c4;
        }
    }
    ctx->pc = 0x12C4ACu;
label_12c4ac:
    // 0x12c4ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c4b0:
    // 0x12c4b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c4b4:
    // 0x12c4b4: 0xc04b4ee  jal         func_12D3B8
label_12c4b8:
    if (ctx->pc == 0x12C4B8u) {
        ctx->pc = 0x12C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4B4u;
        // 0x12c4b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C4BCu;
        goto label_12c4bc;
    }
    ctx->pc = 0x12C4B4u;
    SET_GPR_U32(ctx, 31, 0x12C4BCu);
    ctx->pc = 0x12C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4B4u;
    // 0x12c4b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D3B8u, 0x12C4B4u, 0x12C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4BCu;
label_12c4bc:
    // 0x12c4bc: 0xe6540358  swc1        $f20, 0x358($s2)
    ctx->pc = 0x12c4bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 856), bits); }
label_12c4c0:
    // 0x12c4c0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x12c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12c4c4:
    // 0x12c4c4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12c4c8:
    // 0x12c4c8: 0xc136afa  jal         func_4DABE8
label_12c4cc:
    if (ctx->pc == 0x12C4CCu) {
        ctx->pc = 0x12C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4C8u;
        // 0x12c4cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C4D0u;
        goto label_12c4d0;
    }
    ctx->pc = 0x12C4C8u;
    SET_GPR_U32(ctx, 31, 0x12C4D0u);
    ctx->pc = 0x12C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4C8u;
    // 0x12c4cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12C4C8u, 0x12C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4D0u;
label_12c4d0:
    // 0x12c4d0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x12c4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_12c4d4:
    // 0x12c4d4: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x12c4d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_12c4d8:
    // 0x12c4d8: 0x24c41740  addiu       $a0, $a2, 0x1740
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
label_12c4dc:
    // 0x12c4dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12c4dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12c4e0:
    // 0x12c4e0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x12c4e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c4e4:
    // 0x12c4e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12c4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c4e8:
    // 0x12c4e8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x12c4e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c4ec:
    // 0x12c4ec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12c4ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12c4f0:
    // 0x12c4f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x12c4f0u;
    // VWAITQ (Q already resolved in this runtime)
label_12c4f4:
    // 0x12c4f4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x12c4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12c4f8:
    // 0x12c4f8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x12c4f8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_12c4fc:
    // 0x12c4fc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x12c4fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_12c500:
    // 0x12c500: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12c500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12c504:
    // 0x12c504: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x12c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_12c508:
    // 0x12c508: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x12c508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_12c50c:
    // 0x12c50c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12c50cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12c510:
    // 0x12c510: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x12c510u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_12c514:
    // 0x12c514: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x12c514u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c518:
    // 0x12c518: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x12c518u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_12c51c:
    // 0x12c51c: 0x7fa70100  sq          $a3, 0x100($sp)
    ctx->pc = 0x12c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 7));
label_12c520:
    // 0x12c520: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12c520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12c524:
    // 0x12c524: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12c524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c528:
    // 0x12c528: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12c528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12c52c:
    // 0x12c52c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12c52cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12c530:
    // 0x12c530: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12c530u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12c534:
    // 0x12c534: 0x4a0003bf  vwaitq
    ctx->pc = 0x12c534u;
    // VWAITQ (Q already resolved in this runtime)
label_12c538:
    // 0x12c538: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12c538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12c53c:
    // 0x12c53c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x12c53cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
label_12c540:
    // 0x12c540: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x12c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_12c544:
    // 0x12c544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c548:
    // 0x12c548: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x12c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_12c54c:
    // 0x12c54c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c550:
    // 0x12c550: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x12c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_12c554:
    // 0x12c554: 0x7fa80100  sq          $t0, 0x100($sp)
    ctx->pc = 0x12c554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 8));
label_12c558:
    // 0x12c558: 0x7fa700f0  sq          $a3, 0xF0($sp)
    ctx->pc = 0x12c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 7));
label_12c55c:
    // 0x12c55c: 0xc04b642  jal         func_12D908
label_12c560:
    if (ctx->pc == 0x12C560u) {
        ctx->pc = 0x12C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C55Cu;
        // 0x12c560: 0x7fa80110  sq          $t0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C564u;
        goto label_12c564;
    }
    ctx->pc = 0x12C55Cu;
    SET_GPR_U32(ctx, 31, 0x12C564u);
    ctx->pc = 0x12C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C55Cu;
    // 0x12c560: 0x7fa80110  sq          $t0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D908u, 0x12C55Cu, 0x12C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C564u;
label_12c564:
    // 0x12c564: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12c564u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12c568:
    // 0x12c568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c56c:
    // 0x12c56c: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_12c570:
    if (ctx->pc == 0x12C570u) {
        ctx->pc = 0x12C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C56Cu;
        // 0x12c570: 0xe7a001c0  swc1        $f0, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C574u;
        goto label_12c574;
    }
    ctx->pc = 0x12C56Cu;
    {
        const bool branch_taken_0x12c56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C56Cu;
        // 0x12c570: 0xe7a001c0  swc1        $f0, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c56c) {
            ctx->pc = 0x12C608u;
            goto label_12c608;
        }
    }
    ctx->pc = 0x12C574u;
label_12c574:
    // 0x12c574: 0xc64103e0  lwc1        $f1, 0x3E0($s2)
    ctx->pc = 0x12c574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c578:
    // 0x12c578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12c578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c57c:
    // 0x12c57c: 0x0  nop
    ctx->pc = 0x12c57cu;
    // NOP
label_12c580:
    // 0x12c580: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12c580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c584:
    // 0x12c584: 0x0  nop
    ctx->pc = 0x12c584u;
    // NOP
label_12c588:
    // 0x12c588: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_12c58c:
    if (ctx->pc == 0x12C58Cu) {
        ctx->pc = 0x12C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C588u;
        // 0x12c58c: 0x8e420448  lw          $v0, 0x448($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C590u;
        goto label_12c590;
    }
    ctx->pc = 0x12C588u;
    {
        const bool branch_taken_0x12c588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c588) {
            ctx->pc = 0x12C58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C588u;
            // 0x12c58c: 0x8e420448  lw          $v0, 0x448($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C5B0u;
            goto label_12c5b0;
        }
    }
    ctx->pc = 0x12C590u;
label_12c590:
    // 0x12c590: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_12c594:
    // 0x12c594: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_12c598:
    if (ctx->pc == 0x12C598u) {
        ctx->pc = 0x12C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C594u;
        // 0x12c598: 0x8e420448  lw          $v0, 0x448($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C59Cu;
        goto label_12c59c;
    }
    ctx->pc = 0x12C594u;
    {
        const bool branch_taken_0x12c594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c594) {
            ctx->pc = 0x12C598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C594u;
            // 0x12c598: 0x8e420448  lw          $v0, 0x448($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C5B0u;
            goto label_12c5b0;
        }
    }
    ctx->pc = 0x12C59Cu;
label_12c59c:
    // 0x12c59c: 0xc640032c  lwc1        $f0, 0x32C($s2)
    ctx->pc = 0x12c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c5a0:
    // 0x12c5a0: 0xc6410400  lwc1        $f1, 0x400($s2)
    ctx->pc = 0x12c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c5a4:
    // 0x12c5a4: 0xe64003e0  swc1        $f0, 0x3E0($s2)
    ctx->pc = 0x12c5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 992), bits); }
label_12c5a8:
    // 0x12c5a8: 0xe64103e8  swc1        $f1, 0x3E8($s2)
    ctx->pc = 0x12c5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1000), bits); }
label_12c5ac:
    // 0x12c5ac: 0x8e420448  lw          $v0, 0x448($s2)
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1096)));
label_12c5b0:
    // 0x12c5b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_12c5b4:
    if (ctx->pc == 0x12C5B4u) {
        ctx->pc = 0x12C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5B0u;
        // 0x12c5b4: 0x8fa701c4  lw          $a3, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C5B8u;
        goto label_12c5b8;
    }
    ctx->pc = 0x12C5B0u;
    {
        const bool branch_taken_0x12c5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5B0u;
        // 0x12c5b4: 0x8fa701c4  lw          $a3, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5b0) {
            ctx->pc = 0x12C5D8u;
            goto label_12c5d8;
        }
    }
    ctx->pc = 0x12C5B8u;
label_12c5b8:
    // 0x12c5b8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x12c5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_12c5bc:
    // 0x12c5bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12c5c0:
    if (ctx->pc == 0x12C5C0u) {
        ctx->pc = 0x12C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5BCu;
        // 0x12c5c0: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C5C4u;
        goto label_12c5c4;
    }
    ctx->pc = 0x12C5BCu;
    {
        const bool branch_taken_0x12c5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5BCu;
        // 0x12c5c0: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5bc) {
            ctx->pc = 0x12C5D8u;
            goto label_12c5d8;
        }
    }
    ctx->pc = 0x12C5C4u;
label_12c5c4:
    // 0x12c5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c5c8:
    // 0x12c5c8: 0xc04a33c  jal         func_128CF0
label_12c5cc:
    if (ctx->pc == 0x12C5CCu) {
        ctx->pc = 0x12C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5C8u;
        // 0x12c5cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C5D0u;
        goto label_12c5d0;
    }
    ctx->pc = 0x12C5C8u;
    SET_GPR_U32(ctx, 31, 0x12C5D0u);
    ctx->pc = 0x12C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5C8u;
    // 0x12c5cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128CF0u, 0x12C5C8u, 0x12C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5D0u;
label_12c5d0:
    // 0x12c5d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_12c5d4:
    if (ctx->pc == 0x12C5D4u) {
        ctx->pc = 0x12C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5D0u;
        // 0x12c5d4: 0xc64003b8  lwc1        $f0, 0x3B8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C5D8u;
        goto label_12c5d8;
    }
    ctx->pc = 0x12C5D0u;
    {
        const bool branch_taken_0x12c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5D0u;
        // 0x12c5d4: 0xc64003b8  lwc1        $f0, 0x3B8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5d0) {
            ctx->pc = 0x12C60Cu;
            goto label_12c60c;
        }
    }
    ctx->pc = 0x12C5D8u;
label_12c5d8:
    // 0x12c5d8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12c5dc:
    // 0x12c5dc: 0xc64103e4  lwc1        $f1, 0x3E4($s2)
    ctx->pc = 0x12c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c5e0:
    // 0x12c5e0: 0xc4408adc  lwc1        $f0, -0x7524($v0)
    ctx->pc = 0x12c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c5e4:
    // 0x12c5e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12c5e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c5e8:
    // 0x12c5e8: 0x0  nop
    ctx->pc = 0x12c5e8u;
    // NOP
label_12c5ec:
    // 0x12c5ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_12c5f0:
    if (ctx->pc == 0x12C5F0u) {
        ctx->pc = 0x12C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5ECu;
        // 0x12c5f0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C5F4u;
        goto label_12c5f4;
    }
    ctx->pc = 0x12C5ECu;
    {
        const bool branch_taken_0x12c5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5ECu;
        // 0x12c5f0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5ec) {
            ctx->pc = 0x12C608u;
            goto label_12c608;
        }
    }
    ctx->pc = 0x12C5F4u;
label_12c5f4:
    // 0x12c5f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_12c5f8:
    if (ctx->pc == 0x12C5F8u) {
        ctx->pc = 0x12C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5F4u;
        // 0x12c5f8: 0xc64003b8  lwc1        $f0, 0x3B8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C5FCu;
        goto label_12c5fc;
    }
    ctx->pc = 0x12C5F4u;
    {
        const bool branch_taken_0x12c5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c5f4) {
            ctx->pc = 0x12C5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C5F4u;
            // 0x12c5f8: 0xc64003b8  lwc1        $f0, 0x3B8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C60Cu;
            goto label_12c60c;
        }
    }
    ctx->pc = 0x12C5FCu;
label_12c5fc:
    // 0x12c5fc: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x12c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_12c600:
    // 0x12c600: 0xc4608ae0  lwc1        $f0, -0x7520($v1)
    ctx->pc = 0x12c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c604:
    // 0x12c604: 0xe64003e4  swc1        $f0, 0x3E4($s2)
    ctx->pc = 0x12c604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 996), bits); }
label_12c608:
    // 0x12c608: 0xc64003b8  lwc1        $f0, 0x3B8($s2)
    ctx->pc = 0x12c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c60c:
    // 0x12c60c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x12c60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_12c610:
    // 0x12c610: 0x0  nop
    ctx->pc = 0x12c610u;
    // NOP
label_12c614:
    // 0x12c614: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x12c614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c618:
    // 0x12c618: 0x0  nop
    ctx->pc = 0x12c618u;
    // NOP
label_12c61c:
    // 0x12c61c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_12c620:
    if (ctx->pc == 0x12C620u) {
        ctx->pc = 0x12C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C61Cu;
        // 0x12c620: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C624u;
        goto label_12c624;
    }
    ctx->pc = 0x12C61Cu;
    {
        const bool branch_taken_0x12c61c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C61Cu;
        // 0x12c620: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c61c) {
            ctx->pc = 0x12C6C0u;
            goto label_12c6c0;
        }
    }
    ctx->pc = 0x12C624u;
label_12c624:
    // 0x12c624: 0xc64201a0  lwc1        $f2, 0x1A0($s2)
    ctx->pc = 0x12c624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c628:
    // 0x12c628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c62c:
    // 0x12c62c: 0xc64103b4  lwc1        $f1, 0x3B4($s2)
    ctx->pc = 0x12c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c630:
    // 0x12c630: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x12c630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_12c634:
    // 0x12c634: 0xc64303b0  lwc1        $f3, 0x3B0($s2)
    ctx->pc = 0x12c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12c638:
    // 0x12c638: 0xc64003ac  lwc1        $f0, 0x3AC($s2)
    ctx->pc = 0x12c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c63c:
    // 0x12c63c: 0x92420460  lbu         $v0, 0x460($s2)
    ctx->pc = 0x12c63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1120)));
label_12c640:
    // 0x12c640: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12c640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_12c644:
    // 0x12c644: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x12c644u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
label_12c648:
    // 0x12c648: 0x460300a8  max.s       $f2, $f0, $f3
    ctx->pc = 0x12c648u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[3]);
label_12c64c:
    // 0x12c64c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_12c650:
    if (ctx->pc == 0x12C650u) {
        ctx->pc = 0x12C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C64Cu;
        // 0x12c650: 0xe64203b4  swc1        $f2, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C654u;
        goto label_12c654;
    }
    ctx->pc = 0x12C64Cu;
    {
        const bool branch_taken_0x12c64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C64Cu;
        // 0x12c650: 0xe64203b4  swc1        $f2, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c64c) {
            ctx->pc = 0x12C68Cu;
            goto label_12c68c;
        }
    }
    ctx->pc = 0x12C654u;
label_12c654:
    // 0x12c654: 0xc64003a4  lwc1        $f0, 0x3A4($s2)
    ctx->pc = 0x12c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c658:
    // 0x12c658: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x12c658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c65c:
    // 0x12c65c: 0x0  nop
    ctx->pc = 0x12c65cu;
    // NOP
label_12c660:
    // 0x12c660: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12c664:
    if (ctx->pc == 0x12C664u) {
        ctx->pc = 0x12C668u;
        goto label_12c668;
    }
    ctx->pc = 0x12C660u;
    {
        const bool branch_taken_0x12c660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c660) {
            ctx->pc = 0x12C674u;
            goto label_12c674;
        }
    }
    ctx->pc = 0x12C668u;
label_12c668:
    // 0x12c668: 0x46001028  max.s       $f0, $f2, $f0
    ctx->pc = 0x12c668u;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
label_12c66c:
    // 0x12c66c: 0x10000007  b           . + 4 + (0x7 << 2)
label_12c670:
    if (ctx->pc == 0x12C670u) {
        ctx->pc = 0x12C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C66Cu;
        // 0x12c670: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C674u;
        goto label_12c674;
    }
    ctx->pc = 0x12C66Cu;
    {
        const bool branch_taken_0x12c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C66Cu;
        // 0x12c670: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c66c) {
            ctx->pc = 0x12C68Cu;
            goto label_12c68c;
        }
    }
    ctx->pc = 0x12C674u;
label_12c674:
    // 0x12c674: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x12c674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c678:
    // 0x12c678: 0x0  nop
    ctx->pc = 0x12c678u;
    // NOP
label_12c67c:
    // 0x12c67c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_12c680:
    if (ctx->pc == 0x12C680u) {
        ctx->pc = 0x12C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C67Cu;
        // 0x12c680: 0xc64003b8  lwc1        $f0, 0x3B8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C684u;
        goto label_12c684;
    }
    ctx->pc = 0x12C67Cu;
    {
        const bool branch_taken_0x12c67c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c67c) {
            ctx->pc = 0x12C680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C67Cu;
            // 0x12c680: 0xc64003b8  lwc1        $f0, 0x3B8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C690u;
            goto label_12c690;
        }
    }
    ctx->pc = 0x12C684u;
label_12c684:
    // 0x12c684: 0x46001029  min.s       $f0, $f2, $f0
    ctx->pc = 0x12c684u;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[0]);
label_12c688:
    // 0x12c688: 0xe64003b4  swc1        $f0, 0x3B4($s2)
    ctx->pc = 0x12c688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
label_12c68c:
    // 0x12c68c: 0xc64003b8  lwc1        $f0, 0x3B8($s2)
    ctx->pc = 0x12c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c690:
    // 0x12c690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c694:
    // 0x12c694: 0xc64c01a0  lwc1        $f12, 0x1A0($s2)
    ctx->pc = 0x12c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c698:
    // 0x12c698: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c69c:
    // 0x12c69c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x12c69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_12c6a0:
    // 0x12c6a0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12c6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12c6a4:
    // 0x12c6a4: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x12c6a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_12c6a8:
    // 0x12c6a8: 0xc04b53a  jal         func_12D4E8
label_12c6ac:
    if (ctx->pc == 0x12C6ACu) {
        ctx->pc = 0x12C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6A8u;
        // 0x12c6ac: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C6B0u;
        goto label_12c6b0;
    }
    ctx->pc = 0x12C6A8u;
    SET_GPR_U32(ctx, 31, 0x12C6B0u);
    ctx->pc = 0x12C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6A8u;
    // 0x12c6ac: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x12C6A8u, 0x12C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6B0u;
label_12c6b0:
    // 0x12c6b0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12c6b4:
    // 0x12c6b4: 0xc4408adc  lwc1        $f0, -0x7524($v0)
    ctx->pc = 0x12c6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c6b8:
    // 0x12c6b8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_12c6bc:
    if (ctx->pc == 0x12C6BCu) {
        ctx->pc = 0x12C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6B8u;
        // 0x12c6bc: 0xe64003e4  swc1        $f0, 0x3E4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 996), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C6C0u;
        goto label_12c6c0;
    }
    ctx->pc = 0x12C6B8u;
    {
        const bool branch_taken_0x12c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6B8u;
        // 0x12c6bc: 0xe64003e4  swc1        $f0, 0x3E4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6b8) {
            ctx->pc = 0x12C868u;
            goto label_12c868;
        }
    }
    ctx->pc = 0x12C6C0u;
label_12c6c0:
    // 0x12c6c0: 0xc6440354  lwc1        $f4, 0x354($s2)
    ctx->pc = 0x12c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12c6c4:
    // 0x12c6c4: 0xc4948ae0  lwc1        $f20, -0x7520($a0)
    ctx->pc = 0x12c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12c6c8:
    // 0x12c6c8: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x12c6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c6cc:
    // 0x12c6cc: 0x0  nop
    ctx->pc = 0x12c6ccu;
    // NOP
label_12c6d0:
    // 0x12c6d0: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
label_12c6d4:
    if (ctx->pc == 0x12C6D4u) {
        ctx->pc = 0x12C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6D0u;
        // 0x12c6d4: 0x92420453  lbu         $v0, 0x453($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C6D8u;
        goto label_12c6d8;
    }
    ctx->pc = 0x12C6D0u;
    {
        const bool branch_taken_0x12c6d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c6d0) {
            ctx->pc = 0x12C6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C6D0u;
            // 0x12c6d4: 0x92420453  lbu         $v0, 0x453($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1107)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C7ECu;
            goto label_12c7ec;
        }
    }
    ctx->pc = 0x12C6D8u;
label_12c6d8:
    // 0x12c6d8: 0xc641040c  lwc1        $f1, 0x40C($s2)
    ctx->pc = 0x12c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c6dc:
    // 0x12c6dc: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x12c6dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c6e0:
    // 0x12c6e0: 0x0  nop
    ctx->pc = 0x12c6e0u;
    // NOP
label_12c6e4:
    // 0x12c6e4: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
label_12c6e8:
    if (ctx->pc == 0x12C6E8u) {
        ctx->pc = 0x12C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6E4u;
        // 0x12c6e8: 0x92420454  lbu         $v0, 0x454($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C6ECu;
        goto label_12c6ec;
    }
    ctx->pc = 0x12C6E4u;
    {
        const bool branch_taken_0x12c6e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c6e4) {
            ctx->pc = 0x12C6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C6E4u;
            // 0x12c6e8: 0x92420454  lbu         $v0, 0x454($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C72Cu;
            goto label_12c72c;
        }
    }
    ctx->pc = 0x12C6ECu;
label_12c6ec:
    // 0x12c6ec: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c6f0:
    // 0x12c6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c6f4:
    // 0x12c6f4: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp)
    ctx->pc = 0x12c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c6f8:
    // 0x12c6f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c6fc:
    // 0x12c6fc: 0x0  nop
    ctx->pc = 0x12c6fcu;
    // NOP
label_12c700:
    // 0x12c700: 0x0  nop
    ctx->pc = 0x12c700u;
    // NOP
label_12c704:
    // 0x12c704: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12c704u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_12c708:
    // 0x12c708: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x12c708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_12c70c:
    // 0x12c70c: 0x460c2301  sub.s       $f12, $f4, $f12
    ctx->pc = 0x12c70cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
label_12c710:
    // 0x12c710: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12c710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12c714:
    // 0x12c714: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x12c714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12c718:
    // 0x12c718: 0xc04b53a  jal         func_12D4E8
label_12c71c:
    if (ctx->pc == 0x12C71Cu) {
        ctx->pc = 0x12C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C718u;
        // 0x12c71c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C720u;
        goto label_12c720;
    }
    ctx->pc = 0x12C718u;
    SET_GPR_U32(ctx, 31, 0x12C720u);
    ctx->pc = 0x12C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C718u;
    // 0x12c71c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x12C718u, 0x12C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C720u;
label_12c720:
    // 0x12c720: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x12c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c724:
    // 0x12c724: 0x10000050  b           . + 4 + (0x50 << 2)
label_12c728:
    if (ctx->pc == 0x12C728u) {
        ctx->pc = 0x12C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C724u;
        // 0x12c728: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C72Cu;
        goto label_12c72c;
    }
    ctx->pc = 0x12C724u;
    {
        const bool branch_taken_0x12c724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C724u;
        // 0x12c728: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c724) {
            ctx->pc = 0x12C868u;
            goto label_12c868;
        }
    }
    ctx->pc = 0x12C72Cu;
label_12c72c:
    // 0x12c72c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_12c730:
    if (ctx->pc == 0x12C730u) {
        ctx->pc = 0x12C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C72Cu;
        // 0x12c730: 0xc7a001c0  lwc1        $f0, 0x1C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C734u;
        goto label_12c734;
    }
    ctx->pc = 0x12C72Cu;
    {
        const bool branch_taken_0x12c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C72Cu;
        // 0x12c730: 0xc7a001c0  lwc1        $f0, 0x1C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c72c) {
            ctx->pc = 0x12C7BCu;
            goto label_12c7bc;
        }
    }
    ctx->pc = 0x12C734u;
label_12c734:
    // 0x12c734: 0xc64201a0  lwc1        $f2, 0x1A0($s2)
    ctx->pc = 0x12c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c738:
    // 0x12c738: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12c738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_12c73c:
    // 0x12c73c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12c73cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_12c740:
    // 0x12c740: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12c740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12c744:
    // 0x12c744: 0x0  nop
    ctx->pc = 0x12c744u;
    // NOP
label_12c748:
    // 0x12c748: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12c748u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12c74c:
    // 0x12c74c: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x12c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c750:
    // 0x12c750: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x12c750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c754:
    // 0x12c754: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x12c754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_12c758:
    // 0x12c758: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12c758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_12c75c:
    // 0x12c75c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12c75cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12c760:
    // 0x12c760: 0x46010329  min.s       $f12, $f0, $f1
    ctx->pc = 0x12c760u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[1]);
label_12c764:
    // 0x12c764: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_12c768:
    if (ctx->pc == 0x12C768u) {
        ctx->pc = 0x12C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C764u;
        // 0x12c768: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C76Cu;
        goto label_12c76c;
    }
    ctx->pc = 0x12C764u;
    {
        const bool branch_taken_0x12c764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c764) {
            ctx->pc = 0x12C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C764u;
            // 0x12c768: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C76Cu;
            goto label_12c76c;
        }
    }
    ctx->pc = 0x12C76Cu;
label_12c76c:
    // 0x12c76c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c770:
    // 0x12c770: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c774:
    // 0x12c774: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x12c774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_12c778:
    // 0x12c778: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12c778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12c77c:
    // 0x12c77c: 0xc04b53a  jal         func_12D4E8
label_12c780:
    if (ctx->pc == 0x12C780u) {
        ctx->pc = 0x12C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C77Cu;
        // 0x12c780: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C784u;
        goto label_12c784;
    }
    ctx->pc = 0x12C77Cu;
    SET_GPR_U32(ctx, 31, 0x12C784u);
    ctx->pc = 0x12C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C77Cu;
    // 0x12c780: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x12C77Cu, 0x12C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C784u;
label_12c784:
    // 0x12c784: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x12c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c788:
    // 0x12c788: 0xc6410354  lwc1        $f1, 0x354($s2)
    ctx->pc = 0x12c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c78c:
    // 0x12c78c: 0x3c013792  lui         $at, 0x3792
    ctx->pc = 0x12c78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14226 << 16));
label_12c790:
    // 0x12c790: 0x342168aa  ori         $at, $at, 0x68AA
    ctx->pc = 0x12c790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26794);
label_12c794:
    // 0x12c794: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12c798:
    // 0x12c798: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x12c798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12c79c:
    // 0x12c79c: 0xe64003b4  swc1        $f0, 0x3B4($s2)
    ctx->pc = 0x12c79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
label_12c7a0:
    // 0x12c7a0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x12c7a0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_12c7a4:
    // 0x12c7a4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x12c7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c7a8:
    // 0x12c7a8: 0x0  nop
    ctx->pc = 0x12c7a8u;
    // NOP
label_12c7ac:
    // 0x12c7ac: 0x4503002e  bc1tl       . + 4 + (0x2E << 2)
label_12c7b0:
    if (ctx->pc == 0x12C7B0u) {
        ctx->pc = 0x12C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7ACu;
        // 0x12c7b0: 0xe6540354  swc1        $f20, 0x354($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 852), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C7B4u;
        goto label_12c7b4;
    }
    ctx->pc = 0x12C7ACu;
    {
        const bool branch_taken_0x12c7ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c7ac) {
            ctx->pc = 0x12C7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C7ACu;
            // 0x12c7b0: 0xe6540354  swc1        $f20, 0x354($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 852), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C868u;
            goto label_12c868;
        }
    }
    ctx->pc = 0x12C7B4u;
label_12c7b4:
    // 0x12c7b4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_12c7b8:
    if (ctx->pc == 0x12C7B8u) {
        ctx->pc = 0x12C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7B4u;
        // 0x12c7b8: 0xc7a001a8  lwc1        $f0, 0x1A8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C7BCu;
        goto label_12c7bc;
    }
    ctx->pc = 0x12C7B4u;
    {
        const bool branch_taken_0x12c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7B4u;
        // 0x12c7b8: 0xc7a001a8  lwc1        $f0, 0x1A8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7b4) {
            ctx->pc = 0x12C86Cu;
            goto label_12c86c;
        }
    }
    ctx->pc = 0x12C7BCu;
label_12c7bc:
    // 0x12c7bc: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp)
    ctx->pc = 0x12c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c7c0:
    // 0x12c7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c7c4:
    // 0x12c7c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c7c8:
    // 0x12c7c8: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_12c7cc:
    // 0x12c7cc: 0x460c2301  sub.s       $f12, $f4, $f12
    ctx->pc = 0x12c7ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
label_12c7d0:
    // 0x12c7d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12c7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12c7d4:
    // 0x12c7d4: 0xc04b53a  jal         func_12D4E8
label_12c7d8:
    if (ctx->pc == 0x12C7D8u) {
        ctx->pc = 0x12C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7D4u;
        // 0x12c7d8: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C7DCu;
        goto label_12c7dc;
    }
    ctx->pc = 0x12C7D4u;
    SET_GPR_U32(ctx, 31, 0x12C7DCu);
    ctx->pc = 0x12C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7D4u;
    // 0x12c7d8: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x12C7D4u, 0x12C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7DCu;
label_12c7dc:
    // 0x12c7dc: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x12c7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c7e0:
    // 0x12c7e0: 0xe6540354  swc1        $f20, 0x354($s2)
    ctx->pc = 0x12c7e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 852), bits); }
label_12c7e4:
    // 0x12c7e4: 0x10000020  b           . + 4 + (0x20 << 2)
label_12c7e8:
    if (ctx->pc == 0x12C7E8u) {
        ctx->pc = 0x12C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7E4u;
        // 0x12c7e8: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C7ECu;
        goto label_12c7ec;
    }
    ctx->pc = 0x12C7E4u;
    {
        const bool branch_taken_0x12c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7E4u;
        // 0x12c7e8: 0xe64003b4  swc1        $f0, 0x3B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7e4) {
            ctx->pc = 0x12C868u;
            goto label_12c868;
        }
    }
    ctx->pc = 0x12C7ECu;
label_12c7ec:
    // 0x12c7ec: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_12c7f0:
    if (ctx->pc == 0x12C7F0u) {
        ctx->pc = 0x12C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7ECu;
        // 0x12c7f0: 0xc7a001a8  lwc1        $f0, 0x1A8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C7F4u;
        goto label_12c7f4;
    }
    ctx->pc = 0x12C7ECu;
    {
        const bool branch_taken_0x12c7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7ECu;
        // 0x12c7f0: 0xc7a001a8  lwc1        $f0, 0x1A8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7ec) {
            ctx->pc = 0x12C86Cu;
            goto label_12c86c;
        }
    }
    ctx->pc = 0x12C7F4u;
label_12c7f4:
    // 0x12c7f4: 0xc64203b4  lwc1        $f2, 0x3B4($s2)
    ctx->pc = 0x12c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12c7f8:
    // 0x12c7f8: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x12c7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c7fc:
    // 0x12c7fc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12c800:
    // 0x12c800: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12c800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12c804:
    // 0x12c804: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12c804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12c808:
    // 0x12c808: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x12c808u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_12c80c:
    // 0x12c80c: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x12c80cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
label_12c810:
    // 0x12c810: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x12c810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c814:
    // 0x12c814: 0x0  nop
    ctx->pc = 0x12c814u;
    // NOP
label_12c818:
    // 0x12c818: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_12c81c:
    if (ctx->pc == 0x12C81Cu) {
        ctx->pc = 0x12C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C818u;
        // 0x12c81c: 0xc7a001a8  lwc1        $f0, 0x1A8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C820u;
        goto label_12c820;
    }
    ctx->pc = 0x12C818u;
    {
        const bool branch_taken_0x12c818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c818) {
            ctx->pc = 0x12C81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C818u;
            // 0x12c81c: 0xc7a001a8  lwc1        $f0, 0x1A8($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C86Cu;
            goto label_12c86c;
        }
    }
    ctx->pc = 0x12C820u;
label_12c820:
    // 0x12c820: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x12c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c824:
    // 0x12c824: 0x460c2836  c.le.s      $f5, $f12
    ctx->pc = 0x12c824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c828:
    // 0x12c828: 0x3c013fbd  lui         $at, 0x3FBD
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16317 << 16));
label_12c82c:
    // 0x12c82c: 0x3421e44f  ori         $at, $at, 0xE44F
    ctx->pc = 0x12c82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58447);
label_12c830:
    // 0x12c830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12c834:
    // 0x12c834: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12c838:
    if (ctx->pc == 0x12C838u) {
        ctx->pc = 0x12C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C834u;
        // 0x12c838: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C83Cu;
        goto label_12c83c;
    }
    ctx->pc = 0x12C834u;
    {
        const bool branch_taken_0x12c834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C834u;
        // 0x12c838: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c834) {
            ctx->pc = 0x12C848u;
            goto label_12c848;
        }
    }
    ctx->pc = 0x12C83Cu;
label_12c83c:
    // 0x12c83c: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x12c83cu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
label_12c840:
    // 0x12c840: 0x10000004  b           . + 4 + (0x4 << 2)
label_12c844:
    if (ctx->pc == 0x12C844u) {
        ctx->pc = 0x12C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C840u;
        // 0x12c844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C848u;
        goto label_12c848;
    }
    ctx->pc = 0x12C840u;
    {
        const bool branch_taken_0x12c840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C840u;
        // 0x12c844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c840) {
            ctx->pc = 0x12C854u;
            goto label_12c854;
        }
    }
    ctx->pc = 0x12C848u;
label_12c848:
    // 0x12c848: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12c848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12c84c:
    // 0x12c84c: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x12c84cu;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
label_12c850:
    // 0x12c850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c854:
    // 0x12c854: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c858:
    // 0x12c858: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x12c858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_12c85c:
    // 0x12c85c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12c85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12c860:
    // 0x12c860: 0xc04b53a  jal         func_12D4E8
label_12c864:
    if (ctx->pc == 0x12C864u) {
        ctx->pc = 0x12C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C860u;
        // 0x12c864: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C868u;
        goto label_12c868;
    }
    ctx->pc = 0x12C860u;
    SET_GPR_U32(ctx, 31, 0x12C868u);
    ctx->pc = 0x12C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C860u;
    // 0x12c864: 0x27a80100  addiu       $t0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x12C860u, 0x12C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C868u;
label_12c868:
    // 0x12c868: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x12c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c86c:
    // 0x12c86c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12c86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12c870:
    // 0x12c870: 0x0  nop
    ctx->pc = 0x12c870u;
    // NOP
label_12c874:
    // 0x12c874: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12c874u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c878:
    // 0x12c878: 0x0  nop
    ctx->pc = 0x12c878u;
    // NOP
label_12c87c:
    // 0x12c87c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_12c880:
    if (ctx->pc == 0x12C880u) {
        ctx->pc = 0x12C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C87Cu;
        // 0x12c880: 0xc7a001ac  lwc1        $f0, 0x1AC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C884u;
        goto label_12c884;
    }
    ctx->pc = 0x12C87Cu;
    {
        const bool branch_taken_0x12c87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C87Cu;
        // 0x12c880: 0xc7a001ac  lwc1        $f0, 0x1AC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c87c) {
            ctx->pc = 0x12C894u;
            goto label_12c894;
        }
    }
    ctx->pc = 0x12C884u;
label_12c884:
    // 0x12c884: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12c884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c888:
    // 0x12c888: 0x0  nop
    ctx->pc = 0x12c888u;
    // NOP
label_12c88c:
    // 0x12c88c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_12c890:
    if (ctx->pc == 0x12C890u) {
        ctx->pc = 0x12C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C88Cu;
        // 0x12c890: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C894u;
        goto label_12c894;
    }
    ctx->pc = 0x12C88Cu;
    {
        const bool branch_taken_0x12c88c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C88Cu;
        // 0x12c890: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c88c) {
            ctx->pc = 0x12C8D0u;
            goto label_12c8d0;
        }
    }
    ctx->pc = 0x12C894u;
label_12c894:
    // 0x12c894: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12c894u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12c898:
    // 0x12c898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c89c:
    // 0x12c89c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_12c8a0:
    if (ctx->pc == 0x12C8A0u) {
        ctx->pc = 0x12C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C89Cu;
        // 0x12c8a0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8A4u;
        goto label_12c8a4;
    }
    ctx->pc = 0x12C89Cu;
    {
        const bool branch_taken_0x12c89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C89Cu;
        // 0x12c8a0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c89c) {
            ctx->pc = 0x12C8D0u;
            goto label_12c8d0;
        }
    }
    ctx->pc = 0x12C8A4u;
label_12c8a4:
    // 0x12c8a4: 0xc088e88  jal         func_223A20
label_12c8a8:
    if (ctx->pc == 0x12C8A8u) {
        ctx->pc = 0x12C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8A4u;
        // 0x12c8a8: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8ACu;
        goto label_12c8ac;
    }
    ctx->pc = 0x12C8A4u;
    SET_GPR_U32(ctx, 31, 0x12C8ACu);
    ctx->pc = 0x12C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8A4u;
    // 0x12c8a8: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x12C8A4u, 0x12C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8ACu;
label_12c8ac:
    // 0x12c8ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_12c8b0:
    if (ctx->pc == 0x12C8B0u) {
        ctx->pc = 0x12C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8ACu;
        // 0x12c8b0: 0x8fa501d4  lw          $a1, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8B4u;
        goto label_12c8b4;
    }
    ctx->pc = 0x12C8ACu;
    {
        const bool branch_taken_0x12c8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8ACu;
        // 0x12c8b0: 0x8fa501d4  lw          $a1, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8ac) {
            ctx->pc = 0x12C8CCu;
            goto label_12c8cc;
        }
    }
    ctx->pc = 0x12C8B4u;
label_12c8b4:
    // 0x12c8b4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_12c8b8:
    if (ctx->pc == 0x12C8B8u) {
        ctx->pc = 0x12C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8B4u;
        // 0x12c8b8: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8BCu;
        goto label_12c8bc;
    }
    ctx->pc = 0x12C8B4u;
    {
        const bool branch_taken_0x12c8b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8B4u;
        // 0x12c8b8: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8b4) {
            ctx->pc = 0x12C8D0u;
            goto label_12c8d0;
        }
    }
    ctx->pc = 0x12C8BCu;
label_12c8bc:
    // 0x12c8bc: 0xc7ac01a8  lwc1        $f12, 0x1A8($sp)
    ctx->pc = 0x12c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c8c0:
    // 0x12c8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c8c4:
    // 0x12c8c4: 0xc04a2c8  jal         func_128B20
label_12c8c8:
    if (ctx->pc == 0x12C8C8u) {
        ctx->pc = 0x12C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8C4u;
        // 0x12c8c8: 0xc7ad01ac  lwc1        $f13, 0x1AC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8CCu;
        goto label_12c8cc;
    }
    ctx->pc = 0x12C8C4u;
    SET_GPR_U32(ctx, 31, 0x12C8CCu);
    ctx->pc = 0x12C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8C4u;
    // 0x12c8c8: 0xc7ad01ac  lwc1        $f13, 0x1AC($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B20u, 0x12C8C4u, 0x12C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8CCu;
label_12c8cc:
    // 0x12c8cc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x12c8ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12c8d0:
    // 0x12c8d0: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x12c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12c8d4:
    // 0x12c8d4: 0x26470240  addiu       $a3, $s2, 0x240
    ctx->pc = 0x12c8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
label_12c8d8:
    // 0x12c8d8: 0x27b60110  addiu       $s6, $sp, 0x110
    ctx->pc = 0x12c8d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12c8dc:
    // 0x12c8dc: 0x7e420250  sq          $v0, 0x250($s2)
    ctx->pc = 0x12c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 592), GPR_VEC(ctx, 2));
label_12c8e0:
    // 0x12c8e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12c8e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c8e4:
    // 0x12c8e4: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x12c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_12c8e8:
    // 0x12c8e8: 0xafa601f8  sw          $a2, 0x1F8($sp)
    ctx->pc = 0x12c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 6));
label_12c8ec:
    // 0x12c8ec: 0xafa701f4  sw          $a3, 0x1F4($sp)
    ctx->pc = 0x12c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 7));
label_12c8f0:
    // 0x12c8f0: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x12c8f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_12c8f4:
    // 0x12c8f4: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x12c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_12c8f8:
    // 0x12c8f8: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x12c8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12c8fc:
    // 0x12c8fc: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x12c8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_12c900:
    // 0x12c900: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12c900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12c904:
    // 0x12c904: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x12c904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_12c908:
    // 0x12c908: 0xc0e409a  jal         func_390268
label_12c90c:
    if (ctx->pc == 0x12C90Cu) {
        ctx->pc = 0x12C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C908u;
        // 0x12c90c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C910u;
        goto label_12c910;
    }
    ctx->pc = 0x12C908u;
    SET_GPR_U32(ctx, 31, 0x12C910u);
    ctx->pc = 0x12C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C908u;
    // 0x12c90c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12C908u, 0x12C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C910u;
label_12c910:
    // 0x12c910: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_12c914:
    if (ctx->pc == 0x12C914u) {
        ctx->pc = 0x12C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C910u;
        // 0x12c914: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C918u;
        goto label_12c918;
    }
    ctx->pc = 0x12C910u;
    {
        const bool branch_taken_0x12c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C910u;
        // 0x12c914: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c910) {
            ctx->pc = 0x12C93Cu;
            goto label_12c93c;
        }
    }
    ctx->pc = 0x12C918u;
label_12c918:
    // 0x12c918: 0x8ca4489c  lw          $a0, 0x489C($a1)
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_12c91c:
    // 0x12c91c: 0xc0e409a  jal         func_390268
label_12c920:
    if (ctx->pc == 0x12C920u) {
        ctx->pc = 0x12C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C91Cu;
        // 0x12c920: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C924u;
        goto label_12c924;
    }
    ctx->pc = 0x12C91Cu;
    SET_GPR_U32(ctx, 31, 0x12C924u);
    ctx->pc = 0x12C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C91Cu;
    // 0x12c920: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12C91Cu, 0x12C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C924u;
label_12c924:
    // 0x12c924: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12c924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_12c928:
    // 0x12c928: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x12c928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_12c92c:
    // 0x12c92c: 0xc08997c  jal         func_2265F0
label_12c930:
    if (ctx->pc == 0x12C930u) {
        ctx->pc = 0x12C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C92Cu;
        // 0x12c930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C934u;
        goto label_12c934;
    }
    ctx->pc = 0x12C92Cu;
    SET_GPR_U32(ctx, 31, 0x12C934u);
    ctx->pc = 0x12C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C92Cu;
    // 0x12c930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12C92Cu, 0x12C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C934u;
label_12c934:
    // 0x12c934: 0x10000003  b           . + 4 + (0x3 << 2)
label_12c938:
    if (ctx->pc == 0x12C938u) {
        ctx->pc = 0x12C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C934u;
        // 0x12c938: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C93Cu;
        goto label_12c93c;
    }
    ctx->pc = 0x12C934u;
    {
        const bool branch_taken_0x12c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C934u;
        // 0x12c938: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c934) {
            ctx->pc = 0x12C944u;
            goto label_12c944;
        }
    }
    ctx->pc = 0x12C93Cu;
label_12c93c:
    // 0x12c93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c940:
    // 0x12c940: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12c940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12c944:
    // 0x12c944: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12c948:
    // 0x12c948: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_12c94c:
    // 0x12c94c: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x12c94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12c950:
    // 0x12c950: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_12c954:
    if (ctx->pc == 0x12C954u) {
        ctx->pc = 0x12C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C950u;
        // 0x12c954: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C958u;
        goto label_12c958;
    }
    ctx->pc = 0x12C950u;
    {
        const bool branch_taken_0x12c950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C950u;
        // 0x12c954: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c950) {
            ctx->pc = 0x12C900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c900;
        }
    }
    ctx->pc = 0x12C958u;
label_12c958:
    // 0x12c958: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12c958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12c95c:
    // 0x12c95c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c960:
    // 0x12c960: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_12c964:
    if (ctx->pc == 0x12C964u) {
        ctx->pc = 0x12C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C960u;
        // 0x12c964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C968u;
        goto label_12c968;
    }
    ctx->pc = 0x12C960u;
    {
        const bool branch_taken_0x12c960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C960u;
        // 0x12c964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c960) {
            ctx->pc = 0x12C9A4u;
            goto label_12c9a4;
        }
    }
    ctx->pc = 0x12C968u;
label_12c968:
    // 0x12c968: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x12c968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_12c96c:
    // 0x12c96c: 0xc6410350  lwc1        $f1, 0x350($s2)
    ctx->pc = 0x12c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c970:
    // 0x12c970: 0xc4c08ae0  lwc1        $f0, -0x7520($a2)
    ctx->pc = 0x12c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c974:
    // 0x12c974: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12c974u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c978:
    // 0x12c978: 0x0  nop
    ctx->pc = 0x12c978u;
    // NOP
label_12c97c:
    // 0x12c97c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_12c980:
    if (ctx->pc == 0x12C980u) {
        ctx->pc = 0x12C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C97Cu;
        // 0x12c980: 0x9242046b  lbu         $v0, 0x46B($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1131)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C984u;
        goto label_12c984;
    }
    ctx->pc = 0x12C97Cu;
    {
        const bool branch_taken_0x12c97c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c97c) {
            ctx->pc = 0x12C980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C97Cu;
            // 0x12c980: 0x9242046b  lbu         $v0, 0x46B($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1131)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C9A8u;
            goto label_12c9a8;
        }
    }
    ctx->pc = 0x12C984u;
label_12c984:
    // 0x12c984: 0x8e420314  lw          $v0, 0x314($s2)
    ctx->pc = 0x12c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12c988:
    // 0x12c988: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_12c98c:
    // 0x12c98c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_12c990:
    if (ctx->pc == 0x12C990u) {
        ctx->pc = 0x12C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C98Cu;
        // 0x12c990: 0x9242046b  lbu         $v0, 0x46B($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1131)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C994u;
        goto label_12c994;
    }
    ctx->pc = 0x12C98Cu;
    {
        const bool branch_taken_0x12c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c98c) {
            ctx->pc = 0x12C990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C98Cu;
            // 0x12c990: 0x9242046b  lbu         $v0, 0x46B($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1131)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C9A8u;
            goto label_12c9a8;
        }
    }
    ctx->pc = 0x12C994u;
label_12c994:
    // 0x12c994: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x12c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_12c998:
    // 0x12c998: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x12c998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12c99c:
    // 0x12c99c: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x12c99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
label_12c9a0:
    // 0x12c9a0: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x12c9a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_12c9a4:
    // 0x12c9a4: 0x9242046b  lbu         $v0, 0x46B($s2)
    ctx->pc = 0x12c9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1131)));
label_12c9a8:
    // 0x12c9a8: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_12c9ac:
    if (ctx->pc == 0x12C9ACu) {
        ctx->pc = 0x12C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9A8u;
        // 0x12c9ac: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9B0u;
        goto label_12c9b0;
    }
    ctx->pc = 0x12C9A8u;
    {
        const bool branch_taken_0x12c9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9A8u;
        // 0x12c9ac: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9a8) {
            ctx->pc = 0x12CB74u;
            goto label_12cb74;
        }
    }
    ctx->pc = 0x12C9B0u;
label_12c9b0:
    // 0x12c9b0: 0x8fa701ec  lw          $a3, 0x1EC($sp)
    ctx->pc = 0x12c9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c9b4:
    // 0x12c9b4: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_12c9b8:
    if (ctx->pc == 0x12C9B8u) {
        ctx->pc = 0x12C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9B4u;
        // 0x12c9b8: 0x92420455  lbu         $v0, 0x455($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9BCu;
        goto label_12c9bc;
    }
    ctx->pc = 0x12C9B4u;
    {
        const bool branch_taken_0x12c9b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9B4u;
        // 0x12c9b8: 0x92420455  lbu         $v0, 0x455($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9b4) {
            ctx->pc = 0x12C9CCu;
            goto label_12c9cc;
        }
    }
    ctx->pc = 0x12C9BCu;
label_12c9bc:
    // 0x12c9bc: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_12c9c0:
    if (ctx->pc == 0x12C9C0u) {
        ctx->pc = 0x12C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9BCu;
        // 0x12c9c0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9C4u;
        goto label_12c9c4;
    }
    ctx->pc = 0x12C9BCu;
    {
        const bool branch_taken_0x12c9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9BCu;
        // 0x12c9c0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9bc) {
            ctx->pc = 0x12CB78u;
            goto label_12cb78;
        }
    }
    ctx->pc = 0x12C9C4u;
label_12c9c4:
    // 0x12c9c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_12c9c8:
    if (ctx->pc == 0x12C9C8u) {
        ctx->pc = 0x12C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9C4u;
        // 0x12c9c8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9CCu;
        goto label_12c9cc;
    }
    ctx->pc = 0x12C9C4u;
    {
        const bool branch_taken_0x12c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9C4u;
        // 0x12c9c8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9c4) {
            ctx->pc = 0x12C9D4u;
            goto label_12c9d4;
        }
    }
    ctx->pc = 0x12C9CCu;
label_12c9cc:
    // 0x12c9cc: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_12c9d0:
    if (ctx->pc == 0x12C9D0u) {
        ctx->pc = 0x12C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9CCu;
        // 0x12c9d0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9D4u;
        goto label_12c9d4;
    }
    ctx->pc = 0x12C9CCu;
    {
        const bool branch_taken_0x12c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9CCu;
        // 0x12c9d0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9cc) {
            ctx->pc = 0x12CB70u;
            goto label_12cb70;
        }
    }
    ctx->pc = 0x12C9D4u;
label_12c9d4:
    // 0x12c9d4: 0xc6410350  lwc1        $f1, 0x350($s2)
    ctx->pc = 0x12c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c9d8:
    // 0x12c9d8: 0xc4408ae0  lwc1        $f0, -0x7520($v0)
    ctx->pc = 0x12c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c9dc:
    // 0x12c9dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12c9dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12c9e0:
    // 0x12c9e0: 0x0  nop
    ctx->pc = 0x12c9e0u;
    // NOP
label_12c9e4:
    // 0x12c9e4: 0x45000062  bc1f        . + 4 + (0x62 << 2)
label_12c9e8:
    if (ctx->pc == 0x12C9E8u) {
        ctx->pc = 0x12C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9E4u;
        // 0x12c9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C9ECu;
        goto label_12c9ec;
    }
    ctx->pc = 0x12C9E4u;
    {
        const bool branch_taken_0x12c9e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9E4u;
        // 0x12c9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9e4) {
            ctx->pc = 0x12CB70u;
            goto label_12cb70;
        }
    }
    ctx->pc = 0x12C9ECu;
label_12c9ec:
    // 0x12c9ec: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12c9ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12c9f0:
    // 0x12c9f0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_12c9f4:
    if (ctx->pc == 0x12C9F4u) {
        ctx->pc = 0x12C9F8u;
        goto label_12c9f8;
    }
    ctx->pc = 0x12C9F0u;
    {
        const bool branch_taken_0x12c9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12c9f0) {
            ctx->pc = 0x12CA2Cu;
            goto label_12ca2c;
        }
    }
    ctx->pc = 0x12C9F8u;
label_12c9f8:
    // 0x12c9f8: 0x8e430314  lw          $v1, 0x314($s2)
    ctx->pc = 0x12c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12c9fc:
    // 0x12c9fc: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_12ca00:
    // 0x12ca00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12ca00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12ca04:
    // 0x12ca04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_12ca08:
    if (ctx->pc == 0x12CA08u) {
        ctx->pc = 0x12CA0Cu;
        goto label_12ca0c;
    }
    ctx->pc = 0x12CA04u;
    {
        const bool branch_taken_0x12ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca04) {
            ctx->pc = 0x12CA2Cu;
            goto label_12ca2c;
        }
    }
    ctx->pc = 0x12CA0Cu;
label_12ca0c:
    // 0x12ca0c: 0x92420454  lbu         $v0, 0x454($s2)
    ctx->pc = 0x12ca0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
label_12ca10:
    // 0x12ca10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12ca14:
    if (ctx->pc == 0x12CA14u) {
        ctx->pc = 0x12CA18u;
        goto label_12ca18;
    }
    ctx->pc = 0x12CA10u;
    {
        const bool branch_taken_0x12ca10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca10) {
            ctx->pc = 0x12CA2Cu;
            goto label_12ca2c;
        }
    }
    ctx->pc = 0x12CA18u;
label_12ca18:
    // 0x12ca18: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_12ca1c:
    // 0x12ca1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12ca1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12ca20:
    // 0x12ca20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ca20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ca24:
    // 0x12ca24: 0x0  nop
    ctx->pc = 0x12ca24u;
    // NOP
label_12ca28:
    // 0x12ca28: 0xe6400388  swc1        $f0, 0x388($s2)
    ctx->pc = 0x12ca28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 904), bits); }
label_12ca2c:
    // 0x12ca2c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_12ca30:
    if (ctx->pc == 0x12CA30u) {
        ctx->pc = 0x12CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA2Cu;
        // 0x12ca30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA34u;
        goto label_12ca34;
    }
    ctx->pc = 0x12CA2Cu;
    {
        const bool branch_taken_0x12ca2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA2Cu;
        // 0x12ca30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca2c) {
            ctx->pc = 0x12CA88u;
            goto label_12ca88;
        }
    }
    ctx->pc = 0x12CA34u;
label_12ca34:
    // 0x12ca34: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12ca34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12ca38:
    // 0x12ca38: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_12ca3c:
    if (ctx->pc == 0x12CA3Cu) {
        ctx->pc = 0x12CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA38u;
        // 0x12ca3c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA40u;
        goto label_12ca40;
    }
    ctx->pc = 0x12CA38u;
    {
        const bool branch_taken_0x12ca38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA38u;
        // 0x12ca3c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca38) {
            ctx->pc = 0x12CA8Cu;
            goto label_12ca8c;
        }
    }
    ctx->pc = 0x12CA40u;
label_12ca40:
    // 0x12ca40: 0x8e430314  lw          $v1, 0x314($s2)
    ctx->pc = 0x12ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12ca44:
    // 0x12ca44: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_12ca48:
    // 0x12ca48: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12ca48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12ca4c:
    // 0x12ca4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12ca50:
    if (ctx->pc == 0x12CA50u) {
        ctx->pc = 0x12CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA4Cu;
        // 0x12ca50: 0xc7a101b4  lwc1        $f1, 0x1B4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA54u;
        goto label_12ca54;
    }
    ctx->pc = 0x12CA4Cu;
    {
        const bool branch_taken_0x12ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA4Cu;
        // 0x12ca50: 0xc7a101b4  lwc1        $f1, 0x1B4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca4c) {
            ctx->pc = 0x12CA8Cu;
            goto label_12ca8c;
        }
    }
    ctx->pc = 0x12CA54u;
label_12ca54:
    // 0x12ca54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12ca54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ca58:
    // 0x12ca58: 0x0  nop
    ctx->pc = 0x12ca58u;
    // NOP
label_12ca5c:
    // 0x12ca5c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12ca5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ca60:
    // 0x12ca60: 0x0  nop
    ctx->pc = 0x12ca60u;
    // NOP
label_12ca64:
    // 0x12ca64: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_12ca68:
    if (ctx->pc == 0x12CA68u) {
        ctx->pc = 0x12CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA64u;
        // 0x12ca68: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA6Cu;
        goto label_12ca6c;
    }
    ctx->pc = 0x12CA64u;
    {
        const bool branch_taken_0x12ca64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA64u;
        // 0x12ca68: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca64) {
            ctx->pc = 0x12CA8Cu;
            goto label_12ca8c;
        }
    }
    ctx->pc = 0x12CA6Cu;
label_12ca6c:
    // 0x12ca6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_12ca70:
    if (ctx->pc == 0x12CA70u) {
        ctx->pc = 0x12CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA6Cu;
        // 0x12ca70: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA74u;
        goto label_12ca74;
    }
    ctx->pc = 0x12CA6Cu;
    {
        const bool branch_taken_0x12ca6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA6Cu;
        // 0x12ca70: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca6c) {
            ctx->pc = 0x12CA90u;
            goto label_12ca90;
        }
    }
    ctx->pc = 0x12CA74u;
label_12ca74:
    // 0x12ca74: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x12ca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_12ca78:
    // 0x12ca78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12ca78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12ca7c:
    // 0x12ca7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ca7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ca80:
    // 0x12ca80: 0x0  nop
    ctx->pc = 0x12ca80u;
    // NOP
label_12ca84:
    // 0x12ca84: 0xe6400388  swc1        $f0, 0x388($s2)
    ctx->pc = 0x12ca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 904), bits); }
label_12ca88:
    // 0x12ca88: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12ca8c:
    // 0x12ca8c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x12ca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12ca90:
    // 0x12ca90: 0xc136afa  jal         func_4DABE8
label_12ca94:
    if (ctx->pc == 0x12CA94u) {
        ctx->pc = 0x12CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA90u;
        // 0x12ca94: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA98u;
        goto label_12ca98;
    }
    ctx->pc = 0x12CA90u;
    SET_GPR_U32(ctx, 31, 0x12CA98u);
    ctx->pc = 0x12CA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA90u;
    // 0x12ca94: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12CA90u, 0x12CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA98u;
label_12ca98:
    // 0x12ca98: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x12ca98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_12ca9c:
    // 0x12ca9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12ca9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12caa0:
    // 0x12caa0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x12caa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12caa4:
    // 0x12caa4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12caa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12caa8:
    // 0x12caa8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12caa8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12caac:
    // 0x12caac: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x12caacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_12cab0:
    // 0x12cab0: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x12cab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_12cab4:
    // 0x12cab4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12cab8:
    // 0x12cab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12cab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12cabc:
    // 0x12cabc: 0x0  nop
    ctx->pc = 0x12cabcu;
    // NOP
label_12cac0:
    // 0x12cac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12cac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12cac4:
    // 0x12cac4: 0x0  nop
    ctx->pc = 0x12cac4u;
    // NOP
label_12cac8:
    // 0x12cac8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_12cacc:
    if (ctx->pc == 0x12CACCu) {
        ctx->pc = 0x12CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAC8u;
        // 0x12cacc: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CAD0u;
        goto label_12cad0;
    }
    ctx->pc = 0x12CAC8u;
    {
        const bool branch_taken_0x12cac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAC8u;
        // 0x12cacc: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cac8) {
            ctx->pc = 0x12CB08u;
            goto label_12cb08;
        }
    }
    ctx->pc = 0x12CAD0u;
label_12cad0:
    // 0x12cad0: 0xc64c0388  lwc1        $f12, 0x388($s2)
    ctx->pc = 0x12cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12cad4:
    // 0x12cad4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x12cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_12cad8:
    // 0x12cad8: 0xc136b24  jal         func_4DAC90
label_12cadc:
    if (ctx->pc == 0x12CADCu) {
        ctx->pc = 0x12CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAD8u;
        // 0x12cadc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CAE0u;
        goto label_12cae0;
    }
    ctx->pc = 0x12CAD8u;
    SET_GPR_U32(ctx, 31, 0x12CAE0u);
    ctx->pc = 0x12CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAD8u;
    // 0x12cadc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12CAD8u, 0x12CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAE0u;
label_12cae0:
    // 0x12cae0: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x12cae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12cae4:
    // 0x12cae4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x12cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_12cae8:
    // 0x12cae8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12caec:
    // 0x12caec: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_12caf0:
    // 0x12caf0: 0xc136b18  jal         func_4DAC60
label_12caf4:
    if (ctx->pc == 0x12CAF4u) {
        ctx->pc = 0x12CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAF0u;
        // 0x12caf4: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CAF8u;
        goto label_12caf8;
    }
    ctx->pc = 0x12CAF0u;
    SET_GPR_U32(ctx, 31, 0x12CAF8u);
    ctx->pc = 0x12CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAF0u;
    // 0x12caf4: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12CAF0u, 0x12CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAF8u;
label_12caf8:
    // 0x12caf8: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x12caf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12cafc:
    // 0x12cafc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x12cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_12cb00:
    // 0x12cb00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_12cb04:
    if (ctx->pc == 0x12CB04u) {
        ctx->pc = 0x12CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB00u;
        // 0x12cb04: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CB08u;
        goto label_12cb08;
    }
    ctx->pc = 0x12CB00u;
    {
        const bool branch_taken_0x12cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB00u;
        // 0x12cb04: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb00) {
            ctx->pc = 0x12CB70u;
            goto label_12cb70;
        }
    }
    ctx->pc = 0x12CB08u;
label_12cb08:
    // 0x12cb08: 0xc64103b8  lwc1        $f1, 0x3B8($s2)
    ctx->pc = 0x12cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cb0c:
    // 0x12cb0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12cb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12cb10:
    // 0x12cb10: 0x0  nop
    ctx->pc = 0x12cb10u;
    // NOP
label_12cb14:
    // 0x12cb14: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12cb14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12cb18:
    // 0x12cb18: 0x0  nop
    ctx->pc = 0x12cb18u;
    // NOP
label_12cb1c:
    // 0x12cb1c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_12cb20:
    if (ctx->pc == 0x12CB20u) {
        ctx->pc = 0x12CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB1Cu;
        // 0x12cb20: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CB24u;
        goto label_12cb24;
    }
    ctx->pc = 0x12CB1Cu;
    {
        const bool branch_taken_0x12cb1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB1Cu;
        // 0x12cb20: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb1c) {
            ctx->pc = 0x12CB74u;
            goto label_12cb74;
        }
    }
    ctx->pc = 0x12CB24u;
label_12cb24:
    // 0x12cb24: 0xc7a30128  lwc1        $f3, 0x128($sp)
    ctx->pc = 0x12cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12cb28:
    // 0x12cb28: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12cb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12cb2c:
    // 0x12cb2c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12cb30:
    // 0x12cb30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12cb34:
    // 0x12cb34: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x12cb34u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
label_12cb38:
    // 0x12cb38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12cb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12cb3c:
    // 0x12cb3c: 0x0  nop
    ctx->pc = 0x12cb3cu;
    // NOP
label_12cb40:
    // 0x12cb40: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_12cb44:
    if (ctx->pc == 0x12CB44u) {
        ctx->pc = 0x12CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB40u;
        // 0x12cb44: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CB48u;
        goto label_12cb48;
    }
    ctx->pc = 0x12CB40u;
    {
        const bool branch_taken_0x12cb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB40u;
        // 0x12cb44: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb40) {
            ctx->pc = 0x12CB78u;
            goto label_12cb78;
        }
    }
    ctx->pc = 0x12CB48u;
label_12cb48:
    // 0x12cb48: 0xc6400388  lwc1        $f0, 0x388($s2)
    ctx->pc = 0x12cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12cb4c:
    // 0x12cb4c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x12cb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_12cb50:
    // 0x12cb50: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12cb50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12cb54:
    // 0x12cb54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12cb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12cb58:
    // 0x12cb58: 0x0  nop
    ctx->pc = 0x12cb58u;
    // NOP
label_12cb5c:
    // 0x12cb5c: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x12cb5cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_12cb60:
    // 0x12cb60: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x12cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cb64:
    // 0x12cb64: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x12cb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_12cb68:
    // 0x12cb68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12cb68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12cb6c:
    // 0x12cb6c: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x12cb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_12cb70:
    // 0x12cb70: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_12cb74:
    // 0x12cb74: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12cb78:
    // 0x12cb78: 0xc136afa  jal         func_4DABE8
label_12cb7c:
    if (ctx->pc == 0x12CB7Cu) {
        ctx->pc = 0x12CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB78u;
        // 0x12cb7c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CB80u;
        goto label_12cb80;
    }
    ctx->pc = 0x12CB78u;
    SET_GPR_U32(ctx, 31, 0x12CB80u);
    ctx->pc = 0x12CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB78u;
    // 0x12cb7c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12CB78u, 0x12CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB80u;
label_12cb80:
    // 0x12cb80: 0xc6450330  lwc1        $f5, 0x330($s2)
    ctx->pc = 0x12cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12cb84:
    // 0x12cb84: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x12cb84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12cb88:
    // 0x12cb88: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_12cb8c:
    // 0x12cb8c: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x12cb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
label_12cb90:
    // 0x12cb90: 0xc644032c  lwc1        $f4, 0x32C($s2)
    ctx->pc = 0x12cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12cb94:
    // 0x12cb94: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x12cb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_12cb98:
    // 0x12cb98: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12cb98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_12cb9c:
    // 0x12cb9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12cb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12cba0:
    // 0x12cba0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_12cba4:
    // 0x12cba4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12cba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12cba8:
    // 0x12cba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12cbac:
    // 0x12cbac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x12cbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_12cbb0:
    // 0x12cbb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12cbb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12cbb4:
    // 0x12cbb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12cbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12cbb8:
    // 0x12cbb8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x12cbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_12cbbc:
    // 0x12cbbc: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x12cbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_12cbc0:
    // 0x12cbc0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12cbc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12cbc4:
    // 0x12cbc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12cbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12cbc8:
    // 0x12cbc8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x12cbc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_12cbcc:
    // 0x12cbcc: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x12cbccu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
label_12cbd0:
    // 0x12cbd0: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x12cbd0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
label_12cbd4:
    // 0x12cbd4: 0x46002880  add.s       $f2, $f5, $f0
    ctx->pc = 0x12cbd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_12cbd8:
    // 0x12cbd8: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x12cbd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12cbdc:
    // 0x12cbdc: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x12cbdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_12cbe0:
    // 0x12cbe0: 0xde420468  ld          $v0, 0x468($s2)
    ctx->pc = 0x12cbe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 1128)));
label_12cbe4:
    // 0x12cbe4: 0xc6540340  lwc1        $f20, 0x340($s2)
    ctx->pc = 0x12cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12cbe8:
    // 0x12cbe8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12cbe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12cbec:
    // 0x12cbec: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12cbecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12cbf0:
    // 0x12cbf0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12cbf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12cbf4:
    // 0x12cbf4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12cbf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12cbf8:
    // 0x12cbf8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x12cbf8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_12cbfc:
    // 0x12cbfc: 0xc655033c  lwc1        $f21, 0x33C($s2)
    ctx->pc = 0x12cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12cc00:
    // 0x12cc00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x12cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_12cc04:
    // 0x12cc04: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x12cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
label_12cc08:
    // 0x12cc08: 0x4485b000  mtc1        $a1, $f22
    ctx->pc = 0x12cc08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_12cc0c:
    // 0x12cc0c: 0xe6420340  swc1        $f2, 0x340($s2)
    ctx->pc = 0x12cc0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 832), bits); }
label_12cc10:
    // 0x12cc10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12cc14:
    if (ctx->pc == 0x12CC14u) {
        ctx->pc = 0x12CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC10u;
        // 0x12cc14: 0xe640033c  swc1        $f0, 0x33C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 828), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC18u;
        goto label_12cc18;
    }
    ctx->pc = 0x12CC10u;
    {
        const bool branch_taken_0x12cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC10u;
        // 0x12cc14: 0xe640033c  swc1        $f0, 0x33C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 828), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc10) {
            ctx->pc = 0x12CC20u;
            goto label_12cc20;
        }
    }
    ctx->pc = 0x12CC18u;
label_12cc18:
    // 0x12cc18: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x12cc18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_12cc1c:
    // 0x12cc1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x12cc1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_12cc20:
    // 0x12cc20: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_12cc24:
    if (ctx->pc == 0x12CC24u) {
        ctx->pc = 0x12CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC20u;
        // 0x12cc24: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC28u;
        goto label_12cc28;
    }
    ctx->pc = 0x12CC20u;
    {
        const bool branch_taken_0x12cc20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc20) {
            ctx->pc = 0x12CC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CC20u;
            // 0x12cc24: 0x96430444  lhu         $v1, 0x444($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CC5Cu;
            goto label_12cc5c;
        }
    }
    ctx->pc = 0x12CC28u;
label_12cc28:
    // 0x12cc28: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x12cc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_12cc2c:
    // 0x12cc2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12cc2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12cc30:
    // 0x12cc30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12cc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12cc34:
    // 0x12cc34: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x12cc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_12cc38:
    // 0x12cc38: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12cc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12cc3c:
    // 0x12cc3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12cc40:
    // 0x12cc40: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x12cc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_12cc44:
    // 0x12cc44: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x12cc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_12cc48:
    // 0x12cc48: 0xe6400334  swc1        $f0, 0x334($s2)
    ctx->pc = 0x12cc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 820), bits); }
label_12cc4c:
    // 0x12cc4c: 0xe6410338  swc1        $f1, 0x338($s2)
    ctx->pc = 0x12cc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 824), bits); }
label_12cc50:
    // 0x12cc50: 0xe6400340  swc1        $f0, 0x340($s2)
    ctx->pc = 0x12cc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 832), bits); }
label_12cc54:
    // 0x12cc54: 0xe641033c  swc1        $f1, 0x33C($s2)
    ctx->pc = 0x12cc54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 828), bits); }
label_12cc58:
    // 0x12cc58: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12cc58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12cc5c:
    // 0x12cc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cc60:
    // 0x12cc60: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
label_12cc64:
    if (ctx->pc == 0x12CC64u) {
        ctx->pc = 0x12CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC60u;
        // 0x12cc64: 0xc6410340  lwc1        $f1, 0x340($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC68u;
        goto label_12cc68;
    }
    ctx->pc = 0x12CC60u;
    {
        const bool branch_taken_0x12cc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12cc60) {
            ctx->pc = 0x12CC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CC60u;
            // 0x12cc64: 0xc6410340  lwc1        $f1, 0x340($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD1Cu;
            goto label_12cd1c;
        }
    }
    ctx->pc = 0x12CC68u;
label_12cc68:
    // 0x12cc68: 0x8e430314  lw          $v1, 0x314($s2)
    ctx->pc = 0x12cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12cc6c:
    // 0x12cc6c: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x12cc6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_12cc70:
    // 0x12cc70: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12cc70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12cc74:
    // 0x12cc74: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_12cc78:
    if (ctx->pc == 0x12CC78u) {
        ctx->pc = 0x12CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC74u;
        // 0x12cc78: 0xc6410340  lwc1        $f1, 0x340($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC7Cu;
        goto label_12cc7c;
    }
    ctx->pc = 0x12CC74u;
    {
        const bool branch_taken_0x12cc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc74) {
            ctx->pc = 0x12CC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CC74u;
            // 0x12cc78: 0xc6410340  lwc1        $f1, 0x340($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD1Cu;
            goto label_12cd1c;
        }
    }
    ctx->pc = 0x12CC7Cu;
label_12cc7c:
    // 0x12cc7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12cc80:
    // 0x12cc80: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_12cc84:
    // 0x12cc84: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_12cc88:
    // 0x12cc88: 0x40f809  jalr        $v0
label_12cc8c:
    if (ctx->pc == 0x12CC8Cu) {
        ctx->pc = 0x12CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC88u;
        // 0x12cc8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC90u;
        goto label_12cc90;
    }
    ctx->pc = 0x12CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CC90u);
        ctx->pc = 0x12CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC88u;
        // 0x12cc8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CC88u, 0x12CC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12CC90u;
label_12cc90:
    // 0x12cc90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12cc94:
    // 0x12cc94: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_12cc98:
    // 0x12cc98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12cc9c:
    // 0x12cc9c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_12cca0:
    if (ctx->pc == 0x12CCA0u) {
        ctx->pc = 0x12CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC9Cu;
        // 0x12cca0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CCA4u;
        goto label_12cca4;
    }
    ctx->pc = 0x12CC9Cu;
    {
        const bool branch_taken_0x12cc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC9Cu;
        // 0x12cca0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc9c) {
            ctx->pc = 0x12CD18u;
            goto label_12cd18;
        }
    }
    ctx->pc = 0x12CCA4u;
label_12cca4:
    // 0x12cca4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12cca8:
    // 0x12cca8: 0x2610b250  addiu       $s0, $s0, -0x4DB0
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947408));
label_12ccac:
    // 0x12ccac: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_12ccb0:
    // 0x12ccb0: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_12ccb4:
    // 0x12ccb4: 0x40f809  jalr        $v0
label_12ccb8:
    if (ctx->pc == 0x12CCB8u) {
        ctx->pc = 0x12CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCB4u;
        // 0x12ccb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CCBCu;
        goto label_12ccbc;
    }
    ctx->pc = 0x12CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CCBCu);
        ctx->pc = 0x12CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCB4u;
        // 0x12ccb8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CCB4u, 0x12CCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12CCBCu;
label_12ccbc:
    // 0x12ccbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12ccc0:
    // 0x12ccc0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x12ccc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12ccc4:
    // 0x12ccc4: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_12ccc8:
    if (ctx->pc == 0x12CCC8u) {
        ctx->pc = 0x12CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCC4u;
        // 0x12ccc8: 0xc6410340  lwc1        $f1, 0x340($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CCCCu;
        goto label_12cccc;
    }
    ctx->pc = 0x12CCC4u;
    {
        const bool branch_taken_0x12ccc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ccc4) {
            ctx->pc = 0x12CCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CCC4u;
            // 0x12ccc8: 0xc6410340  lwc1        $f1, 0x340($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD1Cu;
            goto label_12cd1c;
        }
    }
    ctx->pc = 0x12CCCCu;
label_12cccc:
    // 0x12cccc: 0xc6400330  lwc1        $f0, 0x330($s2)
    ctx->pc = 0x12ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ccd0:
    // 0x12ccd0: 0xc6420304  lwc1        $f2, 0x304($s2)
    ctx->pc = 0x12ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ccd4:
    // 0x12ccd4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_12ccd8:
    // 0x12ccd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12ccd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12ccdc:
    // 0x12ccdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12ccdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12cce0:
    // 0x12cce0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12cce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_12cce4:
    // 0x12cce4: 0xc641032c  lwc1        $f1, 0x32C($s2)
    ctx->pc = 0x12cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cce8:
    // 0x12cce8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_12ccec:
    // 0x12ccec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12ccecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12ccf0:
    // 0x12ccf0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12ccf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_12ccf4:
    // 0x12ccf4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12ccf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12ccf8:
    // 0x12ccf8: 0xc645033c  lwc1        $f5, 0x33C($s2)
    ctx->pc = 0x12ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12ccfc:
    // 0x12ccfc: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x12ccfcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_12cd00:
    // 0x12cd00: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x12cd00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_12cd04:
    // 0x12cd04: 0xe6400334  swc1        $f0, 0x334($s2)
    ctx->pc = 0x12cd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 820), bits); }
label_12cd08:
    // 0x12cd08: 0x46050868  max.s       $f1, $f1, $f5
    ctx->pc = 0x12cd08u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[5]);
label_12cd0c:
    // 0x12cd0c: 0xe6400340  swc1        $f0, 0x340($s2)
    ctx->pc = 0x12cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 832), bits); }
label_12cd10:
    // 0x12cd10: 0xe6410338  swc1        $f1, 0x338($s2)
    ctx->pc = 0x12cd10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 824), bits); }
label_12cd14:
    // 0x12cd14: 0xe641033c  swc1        $f1, 0x33C($s2)
    ctx->pc = 0x12cd14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 828), bits); }
label_12cd18:
    // 0x12cd18: 0xc6410340  lwc1        $f1, 0x340($s2)
    ctx->pc = 0x12cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cd1c:
    // 0x12cd1c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12cd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12cd20:
    // 0x12cd20: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12cd20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12cd24:
    // 0x12cd24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12cd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12cd28:
    // 0x12cd28: 0x0  nop
    ctx->pc = 0x12cd28u;
    // NOP
label_12cd2c:
    // 0x12cd2c: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x12cd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_12cd30:
    // 0x12cd30: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12cd30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12cd34:
    // 0x12cd34: 0x0  nop
    ctx->pc = 0x12cd34u;
    // NOP
label_12cd38:
    // 0x12cd38: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_12cd3c:
    if (ctx->pc == 0x12CD3Cu) {
        ctx->pc = 0x12CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD38u;
        // 0x12cd3c: 0xc641033c  lwc1        $f1, 0x33C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CD40u;
        goto label_12cd40;
    }
    ctx->pc = 0x12CD38u;
    {
        const bool branch_taken_0x12cd38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cd38) {
            ctx->pc = 0x12CD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CD38u;
            // 0x12cd3c: 0xc641033c  lwc1        $f1, 0x33C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD64u;
            goto label_12cd64;
        }
    }
    ctx->pc = 0x12CD40u;
label_12cd40:
    // 0x12cd40: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x12cd40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_12cd44:
    // 0x12cd44: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12cd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12cd48:
    // 0x12cd48: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12cd48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12cd4c:
    // 0x12cd4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cd4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12cd50:
    // 0x12cd50: 0x0  nop
    ctx->pc = 0x12cd50u;
    // NOP
label_12cd54:
    // 0x12cd54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12cd54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12cd58:
    // 0x12cd58: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x12cd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_12cd5c:
    // 0x12cd5c: 0xe6400340  swc1        $f0, 0x340($s2)
    ctx->pc = 0x12cd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 832), bits); }
label_12cd60:
    // 0x12cd60: 0xc641033c  lwc1        $f1, 0x33C($s2)
    ctx->pc = 0x12cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cd64:
    // 0x12cd64: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x12cd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_12cd68:
    // 0x12cd68: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x12cd68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12cd6c:
    // 0x12cd6c: 0x0  nop
    ctx->pc = 0x12cd6cu;
    // NOP
label_12cd70:
    // 0x12cd70: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_12cd74:
    if (ctx->pc == 0x12CD74u) {
        ctx->pc = 0x12CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD70u;
        // 0x12cd74: 0xc6410338  lwc1        $f1, 0x338($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CD78u;
        goto label_12cd78;
    }
    ctx->pc = 0x12CD70u;
    {
        const bool branch_taken_0x12cd70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cd70) {
            ctx->pc = 0x12CD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CD70u;
            // 0x12cd74: 0xc6410338  lwc1        $f1, 0x338($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD9Cu;
            goto label_12cd9c;
        }
    }
    ctx->pc = 0x12CD78u;
label_12cd78:
    // 0x12cd78: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x12cd78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_12cd7c:
    // 0x12cd7c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12cd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12cd80:
    // 0x12cd80: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12cd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12cd84:
    // 0x12cd84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12cd88:
    // 0x12cd88: 0x0  nop
    ctx->pc = 0x12cd88u;
    // NOP
label_12cd8c:
    // 0x12cd8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12cd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12cd90:
    // 0x12cd90: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x12cd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_12cd94:
    // 0x12cd94: 0xe640033c  swc1        $f0, 0x33C($s2)
    ctx->pc = 0x12cd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 828), bits); }
label_12cd98:
    // 0x12cd98: 0xc6410338  lwc1        $f1, 0x338($s2)
    ctx->pc = 0x12cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cd9c:
    // 0x12cd9c: 0xc6420330  lwc1        $f2, 0x330($s2)
    ctx->pc = 0x12cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12cda0:
    // 0x12cda0: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x12cda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_12cda4:
    // 0x12cda4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12cda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12cda8:
    // 0x12cda8: 0x0  nop
    ctx->pc = 0x12cda8u;
    // NOP
label_12cdac:
    // 0x12cdac: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_12cdb0:
    if (ctx->pc == 0x12CDB0u) {
        ctx->pc = 0x12CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDACu;
        // 0x12cdb0: 0xc6410334  lwc1        $f1, 0x334($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CDB4u;
        goto label_12cdb4;
    }
    ctx->pc = 0x12CDACu;
    {
        const bool branch_taken_0x12cdac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cdac) {
            ctx->pc = 0x12CDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CDACu;
            // 0x12cdb0: 0xc6410334  lwc1        $f1, 0x334($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CDD8u;
            goto label_12cdd8;
        }
    }
    ctx->pc = 0x12CDB4u;
label_12cdb4:
    // 0x12cdb4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x12cdb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_12cdb8:
    // 0x12cdb8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12cdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12cdbc:
    // 0x12cdbc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12cdbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12cdc0:
    // 0x12cdc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12cdc4:
    // 0x12cdc4: 0x0  nop
    ctx->pc = 0x12cdc4u;
    // NOP
label_12cdc8:
    // 0x12cdc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12cdc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12cdcc:
    // 0x12cdcc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12cdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_12cdd0:
    // 0x12cdd0: 0xe6400338  swc1        $f0, 0x338($s2)
    ctx->pc = 0x12cdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 824), bits); }
label_12cdd4:
    // 0x12cdd4: 0xc6410334  lwc1        $f1, 0x334($s2)
    ctx->pc = 0x12cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cdd8:
    // 0x12cdd8: 0xc642032c  lwc1        $f2, 0x32C($s2)
    ctx->pc = 0x12cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12cddc:
    // 0x12cddc: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x12cddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_12cde0:
    // 0x12cde0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12cde0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12cde4:
    // 0x12cde4: 0x0  nop
    ctx->pc = 0x12cde4u;
    // NOP
label_12cde8:
    // 0x12cde8: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_12cdec:
    if (ctx->pc == 0x12CDECu) {
        ctx->pc = 0x12CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDE8u;
        // 0x12cdec: 0xc6400340  lwc1        $f0, 0x340($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CDF0u;
        goto label_12cdf0;
    }
    ctx->pc = 0x12CDE8u;
    {
        const bool branch_taken_0x12cde8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cde8) {
            ctx->pc = 0x12CDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CDE8u;
            // 0x12cdec: 0xc6400340  lwc1        $f0, 0x340($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CE14u;
            goto label_12ce14;
        }
    }
    ctx->pc = 0x12CDF0u;
label_12cdf0:
    // 0x12cdf0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x12cdf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_12cdf4:
    // 0x12cdf4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12cdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12cdf8:
    // 0x12cdf8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12cdf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12cdfc:
    // 0x12cdfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cdfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12ce00:
    // 0x12ce00: 0x0  nop
    ctx->pc = 0x12ce00u;
    // NOP
label_12ce04:
    // 0x12ce04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12ce04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12ce08:
    // 0x12ce08: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12ce08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_12ce0c:
    // 0x12ce0c: 0xe6400334  swc1        $f0, 0x334($s2)
    ctx->pc = 0x12ce0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 820), bits); }
label_12ce10:
    // 0x12ce10: 0xc6400340  lwc1        $f0, 0x340($s2)
    ctx->pc = 0x12ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ce14:
    // 0x12ce14: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12ce14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12ce18:
    // 0x12ce18: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x12ce18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ce1c:
    // 0x12ce1c: 0x0  nop
    ctx->pc = 0x12ce1cu;
    // NOP
label_12ce20:
    // 0x12ce20: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12ce24:
    if (ctx->pc == 0x12CE24u) {
        ctx->pc = 0x12CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE20u;
        // 0x12ce24: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CE28u;
        goto label_12ce28;
    }
    ctx->pc = 0x12CE20u;
    {
        const bool branch_taken_0x12ce20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE20u;
        // 0x12ce24: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce20) {
            ctx->pc = 0x12CE64u;
            goto label_12ce64;
        }
    }
    ctx->pc = 0x12CE28u;
label_12ce28:
    // 0x12ce28: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x12ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12ce2c:
    // 0x12ce2c: 0xc136afa  jal         func_4DABE8
label_12ce30:
    if (ctx->pc == 0x12CE30u) {
        ctx->pc = 0x12CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE2Cu;
        // 0x12ce30: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CE34u;
        goto label_12ce34;
    }
    ctx->pc = 0x12CE2Cu;
    SET_GPR_U32(ctx, 31, 0x12CE34u);
    ctx->pc = 0x12CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CE2Cu;
    // 0x12ce30: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12CE2Cu, 0x12CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE34u;
label_12ce34:
    // 0x12ce34: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x12ce34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12ce38:
    // 0x12ce38: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x12ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_12ce3c:
    // 0x12ce3c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12ce3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12ce40:
    // 0x12ce40: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x12ce40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12ce44:
    // 0x12ce44: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12ce44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12ce48:
    // 0x12ce48: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x12ce48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12ce4c:
    // 0x12ce4c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12ce4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12ce50:
    // 0x12ce50: 0x4a0003bf  vwaitq
    ctx->pc = 0x12ce50u;
    // VWAITQ (Q already resolved in this runtime)
label_12ce54:
    // 0x12ce54: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x12ce54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12ce58:
    // 0x12ce58: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12ce58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12ce5c:
    // 0x12ce5c: 0x10000014  b           . + 4 + (0x14 << 2)
label_12ce60:
    if (ctx->pc == 0x12CE60u) {
        ctx->pc = 0x12CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE5Cu;
        // 0x12ce60: 0xc64c0340  lwc1        $f12, 0x340($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CE64u;
        goto label_12ce64;
    }
    ctx->pc = 0x12CE5Cu;
    {
        const bool branch_taken_0x12ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE5Cu;
        // 0x12ce60: 0xc64c0340  lwc1        $f12, 0x340($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce5c) {
            ctx->pc = 0x12CEB0u;
            goto label_12ceb0;
        }
    }
    ctx->pc = 0x12CE64u;
label_12ce64:
    // 0x12ce64: 0xc640033c  lwc1        $f0, 0x33C($s2)
    ctx->pc = 0x12ce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ce68:
    // 0x12ce68: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12ce68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12ce6c:
    // 0x12ce6c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x12ce6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ce70:
    // 0x12ce70: 0x0  nop
    ctx->pc = 0x12ce70u;
    // NOP
label_12ce74:
    // 0x12ce74: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_12ce78:
    if (ctx->pc == 0x12CE78u) {
        ctx->pc = 0x12CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE74u;
        // 0x12ce78: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CE7Cu;
        goto label_12ce7c;
    }
    ctx->pc = 0x12CE74u;
    {
        const bool branch_taken_0x12ce74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE74u;
        // 0x12ce78: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce74) {
            ctx->pc = 0x12CEE8u;
            goto label_12cee8;
        }
    }
    ctx->pc = 0x12CE7Cu;
label_12ce7c:
    // 0x12ce7c: 0xc136afa  jal         func_4DABE8
label_12ce80:
    if (ctx->pc == 0x12CE80u) {
        ctx->pc = 0x12CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE7Cu;
        // 0x12ce80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CE84u;
        goto label_12ce84;
    }
    ctx->pc = 0x12CE7Cu;
    SET_GPR_U32(ctx, 31, 0x12CE84u);
    ctx->pc = 0x12CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CE7Cu;
    // 0x12ce80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12CE7Cu, 0x12CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE84u;
label_12ce84:
    // 0x12ce84: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x12ce84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12ce88:
    // 0x12ce88: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_12ce8c:
    // 0x12ce8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12ce8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12ce90:
    // 0x12ce90: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x12ce90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12ce94:
    // 0x12ce94: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12ce94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12ce98:
    // 0x12ce98: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x12ce98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12ce9c:
    // 0x12ce9c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12ce9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12cea0:
    // 0x12cea0: 0x4a0003bf  vwaitq
    ctx->pc = 0x12cea0u;
    // VWAITQ (Q already resolved in this runtime)
label_12cea4:
    // 0x12cea4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x12cea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12cea8:
    // 0x12cea8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12cea8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12ceac:
    // 0x12ceac: 0xc64c033c  lwc1        $f12, 0x33C($s2)
    ctx->pc = 0x12ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12ceb0:
    // 0x12ceb0: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x12ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_12ceb4:
    // 0x12ceb4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x12ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_12ceb8:
    // 0x12ceb8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x12ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_12cebc:
    // 0x12cebc: 0xc136b24  jal         func_4DAC90
label_12cec0:
    if (ctx->pc == 0x12CEC0u) {
        ctx->pc = 0x12CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEBCu;
        // 0x12cec0: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CEC4u;
        goto label_12cec4;
    }
    ctx->pc = 0x12CEBCu;
    SET_GPR_U32(ctx, 31, 0x12CEC4u);
    ctx->pc = 0x12CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CEBCu;
    // 0x12cec0: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12CEBCu, 0x12CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEC4u;
label_12cec4:
    // 0x12cec4: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x12cec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12cec8:
    // 0x12cec8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x12cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_12cecc:
    // 0x12cecc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12ceccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12ced0:
    // 0x12ced0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x12ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_12ced4:
    // 0x12ced4: 0xc136b18  jal         func_4DAC60
label_12ced8:
    if (ctx->pc == 0x12CED8u) {
        ctx->pc = 0x12CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CED4u;
        // 0x12ced8: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CEDCu;
        goto label_12cedc;
    }
    ctx->pc = 0x12CED4u;
    SET_GPR_U32(ctx, 31, 0x12CEDCu);
    ctx->pc = 0x12CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CED4u;
    // 0x12ced8: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12CED4u, 0x12CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEDCu;
label_12cedc:
    // 0x12cedc: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x12cedcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12cee0:
    // 0x12cee0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x12cee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_12cee4:
    // 0x12cee4: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x12cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_12cee8:
    // 0x12cee8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12ceec:
    // 0x12ceec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x12ceecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12cef0:
    // 0x12cef0: 0x2447b250  addiu       $a3, $v0, -0x4DB0
    ctx->pc = 0x12cef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
label_12cef4:
    // 0x12cef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12cef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12cef8:
    // 0x12cef8: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x12cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_12cefc:
    // 0x12cefc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x12cefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_12cf00:
    // 0x12cf00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12cf04:
    // 0x12cf04: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x12cf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_12cf08:
    // 0x12cf08: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x12cf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12cf0c:
    // 0x12cf0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_12cf10:
    if (ctx->pc == 0x12CF10u) {
        ctx->pc = 0x12CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF0Cu;
        // 0x12cf10: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CF14u;
        goto label_12cf14;
    }
    ctx->pc = 0x12CF0Cu;
    {
        const bool branch_taken_0x12cf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF0Cu;
        // 0x12cf10: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf0c) {
            ctx->pc = 0x12CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cef8;
        }
    }
    ctx->pc = 0x12CF14u;
label_12cf14:
    // 0x12cf14: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x12cf14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12cf18:
    // 0x12cf18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cf1c:
    // 0x12cf1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12cf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12cf20:
    // 0x12cf20: 0xc04bb14  jal         func_12EC50
label_12cf24:
    if (ctx->pc == 0x12CF24u) {
        ctx->pc = 0x12CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF20u;
        // 0x12cf24: 0x7e420260  sq          $v0, 0x260($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 608), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CF28u;
        goto label_12cf28;
    }
    ctx->pc = 0x12CF20u;
    SET_GPR_U32(ctx, 31, 0x12CF28u);
    ctx->pc = 0x12CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF20u;
    // 0x12cf24: 0x7e420260  sq          $v0, 0x260($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 608), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC50u, 0x12CF20u, 0x12CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF28u;
label_12cf28:
    // 0x12cf28: 0x8fa601dc  lw          $a2, 0x1DC($sp)
    ctx->pc = 0x12cf28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12cf2c:
    // 0x12cf2c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x12cf2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_12cf30:
    // 0x12cf30: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_12cf34:
    // 0x12cf34: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x12cf34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_12cf38:
    // 0x12cf38: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_12cf3c:
    // 0x12cf3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cf40:
    // 0x12cf40: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x12cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_12cf44:
    // 0x12cf44: 0xc7ae01b0  lwc1        $f14, 0x1B0($sp)
    ctx->pc = 0x12cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_12cf48:
    // 0x12cf48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12cf48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12cf4c:
    // 0x12cf4c: 0x8fa701c4  lw          $a3, 0x1C4($sp)
    ctx->pc = 0x12cf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_12cf50:
    // 0x12cf50: 0x8fa801f0  lw          $t0, 0x1F0($sp)
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_12cf54:
    // 0x12cf54: 0x8fa901e8  lw          $t1, 0x1E8($sp)
    ctx->pc = 0x12cf54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12cf58:
    // 0x12cf58: 0x8faa01e4  lw          $t2, 0x1E4($sp)
    ctx->pc = 0x12cf58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_12cf5c:
    // 0x12cf5c: 0x8fab01e0  lw          $t3, 0x1E0($sp)
    ctx->pc = 0x12cf5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12cf60:
    // 0x12cf60: 0xc04c264  jal         func_130990
label_12cf64:
    if (ctx->pc == 0x12CF64u) {
        ctx->pc = 0x12CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF60u;
        // 0x12cf64: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CF68u;
        goto label_12cf68;
    }
    ctx->pc = 0x12CF60u;
    SET_GPR_U32(ctx, 31, 0x12CF68u);
    ctx->pc = 0x12CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF60u;
    // 0x12cf64: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130990u, 0x12CF60u, 0x12CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF68u;
label_12cf68:
    // 0x12cf68: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x12cf68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_12cf6c:
    // 0x12cf6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12cf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12cf70:
    // 0x12cf70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12cf74:
    // 0x12cf74: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x12cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_12cf78:
    // 0x12cf78: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x12cf78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_12cf7c:
    // 0x12cf7c: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x12cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_12cf80:
    // 0x12cf80: 0x40f809  jalr        $v0
label_12cf84:
    if (ctx->pc == 0x12CF84u) {
        ctx->pc = 0x12CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF80u;
        // 0x12cf84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CF88u;
        goto label_12cf88;
    }
    ctx->pc = 0x12CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CF88u);
        ctx->pc = 0x12CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF80u;
        // 0x12cf84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CF80u, 0x12CF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12CF88u;
label_12cf88:
    // 0x12cf88: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x12cf88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_12cf8c:
    // 0x12cf8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cf90:
    // 0x12cf90: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x12cf90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_12cf94:
    // 0x12cf94: 0x8fa501f4  lw          $a1, 0x1F4($sp)
    ctx->pc = 0x12cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12cf98:
    // 0x12cf98: 0x7e4301e0  sq          $v1, 0x1E0($s2)
    ctx->pc = 0x12cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 3));
label_12cf9c:
    // 0x12cf9c: 0xc0484a6  jal         func_121298
label_12cfa0:
    if (ctx->pc == 0x12CFA0u) {
        ctx->pc = 0x12CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF9Cu;
        // 0x12cfa0: 0x7e4201f0  sq          $v0, 0x1F0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CFA4u;
        goto label_12cfa4;
    }
    ctx->pc = 0x12CF9Cu;
    SET_GPR_U32(ctx, 31, 0x12CFA4u);
    ctx->pc = 0x12CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF9Cu;
    // 0x12cfa0: 0x7e4201f0  sq          $v0, 0x1F0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x12CF9Cu, 0x12CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFA4u;
label_12cfa4:
    // 0x12cfa4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12cfa8:
    // 0x12cfa8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x12cfa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_12cfac:
    // 0x12cfac: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x12cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_12cfb0:
    // 0x12cfb0: 0x40f809  jalr        $v0
label_12cfb4:
    if (ctx->pc == 0x12CFB4u) {
        ctx->pc = 0x12CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFB0u;
        // 0x12cfb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CFB8u;
        goto label_12cfb8;
    }
    ctx->pc = 0x12CFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CFB8u);
        ctx->pc = 0x12CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFB0u;
        // 0x12cfb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CFB0u, 0x12CFB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12CFB8u;
label_12cfb8:
    // 0x12cfb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12cfb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12cfbc:
    // 0x12cfbc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12cfc0:
    // 0x12cfc0: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x12cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
label_12cfc4:
    // 0x12cfc4: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x12cfc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_12cfc8:
    // 0x12cfc8: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x12cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_12cfcc:
    // 0x12cfcc: 0x40f809  jalr        $v0
label_12cfd0:
    if (ctx->pc == 0x12CFD0u) {
        ctx->pc = 0x12CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFCCu;
        // 0x12cfd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CFD4u;
        goto label_12cfd4;
    }
    ctx->pc = 0x12CFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12CFD4u);
        ctx->pc = 0x12CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFCCu;
        // 0x12cfd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CFCCu, 0x12CFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12CFD4u;
label_12cfd4:
    // 0x12cfd4: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x12cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12cfd8:
    // 0x12cfd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cfdc:
    // 0x12cfdc: 0xc0cdc0a  jal         func_337028
label_12cfe0:
    if (ctx->pc == 0x12CFE0u) {
        ctx->pc = 0x12CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFDCu;
        // 0x12cfe0: 0x8fa401fc  lw          $a0, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CFE4u;
        goto label_12cfe4;
    }
    ctx->pc = 0x12CFDCu;
    SET_GPR_U32(ctx, 31, 0x12CFE4u);
    ctx->pc = 0x12CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFDCu;
    // 0x12cfe0: 0x8fa401fc  lw          $a0, 0x1FC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x12CFDCu, 0x12CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFE4u;
label_12cfe4:
    // 0x12cfe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12cfe8:
    if (ctx->pc == 0x12CFE8u) {
        ctx->pc = 0x12CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFE4u;
        // 0x12cfe8: 0x8fa501fc  lw          $a1, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CFECu;
        goto label_12cfec;
    }
    ctx->pc = 0x12CFE4u;
    {
        const bool branch_taken_0x12cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFE4u;
        // 0x12cfe8: 0x8fa501fc  lw          $a1, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfe4) {
            ctx->pc = 0x12CFFCu;
            goto label_12cffc;
        }
    }
    ctx->pc = 0x12CFECu;
label_12cfec:
    // 0x12cfec: 0xc0cd972  jal         func_3365C8
label_12cff0:
    if (ctx->pc == 0x12CFF0u) {
        ctx->pc = 0x12CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFECu;
        // 0x12cff0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CFF4u;
        goto label_12cff4;
    }
    ctx->pc = 0x12CFECu;
    SET_GPR_U32(ctx, 31, 0x12CFF4u);
    ctx->pc = 0x12CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFECu;
    // 0x12cff0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x12CFECu, 0x12CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFF4u;
label_12cff4:
    // 0x12cff4: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x12cff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_12cff8:
    // 0x12cff8: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x12cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_12cffc:
    // 0x12cffc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12d000:
    // 0x12d000: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12d000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12d004:
    // 0x12d004: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x12d004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_12d008:
    // 0x12d008: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x12d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_12d00c:
    // 0x12d00c: 0x40f809  jalr        $v0
label_12d010:
    if (ctx->pc == 0x12D010u) {
        ctx->pc = 0x12D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D00Cu;
        // 0x12d010: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D014u;
        goto label_12d014;
    }
    ctx->pc = 0x12D00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D014u);
        ctx->pc = 0x12D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D00Cu;
        // 0x12d010: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D00Cu, 0x12D014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D014u;
label_12d014:
    // 0x12d014: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12d014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12d018:
    // 0x12d018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d01c:
    // 0x12d01c: 0xc04ab16  jal         func_12AC58
label_12d020:
    if (ctx->pc == 0x12D020u) {
        ctx->pc = 0x12D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D01Cu;
        // 0x12d020: 0x7e4302f0  sq          $v1, 0x2F0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 752), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D024u;
        goto label_12d024;
    }
    ctx->pc = 0x12D01Cu;
    SET_GPR_U32(ctx, 31, 0x12D024u);
    ctx->pc = 0x12D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D01Cu;
    // 0x12d020: 0x7e4302f0  sq          $v1, 0x2F0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 752), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC58u, 0x12D01Cu, 0x12D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D024u;
label_12d024:
    // 0x12d024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d028:
    // 0x12d028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d02c:
    // 0x12d02c: 0xc048314  jal         func_120C50
label_12d030:
    if (ctx->pc == 0x12D030u) {
        ctx->pc = 0x12D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D02Cu;
        // 0x12d030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D034u;
        goto label_12d034;
    }
    ctx->pc = 0x12D02Cu;
    SET_GPR_U32(ctx, 31, 0x12D034u);
    ctx->pc = 0x12D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D02Cu;
    // 0x12d030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x12D02Cu, 0x12D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D034u;
label_12d034:
    // 0x12d034: 0x8fa501cc  lw          $a1, 0x1CC($sp)
    ctx->pc = 0x12d034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_12d038:
    // 0x12d038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d03c:
    // 0x12d03c: 0xc049eb2  jal         func_127AC8
label_12d040:
    if (ctx->pc == 0x12D040u) {
        ctx->pc = 0x12D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D03Cu;
        // 0x12d040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D044u;
        goto label_12d044;
    }
    ctx->pc = 0x12D03Cu;
    SET_GPR_U32(ctx, 31, 0x12D044u);
    ctx->pc = 0x12D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D03Cu;
    // 0x12d040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127AC8u, 0x12D03Cu, 0x12D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D044u;
label_12d044:
    // 0x12d044: 0xc641040c  lwc1        $f1, 0x40C($s2)
    ctx->pc = 0x12d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12d048:
    // 0x12d048: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x12d048u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12d04c:
    // 0x12d04c: 0x0  nop
    ctx->pc = 0x12d04cu;
    // NOP
label_12d050:
    // 0x12d050: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_12d054:
    if (ctx->pc == 0x12D054u) {
        ctx->pc = 0x12D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D050u;
        // 0x12d054: 0xc640040c  lwc1        $f0, 0x40C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D058u;
        goto label_12d058;
    }
    ctx->pc = 0x12D050u;
    {
        const bool branch_taken_0x12d050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d050) {
            ctx->pc = 0x12D054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D050u;
            // 0x12d054: 0xc640040c  lwc1        $f0, 0x40C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D06Cu;
            goto label_12d06c;
        }
    }
    ctx->pc = 0x12D058u;
label_12d058:
    // 0x12d058: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d05c:
    // 0x12d05c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12d05cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12d060:
    // 0x12d060: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x12d060u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
label_12d064:
    // 0x12d064: 0xe640040c  swc1        $f0, 0x40C($s2)
    ctx->pc = 0x12d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1036), bits); }
label_12d068:
    // 0x12d068: 0xc640040c  lwc1        $f0, 0x40C($s2)
    ctx->pc = 0x12d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d06c:
    // 0x12d06c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x12d06cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12d070:
    // 0x12d070: 0x0  nop
    ctx->pc = 0x12d070u;
    // NOP
label_12d074:
    // 0x12d074: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_12d078:
    if (ctx->pc == 0x12D078u) {
        ctx->pc = 0x12D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D074u;
        // 0x12d078: 0xc6410410  lwc1        $f1, 0x410($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D07Cu;
        goto label_12d07c;
    }
    ctx->pc = 0x12D074u;
    {
        const bool branch_taken_0x12d074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d074) {
            ctx->pc = 0x12D078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D074u;
            // 0x12d078: 0xc6410410  lwc1        $f1, 0x410($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D0CCu;
            goto label_12d0cc;
        }
    }
    ctx->pc = 0x12D07Cu;
label_12d07c:
    // 0x12d07c: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x12d07cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_12d080:
    // 0x12d080: 0x8e42047c  lw          $v0, 0x47C($s2)
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1148)));
label_12d084:
    // 0x12d084: 0xc4e08ae0  lwc1        $f0, -0x7520($a3)
    ctx->pc = 0x12d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d088:
    // 0x12d088: 0xa2400475  sb          $zero, 0x475($s2)
    ctx->pc = 0x12d088u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1141), (uint8_t)GPR_U32(ctx, 0));
label_12d08c:
    // 0x12d08c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_12d090:
    if (ctx->pc == 0x12D090u) {
        ctx->pc = 0x12D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D08Cu;
        // 0x12d090: 0xe640043c  swc1        $f0, 0x43C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D094u;
        goto label_12d094;
    }
    ctx->pc = 0x12D08Cu;
    {
        const bool branch_taken_0x12d08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D08Cu;
        // 0x12d090: 0xe640043c  swc1        $f0, 0x43C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d08c) {
            ctx->pc = 0x12D0C8u;
            goto label_12d0c8;
        }
    }
    ctx->pc = 0x12D094u;
label_12d094:
    // 0x12d094: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12d098:
    // 0x12d098: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x12d098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_12d09c:
    // 0x12d09c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_12d0a0:
    // 0x12d0a0: 0x40f809  jalr        $v0
label_12d0a4:
    if (ctx->pc == 0x12D0A4u) {
        ctx->pc = 0x12D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0A0u;
        // 0x12d0a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D0A8u;
        goto label_12d0a8;
    }
    ctx->pc = 0x12D0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D0A8u);
        ctx->pc = 0x12D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0A0u;
        // 0x12d0a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D0A0u, 0x12D0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D0A8u;
label_12d0a8:
    // 0x12d0a8: 0x8e44047c  lw          $a0, 0x47C($s2)
    ctx->pc = 0x12d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1148)));
label_12d0ac:
    // 0x12d0ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12d0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d0b0:
    // 0x12d0b0: 0xc64c03c0  lwc1        $f12, 0x3C0($s2)
    ctx->pc = 0x12d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12d0b4:
    // 0x12d0b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d0b8:
    // 0x12d0b8: 0xc047b82  jal         func_11EE08
label_12d0bc:
    if (ctx->pc == 0x12D0BCu) {
        ctx->pc = 0x12D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0B8u;
        // 0x12d0bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D0C0u;
        goto label_12d0c0;
    }
    ctx->pc = 0x12D0B8u;
    SET_GPR_U32(ctx, 31, 0x12D0C0u);
    ctx->pc = 0x12D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D0B8u;
    // 0x12d0bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x12D0B8u, 0x12D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0C0u;
label_12d0c0:
    // 0x12d0c0: 0xe65403c0  swc1        $f20, 0x3C0($s2)
    ctx->pc = 0x12d0c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 960), bits); }
label_12d0c4:
    // 0x12d0c4: 0xae40047c  sw          $zero, 0x47C($s2)
    ctx->pc = 0x12d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1148), GPR_U32(ctx, 0));
label_12d0c8:
    // 0x12d0c8: 0xc6410410  lwc1        $f1, 0x410($s2)
    ctx->pc = 0x12d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12d0cc:
    // 0x12d0cc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x12d0ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_12d0d0:
    // 0x12d0d0: 0x0  nop
    ctx->pc = 0x12d0d0u;
    // NOP
label_12d0d4:
    // 0x12d0d4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x12d0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12d0d8:
    // 0x12d0d8: 0x0  nop
    ctx->pc = 0x12d0d8u;
    // NOP
label_12d0dc:
    // 0x12d0dc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12d0e0:
    if (ctx->pc == 0x12D0E0u) {
        ctx->pc = 0x12D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0DCu;
        // 0x12d0e0: 0xc6410414  lwc1        $f1, 0x414($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D0E4u;
        goto label_12d0e4;
    }
    ctx->pc = 0x12D0DCu;
    {
        const bool branch_taken_0x12d0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d0dc) {
            ctx->pc = 0x12D0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D0DCu;
            // 0x12d0e0: 0xc6410414  lwc1        $f1, 0x414($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D0F8u;
            goto label_12d0f8;
        }
    }
    ctx->pc = 0x12D0E4u;
label_12d0e4:
    // 0x12d0e4: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d0e8:
    // 0x12d0e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12d0e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12d0ec:
    // 0x12d0ec: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x12d0ecu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
label_12d0f0:
    // 0x12d0f0: 0xe6400410  swc1        $f0, 0x410($s2)
    ctx->pc = 0x12d0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1040), bits); }
label_12d0f4:
    // 0x12d0f4: 0xc6410414  lwc1        $f1, 0x414($s2)
    ctx->pc = 0x12d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12d0f8:
    // 0x12d0f8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x12d0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12d0fc:
    // 0x12d0fc: 0x0  nop
    ctx->pc = 0x12d0fcu;
    // NOP
label_12d100:
    // 0x12d100: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12d104:
    if (ctx->pc == 0x12D104u) {
        ctx->pc = 0x12D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D100u;
        // 0x12d104: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D108u;
        goto label_12d108;
    }
    ctx->pc = 0x12D100u;
    {
        const bool branch_taken_0x12d100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d100) {
            ctx->pc = 0x12D104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D100u;
            // 0x12d104: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D11Cu;
            goto label_12d11c;
        }
    }
    ctx->pc = 0x12D108u;
label_12d108:
    // 0x12d108: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d10c:
    // 0x12d10c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12d10cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12d110:
    // 0x12d110: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x12d110u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
label_12d114:
    // 0x12d114: 0xe6400414  swc1        $f0, 0x414($s2)
    ctx->pc = 0x12d114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1044), bits); }
label_12d118:
    // 0x12d118: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12d11c:
    // 0x12d11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d120:
    // 0x12d120: 0xc6410424  lwc1        $f1, 0x424($s2)
    ctx->pc = 0x12d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12d124:
    // 0x12d124: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d128:
    // 0x12d128: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x12d128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_12d12c:
    // 0x12d12c: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x12d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_12d130:
    // 0x12d130: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x12d130u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12d134:
    // 0x12d134: 0x40f809  jalr        $v0
label_12d138:
    if (ctx->pc == 0x12D138u) {
        ctx->pc = 0x12D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D134u;
        // 0x12d138: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D13Cu;
        goto label_12d13c;
    }
    ctx->pc = 0x12D134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D13Cu);
        ctx->pc = 0x12D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D134u;
        // 0x12d138: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D134u, 0x12D13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D13Cu;
label_12d13c:
    // 0x12d13c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_12d140:
    if (ctx->pc == 0x12D140u) {
        ctx->pc = 0x12D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D13Cu;
        // 0x12d140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D144u;
        goto label_12d144;
    }
    ctx->pc = 0x12D13Cu;
    {
        const bool branch_taken_0x12d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D13Cu;
        // 0x12d140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d13c) {
            ctx->pc = 0x12D1F0u;
            goto label_12d1f0;
        }
    }
    ctx->pc = 0x12D144u;
label_12d144:
    // 0x12d144: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12d144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12d148:
    // 0x12d148: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x12d148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_12d14c:
    // 0x12d14c: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x12d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_12d150:
    // 0x12d150: 0x40f809  jalr        $v0
label_12d154:
    if (ctx->pc == 0x12D154u) {
        ctx->pc = 0x12D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D150u;
        // 0x12d154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D158u;
        goto label_12d158;
    }
    ctx->pc = 0x12D150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D158u);
        ctx->pc = 0x12D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D150u;
        // 0x12d154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D150u, 0x12D158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D158u;
label_12d158:
    // 0x12d158: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x12d158u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_12d15c:
    // 0x12d15c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12d160:
    // 0x12d160: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_12d164:
    if (ctx->pc == 0x12D164u) {
        ctx->pc = 0x12D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D160u;
        // 0x12d164: 0xa2400478  sb          $zero, 0x478($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D168u;
        goto label_12d168;
    }
    ctx->pc = 0x12D160u;
    {
        const bool branch_taken_0x12d160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d160) {
            ctx->pc = 0x12D164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D160u;
            // 0x12d164: 0xa2400478  sb          $zero, 0x478($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D1F4u;
            goto label_12d1f4;
        }
    }
    ctx->pc = 0x12D168u;
label_12d168:
    // 0x12d168: 0xc6400424  lwc1        $f0, 0x424($s2)
    ctx->pc = 0x12d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d16c:
    // 0x12d16c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x12d16cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12d170:
    // 0x12d170: 0x0  nop
    ctx->pc = 0x12d170u;
    // NOP
label_12d174:
    // 0x12d174: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_12d178:
    if (ctx->pc == 0x12D178u) {
        ctx->pc = 0x12D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D174u;
        // 0x12d178: 0xa2400478  sb          $zero, 0x478($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D17Cu;
        goto label_12d17c;
    }
    ctx->pc = 0x12D174u;
    {
        const bool branch_taken_0x12d174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d174) {
            ctx->pc = 0x12D178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D174u;
            // 0x12d178: 0xa2400478  sb          $zero, 0x478($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D1D0u;
            goto label_12d1d0;
        }
    }
    ctx->pc = 0x12D17Cu;
label_12d17c:
    // 0x12d17c: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x12d17cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12d180:
    // 0x12d180: 0x0  nop
    ctx->pc = 0x12d180u;
    // NOP
label_12d184:
    // 0x12d184: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_12d188:
    if (ctx->pc == 0x12D188u) {
        ctx->pc = 0x12D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D184u;
        // 0x12d188: 0x4614a000  add.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D18Cu;
        goto label_12d18c;
    }
    ctx->pc = 0x12D184u;
    {
        const bool branch_taken_0x12d184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d184) {
            ctx->pc = 0x12D188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D184u;
            // 0x12d188: 0x4614a000  add.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D194u;
            goto label_12d194;
        }
    }
    ctx->pc = 0x12D18Cu;
label_12d18c:
    // 0x12d18c: 0x1000000f  b           . + 4 + (0xF << 2)
label_12d190:
    if (ctx->pc == 0x12D190u) {
        ctx->pc = 0x12D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D18Cu;
        // 0x12d190: 0xe6550424  swc1        $f21, 0x424($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1060), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D194u;
        goto label_12d194;
    }
    ctx->pc = 0x12D18Cu;
    {
        const bool branch_taken_0x12d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D18Cu;
        // 0x12d190: 0xe6550424  swc1        $f21, 0x424($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1060), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d18c) {
            ctx->pc = 0x12D1CCu;
            goto label_12d1cc;
        }
    }
    ctx->pc = 0x12D194u;
label_12d194:
    // 0x12d194: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x12d194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_12d198:
    // 0x12d198: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12d19c:
    // 0x12d19c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12d1a0:
    // 0x12d1a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12d1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12d1a4:
    // 0x12d1a4: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x12d1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_12d1a8:
    // 0x12d1a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12d1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12d1ac:
    // 0x12d1ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12d1acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12d1b0:
    // 0x12d1b0: 0xe6540424  swc1        $f20, 0x424($s2)
    ctx->pc = 0x12d1b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1060), bits); }
label_12d1b4:
    // 0x12d1b4: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x12d1b4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_12d1b8:
    // 0x12d1b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12d1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12d1bc:
    // 0x12d1bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d1bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_12d1c0:
    // 0x12d1c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12d1c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_12d1c4:
    // 0x12d1c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_12d1c8:
    if (ctx->pc == 0x12D1C8u) {
        ctx->pc = 0x12D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1C4u;
        // 0x12d1c8: 0xa2420478  sb          $v0, 0x478($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D1CCu;
        goto label_12d1cc;
    }
    ctx->pc = 0x12D1C4u;
    {
        const bool branch_taken_0x12d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1C4u;
        // 0x12d1c8: 0xa2420478  sb          $v0, 0x478($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1c4) {
            ctx->pc = 0x12D1D0u;
            goto label_12d1d0;
        }
    }
    ctx->pc = 0x12D1CCu;
label_12d1cc:
    // 0x12d1cc: 0xa2400478  sb          $zero, 0x478($s2)
    ctx->pc = 0x12d1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 0));
label_12d1d0:
    // 0x12d1d0: 0x92420478  lbu         $v0, 0x478($s2)
    ctx->pc = 0x12d1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1144)));
label_12d1d4:
    // 0x12d1d4: 0x26e5deb8  addiu       $a1, $s7, -0x2148
    ctx->pc = 0x12d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958776));
label_12d1d8:
    // 0x12d1d8: 0x8ee4deb8  lw          $a0, -0x2148($s7)
    ctx->pc = 0x12d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294958776)));
label_12d1dc:
    // 0x12d1dc: 0xa08201b4  sb          $v0, 0x1B4($a0)
    ctx->pc = 0x12d1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 436), (uint8_t)GPR_U32(ctx, 2));
label_12d1e0:
    // 0x12d1e0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x12d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_12d1e4:
    // 0x12d1e4: 0x92420478  lbu         $v0, 0x478($s2)
    ctx->pc = 0x12d1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1144)));
label_12d1e8:
    // 0x12d1e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_12d1ec:
    if (ctx->pc == 0x12D1ECu) {
        ctx->pc = 0x12D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1E8u;
        // 0x12d1ec: 0xa06201b4  sb          $v0, 0x1B4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D1F0u;
        goto label_12d1f0;
    }
    ctx->pc = 0x12D1E8u;
    {
        const bool branch_taken_0x12d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1E8u;
        // 0x12d1ec: 0xa06201b4  sb          $v0, 0x1B4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1e8) {
            ctx->pc = 0x12D208u;
            goto label_12d208;
        }
    }
    ctx->pc = 0x12D1F0u;
label_12d1f0:
    // 0x12d1f0: 0xa2400478  sb          $zero, 0x478($s2)
    ctx->pc = 0x12d1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1144), (uint8_t)GPR_U32(ctx, 0));
label_12d1f4:
    // 0x12d1f4: 0x26e2deb8  addiu       $v0, $s7, -0x2148
    ctx->pc = 0x12d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958776));
label_12d1f8:
    // 0x12d1f8: 0x8ee3deb8  lw          $v1, -0x2148($s7)
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294958776)));
label_12d1fc:
    // 0x12d1fc: 0xa06001b4  sb          $zero, 0x1B4($v1)
    ctx->pc = 0x12d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 0));
label_12d200:
    // 0x12d200: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12d204:
    // 0x12d204: 0xa08001b4  sb          $zero, 0x1B4($a0)
    ctx->pc = 0x12d204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 436), (uint8_t)GPR_U32(ctx, 0));
label_12d208:
    // 0x12d208: 0xc0e409a  jal         func_390268
label_12d20c:
    if (ctx->pc == 0x12D20Cu) {
        ctx->pc = 0x12D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D208u;
        // 0x12d20c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D210u;
        goto label_12d210;
    }
    ctx->pc = 0x12D208u;
    SET_GPR_U32(ctx, 31, 0x12D210u);
    ctx->pc = 0x12D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D208u;
    // 0x12d20c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12D208u, 0x12D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D210u;
label_12d210:
    // 0x12d210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d214:
    // 0x12d214: 0x50800038  beql        $a0, $zero, . + 4 + (0x38 << 2)
label_12d218:
    if (ctx->pc == 0x12D218u) {
        ctx->pc = 0x12D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D214u;
        // 0x12d218: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D21Cu;
        goto label_12d21c;
    }
    ctx->pc = 0x12D214u;
    {
        const bool branch_taken_0x12d214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d214) {
            ctx->pc = 0x12D218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D214u;
            // 0x12d218: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D2F8u;
            goto label_12d2f8;
        }
    }
    ctx->pc = 0x12D21Cu;
label_12d21c:
    // 0x12d21c: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x12d21cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_12d220:
    // 0x12d220: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12d220u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12d224:
    // 0x12d224: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_12d228:
    if (ctx->pc == 0x12D228u) {
        ctx->pc = 0x12D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D224u;
        // 0x12d228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D22Cu;
        goto label_12d22c;
    }
    ctx->pc = 0x12D224u;
    {
        const bool branch_taken_0x12d224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D224u;
        // 0x12d228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d224) {
            ctx->pc = 0x12D2F4u;
            goto label_12d2f4;
        }
    }
    ctx->pc = 0x12D22Cu;
label_12d22c:
    // 0x12d22c: 0x96430444  lhu         $v1, 0x444($s2)
    ctx->pc = 0x12d22cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1092)));
label_12d230:
    // 0x12d230: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
label_12d234:
    if (ctx->pc == 0x12D234u) {
        ctx->pc = 0x12D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D230u;
        // 0x12d234: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D238u;
        goto label_12d238;
    }
    ctx->pc = 0x12D230u;
    {
        const bool branch_taken_0x12d230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12d230) {
            ctx->pc = 0x12D234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D230u;
            // 0x12d234: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D2F8u;
            goto label_12d2f8;
        }
    }
    ctx->pc = 0x12D238u;
label_12d238:
    // 0x12d238: 0x8e430314  lw          $v1, 0x314($s2)
    ctx->pc = 0x12d238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12d23c:
    // 0x12d23c: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_12d240:
    // 0x12d240: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12d240u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12d244:
    // 0x12d244: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_12d248:
    if (ctx->pc == 0x12D248u) {
        ctx->pc = 0x12D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D244u;
        // 0x12d248: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D24Cu;
        goto label_12d24c;
    }
    ctx->pc = 0x12D244u;
    {
        const bool branch_taken_0x12d244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d244) {
            ctx->pc = 0x12D248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D244u;
            // 0x12d248: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D2F8u;
            goto label_12d2f8;
        }
    }
    ctx->pc = 0x12D24Cu;
label_12d24c:
    // 0x12d24c: 0x84900092  lh          $s0, 0x92($a0)
    ctx->pc = 0x12d24cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_12d250:
    // 0x12d250: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x12d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_12d254:
    // 0x12d254: 0xc64c0208  lwc1        $f12, 0x208($s2)
    ctx->pc = 0x12d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12d258:
    // 0x12d258: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12d258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12d25c:
    // 0x12d25c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x12d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_12d260:
    // 0x12d260: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x12d260u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_12d264:
    // 0x12d264: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x12d264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_12d268:
    // 0x12d268: 0x24651740  addiu       $a1, $v1, 0x1740
    ctx->pc = 0x12d268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_12d26c:
    // 0x12d26c: 0xc136b24  jal         func_4DAC90
label_12d270:
    if (ctx->pc == 0x12D270u) {
        ctx->pc = 0x12D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D26Cu;
        // 0x12d270: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D274u;
        goto label_12d274;
    }
    ctx->pc = 0x12D26Cu;
    SET_GPR_U32(ctx, 31, 0x12D274u);
    ctx->pc = 0x12D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D26Cu;
    // 0x12d270: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12D26Cu, 0x12D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D274u;
label_12d274:
    // 0x12d274: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x12d274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12d278:
    // 0x12d278: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x12d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_12d27c:
    // 0x12d27c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x12d27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_12d280:
    // 0x12d280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12d284:
    // 0x12d284: 0xc136b18  jal         func_4DAC60
label_12d288:
    if (ctx->pc == 0x12D288u) {
        ctx->pc = 0x12D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D284u;
        // 0x12d288: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D28Cu;
        goto label_12d28c;
    }
    ctx->pc = 0x12D284u;
    SET_GPR_U32(ctx, 31, 0x12D28Cu);
    ctx->pc = 0x12D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D284u;
    // 0x12d288: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12D284u, 0x12D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D28Cu;
label_12d28c:
    // 0x12d28c: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x12d28cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12d290:
    // 0x12d290: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12d294:
    // 0x12d294: 0x7e4202d0  sq          $v0, 0x2D0($s2)
    ctx->pc = 0x12d294u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 720), GPR_VEC(ctx, 2));
label_12d298:
    // 0x12d298: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x12d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_12d29c:
    // 0x12d29c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_12d2a0:
    // 0x12d2a0: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x12d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_12d2a4:
    // 0x12d2a4: 0x40f809  jalr        $v0
label_12d2a8:
    if (ctx->pc == 0x12D2A8u) {
        ctx->pc = 0x12D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2A4u;
        // 0x12d2a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2ACu;
        goto label_12d2ac;
    }
    ctx->pc = 0x12D2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D2ACu);
        ctx->pc = 0x12D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2A4u;
        // 0x12d2a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D2A4u, 0x12D2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D2ACu;
label_12d2ac:
    // 0x12d2ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d2b0:
    // 0x12d2b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x12d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_12d2b4:
    // 0x12d2b4: 0xc136afa  jal         func_4DABE8
label_12d2b8:
    if (ctx->pc == 0x12D2B8u) {
        ctx->pc = 0x12D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2B4u;
        // 0x12d2b8: 0x264602d0  addiu       $a2, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2BCu;
        goto label_12d2bc;
    }
    ctx->pc = 0x12D2B4u;
    SET_GPR_U32(ctx, 31, 0x12D2BCu);
    ctx->pc = 0x12D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2B4u;
    // 0x12d2b8: 0x264602d0  addiu       $a2, $s2, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12D2B4u, 0x12D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2BCu;
label_12d2bc:
    // 0x12d2bc: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x12d2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12d2c0:
    // 0x12d2c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12d2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12d2c4:
    // 0x12d2c4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12d2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d2c8:
    // 0x12d2c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12d2c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d2cc:
    // 0x12d2cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12d2ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d2d0:
    // 0x12d2d0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12d2d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_12d2d4:
    // 0x12d2d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x12d2d4u;
    // VWAITQ (Q already resolved in this runtime)
label_12d2d8:
    // 0x12d2d8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12d2d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d2dc:
    // 0x12d2dc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12d2dcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12d2e0:
    // 0x12d2e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x12d2e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12d2e4:
    // 0x12d2e4: 0x0  nop
    ctx->pc = 0x12d2e4u;
    // NOP
label_12d2e8:
    // 0x12d2e8: 0xe6400440  swc1        $f0, 0x440($s2)
    ctx->pc = 0x12d2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1088), bits); }
label_12d2ec:
    // 0x12d2ec: 0x1000001b  b           . + 4 + (0x1B << 2)
label_12d2f0:
    if (ctx->pc == 0x12D2F0u) {
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2ECu;
        // 0x12d2f0: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2F4u;
        goto label_12d2f4;
    }
    ctx->pc = 0x12D2ECu;
    {
        const bool branch_taken_0x12d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2ECu;
        // 0x12d2f0: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2ec) {
            ctx->pc = 0x12D35Cu;
            goto label_12d35c;
        }
    }
    ctx->pc = 0x12D2F4u;
label_12d2f4:
    // 0x12d2f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12d2f8:
    // 0x12d2f8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x12d2f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_12d2fc:
    // 0x12d2fc: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x12d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_12d300:
    // 0x12d300: 0x40f809  jalr        $v0
label_12d304:
    if (ctx->pc == 0x12D304u) {
        ctx->pc = 0x12D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D300u;
        // 0x12d304: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D308u;
        goto label_12d308;
    }
    ctx->pc = 0x12D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D308u);
        ctx->pc = 0x12D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D300u;
        // 0x12d304: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D300u, 0x12D308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D308u;
label_12d308:
    // 0x12d308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d30c:
    // 0x12d30c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x12d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_12d310:
    // 0x12d310: 0xc136afa  jal         func_4DABE8
label_12d314:
    if (ctx->pc == 0x12D314u) {
        ctx->pc = 0x12D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D310u;
        // 0x12d314: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D318u;
        goto label_12d318;
    }
    ctx->pc = 0x12D310u;
    SET_GPR_U32(ctx, 31, 0x12D318u);
    ctx->pc = 0x12D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D310u;
    // 0x12d314: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12D310u, 0x12D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D318u;
label_12d318:
    // 0x12d318: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x12d318u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12d31c:
    // 0x12d31c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12d320:
    // 0x12d320: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12d320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_12d324:
    // 0x12d324: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12d324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d328:
    // 0x12d328: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12d328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d32c:
    // 0x12d32c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12d32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d330:
    // 0x12d330: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12d330u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_12d334:
    // 0x12d334: 0x4a0003bf  vwaitq
    ctx->pc = 0x12d334u;
    // VWAITQ (Q already resolved in this runtime)
label_12d338:
    // 0x12d338: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12d338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12d33c:
    // 0x12d33c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x12d33cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_12d340:
    // 0x12d340: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x12d340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_12d344:
    // 0x12d344: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12d344u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12d348:
    // 0x12d348: 0x0  nop
    ctx->pc = 0x12d348u;
    // NOP
label_12d34c:
    // 0x12d34c: 0xe6400440  swc1        $f0, 0x440($s2)
    ctx->pc = 0x12d34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1088), bits); }
label_12d350:
    // 0x12d350: 0x7fa40130  sq          $a0, 0x130($sp)
    ctx->pc = 0x12d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 4));
label_12d354:
    // 0x12d354: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12d354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_12d358:
    // 0x12d358: 0x7e4202d0  sq          $v0, 0x2D0($s2)
    ctx->pc = 0x12d358u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 720), GPR_VEC(ctx, 2));
label_12d35c:
    // 0x12d35c: 0xc04829a  jal         func_120A68
label_12d360:
    if (ctx->pc == 0x12D360u) {
        ctx->pc = 0x12D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D35Cu;
        // 0x12d360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D364u;
        goto label_12d364;
    }
    ctx->pc = 0x12D35Cu;
    SET_GPR_U32(ctx, 31, 0x12D364u);
    ctx->pc = 0x12D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D35Cu;
    // 0x12d360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A68u, 0x12D35Cu, 0x12D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D364u;
label_12d364:
    // 0x12d364: 0xa240046b  sb          $zero, 0x46B($s2)
    ctx->pc = 0x12d364u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1131), (uint8_t)GPR_U32(ctx, 0));
label_12d368:
    // 0x12d368: 0xa2400469  sb          $zero, 0x469($s2)
    ctx->pc = 0x12d368u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1129), (uint8_t)GPR_U32(ctx, 0));
label_12d36c:
    // 0x12d36c: 0xa240046c  sb          $zero, 0x46C($s2)
    ctx->pc = 0x12d36cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1132), (uint8_t)GPR_U32(ctx, 0));
label_12d370:
    // 0x12d370: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x12d370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_12d374:
    // 0x12d374: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x12d374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_12d378:
    // 0x12d378: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x12d378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_12d37c:
    // 0x12d37c: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x12d37cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_12d380:
    // 0x12d380: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x12d380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_12d384:
    // 0x12d384: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x12d384u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_12d388:
    // 0x12d388: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x12d388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_12d38c:
    // 0x12d38c: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x12d38cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_12d390:
    // 0x12d390: 0x7bbe0210  lq          $fp, 0x210($sp)
    ctx->pc = 0x12d390u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_12d394:
    // 0x12d394: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x12d394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_12d398:
    // 0x12d398: 0xc7b802c0  lwc1        $f24, 0x2C0($sp)
    ctx->pc = 0x12d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_12d39c:
    // 0x12d39c: 0xc7b702b8  lwc1        $f23, 0x2B8($sp)
    ctx->pc = 0x12d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_12d3a0:
    // 0x12d3a0: 0xc7b602b0  lwc1        $f22, 0x2B0($sp)
    ctx->pc = 0x12d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12d3a4:
    // 0x12d3a4: 0xc7b502a8  lwc1        $f21, 0x2A8($sp)
    ctx->pc = 0x12d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12d3a8:
    // 0x12d3a8: 0xc7b402a0  lwc1        $f20, 0x2A0($sp)
    ctx->pc = 0x12d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12d3ac:
    // 0x12d3ac: 0x3e00008  jr          $ra
label_12d3b0:
    if (ctx->pc == 0x12D3B0u) {
        ctx->pc = 0x12D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3ACu;
        // 0x12d3b0: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D3B4u;
        goto label_12d3b4;
    }
    ctx->pc = 0x12D3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3ACu;
        // 0x12d3b0: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D3B4u;
label_12d3b4:
    // 0x12d3b4: 0x0  nop
    ctx->pc = 0x12d3b4u;
    // NOP
    ctx->pc = 0x12d3b8u;
}
