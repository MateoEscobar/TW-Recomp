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

// Function: sub_003CCF68
// Address: 0x3ccf68 - 0x3cd6c8
void sub_003CCF68_0x3ccf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCF68_0x3ccf68");
#endif

    switch (ctx->pc) {
        case 0x3ccf68u: goto label_3ccf68;
        case 0x3ccf6cu: goto label_3ccf6c;
        case 0x3ccf70u: goto label_3ccf70;
        case 0x3ccf74u: goto label_3ccf74;
        case 0x3ccf78u: goto label_3ccf78;
        case 0x3ccf7cu: goto label_3ccf7c;
        case 0x3ccf80u: goto label_3ccf80;
        case 0x3ccf84u: goto label_3ccf84;
        case 0x3ccf88u: goto label_3ccf88;
        case 0x3ccf8cu: goto label_3ccf8c;
        case 0x3ccf90u: goto label_3ccf90;
        case 0x3ccf94u: goto label_3ccf94;
        case 0x3ccf98u: goto label_3ccf98;
        case 0x3ccf9cu: goto label_3ccf9c;
        case 0x3ccfa0u: goto label_3ccfa0;
        case 0x3ccfa4u: goto label_3ccfa4;
        case 0x3ccfa8u: goto label_3ccfa8;
        case 0x3ccfacu: goto label_3ccfac;
        case 0x3ccfb0u: goto label_3ccfb0;
        case 0x3ccfb4u: goto label_3ccfb4;
        case 0x3ccfb8u: goto label_3ccfb8;
        case 0x3ccfbcu: goto label_3ccfbc;
        case 0x3ccfc0u: goto label_3ccfc0;
        case 0x3ccfc4u: goto label_3ccfc4;
        case 0x3ccfc8u: goto label_3ccfc8;
        case 0x3ccfccu: goto label_3ccfcc;
        case 0x3ccfd0u: goto label_3ccfd0;
        case 0x3ccfd4u: goto label_3ccfd4;
        case 0x3ccfd8u: goto label_3ccfd8;
        case 0x3ccfdcu: goto label_3ccfdc;
        case 0x3ccfe0u: goto label_3ccfe0;
        case 0x3ccfe4u: goto label_3ccfe4;
        case 0x3ccfe8u: goto label_3ccfe8;
        case 0x3ccfecu: goto label_3ccfec;
        case 0x3ccff0u: goto label_3ccff0;
        case 0x3ccff4u: goto label_3ccff4;
        case 0x3ccff8u: goto label_3ccff8;
        case 0x3ccffcu: goto label_3ccffc;
        case 0x3cd000u: goto label_3cd000;
        case 0x3cd004u: goto label_3cd004;
        case 0x3cd008u: goto label_3cd008;
        case 0x3cd00cu: goto label_3cd00c;
        case 0x3cd010u: goto label_3cd010;
        case 0x3cd014u: goto label_3cd014;
        case 0x3cd018u: goto label_3cd018;
        case 0x3cd01cu: goto label_3cd01c;
        case 0x3cd020u: goto label_3cd020;
        case 0x3cd024u: goto label_3cd024;
        case 0x3cd028u: goto label_3cd028;
        case 0x3cd02cu: goto label_3cd02c;
        case 0x3cd030u: goto label_3cd030;
        case 0x3cd034u: goto label_3cd034;
        case 0x3cd038u: goto label_3cd038;
        case 0x3cd03cu: goto label_3cd03c;
        case 0x3cd040u: goto label_3cd040;
        case 0x3cd044u: goto label_3cd044;
        case 0x3cd048u: goto label_3cd048;
        case 0x3cd04cu: goto label_3cd04c;
        case 0x3cd050u: goto label_3cd050;
        case 0x3cd054u: goto label_3cd054;
        case 0x3cd058u: goto label_3cd058;
        case 0x3cd05cu: goto label_3cd05c;
        case 0x3cd060u: goto label_3cd060;
        case 0x3cd064u: goto label_3cd064;
        case 0x3cd068u: goto label_3cd068;
        case 0x3cd06cu: goto label_3cd06c;
        case 0x3cd070u: goto label_3cd070;
        case 0x3cd074u: goto label_3cd074;
        case 0x3cd078u: goto label_3cd078;
        case 0x3cd07cu: goto label_3cd07c;
        case 0x3cd080u: goto label_3cd080;
        case 0x3cd084u: goto label_3cd084;
        case 0x3cd088u: goto label_3cd088;
        case 0x3cd08cu: goto label_3cd08c;
        case 0x3cd090u: goto label_3cd090;
        case 0x3cd094u: goto label_3cd094;
        case 0x3cd098u: goto label_3cd098;
        case 0x3cd09cu: goto label_3cd09c;
        case 0x3cd0a0u: goto label_3cd0a0;
        case 0x3cd0a4u: goto label_3cd0a4;
        case 0x3cd0a8u: goto label_3cd0a8;
        case 0x3cd0acu: goto label_3cd0ac;
        case 0x3cd0b0u: goto label_3cd0b0;
        case 0x3cd0b4u: goto label_3cd0b4;
        case 0x3cd0b8u: goto label_3cd0b8;
        case 0x3cd0bcu: goto label_3cd0bc;
        case 0x3cd0c0u: goto label_3cd0c0;
        case 0x3cd0c4u: goto label_3cd0c4;
        case 0x3cd0c8u: goto label_3cd0c8;
        case 0x3cd0ccu: goto label_3cd0cc;
        case 0x3cd0d0u: goto label_3cd0d0;
        case 0x3cd0d4u: goto label_3cd0d4;
        case 0x3cd0d8u: goto label_3cd0d8;
        case 0x3cd0dcu: goto label_3cd0dc;
        case 0x3cd0e0u: goto label_3cd0e0;
        case 0x3cd0e4u: goto label_3cd0e4;
        case 0x3cd0e8u: goto label_3cd0e8;
        case 0x3cd0ecu: goto label_3cd0ec;
        case 0x3cd0f0u: goto label_3cd0f0;
        case 0x3cd0f4u: goto label_3cd0f4;
        case 0x3cd0f8u: goto label_3cd0f8;
        case 0x3cd0fcu: goto label_3cd0fc;
        case 0x3cd100u: goto label_3cd100;
        case 0x3cd104u: goto label_3cd104;
        case 0x3cd108u: goto label_3cd108;
        case 0x3cd10cu: goto label_3cd10c;
        case 0x3cd110u: goto label_3cd110;
        case 0x3cd114u: goto label_3cd114;
        case 0x3cd118u: goto label_3cd118;
        case 0x3cd11cu: goto label_3cd11c;
        case 0x3cd120u: goto label_3cd120;
        case 0x3cd124u: goto label_3cd124;
        case 0x3cd128u: goto label_3cd128;
        case 0x3cd12cu: goto label_3cd12c;
        case 0x3cd130u: goto label_3cd130;
        case 0x3cd134u: goto label_3cd134;
        case 0x3cd138u: goto label_3cd138;
        case 0x3cd13cu: goto label_3cd13c;
        case 0x3cd140u: goto label_3cd140;
        case 0x3cd144u: goto label_3cd144;
        case 0x3cd148u: goto label_3cd148;
        case 0x3cd14cu: goto label_3cd14c;
        case 0x3cd150u: goto label_3cd150;
        case 0x3cd154u: goto label_3cd154;
        case 0x3cd158u: goto label_3cd158;
        case 0x3cd15cu: goto label_3cd15c;
        case 0x3cd160u: goto label_3cd160;
        case 0x3cd164u: goto label_3cd164;
        case 0x3cd168u: goto label_3cd168;
        case 0x3cd16cu: goto label_3cd16c;
        case 0x3cd170u: goto label_3cd170;
        case 0x3cd174u: goto label_3cd174;
        case 0x3cd178u: goto label_3cd178;
        case 0x3cd17cu: goto label_3cd17c;
        case 0x3cd180u: goto label_3cd180;
        case 0x3cd184u: goto label_3cd184;
        case 0x3cd188u: goto label_3cd188;
        case 0x3cd18cu: goto label_3cd18c;
        case 0x3cd190u: goto label_3cd190;
        case 0x3cd194u: goto label_3cd194;
        case 0x3cd198u: goto label_3cd198;
        case 0x3cd19cu: goto label_3cd19c;
        case 0x3cd1a0u: goto label_3cd1a0;
        case 0x3cd1a4u: goto label_3cd1a4;
        case 0x3cd1a8u: goto label_3cd1a8;
        case 0x3cd1acu: goto label_3cd1ac;
        case 0x3cd1b0u: goto label_3cd1b0;
        case 0x3cd1b4u: goto label_3cd1b4;
        case 0x3cd1b8u: goto label_3cd1b8;
        case 0x3cd1bcu: goto label_3cd1bc;
        case 0x3cd1c0u: goto label_3cd1c0;
        case 0x3cd1c4u: goto label_3cd1c4;
        case 0x3cd1c8u: goto label_3cd1c8;
        case 0x3cd1ccu: goto label_3cd1cc;
        case 0x3cd1d0u: goto label_3cd1d0;
        case 0x3cd1d4u: goto label_3cd1d4;
        case 0x3cd1d8u: goto label_3cd1d8;
        case 0x3cd1dcu: goto label_3cd1dc;
        case 0x3cd1e0u: goto label_3cd1e0;
        case 0x3cd1e4u: goto label_3cd1e4;
        case 0x3cd1e8u: goto label_3cd1e8;
        case 0x3cd1ecu: goto label_3cd1ec;
        case 0x3cd1f0u: goto label_3cd1f0;
        case 0x3cd1f4u: goto label_3cd1f4;
        case 0x3cd1f8u: goto label_3cd1f8;
        case 0x3cd1fcu: goto label_3cd1fc;
        case 0x3cd200u: goto label_3cd200;
        case 0x3cd204u: goto label_3cd204;
        case 0x3cd208u: goto label_3cd208;
        case 0x3cd20cu: goto label_3cd20c;
        case 0x3cd210u: goto label_3cd210;
        case 0x3cd214u: goto label_3cd214;
        case 0x3cd218u: goto label_3cd218;
        case 0x3cd21cu: goto label_3cd21c;
        case 0x3cd220u: goto label_3cd220;
        case 0x3cd224u: goto label_3cd224;
        case 0x3cd228u: goto label_3cd228;
        case 0x3cd22cu: goto label_3cd22c;
        case 0x3cd230u: goto label_3cd230;
        case 0x3cd234u: goto label_3cd234;
        case 0x3cd238u: goto label_3cd238;
        case 0x3cd23cu: goto label_3cd23c;
        case 0x3cd240u: goto label_3cd240;
        case 0x3cd244u: goto label_3cd244;
        case 0x3cd248u: goto label_3cd248;
        case 0x3cd24cu: goto label_3cd24c;
        case 0x3cd250u: goto label_3cd250;
        case 0x3cd254u: goto label_3cd254;
        case 0x3cd258u: goto label_3cd258;
        case 0x3cd25cu: goto label_3cd25c;
        case 0x3cd260u: goto label_3cd260;
        case 0x3cd264u: goto label_3cd264;
        case 0x3cd268u: goto label_3cd268;
        case 0x3cd26cu: goto label_3cd26c;
        case 0x3cd270u: goto label_3cd270;
        case 0x3cd274u: goto label_3cd274;
        case 0x3cd278u: goto label_3cd278;
        case 0x3cd27cu: goto label_3cd27c;
        case 0x3cd280u: goto label_3cd280;
        case 0x3cd284u: goto label_3cd284;
        case 0x3cd288u: goto label_3cd288;
        case 0x3cd28cu: goto label_3cd28c;
        case 0x3cd290u: goto label_3cd290;
        case 0x3cd294u: goto label_3cd294;
        case 0x3cd298u: goto label_3cd298;
        case 0x3cd29cu: goto label_3cd29c;
        case 0x3cd2a0u: goto label_3cd2a0;
        case 0x3cd2a4u: goto label_3cd2a4;
        case 0x3cd2a8u: goto label_3cd2a8;
        case 0x3cd2acu: goto label_3cd2ac;
        case 0x3cd2b0u: goto label_3cd2b0;
        case 0x3cd2b4u: goto label_3cd2b4;
        case 0x3cd2b8u: goto label_3cd2b8;
        case 0x3cd2bcu: goto label_3cd2bc;
        case 0x3cd2c0u: goto label_3cd2c0;
        case 0x3cd2c4u: goto label_3cd2c4;
        case 0x3cd2c8u: goto label_3cd2c8;
        case 0x3cd2ccu: goto label_3cd2cc;
        case 0x3cd2d0u: goto label_3cd2d0;
        case 0x3cd2d4u: goto label_3cd2d4;
        case 0x3cd2d8u: goto label_3cd2d8;
        case 0x3cd2dcu: goto label_3cd2dc;
        case 0x3cd2e0u: goto label_3cd2e0;
        case 0x3cd2e4u: goto label_3cd2e4;
        case 0x3cd2e8u: goto label_3cd2e8;
        case 0x3cd2ecu: goto label_3cd2ec;
        case 0x3cd2f0u: goto label_3cd2f0;
        case 0x3cd2f4u: goto label_3cd2f4;
        case 0x3cd2f8u: goto label_3cd2f8;
        case 0x3cd2fcu: goto label_3cd2fc;
        case 0x3cd300u: goto label_3cd300;
        case 0x3cd304u: goto label_3cd304;
        case 0x3cd308u: goto label_3cd308;
        case 0x3cd30cu: goto label_3cd30c;
        case 0x3cd310u: goto label_3cd310;
        case 0x3cd314u: goto label_3cd314;
        case 0x3cd318u: goto label_3cd318;
        case 0x3cd31cu: goto label_3cd31c;
        case 0x3cd320u: goto label_3cd320;
        case 0x3cd324u: goto label_3cd324;
        case 0x3cd328u: goto label_3cd328;
        case 0x3cd32cu: goto label_3cd32c;
        case 0x3cd330u: goto label_3cd330;
        case 0x3cd334u: goto label_3cd334;
        case 0x3cd338u: goto label_3cd338;
        case 0x3cd33cu: goto label_3cd33c;
        case 0x3cd340u: goto label_3cd340;
        case 0x3cd344u: goto label_3cd344;
        case 0x3cd348u: goto label_3cd348;
        case 0x3cd34cu: goto label_3cd34c;
        case 0x3cd350u: goto label_3cd350;
        case 0x3cd354u: goto label_3cd354;
        case 0x3cd358u: goto label_3cd358;
        case 0x3cd35cu: goto label_3cd35c;
        case 0x3cd360u: goto label_3cd360;
        case 0x3cd364u: goto label_3cd364;
        case 0x3cd368u: goto label_3cd368;
        case 0x3cd36cu: goto label_3cd36c;
        case 0x3cd370u: goto label_3cd370;
        case 0x3cd374u: goto label_3cd374;
        case 0x3cd378u: goto label_3cd378;
        case 0x3cd37cu: goto label_3cd37c;
        case 0x3cd380u: goto label_3cd380;
        case 0x3cd384u: goto label_3cd384;
        case 0x3cd388u: goto label_3cd388;
        case 0x3cd38cu: goto label_3cd38c;
        case 0x3cd390u: goto label_3cd390;
        case 0x3cd394u: goto label_3cd394;
        case 0x3cd398u: goto label_3cd398;
        case 0x3cd39cu: goto label_3cd39c;
        case 0x3cd3a0u: goto label_3cd3a0;
        case 0x3cd3a4u: goto label_3cd3a4;
        case 0x3cd3a8u: goto label_3cd3a8;
        case 0x3cd3acu: goto label_3cd3ac;
        case 0x3cd3b0u: goto label_3cd3b0;
        case 0x3cd3b4u: goto label_3cd3b4;
        case 0x3cd3b8u: goto label_3cd3b8;
        case 0x3cd3bcu: goto label_3cd3bc;
        case 0x3cd3c0u: goto label_3cd3c0;
        case 0x3cd3c4u: goto label_3cd3c4;
        case 0x3cd3c8u: goto label_3cd3c8;
        case 0x3cd3ccu: goto label_3cd3cc;
        case 0x3cd3d0u: goto label_3cd3d0;
        case 0x3cd3d4u: goto label_3cd3d4;
        case 0x3cd3d8u: goto label_3cd3d8;
        case 0x3cd3dcu: goto label_3cd3dc;
        case 0x3cd3e0u: goto label_3cd3e0;
        case 0x3cd3e4u: goto label_3cd3e4;
        case 0x3cd3e8u: goto label_3cd3e8;
        case 0x3cd3ecu: goto label_3cd3ec;
        case 0x3cd3f0u: goto label_3cd3f0;
        case 0x3cd3f4u: goto label_3cd3f4;
        case 0x3cd3f8u: goto label_3cd3f8;
        case 0x3cd3fcu: goto label_3cd3fc;
        case 0x3cd400u: goto label_3cd400;
        case 0x3cd404u: goto label_3cd404;
        case 0x3cd408u: goto label_3cd408;
        case 0x3cd40cu: goto label_3cd40c;
        case 0x3cd410u: goto label_3cd410;
        case 0x3cd414u: goto label_3cd414;
        case 0x3cd418u: goto label_3cd418;
        case 0x3cd41cu: goto label_3cd41c;
        case 0x3cd420u: goto label_3cd420;
        case 0x3cd424u: goto label_3cd424;
        case 0x3cd428u: goto label_3cd428;
        case 0x3cd42cu: goto label_3cd42c;
        case 0x3cd430u: goto label_3cd430;
        case 0x3cd434u: goto label_3cd434;
        case 0x3cd438u: goto label_3cd438;
        case 0x3cd43cu: goto label_3cd43c;
        case 0x3cd440u: goto label_3cd440;
        case 0x3cd444u: goto label_3cd444;
        case 0x3cd448u: goto label_3cd448;
        case 0x3cd44cu: goto label_3cd44c;
        case 0x3cd450u: goto label_3cd450;
        case 0x3cd454u: goto label_3cd454;
        case 0x3cd458u: goto label_3cd458;
        case 0x3cd45cu: goto label_3cd45c;
        case 0x3cd460u: goto label_3cd460;
        case 0x3cd464u: goto label_3cd464;
        case 0x3cd468u: goto label_3cd468;
        case 0x3cd46cu: goto label_3cd46c;
        case 0x3cd470u: goto label_3cd470;
        case 0x3cd474u: goto label_3cd474;
        case 0x3cd478u: goto label_3cd478;
        case 0x3cd47cu: goto label_3cd47c;
        case 0x3cd480u: goto label_3cd480;
        case 0x3cd484u: goto label_3cd484;
        case 0x3cd488u: goto label_3cd488;
        case 0x3cd48cu: goto label_3cd48c;
        case 0x3cd490u: goto label_3cd490;
        case 0x3cd494u: goto label_3cd494;
        case 0x3cd498u: goto label_3cd498;
        case 0x3cd49cu: goto label_3cd49c;
        case 0x3cd4a0u: goto label_3cd4a0;
        case 0x3cd4a4u: goto label_3cd4a4;
        case 0x3cd4a8u: goto label_3cd4a8;
        case 0x3cd4acu: goto label_3cd4ac;
        case 0x3cd4b0u: goto label_3cd4b0;
        case 0x3cd4b4u: goto label_3cd4b4;
        case 0x3cd4b8u: goto label_3cd4b8;
        case 0x3cd4bcu: goto label_3cd4bc;
        case 0x3cd4c0u: goto label_3cd4c0;
        case 0x3cd4c4u: goto label_3cd4c4;
        case 0x3cd4c8u: goto label_3cd4c8;
        case 0x3cd4ccu: goto label_3cd4cc;
        case 0x3cd4d0u: goto label_3cd4d0;
        case 0x3cd4d4u: goto label_3cd4d4;
        case 0x3cd4d8u: goto label_3cd4d8;
        case 0x3cd4dcu: goto label_3cd4dc;
        case 0x3cd4e0u: goto label_3cd4e0;
        case 0x3cd4e4u: goto label_3cd4e4;
        case 0x3cd4e8u: goto label_3cd4e8;
        case 0x3cd4ecu: goto label_3cd4ec;
        case 0x3cd4f0u: goto label_3cd4f0;
        case 0x3cd4f4u: goto label_3cd4f4;
        case 0x3cd4f8u: goto label_3cd4f8;
        case 0x3cd4fcu: goto label_3cd4fc;
        case 0x3cd500u: goto label_3cd500;
        case 0x3cd504u: goto label_3cd504;
        case 0x3cd508u: goto label_3cd508;
        case 0x3cd50cu: goto label_3cd50c;
        case 0x3cd510u: goto label_3cd510;
        case 0x3cd514u: goto label_3cd514;
        case 0x3cd518u: goto label_3cd518;
        case 0x3cd51cu: goto label_3cd51c;
        case 0x3cd520u: goto label_3cd520;
        case 0x3cd524u: goto label_3cd524;
        case 0x3cd528u: goto label_3cd528;
        case 0x3cd52cu: goto label_3cd52c;
        case 0x3cd530u: goto label_3cd530;
        case 0x3cd534u: goto label_3cd534;
        case 0x3cd538u: goto label_3cd538;
        case 0x3cd53cu: goto label_3cd53c;
        case 0x3cd540u: goto label_3cd540;
        case 0x3cd544u: goto label_3cd544;
        case 0x3cd548u: goto label_3cd548;
        case 0x3cd54cu: goto label_3cd54c;
        case 0x3cd550u: goto label_3cd550;
        case 0x3cd554u: goto label_3cd554;
        case 0x3cd558u: goto label_3cd558;
        case 0x3cd55cu: goto label_3cd55c;
        case 0x3cd560u: goto label_3cd560;
        case 0x3cd564u: goto label_3cd564;
        case 0x3cd568u: goto label_3cd568;
        case 0x3cd56cu: goto label_3cd56c;
        case 0x3cd570u: goto label_3cd570;
        case 0x3cd574u: goto label_3cd574;
        case 0x3cd578u: goto label_3cd578;
        case 0x3cd57cu: goto label_3cd57c;
        case 0x3cd580u: goto label_3cd580;
        case 0x3cd584u: goto label_3cd584;
        case 0x3cd588u: goto label_3cd588;
        case 0x3cd58cu: goto label_3cd58c;
        case 0x3cd590u: goto label_3cd590;
        case 0x3cd594u: goto label_3cd594;
        case 0x3cd598u: goto label_3cd598;
        case 0x3cd59cu: goto label_3cd59c;
        case 0x3cd5a0u: goto label_3cd5a0;
        case 0x3cd5a4u: goto label_3cd5a4;
        case 0x3cd5a8u: goto label_3cd5a8;
        case 0x3cd5acu: goto label_3cd5ac;
        case 0x3cd5b0u: goto label_3cd5b0;
        case 0x3cd5b4u: goto label_3cd5b4;
        case 0x3cd5b8u: goto label_3cd5b8;
        case 0x3cd5bcu: goto label_3cd5bc;
        case 0x3cd5c0u: goto label_3cd5c0;
        case 0x3cd5c4u: goto label_3cd5c4;
        case 0x3cd5c8u: goto label_3cd5c8;
        case 0x3cd5ccu: goto label_3cd5cc;
        case 0x3cd5d0u: goto label_3cd5d0;
        case 0x3cd5d4u: goto label_3cd5d4;
        case 0x3cd5d8u: goto label_3cd5d8;
        case 0x3cd5dcu: goto label_3cd5dc;
        case 0x3cd5e0u: goto label_3cd5e0;
        case 0x3cd5e4u: goto label_3cd5e4;
        case 0x3cd5e8u: goto label_3cd5e8;
        case 0x3cd5ecu: goto label_3cd5ec;
        case 0x3cd5f0u: goto label_3cd5f0;
        case 0x3cd5f4u: goto label_3cd5f4;
        case 0x3cd5f8u: goto label_3cd5f8;
        case 0x3cd5fcu: goto label_3cd5fc;
        case 0x3cd600u: goto label_3cd600;
        case 0x3cd604u: goto label_3cd604;
        case 0x3cd608u: goto label_3cd608;
        case 0x3cd60cu: goto label_3cd60c;
        case 0x3cd610u: goto label_3cd610;
        case 0x3cd614u: goto label_3cd614;
        case 0x3cd618u: goto label_3cd618;
        case 0x3cd61cu: goto label_3cd61c;
        case 0x3cd620u: goto label_3cd620;
        case 0x3cd624u: goto label_3cd624;
        case 0x3cd628u: goto label_3cd628;
        case 0x3cd62cu: goto label_3cd62c;
        case 0x3cd630u: goto label_3cd630;
        case 0x3cd634u: goto label_3cd634;
        case 0x3cd638u: goto label_3cd638;
        case 0x3cd63cu: goto label_3cd63c;
        case 0x3cd640u: goto label_3cd640;
        case 0x3cd644u: goto label_3cd644;
        case 0x3cd648u: goto label_3cd648;
        case 0x3cd64cu: goto label_3cd64c;
        case 0x3cd650u: goto label_3cd650;
        case 0x3cd654u: goto label_3cd654;
        case 0x3cd658u: goto label_3cd658;
        case 0x3cd65cu: goto label_3cd65c;
        case 0x3cd660u: goto label_3cd660;
        case 0x3cd664u: goto label_3cd664;
        case 0x3cd668u: goto label_3cd668;
        case 0x3cd66cu: goto label_3cd66c;
        case 0x3cd670u: goto label_3cd670;
        case 0x3cd674u: goto label_3cd674;
        case 0x3cd678u: goto label_3cd678;
        case 0x3cd67cu: goto label_3cd67c;
        case 0x3cd680u: goto label_3cd680;
        case 0x3cd684u: goto label_3cd684;
        case 0x3cd688u: goto label_3cd688;
        case 0x3cd68cu: goto label_3cd68c;
        case 0x3cd690u: goto label_3cd690;
        case 0x3cd694u: goto label_3cd694;
        case 0x3cd698u: goto label_3cd698;
        case 0x3cd69cu: goto label_3cd69c;
        case 0x3cd6a0u: goto label_3cd6a0;
        case 0x3cd6a4u: goto label_3cd6a4;
        case 0x3cd6a8u: goto label_3cd6a8;
        case 0x3cd6acu: goto label_3cd6ac;
        case 0x3cd6b0u: goto label_3cd6b0;
        case 0x3cd6b4u: goto label_3cd6b4;
        case 0x3cd6b8u: goto label_3cd6b8;
        case 0x3cd6bcu: goto label_3cd6bc;
        case 0x3cd6c0u: goto label_3cd6c0;
        case 0x3cd6c4u: goto label_3cd6c4;
        default: break;
    }

    ctx->pc = 0x3ccf68u;

