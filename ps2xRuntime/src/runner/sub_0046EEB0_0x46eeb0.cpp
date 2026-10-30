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

// Function: sub_0046EEB0
// Address: 0x46eeb0 - 0x46fa50
void sub_0046EEB0_0x46eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EEB0_0x46eeb0");
#endif

    switch (ctx->pc) {
        case 0x46eeb0u: goto label_46eeb0;
        case 0x46eeb4u: goto label_46eeb4;
        case 0x46eeb8u: goto label_46eeb8;
        case 0x46eebcu: goto label_46eebc;
        case 0x46eec0u: goto label_46eec0;
        case 0x46eec4u: goto label_46eec4;
        case 0x46eec8u: goto label_46eec8;
        case 0x46eeccu: goto label_46eecc;
        case 0x46eed0u: goto label_46eed0;
        case 0x46eed4u: goto label_46eed4;
        case 0x46eed8u: goto label_46eed8;
        case 0x46eedcu: goto label_46eedc;
        case 0x46eee0u: goto label_46eee0;
        case 0x46eee4u: goto label_46eee4;
        case 0x46eee8u: goto label_46eee8;
        case 0x46eeecu: goto label_46eeec;
        case 0x46eef0u: goto label_46eef0;
        case 0x46eef4u: goto label_46eef4;
        case 0x46eef8u: goto label_46eef8;
        case 0x46eefcu: goto label_46eefc;
        case 0x46ef00u: goto label_46ef00;
        case 0x46ef04u: goto label_46ef04;
        case 0x46ef08u: goto label_46ef08;
        case 0x46ef0cu: goto label_46ef0c;
        case 0x46ef10u: goto label_46ef10;
        case 0x46ef14u: goto label_46ef14;
        case 0x46ef18u: goto label_46ef18;
        case 0x46ef1cu: goto label_46ef1c;
        case 0x46ef20u: goto label_46ef20;
        case 0x46ef24u: goto label_46ef24;
        case 0x46ef28u: goto label_46ef28;
        case 0x46ef2cu: goto label_46ef2c;
        case 0x46ef30u: goto label_46ef30;
        case 0x46ef34u: goto label_46ef34;
        case 0x46ef38u: goto label_46ef38;
        case 0x46ef3cu: goto label_46ef3c;
        case 0x46ef40u: goto label_46ef40;
        case 0x46ef44u: goto label_46ef44;
        case 0x46ef48u: goto label_46ef48;
        case 0x46ef4cu: goto label_46ef4c;
        case 0x46ef50u: goto label_46ef50;
        case 0x46ef54u: goto label_46ef54;
        case 0x46ef58u: goto label_46ef58;
        case 0x46ef5cu: goto label_46ef5c;
        case 0x46ef60u: goto label_46ef60;
        case 0x46ef64u: goto label_46ef64;
        case 0x46ef68u: goto label_46ef68;
        case 0x46ef6cu: goto label_46ef6c;
        case 0x46ef70u: goto label_46ef70;
        case 0x46ef74u: goto label_46ef74;
        case 0x46ef78u: goto label_46ef78;
        case 0x46ef7cu: goto label_46ef7c;
        case 0x46ef80u: goto label_46ef80;
        case 0x46ef84u: goto label_46ef84;
        case 0x46ef88u: goto label_46ef88;
        case 0x46ef8cu: goto label_46ef8c;
        case 0x46ef90u: goto label_46ef90;
        case 0x46ef94u: goto label_46ef94;
        case 0x46ef98u: goto label_46ef98;
        case 0x46ef9cu: goto label_46ef9c;
        case 0x46efa0u: goto label_46efa0;
        case 0x46efa4u: goto label_46efa4;
        case 0x46efa8u: goto label_46efa8;
        case 0x46efacu: goto label_46efac;
        case 0x46efb0u: goto label_46efb0;
        case 0x46efb4u: goto label_46efb4;
        case 0x46efb8u: goto label_46efb8;
        case 0x46efbcu: goto label_46efbc;
        case 0x46efc0u: goto label_46efc0;
        case 0x46efc4u: goto label_46efc4;
        case 0x46efc8u: goto label_46efc8;
        case 0x46efccu: goto label_46efcc;
        case 0x46efd0u: goto label_46efd0;
        case 0x46efd4u: goto label_46efd4;
        case 0x46efd8u: goto label_46efd8;
        case 0x46efdcu: goto label_46efdc;
        case 0x46efe0u: goto label_46efe0;
        case 0x46efe4u: goto label_46efe4;
        case 0x46efe8u: goto label_46efe8;
        case 0x46efecu: goto label_46efec;
        case 0x46eff0u: goto label_46eff0;
        case 0x46eff4u: goto label_46eff4;
        case 0x46eff8u: goto label_46eff8;
        case 0x46effcu: goto label_46effc;
        case 0x46f000u: goto label_46f000;
        case 0x46f004u: goto label_46f004;
        case 0x46f008u: goto label_46f008;
        case 0x46f00cu: goto label_46f00c;
        case 0x46f010u: goto label_46f010;
        case 0x46f014u: goto label_46f014;
        case 0x46f018u: goto label_46f018;
        case 0x46f01cu: goto label_46f01c;
        case 0x46f020u: goto label_46f020;
        case 0x46f024u: goto label_46f024;
        case 0x46f028u: goto label_46f028;
        case 0x46f02cu: goto label_46f02c;
        case 0x46f030u: goto label_46f030;
        case 0x46f034u: goto label_46f034;
        case 0x46f038u: goto label_46f038;
        case 0x46f03cu: goto label_46f03c;
        case 0x46f040u: goto label_46f040;
        case 0x46f044u: goto label_46f044;
        case 0x46f048u: goto label_46f048;
        case 0x46f04cu: goto label_46f04c;
        case 0x46f050u: goto label_46f050;
        case 0x46f054u: goto label_46f054;
        case 0x46f058u: goto label_46f058;
        case 0x46f05cu: goto label_46f05c;
        case 0x46f060u: goto label_46f060;
        case 0x46f064u: goto label_46f064;
        case 0x46f068u: goto label_46f068;
        case 0x46f06cu: goto label_46f06c;
        case 0x46f070u: goto label_46f070;
        case 0x46f074u: goto label_46f074;
        case 0x46f078u: goto label_46f078;
        case 0x46f07cu: goto label_46f07c;
        case 0x46f080u: goto label_46f080;
        case 0x46f084u: goto label_46f084;
        case 0x46f088u: goto label_46f088;
        case 0x46f08cu: goto label_46f08c;
        case 0x46f090u: goto label_46f090;
        case 0x46f094u: goto label_46f094;
        case 0x46f098u: goto label_46f098;
        case 0x46f09cu: goto label_46f09c;
        case 0x46f0a0u: goto label_46f0a0;
        case 0x46f0a4u: goto label_46f0a4;
        case 0x46f0a8u: goto label_46f0a8;
        case 0x46f0acu: goto label_46f0ac;
        case 0x46f0b0u: goto label_46f0b0;
        case 0x46f0b4u: goto label_46f0b4;
        case 0x46f0b8u: goto label_46f0b8;
        case 0x46f0bcu: goto label_46f0bc;
        case 0x46f0c0u: goto label_46f0c0;
        case 0x46f0c4u: goto label_46f0c4;
        case 0x46f0c8u: goto label_46f0c8;
        case 0x46f0ccu: goto label_46f0cc;
        case 0x46f0d0u: goto label_46f0d0;
        case 0x46f0d4u: goto label_46f0d4;
        case 0x46f0d8u: goto label_46f0d8;
        case 0x46f0dcu: goto label_46f0dc;
        case 0x46f0e0u: goto label_46f0e0;
        case 0x46f0e4u: goto label_46f0e4;
        case 0x46f0e8u: goto label_46f0e8;
        case 0x46f0ecu: goto label_46f0ec;
        case 0x46f0f0u: goto label_46f0f0;
        case 0x46f0f4u: goto label_46f0f4;
        case 0x46f0f8u: goto label_46f0f8;
        case 0x46f0fcu: goto label_46f0fc;
        case 0x46f100u: goto label_46f100;
        case 0x46f104u: goto label_46f104;
        case 0x46f108u: goto label_46f108;
        case 0x46f10cu: goto label_46f10c;
        case 0x46f110u: goto label_46f110;
        case 0x46f114u: goto label_46f114;
        case 0x46f118u: goto label_46f118;
        case 0x46f11cu: goto label_46f11c;
        case 0x46f120u: goto label_46f120;
        case 0x46f124u: goto label_46f124;
        case 0x46f128u: goto label_46f128;
        case 0x46f12cu: goto label_46f12c;
        case 0x46f130u: goto label_46f130;
        case 0x46f134u: goto label_46f134;
        case 0x46f138u: goto label_46f138;
        case 0x46f13cu: goto label_46f13c;
        case 0x46f140u: goto label_46f140;
        case 0x46f144u: goto label_46f144;
        case 0x46f148u: goto label_46f148;
        case 0x46f14cu: goto label_46f14c;
        case 0x46f150u: goto label_46f150;
        case 0x46f154u: goto label_46f154;
        case 0x46f158u: goto label_46f158;
        case 0x46f15cu: goto label_46f15c;
        case 0x46f160u: goto label_46f160;
        case 0x46f164u: goto label_46f164;
        case 0x46f168u: goto label_46f168;
        case 0x46f16cu: goto label_46f16c;
        case 0x46f170u: goto label_46f170;
        case 0x46f174u: goto label_46f174;
        case 0x46f178u: goto label_46f178;
        case 0x46f17cu: goto label_46f17c;
        case 0x46f180u: goto label_46f180;
        case 0x46f184u: goto label_46f184;
        case 0x46f188u: goto label_46f188;
        case 0x46f18cu: goto label_46f18c;
        case 0x46f190u: goto label_46f190;
        case 0x46f194u: goto label_46f194;
        case 0x46f198u: goto label_46f198;
        case 0x46f19cu: goto label_46f19c;
        case 0x46f1a0u: goto label_46f1a0;
        case 0x46f1a4u: goto label_46f1a4;
        case 0x46f1a8u: goto label_46f1a8;
        case 0x46f1acu: goto label_46f1ac;
        case 0x46f1b0u: goto label_46f1b0;
        case 0x46f1b4u: goto label_46f1b4;
        case 0x46f1b8u: goto label_46f1b8;
        case 0x46f1bcu: goto label_46f1bc;
        case 0x46f1c0u: goto label_46f1c0;
        case 0x46f1c4u: goto label_46f1c4;
        case 0x46f1c8u: goto label_46f1c8;
        case 0x46f1ccu: goto label_46f1cc;
        case 0x46f1d0u: goto label_46f1d0;
        case 0x46f1d4u: goto label_46f1d4;
        case 0x46f1d8u: goto label_46f1d8;
        case 0x46f1dcu: goto label_46f1dc;
        case 0x46f1e0u: goto label_46f1e0;
        case 0x46f1e4u: goto label_46f1e4;
        case 0x46f1e8u: goto label_46f1e8;
        case 0x46f1ecu: goto label_46f1ec;
        case 0x46f1f0u: goto label_46f1f0;
        case 0x46f1f4u: goto label_46f1f4;
        case 0x46f1f8u: goto label_46f1f8;
        case 0x46f1fcu: goto label_46f1fc;
        case 0x46f200u: goto label_46f200;
        case 0x46f204u: goto label_46f204;
        case 0x46f208u: goto label_46f208;
        case 0x46f20cu: goto label_46f20c;
        case 0x46f210u: goto label_46f210;
        case 0x46f214u: goto label_46f214;
        case 0x46f218u: goto label_46f218;
        case 0x46f21cu: goto label_46f21c;
        case 0x46f220u: goto label_46f220;
        case 0x46f224u: goto label_46f224;
        case 0x46f228u: goto label_46f228;
        case 0x46f22cu: goto label_46f22c;
        case 0x46f230u: goto label_46f230;
        case 0x46f234u: goto label_46f234;
        case 0x46f238u: goto label_46f238;
        case 0x46f23cu: goto label_46f23c;
        case 0x46f240u: goto label_46f240;
        case 0x46f244u: goto label_46f244;
        case 0x46f248u: goto label_46f248;
        case 0x46f24cu: goto label_46f24c;
        case 0x46f250u: goto label_46f250;
        case 0x46f254u: goto label_46f254;
        case 0x46f258u: goto label_46f258;
        case 0x46f25cu: goto label_46f25c;
        case 0x46f260u: goto label_46f260;
        case 0x46f264u: goto label_46f264;
        case 0x46f268u: goto label_46f268;
        case 0x46f26cu: goto label_46f26c;
        case 0x46f270u: goto label_46f270;
        case 0x46f274u: goto label_46f274;
        case 0x46f278u: goto label_46f278;
        case 0x46f27cu: goto label_46f27c;
        case 0x46f280u: goto label_46f280;
        case 0x46f284u: goto label_46f284;
        case 0x46f288u: goto label_46f288;
        case 0x46f28cu: goto label_46f28c;
        case 0x46f290u: goto label_46f290;
        case 0x46f294u: goto label_46f294;
        case 0x46f298u: goto label_46f298;
        case 0x46f29cu: goto label_46f29c;
        case 0x46f2a0u: goto label_46f2a0;
        case 0x46f2a4u: goto label_46f2a4;
        case 0x46f2a8u: goto label_46f2a8;
        case 0x46f2acu: goto label_46f2ac;
        case 0x46f2b0u: goto label_46f2b0;
        case 0x46f2b4u: goto label_46f2b4;
        case 0x46f2b8u: goto label_46f2b8;
        case 0x46f2bcu: goto label_46f2bc;
        case 0x46f2c0u: goto label_46f2c0;
        case 0x46f2c4u: goto label_46f2c4;
        case 0x46f2c8u: goto label_46f2c8;
        case 0x46f2ccu: goto label_46f2cc;
        case 0x46f2d0u: goto label_46f2d0;
        case 0x46f2d4u: goto label_46f2d4;
        case 0x46f2d8u: goto label_46f2d8;
        case 0x46f2dcu: goto label_46f2dc;
        case 0x46f2e0u: goto label_46f2e0;
        case 0x46f2e4u: goto label_46f2e4;
        case 0x46f2e8u: goto label_46f2e8;
        case 0x46f2ecu: goto label_46f2ec;
        case 0x46f2f0u: goto label_46f2f0;
        case 0x46f2f4u: goto label_46f2f4;
        case 0x46f2f8u: goto label_46f2f8;
        case 0x46f2fcu: goto label_46f2fc;
        case 0x46f300u: goto label_46f300;
        case 0x46f304u: goto label_46f304;
        case 0x46f308u: goto label_46f308;
        case 0x46f30cu: goto label_46f30c;
        case 0x46f310u: goto label_46f310;
        case 0x46f314u: goto label_46f314;
        case 0x46f318u: goto label_46f318;
        case 0x46f31cu: goto label_46f31c;
        case 0x46f320u: goto label_46f320;
        case 0x46f324u: goto label_46f324;
        case 0x46f328u: goto label_46f328;
        case 0x46f32cu: goto label_46f32c;
        case 0x46f330u: goto label_46f330;
        case 0x46f334u: goto label_46f334;
        case 0x46f338u: goto label_46f338;
        case 0x46f33cu: goto label_46f33c;
        case 0x46f340u: goto label_46f340;
        case 0x46f344u: goto label_46f344;
        case 0x46f348u: goto label_46f348;
        case 0x46f34cu: goto label_46f34c;
        case 0x46f350u: goto label_46f350;
        case 0x46f354u: goto label_46f354;
        case 0x46f358u: goto label_46f358;
        case 0x46f35cu: goto label_46f35c;
        case 0x46f360u: goto label_46f360;
        case 0x46f364u: goto label_46f364;
        case 0x46f368u: goto label_46f368;
        case 0x46f36cu: goto label_46f36c;
        case 0x46f370u: goto label_46f370;
        case 0x46f374u: goto label_46f374;
        case 0x46f378u: goto label_46f378;
        case 0x46f37cu: goto label_46f37c;
        case 0x46f380u: goto label_46f380;
        case 0x46f384u: goto label_46f384;
        case 0x46f388u: goto label_46f388;
        case 0x46f38cu: goto label_46f38c;
        case 0x46f390u: goto label_46f390;
        case 0x46f394u: goto label_46f394;
        case 0x46f398u: goto label_46f398;
        case 0x46f39cu: goto label_46f39c;
        case 0x46f3a0u: goto label_46f3a0;
        case 0x46f3a4u: goto label_46f3a4;
        case 0x46f3a8u: goto label_46f3a8;
        case 0x46f3acu: goto label_46f3ac;
        case 0x46f3b0u: goto label_46f3b0;
        case 0x46f3b4u: goto label_46f3b4;
        case 0x46f3b8u: goto label_46f3b8;
        case 0x46f3bcu: goto label_46f3bc;
        case 0x46f3c0u: goto label_46f3c0;
        case 0x46f3c4u: goto label_46f3c4;
        case 0x46f3c8u: goto label_46f3c8;
        case 0x46f3ccu: goto label_46f3cc;
        case 0x46f3d0u: goto label_46f3d0;
        case 0x46f3d4u: goto label_46f3d4;
        case 0x46f3d8u: goto label_46f3d8;
        case 0x46f3dcu: goto label_46f3dc;
        case 0x46f3e0u: goto label_46f3e0;
        case 0x46f3e4u: goto label_46f3e4;
        case 0x46f3e8u: goto label_46f3e8;
        case 0x46f3ecu: goto label_46f3ec;
        case 0x46f3f0u: goto label_46f3f0;
        case 0x46f3f4u: goto label_46f3f4;
        case 0x46f3f8u: goto label_46f3f8;
        case 0x46f3fcu: goto label_46f3fc;
        case 0x46f400u: goto label_46f400;
        case 0x46f404u: goto label_46f404;
        case 0x46f408u: goto label_46f408;
        case 0x46f40cu: goto label_46f40c;
        case 0x46f410u: goto label_46f410;
        case 0x46f414u: goto label_46f414;
        case 0x46f418u: goto label_46f418;
        case 0x46f41cu: goto label_46f41c;
        case 0x46f420u: goto label_46f420;
        case 0x46f424u: goto label_46f424;
        case 0x46f428u: goto label_46f428;
        case 0x46f42cu: goto label_46f42c;
        case 0x46f430u: goto label_46f430;
        case 0x46f434u: goto label_46f434;
        case 0x46f438u: goto label_46f438;
        case 0x46f43cu: goto label_46f43c;
        case 0x46f440u: goto label_46f440;
        case 0x46f444u: goto label_46f444;
        case 0x46f448u: goto label_46f448;
        case 0x46f44cu: goto label_46f44c;
        case 0x46f450u: goto label_46f450;
        case 0x46f454u: goto label_46f454;
        case 0x46f458u: goto label_46f458;
        case 0x46f45cu: goto label_46f45c;
        case 0x46f460u: goto label_46f460;
        case 0x46f464u: goto label_46f464;
        case 0x46f468u: goto label_46f468;
        case 0x46f46cu: goto label_46f46c;
        case 0x46f470u: goto label_46f470;
        case 0x46f474u: goto label_46f474;
        case 0x46f478u: goto label_46f478;
        case 0x46f47cu: goto label_46f47c;
        case 0x46f480u: goto label_46f480;
        case 0x46f484u: goto label_46f484;
        case 0x46f488u: goto label_46f488;
        case 0x46f48cu: goto label_46f48c;
        case 0x46f490u: goto label_46f490;
        case 0x46f494u: goto label_46f494;
        case 0x46f498u: goto label_46f498;
        case 0x46f49cu: goto label_46f49c;
        case 0x46f4a0u: goto label_46f4a0;
        case 0x46f4a4u: goto label_46f4a4;
        case 0x46f4a8u: goto label_46f4a8;
        case 0x46f4acu: goto label_46f4ac;
        case 0x46f4b0u: goto label_46f4b0;
        case 0x46f4b4u: goto label_46f4b4;
        case 0x46f4b8u: goto label_46f4b8;
        case 0x46f4bcu: goto label_46f4bc;
        case 0x46f4c0u: goto label_46f4c0;
        case 0x46f4c4u: goto label_46f4c4;
        case 0x46f4c8u: goto label_46f4c8;
        case 0x46f4ccu: goto label_46f4cc;
        case 0x46f4d0u: goto label_46f4d0;
        case 0x46f4d4u: goto label_46f4d4;
        case 0x46f4d8u: goto label_46f4d8;
        case 0x46f4dcu: goto label_46f4dc;
        case 0x46f4e0u: goto label_46f4e0;
        case 0x46f4e4u: goto label_46f4e4;
        case 0x46f4e8u: goto label_46f4e8;
        case 0x46f4ecu: goto label_46f4ec;
        case 0x46f4f0u: goto label_46f4f0;
        case 0x46f4f4u: goto label_46f4f4;
        case 0x46f4f8u: goto label_46f4f8;
        case 0x46f4fcu: goto label_46f4fc;
        case 0x46f500u: goto label_46f500;
        case 0x46f504u: goto label_46f504;
        case 0x46f508u: goto label_46f508;
        case 0x46f50cu: goto label_46f50c;
        case 0x46f510u: goto label_46f510;
        case 0x46f514u: goto label_46f514;
        case 0x46f518u: goto label_46f518;
        case 0x46f51cu: goto label_46f51c;
        case 0x46f520u: goto label_46f520;
        case 0x46f524u: goto label_46f524;
        case 0x46f528u: goto label_46f528;
        case 0x46f52cu: goto label_46f52c;
        case 0x46f530u: goto label_46f530;
        case 0x46f534u: goto label_46f534;
        case 0x46f538u: goto label_46f538;
        case 0x46f53cu: goto label_46f53c;
        case 0x46f540u: goto label_46f540;
        case 0x46f544u: goto label_46f544;
        case 0x46f548u: goto label_46f548;
        case 0x46f54cu: goto label_46f54c;
        case 0x46f550u: goto label_46f550;
        case 0x46f554u: goto label_46f554;
        case 0x46f558u: goto label_46f558;
        case 0x46f55cu: goto label_46f55c;
        case 0x46f560u: goto label_46f560;
        case 0x46f564u: goto label_46f564;
        case 0x46f568u: goto label_46f568;
        case 0x46f56cu: goto label_46f56c;
        case 0x46f570u: goto label_46f570;
        case 0x46f574u: goto label_46f574;
        case 0x46f578u: goto label_46f578;
        case 0x46f57cu: goto label_46f57c;
        case 0x46f580u: goto label_46f580;
        case 0x46f584u: goto label_46f584;
        case 0x46f588u: goto label_46f588;
        case 0x46f58cu: goto label_46f58c;
        case 0x46f590u: goto label_46f590;
        case 0x46f594u: goto label_46f594;
        case 0x46f598u: goto label_46f598;
        case 0x46f59cu: goto label_46f59c;
        case 0x46f5a0u: goto label_46f5a0;
        case 0x46f5a4u: goto label_46f5a4;
        case 0x46f5a8u: goto label_46f5a8;
        case 0x46f5acu: goto label_46f5ac;
        case 0x46f5b0u: goto label_46f5b0;
        case 0x46f5b4u: goto label_46f5b4;
        case 0x46f5b8u: goto label_46f5b8;
        case 0x46f5bcu: goto label_46f5bc;
        case 0x46f5c0u: goto label_46f5c0;
        case 0x46f5c4u: goto label_46f5c4;
        case 0x46f5c8u: goto label_46f5c8;
        case 0x46f5ccu: goto label_46f5cc;
        case 0x46f5d0u: goto label_46f5d0;
        case 0x46f5d4u: goto label_46f5d4;
        case 0x46f5d8u: goto label_46f5d8;
        case 0x46f5dcu: goto label_46f5dc;
        case 0x46f5e0u: goto label_46f5e0;
        case 0x46f5e4u: goto label_46f5e4;
        case 0x46f5e8u: goto label_46f5e8;
        case 0x46f5ecu: goto label_46f5ec;
        case 0x46f5f0u: goto label_46f5f0;
        case 0x46f5f4u: goto label_46f5f4;
        case 0x46f5f8u: goto label_46f5f8;
        case 0x46f5fcu: goto label_46f5fc;
        case 0x46f600u: goto label_46f600;
        case 0x46f604u: goto label_46f604;
        case 0x46f608u: goto label_46f608;
        case 0x46f60cu: goto label_46f60c;
        case 0x46f610u: goto label_46f610;
        case 0x46f614u: goto label_46f614;
        case 0x46f618u: goto label_46f618;
        case 0x46f61cu: goto label_46f61c;
        case 0x46f620u: goto label_46f620;
        case 0x46f624u: goto label_46f624;
        case 0x46f628u: goto label_46f628;
        case 0x46f62cu: goto label_46f62c;
        case 0x46f630u: goto label_46f630;
        case 0x46f634u: goto label_46f634;
        case 0x46f638u: goto label_46f638;
        case 0x46f63cu: goto label_46f63c;
        case 0x46f640u: goto label_46f640;
        case 0x46f644u: goto label_46f644;
        case 0x46f648u: goto label_46f648;
        case 0x46f64cu: goto label_46f64c;
        case 0x46f650u: goto label_46f650;
        case 0x46f654u: goto label_46f654;
        case 0x46f658u: goto label_46f658;
        case 0x46f65cu: goto label_46f65c;
        case 0x46f660u: goto label_46f660;
        case 0x46f664u: goto label_46f664;
        case 0x46f668u: goto label_46f668;
        case 0x46f66cu: goto label_46f66c;
        case 0x46f670u: goto label_46f670;
        case 0x46f674u: goto label_46f674;
        case 0x46f678u: goto label_46f678;
        case 0x46f67cu: goto label_46f67c;
        case 0x46f680u: goto label_46f680;
        case 0x46f684u: goto label_46f684;
        case 0x46f688u: goto label_46f688;
        case 0x46f68cu: goto label_46f68c;
        case 0x46f690u: goto label_46f690;
        case 0x46f694u: goto label_46f694;
        case 0x46f698u: goto label_46f698;
        case 0x46f69cu: goto label_46f69c;
        case 0x46f6a0u: goto label_46f6a0;
        case 0x46f6a4u: goto label_46f6a4;
        case 0x46f6a8u: goto label_46f6a8;
        case 0x46f6acu: goto label_46f6ac;
        case 0x46f6b0u: goto label_46f6b0;
        case 0x46f6b4u: goto label_46f6b4;
        case 0x46f6b8u: goto label_46f6b8;
        case 0x46f6bcu: goto label_46f6bc;
        case 0x46f6c0u: goto label_46f6c0;
        case 0x46f6c4u: goto label_46f6c4;
        case 0x46f6c8u: goto label_46f6c8;
        case 0x46f6ccu: goto label_46f6cc;
        case 0x46f6d0u: goto label_46f6d0;
        case 0x46f6d4u: goto label_46f6d4;
        case 0x46f6d8u: goto label_46f6d8;
        case 0x46f6dcu: goto label_46f6dc;
        case 0x46f6e0u: goto label_46f6e0;
        case 0x46f6e4u: goto label_46f6e4;
        case 0x46f6e8u: goto label_46f6e8;
        case 0x46f6ecu: goto label_46f6ec;
        case 0x46f6f0u: goto label_46f6f0;
        case 0x46f6f4u: goto label_46f6f4;
        case 0x46f6f8u: goto label_46f6f8;
        case 0x46f6fcu: goto label_46f6fc;
        case 0x46f700u: goto label_46f700;
        case 0x46f704u: goto label_46f704;
        case 0x46f708u: goto label_46f708;
        case 0x46f70cu: goto label_46f70c;
        case 0x46f710u: goto label_46f710;
        case 0x46f714u: goto label_46f714;
        case 0x46f718u: goto label_46f718;
        case 0x46f71cu: goto label_46f71c;
        case 0x46f720u: goto label_46f720;
        case 0x46f724u: goto label_46f724;
        case 0x46f728u: goto label_46f728;
        case 0x46f72cu: goto label_46f72c;
        case 0x46f730u: goto label_46f730;
        case 0x46f734u: goto label_46f734;
        case 0x46f738u: goto label_46f738;
        case 0x46f73cu: goto label_46f73c;
        case 0x46f740u: goto label_46f740;
        case 0x46f744u: goto label_46f744;
        case 0x46f748u: goto label_46f748;
        case 0x46f74cu: goto label_46f74c;
        case 0x46f750u: goto label_46f750;
        case 0x46f754u: goto label_46f754;
        case 0x46f758u: goto label_46f758;
        case 0x46f75cu: goto label_46f75c;
        case 0x46f760u: goto label_46f760;
        case 0x46f764u: goto label_46f764;
        case 0x46f768u: goto label_46f768;
        case 0x46f76cu: goto label_46f76c;
        case 0x46f770u: goto label_46f770;
        case 0x46f774u: goto label_46f774;
        case 0x46f778u: goto label_46f778;
        case 0x46f77cu: goto label_46f77c;
        case 0x46f780u: goto label_46f780;
        case 0x46f784u: goto label_46f784;
        case 0x46f788u: goto label_46f788;
        case 0x46f78cu: goto label_46f78c;
        case 0x46f790u: goto label_46f790;
        case 0x46f794u: goto label_46f794;
        case 0x46f798u: goto label_46f798;
        case 0x46f79cu: goto label_46f79c;
        case 0x46f7a0u: goto label_46f7a0;
        case 0x46f7a4u: goto label_46f7a4;
        case 0x46f7a8u: goto label_46f7a8;
        case 0x46f7acu: goto label_46f7ac;
        case 0x46f7b0u: goto label_46f7b0;
        case 0x46f7b4u: goto label_46f7b4;
        case 0x46f7b8u: goto label_46f7b8;
        case 0x46f7bcu: goto label_46f7bc;
        case 0x46f7c0u: goto label_46f7c0;
        case 0x46f7c4u: goto label_46f7c4;
        case 0x46f7c8u: goto label_46f7c8;
        case 0x46f7ccu: goto label_46f7cc;
        case 0x46f7d0u: goto label_46f7d0;
        case 0x46f7d4u: goto label_46f7d4;
        case 0x46f7d8u: goto label_46f7d8;
        case 0x46f7dcu: goto label_46f7dc;
        case 0x46f7e0u: goto label_46f7e0;
        case 0x46f7e4u: goto label_46f7e4;
        case 0x46f7e8u: goto label_46f7e8;
        case 0x46f7ecu: goto label_46f7ec;
        case 0x46f7f0u: goto label_46f7f0;
        case 0x46f7f4u: goto label_46f7f4;
        case 0x46f7f8u: goto label_46f7f8;
        case 0x46f7fcu: goto label_46f7fc;
        case 0x46f800u: goto label_46f800;
        case 0x46f804u: goto label_46f804;
        case 0x46f808u: goto label_46f808;
        case 0x46f80cu: goto label_46f80c;
        case 0x46f810u: goto label_46f810;
        case 0x46f814u: goto label_46f814;
        case 0x46f818u: goto label_46f818;
        case 0x46f81cu: goto label_46f81c;
        case 0x46f820u: goto label_46f820;
        case 0x46f824u: goto label_46f824;
        case 0x46f828u: goto label_46f828;
        case 0x46f82cu: goto label_46f82c;
        case 0x46f830u: goto label_46f830;
        case 0x46f834u: goto label_46f834;
        case 0x46f838u: goto label_46f838;
        case 0x46f83cu: goto label_46f83c;
        case 0x46f840u: goto label_46f840;
        case 0x46f844u: goto label_46f844;
        case 0x46f848u: goto label_46f848;
        case 0x46f84cu: goto label_46f84c;
        case 0x46f850u: goto label_46f850;
        case 0x46f854u: goto label_46f854;
        case 0x46f858u: goto label_46f858;
        case 0x46f85cu: goto label_46f85c;
        case 0x46f860u: goto label_46f860;
        case 0x46f864u: goto label_46f864;
        case 0x46f868u: goto label_46f868;
        case 0x46f86cu: goto label_46f86c;
        case 0x46f870u: goto label_46f870;
        case 0x46f874u: goto label_46f874;
        case 0x46f878u: goto label_46f878;
        case 0x46f87cu: goto label_46f87c;
        case 0x46f880u: goto label_46f880;
        case 0x46f884u: goto label_46f884;
        case 0x46f888u: goto label_46f888;
        case 0x46f88cu: goto label_46f88c;
        case 0x46f890u: goto label_46f890;
        case 0x46f894u: goto label_46f894;
        case 0x46f898u: goto label_46f898;
        case 0x46f89cu: goto label_46f89c;
        case 0x46f8a0u: goto label_46f8a0;
        case 0x46f8a4u: goto label_46f8a4;
        case 0x46f8a8u: goto label_46f8a8;
        case 0x46f8acu: goto label_46f8ac;
        case 0x46f8b0u: goto label_46f8b0;
        case 0x46f8b4u: goto label_46f8b4;
        case 0x46f8b8u: goto label_46f8b8;
        case 0x46f8bcu: goto label_46f8bc;
        case 0x46f8c0u: goto label_46f8c0;
        case 0x46f8c4u: goto label_46f8c4;
        case 0x46f8c8u: goto label_46f8c8;
        case 0x46f8ccu: goto label_46f8cc;
        case 0x46f8d0u: goto label_46f8d0;
        case 0x46f8d4u: goto label_46f8d4;
        case 0x46f8d8u: goto label_46f8d8;
        case 0x46f8dcu: goto label_46f8dc;
        case 0x46f8e0u: goto label_46f8e0;
        case 0x46f8e4u: goto label_46f8e4;
        case 0x46f8e8u: goto label_46f8e8;
        case 0x46f8ecu: goto label_46f8ec;
        case 0x46f8f0u: goto label_46f8f0;
        case 0x46f8f4u: goto label_46f8f4;
        case 0x46f8f8u: goto label_46f8f8;
        case 0x46f8fcu: goto label_46f8fc;
        case 0x46f900u: goto label_46f900;
        case 0x46f904u: goto label_46f904;
        case 0x46f908u: goto label_46f908;
        case 0x46f90cu: goto label_46f90c;
        case 0x46f910u: goto label_46f910;
        case 0x46f914u: goto label_46f914;
        case 0x46f918u: goto label_46f918;
        case 0x46f91cu: goto label_46f91c;
        case 0x46f920u: goto label_46f920;
        case 0x46f924u: goto label_46f924;
        case 0x46f928u: goto label_46f928;
        case 0x46f92cu: goto label_46f92c;
        case 0x46f930u: goto label_46f930;
        case 0x46f934u: goto label_46f934;
        case 0x46f938u: goto label_46f938;
        case 0x46f93cu: goto label_46f93c;
        case 0x46f940u: goto label_46f940;
        case 0x46f944u: goto label_46f944;
        case 0x46f948u: goto label_46f948;
        case 0x46f94cu: goto label_46f94c;
        case 0x46f950u: goto label_46f950;
        case 0x46f954u: goto label_46f954;
        case 0x46f958u: goto label_46f958;
        case 0x46f95cu: goto label_46f95c;
        case 0x46f960u: goto label_46f960;
        case 0x46f964u: goto label_46f964;
        case 0x46f968u: goto label_46f968;
        case 0x46f96cu: goto label_46f96c;
        case 0x46f970u: goto label_46f970;
        case 0x46f974u: goto label_46f974;
        case 0x46f978u: goto label_46f978;
        case 0x46f97cu: goto label_46f97c;
        case 0x46f980u: goto label_46f980;
        case 0x46f984u: goto label_46f984;
        case 0x46f988u: goto label_46f988;
        case 0x46f98cu: goto label_46f98c;
        case 0x46f990u: goto label_46f990;
        case 0x46f994u: goto label_46f994;
        case 0x46f998u: goto label_46f998;
        case 0x46f99cu: goto label_46f99c;
        case 0x46f9a0u: goto label_46f9a0;
        case 0x46f9a4u: goto label_46f9a4;
        case 0x46f9a8u: goto label_46f9a8;
        case 0x46f9acu: goto label_46f9ac;
        case 0x46f9b0u: goto label_46f9b0;
        case 0x46f9b4u: goto label_46f9b4;
        case 0x46f9b8u: goto label_46f9b8;
        case 0x46f9bcu: goto label_46f9bc;
        case 0x46f9c0u: goto label_46f9c0;
        case 0x46f9c4u: goto label_46f9c4;
        case 0x46f9c8u: goto label_46f9c8;
        case 0x46f9ccu: goto label_46f9cc;
        case 0x46f9d0u: goto label_46f9d0;
        case 0x46f9d4u: goto label_46f9d4;
        case 0x46f9d8u: goto label_46f9d8;
        case 0x46f9dcu: goto label_46f9dc;
        case 0x46f9e0u: goto label_46f9e0;
        case 0x46f9e4u: goto label_46f9e4;
        case 0x46f9e8u: goto label_46f9e8;
        case 0x46f9ecu: goto label_46f9ec;
        case 0x46f9f0u: goto label_46f9f0;
        case 0x46f9f4u: goto label_46f9f4;
        case 0x46f9f8u: goto label_46f9f8;
        case 0x46f9fcu: goto label_46f9fc;
        case 0x46fa00u: goto label_46fa00;
        case 0x46fa04u: goto label_46fa04;
        case 0x46fa08u: goto label_46fa08;
        case 0x46fa0cu: goto label_46fa0c;
        case 0x46fa10u: goto label_46fa10;
        case 0x46fa14u: goto label_46fa14;
        case 0x46fa18u: goto label_46fa18;
        case 0x46fa1cu: goto label_46fa1c;
        case 0x46fa20u: goto label_46fa20;
        case 0x46fa24u: goto label_46fa24;
        case 0x46fa28u: goto label_46fa28;
        case 0x46fa2cu: goto label_46fa2c;
        case 0x46fa30u: goto label_46fa30;
        case 0x46fa34u: goto label_46fa34;
        case 0x46fa38u: goto label_46fa38;
        case 0x46fa3cu: goto label_46fa3c;
        case 0x46fa40u: goto label_46fa40;
        case 0x46fa44u: goto label_46fa44;
        case 0x46fa48u: goto label_46fa48;
        case 0x46fa4cu: goto label_46fa4c;
        default: break;
    }

    ctx->pc = 0x46eeb0u;