label_3ccf68:
    // 0x3ccf68: 0x27bdf680  addiu       $sp, $sp, -0x980
    ctx->pc = 0x3ccf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964864));
label_3ccf6c:
    // 0x3ccf6c: 0x7fb508f0  sq          $s5, 0x8F0($sp)
    ctx->pc = 0x3ccf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 21));
label_3ccf70:
    // 0x3ccf70: 0x7fb708d0  sq          $s7, 0x8D0($sp)
    ctx->pc = 0x3ccf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 23));
label_3ccf74:
    // 0x3ccf74: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ccf74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ccf78:
    // 0x3ccf78: 0x7fb00940  sq          $s0, 0x940($sp)
    ctx->pc = 0x3ccf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 16));
label_3ccf7c:
    // 0x3ccf7c: 0x7fb10930  sq          $s1, 0x930($sp)
    ctx->pc = 0x3ccf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 17));
label_3ccf80:
    // 0x3ccf80: 0x7fb20920  sq          $s2, 0x920($sp)
    ctx->pc = 0x3ccf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 18));
label_3ccf84:
    // 0x3ccf84: 0x7fb30910  sq          $s3, 0x910($sp)
    ctx->pc = 0x3ccf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 19));
label_3ccf88:
    // 0x3ccf88: 0x7fb40900  sq          $s4, 0x900($sp)
    ctx->pc = 0x3ccf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 20));