label_46eeb0:
    // 0x46eeb0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x46eeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_46eeb4:
    // 0x46eeb4: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x46eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_46eeb8:
    // 0x46eeb8: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x46eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_46eebc:
    // 0x46eebc: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x46eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_46eec0:
    // 0x46eec0: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x46eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
label_46eec4:
    // 0x46eec4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x46eec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46eec8:
    // 0x46eec8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x46eec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_46eecc:
    // 0x46eecc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x46eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_46eed0:
    // 0x46eed0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x46eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_46eed4:
    // 0x46eed4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x46eed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46eed8:
    // 0x46eed8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x46eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_46eedc:
    // 0x46eedc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x46eedcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46eee0:
    // 0x46eee0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x46eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_46eee4:
    // 0x46eee4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x46eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_46eee8:
    // 0x46eee8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x46eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_46eeec:
    // 0x46eeec: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x46eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_46eef0:
    // 0x46eef0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x46eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_46eef4:
    // 0x46eef4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x46eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_46eef8:
    // 0x46eef8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x46eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_46eefc:
    // 0x46eefc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x46eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_46ef00:
    // 0x46ef00: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x46ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_46ef04:
    // 0x46ef04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x46ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_46ef08:
    // 0x46ef08: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x46ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_46ef0c:
    // 0x46ef0c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x46ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_46ef10:
    // 0x46ef10: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x46ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_46ef14:
    // 0x46ef14: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x46ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_46ef18:
    // 0x46ef18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x46ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_46ef1c:
    // 0x46ef1c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x46ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_46ef20:
    // 0x46ef20: 0xc11b95c  jal         func_46E570