label_3ccf8c:
    // 0x3ccf8c: 0x7fb608e0  sq          $s6, 0x8E0($sp)
    ctx->pc = 0x3ccf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 22));
label_3ccf90:
    // 0x3ccf90: 0x7fbe08c0  sq          $fp, 0x8C0($sp)
    ctx->pc = 0x3ccf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 30));
label_3ccf94:
    // 0x3ccf94: 0xffbf08b0  sd          $ra, 0x8B0($sp)
    ctx->pc = 0x3ccf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2224), GPR_U64(ctx, 31));
label_3ccf98:
    // 0x3ccf98: 0xe7b80970  swc1        $f24, 0x970($sp)
    ctx->pc = 0x3ccf98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_3ccf9c:
    // 0x3ccf9c: 0xe7b70968  swc1        $f23, 0x968($sp)
    ctx->pc = 0x3ccf9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_3ccfa0:
    // 0x3ccfa0: 0xe7b60960  swc1        $f22, 0x960($sp)
    ctx->pc = 0x3ccfa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_3ccfa4:
    // 0x3ccfa4: 0xe7b50958  swc1        $f21, 0x958($sp)
    ctx->pc = 0x3ccfa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2392), bits); }
label_3ccfa8:
    // 0x3ccfa8: 0xe7b40950  swc1        $f20, 0x950($sp)
    ctx->pc = 0x3ccfa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2384), bits); }
label_3ccfac:
    // 0x3ccfac: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ccfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ccfb0:
    // 0x3ccfb0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ccfb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ccfb4:
    // 0x3ccfb4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ccfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ccfb8:
    // 0x3ccfb8: 0x40f809  jalr        $v0
label_3ccfbc:
    if (ctx->pc == 0x3CCFBCu) {
        ctx->pc = 0x3CCFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFB8u;
        // 0x3ccfbc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCFC0u;
        goto label_3ccfc0;
    }
    ctx->pc = 0x3CCFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CCFC0u);
        ctx->pc = 0x3CCFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFB8u;
        // 0x3ccfbc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCFB8u, 0x3CCFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCFC0u;
label_3ccfc0:
    // 0x3ccfc0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3ccfc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ccfc4:
    // 0x3ccfc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ccfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ccfc8:
    // 0x3ccfc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ccfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ccfcc:
    // 0x3ccfcc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ccfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ccfd0:
    // 0x3ccfd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ccfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ccfd4:
    // 0x3ccfd4: 0x0  nop
    ctx->pc = 0x3ccfd4u;
    // NOP
label_3ccfd8:
    // 0x3ccfd8: 0x0  nop
    ctx->pc = 0x3ccfd8u;
    // NOP
label_3ccfdc:
    // 0x3ccfdc: 0x0  nop
    ctx->pc = 0x3ccfdcu;
    // NOP
label_3ccfe0:
    // 0x3ccfe0: 0x0  nop
    ctx->pc = 0x3ccfe0u;
    // NOP
label_3ccfe4:
    // 0x3ccfe4: 0x0  nop
    ctx->pc = 0x3ccfe4u;
    // NOP
label_3ccfe8:
    // 0x3ccfe8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ccfec:
    if (ctx->pc == 0x3CCFECu) {
        ctx->pc = 0x3CCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFE8u;
        // 0x3ccfec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCFF0u;
        goto label_3ccff0;
    }
    ctx->pc = 0x3CCFE8u;
    {
        const bool branch_taken_0x3ccfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFE8u;
        // 0x3ccfec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccfe8) {
            ctx->pc = 0x3CCFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ccfd8;
        }
    }
    ctx->pc = 0x3CCFF0u;
label_3ccff0:
    // 0x3ccff0: 0xc138ddc  jal         func_4E3770
label_3ccff4:
    if (ctx->pc == 0x3CCFF4u) {
        ctx->pc = 0x3CCFF8u;
        goto label_3ccff8;
    }
    ctx->pc = 0x3CCFF0u;
    SET_GPR_U32(ctx, 31, 0x3CCFF8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3CCFF0u, 0x3CCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFF8u;
label_3ccff8:
    // 0x3ccff8: 0xafbd08a0  sw          $sp, 0x8A0($sp)
    ctx->pc = 0x3ccff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 29));
label_3ccffc:
    // 0x3ccffc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3ccffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3cd000:
    // 0x3cd000: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3cd000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3cd004:
    // 0x3cd004: 0x5462004c  bnel        $v1, $v0, . + 4 + (0x4C << 2)
label_3cd008:
    if (ctx->pc == 0x3CD008u) {
        ctx->pc = 0x3CD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD004u;
        // 0x3cd008: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD00Cu;
        goto label_3cd00c;
    }
    ctx->pc = 0x3CD004u;
    {
        const bool branch_taken_0x3cd004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd004) {
            ctx->pc = 0x3CD008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD004u;
            // 0x3cd008: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD138u;
            goto label_3cd138;
        }
    }
    ctx->pc = 0x3CD00Cu;
label_3cd00c:
    // 0x3cd00c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cd010:
    // 0x3cd010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cd010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cd014:
    // 0x3cd014: 0x2454b8b8  addiu       $s4, $v0, -0x4748
    ctx->pc = 0x3cd014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3cd018:
    // 0x3cd018: 0xc0cd4ee  jal         func_3353B8
label_3cd01c:
    if (ctx->pc == 0x3CD01Cu) {
        ctx->pc = 0x3CD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD018u;
        // 0x3cd01c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD020u;
        goto label_3cd020;
    }
    ctx->pc = 0x3CD018u;
    SET_GPR_U32(ctx, 31, 0x3CD020u);
    ctx->pc = 0x3CD01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD018u;
    // 0x3cd01c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3CD018u, 0x3CD020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD020u;
label_3cd020:
    // 0x3cd020: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_3cd024:
    if (ctx->pc == 0x3CD024u) {
        ctx->pc = 0x3CD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD020u;
        // 0x3cd024: 0x8ee20008  lw          $v0, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD028u;
        goto label_3cd028;
    }
    ctx->pc = 0x3CD020u;
    {
        const bool branch_taken_0x3cd020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd020) {
            ctx->pc = 0x3CD024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD020u;
            // 0x3cd024: 0x8ee20008  lw          $v0, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD100u;
            goto label_3cd100;
        }
    }
    ctx->pc = 0x3CD028u;
label_3cd028:
    // 0x3cd028: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3cd028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3cd02c:
    // 0x3cd02c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cd02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cd030:
    // 0x3cd030: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3cd030u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3cd034:
    // 0x3cd034: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3cd034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3cd038:
    // 0x3cd038: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cd038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cd03c:
    // 0x3cd03c: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3cd03cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3cd040:
    // 0x3cd040: 0x263148d8  addiu       $s1, $s1, 0x48D8
    ctx->pc = 0x3cd040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18648));
label_3cd044:
    // 0x3cd044: 0xc0cd518  jal         func_335460
label_3cd048:
    if (ctx->pc == 0x3CD048u) {
        ctx->pc = 0x3CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD044u;
        // 0x3cd048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD04Cu;
        goto label_3cd04c;
    }
    ctx->pc = 0x3CD044u;
    SET_GPR_U32(ctx, 31, 0x3CD04Cu);
    ctx->pc = 0x3CD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD044u;
    // 0x3cd048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD044u, 0x3CD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD04Cu;
label_3cd04c:
    // 0x3cd04c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cd04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cd050:
    // 0x3cd050: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3cd050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3cd054:
    // 0x3cd054: 0x27b00870  addiu       $s0, $sp, 0x870
    ctx->pc = 0x3cd054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3cd058:
    // 0x3cd058: 0xe7a00878  swc1        $f0, 0x878($sp)
    ctx->pc = 0x3cd058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2168), bits); }
label_3cd05c:
    // 0x3cd05c: 0xafa00870  sw          $zero, 0x870($sp)
    ctx->pc = 0x3cd05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 0));
label_3cd060:
    // 0x3cd060: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3cd060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3cd064:
    // 0x3cd064: 0xafa00874  sw          $zero, 0x874($sp)
    ctx->pc = 0x3cd064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2164), GPR_U32(ctx, 0));
label_3cd068:
    // 0x3cd068: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x3cd068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3cd06c:
    // 0x3cd06c: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x3cd06cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cd070:
    // 0x3cd070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd074:
    // 0x3cd074: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3cd074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3cd078:
    // 0x3cd078: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cd078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cd07c:
    // 0x3cd07c: 0x7ba20870  lq          $v0, 0x870($sp)
    ctx->pc = 0x3cd07cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3cd080:
    // 0x3cd080: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cd080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cd084:
    // 0x3cd084: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cd084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cd088:
    // 0x3cd088: 0xc136b18  jal         func_4DAC60
label_3cd08c:
    if (ctx->pc == 0x3CD08Cu) {
        ctx->pc = 0x3CD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD088u;
        // 0x3cd08c: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD090u;
        goto label_3cd090;
    }
    ctx->pc = 0x3CD088u;
    SET_GPR_U32(ctx, 31, 0x3CD090u);
    ctx->pc = 0x3CD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD088u;
    // 0x3cd08c: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CD088u, 0x3CD090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD090u;
label_3cd090:
    // 0x3cd090: 0x7ba20870  lq          $v0, 0x870($sp)
    ctx->pc = 0x3cd090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3cd094:
    // 0x3cd094: 0x27b20840  addiu       $s2, $sp, 0x840
    ctx->pc = 0x3cd094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3cd098:
    // 0x3cd098: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3cd098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cd09c:
    // 0x3cd09c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3cd09cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3cd0a0:
    // 0x3cd0a0: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3cd0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3cd0a4:
    // 0x3cd0a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3cd0a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3cd0a8:
    // 0x3cd0a8: 0xc0cd518  jal         func_335460
label_3cd0ac:
    if (ctx->pc == 0x3CD0ACu) {
        ctx->pc = 0x3CD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0A8u;
        // 0x3cd0ac: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0B0u;
        goto label_3cd0b0;
    }
    ctx->pc = 0x3CD0A8u;
    SET_GPR_U32(ctx, 31, 0x3CD0B0u);
    ctx->pc = 0x3CD0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD0A8u;
    // 0x3cd0ac: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD0A8u, 0x3CD0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD0B0u;
label_3cd0b0:
    // 0x3cd0b0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3cd0b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3cd0b4:
    // 0x3cd0b4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3cd0b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3cd0b8:
    // 0x3cd0b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3cd0b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3cd0bc:
    // 0x3cd0bc: 0xc0cd518  jal         func_335460
label_3cd0c0:
    if (ctx->pc == 0x3CD0C0u) {
        ctx->pc = 0x3CD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0BCu;
        // 0x3cd0c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0C4u;
        goto label_3cd0c4;
    }
    ctx->pc = 0x3CD0BCu;
    SET_GPR_U32(ctx, 31, 0x3CD0C4u);
    ctx->pc = 0x3CD0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD0BCu;
    // 0x3cd0c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD0BCu, 0x3CD0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD0C4u;
label_3cd0c4:
    // 0x3cd0c4: 0xe7b50890  swc1        $f21, 0x890($sp)
    ctx->pc = 0x3cd0c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
label_3cd0c8:
    // 0x3cd0c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3cd0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd0cc:
    // 0x3cd0cc: 0xe7a00894  swc1        $f0, 0x894($sp)
    ctx->pc = 0x3cd0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2196), bits); }
label_3cd0d0:
    // 0x3cd0d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd0d4:
    // 0x3cd0d4: 0xe7b7089c  swc1        $f23, 0x89C($sp)
    ctx->pc = 0x3cd0d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2204), bits); }
label_3cd0d8:
    // 0x3cd0d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3cd0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd0dc:
    // 0x3cd0dc: 0xafa00898  sw          $zero, 0x898($sp)
    ctx->pc = 0x3cd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2200), GPR_U32(ctx, 0));
label_3cd0e0:
    // 0x3cd0e0: 0x7ba20890  lq          $v0, 0x890($sp)
    ctx->pc = 0x3cd0e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3cd0e4:
    // 0x3cd0e4: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3cd0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3cd0e8:
    // 0x3cd0e8: 0xc0e9f84  jal         func_3A7E10
label_3cd0ec:
    if (ctx->pc == 0x3CD0ECu) {
        ctx->pc = 0x3CD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0E8u;
        // 0x3cd0ec: 0x7fa20880  sq          $v0, 0x880($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0F0u;
        goto label_3cd0f0;
    }
    ctx->pc = 0x3CD0E8u;
    SET_GPR_U32(ctx, 31, 0x3CD0F0u);
    ctx->pc = 0x3CD0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD0E8u;
    // 0x3cd0ec: 0x7fa20880  sq          $v0, 0x880($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3CD0E8u, 0x3CD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD0F0u;
label_3cd0f0:
    // 0x3cd0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd0f4:
    // 0x3cd0f4: 0xc0f15bc  jal         func_3C56F0
label_3cd0f8:
    if (ctx->pc == 0x3CD0F8u) {
        ctx->pc = 0x3CD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD0F4u;
        // 0x3cd0f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD0FCu;
        goto label_3cd0fc;
    }
    ctx->pc = 0x3CD0F4u;
    SET_GPR_U32(ctx, 31, 0x3CD0FCu);
    ctx->pc = 0x3CD0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD0F4u;
    // 0x3cd0f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CD0F4u, 0x3CD0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD0FCu;
label_3cd0fc:
    // 0x3cd0fc: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x3cd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3cd100:
    // 0x3cd100: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x3cd100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_3cd104:
    // 0x3cd104: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3cd108:
    if (ctx->pc == 0x3CD108u) {
        ctx->pc = 0x3CD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD104u;
        // 0x3cd108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD10Cu;
        goto label_3cd10c;
    }
    ctx->pc = 0x3CD104u;
    {
        const bool branch_taken_0x3cd104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD104u;
        // 0x3cd108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd104) {
            ctx->pc = 0x3CD11Cu;
            goto label_3cd11c;
        }
    }
    ctx->pc = 0x3CD10Cu;
label_3cd10c:
    // 0x3cd10c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3cd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3cd110:
    // 0x3cd110: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3cd110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3cd114:
    // 0x3cd114: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3cd114u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_3cd118:
    // 0x3cd118: 0xaee3000c  sw          $v1, 0xC($s7)
    ctx->pc = 0x3cd118u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
label_3cd11c:
    // 0x3cd11c: 0xc0cd4ee  jal         func_3353B8
label_3cd120:
    if (ctx->pc == 0x3CD120u) {
        ctx->pc = 0x3CD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD11Cu;
        // 0x3cd120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD124u;
        goto label_3cd124;
    }
    ctx->pc = 0x3CD11Cu;
    SET_GPR_U32(ctx, 31, 0x3CD124u);
    ctx->pc = 0x3CD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD11Cu;
    // 0x3cd120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3CD11Cu, 0x3CD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD124u;
label_3cd124:
    // 0x3cd124: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x3cd124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3cd128:
    // 0x3cd128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cd12c:
    // 0x3cd12c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3cd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cd130:
    // 0x3cd130: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x3cd130u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
label_3cd134:
    // 0x3cd134: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3cd134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3cd138:
    // 0x3cd138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cd138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cd13c:
    // 0x3cd13c: 0x546200c4  bnel        $v1, $v0, . + 4 + (0xC4 << 2)
label_3cd140:
    if (ctx->pc == 0x3CD140u) {
        ctx->pc = 0x3CD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD13Cu;
        // 0x3cd140: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD144u;
        goto label_3cd144;
    }
    ctx->pc = 0x3CD13Cu;
    {
        const bool branch_taken_0x3cd13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd13c) {
            ctx->pc = 0x3CD140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD13Cu;
            // 0x3cd140: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD450u;
            goto label_3cd450;
        }
    }
    ctx->pc = 0x3CD144u;
label_3cd144:
    // 0x3cd144: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cd144u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cd148:
    // 0x3cd148: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3cd148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3cd14c:
    // 0x3cd14c: 0x27a40850  addiu       $a0, $sp, 0x850
    ctx->pc = 0x3cd14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3cd150:
    // 0x3cd150: 0x261049e8  addiu       $s0, $s0, 0x49E8
    ctx->pc = 0x3cd150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18920));
label_3cd154:
    // 0x3cd154: 0xc0e8f5c  jal         func_3A3D70
label_3cd158:
    if (ctx->pc == 0x3CD158u) {
        ctx->pc = 0x3CD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD154u;
        // 0x3cd158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD15Cu;
        goto label_3cd15c;
    }
    ctx->pc = 0x3CD154u;
    SET_GPR_U32(ctx, 31, 0x3CD15Cu);
    ctx->pc = 0x3CD158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD154u;
    // 0x3cd158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3CD154u, 0x3CD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD15Cu;
label_3cd15c:
    // 0x3cd15c: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x3cd15cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_3cd160:
    // 0x3cd160: 0x27be0840  addiu       $fp, $sp, 0x840
    ctx->pc = 0x3cd160u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3cd164:
    // 0x3cd164: 0x7ba20850  lq          $v0, 0x850($sp)
    ctx->pc = 0x3cd164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3cd168:
    // 0x3cd168: 0x27b40860  addiu       $s4, $sp, 0x860
    ctx->pc = 0x3cd168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3cd16c:
    // 0x3cd16c: 0x27b60870  addiu       $s6, $sp, 0x870
    ctx->pc = 0x3cd16cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3cd170:
    // 0x3cd170: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3cd170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3cd174:
    // 0x3cd174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd178:
    // 0x3cd178: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3cd178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3cd17c:
    // 0x3cd17c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3cd17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3cd180:
    // 0x3cd180: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cd180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cd184:
    // 0x3cd184: 0xafa00870  sw          $zero, 0x870($sp)
    ctx->pc = 0x3cd184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 0));
label_3cd188:
    // 0x3cd188: 0xc0e9fa6  jal         func_3A7E98
label_3cd18c:
    if (ctx->pc == 0x3CD18Cu) {
        ctx->pc = 0x3CD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD188u;
        // 0x3cd18c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD190u;
        goto label_3cd190;
    }
    ctx->pc = 0x3CD188u;
    SET_GPR_U32(ctx, 31, 0x3CD190u);
    ctx->pc = 0x3CD18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD188u;
    // 0x3cd18c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3CD188u, 0x3CD190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD190u;
label_3cd190:
    // 0x3cd190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd194:
    // 0x3cd194: 0xc0f15bc  jal         func_3C56F0
label_3cd198:
    if (ctx->pc == 0x3CD198u) {
        ctx->pc = 0x3CD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD194u;
        // 0x3cd198: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD19Cu;
        goto label_3cd19c;
    }
    ctx->pc = 0x3CD194u;
    SET_GPR_U32(ctx, 31, 0x3CD19Cu);
    ctx->pc = 0x3CD198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD194u;
    // 0x3cd198: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CD194u, 0x3CD19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD19Cu;
label_3cd19c:
    // 0x3cd19c: 0x8ee30018  lw          $v1, 0x18($s7)
    ctx->pc = 0x3cd19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_3cd1a0:
    // 0x3cd1a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3cd1a4:
    if (ctx->pc == 0x3CD1A4u) {
        ctx->pc = 0x3CD1A8u;
        goto label_3cd1a8;
    }
    ctx->pc = 0x3CD1A0u;
    {
        const bool branch_taken_0x3cd1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd1a0) {
            ctx->pc = 0x3CD1D8u;
            goto label_3cd1d8;
        }
    }
    ctx->pc = 0x3CD1A8u;