label_46ef24:
    if (ctx->pc == 0x46EF24u) {
        ctx->pc = 0x46EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EF20u;
        // 0x46ef24: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46EF28u;
        goto label_46ef28;
    }
    ctx->pc = 0x46EF20u;
    SET_GPR_U32(ctx, 31, 0x46EF28u);
    ctx->pc = 0x46EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46EF20u;
    // 0x46ef24: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E570u, 0x46EF20u, 0x46EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EF28u;
label_46ef28:
    // 0x46ef28: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x46ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_46ef2c:
    // 0x46ef2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x46ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46ef30:
    // 0x46ef30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_46ef34:
    if (ctx->pc == 0x46EF34u) {
        ctx->pc = 0x46EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EF30u;
        // 0x46ef34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46EF38u;
        goto label_46ef38;
    }
    ctx->pc = 0x46EF30u;
    {
        const bool branch_taken_0x46ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EF30u;
        // 0x46ef34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ef30) {
            ctx->pc = 0x46EF98u;
            goto label_46ef98;
        }
    }
    ctx->pc = 0x46EF38u;
label_46ef38:
    // 0x46ef38: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x46ef38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_46ef3c:
    // 0x46ef3c: 0x0  nop
    ctx->pc = 0x46ef3cu;
    // NOP
label_46ef40:
    // 0x46ef40: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x46ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46ef44:
    // 0x46ef44: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x46ef44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_46ef48:
    // 0x46ef48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46ef4c:
    // 0x46ef4c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x46ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_46ef50:
    // 0x46ef50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46ef54:
    // 0x46ef54: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x46ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_46ef58:
    // 0x46ef58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x46ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46ef5c:
    // 0x46ef5c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x46ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_46ef60:
    // 0x46ef60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_46ef64:
    if (ctx->pc == 0x46EF64u) {
        ctx->pc = 0x46EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EF60u;
        // 0x46ef64: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46EF68u;
        goto label_46ef68;
    }
    ctx->pc = 0x46EF60u;
    {
        const bool branch_taken_0x46ef60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ef60) {
            ctx->pc = 0x46EF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46EF60u;
            // 0x46ef64: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46EF68u;
            goto label_46ef68;
        }
    }
    ctx->pc = 0x46EF68u;
label_46ef68:
    // 0x46ef68: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x46ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46ef6c:
    // 0x46ef6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x46ef6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_46ef70:
    // 0x46ef70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x46ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46ef74:
    // 0x46ef74: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x46ef74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_46ef78:
    // 0x46ef78: 0xe3282b  sltu        $a1, $a3, $v1
    ctx->pc = 0x46ef78u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46ef7c:
    // 0x46ef7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46ef80:
    // 0x46ef80: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x46ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_46ef84:
    // 0x46ef84: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x46ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_46ef88:
    // 0x46ef88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x46ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46ef8c:
    // 0x46ef8c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x46ef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_46ef90:
    // 0x46ef90: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
label_46ef94:
    if (ctx->pc == 0x46EF94u) {
        ctx->pc = 0x46EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EF90u;
        // 0x46ef94: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46EF98u;
        goto label_46ef98;
    }
    ctx->pc = 0x46EF90u;
    {
        const bool branch_taken_0x46ef90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x46EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EF90u;
        // 0x46ef94: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ef90) {
            ctx->pc = 0x46EF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ef40;
        }
    }
    ctx->pc = 0x46EF98u;
label_46ef98:
    // 0x46ef98: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46ef9c:
    // 0x46ef9c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x46ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_46efa0:
    // 0x46efa0: 0x2492ad18  addiu       $s2, $a0, -0x52E8
    ctx->pc = 0x46efa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_46efa4:
    // 0x46efa4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46efa8:
    // 0x46efa8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x46efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_46efac:
    // 0x46efac: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x46efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_46efb0:
    // 0x46efb0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46efb4:
    // 0x46efb4: 0x40f809  jalr        $v0
label_46efb8:
    if (ctx->pc == 0x46EFB8u) {
        ctx->pc = 0x46EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EFB4u;
        // 0x46efb8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46EFBCu;
        goto label_46efbc;
    }
    ctx->pc = 0x46EFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46EFBCu);
        ctx->pc = 0x46EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EFB4u;
        // 0x46efb8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EFB4u, 0x46EFBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46EFBCu;
label_46efbc:
    // 0x46efbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x46efbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46efc0:
    // 0x46efc0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46efc4:
    // 0x46efc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x46efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46efc8:
    // 0x46efc8: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46efc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46efcc:
    // 0x46efcc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x46efccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_46efd0:
    // 0x46efd0: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x46efd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_46efd4:
    // 0x46efd4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x46efd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_46efd8:
    // 0x46efd8: 0xae900008  sw          $s0, 0x8($s4)
    ctx->pc = 0x46efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 16));
label_46efdc:
    // 0x46efdc: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x46efdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_46efe0:
    // 0x46efe0: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x46efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_46efe4:
    // 0x46efe4: 0x40f809  jalr        $v0
label_46efe8:
    if (ctx->pc == 0x46EFE8u) {
        ctx->pc = 0x46EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EFE4u;
        // 0x46efe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46EFECu;
        goto label_46efec;
    }
    ctx->pc = 0x46EFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46EFECu);
        ctx->pc = 0x46EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46EFE4u;
        // 0x46efe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EFE4u, 0x46EFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46EFECu;
label_46efec:
    // 0x46efec: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x46efecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_46eff0:
    // 0x46eff0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46eff4:
    // 0x46eff4: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46eff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46eff8:
    // 0x46eff8: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46effc:
    // 0x46effc: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x46effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_46f000:
    // 0x46f000: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x46f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_46f004:
    // 0x46f004: 0x40f809  jalr        $v0
label_46f008:
    if (ctx->pc == 0x46F008u) {
        ctx->pc = 0x46F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F004u;
        // 0x46f008: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F00Cu;
        goto label_46f00c;
    }
    ctx->pc = 0x46F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F00Cu);
        ctx->pc = 0x46F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F004u;
        // 0x46f008: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F004u, 0x46F00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F00Cu;
label_46f00c:
    // 0x46f00c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x46f00cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f010:
    // 0x46f010: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46f010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46f014:
    // 0x46f014: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x46f014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_46f018:
    // 0x46f018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46f01c:
    // 0x46f01c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x46f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_46f020:
    // 0x46f020: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x46f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_46f024:
    // 0x46f024: 0x40f809  jalr        $v0