label_3cd1a8:
    // 0x3cd1a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3cd1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd1ac:
    // 0x3cd1ac: 0xc0e932c  jal         func_3A4CB0
label_3cd1b0:
    if (ctx->pc == 0x3CD1B0u) {
        ctx->pc = 0x3CD1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1ACu;
        // 0x3cd1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1B4u;
        goto label_3cd1b4;
    }
    ctx->pc = 0x3CD1ACu;
    SET_GPR_U32(ctx, 31, 0x3CD1B4u);
    ctx->pc = 0x3CD1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1ACu;
    // 0x3cd1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CB0u, 0x3CD1ACu, 0x3CD1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD1B4u;
label_3cd1b4:
    // 0x3cd1b4: 0x8ee70018  lw          $a3, 0x18($s7)
    ctx->pc = 0x3cd1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_3cd1b8:
    // 0x3cd1b8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3cd1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3cd1bc:
    // 0x3cd1bc: 0x8fa608a0  lw          $a2, 0x8A0($sp)
    ctx->pc = 0x3cd1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
label_3cd1c0:
    // 0x3cd1c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cd1c4:
    // 0x3cd1c4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cd1c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cd1c8:
    // 0x3cd1c8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cd1cc:
    // 0x3cd1cc: 0x60f809  jalr        $v1
label_3cd1d0:
    if (ctx->pc == 0x3CD1D0u) {
        ctx->pc = 0x3CD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1CCu;
        // 0x3cd1d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1D4u;
        goto label_3cd1d4;
    }
    ctx->pc = 0x3CD1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CD1D4u);
        ctx->pc = 0x3CD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1CCu;
        // 0x3cd1d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD1CCu, 0x3CD1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD1D4u;
label_3cd1d4:
    // 0x3cd1d4: 0xaee00018  sw          $zero, 0x18($s7)
    ctx->pc = 0x3cd1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 0));
label_3cd1d8:
    // 0x3cd1d8: 0x3c02c4cb  lui         $v0, 0xC4CB
    ctx->pc = 0x3cd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50379 << 16));
label_3cd1dc:
    // 0x3cd1dc: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x3cd1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_3cd1e0:
    // 0x3cd1e0: 0x34422a87  ori         $v0, $v0, 0x2A87
    ctx->pc = 0x3cd1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10887);
label_3cd1e4:
    // 0x3cd1e4: 0x10620099  beq         $v1, $v0, . + 4 + (0x99 << 2)
label_3cd1e8:
    if (ctx->pc == 0x3CD1E8u) {
        ctx->pc = 0x3CD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1E4u;
        // 0x3cd1e8: 0x27b20440  addiu       $s2, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD1ECu;
        goto label_3cd1ec;
    }
    ctx->pc = 0x3CD1E4u;
    {
        const bool branch_taken_0x3cd1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1E4u;
        // 0x3cd1e8: 0x27b20440  addiu       $s2, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd1e4) {
            ctx->pc = 0x3CD44Cu;
            goto label_3cd44c;
        }
    }
    ctx->pc = 0x3CD1ECu;
label_3cd1ec:
    // 0x3cd1ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd1f0:
    // 0x3cd1f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cd1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cd1f4:
    // 0x3cd1f4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3cd1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3cd1f8:
    // 0x3cd1f8: 0xc0e911e  jal         func_3A4478
label_3cd1fc:
    if (ctx->pc == 0x3CD1FCu) {
        ctx->pc = 0x3CD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD1F8u;
        // 0x3cd1fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD200u;
        goto label_3cd200;
    }
    ctx->pc = 0x3CD1F8u;
    SET_GPR_U32(ctx, 31, 0x3CD200u);
    ctx->pc = 0x3CD1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD1F8u;
    // 0x3cd1fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3CD1F8u, 0x3CD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD200u;
label_3cd200:
    // 0x3cd200: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x3cd200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_3cd204:
    // 0x3cd204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cd204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd208:
    // 0x3cd208: 0x27a20460  addiu       $v0, $sp, 0x460
    ctx->pc = 0x3cd208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3cd20c:
    // 0x3cd20c: 0xafa00460  sw          $zero, 0x460($sp)
    ctx->pc = 0x3cd20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
label_3cd210:
    // 0x3cd210: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3cd210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3cd214:
    // 0x3cd214: 0xafa00468  sw          $zero, 0x468($sp)
    ctx->pc = 0x3cd214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 0));
label_3cd218:
    // 0x3cd218: 0xe458000c  swc1        $f24, 0xC($v0)
    ctx->pc = 0x3cd218u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3cd21c:
    // 0x3cd21c: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3cd21cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3cd220:
    // 0x3cd220: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3cd220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3cd224:
    // 0x3cd224: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3cd224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3cd228:
    // 0x3cd228: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3cd228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3cd22c:
    // 0x3cd22c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3cd22cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3cd230:
    // 0x3cd230: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3cd230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3cd234:
    // 0x3cd234: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3cd234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cd238:
    // 0x3cd238: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3cd238u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3cd23c:
    // 0x3cd23c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3cd23cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3cd240:
    // 0x3cd240: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3cd240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cd244:
    // 0x3cd244: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3cd244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cd248:
    // 0x3cd248: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3cd248u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3cd24c:
    // 0x3cd24c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3cd24cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cd250:
    // 0x3cd250: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3cd250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3cd254:
    // 0x3cd254: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3cd254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3cd258:
    // 0x3cd258: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3cd258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cd25c:
    // 0x3cd25c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3cd25cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3cd260:
    // 0x3cd260: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3cd260u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3cd264:
    // 0x3cd264: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3cd264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cd268:
    // 0x3cd268: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3cd268u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3cd26c:
    // 0x3cd26c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3cd26cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3cd270:
    // 0x3cd270: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cd270u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cd274:
    // 0x3cd274: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3cd274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3cd278:
    // 0x3cd278: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3cd278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3cd27c:
    // 0x3cd27c: 0x26104a08  addiu       $s0, $s0, 0x4A08
    ctx->pc = 0x3cd27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18952));
label_3cd280:
    // 0x3cd280: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3cd280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3cd284:
    // 0x3cd284: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3cd284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cd288:
    // 0x3cd288: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3cd288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3cd28c:
    // 0x3cd28c: 0xc0e90ca  jal         func_3A4328
label_3cd290:
    if (ctx->pc == 0x3CD290u) {
        ctx->pc = 0x3CD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD28Cu;
        // 0x3cd290: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD294u;
        goto label_3cd294;
    }
    ctx->pc = 0x3CD28Cu;
    SET_GPR_U32(ctx, 31, 0x3CD294u);
    ctx->pc = 0x3CD290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD28Cu;
    // 0x3cd290: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3CD28Cu, 0x3CD294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD294u;
label_3cd294:
    // 0x3cd294: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3cd294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3cd298:
    // 0x3cd298: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3cd298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3cd29c:
    // 0x3cd29c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3cd29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3cd2a0:
    // 0x3cd2a0: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3cd2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3cd2a4:
    // 0x3cd2a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cd2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2a8:
    // 0x3cd2a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3cd2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3cd2ac:
    // 0x3cd2ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3cd2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3cd2b0:
    // 0x3cd2b0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cd2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cd2b4:
    // 0x3cd2b4: 0xc136b18  jal         func_4DAC60
label_3cd2b8:
    if (ctx->pc == 0x3CD2B8u) {
        ctx->pc = 0x3CD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2B4u;
        // 0x3cd2b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2BCu;
        goto label_3cd2bc;
    }
    ctx->pc = 0x3CD2B4u;
    SET_GPR_U32(ctx, 31, 0x3CD2BCu);
    ctx->pc = 0x3CD2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD2B4u;
    // 0x3cd2b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CD2B4u, 0x3CD2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD2BCu;
label_3cd2bc:
    // 0x3cd2bc: 0x7ba20870  lq          $v0, 0x870($sp)
    ctx->pc = 0x3cd2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3cd2c0:
    // 0x3cd2c0: 0x27b10880  addiu       $s1, $sp, 0x880
    ctx->pc = 0x3cd2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3cd2c4:
    // 0x3cd2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2c8:
    // 0x3cd2c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2cc:
    // 0x3cd2cc: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3cd2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3cd2d0:
    // 0x3cd2d0: 0xc0e911e  jal         func_3A4478
label_3cd2d4:
    if (ctx->pc == 0x3CD2D4u) {
        ctx->pc = 0x3CD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2D0u;
        // 0x3cd2d4: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2D8u;
        goto label_3cd2d8;
    }
    ctx->pc = 0x3CD2D0u;
    SET_GPR_U32(ctx, 31, 0x3CD2D8u);
    ctx->pc = 0x3CD2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD2D0u;
    // 0x3cd2d4: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3CD2D0u, 0x3CD2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD2D8u;
label_3cd2d8:
    // 0x3cd2d8: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x3cd2d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3cd2dc:
    // 0x3cd2dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3cd2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2e0:
    // 0x3cd2e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2e4:
    // 0x3cd2e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3cd2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2e8:
    // 0x3cd2e8: 0xc0e9f84  jal         func_3A7E10
label_3cd2ec:
    if (ctx->pc == 0x3CD2ECu) {
        ctx->pc = 0x3CD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2E8u;
        // 0x3cd2ec: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2F0u;
        goto label_3cd2f0;
    }
    ctx->pc = 0x3CD2E8u;
    SET_GPR_U32(ctx, 31, 0x3CD2F0u);
    ctx->pc = 0x3CD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD2E8u;
    // 0x3cd2ec: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3CD2E8u, 0x3CD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD2F0u;
label_3cd2f0:
    // 0x3cd2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2f4:
    // 0x3cd2f4: 0xc0f15bc  jal         func_3C56F0
label_3cd2f8:
    if (ctx->pc == 0x3CD2F8u) {
        ctx->pc = 0x3CD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD2F4u;
        // 0x3cd2f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD2FCu;
        goto label_3cd2fc;
    }
    ctx->pc = 0x3CD2F4u;
    SET_GPR_U32(ctx, 31, 0x3CD2FCu);
    ctx->pc = 0x3CD2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD2F4u;
    // 0x3cd2f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CD2F4u, 0x3CD2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD2FCu;
label_3cd2fc:
    // 0x3cd2fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3cd2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cd300:
    // 0x3cd300: 0xc0e90ca  jal         func_3A4328
label_3cd304:
    if (ctx->pc == 0x3CD304u) {
        ctx->pc = 0x3CD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD300u;
        // 0x3cd304: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD308u;
        goto label_3cd308;
    }
    ctx->pc = 0x3CD300u;
    SET_GPR_U32(ctx, 31, 0x3CD308u);
    ctx->pc = 0x3CD304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD300u;
    // 0x3cd304: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3CD300u, 0x3CD308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD308u;
label_3cd308:
    // 0x3cd308: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3cd308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3cd30c:
    // 0x3cd30c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cd30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cd310:
    // 0x3cd310: 0xc136afa  jal         func_4DABE8
label_3cd314:
    if (ctx->pc == 0x3CD314u) {
        ctx->pc = 0x3CD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD310u;
        // 0x3cd314: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD318u;
        goto label_3cd318;
    }
    ctx->pc = 0x3CD310u;
    SET_GPR_U32(ctx, 31, 0x3CD318u);
    ctx->pc = 0x3CD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD310u;
    // 0x3cd314: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3CD310u, 0x3CD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD318u;
label_3cd318:
    // 0x3cd318: 0x7ba20870  lq          $v0, 0x870($sp)
    ctx->pc = 0x3cd318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3cd31c:
    // 0x3cd31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd320:
    // 0x3cd320: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd324:
    // 0x3cd324: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3cd324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3cd328:
    // 0x3cd328: 0xc0e911e  jal         func_3A4478
label_3cd32c:
    if (ctx->pc == 0x3CD32Cu) {
        ctx->pc = 0x3CD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD328u;
        // 0x3cd32c: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD330u;
        goto label_3cd330;
    }
    ctx->pc = 0x3CD328u;
    SET_GPR_U32(ctx, 31, 0x3CD330u);
    ctx->pc = 0x3CD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD328u;
    // 0x3cd32c: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3CD328u, 0x3CD330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD330u;
label_3cd330:
    // 0x3cd330: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x3cd330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3cd334:
    // 0x3cd334: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3cd334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd338:
    // 0x3cd338: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3cd338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3cd33c:
    // 0x3cd33c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd340:
    // 0x3cd340: 0xc0e9f84  jal         func_3A7E10
label_3cd344:
    if (ctx->pc == 0x3CD344u) {
        ctx->pc = 0x3CD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD340u;
        // 0x3cd344: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD348u;
        goto label_3cd348;
    }
    ctx->pc = 0x3CD340u;
    SET_GPR_U32(ctx, 31, 0x3CD348u);
    ctx->pc = 0x3CD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD340u;
    // 0x3cd344: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3CD340u, 0x3CD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD348u;
label_3cd348:
    // 0x3cd348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd34c:
    // 0x3cd34c: 0xc0f15bc  jal         func_3C56F0
label_3cd350:
    if (ctx->pc == 0x3CD350u) {
        ctx->pc = 0x3CD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD34Cu;
        // 0x3cd350: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD354u;
        goto label_3cd354;
    }
    ctx->pc = 0x3CD34Cu;
    SET_GPR_U32(ctx, 31, 0x3CD354u);
    ctx->pc = 0x3CD350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD34Cu;
    // 0x3cd350: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CD34Cu, 0x3CD354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD354u;
label_3cd354:
    // 0x3cd354: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3cd354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3cd358:
    // 0x3cd358: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x3cd358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_3cd35c:
    // 0x3cd35c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3cd35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3cd360:
    // 0x3cd360: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cd360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cd364:
    // 0x3cd364: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3cd364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3cd368:
    // 0x3cd368: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3cd368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3cd36c:
    // 0x3cd36c: 0xc0cd518  jal         func_335460
label_3cd370:
    if (ctx->pc == 0x3CD370u) {
        ctx->pc = 0x3CD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD36Cu;
        // 0x3cd370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD374u;
        goto label_3cd374;
    }
    ctx->pc = 0x3CD36Cu;
    SET_GPR_U32(ctx, 31, 0x3CD374u);
    ctx->pc = 0x3CD370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD36Cu;
    // 0x3cd370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD36Cu, 0x3CD374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD374u;
label_3cd374:
    // 0x3cd374: 0x8fa408a0  lw          $a0, 0x8A0($sp)
    ctx->pc = 0x3cd374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
label_3cd378:
    // 0x3cd378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cd378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd37c:
    // 0x3cd37c: 0xe7a00448  swc1        $f0, 0x448($sp)
    ctx->pc = 0x3cd37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
label_3cd380:
    // 0x3cd380: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x3cd380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
label_3cd384:
    // 0x3cd384: 0xafa00444  sw          $zero, 0x444($sp)
    ctx->pc = 0x3cd384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 0));
label_3cd388:
    // 0x3cd388: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3cd388u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3cd38c:
    // 0x3cd38c: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3cd38cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3cd390:
    // 0x3cd390: 0xc0ea158  jal         func_3A8560
label_3cd394:
    if (ctx->pc == 0x3CD394u) {
        ctx->pc = 0x3CD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD390u;
        // 0x3cd394: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD398u;
        goto label_3cd398;
    }
    ctx->pc = 0x3CD390u;
    SET_GPR_U32(ctx, 31, 0x3CD398u);
    ctx->pc = 0x3CD394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD390u;
    // 0x3cd394: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3CD390u, 0x3CD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD398u;
label_3cd398:
    // 0x3cd398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd39c:
    // 0x3cd39c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3cd39cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3cd3a0:
    // 0x3cd3a0: 0xc0cd518  jal         func_335460
label_3cd3a4:
    if (ctx->pc == 0x3CD3A4u) {
        ctx->pc = 0x3CD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3A0u;
        // 0x3cd3a4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3A8u;
        goto label_3cd3a8;
    }
    ctx->pc = 0x3CD3A0u;
    SET_GPR_U32(ctx, 31, 0x3CD3A8u);
    ctx->pc = 0x3CD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3A0u;
    // 0x3cd3a4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD3A0u, 0x3CD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3A8u;
label_3cd3a8:
    // 0x3cd3a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3cd3a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3cd3ac:
    // 0x3cd3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd3b0:
    // 0x3cd3b0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3cd3b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3cd3b4:
    // 0x3cd3b4: 0xc0cd518  jal         func_335460
label_3cd3b8:
    if (ctx->pc == 0x3CD3B8u) {
        ctx->pc = 0x3CD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3B4u;
        // 0x3cd3b8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3BCu;
        goto label_3cd3bc;
    }
    ctx->pc = 0x3CD3B4u;
    SET_GPR_U32(ctx, 31, 0x3CD3BCu);
    ctx->pc = 0x3CD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3B4u;
    // 0x3cd3b8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD3B4u, 0x3CD3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3BCu;
label_3cd3bc:
    // 0x3cd3bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cd3bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3cd3c0:
    // 0x3cd3c0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3cd3c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3cd3c4:
    // 0x3cd3c4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3cd3c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3cd3c8:
    // 0x3cd3c8: 0xc0cd518  jal         func_335460
label_3cd3cc:
    if (ctx->pc == 0x3CD3CCu) {
        ctx->pc = 0x3CD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD3C8u;
        // 0x3cd3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD3D0u;
        goto label_3cd3d0;
    }
    ctx->pc = 0x3CD3C8u;
    SET_GPR_U32(ctx, 31, 0x3CD3D0u);
    ctx->pc = 0x3CD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD3C8u;
    // 0x3cd3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD3C8u, 0x3CD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD3D0u;
label_3cd3d0:
    // 0x3cd3d0: 0x27b10450  addiu       $s1, $sp, 0x450
    ctx->pc = 0x3cd3d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3cd3d4:
    // 0x3cd3d4: 0xe7b50450  swc1        $f21, 0x450($sp)
    ctx->pc = 0x3cd3d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3cd3d8:
    // 0x3cd3d8: 0xe7b40454  swc1        $f20, 0x454($sp)
    ctx->pc = 0x3cd3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3cd3dc:
    // 0x3cd3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd3e0:
    // 0x3cd3e0: 0xe7a00458  swc1        $f0, 0x458($sp)
    ctx->pc = 0x3cd3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3cd3e4:
    // 0x3cd3e4: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3cd3e4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cd3e8:
    // 0x3cd3e8: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3cd3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3cd3ec:
    // 0x3cd3ec: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3cd3ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3cd3f0:
    // 0x3cd3f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cd3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cd3f4:
    // 0x3cd3f4: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3cd3f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3cd3f8:
    // 0x3cd3f8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3cd3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3cd3fc:
    // 0x3cd3fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3cd3fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3cd400:
    // 0x3cd400: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cd400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cd404:
    // 0x3cd404: 0xc0cd518  jal         func_335460
label_3cd408:
    if (ctx->pc == 0x3CD408u) {
        ctx->pc = 0x3CD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD404u;
        // 0x3cd408: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD40Cu;
        goto label_3cd40c;
    }
    ctx->pc = 0x3CD404u;
    SET_GPR_U32(ctx, 31, 0x3CD40Cu);
    ctx->pc = 0x3CD408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD404u;
    // 0x3cd408: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CD404u, 0x3CD40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD40Cu;
label_3cd40c:
    // 0x3cd40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd410:
    // 0x3cd410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3cd410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd414:
    // 0x3cd414: 0xc136b24  jal         func_4DAC90
label_3cd418:
    if (ctx->pc == 0x3CD418u) {
        ctx->pc = 0x3CD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD414u;
        // 0x3cd418: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD41Cu;
        goto label_3cd41c;
    }
    ctx->pc = 0x3CD414u;
    SET_GPR_U32(ctx, 31, 0x3CD41Cu);
    ctx->pc = 0x3CD418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD414u;
    // 0x3cd418: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3CD414u, 0x3CD41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD41Cu;
label_3cd41c:
    // 0x3cd41c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3cd41cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3cd420:
    // 0x3cd420: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cd420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd424:
    // 0x3cd424: 0x8fa408a0  lw          $a0, 0x8A0($sp)
    ctx->pc = 0x3cd424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
label_3cd428:
    // 0x3cd428: 0xc0ea158  jal         func_3A8560
label_3cd42c:
    if (ctx->pc == 0x3CD42Cu) {
        ctx->pc = 0x3CD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD428u;
        // 0x3cd42c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD430u;
        goto label_3cd430;
    }
    ctx->pc = 0x3CD428u;
    SET_GPR_U32(ctx, 31, 0x3CD430u);
    ctx->pc = 0x3CD42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD428u;
    // 0x3cd42c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3CD428u, 0x3CD430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD430u;
label_3cd430:
    // 0x3cd430: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3cd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3cd434:
    // 0x3cd434: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3cd434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cd438:
    // 0x3cd438: 0x8fa608a0  lw          $a2, 0x8A0($sp)
    ctx->pc = 0x3cd438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2208)));
label_3cd43c:
    // 0x3cd43c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3cd43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3cd440:
    // 0x3cd440: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3cd440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3cd444:
    // 0x3cd444: 0x40f809  jalr        $v0
label_3cd448:
    if (ctx->pc == 0x3CD448u) {
        ctx->pc = 0x3CD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD444u;
        // 0x3cd448: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD44Cu;
        goto label_3cd44c;
    }
    ctx->pc = 0x3CD444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CD44Cu);
        ctx->pc = 0x3CD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD444u;
        // 0x3cd448: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD444u, 0x3CD44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD44Cu;
label_3cd44c:
    // 0x3cd44c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3cd44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3cd450:
    // 0x3cd450: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3cd450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3cd454:
    // 0x3cd454: 0x5462005f  bnel        $v1, $v0, . + 4 + (0x5F << 2)
label_3cd458:
    if (ctx->pc == 0x3CD458u) {
        ctx->pc = 0x3CD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD454u;
        // 0x3cd458: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD45Cu;
        goto label_3cd45c;
    }
    ctx->pc = 0x3CD454u;
    {
        const bool branch_taken_0x3cd454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd454) {
            ctx->pc = 0x3CD458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD454u;
            // 0x3cd458: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD5D4u;
            goto label_3cd5d4;
        }
    }
    ctx->pc = 0x3CD45Cu;
label_3cd45c:
    // 0x3cd45c: 0x27b10860  addiu       $s1, $sp, 0x860
    ctx->pc = 0x3cd45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3cd460:
    // 0x3cd460: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3cd460u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_3cd464:
    // 0x3cd464: 0x27b60430  addiu       $s6, $sp, 0x430
    ctx->pc = 0x3cd464u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3cd468:
    // 0x3cd468: 0x26524a20  addiu       $s2, $s2, 0x4A20
    ctx->pc = 0x3cd468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18976));
label_3cd46c:
    // 0x3cd46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd470:
    // 0x3cd470: 0xc0e90ca  jal         func_3A4328
label_3cd474:
    if (ctx->pc == 0x3CD474u) {
        ctx->pc = 0x3CD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD470u;
        // 0x3cd474: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD478u;
        goto label_3cd478;
    }
    ctx->pc = 0x3CD470u;
    SET_GPR_U32(ctx, 31, 0x3CD478u);
    ctx->pc = 0x3CD474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD470u;
    // 0x3cd474: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3CD470u, 0x3CD478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD478u;
label_3cd478:
    // 0x3cd478: 0x27a40870  addiu       $a0, $sp, 0x870
    ctx->pc = 0x3cd478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3cd47c:
    // 0x3cd47c: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3cd47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3cd480:
    // 0x3cd480: 0xc136b18  jal         func_4DAC60