label_46f028:
    if (ctx->pc == 0x46F028u) {
        ctx->pc = 0x46F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F024u;
        // 0x46f028: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F02Cu;
        goto label_46f02c;
    }
    ctx->pc = 0x46F024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F02Cu);
        ctx->pc = 0x46F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F024u;
        // 0x46f028: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F024u, 0x46F02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F02Cu;
label_46f02c:
    // 0x46f02c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x46f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_46f030:
    // 0x46f030: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x46f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46f034:
    // 0x46f034: 0x1060023a  beqz        $v1, . + 4 + (0x23A << 2)
label_46f038:
    if (ctx->pc == 0x46F038u) {
        ctx->pc = 0x46F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F034u;
        // 0x46f038: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F03Cu;
        goto label_46f03c;
    }
    ctx->pc = 0x46F034u;
    {
        const bool branch_taken_0x46f034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F034u;
        // 0x46f038: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f034) {
            ctx->pc = 0x46F920u;
            goto label_46f920;
        }
    }
    ctx->pc = 0x46F03Cu;
label_46f03c:
    // 0x46f03c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x46f03cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46f040:
    // 0x46f040: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x46f040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f044:
    // 0x46f044: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_46f048:
    // 0x46f048: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46f04c:
    // 0x46f04c: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x46f04cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46f050:
    // 0x46f050: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f050u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f054:
    // 0x46f054: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x46f054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_46f058:
    // 0x46f058: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_46f05c:
    if (ctx->pc == 0x46F05Cu) {
        ctx->pc = 0x46F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F058u;
        // 0x46f05c: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F060u;
        goto label_46f060;
    }
    ctx->pc = 0x46F058u;
    {
        const bool branch_taken_0x46f058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F058u;
        // 0x46f05c: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f058) {
            ctx->pc = 0x46F124u;
            goto label_46f124;
        }
    }
    ctx->pc = 0x46F060u;
label_46f060:
    // 0x46f060: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46f060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46f064:
    // 0x46f064: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x46f064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_46f068:
    // 0x46f068: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x46f068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_46f06c:
    // 0x46f06c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46f070:
    // 0x46f070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46f070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46f074:
    // 0x46f074: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x46f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_46f078:
    // 0x46f078: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46f078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f07c:
    // 0x46f07c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46f07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46f080:
    // 0x46f080: 0x40f809  jalr        $v0
label_46f084:
    if (ctx->pc == 0x46F084u) {
        ctx->pc = 0x46F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F080u;
        // 0x46f084: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F088u;
        goto label_46f088;
    }
    ctx->pc = 0x46F080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F088u);
        ctx->pc = 0x46F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F080u;
        // 0x46f084: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F080u, 0x46F088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F088u;
label_46f088:
    // 0x46f088: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x46f088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_46f08c:
    // 0x46f08c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46f08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f090:
    // 0x46f090: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46f090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46f094:
    // 0x46f094: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x46f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f098:
    // 0x46f098: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46f098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46f09c:
    // 0x46f09c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x46f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_46f0a0:
    // 0x46f0a0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46f0a4:
    // 0x46f0a4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x46f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_46f0a8:
    // 0x46f0a8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46f0ac:
    // 0x46f0ac: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x46f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_46f0b0:
    // 0x46f0b0: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x46f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
label_46f0b4:
    // 0x46f0b4: 0xae3e0004  sw          $fp, 0x4($s1)
    ctx->pc = 0x46f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 30));
label_46f0b8:
    // 0x46f0b8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x46f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_46f0bc:
    // 0x46f0bc: 0x40f809  jalr        $v0
label_46f0c0:
    if (ctx->pc == 0x46F0C0u) {
        ctx->pc = 0x46F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F0BCu;
        // 0x46f0c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F0C4u;
        goto label_46f0c4;
    }
    ctx->pc = 0x46F0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F0C4u);
        ctx->pc = 0x46F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F0BCu;
        // 0x46f0c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F0BCu, 0x46F0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F0C4u;
label_46f0c4:
    // 0x46f0c4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x46f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_46f0c8:
    // 0x46f0c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x46f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46f0cc:
    // 0x46f0cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x46f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_46f0d0:
    // 0x46f0d0: 0x800013  mtlo        $a0
    ctx->pc = 0x46f0d0u;
    ctx->lo = GPR_U64(ctx, 4);
label_46f0d4:
    // 0x46f0d4: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x46f0d4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_46f0d8:
    // 0x46f0d8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x46f0d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_46f0dc:
    // 0x46f0dc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x46f0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_46f0e0:
    // 0x46f0e0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x46f0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46f0e4:
    // 0x46f0e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x46f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46f0e8:
    // 0x46f0e8: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x46f0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_46f0ec:
    // 0x46f0ec: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x46f0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_46f0f0:
    // 0x46f0f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x46f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46f0f4:
    // 0x46f0f4: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x46f0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_46f0f8:
    // 0x46f0f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x46f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46f0fc:
    // 0x46f0fc: 0xac720018  sw          $s2, 0x18($v1)
    ctx->pc = 0x46f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 18));
label_46f100:
    // 0x46f100: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46f104:
    // 0x46f104: 0xac52001c  sw          $s2, 0x1C($v0)
    ctx->pc = 0x46f104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
label_46f108:
    // 0x46f108: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x46f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46f10c:
    // 0x46f10c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x46f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_46f110:
    // 0x46f110: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_46f114:
    if (ctx->pc == 0x46F114u) {
        ctx->pc = 0x46F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F110u;
        // 0x46f114: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F118u;
        goto label_46f118;
    }
    ctx->pc = 0x46F110u;
    {
        const bool branch_taken_0x46f110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F110u;
        // 0x46f114: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f110) {
            ctx->pc = 0x46F11Cu;
            goto label_46f11c;
        }
    }
    ctx->pc = 0x46F118u;
label_46f118:
    // 0x46f118: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x46f118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_46f11c:
    // 0x46f11c: 0x100001fb  b           . + 4 + (0x1FB << 2)
label_46f120:
    if (ctx->pc == 0x46F120u) {
        ctx->pc = 0x46F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F11Cu;
        // 0x46f120: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F124u;
        goto label_46f124;
    }
    ctx->pc = 0x46F11Cu;
    {
        const bool branch_taken_0x46f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F11Cu;
        // 0x46f120: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f11c) {
            ctx->pc = 0x46F90Cu;
            goto label_46f90c;
        }
    }
    ctx->pc = 0x46F124u;
label_46f124:
    // 0x46f124: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x46f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46f128:
    // 0x46f128: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_46f12c:
    if (ctx->pc == 0x46F12Cu) {
        ctx->pc = 0x46F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F128u;
        // 0x46f12c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F130u;
        goto label_46f130;
    }
    ctx->pc = 0x46F128u;
    {
        const bool branch_taken_0x46f128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F128u;
        // 0x46f12c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f128) {
            ctx->pc = 0x46F154u;
            goto label_46f154;
        }
    }
    ctx->pc = 0x46F130u;
label_46f130:
    // 0x46f130: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x46f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_46f134:
    // 0x46f134: 0x0  nop
    ctx->pc = 0x46f134u;
    // NOP
label_46f138:
    // 0x46f138: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x46f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_46f13c:
    // 0x46f13c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x46f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46f140:
    // 0x46f140: 0x0  nop
    ctx->pc = 0x46f140u;
    // NOP
label_46f144:
    // 0x46f144: 0x0  nop
    ctx->pc = 0x46f144u;
    // NOP
label_46f148:
    // 0x46f148: 0x0  nop
    ctx->pc = 0x46f148u;
    // NOP
label_46f14c:
    // 0x46f14c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_46f150:
    if (ctx->pc == 0x46F150u) {
        ctx->pc = 0x46F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F14Cu;
        // 0x46f150: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F154u;
        goto label_46f154;
    }
    ctx->pc = 0x46F14Cu;
    {
        const bool branch_taken_0x46f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F14Cu;
        // 0x46f150: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f14c) {
            ctx->pc = 0x46F138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f138;
        }
    }
    ctx->pc = 0x46F154u;
label_46f154:
    // 0x46f154: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x46f154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_46f158:
    // 0x46f158: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x46f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_46f15c:
    // 0x46f15c: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x46f15cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46f160:
    // 0x46f160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f164:
    // 0x46f164: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x46f164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_46f168:
    // 0x46f168: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x46f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46f16c:
    // 0x46f16c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f170:
    if (ctx->pc == 0x46F170u) {
        ctx->pc = 0x46F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F16Cu;
        // 0x46f170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F174u;
        goto label_46f174;
    }
    ctx->pc = 0x46F16Cu;
    {
        const bool branch_taken_0x46f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F16Cu;
        // 0x46f170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f16c) {
            ctx->pc = 0x46F180u;
            goto label_46f180;
        }
    }
    ctx->pc = 0x46F174u;
label_46f174:
    // 0x46f174: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f178:
    // 0x46f178: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46f178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f17c:
    // 0x46f17c: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x46f17cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_46f180:
    // 0x46f180: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x46f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_46f184:
    // 0x46f184: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f188:
    if (ctx->pc == 0x46F188u) {
        ctx->pc = 0x46F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F184u;
        // 0x46f188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F18Cu;
        goto label_46f18c;
    }
    ctx->pc = 0x46F184u;
    {
        const bool branch_taken_0x46f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F184u;
        // 0x46f188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f184) {
            ctx->pc = 0x46F198u;
            goto label_46f198;
        }
    }
    ctx->pc = 0x46F18Cu;
label_46f18c:
    // 0x46f18c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f190:
    // 0x46f190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f194:
    // 0x46f194: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f194u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f198:
    // 0x46f198: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x46f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_46f19c:
    // 0x46f19c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x46f19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_46f1a0:
    // 0x46f1a0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_46f1a4:
    if (ctx->pc == 0x46F1A4u) {
        ctx->pc = 0x46F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1A0u;
        // 0x46f1a4: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F1A8u;
        goto label_46f1a8;
    }
    ctx->pc = 0x46F1A0u;
    {
        const bool branch_taken_0x46f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1A0u;
        // 0x46f1a4: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f1a0) {
            ctx->pc = 0x46F1F4u;
            goto label_46f1f4;
        }
    }
    ctx->pc = 0x46F1A8u;
label_46f1a8:
    // 0x46f1a8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x46f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f1ac:
    // 0x46f1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f1b0:
    // 0x46f1b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f1b4:
    if (ctx->pc == 0x46F1B4u) {
        ctx->pc = 0x46F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1B0u;
        // 0x46f1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F1B8u;
        goto label_46f1b8;
    }
    ctx->pc = 0x46F1B0u;
    {
        const bool branch_taken_0x46f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1B0u;
        // 0x46f1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f1b0) {
            ctx->pc = 0x46F1C4u;
            goto label_46f1c4;
        }
    }
    ctx->pc = 0x46F1B8u;
label_46f1b8:
    // 0x46f1b8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f1bc:
    // 0x46f1bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46f1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f1c0:
    // 0x46f1c0: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x46f1c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_46f1c4:
    // 0x46f1c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f1c8:
    // 0x46f1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f1cc:
    if (ctx->pc == 0x46F1CCu) {
        ctx->pc = 0x46F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1C8u;
        // 0x46f1cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F1D0u;
        goto label_46f1d0;
    }
    ctx->pc = 0x46F1C8u;
    {
        const bool branch_taken_0x46f1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1C8u;
        // 0x46f1cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f1c8) {
            ctx->pc = 0x46F1DCu;
            goto label_46f1dc;
        }
    }
    ctx->pc = 0x46F1D0u;
label_46f1d0:
    // 0x46f1d0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f1d4:
    // 0x46f1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f1d8:
    // 0x46f1d8: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f1d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f1dc:
    // 0x46f1dc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x46f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_46f1e0:
    // 0x46f1e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x46f1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_46f1e4:
    // 0x46f1e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46f1e8:
    if (ctx->pc == 0x46F1E8u) {
        ctx->pc = 0x46F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1E4u;
        // 0x46f1e8: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F1ECu;
        goto label_46f1ec;
    }
    ctx->pc = 0x46F1E4u;
    {
        const bool branch_taken_0x46f1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1E4u;
        // 0x46f1e8: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f1e4) {
            ctx->pc = 0x46F1F4u;
            goto label_46f1f4;
        }
    }
    ctx->pc = 0x46F1ECu;
label_46f1ec:
    // 0x46f1ec: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_46f1f0:
    if (ctx->pc == 0x46F1F0u) {
        ctx->pc = 0x46F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1ECu;
        // 0x46f1f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F1F4u;
        goto label_46f1f4;
    }
    ctx->pc = 0x46F1ECu;
    {
        const bool branch_taken_0x46f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F1ECu;
        // 0x46f1f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f1ec) {
            ctx->pc = 0x46F480u;
            goto label_46f480;
        }
    }
    ctx->pc = 0x46F1F4u;
label_46f1f4:
    // 0x46f1f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x46f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f1f8:
    // 0x46f1f8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x46f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46f1fc:
    // 0x46f1fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f200:
    // 0x46f200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f204:
    if (ctx->pc == 0x46F204u) {
        ctx->pc = 0x46F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F200u;
        // 0x46f204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F208u;
        goto label_46f208;
    }
    ctx->pc = 0x46F200u;
    {
        const bool branch_taken_0x46f200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F200u;
        // 0x46f204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f200) {
            ctx->pc = 0x46F214u;
            goto label_46f214;
        }
    }
    ctx->pc = 0x46F208u;
label_46f208:
    // 0x46f208: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f20c:
    // 0x46f20c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f210:
    // 0x46f210: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f210u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f214:
    // 0x46f214: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f218:
    // 0x46f218: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f21c:
    if (ctx->pc == 0x46F21Cu) {
        ctx->pc = 0x46F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F218u;
        // 0x46f21c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F220u;
        goto label_46f220;
    }
    ctx->pc = 0x46F218u;
    {
        const bool branch_taken_0x46f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F218u;
        // 0x46f21c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f218) {
            ctx->pc = 0x46F22Cu;
            goto label_46f22c;
        }
    }
    ctx->pc = 0x46F220u;
label_46f220:
    // 0x46f220: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f224:
    // 0x46f224: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f228:
    // 0x46f228: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f228u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f22c:
    // 0x46f22c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f230:
    // 0x46f230: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x46f230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_46f234:
    // 0x46f234: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_46f238:
    if (ctx->pc == 0x46F238u) {
        ctx->pc = 0x46F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F234u;
        // 0x46f238: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F23Cu;
        goto label_46f23c;
    }
    ctx->pc = 0x46F234u;
    {
        const bool branch_taken_0x46f234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F234u;
        // 0x46f238: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f234) {
            ctx->pc = 0x46F288u;
            goto label_46f288;
        }
    }
    ctx->pc = 0x46F23Cu;
label_46f23c:
    // 0x46f23c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x46f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_46f240:
    // 0x46f240: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f244:
    // 0x46f244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f248:
    if (ctx->pc == 0x46F248u) {
        ctx->pc = 0x46F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F244u;
        // 0x46f248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F24Cu;
        goto label_46f24c;
    }
    ctx->pc = 0x46F244u;
    {
        const bool branch_taken_0x46f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F244u;
        // 0x46f248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f244) {
            ctx->pc = 0x46F258u;
            goto label_46f258;
        }
    }
    ctx->pc = 0x46F24Cu;
label_46f24c:
    // 0x46f24c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f250:
    // 0x46f250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f254:
    // 0x46f254: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f254u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f258:
    // 0x46f258: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f25c:
    // 0x46f25c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f260:
    if (ctx->pc == 0x46F260u) {
        ctx->pc = 0x46F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F25Cu;
        // 0x46f260: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F264u;
        goto label_46f264;
    }
    ctx->pc = 0x46F25Cu;
    {
        const bool branch_taken_0x46f25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F25Cu;
        // 0x46f260: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f25c) {
            ctx->pc = 0x46F270u;
            goto label_46f270;
        }
    }
    ctx->pc = 0x46F264u;
label_46f264:
    // 0x46f264: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f268:
    // 0x46f268: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f26c:
    // 0x46f26c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f26cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f270:
    // 0x46f270: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f274:
    // 0x46f274: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x46f274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_46f278:
    // 0x46f278: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46f27c:
    if (ctx->pc == 0x46F27Cu) {
        ctx->pc = 0x46F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F278u;
        // 0x46f27c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F280u;
        goto label_46f280;
    }
    ctx->pc = 0x46F278u;
    {
        const bool branch_taken_0x46f278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F278u;
        // 0x46f27c: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f278) {
            ctx->pc = 0x46F288u;
            goto label_46f288;
        }
    }
    ctx->pc = 0x46F280u;
label_46f280:
    // 0x46f280: 0x1000007f  b           . + 4 + (0x7F << 2)
label_46f284:
    if (ctx->pc == 0x46F284u) {
        ctx->pc = 0x46F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F280u;
        // 0x46f284: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F288u;
        goto label_46f288;
    }
    ctx->pc = 0x46F280u;
    {
        const bool branch_taken_0x46f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F280u;
        // 0x46f284: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f280) {
            ctx->pc = 0x46F480u;
            goto label_46f480;
        }
    }
    ctx->pc = 0x46F288u;
label_46f288:
    // 0x46f288: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x46f288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f28c:
    // 0x46f28c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x46f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46f290:
    // 0x46f290: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f294:
    // 0x46f294: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f298:
    if (ctx->pc == 0x46F298u) {
        ctx->pc = 0x46F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F294u;
        // 0x46f298: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F29Cu;
        goto label_46f29c;
    }
    ctx->pc = 0x46F294u;
    {
        const bool branch_taken_0x46f294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F294u;
        // 0x46f298: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f294) {
            ctx->pc = 0x46F2A8u;
            goto label_46f2a8;
        }
    }
    ctx->pc = 0x46F29Cu;
label_46f29c:
    // 0x46f29c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f2a0:
    // 0x46f2a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f2a4:
    // 0x46f2a4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f2a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f2a8:
    // 0x46f2a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f2ac:
    // 0x46f2ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f2b0:
    if (ctx->pc == 0x46F2B0u) {
        ctx->pc = 0x46F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2ACu;
        // 0x46f2b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F2B4u;
        goto label_46f2b4;
    }
    ctx->pc = 0x46F2ACu;
    {
        const bool branch_taken_0x46f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2ACu;
        // 0x46f2b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f2ac) {
            ctx->pc = 0x46F2C0u;
            goto label_46f2c0;
        }
    }
    ctx->pc = 0x46F2B4u;
label_46f2b4:
    // 0x46f2b4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f2b8:
    // 0x46f2b8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f2b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f2bc:
    // 0x46f2bc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f2bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f2c0:
    // 0x46f2c0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f2c4:
    // 0x46f2c4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x46f2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_46f2c8:
    // 0x46f2c8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_46f2cc:
    if (ctx->pc == 0x46F2CCu) {
        ctx->pc = 0x46F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2C8u;
        // 0x46f2cc: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F2D0u;
        goto label_46f2d0;
    }
    ctx->pc = 0x46F2C8u;
    {
        const bool branch_taken_0x46f2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2C8u;
        // 0x46f2cc: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f2c8) {
            ctx->pc = 0x46F31Cu;
            goto label_46f31c;
        }
    }
    ctx->pc = 0x46F2D0u;
label_46f2d0:
    // 0x46f2d0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x46f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46f2d4:
    // 0x46f2d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f2d8:
    // 0x46f2d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f2dc:
    if (ctx->pc == 0x46F2DCu) {
        ctx->pc = 0x46F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2D8u;
        // 0x46f2dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F2E0u;
        goto label_46f2e0;
    }
    ctx->pc = 0x46F2D8u;
    {
        const bool branch_taken_0x46f2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2D8u;
        // 0x46f2dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f2d8) {
            ctx->pc = 0x46F2ECu;
            goto label_46f2ec;
        }
    }
    ctx->pc = 0x46F2E0u;
label_46f2e0:
    // 0x46f2e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f2e4:
    // 0x46f2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f2e8:
    // 0x46f2e8: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f2e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f2ec:
    // 0x46f2ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f2f0:
    // 0x46f2f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f2f4:
    if (ctx->pc == 0x46F2F4u) {
        ctx->pc = 0x46F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2F0u;
        // 0x46f2f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F2F8u;
        goto label_46f2f8;
    }
    ctx->pc = 0x46F2F0u;
    {
        const bool branch_taken_0x46f2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F2F0u;
        // 0x46f2f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f2f0) {
            ctx->pc = 0x46F304u;
            goto label_46f304;
        }
    }
    ctx->pc = 0x46F2F8u;
label_46f2f8:
    // 0x46f2f8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f2fc:
    // 0x46f2fc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f2fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f300:
    // 0x46f300: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f300u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f304:
    // 0x46f304: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f308:
    // 0x46f308: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x46f308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_46f30c:
    // 0x46f30c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46f310:
    if (ctx->pc == 0x46F310u) {
        ctx->pc = 0x46F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F30Cu;
        // 0x46f310: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F314u;
        goto label_46f314;
    }
    ctx->pc = 0x46F30Cu;
    {
        const bool branch_taken_0x46f30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F30Cu;
        // 0x46f310: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f30c) {
            ctx->pc = 0x46F31Cu;
            goto label_46f31c;
        }
    }
    ctx->pc = 0x46F314u;
label_46f314:
    // 0x46f314: 0x1000005a  b           . + 4 + (0x5A << 2)
label_46f318:
    if (ctx->pc == 0x46F318u) {
        ctx->pc = 0x46F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F314u;
        // 0x46f318: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F31Cu;
        goto label_46f31c;
    }
    ctx->pc = 0x46F314u;
    {
        const bool branch_taken_0x46f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F314u;
        // 0x46f318: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f314) {
            ctx->pc = 0x46F480u;
            goto label_46f480;
        }
    }
    ctx->pc = 0x46F31Cu;
label_46f31c:
    // 0x46f31c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x46f31cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f320:
    // 0x46f320: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x46f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_46f324:
    // 0x46f324: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x46f324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f328:
    // 0x46f328: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_46f32c:
    if (ctx->pc == 0x46F32Cu) {
        ctx->pc = 0x46F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F328u;
        // 0x46f32c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F330u;
        goto label_46f330;
    }
    ctx->pc = 0x46F328u;
    {
        const bool branch_taken_0x46f328 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F328u;
        // 0x46f32c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f328) {
            ctx->pc = 0x46F33Cu;
            goto label_46f33c;
        }
    }
    ctx->pc = 0x46F330u;
label_46f330:
    // 0x46f330: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x46f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_46f334:
    // 0x46f334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f338:
    // 0x46f338: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f338u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f33c:
    // 0x46f33c: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x46f33cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f340:
    // 0x46f340: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_46f344:
    if (ctx->pc == 0x46F344u) {
        ctx->pc = 0x46F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F340u;
        // 0x46f344: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F348u;
        goto label_46f348;
    }
    ctx->pc = 0x46F340u;
    {
        const bool branch_taken_0x46f340 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F340u;
        // 0x46f344: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f340) {
            ctx->pc = 0x46F354u;
            goto label_46f354;
        }
    }
    ctx->pc = 0x46F348u;
label_46f348:
    // 0x46f348: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x46f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_46f34c:
    // 0x46f34c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f34cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f350:
    // 0x46f350: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f350u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f354:
    // 0x46f354: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x46f354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_46f358:
    // 0x46f358: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x46f358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f35c:
    // 0x46f35c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x46f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46f360:
    // 0x46f360: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_46f364:
    if (ctx->pc == 0x46F364u) {
        ctx->pc = 0x46F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F360u;
        // 0x46f364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F368u;
        goto label_46f368;
    }
    ctx->pc = 0x46F360u;
    {
        const bool branch_taken_0x46f360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F360u;
        // 0x46f364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f360) {
            ctx->pc = 0x46F374u;
            goto label_46f374;
        }
    }
    ctx->pc = 0x46F368u;
label_46f368:
    // 0x46f368: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x46f368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_46f36c:
    // 0x46f36c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46f36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f370:
    // 0x46f370: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x46f370u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_46f374:
    // 0x46f374: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x46f374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46f378:
    // 0x46f378: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_46f37c:
    if (ctx->pc == 0x46F37Cu) {
        ctx->pc = 0x46F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F378u;
        // 0x46f37c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F380u;
        goto label_46f380;
    }
    ctx->pc = 0x46F378u;
    {
        const bool branch_taken_0x46f378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F378u;
        // 0x46f37c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f378) {
            ctx->pc = 0x46F38Cu;
            goto label_46f38c;
        }
    }
    ctx->pc = 0x46F380u;
label_46f380:
    // 0x46f380: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x46f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_46f384:
    // 0x46f384: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f388:
    // 0x46f388: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f388u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f38c:
    // 0x46f38c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x46f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_46f390:
    // 0x46f390: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x46f390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_46f394:
    // 0x46f394: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_46f398:
    if (ctx->pc == 0x46F398u) {
        ctx->pc = 0x46F39Cu;
        goto label_46f39c;
    }
    ctx->pc = 0x46F394u;
    {
        const bool branch_taken_0x46f394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f394) {
            ctx->pc = 0x46F414u;
            goto label_46f414;
        }
    }
    ctx->pc = 0x46F39Cu;
label_46f39c:
    // 0x46f39c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_46f3a0:
    if (ctx->pc == 0x46F3A0u) {
        ctx->pc = 0x46F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F39Cu;
        // 0x46f3a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F3A4u;
        goto label_46f3a4;
    }
    ctx->pc = 0x46F39Cu;
    {
        const bool branch_taken_0x46f39c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F39Cu;
        // 0x46f3a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f39c) {
            ctx->pc = 0x46F3B0u;
            goto label_46f3b0;
        }
    }
    ctx->pc = 0x46F3A4u;
label_46f3a4:
    // 0x46f3a4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x46f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_46f3a8:
    // 0x46f3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f3ac:
    // 0x46f3ac: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f3acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f3b0:
    // 0x46f3b0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_46f3b4:
    if (ctx->pc == 0x46F3B4u) {
        ctx->pc = 0x46F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F3B0u;
        // 0x46f3b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F3B8u;
        goto label_46f3b8;
    }
    ctx->pc = 0x46F3B0u;
    {
        const bool branch_taken_0x46f3b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F3B0u;
        // 0x46f3b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f3b0) {
            ctx->pc = 0x46F3C4u;
            goto label_46f3c4;
        }
    }
    ctx->pc = 0x46F3B8u;
label_46f3b8:
    // 0x46f3b8: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x46f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_46f3bc:
    // 0x46f3bc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f3bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f3c0:
    // 0x46f3c0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f3c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f3c4:
    // 0x46f3c4: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x46f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_46f3c8:
    // 0x46f3c8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x46f3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f3cc:
    // 0x46f3cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x46f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46f3d0:
    // 0x46f3d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f3d4:
    if (ctx->pc == 0x46F3D4u) {
        ctx->pc = 0x46F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F3D0u;
        // 0x46f3d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F3D8u;
        goto label_46f3d8;
    }
    ctx->pc = 0x46F3D0u;
    {
        const bool branch_taken_0x46f3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F3D0u;
        // 0x46f3d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f3d0) {
            ctx->pc = 0x46F3E4u;
            goto label_46f3e4;
        }
    }
    ctx->pc = 0x46F3D8u;
label_46f3d8:
    // 0x46f3d8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f3dc:
    // 0x46f3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f3e0:
    // 0x46f3e0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f3e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f3e4:
    // 0x46f3e4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x46f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46f3e8:
    // 0x46f3e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f3ec:
    if (ctx->pc == 0x46F3ECu) {
        ctx->pc = 0x46F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F3E8u;
        // 0x46f3ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F3F0u;
        goto label_46f3f0;
    }
    ctx->pc = 0x46F3E8u;
    {
        const bool branch_taken_0x46f3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F3E8u;
        // 0x46f3ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f3e8) {
            ctx->pc = 0x46F3FCu;
            goto label_46f3fc;
        }
    }
    ctx->pc = 0x46F3F0u;
label_46f3f0:
    // 0x46f3f0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f3f4:
    // 0x46f3f4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f3f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f3f8:
    // 0x46f3f8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f3f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f3fc:
    // 0x46f3fc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f400:
    // 0x46f400: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x46f400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f404:
    // 0x46f404: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x46f404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_46f408:
    // 0x46f408: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46f408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f40c:
    // 0x46f40c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_46f410:
    if (ctx->pc == 0x46F410u) {
        ctx->pc = 0x46F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F40Cu;
        // 0x46f410: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F414u;
        goto label_46f414;
    }
    ctx->pc = 0x46F40Cu;
    {
        const bool branch_taken_0x46f40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F40Cu;
        // 0x46f410: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f40c) {
            ctx->pc = 0x46F480u;
            goto label_46f480;
        }
    }
    ctx->pc = 0x46F414u;
label_46f414:
    // 0x46f414: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_46f418:
    if (ctx->pc == 0x46F418u) {
        ctx->pc = 0x46F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F414u;
        // 0x46f418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F41Cu;
        goto label_46f41c;
    }
    ctx->pc = 0x46F414u;
    {
        const bool branch_taken_0x46f414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F414u;
        // 0x46f418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f414) {
            ctx->pc = 0x46F428u;
            goto label_46f428;
        }
    }
    ctx->pc = 0x46F41Cu;
label_46f41c:
    // 0x46f41c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x46f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_46f420:
    // 0x46f420: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46f420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f424:
    // 0x46f424: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x46f424u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_46f428:
    // 0x46f428: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_46f42c:
    if (ctx->pc == 0x46F42Cu) {
        ctx->pc = 0x46F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F428u;
        // 0x46f42c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F430u;
        goto label_46f430;
    }
    ctx->pc = 0x46F428u;
    {
        const bool branch_taken_0x46f428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F428u;
        // 0x46f42c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f428) {
            ctx->pc = 0x46F43Cu;
            goto label_46f43c;
        }
    }
    ctx->pc = 0x46F430u;
label_46f430:
    // 0x46f430: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x46f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_46f434:
    // 0x46f434: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f434u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f438:
    // 0x46f438: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f438u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f43c:
    // 0x46f43c: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x46f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_46f440:
    // 0x46f440: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x46f440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_46f444:
    // 0x46f444: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x46f444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46f448:
    // 0x46f448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f44c:
    if (ctx->pc == 0x46F44Cu) {
        ctx->pc = 0x46F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F448u;
        // 0x46f44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F450u;
        goto label_46f450;
    }
    ctx->pc = 0x46F448u;
    {
        const bool branch_taken_0x46f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F448u;
        // 0x46f44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f448) {
            ctx->pc = 0x46F45Cu;
            goto label_46f45c;
        }
    }
    ctx->pc = 0x46F450u;