label_3cd484:
    if (ctx->pc == 0x3CD484u) {
        ctx->pc = 0x3CD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD480u;
        // 0x3cd484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD488u;
        goto label_3cd488;
    }
    ctx->pc = 0x3CD480u;
    SET_GPR_U32(ctx, 31, 0x3CD488u);
    ctx->pc = 0x3CD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD480u;
    // 0x3cd484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CD480u, 0x3CD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD488u;
label_3cd488:
    // 0x3cd488: 0x7ba30870  lq          $v1, 0x870($sp)
    ctx->pc = 0x3cd488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3cd48c:
    // 0x3cd48c: 0x27b00870  addiu       $s0, $sp, 0x870
    ctx->pc = 0x3cd48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3cd490:
    // 0x3cd490: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x3cd490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_3cd494:
    // 0x3cd494: 0x27b40840  addiu       $s4, $sp, 0x840
    ctx->pc = 0x3cd494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3cd498:
    // 0x3cd498: 0x27b30880  addiu       $s3, $sp, 0x880
    ctx->pc = 0x3cd498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3cd49c:
    // 0x3cd49c: 0x7fa30840  sq          $v1, 0x840($sp)
    ctx->pc = 0x3cd49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 3));
label_3cd4a0:
    // 0x3cd4a0: 0x7fa30850  sq          $v1, 0x850($sp)
    ctx->pc = 0x3cd4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 3));
label_3cd4a4:
    // 0x3cd4a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cd4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4a8:
    // 0x3cd4a8: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3cd4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3cd4ac:
    // 0x3cd4ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3cd4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4b0:
    // 0x3cd4b0: 0xafa00880  sw          $zero, 0x880($sp)
    ctx->pc = 0x3cd4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 0));
label_3cd4b4:
    // 0x3cd4b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cd4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4b8:
    // 0x3cd4b8: 0xc0e9fa6  jal         func_3A7E98
label_3cd4bc:
    if (ctx->pc == 0x3CD4BCu) {
        ctx->pc = 0x3CD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD4B8u;
        // 0x3cd4bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD4C0u;
        goto label_3cd4c0;
    }
    ctx->pc = 0x3CD4B8u;
    SET_GPR_U32(ctx, 31, 0x3CD4C0u);
    ctx->pc = 0x3CD4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD4B8u;
    // 0x3cd4bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3CD4B8u, 0x3CD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD4C0u;
label_3cd4c0:
    // 0x3cd4c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cd4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4c4:
    // 0x3cd4c4: 0xc0f15bc  jal         func_3C56F0
label_3cd4c8:
    if (ctx->pc == 0x3CD4C8u) {
        ctx->pc = 0x3CD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD4C4u;
        // 0x3cd4c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD4CCu;
        goto label_3cd4cc;
    }
    ctx->pc = 0x3CD4C4u;
    SET_GPR_U32(ctx, 31, 0x3CD4CCu);
    ctx->pc = 0x3CD4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD4C4u;
    // 0x3cd4c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CD4C4u, 0x3CD4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD4CCu;
label_3cd4cc:
    // 0x3cd4cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4d0:
    // 0x3cd4d0: 0xc0e90ca  jal         func_3A4328
label_3cd4d4:
    if (ctx->pc == 0x3CD4D4u) {
        ctx->pc = 0x3CD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD4D0u;
        // 0x3cd4d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD4D8u;
        goto label_3cd4d8;
    }
    ctx->pc = 0x3CD4D0u;
    SET_GPR_U32(ctx, 31, 0x3CD4D8u);
    ctx->pc = 0x3CD4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD4D0u;
    // 0x3cd4d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3CD4D0u, 0x3CD4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD4D8u;
label_3cd4d8:
    // 0x3cd4d8: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3cd4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3cd4dc:
    // 0x3cd4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4e0:
    // 0x3cd4e0: 0xc136afa  jal         func_4DABE8
label_3cd4e4:
    if (ctx->pc == 0x3CD4E4u) {
        ctx->pc = 0x3CD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD4E0u;
        // 0x3cd4e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD4E8u;
        goto label_3cd4e8;
    }
    ctx->pc = 0x3CD4E0u;
    SET_GPR_U32(ctx, 31, 0x3CD4E8u);
    ctx->pc = 0x3CD4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD4E0u;
    // 0x3cd4e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3CD4E0u, 0x3CD4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD4E8u;
label_3cd4e8:
    // 0x3cd4e8: 0x7ba30870  lq          $v1, 0x870($sp)
    ctx->pc = 0x3cd4e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3cd4ec:
    // 0x3cd4ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3cd4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4f0:
    // 0x3cd4f0: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x3cd4f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_3cd4f4:
    // 0x3cd4f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cd4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4f8:
    // 0x3cd4f8: 0x7fa30840  sq          $v1, 0x840($sp)
    ctx->pc = 0x3cd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 3));
label_3cd4fc:
    // 0x3cd4fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cd4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cd500:
    // 0x3cd500: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3cd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3cd504:
    // 0x3cd504: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cd504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd508:
    // 0x3cd508: 0x7fa30850  sq          $v1, 0x850($sp)
    ctx->pc = 0x3cd508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 3));
label_3cd50c:
    // 0x3cd50c: 0xc0e9fa6  jal         func_3A7E98
label_3cd510:
    if (ctx->pc == 0x3CD510u) {
        ctx->pc = 0x3CD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD50Cu;
        // 0x3cd510: 0xafa00880  sw          $zero, 0x880($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD514u;
        goto label_3cd514;
    }
    ctx->pc = 0x3CD50Cu;
    SET_GPR_U32(ctx, 31, 0x3CD514u);
    ctx->pc = 0x3CD510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD50Cu;
    // 0x3cd510: 0xafa00880  sw          $zero, 0x880($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3CD50Cu, 0x3CD514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD514u;
label_3cd514:
    // 0x3cd514: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cd514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd518:
    // 0x3cd518: 0xc0f15bc  jal         func_3C56F0
label_3cd51c:
    if (ctx->pc == 0x3CD51Cu) {
        ctx->pc = 0x3CD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD518u;
        // 0x3cd51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD520u;
        goto label_3cd520;
    }
    ctx->pc = 0x3CD518u;
    SET_GPR_U32(ctx, 31, 0x3CD520u);
    ctx->pc = 0x3CD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD518u;
    // 0x3cd51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CD518u, 0x3CD520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD520u;
label_3cd520:
    // 0x3cd520: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3cd520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3cd524:
    // 0x3cd524: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cd524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cd528:
    // 0x3cd528: 0xc0e9604  jal         func_3A5810
label_3cd52c:
    if (ctx->pc == 0x3CD52Cu) {
        ctx->pc = 0x3CD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD528u;
        // 0x3cd52c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD530u;
        goto label_3cd530;
    }
    ctx->pc = 0x3CD528u;
    SET_GPR_U32(ctx, 31, 0x3CD530u);
    ctx->pc = 0x3CD52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD528u;
    // 0x3cd52c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5810u, 0x3CD528u, 0x3CD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD530u;
label_3cd530:
    // 0x3cd530: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3cd530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3cd534:
    // 0x3cd534: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3cd534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cd538:
    // 0x3cd538: 0xc0cd4ee  jal         func_3353B8
label_3cd53c:
    if (ctx->pc == 0x3CD53Cu) {
        ctx->pc = 0x3CD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD538u;
        // 0x3cd53c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD540u;
        goto label_3cd540;
    }
    ctx->pc = 0x3CD538u;
    SET_GPR_U32(ctx, 31, 0x3CD540u);
    ctx->pc = 0x3CD53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD538u;
    // 0x3cd53c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3CD538u, 0x3CD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD540u;
label_3cd540:
    // 0x3cd540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cd540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd544:
    // 0x3cd544: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_3cd548:
    if (ctx->pc == 0x3CD548u) {
        ctx->pc = 0x3CD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD544u;
        // 0x3cd548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD54Cu;
        goto label_3cd54c;
    }
    ctx->pc = 0x3CD544u;
    {
        const bool branch_taken_0x3cd544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD544u;
        // 0x3cd548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd544) {
            ctx->pc = 0x3CD568u;
            goto label_3cd568;
        }
    }
    ctx->pc = 0x3CD54Cu;
label_3cd54c:
    // 0x3cd54c: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3cd54cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3cd550:
    // 0x3cd550: 0x3c042a6d  lui         $a0, 0x2A6D
    ctx->pc = 0x3cd550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10861 << 16));
label_3cd554:
    // 0x3cd554: 0x34845cb5  ori         $a0, $a0, 0x5CB5
    ctx->pc = 0x3cd554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23733);
label_3cd558:
    // 0x3cd558: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cd558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd55c:
    // 0x3cd55c: 0xc045c64  jal         func_117190
label_3cd560:
    if (ctx->pc == 0x3CD560u) {
        ctx->pc = 0x3CD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD55Cu;
        // 0x3cd560: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD564u;
        goto label_3cd564;
    }
    ctx->pc = 0x3CD55Cu;
    SET_GPR_U32(ctx, 31, 0x3CD564u);
    ctx->pc = 0x3CD560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD55Cu;
    // 0x3cd560: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3CD55Cu, 0x3CD564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD564u;
label_3cd564:
    // 0x3cd564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cd564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cd568:
    // 0x3cd568: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_3cd56c:
    if (ctx->pc == 0x3CD56Cu) {
        ctx->pc = 0x3CD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD568u;
        // 0x3cd56c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD570u;
        goto label_3cd570;
    }
    ctx->pc = 0x3CD568u;
    {
        const bool branch_taken_0x3cd568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD568u;
        // 0x3cd56c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd568) {
            ctx->pc = 0x3CD58Cu;
            goto label_3cd58c;
        }
    }
    ctx->pc = 0x3CD570u;
label_3cd570:
    // 0x3cd570: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3cd570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3cd574:
    // 0x3cd574: 0x3c04b364  lui         $a0, 0xB364
    ctx->pc = 0x3cd574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45924 << 16));
label_3cd578:
    // 0x3cd578: 0x34840d0f  ori         $a0, $a0, 0xD0F
    ctx->pc = 0x3cd578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3343);
label_3cd57c:
    // 0x3cd57c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cd57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd580:
    // 0x3cd580: 0xc045c64  jal         func_117190
label_3cd584:
    if (ctx->pc == 0x3CD584u) {
        ctx->pc = 0x3CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD580u;
        // 0x3cd584: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD588u;
        goto label_3cd588;
    }
    ctx->pc = 0x3CD580u;
    SET_GPR_U32(ctx, 31, 0x3CD588u);
    ctx->pc = 0x3CD584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD580u;
    // 0x3cd584: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3CD580u, 0x3CD588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD588u;
label_3cd588:
    // 0x3cd588: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cd588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cd58c:
    // 0x3cd58c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_3cd590:
    if (ctx->pc == 0x3CD590u) {
        ctx->pc = 0x3CD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD58Cu;
        // 0x3cd590: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD594u;
        goto label_3cd594;
    }
    ctx->pc = 0x3CD58Cu;
    {
        const bool branch_taken_0x3cd58c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD58Cu;
        // 0x3cd590: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd58c) {
            ctx->pc = 0x3CD5A8u;
            goto label_3cd5a8;
        }
    }
    ctx->pc = 0x3CD594u;
label_3cd594:
    // 0x3cd594: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3cd594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3cd598:
    // 0x3cd598: 0x3c04c463  lui         $a0, 0xC463
    ctx->pc = 0x3cd598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50275 << 16));
label_3cd59c:
    // 0x3cd59c: 0x34843d99  ori         $a0, $a0, 0x3D99
    ctx->pc = 0x3cd59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15769);
label_3cd5a0:
    // 0x3cd5a0: 0xc045c64  jal         func_117190
label_3cd5a4:
    if (ctx->pc == 0x3CD5A4u) {
        ctx->pc = 0x3CD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5A0u;
        // 0x3cd5a4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD5A8u;
        goto label_3cd5a8;
    }
    ctx->pc = 0x3CD5A0u;
    SET_GPR_U32(ctx, 31, 0x3CD5A8u);
    ctx->pc = 0x3CD5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5A0u;
    // 0x3cd5a4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3CD5A0u, 0x3CD5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5A8u;