label_46f450:
    // 0x46f450: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f454:
    // 0x46f454: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46f454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f458:
    // 0x46f458: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x46f458u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_46f45c:
    // 0x46f45c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x46f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_46f460:
    // 0x46f460: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f464:
    if (ctx->pc == 0x46F464u) {
        ctx->pc = 0x46F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F460u;
        // 0x46f464: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F468u;
        goto label_46f468;
    }
    ctx->pc = 0x46F460u;
    {
        const bool branch_taken_0x46f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F460u;
        // 0x46f464: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f460) {
            ctx->pc = 0x46F474u;
            goto label_46f474;
        }
    }
    ctx->pc = 0x46F468u;
label_46f468:
    // 0x46f468: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f46c:
    // 0x46f46c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f470:
    // 0x46f470: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f470u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f474:
    // 0x46f474: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x46f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_46f478:
    // 0x46f478: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x46f478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_46f47c:
    // 0x46f47c: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x46f47cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_46f480:
    // 0x46f480: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x46f480u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46f484:
    // 0x46f484: 0xafb70034  sw          $s7, 0x34($sp)
    ctx->pc = 0x46f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 23));
label_46f488:
    // 0x46f488: 0xafb60044  sw          $s6, 0x44($sp)
    ctx->pc = 0x46f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 22));
label_46f48c:
    // 0x46f48c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x46f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_46f490:
    // 0x46f490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46f490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f494:
    // 0x46f494: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x46f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_46f498:
    // 0x46f498: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x46f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46f49c:
    // 0x46f49c: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x46f49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_46f4a0:
    // 0x46f4a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_46f4a4:
    if (ctx->pc == 0x46F4A4u) {
        ctx->pc = 0x46F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4A0u;
        // 0x46f4a4: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F4A8u;
        goto label_46f4a8;
    }
    ctx->pc = 0x46F4A0u;
    {
        const bool branch_taken_0x46f4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4A0u;
        // 0x46f4a4: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f4a0) {
            ctx->pc = 0x46F4D0u;
            goto label_46f4d0;
        }
    }
    ctx->pc = 0x46F4A8u;
label_46f4a8:
    // 0x46f4a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x46f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_46f4ac:
    // 0x46f4ac: 0x0  nop
    ctx->pc = 0x46f4acu;
    // NOP
label_46f4b0:
    // 0x46f4b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x46f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46f4b4:
    // 0x46f4b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x46f4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_46f4b8:
    // 0x46f4b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x46f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_46f4bc:
    // 0x46f4bc: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x46f4bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46f4c0:
    // 0x46f4c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x46f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_46f4c4:
    // 0x46f4c4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x46f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f4c8:
    // 0x46f4c8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_46f4cc:
    if (ctx->pc == 0x46F4CCu) {
        ctx->pc = 0x46F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4C8u;
        // 0x46f4cc: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F4D0u;
        goto label_46f4d0;
    }
    ctx->pc = 0x46F4C8u;
    {
        const bool branch_taken_0x46f4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4C8u;
        // 0x46f4cc: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f4c8) {
            ctx->pc = 0x46F4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f4b0;
        }
    }
    ctx->pc = 0x46F4D0u;
label_46f4d0:
    // 0x46f4d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x46f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_46f4d4:
    // 0x46f4d4: 0x10720012  beq         $v1, $s2, . + 4 + (0x12 << 2)
label_46f4d8:
    if (ctx->pc == 0x46F4D8u) {
        ctx->pc = 0x46F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4D4u;
        // 0x46f4d8: 0xafb10048  sw          $s1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F4DCu;
        goto label_46f4dc;
    }
    ctx->pc = 0x46F4D4u;
    {
        const bool branch_taken_0x46f4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x46F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4D4u;
        // 0x46f4d8: 0xafb10048  sw          $s1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f4d4) {
            ctx->pc = 0x46F520u;
            goto label_46f520;
        }
    }
    ctx->pc = 0x46F4DCu;
label_46f4dc:
    // 0x46f4dc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x46f4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_46f4e0:
    // 0x46f4e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_46f4e4:
    if (ctx->pc == 0x46F4E4u) {
        ctx->pc = 0x46F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4E0u;
        // 0x46f4e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F4E8u;
        goto label_46f4e8;
    }
    ctx->pc = 0x46F4E0u;
    {
        const bool branch_taken_0x46f4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4E0u;
        // 0x46f4e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f4e0) {
            ctx->pc = 0x46F4F8u;
            goto label_46f4f8;
        }
    }
    ctx->pc = 0x46F4E8u;
label_46f4e8:
    // 0x46f4e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_46f4ec:
    if (ctx->pc == 0x46F4ECu) {
        ctx->pc = 0x46F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4E8u;
        // 0x46f4ec: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F4F0u;
        goto label_46f4f0;
    }
    ctx->pc = 0x46F4E8u;
    {
        const bool branch_taken_0x46f4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4E8u;
        // 0x46f4ec: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f4e8) {
            ctx->pc = 0x46F508u;
            goto label_46f508;
        }
    }
    ctx->pc = 0x46F4F0u;
label_46f4f0:
    // 0x46f4f0: 0x10000013  b           . + 4 + (0x13 << 2)
label_46f4f4:
    if (ctx->pc == 0x46F4F4u) {
        ctx->pc = 0x46F4F8u;
        goto label_46f4f8;
    }
    ctx->pc = 0x46F4F0u;
    {
        const bool branch_taken_0x46f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f4f0) {
            ctx->pc = 0x46F540u;
            goto label_46f540;
        }
    }
    ctx->pc = 0x46F4F8u;
label_46f4f8:
    // 0x46f4f8: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_46f4fc:
    if (ctx->pc == 0x46F4FCu) {
        ctx->pc = 0x46F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4F8u;
        // 0x46f4fc: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F500u;
        goto label_46f500;
    }
    ctx->pc = 0x46F4F8u;
    {
        const bool branch_taken_0x46f4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x46F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F4F8u;
        // 0x46f4fc: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f4f8) {
            ctx->pc = 0x46F528u;
            goto label_46f528;
        }
    }
    ctx->pc = 0x46F500u;
label_46f500:
    // 0x46f500: 0x1000000f  b           . + 4 + (0xF << 2)
label_46f504:
    if (ctx->pc == 0x46F504u) {
        ctx->pc = 0x46F508u;
        goto label_46f508;
    }
    ctx->pc = 0x46F500u;
    {
        const bool branch_taken_0x46f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f500) {
            ctx->pc = 0x46F540u;
            goto label_46f540;
        }
    }
    ctx->pc = 0x46F508u;
label_46f508:
    // 0x46f508: 0x2de001b  divu        $zero, $s6, $fp
    ctx->pc = 0x46f508u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
label_46f50c:
    // 0x46f50c: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_46f510:
    if (ctx->pc == 0x46F510u) {
        ctx->pc = 0x46F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F50Cu;
        // 0x46f510: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F514u;
        goto label_46f514;
    }
    ctx->pc = 0x46F50Cu;
    {
        const bool branch_taken_0x46f50c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f50c) {
            ctx->pc = 0x46F510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46F50Cu;
            // 0x46f510: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46F514u;
            goto label_46f514;
        }
    }
    ctx->pc = 0x46F514u;
label_46f514:
    // 0x46f514: 0x1010  mfhi        $v0
    ctx->pc = 0x46f514u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_46f518:
    // 0x46f518: 0x10000009  b           . + 4 + (0x9 << 2)
label_46f51c:
    if (ctx->pc == 0x46F51Cu) {
        ctx->pc = 0x46F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F518u;
        // 0x46f51c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F520u;
        goto label_46f520;
    }
    ctx->pc = 0x46F518u;
    {
        const bool branch_taken_0x46f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F518u;
        // 0x46f51c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f518) {
            ctx->pc = 0x46F540u;
            goto label_46f540;
        }
    }
    ctx->pc = 0x46F520u;
label_46f520:
    // 0x46f520: 0x10000002  b           . + 4 + (0x2 << 2)
label_46f524:
    if (ctx->pc == 0x46F524u) {
        ctx->pc = 0x46F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F520u;
        // 0x46f524: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F528u;
        goto label_46f528;
    }
    ctx->pc = 0x46F520u;
    {
        const bool branch_taken_0x46f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F520u;
        // 0x46f524: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f520) {
            ctx->pc = 0x46F52Cu;
            goto label_46f52c;
        }
    }
    ctx->pc = 0x46F528u;
label_46f528:
    // 0x46f528: 0x26c20002  addiu       $v0, $s6, 0x2
    ctx->pc = 0x46f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_46f52c:
    // 0x46f52c: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_46f530:
    if (ctx->pc == 0x46F530u) {
        ctx->pc = 0x46F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F52Cu;
        // 0x46f530: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F534u;
        goto label_46f534;
    }
    ctx->pc = 0x46F52Cu;
    {
        const bool branch_taken_0x46f52c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f52c) {
            ctx->pc = 0x46F530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46F52Cu;
            // 0x46f530: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46F534u;
            goto label_46f534;
        }
    }
    ctx->pc = 0x46F534u;
label_46f534:
    // 0x46f534: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x46f534u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_46f538:
    // 0x46f538: 0x1810  mfhi        $v1
    ctx->pc = 0x46f538u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_46f53c:
    // 0x46f53c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x46f53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46f540:
    // 0x46f540: 0x1212000d  beq         $s0, $s2, . + 4 + (0xD << 2)
label_46f544:
    if (ctx->pc == 0x46F544u) {
        ctx->pc = 0x46F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F540u;
        // 0x46f544: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F548u;
        goto label_46f548;
    }
    ctx->pc = 0x46F540u;
    {
        const bool branch_taken_0x46f540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x46F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F540u;
        // 0x46f544: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f540) {
            ctx->pc = 0x46F578u;
            goto label_46f578;
        }
    }
    ctx->pc = 0x46F548u;
label_46f548:
    // 0x46f548: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_46f54c:
    if (ctx->pc == 0x46F54Cu) {
        ctx->pc = 0x46F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F548u;
        // 0x46f54c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F550u;
        goto label_46f550;
    }
    ctx->pc = 0x46F548u;
    {
        const bool branch_taken_0x46f548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F548u;
        // 0x46f54c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f548) {
            ctx->pc = 0x46F560u;
            goto label_46f560;
        }
    }
    ctx->pc = 0x46F550u;
label_46f550:
    // 0x46f550: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_46f554:
    if (ctx->pc == 0x46F554u) {
        ctx->pc = 0x46F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F550u;
        // 0x46f554: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F558u;
        goto label_46f558;
    }
    ctx->pc = 0x46F550u;
    {
        const bool branch_taken_0x46f550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x46F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F550u;
        // 0x46f554: 0x3ad1021  addu        $v0, $sp, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f550) {
            ctx->pc = 0x46F58Cu;
            goto label_46f58c;
        }
    }
    ctx->pc = 0x46F558u;
label_46f558:
    // 0x46f558: 0x10000012  b           . + 4 + (0x12 << 2)
label_46f55c:
    if (ctx->pc == 0x46F55Cu) {
        ctx->pc = 0x46F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F558u;
        // 0x46f55c: 0x21e001b  divu        $zero, $s0, $fp (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F560u;
        goto label_46f560;
    }
    ctx->pc = 0x46F558u;
    {
        const bool branch_taken_0x46f558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F558u;
        // 0x46f55c: 0x21e001b  divu        $zero, $s0, $fp (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f558) {
            ctx->pc = 0x46F5A4u;
            goto label_46f5a4;
        }
    }
    ctx->pc = 0x46F560u;
label_46f560:
    // 0x46f560: 0x3ad1021  addu        $v0, $sp, $t5
    ctx->pc = 0x46f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
label_46f564:
    // 0x46f564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f568:
    // 0x46f568: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46f568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f56c:
    // 0x46f56c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x46f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_46f570:
    // 0x46f570: 0x1000000a  b           . + 4 + (0xA << 2)
label_46f574:
    if (ctx->pc == 0x46F574u) {
        ctx->pc = 0x46F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F570u;
        // 0x46f574: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F578u;
        goto label_46f578;
    }
    ctx->pc = 0x46F570u;
    {
        const bool branch_taken_0x46f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F570u;
        // 0x46f574: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f570) {
            ctx->pc = 0x46F59Cu;
            goto label_46f59c;
        }
    }
    ctx->pc = 0x46F578u;
label_46f578:
    // 0x46f578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f57c:
    // 0x46f57c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f580:
    // 0x46f580: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x46f580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_46f584:
    // 0x46f584: 0x10000005  b           . + 4 + (0x5 << 2)
label_46f588:
    if (ctx->pc == 0x46F588u) {
        ctx->pc = 0x46F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F584u;
        // 0x46f588: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F58Cu;
        goto label_46f58c;
    }
    ctx->pc = 0x46F584u;
    {
        const bool branch_taken_0x46f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F584u;
        // 0x46f588: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f584) {
            ctx->pc = 0x46F59Cu;
            goto label_46f59c;
        }
    }
    ctx->pc = 0x46F58Cu;
label_46f58c:
    // 0x46f58c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f590:
    // 0x46f590: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x46f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_46f594:
    // 0x46f594: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x46f594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_46f598:
    // 0x46f598: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f59c:
    // 0x46f59c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x46f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_46f5a0:
    // 0x46f5a0: 0x21e001b  divu        $zero, $s0, $fp
    ctx->pc = 0x46f5a0u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_46f5a4:
    // 0x46f5a4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x46f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_46f5a8:
    // 0x46f5a8: 0x26090002  addiu       $t1, $s0, 0x2
    ctx->pc = 0x46f5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_46f5ac:
    // 0x46f5ac: 0x3ad6021  addu        $t4, $sp, $t5
    ctx->pc = 0x46f5acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
label_46f5b0:
    // 0x46f5b0: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_46f5b4:
    if (ctx->pc == 0x46F5B4u) {
        ctx->pc = 0x46F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F5B0u;
        // 0x46f5b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F5B8u;
        goto label_46f5b8;
    }
    ctx->pc = 0x46F5B0u;
    {
        const bool branch_taken_0x46f5b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f5b0) {
            ctx->pc = 0x46F5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46F5B0u;
            // 0x46f5b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46F5B8u;
            goto label_46f5b8;
        }
    }
    ctx->pc = 0x46F5B8u;
label_46f5b8:
    // 0x46f5b8: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x46f5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46f5bc:
    // 0x46f5bc: 0x8e8b0000  lw          $t3, 0x0($s4)
    ctx->pc = 0x46f5bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46f5c0:
    // 0x46f5c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x46f5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46f5c4:
    // 0x46f5c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46f5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46f5c8:
    // 0x46f5c8: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x46f5c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46f5cc:
    // 0x46f5cc: 0x2a350004  slti        $s5, $s1, 0x4
    ctx->pc = 0x46f5ccu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_46f5d0:
    // 0x46f5d0: 0x1810  mfhi        $v1
    ctx->pc = 0x46f5d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_46f5d4:
    // 0x46f5d4: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x46f5d4u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_46f5d8:
    // 0x46f5d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46f5dc:
    // 0x46f5dc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x46f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_46f5e0:
    // 0x46f5e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f5e4:
    // 0x46f5e4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x46f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_46f5e8:
    // 0x46f5e8: 0x3810  mfhi        $a3
    ctx->pc = 0x46f5e8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_46f5ec:
    // 0x46f5ec: 0x13e001b  divu        $zero, $t1, $fp
    ctx->pc = 0x46f5ecu;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_46f5f0:
    // 0x46f5f0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x46f5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_46f5f4:
    // 0x46f5f4: 0x400013  mtlo        $v0
    ctx->pc = 0x46f5f4u;
    ctx->lo = GPR_U64(ctx, 2);
label_46f5f8:
    // 0x46f5f8: 0x4010  mfhi        $t0
    ctx->pc = 0x46f5f8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_46f5fc:
    // 0x46f5fc: 0x708a2000  madd        $a0, $a0, $t2
    ctx->pc = 0x46f5fcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_46f600:
    // 0x46f600: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x46f600u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_46f604:
    // 0x46f604: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x46f604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f608:
    // 0x46f608: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x46f608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_46f60c:
    // 0x46f60c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x46f60cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_46f610:
    // 0x46f610: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x46f610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_46f614:
    // 0x46f614: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x46f614u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
label_46f618:
    // 0x46f618: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x46f618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_46f61c:
    // 0x46f61c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x46f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46f620:
    // 0x46f620: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x46f620u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_46f624:
    // 0x46f624: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x46f624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_46f628:
    // 0x46f628: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x46f628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46f62c:
    // 0x46f62c: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x46f62cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_46f630:
    // 0x46f630: 0xae9e0004  sw          $fp, 0x4($s4)
    ctx->pc = 0x46f630u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
label_46f634:
    // 0x46f634: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x46f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_46f638:
    // 0x46f638: 0xc11ba44  jal         func_46E910
label_46f63c:
    if (ctx->pc == 0x46F63Cu) {
        ctx->pc = 0x46F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F638u;
        // 0x46f63c: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F640u;
        goto label_46f640;
    }
    ctx->pc = 0x46F638u;
    SET_GPR_U32(ctx, 31, 0x46F640u);
    ctx->pc = 0x46F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46F638u;
    // 0x46f63c: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E910u, 0x46F638u, 0x46F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F640u;
label_46f640:
    // 0x46f640: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x46f640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_46f644:
    // 0x46f644: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46f644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46f648:
    // 0x46f648: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x46f648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_46f64c:
    // 0x46f64c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x46f64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46f650:
    // 0x46f650: 0xc11baaa  jal         func_46EAA8
label_46f654:
    if (ctx->pc == 0x46F654u) {
        ctx->pc = 0x46F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F650u;
        // 0x46f654: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F658u;
        goto label_46f658;
    }
    ctx->pc = 0x46F650u;
    SET_GPR_U32(ctx, 31, 0x46F658u);
    ctx->pc = 0x46F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46F650u;
    // 0x46f654: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46EAA8u, 0x46F650u, 0x46F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F658u;
label_46f658:
    // 0x46f658: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x46f658u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_46f65c:
    // 0x46f65c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_46f660:
    if (ctx->pc == 0x46F660u) {
        ctx->pc = 0x46F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F65Cu;
        // 0x46f660: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F664u;
        goto label_46f664;
    }
    ctx->pc = 0x46F65Cu;
    {
        const bool branch_taken_0x46f65c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F65Cu;
        // 0x46f660: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f65c) {
            ctx->pc = 0x46F698u;
            goto label_46f698;
        }
    }
    ctx->pc = 0x46F664u;
label_46f664:
    // 0x46f664: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46f668:
    // 0x46f668: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f66c:
    // 0x46f66c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_46f670:
    if (ctx->pc == 0x46F670u) {
        ctx->pc = 0x46F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F66Cu;
        // 0x46f670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F674u;
        goto label_46f674;
    }
    ctx->pc = 0x46F66Cu;
    {
        const bool branch_taken_0x46f66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F66Cu;
        // 0x46f670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f66c) {
            ctx->pc = 0x46F684u;
            goto label_46f684;
        }
    }
    ctx->pc = 0x46F674u;
label_46f674:
    // 0x46f674: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x46f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_46f678:
    // 0x46f678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f67c:
    // 0x46f67c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f67cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f680:
    // 0x46f680: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46f684:
    // 0x46f684: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f688:
    // 0x46f688: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_46f68c:
    if (ctx->pc == 0x46F68Cu) {
        ctx->pc = 0x46F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F688u;
        // 0x46f68c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F690u;
        goto label_46f690;
    }
    ctx->pc = 0x46F688u;
    {
        const bool branch_taken_0x46f688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F688u;
        // 0x46f68c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f688) {
            ctx->pc = 0x46F6D0u;
            goto label_46f6d0;
        }
    }
    ctx->pc = 0x46F690u;
label_46f690:
    // 0x46f690: 0x1000000d  b           . + 4 + (0xD << 2)
label_46f694:
    if (ctx->pc == 0x46F694u) {
        ctx->pc = 0x46F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F690u;
        // 0x46f694: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F698u;
        goto label_46f698;
    }
    ctx->pc = 0x46F690u;
    {
        const bool branch_taken_0x46f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F690u;
        // 0x46f694: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f690) {
            ctx->pc = 0x46F6C8u;
            goto label_46f6c8;
        }
    }
    ctx->pc = 0x46F698u;
label_46f698:
    // 0x46f698: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46f698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46f69c:
    // 0x46f69c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x46f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46f6a0:
    // 0x46f6a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f6a4:
    if (ctx->pc == 0x46F6A4u) {
        ctx->pc = 0x46F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F6A0u;
        // 0x46f6a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F6A8u;
        goto label_46f6a8;
    }
    ctx->pc = 0x46F6A0u;
    {
        const bool branch_taken_0x46f6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F6A0u;
        // 0x46f6a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f6a0) {
            ctx->pc = 0x46F6B4u;
            goto label_46f6b4;
        }
    }
    ctx->pc = 0x46F6A8u;
label_46f6a8:
    // 0x46f6a8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f6ac:
    // 0x46f6ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f6b0:
    // 0x46f6b0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x46f6b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_46f6b4:
    // 0x46f6b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46f6b8:
    // 0x46f6b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x46f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46f6bc:
    // 0x46f6bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f6c0:
    if (ctx->pc == 0x46F6C0u) {
        ctx->pc = 0x46F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F6BCu;
        // 0x46f6c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F6C4u;
        goto label_46f6c4;
    }
    ctx->pc = 0x46F6BCu;
    {
        const bool branch_taken_0x46f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F6BCu;
        // 0x46f6c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f6bc) {
            ctx->pc = 0x46F6D0u;
            goto label_46f6d0;
        }
    }
    ctx->pc = 0x46F6C4u;
label_46f6c4:
    // 0x46f6c4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x46f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_46f6c8:
    // 0x46f6c8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46f6c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46f6cc:
    // 0x46f6cc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x46f6ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_46f6d0:
    // 0x46f6d0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46f6d4:
    // 0x46f6d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46f6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46f6d8:
    // 0x46f6d8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_46f6dc:
    if (ctx->pc == 0x46F6DCu) {
        ctx->pc = 0x46F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F6D8u;
        // 0x46f6dc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F6E0u;
        goto label_46f6e0;
    }
    ctx->pc = 0x46F6D8u;
    {
        const bool branch_taken_0x46f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F6D8u;
        // 0x46f6dc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f6d8) {
            ctx->pc = 0x46F86Cu;
            goto label_46f86c;
        }
    }
    ctx->pc = 0x46F6E0u;
label_46f6e0:
    // 0x46f6e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x46f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46f6e4:
    // 0x46f6e4: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x46f6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46f6e8:
    // 0x46f6e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46f6ec:
    // 0x46f6ec: 0x94490002  lhu         $t1, 0x2($v0)
    ctx->pc = 0x46f6ecu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_46f6f0:
    // 0x46f6f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x46f6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46f6f4:
    // 0x46f6f4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x46f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46f6f8:
    // 0x46f6f8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x46f6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_46f6fc:
    // 0x46f6fc: 0xa5490000  sh          $t1, 0x0($t2)
    ctx->pc = 0x46f6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 9));
label_46f700:
    // 0x46f700: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x46f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46f704:
    // 0x46f704: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x46f704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46f708:
    // 0x46f708: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x46f708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_46f70c:
    // 0x46f70c: 0xa5220002  sh          $v0, 0x2($t1)
    ctx->pc = 0x46f70cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 2));
label_46f710:
    // 0x46f710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f714:
    // 0x46f714: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x46f714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_46f718:
    // 0x46f718: 0xc11baaa  jal         func_46EAA8
label_46f71c:
    if (ctx->pc == 0x46F71Cu) {
        ctx->pc = 0x46F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F718u;
        // 0x46f71c: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F720u;
        goto label_46f720;
    }
    ctx->pc = 0x46F718u;
    SET_GPR_U32(ctx, 31, 0x46F720u);
    ctx->pc = 0x46F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46F718u;
    // 0x46f71c: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46EAA8u, 0x46F718u, 0x46F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F720u;
label_46f720:
    // 0x46f720: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x46f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46f724:
    // 0x46f724: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x46f724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_46f728:
    // 0x46f728: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x46f728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46f72c:
    // 0x46f72c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_46f730:
    if (ctx->pc == 0x46F730u) {
        ctx->pc = 0x46F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F72Cu;
        // 0x46f730: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F734u;
        goto label_46f734;
    }
    ctx->pc = 0x46F72Cu;
    {
        const bool branch_taken_0x46f72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F72Cu;
        // 0x46f730: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f72c) {
            ctx->pc = 0x46F754u;
            goto label_46f754;
        }
    }
    ctx->pc = 0x46F734u;
label_46f734:
    // 0x46f734: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x46f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46f738:
    // 0x46f738: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46f73c:
    // 0x46f73c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46f740:
    // 0x46f740: 0x9464fffc  lhu         $a0, -0x4($v1)
    ctx->pc = 0x46f740u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_46f744:
    // 0x46f744: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x46f744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_46f748:
    // 0x46f748: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x46f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46f74c:
    // 0x46f74c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46f750:
    // 0x46f750: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x46f750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_46f754:
    // 0x46f754: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x46f754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_46f758:
    // 0x46f758: 0x77102b  sltu        $v0, $v1, $s7
    ctx->pc = 0x46f758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_46f75c:
    // 0x46f75c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46f760:
    if (ctx->pc == 0x46F760u) {
        ctx->pc = 0x46F764u;
        goto label_46f764;
    }
    ctx->pc = 0x46F75Cu;
    {
        const bool branch_taken_0x46f75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f75c) {
            ctx->pc = 0x46F76Cu;
            goto label_46f76c;
        }
    }
    ctx->pc = 0x46F764u;
label_46f764:
    // 0x46f764: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x46f764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_46f768:
    // 0x46f768: 0xafb7004c  sw          $s7, 0x4C($sp)
    ctx->pc = 0x46f768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 23));
label_46f76c:
    // 0x46f76c: 0x56a0ff48  bnel        $s5, $zero, . + 4 + (-0xB8 << 2)
label_46f770:
    if (ctx->pc == 0x46F770u) {
        ctx->pc = 0x46F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F76Cu;
        // 0x46f770: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F774u;
        goto label_46f774;
    }
    ctx->pc = 0x46F76Cu;
    {
        const bool branch_taken_0x46f76c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f76c) {
            ctx->pc = 0x46F770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46F76Cu;
            // 0x46f770: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46F490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f490;
        }
    }
    ctx->pc = 0x46F774u;
label_46f774:
    // 0x46f774: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46f778:
    // 0x46f778: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x46f778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_46f77c:
    // 0x46f77c: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x46f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_46f780:
    // 0x46f780: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46f780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46f784:
    // 0x46f784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46f788:
    // 0x46f788: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x46f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_46f78c:
    // 0x46f78c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f790:
    // 0x46f790: 0x40f809  jalr        $v0
label_46f794:
    if (ctx->pc == 0x46F794u) {
        ctx->pc = 0x46F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F790u;
        // 0x46f794: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F798u;
        goto label_46f798;
    }
    ctx->pc = 0x46F790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F798u);
        ctx->pc = 0x46F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F790u;
        // 0x46f794: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F790u, 0x46F798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F798u;
label_46f798:
    // 0x46f798: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x46f798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_46f79c:
    // 0x46f79c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46f79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f7a0:
    // 0x46f7a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46f7a4:
    // 0x46f7a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x46f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f7a8:
    // 0x46f7a8: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46f7a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46f7ac:
    // 0x46f7ac: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x46f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_46f7b0:
    // 0x46f7b0: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x46f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_46f7b4:
    // 0x46f7b4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46f7b8:
    // 0x46f7b8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46f7bc:
    // 0x46f7bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x46f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46f7c0:
    // 0x46f7c0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x46f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_46f7c4:
    // 0x46f7c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x46f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_46f7c8:
    // 0x46f7c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_46f7cc:
    // 0x46f7cc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x46f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_46f7d0:
    // 0x46f7d0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x46f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_46f7d4:
    // 0x46f7d4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x46f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_46f7d8:
    // 0x46f7d8: 0x40f809  jalr        $v0
label_46f7dc:
    if (ctx->pc == 0x46F7DCu) {
        ctx->pc = 0x46F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F7D8u;
        // 0x46f7dc: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F7E0u;
        goto label_46f7e0;
    }
    ctx->pc = 0x46F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F7E0u);
        ctx->pc = 0x46F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F7D8u;
        // 0x46f7dc: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F7D8u, 0x46F7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F7E0u;
label_46f7e0:
    // 0x46f7e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x46f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_46f7e4:
    // 0x46f7e4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x46f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46f7e8:
    // 0x46f7e8: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x46f7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_46f7ec:
    // 0x46f7ec: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_46f7f0:
    if (ctx->pc == 0x46F7F0u) {
        ctx->pc = 0x46F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F7ECu;
        // 0x46f7f0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F7F4u;
        goto label_46f7f4;
    }
    ctx->pc = 0x46F7ECu;
    {
        const bool branch_taken_0x46f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f7ec) {
            ctx->pc = 0x46F7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46F7ECu;
            // 0x46f7f0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46F844u;
            goto label_46f844;
        }
    }
    ctx->pc = 0x46F7F4u;
label_46f7f4:
    // 0x46f7f4: 0x0  nop
    ctx->pc = 0x46f7f4u;
    // NOP
label_46f7f8:
    // 0x46f7f8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x46f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46f7fc:
    // 0x46f7fc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x46f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_46f800:
    // 0x46f800: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x46f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46f804:
    // 0x46f804: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x46f804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46f808:
    // 0x46f808: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x46f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_46f80c:
    // 0x46f80c: 0x9444fffe  lhu         $a0, -0x2($v0)
    ctx->pc = 0x46f80cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_46f810:
    // 0x46f810: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46f810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46f814:
    // 0x46f814: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46f814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46f818:
    // 0x46f818: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x46f818u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_46f81c:
    // 0x46f81c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x46f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46f820:
    // 0x46f820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46f824:
    // 0x46f824: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x46f824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_46f828:
    // 0x46f828: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x46f828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_46f82c:
    // 0x46f82c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46f830:
    // 0x46f830: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x46f830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46f834:
    // 0x46f834: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x46f834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_46f838:
    // 0x46f838: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
label_46f83c:
    if (ctx->pc == 0x46F83Cu) {
        ctx->pc = 0x46F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F838u;
        // 0x46f83c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F840u;
        goto label_46f840;
    }
    ctx->pc = 0x46F838u;
    {
        const bool branch_taken_0x46f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F838u;
        // 0x46f83c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f838) {
            ctx->pc = 0x46F7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f7f8;
        }
    }
    ctx->pc = 0x46F840u;
label_46f840:
    // 0x46f840: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x46f840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46f844:
    // 0x46f844: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46f848:
    // 0x46f848: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x46f848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_46f84c:
    // 0x46f84c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46f850:
    // 0x46f850: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x46f850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46f854:
    // 0x46f854: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_46f858:
    // 0x46f858: 0xc10c190  jal         func_430640