label_3cd5a8:
    // 0x3cd5a8: 0xc0e9344  jal         func_3A4D10
label_3cd5ac:
    if (ctx->pc == 0x3CD5ACu) {
        ctx->pc = 0x3CD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5A8u;
        // 0x3cd5ac: 0x8ea400c4  lw          $a0, 0xC4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD5B0u;
        goto label_3cd5b0;
    }
    ctx->pc = 0x3CD5A8u;
    SET_GPR_U32(ctx, 31, 0x3CD5B0u);
    ctx->pc = 0x3CD5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5A8u;
    // 0x3cd5ac: 0x8ea400c4  lw          $a0, 0xC4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3CD5A8u, 0x3CD5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5B0u;
label_3cd5b0:
    // 0x3cd5b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3cd5b4:
    if (ctx->pc == 0x3CD5B4u) {
        ctx->pc = 0x3CD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5B0u;
        // 0x3cd5b4: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD5B8u;
        goto label_3cd5b8;
    }
    ctx->pc = 0x3CD5B0u;
    {
        const bool branch_taken_0x3cd5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd5b0) {
            ctx->pc = 0x3CD5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD5B0u;
            // 0x3cd5b4: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD5D4u;
            goto label_3cd5d4;
        }
    }
    ctx->pc = 0x3CD5B8u;
label_3cd5b8:
    // 0x3cd5b8: 0xc0e9344  jal         func_3A4D10
label_3cd5bc:
    if (ctx->pc == 0x3CD5BCu) {
        ctx->pc = 0x3CD5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5B8u;
        // 0x3cd5bc: 0x8ea400c4  lw          $a0, 0xC4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD5C0u;
        goto label_3cd5c0;
    }
    ctx->pc = 0x3CD5B8u;
    SET_GPR_U32(ctx, 31, 0x3CD5C0u);
    ctx->pc = 0x3CD5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5B8u;
    // 0x3cd5bc: 0x8ea400c4  lw          $a0, 0xC4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3CD5B8u, 0x3CD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5C0u;
label_3cd5c0:
    // 0x3cd5c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3cd5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd5c4:
    // 0x3cd5c4: 0xc0e9132  jal         func_3A44C8
label_3cd5c8:
    if (ctx->pc == 0x3CD5C8u) {
        ctx->pc = 0x3CD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5C4u;
        // 0x3cd5c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD5CCu;
        goto label_3cd5cc;
    }
    ctx->pc = 0x3CD5C4u;
    SET_GPR_U32(ctx, 31, 0x3CD5CCu);
    ctx->pc = 0x3CD5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5C4u;
    // 0x3cd5c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3CD5C4u, 0x3CD5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5CCu;
label_3cd5cc:
    // 0x3cd5cc: 0xaea200c4  sw          $v0, 0xC4($s5)
    ctx->pc = 0x3cd5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 2));
label_3cd5d0:
    // 0x3cd5d0: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3cd5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3cd5d4:
    // 0x3cd5d4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3cd5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3cd5d8:
    // 0x3cd5d8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3cd5dc:
    if (ctx->pc == 0x3CD5DCu) {
        ctx->pc = 0x3CD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5D8u;
        // 0x3cd5dc: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD5E0u;
        goto label_3cd5e0;
    }
    ctx->pc = 0x3CD5D8u;
    {
        const bool branch_taken_0x3cd5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd5d8) {
            ctx->pc = 0x3CD5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD5D8u;
            // 0x3cd5dc: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD600u;
            goto label_3cd600;
        }
    }
    ctx->pc = 0x3CD5E0u;
label_3cd5e0:
    // 0x3cd5e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3cd5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd5e4:
    // 0x3cd5e4: 0xc0e858c  jal         func_3A1630
label_3cd5e8:
    if (ctx->pc == 0x3CD5E8u) {
        ctx->pc = 0x3CD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5E4u;
        // 0x3cd5e8: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD5ECu;
        goto label_3cd5ec;
    }
    ctx->pc = 0x3CD5E4u;
    SET_GPR_U32(ctx, 31, 0x3CD5ECu);
    ctx->pc = 0x3CD5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5E4u;
    // 0x3cd5e8: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CD5E4u, 0x3CD5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5ECu;
label_3cd5ec:
    // 0x3cd5ec: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x3cd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3cd5f0:
    // 0x3cd5f0: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x3cd5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_3cd5f4:
    // 0x3cd5f4: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x3cd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
label_3cd5f8:
    // 0x3cd5f8: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x3cd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_3cd5fc:
    // 0x3cd5fc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3cd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3cd600:
    // 0x3cd600: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3cd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3cd604:
    // 0x3cd604: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3cd608:
    if (ctx->pc == 0x3CD608u) {
        ctx->pc = 0x3CD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD604u;
        // 0x3cd608: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD60Cu;
        goto label_3cd60c;
    }
    ctx->pc = 0x3CD604u;
    {
        const bool branch_taken_0x3cd604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd604) {
            ctx->pc = 0x3CD608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD604u;
            // 0x3cd608: 0x8ee5000c  lw          $a1, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD614u;
            goto label_3cd614;
        }
    }
    ctx->pc = 0x3CD60Cu;
label_3cd60c:
    // 0x3cd60c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3cd610:
    if (ctx->pc == 0x3CD610u) {
        ctx->pc = 0x3CD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD60Cu;
        // 0x3cd610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD614u;
        goto label_3cd614;
    }
    ctx->pc = 0x3CD60Cu;
    {
        const bool branch_taken_0x3cd60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD60Cu;
        // 0x3cd610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd60c) {
            ctx->pc = 0x3CD680u;
            goto label_3cd680;
        }
    }
    ctx->pc = 0x3CD614u;
label_3cd614:
    // 0x3cd614: 0xc0e858c  jal         func_3A1630
label_3cd618:
    if (ctx->pc == 0x3CD618u) {
        ctx->pc = 0x3CD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD614u;
        // 0x3cd618: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD61Cu;
        goto label_3cd61c;
    }
    ctx->pc = 0x3CD614u;
    SET_GPR_U32(ctx, 31, 0x3CD61Cu);
    ctx->pc = 0x3CD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD614u;
    // 0x3cd618: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CD614u, 0x3CD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD61Cu;
label_3cd61c:
    // 0x3cd61c: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3cd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3cd620:
    // 0x3cd620: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3cd620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_3cd624:
    // 0x3cd624: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3cd624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3cd628:
    // 0x3cd628: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3cd62c:
    if (ctx->pc == 0x3CD62Cu) {
        ctx->pc = 0x3CD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD628u;
        // 0x3cd62c: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD630u;
        goto label_3cd630;
    }
    ctx->pc = 0x3CD628u;
    {
        const bool branch_taken_0x3cd628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD628u;
        // 0x3cd62c: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd628) {
            ctx->pc = 0x3CD660u;
            goto label_3cd660;
        }
    }
    ctx->pc = 0x3CD630u;
label_3cd630:
    // 0x3cd630: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd634:
    // 0x3cd634: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3cd634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3cd638:
    // 0x3cd638: 0xc0e92f4  jal         func_3A4BD0
label_3cd63c:
    if (ctx->pc == 0x3CD63Cu) {
        ctx->pc = 0x3CD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD638u;
        // 0x3cd63c: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD640u;
        goto label_3cd640;
    }
    ctx->pc = 0x3CD638u;
    SET_GPR_U32(ctx, 31, 0x3CD640u);
    ctx->pc = 0x3CD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD638u;
    // 0x3cd63c: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3CD638u, 0x3CD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD640u;
label_3cd640:
    // 0x3cd640: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3cd640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3cd644:
    // 0x3cd644: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3cd644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3cd648:
    // 0x3cd648: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3cd648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3cd64c:
    // 0x3cd64c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3cd64cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3cd650:
    // 0x3cd650: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3cd650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3cd654:
    // 0x3cd654: 0x7ea30030  sq          $v1, 0x30($s5)
    ctx->pc = 0x3cd654u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 3));
label_3cd658:
    // 0x3cd658: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3cd658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3cd65c:
    // 0x3cd65c: 0x7ea20040  sq          $v0, 0x40($s5)
    ctx->pc = 0x3cd65cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 2));
label_3cd660:
    // 0x3cd660: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3cd660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3cd664:
    // 0x3cd664: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3cd664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cd668:
    // 0x3cd668: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3cd66c:
    if (ctx->pc == 0x3CD66Cu) {
        ctx->pc = 0x3CD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD668u;
        // 0x3cd66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD670u;
        goto label_3cd670;
    }
    ctx->pc = 0x3CD668u;
    {
        const bool branch_taken_0x3cd668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD668u;
        // 0x3cd66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd668) {
            ctx->pc = 0x3CD680u;
            goto label_3cd680;
        }
    }
    ctx->pc = 0x3CD670u;
label_3cd670:
    // 0x3cd670: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3cd670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3cd674:
    // 0x3cd674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cd674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cd678:
    // 0x3cd678: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x3cd678u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
label_3cd67c:
    // 0x3cd67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cd67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd680:
    // 0x3cd680: 0x7bb00940  lq          $s0, 0x940($sp)
    ctx->pc = 0x3cd680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3cd684:
    // 0x3cd684: 0x7bb10930  lq          $s1, 0x930($sp)
    ctx->pc = 0x3cd684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3cd688:
    // 0x3cd688: 0x7bb20920  lq          $s2, 0x920($sp)
    ctx->pc = 0x3cd688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3cd68c:
    // 0x3cd68c: 0x7bb30910  lq          $s3, 0x910($sp)
    ctx->pc = 0x3cd68cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3cd690:
    // 0x3cd690: 0x7bb40900  lq          $s4, 0x900($sp)
    ctx->pc = 0x3cd690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3cd694:
    // 0x3cd694: 0x7bb508f0  lq          $s5, 0x8F0($sp)
    ctx->pc = 0x3cd694u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3cd698:
    // 0x3cd698: 0x7bb608e0  lq          $s6, 0x8E0($sp)
    ctx->pc = 0x3cd698u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3cd69c:
    // 0x3cd69c: 0x7bb708d0  lq          $s7, 0x8D0($sp)
    ctx->pc = 0x3cd69cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3cd6a0:
    // 0x3cd6a0: 0x7bbe08c0  lq          $fp, 0x8C0($sp)
    ctx->pc = 0x3cd6a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3cd6a4:
    // 0x3cd6a4: 0xdfbf08b0  ld          $ra, 0x8B0($sp)
    ctx->pc = 0x3cd6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2224)));
label_3cd6a8:
    // 0x3cd6a8: 0xc7b80970  lwc1        $f24, 0x970($sp)
    ctx->pc = 0x3cd6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3cd6ac:
    // 0x3cd6ac: 0xc7b70968  lwc1        $f23, 0x968($sp)
    ctx->pc = 0x3cd6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3cd6b0:
    // 0x3cd6b0: 0xc7b60960  lwc1        $f22, 0x960($sp)
    ctx->pc = 0x3cd6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3cd6b4:
    // 0x3cd6b4: 0xc7b50958  lwc1        $f21, 0x958($sp)
    ctx->pc = 0x3cd6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3cd6b8:
    // 0x3cd6b8: 0xc7b40950  lwc1        $f20, 0x950($sp)
    ctx->pc = 0x3cd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cd6bc:
    // 0x3cd6bc: 0x3e00008  jr          $ra
label_3cd6c0:
    if (ctx->pc == 0x3CD6C0u) {
        ctx->pc = 0x3CD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6BCu;
        // 0x3cd6c0: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD6C4u;
        goto label_3cd6c4;
    }
    ctx->pc = 0x3CD6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6BCu;
        // 0x3cd6c0: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD6C4u;
label_3cd6c4:
    // 0x3cd6c4: 0x0  nop
    ctx->pc = 0x3cd6c4u;
    // NOP
    ctx->pc = 0x3cd6c8u;
}