label_46f85c:
    if (ctx->pc == 0x46F85Cu) {
        ctx->pc = 0x46F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F858u;
        // 0x46f85c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F860u;
        goto label_46f860;
    }
    ctx->pc = 0x46F858u;
    SET_GPR_U32(ctx, 31, 0x46F860u);
    ctx->pc = 0x46F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46F858u;
    // 0x46f85c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x46F858u, 0x46F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F860u;
label_46f860:
    // 0x46f860: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x46f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46f864:
    // 0x46f864: 0x10000029  b           . + 4 + (0x29 << 2)
label_46f868:
    if (ctx->pc == 0x46F868u) {
        ctx->pc = 0x46F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F864u;
        // 0x46f868: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F86Cu;
        goto label_46f86c;
    }
    ctx->pc = 0x46F864u;
    {
        const bool branch_taken_0x46f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F864u;
        // 0x46f868: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f864) {
            ctx->pc = 0x46F90Cu;
            goto label_46f90c;
        }
    }
    ctx->pc = 0x46F86Cu;
label_46f86c:
    // 0x46f86c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x46f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_46f870:
    // 0x46f870: 0x97102b  sltu        $v0, $a0, $s7
    ctx->pc = 0x46f870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_46f874:
    // 0x46f874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46f878:
    if (ctx->pc == 0x46F878u) {
        ctx->pc = 0x46F87Cu;
        goto label_46f87c;
    }
    ctx->pc = 0x46F874u;
    {
        const bool branch_taken_0x46f874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f874) {
            ctx->pc = 0x46F884u;
            goto label_46f884;
        }
    }
    ctx->pc = 0x46F87Cu;
label_46f87c:
    // 0x46f87c: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x46f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_46f880:
    // 0x46f880: 0xafb7004c  sw          $s7, 0x4C($sp)
    ctx->pc = 0x46f880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 23));
label_46f884:
    // 0x46f884: 0x56a0ff02  bnel        $s5, $zero, . + 4 + (-0xFE << 2)
label_46f888:
    if (ctx->pc == 0x46F888u) {
        ctx->pc = 0x46F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F884u;
        // 0x46f888: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F88Cu;
        goto label_46f88c;
    }
    ctx->pc = 0x46F884u;
    {
        const bool branch_taken_0x46f884 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f884) {
            ctx->pc = 0x46F888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46F884u;
            // 0x46f888: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46F490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f490;
        }
    }
    ctx->pc = 0x46F88Cu;
label_46f88c:
    // 0x46f88c: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46f890:
    // 0x46f890: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x46f890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_46f894:
    // 0x46f894: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x46f894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_46f898:
    // 0x46f898: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46f898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46f89c:
    // 0x46f89c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46f8a0:
    // 0x46f8a0: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x46f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_46f8a4:
    // 0x46f8a4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f8a8:
    // 0x46f8a8: 0x40f809  jalr        $v0
label_46f8ac:
    if (ctx->pc == 0x46F8ACu) {
        ctx->pc = 0x46F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F8A8u;
        // 0x46f8ac: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F8B0u;
        goto label_46f8b0;
    }
    ctx->pc = 0x46F8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F8B0u);
        ctx->pc = 0x46F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F8A8u;
        // 0x46f8ac: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F8A8u, 0x46F8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F8B0u;
label_46f8b0:
    // 0x46f8b0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x46f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_46f8b4:
    // 0x46f8b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46f8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f8b8:
    // 0x46f8b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46f8bc:
    // 0x46f8bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x46f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f8c0:
    // 0x46f8c0: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46f8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46f8c4:
    // 0x46f8c4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x46f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_46f8c8:
    // 0x46f8c8: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x46f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_46f8cc:
    // 0x46f8cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x46f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_46f8d0:
    // 0x46f8d0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x46f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_46f8d4:
    // 0x46f8d4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x46f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_46f8d8:
    // 0x46f8d8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x46f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_46f8dc:
    // 0x46f8dc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46f8e0:
    // 0x46f8e0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x46f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_46f8e4:
    // 0x46f8e4: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46f8e8:
    // 0x46f8e8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x46f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_46f8ec:
    // 0x46f8ec: 0x40f809  jalr        $v0
label_46f8f0:
    if (ctx->pc == 0x46F8F0u) {
        ctx->pc = 0x46F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F8ECu;
        // 0x46f8f0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F8F4u;
        goto label_46f8f4;
    }
    ctx->pc = 0x46F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F8F4u);
        ctx->pc = 0x46F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F8ECu;
        // 0x46f8f0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F8ECu, 0x46F8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F8F4u;
label_46f8f4:
    // 0x46f8f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x46f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_46f8f8:
    // 0x46f8f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f8fc:
    // 0x46f8fc: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x46f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_46f900:
    // 0x46f900: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x46f900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46f904:
    // 0x46f904: 0xc10c190  jal         func_430640
label_46f908:
    if (ctx->pc == 0x46F908u) {
        ctx->pc = 0x46F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F904u;
        // 0x46f908: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F90Cu;
        goto label_46f90c;
    }
    ctx->pc = 0x46F904u;
    SET_GPR_U32(ctx, 31, 0x46F90Cu);
    ctx->pc = 0x46F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46F904u;
    // 0x46f908: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x46F904u, 0x46F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F90Cu;
label_46f90c:
    // 0x46f90c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x46f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46f910:
    // 0x46f910: 0x2e4102b  sltu        $v0, $s7, $a0
    ctx->pc = 0x46f910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46f914:
    // 0x46f914: 0x1440fdcc  bnez        $v0, . + 4 + (-0x234 << 2)
label_46f918:
    if (ctx->pc == 0x46F918u) {
        ctx->pc = 0x46F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F914u;
        // 0x46f918: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F91Cu;
        goto label_46f91c;
    }
    ctx->pc = 0x46F914u;
    {
        const bool branch_taken_0x46f914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F914u;
        // 0x46f918: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f914) {
            ctx->pc = 0x46F048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f048;
        }
    }
    ctx->pc = 0x46F91Cu;
label_46f91c:
    // 0x46f91c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46f920:
    // 0x46f920: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x46f920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46f924:
    // 0x46f924: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x46f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_46f928:
    // 0x46f928: 0x40f809  jalr        $v0
label_46f92c:
    if (ctx->pc == 0x46F92Cu) {
        ctx->pc = 0x46F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F928u;
        // 0x46f92c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F930u;
        goto label_46f930;
    }
    ctx->pc = 0x46F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F930u);
        ctx->pc = 0x46F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F928u;
        // 0x46f92c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F928u, 0x46F930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F930u;
label_46f930:
    // 0x46f930: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x46f930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_46f934:
    // 0x46f934: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46f934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46f938:
    // 0x46f938: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46f93c:
    // 0x46f93c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x46f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_46f940:
    // 0x46f940: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46f940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46f944:
    // 0x46f944: 0x40f809  jalr        $v0
label_46f948:
    if (ctx->pc == 0x46F948u) {
        ctx->pc = 0x46F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F944u;
        // 0x46f948: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F94Cu;
        goto label_46f94c;
    }
    ctx->pc = 0x46F944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F94Cu);
        ctx->pc = 0x46F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F944u;
        // 0x46f948: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F944u, 0x46F94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F94Cu;
label_46f94c:
    // 0x46f94c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x46f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_46f950:
    // 0x46f950: 0x40f809  jalr        $v0
label_46f954:
    if (ctx->pc == 0x46F954u) {
        ctx->pc = 0x46F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F950u;
        // 0x46f954: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F958u;
        goto label_46f958;
    }
    ctx->pc = 0x46F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F958u);
        ctx->pc = 0x46F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F950u;
        // 0x46f954: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F950u, 0x46F958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F958u;
label_46f958:
    // 0x46f958: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x46f958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_46f95c:
    // 0x46f95c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46f95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46f960:
    // 0x46f960: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46f960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46f964:
    // 0x46f964: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x46f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_46f968:
    // 0x46f968: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46f968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46f96c:
    // 0x46f96c: 0x40f809  jalr        $v0
label_46f970:
    if (ctx->pc == 0x46F970u) {
        ctx->pc = 0x46F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F96Cu;
        // 0x46f970: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F974u;
        goto label_46f974;
    }
    ctx->pc = 0x46F96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F974u);
        ctx->pc = 0x46F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F96Cu;
        // 0x46f970: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F96Cu, 0x46F974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F974u;
label_46f974:
    // 0x46f974: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x46f974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_46f978:
    // 0x46f978: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_46f97c:
    if (ctx->pc == 0x46F97Cu) {
        ctx->pc = 0x46F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F978u;
        // 0x46f97c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F980u;
        goto label_46f980;
    }
    ctx->pc = 0x46F978u;
    {
        const bool branch_taken_0x46f978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F978u;
        // 0x46f97c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f978) {
            ctx->pc = 0x46F9A4u;
            goto label_46f9a4;
        }
    }
    ctx->pc = 0x46F980u;
label_46f980:
    // 0x46f980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46f980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46f984:
    // 0x46f984: 0x0  nop
    ctx->pc = 0x46f984u;
    // NOP
label_46f988:
    // 0x46f988: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x46f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_46f98c:
    // 0x46f98c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x46f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_46f990:
    // 0x46f990: 0x40f809  jalr        $v0
label_46f994:
    if (ctx->pc == 0x46F994u) {
        ctx->pc = 0x46F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F990u;
        // 0x46f994: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F998u;
        goto label_46f998;
    }
    ctx->pc = 0x46F990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F998u);
        ctx->pc = 0x46F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F990u;
        // 0x46f994: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F990u, 0x46F998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F998u;
label_46f998:
    // 0x46f998: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_46f99c:
    if (ctx->pc == 0x46F99Cu) {
        ctx->pc = 0x46F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F998u;
        // 0x46f99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F9A0u;
        goto label_46f9a0;
    }
    ctx->pc = 0x46F998u;
    {
        const bool branch_taken_0x46f998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F998u;
        // 0x46f99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f998) {
            ctx->pc = 0x46F988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f988;
        }
    }
    ctx->pc = 0x46F9A0u;
label_46f9a0:
    // 0x46f9a0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x46f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_46f9a4:
    // 0x46f9a4: 0xc11f74a  jal         func_47DD28
label_46f9a8:
    if (ctx->pc == 0x46F9A8u) {
        ctx->pc = 0x46F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9A4u;
        // 0x46f9a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F9ACu;
        goto label_46f9ac;
    }
    ctx->pc = 0x46F9A4u;
    SET_GPR_U32(ctx, 31, 0x46F9ACu);
    ctx->pc = 0x46F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46F9A4u;
    // 0x46f9a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x46F9A4u, 0x46F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F9ACu;
label_46f9ac:
    // 0x46f9ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x46f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46f9b0:
    // 0x46f9b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_46f9b4:
    if (ctx->pc == 0x46F9B4u) {
        ctx->pc = 0x46F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9B0u;
        // 0x46f9b4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F9B8u;
        goto label_46f9b8;
    }
    ctx->pc = 0x46F9B0u;
    {
        const bool branch_taken_0x46f9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9B0u;
        // 0x46f9b4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f9b0) {
            ctx->pc = 0x46F9F0u;
            goto label_46f9f0;
        }
    }
    ctx->pc = 0x46F9B8u;
label_46f9b8:
    // 0x46f9b8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46f9bc:
    // 0x46f9bc: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x46f9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_46f9c0:
    // 0x46f9c0: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x46f9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46f9c4:
    // 0x46f9c4: 0x0  nop
    ctx->pc = 0x46f9c4u;
    // NOP
label_46f9c8:
    // 0x46f9c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x46f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46f9cc:
    // 0x46f9cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46f9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46f9d0:
    // 0x46f9d0: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x46f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_46f9d4:
    // 0x46f9d4: 0x40f809  jalr        $v0
label_46f9d8:
    if (ctx->pc == 0x46F9D8u) {
        ctx->pc = 0x46F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9D4u;
        // 0x46f9d8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F9DCu;
        goto label_46f9dc;
    }
    ctx->pc = 0x46F9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F9DCu);
        ctx->pc = 0x46F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9D4u;
        // 0x46f9d8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F9D4u, 0x46F9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F9DCu;
label_46f9dc:
    // 0x46f9dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46f9e0:
    // 0x46f9e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x46f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_46f9e4:
    // 0x46f9e4: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x46f9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46f9e8:
    // 0x46f9e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_46f9ec:
    if (ctx->pc == 0x46F9ECu) {
        ctx->pc = 0x46F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9E8u;
        // 0x46f9ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F9F0u;
        goto label_46f9f0;
    }
    ctx->pc = 0x46F9E8u;
    {
        const bool branch_taken_0x46f9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9E8u;
        // 0x46f9ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f9e8) {
            ctx->pc = 0x46F9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46f9c8;
        }
    }
    ctx->pc = 0x46F9F0u;
label_46f9f0:
    // 0x46f9f0: 0xc11f74a  jal         func_47DD28
label_46f9f4:
    if (ctx->pc == 0x46F9F4u) {
        ctx->pc = 0x46F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46F9F0u;
        // 0x46f9f4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46F9F8u;
        goto label_46f9f8;
    }
    ctx->pc = 0x46F9F0u;
    SET_GPR_U32(ctx, 31, 0x46F9F8u);
    ctx->pc = 0x46F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46F9F0u;
    // 0x46f9f4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x46F9F0u, 0x46F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F9F8u;
label_46f9f8:
    // 0x46f9f8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46f9fc:
    // 0x46f9fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x46f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_46fa00:
    // 0x46fa00: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x46fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46fa04:
    // 0x46fa04: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x46fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_46fa08:
    // 0x46fa08: 0x40f809  jalr        $v0
label_46fa0c:
    if (ctx->pc == 0x46FA0Cu) {
        ctx->pc = 0x46FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA08u;
        // 0x46fa0c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FA10u;
        goto label_46fa10;
    }
    ctx->pc = 0x46FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FA10u);
        ctx->pc = 0x46FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA08u;
        // 0x46fa0c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FA08u, 0x46FA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FA10u;
label_46fa10:
    // 0x46fa10: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x46fa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_46fa14:
    // 0x46fa14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46fa18:
    // 0x46fa18: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x46fa18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_46fa1c:
    // 0x46fa1c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x46fa1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_46fa20:
    // 0x46fa20: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x46fa20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_46fa24:
    // 0x46fa24: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x46fa24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_46fa28:
    // 0x46fa28: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x46fa28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46fa2c:
    // 0x46fa2c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x46fa2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46fa30:
    // 0x46fa30: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x46fa30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46fa34:
    // 0x46fa34: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x46fa34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46fa38:
    // 0x46fa38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x46fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_46fa3c:
    // 0x46fa3c: 0x3e00008  jr          $ra
label_46fa40:
    if (ctx->pc == 0x46FA40u) {
        ctx->pc = 0x46FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA3Cu;
        // 0x46fa40: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FA44u;
        goto label_46fa44;
    }
    ctx->pc = 0x46FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA3Cu;
        // 0x46fa40: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46FA44u;
label_46fa44:
    // 0x46fa44: 0x0  nop
    ctx->pc = 0x46fa44u;
    // NOP
label_46fa48:
    // 0x46fa48: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x46fa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_46fa4c:
    // 0x46fa4c: 0x0  nop
    ctx->pc = 0x46fa4cu;
    // NOP
    ctx->pc = 0x46fa50u;
}
