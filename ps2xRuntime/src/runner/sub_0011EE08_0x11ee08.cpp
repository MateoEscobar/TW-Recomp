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

// Function: sub_0011EE08
// Address: 0x11ee08 - 0x11f9b0
void sub_0011EE08_0x11ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EE08_0x11ee08");
#endif

    switch (ctx->pc) {
        case 0x11ee08u: goto label_11ee08;
        case 0x11ee0cu: goto label_11ee0c;
        case 0x11ee10u: goto label_11ee10;
        case 0x11ee14u: goto label_11ee14;
        case 0x11ee18u: goto label_11ee18;
        case 0x11ee1cu: goto label_11ee1c;
        case 0x11ee20u: goto label_11ee20;
        case 0x11ee24u: goto label_11ee24;
        case 0x11ee28u: goto label_11ee28;
        case 0x11ee2cu: goto label_11ee2c;
        case 0x11ee30u: goto label_11ee30;
        case 0x11ee34u: goto label_11ee34;
        case 0x11ee38u: goto label_11ee38;
        case 0x11ee3cu: goto label_11ee3c;
        case 0x11ee40u: goto label_11ee40;
        case 0x11ee44u: goto label_11ee44;
        case 0x11ee48u: goto label_11ee48;
        case 0x11ee4cu: goto label_11ee4c;
        case 0x11ee50u: goto label_11ee50;
        case 0x11ee54u: goto label_11ee54;
        case 0x11ee58u: goto label_11ee58;
        case 0x11ee5cu: goto label_11ee5c;
        case 0x11ee60u: goto label_11ee60;
        case 0x11ee64u: goto label_11ee64;
        case 0x11ee68u: goto label_11ee68;
        case 0x11ee6cu: goto label_11ee6c;
        case 0x11ee70u: goto label_11ee70;
        case 0x11ee74u: goto label_11ee74;
        case 0x11ee78u: goto label_11ee78;
        case 0x11ee7cu: goto label_11ee7c;
        case 0x11ee80u: goto label_11ee80;
        case 0x11ee84u: goto label_11ee84;
        case 0x11ee88u: goto label_11ee88;
        case 0x11ee8cu: goto label_11ee8c;
        case 0x11ee90u: goto label_11ee90;
        case 0x11ee94u: goto label_11ee94;
        case 0x11ee98u: goto label_11ee98;
        case 0x11ee9cu: goto label_11ee9c;
        case 0x11eea0u: goto label_11eea0;
        case 0x11eea4u: goto label_11eea4;
        case 0x11eea8u: goto label_11eea8;
        case 0x11eeacu: goto label_11eeac;
        case 0x11eeb0u: goto label_11eeb0;
        case 0x11eeb4u: goto label_11eeb4;
        case 0x11eeb8u: goto label_11eeb8;
        case 0x11eebcu: goto label_11eebc;
        case 0x11eec0u: goto label_11eec0;
        case 0x11eec4u: goto label_11eec4;
        case 0x11eec8u: goto label_11eec8;
        case 0x11eeccu: goto label_11eecc;
        case 0x11eed0u: goto label_11eed0;
        case 0x11eed4u: goto label_11eed4;
        case 0x11eed8u: goto label_11eed8;
        case 0x11eedcu: goto label_11eedc;
        case 0x11eee0u: goto label_11eee0;
        case 0x11eee4u: goto label_11eee4;
        case 0x11eee8u: goto label_11eee8;
        case 0x11eeecu: goto label_11eeec;
        case 0x11eef0u: goto label_11eef0;
        case 0x11eef4u: goto label_11eef4;
        case 0x11eef8u: goto label_11eef8;
        case 0x11eefcu: goto label_11eefc;
        case 0x11ef00u: goto label_11ef00;
        case 0x11ef04u: goto label_11ef04;
        case 0x11ef08u: goto label_11ef08;
        case 0x11ef0cu: goto label_11ef0c;
        case 0x11ef10u: goto label_11ef10;
        case 0x11ef14u: goto label_11ef14;
        case 0x11ef18u: goto label_11ef18;
        case 0x11ef1cu: goto label_11ef1c;
        case 0x11ef20u: goto label_11ef20;
        case 0x11ef24u: goto label_11ef24;
        case 0x11ef28u: goto label_11ef28;
        case 0x11ef2cu: goto label_11ef2c;
        case 0x11ef30u: goto label_11ef30;
        case 0x11ef34u: goto label_11ef34;
        case 0x11ef38u: goto label_11ef38;
        case 0x11ef3cu: goto label_11ef3c;
        case 0x11ef40u: goto label_11ef40;
        case 0x11ef44u: goto label_11ef44;
        case 0x11ef48u: goto label_11ef48;
        case 0x11ef4cu: goto label_11ef4c;
        case 0x11ef50u: goto label_11ef50;
        case 0x11ef54u: goto label_11ef54;
        case 0x11ef58u: goto label_11ef58;
        case 0x11ef5cu: goto label_11ef5c;
        case 0x11ef60u: goto label_11ef60;
        case 0x11ef64u: goto label_11ef64;
        case 0x11ef68u: goto label_11ef68;
        case 0x11ef6cu: goto label_11ef6c;
        case 0x11ef70u: goto label_11ef70;
        case 0x11ef74u: goto label_11ef74;
        case 0x11ef78u: goto label_11ef78;
        case 0x11ef7cu: goto label_11ef7c;
        case 0x11ef80u: goto label_11ef80;
        case 0x11ef84u: goto label_11ef84;
        case 0x11ef88u: goto label_11ef88;
        case 0x11ef8cu: goto label_11ef8c;
        case 0x11ef90u: goto label_11ef90;
        case 0x11ef94u: goto label_11ef94;
        case 0x11ef98u: goto label_11ef98;
        case 0x11ef9cu: goto label_11ef9c;
        case 0x11efa0u: goto label_11efa0;
        case 0x11efa4u: goto label_11efa4;
        case 0x11efa8u: goto label_11efa8;
        case 0x11efacu: goto label_11efac;
        case 0x11efb0u: goto label_11efb0;
        case 0x11efb4u: goto label_11efb4;
        case 0x11efb8u: goto label_11efb8;
        case 0x11efbcu: goto label_11efbc;
        case 0x11efc0u: goto label_11efc0;
        case 0x11efc4u: goto label_11efc4;
        case 0x11efc8u: goto label_11efc8;
        case 0x11efccu: goto label_11efcc;
        case 0x11efd0u: goto label_11efd0;
        case 0x11efd4u: goto label_11efd4;
        case 0x11efd8u: goto label_11efd8;
        case 0x11efdcu: goto label_11efdc;
        case 0x11efe0u: goto label_11efe0;
        case 0x11efe4u: goto label_11efe4;
        case 0x11efe8u: goto label_11efe8;
        case 0x11efecu: goto label_11efec;
        case 0x11eff0u: goto label_11eff0;
        case 0x11eff4u: goto label_11eff4;
        case 0x11eff8u: goto label_11eff8;
        case 0x11effcu: goto label_11effc;
        case 0x11f000u: goto label_11f000;
        case 0x11f004u: goto label_11f004;
        case 0x11f008u: goto label_11f008;
        case 0x11f00cu: goto label_11f00c;
        case 0x11f010u: goto label_11f010;
        case 0x11f014u: goto label_11f014;
        case 0x11f018u: goto label_11f018;
        case 0x11f01cu: goto label_11f01c;
        case 0x11f020u: goto label_11f020;
        case 0x11f024u: goto label_11f024;
        case 0x11f028u: goto label_11f028;
        case 0x11f02cu: goto label_11f02c;
        case 0x11f030u: goto label_11f030;
        case 0x11f034u: goto label_11f034;
        case 0x11f038u: goto label_11f038;
        case 0x11f03cu: goto label_11f03c;
        case 0x11f040u: goto label_11f040;
        case 0x11f044u: goto label_11f044;
        case 0x11f048u: goto label_11f048;
        case 0x11f04cu: goto label_11f04c;
        case 0x11f050u: goto label_11f050;
        case 0x11f054u: goto label_11f054;
        case 0x11f058u: goto label_11f058;
        case 0x11f05cu: goto label_11f05c;
        case 0x11f060u: goto label_11f060;
        case 0x11f064u: goto label_11f064;
        case 0x11f068u: goto label_11f068;
        case 0x11f06cu: goto label_11f06c;
        case 0x11f070u: goto label_11f070;
        case 0x11f074u: goto label_11f074;
        case 0x11f078u: goto label_11f078;
        case 0x11f07cu: goto label_11f07c;
        case 0x11f080u: goto label_11f080;
        case 0x11f084u: goto label_11f084;
        case 0x11f088u: goto label_11f088;
        case 0x11f08cu: goto label_11f08c;
        case 0x11f090u: goto label_11f090;
        case 0x11f094u: goto label_11f094;
        case 0x11f098u: goto label_11f098;
        case 0x11f09cu: goto label_11f09c;
        case 0x11f0a0u: goto label_11f0a0;
        case 0x11f0a4u: goto label_11f0a4;
        case 0x11f0a8u: goto label_11f0a8;
        case 0x11f0acu: goto label_11f0ac;
        case 0x11f0b0u: goto label_11f0b0;
        case 0x11f0b4u: goto label_11f0b4;
        case 0x11f0b8u: goto label_11f0b8;
        case 0x11f0bcu: goto label_11f0bc;
        case 0x11f0c0u: goto label_11f0c0;
        case 0x11f0c4u: goto label_11f0c4;
        case 0x11f0c8u: goto label_11f0c8;
        case 0x11f0ccu: goto label_11f0cc;
        case 0x11f0d0u: goto label_11f0d0;
        case 0x11f0d4u: goto label_11f0d4;
        case 0x11f0d8u: goto label_11f0d8;
        case 0x11f0dcu: goto label_11f0dc;
        case 0x11f0e0u: goto label_11f0e0;
        case 0x11f0e4u: goto label_11f0e4;
        case 0x11f0e8u: goto label_11f0e8;
        case 0x11f0ecu: goto label_11f0ec;
        case 0x11f0f0u: goto label_11f0f0;
        case 0x11f0f4u: goto label_11f0f4;
        case 0x11f0f8u: goto label_11f0f8;
        case 0x11f0fcu: goto label_11f0fc;
        case 0x11f100u: goto label_11f100;
        case 0x11f104u: goto label_11f104;
        case 0x11f108u: goto label_11f108;
        case 0x11f10cu: goto label_11f10c;
        case 0x11f110u: goto label_11f110;
        case 0x11f114u: goto label_11f114;
        case 0x11f118u: goto label_11f118;
        case 0x11f11cu: goto label_11f11c;
        case 0x11f120u: goto label_11f120;
        case 0x11f124u: goto label_11f124;
        case 0x11f128u: goto label_11f128;
        case 0x11f12cu: goto label_11f12c;
        case 0x11f130u: goto label_11f130;
        case 0x11f134u: goto label_11f134;
        case 0x11f138u: goto label_11f138;
        case 0x11f13cu: goto label_11f13c;
        case 0x11f140u: goto label_11f140;
        case 0x11f144u: goto label_11f144;
        case 0x11f148u: goto label_11f148;
        case 0x11f14cu: goto label_11f14c;
        case 0x11f150u: goto label_11f150;
        case 0x11f154u: goto label_11f154;
        case 0x11f158u: goto label_11f158;
        case 0x11f15cu: goto label_11f15c;
        case 0x11f160u: goto label_11f160;
        case 0x11f164u: goto label_11f164;
        case 0x11f168u: goto label_11f168;
        case 0x11f16cu: goto label_11f16c;
        case 0x11f170u: goto label_11f170;
        case 0x11f174u: goto label_11f174;
        case 0x11f178u: goto label_11f178;
        case 0x11f17cu: goto label_11f17c;
        case 0x11f180u: goto label_11f180;
        case 0x11f184u: goto label_11f184;
        case 0x11f188u: goto label_11f188;
        case 0x11f18cu: goto label_11f18c;
        case 0x11f190u: goto label_11f190;
        case 0x11f194u: goto label_11f194;
        case 0x11f198u: goto label_11f198;
        case 0x11f19cu: goto label_11f19c;
        case 0x11f1a0u: goto label_11f1a0;
        case 0x11f1a4u: goto label_11f1a4;
        case 0x11f1a8u: goto label_11f1a8;
        case 0x11f1acu: goto label_11f1ac;
        case 0x11f1b0u: goto label_11f1b0;
        case 0x11f1b4u: goto label_11f1b4;
        case 0x11f1b8u: goto label_11f1b8;
        case 0x11f1bcu: goto label_11f1bc;
        case 0x11f1c0u: goto label_11f1c0;
        case 0x11f1c4u: goto label_11f1c4;
        case 0x11f1c8u: goto label_11f1c8;
        case 0x11f1ccu: goto label_11f1cc;
        case 0x11f1d0u: goto label_11f1d0;
        case 0x11f1d4u: goto label_11f1d4;
        case 0x11f1d8u: goto label_11f1d8;
        case 0x11f1dcu: goto label_11f1dc;
        case 0x11f1e0u: goto label_11f1e0;
        case 0x11f1e4u: goto label_11f1e4;
        case 0x11f1e8u: goto label_11f1e8;
        case 0x11f1ecu: goto label_11f1ec;
        case 0x11f1f0u: goto label_11f1f0;
        case 0x11f1f4u: goto label_11f1f4;
        case 0x11f1f8u: goto label_11f1f8;
        case 0x11f1fcu: goto label_11f1fc;
        case 0x11f200u: goto label_11f200;
        case 0x11f204u: goto label_11f204;
        case 0x11f208u: goto label_11f208;
        case 0x11f20cu: goto label_11f20c;
        case 0x11f210u: goto label_11f210;
        case 0x11f214u: goto label_11f214;
        case 0x11f218u: goto label_11f218;
        case 0x11f21cu: goto label_11f21c;
        case 0x11f220u: goto label_11f220;
        case 0x11f224u: goto label_11f224;
        case 0x11f228u: goto label_11f228;
        case 0x11f22cu: goto label_11f22c;
        case 0x11f230u: goto label_11f230;
        case 0x11f234u: goto label_11f234;
        case 0x11f238u: goto label_11f238;
        case 0x11f23cu: goto label_11f23c;
        case 0x11f240u: goto label_11f240;
        case 0x11f244u: goto label_11f244;
        case 0x11f248u: goto label_11f248;
        case 0x11f24cu: goto label_11f24c;
        case 0x11f250u: goto label_11f250;
        case 0x11f254u: goto label_11f254;
        case 0x11f258u: goto label_11f258;
        case 0x11f25cu: goto label_11f25c;
        case 0x11f260u: goto label_11f260;
        case 0x11f264u: goto label_11f264;
        case 0x11f268u: goto label_11f268;
        case 0x11f26cu: goto label_11f26c;
        case 0x11f270u: goto label_11f270;
        case 0x11f274u: goto label_11f274;
        case 0x11f278u: goto label_11f278;
        case 0x11f27cu: goto label_11f27c;
        case 0x11f280u: goto label_11f280;
        case 0x11f284u: goto label_11f284;
        case 0x11f288u: goto label_11f288;
        case 0x11f28cu: goto label_11f28c;
        case 0x11f290u: goto label_11f290;
        case 0x11f294u: goto label_11f294;
        case 0x11f298u: goto label_11f298;
        case 0x11f29cu: goto label_11f29c;
        case 0x11f2a0u: goto label_11f2a0;
        case 0x11f2a4u: goto label_11f2a4;
        case 0x11f2a8u: goto label_11f2a8;
        case 0x11f2acu: goto label_11f2ac;
        case 0x11f2b0u: goto label_11f2b0;
        case 0x11f2b4u: goto label_11f2b4;
        case 0x11f2b8u: goto label_11f2b8;
        case 0x11f2bcu: goto label_11f2bc;
        case 0x11f2c0u: goto label_11f2c0;
        case 0x11f2c4u: goto label_11f2c4;
        case 0x11f2c8u: goto label_11f2c8;
        case 0x11f2ccu: goto label_11f2cc;
        case 0x11f2d0u: goto label_11f2d0;
        case 0x11f2d4u: goto label_11f2d4;
        case 0x11f2d8u: goto label_11f2d8;
        case 0x11f2dcu: goto label_11f2dc;
        case 0x11f2e0u: goto label_11f2e0;
        case 0x11f2e4u: goto label_11f2e4;
        case 0x11f2e8u: goto label_11f2e8;
        case 0x11f2ecu: goto label_11f2ec;
        case 0x11f2f0u: goto label_11f2f0;
        case 0x11f2f4u: goto label_11f2f4;
        case 0x11f2f8u: goto label_11f2f8;
        case 0x11f2fcu: goto label_11f2fc;
        case 0x11f300u: goto label_11f300;
        case 0x11f304u: goto label_11f304;
        case 0x11f308u: goto label_11f308;
        case 0x11f30cu: goto label_11f30c;
        case 0x11f310u: goto label_11f310;
        case 0x11f314u: goto label_11f314;
        case 0x11f318u: goto label_11f318;
        case 0x11f31cu: goto label_11f31c;
        case 0x11f320u: goto label_11f320;
        case 0x11f324u: goto label_11f324;
        case 0x11f328u: goto label_11f328;
        case 0x11f32cu: goto label_11f32c;
        case 0x11f330u: goto label_11f330;
        case 0x11f334u: goto label_11f334;
        case 0x11f338u: goto label_11f338;
        case 0x11f33cu: goto label_11f33c;
        case 0x11f340u: goto label_11f340;
        case 0x11f344u: goto label_11f344;
        case 0x11f348u: goto label_11f348;
        case 0x11f34cu: goto label_11f34c;
        case 0x11f350u: goto label_11f350;
        case 0x11f354u: goto label_11f354;
        case 0x11f358u: goto label_11f358;
        case 0x11f35cu: goto label_11f35c;
        case 0x11f360u: goto label_11f360;
        case 0x11f364u: goto label_11f364;
        case 0x11f368u: goto label_11f368;
        case 0x11f36cu: goto label_11f36c;
        case 0x11f370u: goto label_11f370;
        case 0x11f374u: goto label_11f374;
        case 0x11f378u: goto label_11f378;
        case 0x11f37cu: goto label_11f37c;
        case 0x11f380u: goto label_11f380;
        case 0x11f384u: goto label_11f384;
        case 0x11f388u: goto label_11f388;
        case 0x11f38cu: goto label_11f38c;
        case 0x11f390u: goto label_11f390;
        case 0x11f394u: goto label_11f394;
        case 0x11f398u: goto label_11f398;
        case 0x11f39cu: goto label_11f39c;
        case 0x11f3a0u: goto label_11f3a0;
        case 0x11f3a4u: goto label_11f3a4;
        case 0x11f3a8u: goto label_11f3a8;
        case 0x11f3acu: goto label_11f3ac;
        case 0x11f3b0u: goto label_11f3b0;
        case 0x11f3b4u: goto label_11f3b4;
        case 0x11f3b8u: goto label_11f3b8;
        case 0x11f3bcu: goto label_11f3bc;
        case 0x11f3c0u: goto label_11f3c0;
        case 0x11f3c4u: goto label_11f3c4;
        case 0x11f3c8u: goto label_11f3c8;
        case 0x11f3ccu: goto label_11f3cc;
        case 0x11f3d0u: goto label_11f3d0;
        case 0x11f3d4u: goto label_11f3d4;
        case 0x11f3d8u: goto label_11f3d8;
        case 0x11f3dcu: goto label_11f3dc;
        case 0x11f3e0u: goto label_11f3e0;
        case 0x11f3e4u: goto label_11f3e4;
        case 0x11f3e8u: goto label_11f3e8;
        case 0x11f3ecu: goto label_11f3ec;
        case 0x11f3f0u: goto label_11f3f0;
        case 0x11f3f4u: goto label_11f3f4;
        case 0x11f3f8u: goto label_11f3f8;
        case 0x11f3fcu: goto label_11f3fc;
        case 0x11f400u: goto label_11f400;
        case 0x11f404u: goto label_11f404;
        case 0x11f408u: goto label_11f408;
        case 0x11f40cu: goto label_11f40c;
        case 0x11f410u: goto label_11f410;
        case 0x11f414u: goto label_11f414;
        case 0x11f418u: goto label_11f418;
        case 0x11f41cu: goto label_11f41c;
        case 0x11f420u: goto label_11f420;
        case 0x11f424u: goto label_11f424;
        case 0x11f428u: goto label_11f428;
        case 0x11f42cu: goto label_11f42c;
        case 0x11f430u: goto label_11f430;
        case 0x11f434u: goto label_11f434;
        case 0x11f438u: goto label_11f438;
        case 0x11f43cu: goto label_11f43c;
        case 0x11f440u: goto label_11f440;
        case 0x11f444u: goto label_11f444;
        case 0x11f448u: goto label_11f448;
        case 0x11f44cu: goto label_11f44c;
        case 0x11f450u: goto label_11f450;
        case 0x11f454u: goto label_11f454;
        case 0x11f458u: goto label_11f458;
        case 0x11f45cu: goto label_11f45c;
        case 0x11f460u: goto label_11f460;
        case 0x11f464u: goto label_11f464;
        case 0x11f468u: goto label_11f468;
        case 0x11f46cu: goto label_11f46c;
        case 0x11f470u: goto label_11f470;
        case 0x11f474u: goto label_11f474;
        case 0x11f478u: goto label_11f478;
        case 0x11f47cu: goto label_11f47c;
        case 0x11f480u: goto label_11f480;
        case 0x11f484u: goto label_11f484;
        case 0x11f488u: goto label_11f488;
        case 0x11f48cu: goto label_11f48c;
        case 0x11f490u: goto label_11f490;
        case 0x11f494u: goto label_11f494;
        case 0x11f498u: goto label_11f498;
        case 0x11f49cu: goto label_11f49c;
        case 0x11f4a0u: goto label_11f4a0;
        case 0x11f4a4u: goto label_11f4a4;
        case 0x11f4a8u: goto label_11f4a8;
        case 0x11f4acu: goto label_11f4ac;
        case 0x11f4b0u: goto label_11f4b0;
        case 0x11f4b4u: goto label_11f4b4;
        case 0x11f4b8u: goto label_11f4b8;
        case 0x11f4bcu: goto label_11f4bc;
        case 0x11f4c0u: goto label_11f4c0;
        case 0x11f4c4u: goto label_11f4c4;
        case 0x11f4c8u: goto label_11f4c8;
        case 0x11f4ccu: goto label_11f4cc;
        case 0x11f4d0u: goto label_11f4d0;
        case 0x11f4d4u: goto label_11f4d4;
        case 0x11f4d8u: goto label_11f4d8;
        case 0x11f4dcu: goto label_11f4dc;
        case 0x11f4e0u: goto label_11f4e0;
        case 0x11f4e4u: goto label_11f4e4;
        case 0x11f4e8u: goto label_11f4e8;
        case 0x11f4ecu: goto label_11f4ec;
        case 0x11f4f0u: goto label_11f4f0;
        case 0x11f4f4u: goto label_11f4f4;
        case 0x11f4f8u: goto label_11f4f8;
        case 0x11f4fcu: goto label_11f4fc;
        case 0x11f500u: goto label_11f500;
        case 0x11f504u: goto label_11f504;
        case 0x11f508u: goto label_11f508;
        case 0x11f50cu: goto label_11f50c;
        case 0x11f510u: goto label_11f510;
        case 0x11f514u: goto label_11f514;
        case 0x11f518u: goto label_11f518;
        case 0x11f51cu: goto label_11f51c;
        case 0x11f520u: goto label_11f520;
        case 0x11f524u: goto label_11f524;
        case 0x11f528u: goto label_11f528;
        case 0x11f52cu: goto label_11f52c;
        case 0x11f530u: goto label_11f530;
        case 0x11f534u: goto label_11f534;
        case 0x11f538u: goto label_11f538;
        case 0x11f53cu: goto label_11f53c;
        case 0x11f540u: goto label_11f540;
        case 0x11f544u: goto label_11f544;
        case 0x11f548u: goto label_11f548;
        case 0x11f54cu: goto label_11f54c;
        case 0x11f550u: goto label_11f550;
        case 0x11f554u: goto label_11f554;
        case 0x11f558u: goto label_11f558;
        case 0x11f55cu: goto label_11f55c;
        case 0x11f560u: goto label_11f560;
        case 0x11f564u: goto label_11f564;
        case 0x11f568u: goto label_11f568;
        case 0x11f56cu: goto label_11f56c;
        case 0x11f570u: goto label_11f570;
        case 0x11f574u: goto label_11f574;
        case 0x11f578u: goto label_11f578;
        case 0x11f57cu: goto label_11f57c;
        case 0x11f580u: goto label_11f580;
        case 0x11f584u: goto label_11f584;
        case 0x11f588u: goto label_11f588;
        case 0x11f58cu: goto label_11f58c;
        case 0x11f590u: goto label_11f590;
        case 0x11f594u: goto label_11f594;
        case 0x11f598u: goto label_11f598;
        case 0x11f59cu: goto label_11f59c;
        case 0x11f5a0u: goto label_11f5a0;
        case 0x11f5a4u: goto label_11f5a4;
        case 0x11f5a8u: goto label_11f5a8;
        case 0x11f5acu: goto label_11f5ac;
        case 0x11f5b0u: goto label_11f5b0;
        case 0x11f5b4u: goto label_11f5b4;
        case 0x11f5b8u: goto label_11f5b8;
        case 0x11f5bcu: goto label_11f5bc;
        case 0x11f5c0u: goto label_11f5c0;
        case 0x11f5c4u: goto label_11f5c4;
        case 0x11f5c8u: goto label_11f5c8;
        case 0x11f5ccu: goto label_11f5cc;
        case 0x11f5d0u: goto label_11f5d0;
        case 0x11f5d4u: goto label_11f5d4;
        case 0x11f5d8u: goto label_11f5d8;
        case 0x11f5dcu: goto label_11f5dc;
        case 0x11f5e0u: goto label_11f5e0;
        case 0x11f5e4u: goto label_11f5e4;
        case 0x11f5e8u: goto label_11f5e8;
        case 0x11f5ecu: goto label_11f5ec;
        case 0x11f5f0u: goto label_11f5f0;
        case 0x11f5f4u: goto label_11f5f4;
        case 0x11f5f8u: goto label_11f5f8;
        case 0x11f5fcu: goto label_11f5fc;
        case 0x11f600u: goto label_11f600;
        case 0x11f604u: goto label_11f604;
        case 0x11f608u: goto label_11f608;
        case 0x11f60cu: goto label_11f60c;
        case 0x11f610u: goto label_11f610;
        case 0x11f614u: goto label_11f614;
        case 0x11f618u: goto label_11f618;
        case 0x11f61cu: goto label_11f61c;
        case 0x11f620u: goto label_11f620;
        case 0x11f624u: goto label_11f624;
        case 0x11f628u: goto label_11f628;
        case 0x11f62cu: goto label_11f62c;
        case 0x11f630u: goto label_11f630;
        case 0x11f634u: goto label_11f634;
        case 0x11f638u: goto label_11f638;
        case 0x11f63cu: goto label_11f63c;
        case 0x11f640u: goto label_11f640;
        case 0x11f644u: goto label_11f644;
        case 0x11f648u: goto label_11f648;
        case 0x11f64cu: goto label_11f64c;
        case 0x11f650u: goto label_11f650;
        case 0x11f654u: goto label_11f654;
        case 0x11f658u: goto label_11f658;
        case 0x11f65cu: goto label_11f65c;
        case 0x11f660u: goto label_11f660;
        case 0x11f664u: goto label_11f664;
        case 0x11f668u: goto label_11f668;
        case 0x11f66cu: goto label_11f66c;
        case 0x11f670u: goto label_11f670;
        case 0x11f674u: goto label_11f674;
        case 0x11f678u: goto label_11f678;
        case 0x11f67cu: goto label_11f67c;
        case 0x11f680u: goto label_11f680;
        case 0x11f684u: goto label_11f684;
        case 0x11f688u: goto label_11f688;
        case 0x11f68cu: goto label_11f68c;
        case 0x11f690u: goto label_11f690;
        case 0x11f694u: goto label_11f694;
        case 0x11f698u: goto label_11f698;
        case 0x11f69cu: goto label_11f69c;
        case 0x11f6a0u: goto label_11f6a0;
        case 0x11f6a4u: goto label_11f6a4;
        case 0x11f6a8u: goto label_11f6a8;
        case 0x11f6acu: goto label_11f6ac;
        case 0x11f6b0u: goto label_11f6b0;
        case 0x11f6b4u: goto label_11f6b4;
        case 0x11f6b8u: goto label_11f6b8;
        case 0x11f6bcu: goto label_11f6bc;
        case 0x11f6c0u: goto label_11f6c0;
        case 0x11f6c4u: goto label_11f6c4;
        case 0x11f6c8u: goto label_11f6c8;
        case 0x11f6ccu: goto label_11f6cc;
        case 0x11f6d0u: goto label_11f6d0;
        case 0x11f6d4u: goto label_11f6d4;
        case 0x11f6d8u: goto label_11f6d8;
        case 0x11f6dcu: goto label_11f6dc;
        case 0x11f6e0u: goto label_11f6e0;
        case 0x11f6e4u: goto label_11f6e4;
        case 0x11f6e8u: goto label_11f6e8;
        case 0x11f6ecu: goto label_11f6ec;
        case 0x11f6f0u: goto label_11f6f0;
        case 0x11f6f4u: goto label_11f6f4;
        case 0x11f6f8u: goto label_11f6f8;
        case 0x11f6fcu: goto label_11f6fc;
        case 0x11f700u: goto label_11f700;
        case 0x11f704u: goto label_11f704;
        case 0x11f708u: goto label_11f708;
        case 0x11f70cu: goto label_11f70c;
        case 0x11f710u: goto label_11f710;
        case 0x11f714u: goto label_11f714;
        case 0x11f718u: goto label_11f718;
        case 0x11f71cu: goto label_11f71c;
        case 0x11f720u: goto label_11f720;
        case 0x11f724u: goto label_11f724;
        case 0x11f728u: goto label_11f728;
        case 0x11f72cu: goto label_11f72c;
        case 0x11f730u: goto label_11f730;
        case 0x11f734u: goto label_11f734;
        case 0x11f738u: goto label_11f738;
        case 0x11f73cu: goto label_11f73c;
        case 0x11f740u: goto label_11f740;
        case 0x11f744u: goto label_11f744;
        case 0x11f748u: goto label_11f748;
        case 0x11f74cu: goto label_11f74c;
        case 0x11f750u: goto label_11f750;
        case 0x11f754u: goto label_11f754;
        case 0x11f758u: goto label_11f758;
        case 0x11f75cu: goto label_11f75c;
        case 0x11f760u: goto label_11f760;
        case 0x11f764u: goto label_11f764;
        case 0x11f768u: goto label_11f768;
        case 0x11f76cu: goto label_11f76c;
        case 0x11f770u: goto label_11f770;
        case 0x11f774u: goto label_11f774;
        case 0x11f778u: goto label_11f778;
        case 0x11f77cu: goto label_11f77c;
        case 0x11f780u: goto label_11f780;
        case 0x11f784u: goto label_11f784;
        case 0x11f788u: goto label_11f788;
        case 0x11f78cu: goto label_11f78c;
        case 0x11f790u: goto label_11f790;
        case 0x11f794u: goto label_11f794;
        case 0x11f798u: goto label_11f798;
        case 0x11f79cu: goto label_11f79c;
        case 0x11f7a0u: goto label_11f7a0;
        case 0x11f7a4u: goto label_11f7a4;
        case 0x11f7a8u: goto label_11f7a8;
        case 0x11f7acu: goto label_11f7ac;
        case 0x11f7b0u: goto label_11f7b0;
        case 0x11f7b4u: goto label_11f7b4;
        case 0x11f7b8u: goto label_11f7b8;
        case 0x11f7bcu: goto label_11f7bc;
        case 0x11f7c0u: goto label_11f7c0;
        case 0x11f7c4u: goto label_11f7c4;
        case 0x11f7c8u: goto label_11f7c8;
        case 0x11f7ccu: goto label_11f7cc;
        case 0x11f7d0u: goto label_11f7d0;
        case 0x11f7d4u: goto label_11f7d4;
        case 0x11f7d8u: goto label_11f7d8;
        case 0x11f7dcu: goto label_11f7dc;
        case 0x11f7e0u: goto label_11f7e0;
        case 0x11f7e4u: goto label_11f7e4;
        case 0x11f7e8u: goto label_11f7e8;
        case 0x11f7ecu: goto label_11f7ec;
        case 0x11f7f0u: goto label_11f7f0;
        case 0x11f7f4u: goto label_11f7f4;
        case 0x11f7f8u: goto label_11f7f8;
        case 0x11f7fcu: goto label_11f7fc;
        case 0x11f800u: goto label_11f800;
        case 0x11f804u: goto label_11f804;
        case 0x11f808u: goto label_11f808;
        case 0x11f80cu: goto label_11f80c;
        case 0x11f810u: goto label_11f810;
        case 0x11f814u: goto label_11f814;
        case 0x11f818u: goto label_11f818;
        case 0x11f81cu: goto label_11f81c;
        case 0x11f820u: goto label_11f820;
        case 0x11f824u: goto label_11f824;
        case 0x11f828u: goto label_11f828;
        case 0x11f82cu: goto label_11f82c;
        case 0x11f830u: goto label_11f830;
        case 0x11f834u: goto label_11f834;
        case 0x11f838u: goto label_11f838;
        case 0x11f83cu: goto label_11f83c;
        case 0x11f840u: goto label_11f840;
        case 0x11f844u: goto label_11f844;
        case 0x11f848u: goto label_11f848;
        case 0x11f84cu: goto label_11f84c;
        case 0x11f850u: goto label_11f850;
        case 0x11f854u: goto label_11f854;
        case 0x11f858u: goto label_11f858;
        case 0x11f85cu: goto label_11f85c;
        case 0x11f860u: goto label_11f860;
        case 0x11f864u: goto label_11f864;
        case 0x11f868u: goto label_11f868;
        case 0x11f86cu: goto label_11f86c;
        case 0x11f870u: goto label_11f870;
        case 0x11f874u: goto label_11f874;
        case 0x11f878u: goto label_11f878;
        case 0x11f87cu: goto label_11f87c;
        case 0x11f880u: goto label_11f880;
        case 0x11f884u: goto label_11f884;
        case 0x11f888u: goto label_11f888;
        case 0x11f88cu: goto label_11f88c;
        case 0x11f890u: goto label_11f890;
        case 0x11f894u: goto label_11f894;
        case 0x11f898u: goto label_11f898;
        case 0x11f89cu: goto label_11f89c;
        case 0x11f8a0u: goto label_11f8a0;
        case 0x11f8a4u: goto label_11f8a4;
        case 0x11f8a8u: goto label_11f8a8;
        case 0x11f8acu: goto label_11f8ac;
        case 0x11f8b0u: goto label_11f8b0;
        case 0x11f8b4u: goto label_11f8b4;
        case 0x11f8b8u: goto label_11f8b8;
        case 0x11f8bcu: goto label_11f8bc;
        case 0x11f8c0u: goto label_11f8c0;
        case 0x11f8c4u: goto label_11f8c4;
        case 0x11f8c8u: goto label_11f8c8;
        case 0x11f8ccu: goto label_11f8cc;
        case 0x11f8d0u: goto label_11f8d0;
        case 0x11f8d4u: goto label_11f8d4;
        case 0x11f8d8u: goto label_11f8d8;
        case 0x11f8dcu: goto label_11f8dc;
        case 0x11f8e0u: goto label_11f8e0;
        case 0x11f8e4u: goto label_11f8e4;
        case 0x11f8e8u: goto label_11f8e8;
        case 0x11f8ecu: goto label_11f8ec;
        case 0x11f8f0u: goto label_11f8f0;
        case 0x11f8f4u: goto label_11f8f4;
        case 0x11f8f8u: goto label_11f8f8;
        case 0x11f8fcu: goto label_11f8fc;
        case 0x11f900u: goto label_11f900;
        case 0x11f904u: goto label_11f904;
        case 0x11f908u: goto label_11f908;
        case 0x11f90cu: goto label_11f90c;
        case 0x11f910u: goto label_11f910;
        case 0x11f914u: goto label_11f914;
        case 0x11f918u: goto label_11f918;
        case 0x11f91cu: goto label_11f91c;
        case 0x11f920u: goto label_11f920;
        case 0x11f924u: goto label_11f924;
        case 0x11f928u: goto label_11f928;
        case 0x11f92cu: goto label_11f92c;
        case 0x11f930u: goto label_11f930;
        case 0x11f934u: goto label_11f934;
        case 0x11f938u: goto label_11f938;
        case 0x11f93cu: goto label_11f93c;
        case 0x11f940u: goto label_11f940;
        case 0x11f944u: goto label_11f944;
        case 0x11f948u: goto label_11f948;
        case 0x11f94cu: goto label_11f94c;
        case 0x11f950u: goto label_11f950;
        case 0x11f954u: goto label_11f954;
        case 0x11f958u: goto label_11f958;
        case 0x11f95cu: goto label_11f95c;
        case 0x11f960u: goto label_11f960;
        case 0x11f964u: goto label_11f964;
        case 0x11f968u: goto label_11f968;
        case 0x11f96cu: goto label_11f96c;
        case 0x11f970u: goto label_11f970;
        case 0x11f974u: goto label_11f974;
        case 0x11f978u: goto label_11f978;
        case 0x11f97cu: goto label_11f97c;
        case 0x11f980u: goto label_11f980;
        case 0x11f984u: goto label_11f984;
        case 0x11f988u: goto label_11f988;
        case 0x11f98cu: goto label_11f98c;
        case 0x11f990u: goto label_11f990;
        case 0x11f994u: goto label_11f994;
        case 0x11f998u: goto label_11f998;
        case 0x11f99cu: goto label_11f99c;
        case 0x11f9a0u: goto label_11f9a0;
        case 0x11f9a4u: goto label_11f9a4;
        case 0x11f9a8u: goto label_11f9a8;
        case 0x11f9acu: goto label_11f9ac;
        default: break;
    }

    ctx->pc = 0x11ee08u;

label_11ee08:
    // 0x11ee08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_11ee0c:
    // 0x11ee0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x11ee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_11ee10:
    // 0x11ee10: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x11ee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_11ee14:
    // 0x11ee14: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11ee14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11ee18:
    // 0x11ee18: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x11ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_11ee1c:
    // 0x11ee1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11ee1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11ee20:
    // 0x11ee20: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x11ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_11ee24:
    // 0x11ee24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ee24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11ee28:
    // 0x11ee28: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x11ee28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_11ee2c:
    // 0x11ee2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11ee2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11ee30:
    // 0x11ee30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x11ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_11ee34:
    // 0x11ee34: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11ee34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_11ee38:
    // 0x11ee38: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x11ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_11ee3c:
    // 0x11ee3c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x11ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_11ee40:
    // 0x11ee40: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x11ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_11ee44:
    // 0x11ee44: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x11ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_11ee48:
    // 0x11ee48: 0x6610009  bgez        $s3, . + 4 + (0x9 << 2)
label_11ee4c:
    if (ctx->pc == 0x11EE4Cu) {
        ctx->pc = 0x11EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE48u;
        // 0x11ee4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EE50u;
        goto label_11ee50;
    }
    ctx->pc = 0x11EE48u;
    {
        const bool branch_taken_0x11ee48 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x11EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE48u;
        // 0x11ee4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee48) {
            ctx->pc = 0x11EE70u;
            goto label_11ee70;
        }
    }
    ctx->pc = 0x11EE50u;
label_11ee50:
    // 0x11ee50: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_11ee54:
    if (ctx->pc == 0x11EE54u) {
        ctx->pc = 0x11EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE50u;
        // 0x11ee54: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EE58u;
        goto label_11ee58;
    }
    ctx->pc = 0x11EE50u;
    {
        const bool branch_taken_0x11ee50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE50u;
        // 0x11ee54: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee50) {
            ctx->pc = 0x11EE70u;
            goto label_11ee70;
        }
    }
    ctx->pc = 0x11EE58u;
label_11ee58:
    // 0x11ee58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11ee5c:
    // 0x11ee5c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11ee5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11ee60:
    // 0x11ee60: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11ee64:
    // 0x11ee64: 0x40f809  jalr        $v0
label_11ee68:
    if (ctx->pc == 0x11EE68u) {
        ctx->pc = 0x11EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE64u;
        // 0x11ee68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EE6Cu;
        goto label_11ee6c;
    }
    ctx->pc = 0x11EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EE6Cu);
        ctx->pc = 0x11EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE64u;
        // 0x11ee68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EE64u, 0x11EE6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EE6Cu;
label_11ee6c:
    // 0x11ee6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11ee6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ee70:
    // 0x11ee70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11ee74:
    // 0x11ee74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11ee78:
    // 0x11ee78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11ee78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_11ee7c:
    // 0x11ee7c: 0xc047e72  jal         func_11F9C8
label_11ee80:
    if (ctx->pc == 0x11EE80u) {
        ctx->pc = 0x11EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE7Cu;
        // 0x11ee80: 0x202200b  movn        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EE84u;
        goto label_11ee84;
    }
    ctx->pc = 0x11EE7Cu;
    SET_GPR_U32(ctx, 31, 0x11EE84u);
    ctx->pc = 0x11EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE7Cu;
    // 0x11ee80: 0x202200b  movn        $a0, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11EE7Cu, 0x11EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE84u;
label_11ee84:
    // 0x11ee84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11ee88:
    // 0x11ee88: 0xc047e6c  jal         func_11F9B0
label_11ee8c:
    if (ctx->pc == 0x11EE8Cu) {
        ctx->pc = 0x11EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE88u;
        // 0x11ee8c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EE90u;
        goto label_11ee90;
    }
    ctx->pc = 0x11EE88u;
    SET_GPR_U32(ctx, 31, 0x11EE90u);
    ctx->pc = 0x11EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE88u;
    // 0x11ee8c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11EE88u, 0x11EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE90u;
label_11ee90:
    // 0x11ee90: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11ee94:
    // 0x11ee94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11ee94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ee98:
    // 0x11ee98: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x11ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_11ee9c:
    // 0x11ee9c: 0x90430410  lbu         $v1, 0x410($v0)
    ctx->pc = 0x11ee9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
label_11eea0:
    // 0x11eea0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_11eea4:
    if (ctx->pc == 0x11EEA4u) {
        ctx->pc = 0x11EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEA0u;
        // 0x11eea4: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EEA8u;
        goto label_11eea8;
    }
    ctx->pc = 0x11EEA0u;
    {
        const bool branch_taken_0x11eea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEA0u;
        // 0x11eea4: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea0) {
            ctx->pc = 0x11EEF0u;
            goto label_11eef0;
        }
    }
    ctx->pc = 0x11EEA8u;
label_11eea8:
    // 0x11eea8: 0x16600011  bnez        $s3, . + 4 + (0x11 << 2)
label_11eeac:
    if (ctx->pc == 0x11EEACu) {
        ctx->pc = 0x11EEB0u;
        goto label_11eeb0;
    }
    ctx->pc = 0x11EEA8u;
    {
        const bool branch_taken_0x11eea8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x11eea8) {
            ctx->pc = 0x11EEF0u;
            goto label_11eef0;
        }
    }
    ctx->pc = 0x11EEB0u;
label_11eeb0:
    // 0x11eeb0: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
label_11eeb4:
    if (ctx->pc == 0x11EEB4u) {
        ctx->pc = 0x11EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEB0u;
        // 0x11eeb4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EEB8u;
        goto label_11eeb8;
    }
    ctx->pc = 0x11EEB0u;
    {
        const bool branch_taken_0x11eeb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEB0u;
        // 0x11eeb4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eeb0) {
            ctx->pc = 0x11EF2Cu;
            goto label_11ef2c;
        }
    }
    ctx->pc = 0x11EEB8u;
label_11eeb8:
    // 0x11eeb8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x11eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11eebc:
    // 0x11eebc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11eebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11eec0:
    // 0x11eec0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11eec4:
    // 0x11eec4: 0x40f809  jalr        $v0
label_11eec8:
    if (ctx->pc == 0x11EEC8u) {
        ctx->pc = 0x11EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEC4u;
        // 0x11eec8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EECCu;
        goto label_11eecc;
    }
    ctx->pc = 0x11EEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EECCu);
        ctx->pc = 0x11EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEC4u;
        // 0x11eec8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EEC4u, 0x11EECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EECCu;
label_11eecc:
    // 0x11eecc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11eed0:
    // 0x11eed0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_11eed4:
    if (ctx->pc == 0x11EED4u) {
        ctx->pc = 0x11EED8u;
        goto label_11eed8;
    }
    ctx->pc = 0x11EED0u;
    {
        const bool branch_taken_0x11eed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11eed0) {
            ctx->pc = 0x11EEF0u;
            goto label_11eef0;
        }
    }
    ctx->pc = 0x11EED8u;
label_11eed8:
    // 0x11eed8: 0xc048122  jal         func_120488
label_11eedc:
    if (ctx->pc == 0x11EEDCu) {
        ctx->pc = 0x11EEE0u;
        goto label_11eee0;
    }
    ctx->pc = 0x11EED8u;
    SET_GPR_U32(ctx, 31, 0x11EEE0u);
    ctx->pc = 0x120488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120488u, 0x11EED8u, 0x11EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EEE0u;
label_11eee0:
    // 0x11eee0: 0xc048114  jal         func_120450
label_11eee4:
    if (ctx->pc == 0x11EEE4u) {
        ctx->pc = 0x11EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEE0u;
        // 0x11eee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EEE8u;
        goto label_11eee8;
    }
    ctx->pc = 0x11EEE0u;
    SET_GPR_U32(ctx, 31, 0x11EEE8u);
    ctx->pc = 0x11EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EEE0u;
    // 0x11eee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120450u, 0x11EEE0u, 0x11EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EEE8u;
label_11eee8:
    // 0x11eee8: 0x100002a5  b           . + 4 + (0x2A5 << 2)
label_11eeec:
    if (ctx->pc == 0x11EEECu) {
        ctx->pc = 0x11EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEE8u;
        // 0x11eeec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EEF0u;
        goto label_11eef0;
    }
    ctx->pc = 0x11EEE8u;
    {
        const bool branch_taken_0x11eee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEE8u;
        // 0x11eeec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eee8) {
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11EEF0u;
label_11eef0:
    // 0x11eef0: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_11eef4:
    if (ctx->pc == 0x11EEF4u) {
        ctx->pc = 0x11EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEF0u;
        // 0x11eef4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EEF8u;
        goto label_11eef8;
    }
    ctx->pc = 0x11EEF0u;
    {
        const bool branch_taken_0x11eef0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEF0u;
        // 0x11eef4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eef0) {
            ctx->pc = 0x11EF2Cu;
            goto label_11ef2c;
        }
    }
    ctx->pc = 0x11EEF8u;
label_11eef8:
    // 0x11eef8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x11eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11eefc:
    // 0x11eefc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11eefcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11ef00:
    // 0x11ef00: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11ef04:
    // 0x11ef04: 0x40f809  jalr        $v0
label_11ef08:
    if (ctx->pc == 0x11EF08u) {
        ctx->pc = 0x11EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF04u;
        // 0x11ef08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF0Cu;
        goto label_11ef0c;
    }
    ctx->pc = 0x11EF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EF0Cu);
        ctx->pc = 0x11EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF04u;
        // 0x11ef08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF04u, 0x11EF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EF0Cu;
label_11ef0c:
    // 0x11ef0c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11ef10:
    // 0x11ef10: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_11ef14:
    if (ctx->pc == 0x11EF14u) {
        ctx->pc = 0x11EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF10u;
        // 0x11ef14: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF18u;
        goto label_11ef18;
    }
    ctx->pc = 0x11EF10u;
    {
        const bool branch_taken_0x11ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF10u;
        // 0x11ef14: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef10) {
            ctx->pc = 0x11EF2Cu;
            goto label_11ef2c;
        }
    }
    ctx->pc = 0x11EF18u;
label_11ef18:
    // 0x11ef18: 0x8fc2489c  lw          $v0, 0x489C($fp)
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_11ef1c:
    // 0x11ef1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ef20:
    // 0x11ef20: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x11ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_11ef24:
    // 0x11ef24: 0x10640295  beq         $v1, $a0, . + 4 + (0x295 << 2)
label_11ef28:
    if (ctx->pc == 0x11EF28u) {
        ctx->pc = 0x11EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF24u;
        // 0x11ef28: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF2Cu;
        goto label_11ef2c;
    }
    ctx->pc = 0x11EF24u;
    {
        const bool branch_taken_0x11ef24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF24u;
        // 0x11ef28: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef24) {
            ctx->pc = 0x11F97Cu;
            goto label_11f97c;
        }
    }
    ctx->pc = 0x11EF2Cu;
label_11ef2c:
    // 0x11ef2c: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x11ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_11ef30:
    // 0x11ef30: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_11ef34:
    if (ctx->pc == 0x11EF34u) {
        ctx->pc = 0x11EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF30u;
        // 0x11ef34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF38u;
        goto label_11ef38;
    }
    ctx->pc = 0x11EF30u;
    {
        const bool branch_taken_0x11ef30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF30u;
        // 0x11ef34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef30) {
            ctx->pc = 0x11EF80u;
            goto label_11ef80;
        }
    }
    ctx->pc = 0x11EF38u;
label_11ef38:
    // 0x11ef38: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x11ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_11ef3c:
    // 0x11ef3c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_11ef40:
    if (ctx->pc == 0x11EF40u) {
        ctx->pc = 0x11EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF3Cu;
        // 0x11ef40: 0xc46101f0  lwc1        $f1, 0x1F0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF44u;
        goto label_11ef44;
    }
    ctx->pc = 0x11EF3Cu;
    {
        const bool branch_taken_0x11ef3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ef3c) {
            ctx->pc = 0x11EF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EF3Cu;
            // 0x11ef40: 0xc46101f0  lwc1        $f1, 0x1F0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EF68u;
            goto label_11ef68;
        }
    }
    ctx->pc = 0x11EF44u;
label_11ef44:
    // 0x11ef44: 0xc46101ec  lwc1        $f1, 0x1EC($v1)
    ctx->pc = 0x11ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11ef48:
    // 0x11ef48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ef48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11ef4c:
    // 0x11ef4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ef4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ef50:
    // 0x11ef50: 0x0  nop
    ctx->pc = 0x11ef50u;
    // NOP
label_11ef54:
    // 0x11ef54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11ef54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ef58:
    // 0x11ef58: 0x0  nop
    ctx->pc = 0x11ef58u;
    // NOP
label_11ef5c:
    // 0x11ef5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_11ef60:
    if (ctx->pc == 0x11EF60u) {
        ctx->pc = 0x11EF64u;
        goto label_11ef64;
    }
    ctx->pc = 0x11EF5Cu;
    {
        const bool branch_taken_0x11ef5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ef5c) {
            ctx->pc = 0x11EF80u;
            goto label_11ef80;
        }
    }
    ctx->pc = 0x11EF64u;
label_11ef64:
    // 0x11ef64: 0xc46101f0  lwc1        $f1, 0x1F0($v1)
    ctx->pc = 0x11ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11ef68:
    // 0x11ef68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11ef68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ef6c:
    // 0x11ef6c: 0x0  nop
    ctx->pc = 0x11ef6cu;
    // NOP
label_11ef70:
    // 0x11ef70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11ef70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ef74:
    // 0x11ef74: 0x0  nop
    ctx->pc = 0x11ef74u;
    // NOP
label_11ef78:
    // 0x11ef78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_11ef7c:
    if (ctx->pc == 0x11EF7Cu) {
        ctx->pc = 0x11EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF78u;
        // 0x11ef7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF80u;
        goto label_11ef80;
    }
    ctx->pc = 0x11EF78u;
    {
        const bool branch_taken_0x11ef78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ef78) {
            ctx->pc = 0x11EF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EF78u;
            // 0x11ef7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EF80u;
            goto label_11ef80;
        }
    }
    ctx->pc = 0x11EF80u;
label_11ef80:
    // 0x11ef80: 0x1240005f  beqz        $s2, . + 4 + (0x5F << 2)
label_11ef84:
    if (ctx->pc == 0x11EF84u) {
        ctx->pc = 0x11EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF80u;
        // 0x11ef84: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF88u;
        goto label_11ef88;
    }
    ctx->pc = 0x11EF80u;
    {
        const bool branch_taken_0x11ef80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF80u;
        // 0x11ef84: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef80) {
            ctx->pc = 0x11F100u;
            goto label_11f100;
        }
    }
    ctx->pc = 0x11EF88u;
label_11ef88:
    // 0x11ef88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11ef8c:
    // 0x11ef8c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11ef8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11ef90:
    // 0x11ef90: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11ef94:
    // 0x11ef94: 0x40f809  jalr        $v0
label_11ef98:
    if (ctx->pc == 0x11EF98u) {
        ctx->pc = 0x11EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF94u;
        // 0x11ef98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EF9Cu;
        goto label_11ef9c;
    }
    ctx->pc = 0x11EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EF9Cu);
        ctx->pc = 0x11EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF94u;
        // 0x11ef98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF94u, 0x11EF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EF9Cu;
label_11ef9c:
    // 0x11ef9c: 0x1262003a  beq         $s3, $v0, . + 4 + (0x3A << 2)
label_11efa0:
    if (ctx->pc == 0x11EFA0u) {
        ctx->pc = 0x11EFA4u;
        goto label_11efa4;
    }
    ctx->pc = 0x11EF9Cu;
    {
        const bool branch_taken_0x11ef9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ef9c) {
            ctx->pc = 0x11F088u;
            goto label_11f088;
        }
    }
    ctx->pc = 0x11EFA4u;
label_11efa4:
    // 0x11efa4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11efa8:
    // 0x11efa8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11efa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11efac:
    // 0x11efac: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11efb0:
    // 0x11efb0: 0x40f809  jalr        $v0
label_11efb4:
    if (ctx->pc == 0x11EFB4u) {
        ctx->pc = 0x11EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFB0u;
        // 0x11efb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EFB8u;
        goto label_11efb8;
    }
    ctx->pc = 0x11EFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EFB8u);
        ctx->pc = 0x11EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFB0u;
        // 0x11efb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EFB0u, 0x11EFB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EFB8u;
label_11efb8:
    // 0x11efb8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11efbc:
    // 0x11efbc: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_11efc0:
    if (ctx->pc == 0x11EFC0u) {
        ctx->pc = 0x11EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFBCu;
        // 0x11efc0: 0x8e520214  lw          $s2, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EFC4u;
        goto label_11efc4;
    }
    ctx->pc = 0x11EFBCu;
    {
        const bool branch_taken_0x11efbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11efbc) {
            ctx->pc = 0x11EFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EFBCu;
            // 0x11efc0: 0x8e520214  lw          $s2, 0x214($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EFC4u;
            goto label_11efc4;
        }
    }
    ctx->pc = 0x11EFC4u;
label_11efc4:
    // 0x11efc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11efc8:
    // 0x11efc8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11efc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11efcc:
    // 0x11efcc: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11efd0:
    // 0x11efd0: 0x40f809  jalr        $v0
label_11efd4:
    if (ctx->pc == 0x11EFD4u) {
        ctx->pc = 0x11EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFD0u;
        // 0x11efd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EFD8u;
        goto label_11efd8;
    }
    ctx->pc = 0x11EFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EFD8u);
        ctx->pc = 0x11EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFD0u;
        // 0x11efd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EFD0u, 0x11EFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EFD8u;
label_11efd8:
    // 0x11efd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11efdc:
    // 0x11efdc: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_11efe0:
    if (ctx->pc == 0x11EFE0u) {
        ctx->pc = 0x11EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFDCu;
        // 0x11efe0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EFE4u;
        goto label_11efe4;
    }
    ctx->pc = 0x11EFDCu;
    {
        const bool branch_taken_0x11efdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11efdc) {
            ctx->pc = 0x11EFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EFDCu;
            // 0x11efe0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F00Cu;
            goto label_11f00c;
        }
    }
    ctx->pc = 0x11EFE4u;
label_11efe4:
    // 0x11efe4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11efe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11efe8:
    // 0x11efe8: 0xc047e78  jal         func_11F9E0
label_11efec:
    if (ctx->pc == 0x11EFECu) {
        ctx->pc = 0x11EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFE8u;
        // 0x11efec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EFF0u;
        goto label_11eff0;
    }
    ctx->pc = 0x11EFE8u;
    SET_GPR_U32(ctx, 31, 0x11EFF0u);
    ctx->pc = 0x11EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EFE8u;
    // 0x11efec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11EFE8u, 0x11EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFF0u;
label_11eff0:
    // 0x11eff0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_11eff4:
    if (ctx->pc == 0x11EFF4u) {
        ctx->pc = 0x11EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF0u;
        // 0x11eff4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EFF8u;
        goto label_11eff8;
    }
    ctx->pc = 0x11EFF0u;
    {
        const bool branch_taken_0x11eff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eff0) {
            ctx->pc = 0x11EFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EFF0u;
            // 0x11eff4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F00Cu;
            goto label_11f00c;
        }
    }
    ctx->pc = 0x11EFF8u;
label_11eff8:
    // 0x11eff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11effc:
    // 0x11effc: 0xc047e78  jal         func_11F9E0
label_11f000:
    if (ctx->pc == 0x11F000u) {
        ctx->pc = 0x11F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFFCu;
        // 0x11f000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F004u;
        goto label_11f004;
    }
    ctx->pc = 0x11EFFCu;
    SET_GPR_U32(ctx, 31, 0x11F004u);
    ctx->pc = 0x11F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EFFCu;
    // 0x11f000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11EFFCu, 0x11F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F004u;
label_11f004:
    // 0x11f004: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11f004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f008:
    // 0x11f008: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f00c:
    // 0x11f00c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f010:
    // 0x11f010: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f014:
    // 0x11f014: 0x40f809  jalr        $v0
label_11f018:
    if (ctx->pc == 0x11F018u) {
        ctx->pc = 0x11F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F014u;
        // 0x11f018: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F01Cu;
        goto label_11f01c;
    }
    ctx->pc = 0x11F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F01Cu);
        ctx->pc = 0x11F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F014u;
        // 0x11f018: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F014u, 0x11F01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F01Cu;
label_11f01c:
    // 0x11f01c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f020:
    // 0x11f020: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_11f024:
    if (ctx->pc == 0x11F024u) {
        ctx->pc = 0x11F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F020u;
        // 0x11f024: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F028u;
        goto label_11f028;
    }
    ctx->pc = 0x11F020u;
    {
        const bool branch_taken_0x11f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f020) {
            ctx->pc = 0x11F024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F020u;
            // 0x11f024: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F050u;
            goto label_11f050;
        }
    }
    ctx->pc = 0x11F028u;
label_11f028:
    // 0x11f028: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11f02c:
    // 0x11f02c: 0xc047eec  jal         func_11FBB0
label_11f030:
    if (ctx->pc == 0x11F030u) {
        ctx->pc = 0x11F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F02Cu;
        // 0x11f030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F034u;
        goto label_11f034;
    }
    ctx->pc = 0x11F02Cu;
    SET_GPR_U32(ctx, 31, 0x11F034u);
    ctx->pc = 0x11F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F02Cu;
    // 0x11f030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F02Cu, 0x11F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F034u;
label_11f034:
    // 0x11f034: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_11f038:
    if (ctx->pc == 0x11F038u) {
        ctx->pc = 0x11F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F034u;
        // 0x11f038: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F03Cu;
        goto label_11f03c;
    }
    ctx->pc = 0x11F034u;
    {
        const bool branch_taken_0x11f034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f034) {
            ctx->pc = 0x11F038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F034u;
            // 0x11f038: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F050u;
            goto label_11f050;
        }
    }
    ctx->pc = 0x11F03Cu;
label_11f03c:
    // 0x11f03c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11f040:
    // 0x11f040: 0xc047eec  jal         func_11FBB0
label_11f044:
    if (ctx->pc == 0x11F044u) {
        ctx->pc = 0x11F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F040u;
        // 0x11f044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F048u;
        goto label_11f048;
    }
    ctx->pc = 0x11F040u;
    SET_GPR_U32(ctx, 31, 0x11F048u);
    ctx->pc = 0x11F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F040u;
    // 0x11f044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F040u, 0x11F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F048u;
label_11f048:
    // 0x11f048: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11f048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f04c:
    // 0x11f04c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f050:
    // 0x11f050: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f054:
    // 0x11f054: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f058:
    // 0x11f058: 0x40f809  jalr        $v0
label_11f05c:
    if (ctx->pc == 0x11F05Cu) {
        ctx->pc = 0x11F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F058u;
        // 0x11f05c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F060u;
        goto label_11f060;
    }
    ctx->pc = 0x11F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F060u);
        ctx->pc = 0x11F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F058u;
        // 0x11f05c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F058u, 0x11F060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F060u;
label_11f060:
    // 0x11f060: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x11f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11f064:
    // 0x11f064: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_11f068:
    if (ctx->pc == 0x11F068u) {
        ctx->pc = 0x11F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F064u;
        // 0x11f068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F06Cu;
        goto label_11f06c;
    }
    ctx->pc = 0x11F064u;
    {
        const bool branch_taken_0x11f064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F064u;
        // 0x11f068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f064) {
            ctx->pc = 0x11F088u;
            goto label_11f088;
        }
    }
    ctx->pc = 0x11F06Cu;
label_11f06c:
    // 0x11f06c: 0xc047fd4  jal         func_11FF50
label_11f070:
    if (ctx->pc == 0x11F070u) {
        ctx->pc = 0x11F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F06Cu;
        // 0x11f070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F074u;
        goto label_11f074;
    }
    ctx->pc = 0x11F06Cu;
    SET_GPR_U32(ctx, 31, 0x11F074u);
    ctx->pc = 0x11F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F06Cu;
    // 0x11f070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF50u, 0x11F06Cu, 0x11F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F074u;
label_11f074:
    // 0x11f074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11f078:
    if (ctx->pc == 0x11F078u) {
        ctx->pc = 0x11F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F074u;
        // 0x11f078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F07Cu;
        goto label_11f07c;
    }
    ctx->pc = 0x11F074u;
    {
        const bool branch_taken_0x11f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F074u;
        // 0x11f078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f074) {
            ctx->pc = 0x11F088u;
            goto label_11f088;
        }
    }
    ctx->pc = 0x11F07Cu;
label_11f07c:
    // 0x11f07c: 0xc047fd4  jal         func_11FF50
label_11f080:
    if (ctx->pc == 0x11F080u) {
        ctx->pc = 0x11F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F07Cu;
        // 0x11f080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F084u;
        goto label_11f084;
    }
    ctx->pc = 0x11F07Cu;
    SET_GPR_U32(ctx, 31, 0x11F084u);
    ctx->pc = 0x11F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F07Cu;
    // 0x11f080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF50u, 0x11F07Cu, 0x11F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F084u;
label_11f084:
    // 0x11f084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11f084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f088:
    // 0x11f088: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_11f08c:
    if (ctx->pc == 0x11F08Cu) {
        ctx->pc = 0x11F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F088u;
        // 0x11f08c: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F090u;
        goto label_11f090;
    }
    ctx->pc = 0x11F088u;
    {
        const bool branch_taken_0x11f088 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F088u;
        // 0x11f08c: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f088) {
            ctx->pc = 0x11F104u;
            goto label_11f104;
        }
    }
    ctx->pc = 0x11F090u;
label_11f090:
    // 0x11f090: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_11f094:
    if (ctx->pc == 0x11F094u) {
        ctx->pc = 0x11F098u;
        goto label_11f098;
    }
    ctx->pc = 0x11F090u;
    {
        const bool branch_taken_0x11f090 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f090) {
            ctx->pc = 0x11F0B8u;
            goto label_11f0b8;
        }
    }
    ctx->pc = 0x11F098u;
label_11f098:
    // 0x11f098: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x11f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_11f09c:
    // 0x11f09c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f09cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f0a0:
    // 0x11f0a0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f0a4:
    // 0x11f0a4: 0x40f809  jalr        $v0
label_11f0a8:
    if (ctx->pc == 0x11F0A8u) {
        ctx->pc = 0x11F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0A4u;
        // 0x11f0a8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0ACu;
        goto label_11f0ac;
    }
    ctx->pc = 0x11F0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F0ACu);
        ctx->pc = 0x11F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0A4u;
        // 0x11f0a8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F0A4u, 0x11F0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F0ACu;
label_11f0ac:
    // 0x11f0ac: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x11f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_11f0b0:
    // 0x11f0b0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_11f0b4:
    if (ctx->pc == 0x11F0B4u) {
        ctx->pc = 0x11F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0B0u;
        // 0x11f0b4: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0B8u;
        goto label_11f0b8;
    }
    ctx->pc = 0x11F0B0u;
    {
        const bool branch_taken_0x11f0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0B0u;
        // 0x11f0b4: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0b0) {
            ctx->pc = 0x11F104u;
            goto label_11f104;
        }
    }
    ctx->pc = 0x11F0B8u;
label_11f0b8:
    // 0x11f0b8: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
label_11f0bc:
    if (ctx->pc == 0x11F0BCu) {
        ctx->pc = 0x11F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0B8u;
        // 0x11f0bc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0C0u;
        goto label_11f0c0;
    }
    ctx->pc = 0x11F0B8u;
    {
        const bool branch_taken_0x11f0b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0b8) {
            ctx->pc = 0x11F0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F0B8u;
            // 0x11f0bc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F0ECu;
            goto label_11f0ec;
        }
    }
    ctx->pc = 0x11F0C0u;
label_11f0c0:
    // 0x11f0c0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x11f0c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11f0c4:
    // 0x11f0c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_11f0c8:
    if (ctx->pc == 0x11F0C8u) {
        ctx->pc = 0x11F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0C4u;
        // 0x11f0c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0CCu;
        goto label_11f0cc;
    }
    ctx->pc = 0x11F0C4u;
    {
        const bool branch_taken_0x11f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0C4u;
        // 0x11f0c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0c4) {
            ctx->pc = 0x11F0E8u;
            goto label_11f0e8;
        }
    }
    ctx->pc = 0x11F0CCu;
label_11f0cc:
    // 0x11f0cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f0d0:
    // 0x11f0d0: 0x844401e0  lh          $a0, 0x1E0($v0)
    ctx->pc = 0x11f0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 480)));
label_11f0d4:
    // 0x11f0d4: 0x8c4301e4  lw          $v1, 0x1E4($v0)
    ctx->pc = 0x11f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_11f0d8:
    // 0x11f0d8: 0x60f809  jalr        $v1
label_11f0dc:
    if (ctx->pc == 0x11F0DCu) {
        ctx->pc = 0x11F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D8u;
        // 0x11f0dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0E0u;
        goto label_11f0e0;
    }
    ctx->pc = 0x11F0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F0E0u);
        ctx->pc = 0x11F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D8u;
        // 0x11f0dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F0D8u, 0x11F0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F0E0u;
label_11f0e0:
    // 0x11f0e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_11f0e4:
    if (ctx->pc == 0x11F0E4u) {
        ctx->pc = 0x11F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0E0u;
        // 0x11f0e4: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0E8u;
        goto label_11f0e8;
    }
    ctx->pc = 0x11F0E0u;
    {
        const bool branch_taken_0x11f0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0E0u;
        // 0x11f0e4: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0e0) {
            ctx->pc = 0x11F104u;
            goto label_11f104;
        }
    }
    ctx->pc = 0x11F0E8u;
label_11f0e8:
    // 0x11f0e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f0ec:
    // 0x11f0ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f0f0:
    // 0x11f0f0: 0x844401e0  lh          $a0, 0x1E0($v0)
    ctx->pc = 0x11f0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 480)));
label_11f0f4:
    // 0x11f0f4: 0x8c4301e4  lw          $v1, 0x1E4($v0)
    ctx->pc = 0x11f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_11f0f8:
    // 0x11f0f8: 0x60f809  jalr        $v1
label_11f0fc:
    if (ctx->pc == 0x11F0FCu) {
        ctx->pc = 0x11F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0F8u;
        // 0x11f0fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F100u;
        goto label_11f100;
    }
    ctx->pc = 0x11F0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F100u);
        ctx->pc = 0x11F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0F8u;
        // 0x11f0fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F0F8u, 0x11F100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F100u;
label_11f100:
    // 0x11f100: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x11f100u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
label_11f104:
    // 0x11f104: 0x12a00055  beqz        $s5, . + 4 + (0x55 << 2)
label_11f108:
    if (ctx->pc == 0x11F108u) {
        ctx->pc = 0x11F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F104u;
        // 0x11f108: 0x138880  sll         $s1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F10Cu;
        goto label_11f10c;
    }
    ctx->pc = 0x11F104u;
    {
        const bool branch_taken_0x11f104 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F104u;
        // 0x11f108: 0x138880  sll         $s1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f104) {
            ctx->pc = 0x11F25Cu;
            goto label_11f25c;
        }
    }
    ctx->pc = 0x11F10Cu;
label_11f10c:
    // 0x11f10c: 0x12400054  beqz        $s2, . + 4 + (0x54 << 2)
label_11f110:
    if (ctx->pc == 0x11F110u) {
        ctx->pc = 0x11F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F10Cu;
        // 0x11f110: 0x26e29148  addiu       $v0, $s7, -0x6EB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F114u;
        goto label_11f114;
    }
    ctx->pc = 0x11F10Cu;
    {
        const bool branch_taken_0x11f10c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F10Cu;
        // 0x11f110: 0x26e29148  addiu       $v0, $s7, -0x6EB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f10c) {
            ctx->pc = 0x11F260u;
            goto label_11f260;
        }
    }
    ctx->pc = 0x11F114u;
label_11f114:
    // 0x11f114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11f118:
    // 0x11f118: 0x0  nop
    ctx->pc = 0x11f118u;
    // NOP
label_11f11c:
    // 0x11f11c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x11f11cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11f120:
    // 0x11f120: 0x0  nop
    ctx->pc = 0x11f120u;
    // NOP
label_11f124:
    // 0x11f124: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_11f128:
    if (ctx->pc == 0x11F128u) {
        ctx->pc = 0x11F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F124u;
        // 0x11f128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F12Cu;
        goto label_11f12c;
    }
    ctx->pc = 0x11F124u;
    {
        const bool branch_taken_0x11f124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F124u;
        // 0x11f128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f124) {
            ctx->pc = 0x11F260u;
            goto label_11f260;
        }
    }
    ctx->pc = 0x11F12Cu;
label_11f12c:
    // 0x11f12c: 0xc047eb2  jal         func_11FAC8
label_11f130:
    if (ctx->pc == 0x11F130u) {
        ctx->pc = 0x11F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F12Cu;
        // 0x11f130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F134u;
        goto label_11f134;
    }
    ctx->pc = 0x11F12Cu;
    SET_GPR_U32(ctx, 31, 0x11F134u);
    ctx->pc = 0x11F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F12Cu;
    // 0x11f130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC8u, 0x11F12Cu, 0x11F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F134u;
label_11f134:
    // 0x11f134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11f134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f138:
    // 0x11f138: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
label_11f13c:
    if (ctx->pc == 0x11F13Cu) {
        ctx->pc = 0x11F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F138u;
        // 0x11f13c: 0x26e29148  addiu       $v0, $s7, -0x6EB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F140u;
        goto label_11f140;
    }
    ctx->pc = 0x11F138u;
    {
        const bool branch_taken_0x11f138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F138u;
        // 0x11f13c: 0x26e29148  addiu       $v0, $s7, -0x6EB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f138) {
            ctx->pc = 0x11F260u;
            goto label_11f260;
        }
    }
    ctx->pc = 0x11F140u;
label_11f140:
    // 0x11f140: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f144:
    // 0x11f144: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f148:
    // 0x11f148: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f14c:
    // 0x11f14c: 0x40f809  jalr        $v0
label_11f150:
    if (ctx->pc == 0x11F150u) {
        ctx->pc = 0x11F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F14Cu;
        // 0x11f150: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F154u;
        goto label_11f154;
    }
    ctx->pc = 0x11F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F154u);
        ctx->pc = 0x11F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F14Cu;
        // 0x11f150: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F14Cu, 0x11F154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F154u;
label_11f154:
    // 0x11f154: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x11f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_11f158:
    // 0x11f158: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_11f15c:
    if (ctx->pc == 0x11F15Cu) {
        ctx->pc = 0x11F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F158u;
        // 0x11f15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F160u;
        goto label_11f160;
    }
    ctx->pc = 0x11F158u;
    {
        const bool branch_taken_0x11f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F158u;
        // 0x11f15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f158) {
            ctx->pc = 0x11F25Cu;
            goto label_11f25c;
        }
    }
    ctx->pc = 0x11F160u;
label_11f160:
    // 0x11f160: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11f160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11f164:
    // 0x11f164: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11f168:
    // 0x11f168: 0xc050c1e  jal         func_143078
label_11f16c:
    if (ctx->pc == 0x11F16Cu) {
        ctx->pc = 0x11F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F168u;
        // 0x11f16c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F170u;
        goto label_11f170;
    }
    ctx->pc = 0x11F168u;
    SET_GPR_U32(ctx, 31, 0x11F170u);
    ctx->pc = 0x11F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F168u;
    // 0x11f16c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143078u, 0x11F168u, 0x11F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F170u;
label_11f170:
    // 0x11f170: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11f170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_11f174:
    // 0x11f174: 0x26e29148  addiu       $v0, $s7, -0x6EB8
    ctx->pc = 0x11f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938952));
label_11f178:
    // 0x11f178: 0x24839150  addiu       $v1, $a0, -0x6EB0
    ctx->pc = 0x11f178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938960));
label_11f17c:
    // 0x11f17c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_11f180:
    // 0x11f180: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x11f180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_11f184:
    // 0x11f184: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_11f188:
    // 0x11f188: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x11f188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_11f18c:
    // 0x11f18c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f190:
    // 0x11f190: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x11f190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_11f194:
    // 0x11f194: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
label_11f198:
    if (ctx->pc == 0x11F198u) {
        ctx->pc = 0x11F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F194u;
        // 0x11f198: 0xaca4b1d8  sw          $a0, -0x4E28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294947288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F19Cu;
        goto label_11f19c;
    }
    ctx->pc = 0x11F194u;
    {
        const bool branch_taken_0x11f194 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F194u;
        // 0x11f198: 0xaca4b1d8  sw          $a0, -0x4E28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294947288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f194) {
            ctx->pc = 0x11F1A0u;
            goto label_11f1a0;
        }
    }
    ctx->pc = 0x11F19Cu;
label_11f19c:
    // 0x11f19c: 0xaca0b1d8  sw          $zero, -0x4E28($a1)
    ctx->pc = 0x11f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294947288), GPR_U32(ctx, 0));
label_11f1a0:
    // 0x11f1a0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_11f1a4:
    if (ctx->pc == 0x11F1A4u) {
        ctx->pc = 0x11F1A8u;
        goto label_11f1a8;
    }
    ctx->pc = 0x11F1A0u;
    {
        const bool branch_taken_0x11f1a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1a0) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F1A8u;
label_11f1a8:
    // 0x11f1a8: 0x56c0002a  bnel        $s6, $zero, . + 4 + (0x2A << 2)
label_11f1ac:
    if (ctx->pc == 0x11F1ACu) {
        ctx->pc = 0x11F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1A8u;
        // 0x11f1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1B0u;
        goto label_11f1b0;
    }
    ctx->pc = 0x11F1A8u;
    {
        const bool branch_taken_0x11f1a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f1a8) {
            ctx->pc = 0x11F1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F1A8u;
            // 0x11f1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F254u;
            goto label_11f254;
        }
    }
    ctx->pc = 0x11F1B0u;
label_11f1b0:
    // 0x11f1b0: 0xc048bb4  jal         func_122ED0
label_11f1b4:
    if (ctx->pc == 0x11F1B4u) {
        ctx->pc = 0x11F1B8u;
        goto label_11f1b8;
    }
    ctx->pc = 0x11F1B0u;
    SET_GPR_U32(ctx, 31, 0x11F1B8u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x11F1B0u, 0x11F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1B8u;
label_11f1b8:
    // 0x11f1b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f1bc:
    // 0x11f1bc: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x11f1bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_11f1c0:
    // 0x11f1c0: 0x8c450144  lw          $a1, 0x144($v0)
    ctx->pc = 0x11f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_11f1c4:
    // 0x11f1c4: 0xa0f809  jalr        $a1
label_11f1c8:
    if (ctx->pc == 0x11F1C8u) {
        ctx->pc = 0x11F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1C4u;
        // 0x11f1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1CCu;
        goto label_11f1cc;
    }
    ctx->pc = 0x11F1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F1CCu);
        ctx->pc = 0x11F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1C4u;
        // 0x11f1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F1C4u, 0x11F1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F1CCu;
label_11f1cc:
    // 0x11f1cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11f1d0:
    // 0x11f1d0: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x11f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_11f1d4:
    // 0x11f1d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11f1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11f1d8:
    // 0x11f1d8: 0x544001e9  bnel        $v0, $zero, . + 4 + (0x1E9 << 2)
label_11f1dc:
    if (ctx->pc == 0x11F1DCu) {
        ctx->pc = 0x11F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1D8u;
        // 0x11f1dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1E0u;
        goto label_11f1e0;
    }
    ctx->pc = 0x11F1D8u;
    {
        const bool branch_taken_0x11f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f1d8) {
            ctx->pc = 0x11F1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F1D8u;
            // 0x11f1dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F1E0u;
label_11f1e0:
    // 0x11f1e0: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x11f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_11f1e4:
    // 0x11f1e4: 0x50a001e6  beql        $a1, $zero, . + 4 + (0x1E6 << 2)
label_11f1e8:
    if (ctx->pc == 0x11F1E8u) {
        ctx->pc = 0x11F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1E4u;
        // 0x11f1e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1ECu;
        goto label_11f1ec;
    }
    ctx->pc = 0x11F1E4u;
    {
        const bool branch_taken_0x11f1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1e4) {
            ctx->pc = 0x11F1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F1E4u;
            // 0x11f1e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F1ECu;
label_11f1ec:
    // 0x11f1ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11f1f0:
    // 0x11f1f0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f1f4:
    // 0x11f1f4: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f1f8:
    // 0x11f1f8: 0x40f809  jalr        $v0
label_11f1fc:
    if (ctx->pc == 0x11F1FCu) {
        ctx->pc = 0x11F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F8u;
        // 0x11f1fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F200u;
        goto label_11f200;
    }
    ctx->pc = 0x11F1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F200u);
        ctx->pc = 0x11F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F8u;
        // 0x11f1fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F1F8u, 0x11F200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F200u;
label_11f200:
    // 0x11f200: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f204:
    // 0x11f204: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_11f208:
    if (ctx->pc == 0x11F208u) {
        ctx->pc = 0x11F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F204u;
        // 0x11f208: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F20Cu;
        goto label_11f20c;
    }
    ctx->pc = 0x11F204u;
    {
        const bool branch_taken_0x11f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f204) {
            ctx->pc = 0x11F208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F204u;
            // 0x11f208: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F21Cu;
            goto label_11f21c;
        }
    }
    ctx->pc = 0x11F20Cu;
label_11f20c:
    // 0x11f20c: 0xc049f04  jal         func_127C10
label_11f210:
    if (ctx->pc == 0x11F210u) {
        ctx->pc = 0x11F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F20Cu;
        // 0x11f210: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F214u;
        goto label_11f214;
    }
    ctx->pc = 0x11F20Cu;
    SET_GPR_U32(ctx, 31, 0x11F214u);
    ctx->pc = 0x11F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F20Cu;
    // 0x11f210: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x11F20Cu, 0x11F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F214u;
label_11f214:
    // 0x11f214: 0x100001da  b           . + 4 + (0x1DA << 2)
label_11f218:
    if (ctx->pc == 0x11F218u) {
        ctx->pc = 0x11F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F214u;
        // 0x11f218: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F21Cu;
        goto label_11f21c;
    }
    ctx->pc = 0x11F214u;
    {
        const bool branch_taken_0x11f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F214u;
        // 0x11f218: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f214) {
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F21Cu;
label_11f21c:
    // 0x11f21c: 0x50a001d8  beql        $a1, $zero, . + 4 + (0x1D8 << 2)
label_11f220:
    if (ctx->pc == 0x11F220u) {
        ctx->pc = 0x11F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F21Cu;
        // 0x11f220: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F224u;
        goto label_11f224;
    }
    ctx->pc = 0x11F21Cu;
    {
        const bool branch_taken_0x11f21c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f21c) {
            ctx->pc = 0x11F220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F21Cu;
            // 0x11f220: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F224u;
label_11f224:
    // 0x11f224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11f228:
    // 0x11f228: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f22c:
    // 0x11f22c: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f230:
    // 0x11f230: 0x40f809  jalr        $v0
label_11f234:
    if (ctx->pc == 0x11F234u) {
        ctx->pc = 0x11F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F230u;
        // 0x11f234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F238u;
        goto label_11f238;
    }
    ctx->pc = 0x11F230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F238u);
        ctx->pc = 0x11F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F230u;
        // 0x11f234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F230u, 0x11F238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F238u;
label_11f238:
    // 0x11f238: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11f238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f23c:
    // 0x11f23c: 0x544301d0  bnel        $v0, $v1, . + 4 + (0x1D0 << 2)
label_11f240:
    if (ctx->pc == 0x11F240u) {
        ctx->pc = 0x11F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F23Cu;
        // 0x11f240: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F244u;
        goto label_11f244;
    }
    ctx->pc = 0x11F23Cu;
    {
        const bool branch_taken_0x11f23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f23c) {
            ctx->pc = 0x11F240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F23Cu;
            // 0x11f240: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F244u;
label_11f244:
    // 0x11f244: 0xc04f39e  jal         func_13CE78
label_11f248:
    if (ctx->pc == 0x11F248u) {
        ctx->pc = 0x11F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F244u;
        // 0x11f248: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F24Cu;
        goto label_11f24c;
    }
    ctx->pc = 0x11F244u;
    SET_GPR_U32(ctx, 31, 0x11F24Cu);
    ctx->pc = 0x11F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F244u;
    // 0x11f248: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CE78u, 0x11F244u, 0x11F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F24Cu;
label_11f24c:
    // 0x11f24c: 0x100001cc  b           . + 4 + (0x1CC << 2)
label_11f250:
    if (ctx->pc == 0x11F250u) {
        ctx->pc = 0x11F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F24Cu;
        // 0x11f250: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F254u;
        goto label_11f254;
    }
    ctx->pc = 0x11F24Cu;
    {
        const bool branch_taken_0x11f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F24Cu;
        // 0x11f250: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f24c) {
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F254u;
label_11f254:
    // 0x11f254: 0xc047910  jal         func_11E440
label_11f258:
    if (ctx->pc == 0x11F258u) {
        ctx->pc = 0x11F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F254u;
        // 0x11f258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F25Cu;
        goto label_11f25c;
    }
    ctx->pc = 0x11F254u;
    SET_GPR_U32(ctx, 31, 0x11F25Cu);
    ctx->pc = 0x11F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F254u;
    // 0x11f258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x11F254u, 0x11F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F25Cu;
label_11f25c:
    // 0x11f25c: 0x26e29148  addiu       $v0, $s7, -0x6EB8
    ctx->pc = 0x11f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938952));
label_11f260:
    // 0x11f260: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11f260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_11f264:
    // 0x11f264: 0x24839150  addiu       $v1, $a0, -0x6EB0
    ctx->pc = 0x11f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938960));
label_11f268:
    // 0x11f268: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_11f26c:
    // 0x11f26c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_11f270:
    // 0x11f270: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x11f270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_11f274:
    // 0x11f274: 0x12400090  beqz        $s2, . + 4 + (0x90 << 2)
label_11f278:
    if (ctx->pc == 0x11F278u) {
        ctx->pc = 0x11F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F274u;
        // 0x11f278: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F27Cu;
        goto label_11f27c;
    }
    ctx->pc = 0x11F274u;
    {
        const bool branch_taken_0x11f274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F274u;
        // 0x11f278: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f274) {
            ctx->pc = 0x11F4B8u;
            goto label_11f4b8;
        }
    }
    ctx->pc = 0x11F27Cu;
label_11f27c:
    // 0x11f27c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f280:
    // 0x11f280: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11f280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11f284:
    // 0x11f284: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11f288:
    // 0x11f288: 0x40f809  jalr        $v0
label_11f28c:
    if (ctx->pc == 0x11F28Cu) {
        ctx->pc = 0x11F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F288u;
        // 0x11f28c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F290u;
        goto label_11f290;
    }
    ctx->pc = 0x11F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F290u);
        ctx->pc = 0x11F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F288u;
        // 0x11f28c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F288u, 0x11F290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F290u;
label_11f290:
    // 0x11f290: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_11f294:
    if (ctx->pc == 0x11F294u) {
        ctx->pc = 0x11F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F290u;
        // 0x11f294: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F298u;
        goto label_11f298;
    }
    ctx->pc = 0x11F290u;
    {
        const bool branch_taken_0x11f290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x11F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F290u;
        // 0x11f294: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f290) {
            ctx->pc = 0x11F2ACu;
            goto label_11f2ac;
        }
    }
    ctx->pc = 0x11F298u;
label_11f298:
    // 0x11f298: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f29c:
    // 0x11f29c: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x11f29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_11f2a0:
    // 0x11f2a0: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x11f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_11f2a4:
    // 0x11f2a4: 0x60f809  jalr        $v1
label_11f2a8:
    if (ctx->pc == 0x11F2A8u) {
        ctx->pc = 0x11F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2A4u;
        // 0x11f2a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F2ACu;
        goto label_11f2ac;
    }
    ctx->pc = 0x11F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F2ACu);
        ctx->pc = 0x11F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2A4u;
        // 0x11f2a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F2A4u, 0x11F2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F2ACu;
label_11f2ac:
    // 0x11f2ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f2b0:
    // 0x11f2b0: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x11f2b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_11f2b4:
    // 0x11f2b4: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x11f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_11f2b8:
    // 0x11f2b8: 0x60f809  jalr        $v1
label_11f2bc:
    if (ctx->pc == 0x11F2BCu) {
        ctx->pc = 0x11F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2B8u;
        // 0x11f2bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F2C0u;
        goto label_11f2c0;
    }
    ctx->pc = 0x11F2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F2C0u);
        ctx->pc = 0x11F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2B8u;
        // 0x11f2bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F2B8u, 0x11F2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F2C0u;
label_11f2c0:
    // 0x11f2c0: 0xc047e72  jal         func_11F9C8
label_11f2c4:
    if (ctx->pc == 0x11F2C4u) {
        ctx->pc = 0x11F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2C0u;
        // 0x11f2c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F2C8u;
        goto label_11f2c8;
    }
    ctx->pc = 0x11F2C0u;
    SET_GPR_U32(ctx, 31, 0x11F2C8u);
    ctx->pc = 0x11F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2C0u;
    // 0x11f2c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11F2C0u, 0x11F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2C8u;
label_11f2c8:
    // 0x11f2c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11f2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f2cc:
    // 0x11f2cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11f2d0:
    // 0x11f2d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11f2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f2d4:
    // 0x11f2d4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_11f2d8:
    if (ctx->pc == 0x11F2D8u) {
        ctx->pc = 0x11F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2D4u;
        // 0x11f2d8: 0x8c57b1d8  lw          $s7, -0x4E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F2DCu;
        goto label_11f2dc;
    }
    ctx->pc = 0x11F2D4u;
    {
        const bool branch_taken_0x11f2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2D4u;
        // 0x11f2d8: 0x8c57b1d8  lw          $s7, -0x4E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2d4) {
            ctx->pc = 0x11F38Cu;
            goto label_11f38c;
        }
    }
    ctx->pc = 0x11F2DCu;
label_11f2dc:
    // 0x11f2dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f2e0:
    // 0x11f2e0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f2e4:
    // 0x11f2e4: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f2e8:
    // 0x11f2e8: 0x40f809  jalr        $v0
label_11f2ec:
    if (ctx->pc == 0x11F2ECu) {
        ctx->pc = 0x11F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E8u;
        // 0x11f2ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F2F0u;
        goto label_11f2f0;
    }
    ctx->pc = 0x11F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F2F0u);
        ctx->pc = 0x11F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E8u;
        // 0x11f2ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F2E8u, 0x11F2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F2F0u;
label_11f2f0:
    // 0x11f2f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11f2f4:
    // 0x11f2f4: 0x50430027  beql        $v0, $v1, . + 4 + (0x27 << 2)
label_11f2f8:
    if (ctx->pc == 0x11F2F8u) {
        ctx->pc = 0x11F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2F4u;
        // 0x11f2f8: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F2FCu;
        goto label_11f2fc;
    }
    ctx->pc = 0x11F2F4u;
    {
        const bool branch_taken_0x11f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11f2f4) {
            ctx->pc = 0x11F2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F2F4u;
            // 0x11f2f8: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F394u;
            goto label_11f394;
        }
    }
    ctx->pc = 0x11F2FCu;
label_11f2fc:
    // 0x11f2fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f300:
    // 0x11f300: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f304:
    // 0x11f304: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f308:
    // 0x11f308: 0x40f809  jalr        $v0
label_11f30c:
    if (ctx->pc == 0x11F30Cu) {
        ctx->pc = 0x11F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F308u;
        // 0x11f30c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F310u;
        goto label_11f310;
    }
    ctx->pc = 0x11F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F310u);
        ctx->pc = 0x11F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F308u;
        // 0x11f30c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F308u, 0x11F310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F310u;
label_11f310:
    // 0x11f310: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11f310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11f314:
    // 0x11f314: 0x5043001f  beql        $v0, $v1, . + 4 + (0x1F << 2)
label_11f318:
    if (ctx->pc == 0x11F318u) {
        ctx->pc = 0x11F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F314u;
        // 0x11f318: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F31Cu;
        goto label_11f31c;
    }
    ctx->pc = 0x11F314u;
    {
        const bool branch_taken_0x11f314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11f314) {
            ctx->pc = 0x11F318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F314u;
            // 0x11f318: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F394u;
            goto label_11f394;
        }
    }
    ctx->pc = 0x11F31Cu;
label_11f31c:
    // 0x11f31c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f320:
    // 0x11f320: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f324:
    // 0x11f324: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f328:
    // 0x11f328: 0x40f809  jalr        $v0
label_11f32c:
    if (ctx->pc == 0x11F32Cu) {
        ctx->pc = 0x11F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F328u;
        // 0x11f32c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F330u;
        goto label_11f330;
    }
    ctx->pc = 0x11F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F330u);
        ctx->pc = 0x11F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F328u;
        // 0x11f32c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F328u, 0x11F330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F330u;
label_11f330:
    // 0x11f330: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11f330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11f334:
    // 0x11f334: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
label_11f338:
    if (ctx->pc == 0x11F338u) {
        ctx->pc = 0x11F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F334u;
        // 0x11f338: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F33Cu;
        goto label_11f33c;
    }
    ctx->pc = 0x11F334u;
    {
        const bool branch_taken_0x11f334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11f334) {
            ctx->pc = 0x11F338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F334u;
            // 0x11f338: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F394u;
            goto label_11f394;
        }
    }
    ctx->pc = 0x11F33Cu;
label_11f33c:
    // 0x11f33c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f340:
    // 0x11f340: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f344:
    // 0x11f344: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f348:
    // 0x11f348: 0x40f809  jalr        $v0
label_11f34c:
    if (ctx->pc == 0x11F34Cu) {
        ctx->pc = 0x11F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F348u;
        // 0x11f34c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F350u;
        goto label_11f350;
    }
    ctx->pc = 0x11F348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F350u);
        ctx->pc = 0x11F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F348u;
        // 0x11f34c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F348u, 0x11F350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F350u;
label_11f350:
    // 0x11f350: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x11f350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_11f354:
    // 0x11f354: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
label_11f358:
    if (ctx->pc == 0x11F358u) {
        ctx->pc = 0x11F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F354u;
        // 0x11f358: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F35Cu;
        goto label_11f35c;
    }
    ctx->pc = 0x11F354u;
    {
        const bool branch_taken_0x11f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11f354) {
            ctx->pc = 0x11F358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F354u;
            // 0x11f358: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F394u;
            goto label_11f394;
        }
    }
    ctx->pc = 0x11F35Cu;
label_11f35c:
    // 0x11f35c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f360:
    // 0x11f360: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f364:
    // 0x11f364: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f368:
    // 0x11f368: 0x40f809  jalr        $v0
label_11f36c:
    if (ctx->pc == 0x11F36Cu) {
        ctx->pc = 0x11F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F368u;
        // 0x11f36c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F370u;
        goto label_11f370;
    }
    ctx->pc = 0x11F368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F370u);
        ctx->pc = 0x11F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F368u;
        // 0x11f36c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F368u, 0x11F370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F370u;
label_11f370:
    // 0x11f370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f374:
    // 0x11f374: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_11f378:
    if (ctx->pc == 0x11F378u) {
        ctx->pc = 0x11F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F374u;
        // 0x11f378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F37Cu;
        goto label_11f37c;
    }
    ctx->pc = 0x11F374u;
    {
        const bool branch_taken_0x11f374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F374u;
        // 0x11f378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f374) {
            ctx->pc = 0x11F390u;
            goto label_11f390;
        }
    }
    ctx->pc = 0x11F37Cu;
label_11f37c:
    // 0x11f37c: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
label_11f380:
    if (ctx->pc == 0x11F380u) {
        ctx->pc = 0x11F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F37Cu;
        // 0x11f380: 0xae22b1d8  sw          $v0, -0x4E28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F384u;
        goto label_11f384;
    }
    ctx->pc = 0x11F37Cu;
    {
        const bool branch_taken_0x11f37c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f37c) {
            ctx->pc = 0x11F380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F37Cu;
            // 0x11f380: 0xae22b1d8  sw          $v0, -0x4E28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F394u;
            goto label_11f394;
        }
    }
    ctx->pc = 0x11F384u;
label_11f384:
    // 0x11f384: 0x10000003  b           . + 4 + (0x3 << 2)
label_11f388:
    if (ctx->pc == 0x11F388u) {
        ctx->pc = 0x11F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F384u;
        // 0x11f388: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F38Cu;
        goto label_11f38c;
    }
    ctx->pc = 0x11F384u;
    {
        const bool branch_taken_0x11f384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F384u;
        // 0x11f388: 0xae20b1d8  sw          $zero, -0x4E28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f384) {
            ctx->pc = 0x11F394u;
            goto label_11f394;
        }
    }
    ctx->pc = 0x11F38Cu;
label_11f38c:
    // 0x11f38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f390:
    // 0x11f390: 0xae22b1d8  sw          $v0, -0x4E28($s1)
    ctx->pc = 0x11f390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947288), GPR_U32(ctx, 2));
label_11f394:
    // 0x11f394: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_11f398:
    if (ctx->pc == 0x11F398u) {
        ctx->pc = 0x11F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F394u;
        // 0x11f398: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F39Cu;
        goto label_11f39c;
    }
    ctx->pc = 0x11F394u;
    {
        const bool branch_taken_0x11f394 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F394u;
        // 0x11f398: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f394) {
            ctx->pc = 0x11F3C8u;
            goto label_11f3c8;
        }
    }
    ctx->pc = 0x11F39Cu;
label_11f39c:
    // 0x11f39c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11f3a0:
    // 0x11f3a0: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x11f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_11f3a4:
    // 0x11f3a4: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x11f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_11f3a8:
    // 0x11f3a8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_11f3ac:
    if (ctx->pc == 0x11F3ACu) {
        ctx->pc = 0x11F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3A8u;
        // 0x11f3ac: 0x8e22b1d8  lw          $v0, -0x4E28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3B0u;
        goto label_11f3b0;
    }
    ctx->pc = 0x11F3A8u;
    {
        const bool branch_taken_0x11f3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3A8u;
        // 0x11f3ac: 0x8e22b1d8  lw          $v0, -0x4E28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3a8) {
            ctx->pc = 0x11F3C8u;
            goto label_11f3c8;
        }
    }
    ctx->pc = 0x11F3B0u;
label_11f3b0:
    // 0x11f3b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_11f3b4:
    if (ctx->pc == 0x11F3B4u) {
        ctx->pc = 0x11F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3B0u;
        // 0x11f3b4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3B8u;
        goto label_11f3b8;
    }
    ctx->pc = 0x11F3B0u;
    {
        const bool branch_taken_0x11f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3B0u;
        // 0x11f3b4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3b0) {
            ctx->pc = 0x11F3C8u;
            goto label_11f3c8;
        }
    }
    ctx->pc = 0x11F3B8u;
label_11f3b8:
    // 0x11f3b8: 0x8c62b1e8  lw          $v0, -0x4E18($v1)
    ctx->pc = 0x11f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947304)));
label_11f3bc:
    // 0x11f3bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_11f3c0:
    if (ctx->pc == 0x11F3C0u) {
        ctx->pc = 0x11F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3BCu;
        // 0x11f3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3C4u;
        goto label_11f3c4;
    }
    ctx->pc = 0x11F3BCu;
    {
        const bool branch_taken_0x11f3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3BCu;
        // 0x11f3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3bc) {
            ctx->pc = 0x11F3C8u;
            goto label_11f3c8;
        }
    }
    ctx->pc = 0x11F3C4u;
label_11f3c4:
    // 0x11f3c4: 0xac62b1e8  sw          $v0, -0x4E18($v1)
    ctx->pc = 0x11f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947304), GPR_U32(ctx, 2));
label_11f3c8:
    // 0x11f3c8: 0xc048bb4  jal         func_122ED0
label_11f3cc:
    if (ctx->pc == 0x11F3CCu) {
        ctx->pc = 0x11F3D0u;
        goto label_11f3d0;
    }
    ctx->pc = 0x11F3C8u;
    SET_GPR_U32(ctx, 31, 0x11F3D0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x11F3C8u, 0x11F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3D0u;
label_11f3d0:
    // 0x11f3d0: 0x52a0000a  beql        $s5, $zero, . + 4 + (0xA << 2)
label_11f3d4:
    if (ctx->pc == 0x11F3D4u) {
        ctx->pc = 0x11F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3D0u;
        // 0x11f3d4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3D8u;
        goto label_11f3d8;
    }
    ctx->pc = 0x11F3D0u;
    {
        const bool branch_taken_0x11f3d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f3d0) {
            ctx->pc = 0x11F3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F3D0u;
            // 0x11f3d4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F3FCu;
            goto label_11f3fc;
        }
    }
    ctx->pc = 0x11F3D8u;
label_11f3d8:
    // 0x11f3d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x11f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_11f3dc:
    // 0x11f3dc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f3e0:
    // 0x11f3e0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f3e4:
    // 0x11f3e4: 0x40f809  jalr        $v0
label_11f3e8:
    if (ctx->pc == 0x11F3E8u) {
        ctx->pc = 0x11F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3E4u;
        // 0x11f3e8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3ECu;
        goto label_11f3ec;
    }
    ctx->pc = 0x11F3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F3ECu);
        ctx->pc = 0x11F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3E4u;
        // 0x11f3e8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F3E4u, 0x11F3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F3ECu;
label_11f3ec:
    // 0x11f3ec: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x11f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_11f3f0:
    // 0x11f3f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_11f3f4:
    if (ctx->pc == 0x11F3F4u) {
        ctx->pc = 0x11F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3F0u;
        // 0x11f3f4: 0x8ea50210  lw          $a1, 0x210($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3F8u;
        goto label_11f3f8;
    }
    ctx->pc = 0x11F3F0u;
    {
        const bool branch_taken_0x11f3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f3f0) {
            ctx->pc = 0x11F3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F3F0u;
            // 0x11f3f4: 0x8ea50210  lw          $a1, 0x210($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F414u;
            goto label_11f414;
        }
    }
    ctx->pc = 0x11F3F8u;
label_11f3f8:
    // 0x11f3f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f3fc:
    // 0x11f3fc: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x11f3fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_11f400:
    // 0x11f400: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x11f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_11f404:
    // 0x11f404: 0x60f809  jalr        $v1
label_11f408:
    if (ctx->pc == 0x11F408u) {
        ctx->pc = 0x11F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F404u;
        // 0x11f408: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F40Cu;
        goto label_11f40c;
    }
    ctx->pc = 0x11F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F40Cu);
        ctx->pc = 0x11F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F404u;
        // 0x11f408: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F404u, 0x11F40Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F40Cu;
label_11f40c:
    // 0x11f40c: 0x1000000d  b           . + 4 + (0xD << 2)
label_11f410:
    if (ctx->pc == 0x11F410u) {
        ctx->pc = 0x11F414u;
        goto label_11f414;
    }
    ctx->pc = 0x11F40Cu;
    {
        const bool branch_taken_0x11f40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f40c) {
            ctx->pc = 0x11F444u;
            goto label_11f444;
        }
    }
    ctx->pc = 0x11F414u;
label_11f414:
    // 0x11f414: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_11f418:
    if (ctx->pc == 0x11F418u) {
        ctx->pc = 0x11F41Cu;
        goto label_11f41c;
    }
    ctx->pc = 0x11F414u;
    {
        const bool branch_taken_0x11f414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f414) {
            ctx->pc = 0x11F444u;
            goto label_11f444;
        }
    }
    ctx->pc = 0x11F41Cu;
label_11f41c:
    // 0x11f41c: 0x10b50009  beq         $a1, $s5, . + 4 + (0x9 << 2)
label_11f420:
    if (ctx->pc == 0x11F420u) {
        ctx->pc = 0x11F424u;
        goto label_11f424;
    }
    ctx->pc = 0x11F41Cu;
    {
        const bool branch_taken_0x11f41c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        if (branch_taken_0x11f41c) {
            ctx->pc = 0x11F444u;
            goto label_11f444;
        }
    }
    ctx->pc = 0x11F424u;
label_11f424:
    // 0x11f424: 0x8ea20214  lw          $v0, 0x214($s5)
    ctx->pc = 0x11f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 532)));
label_11f428:
    // 0x11f428: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_11f42c:
    if (ctx->pc == 0x11F42Cu) {
        ctx->pc = 0x11F430u;
        goto label_11f430;
    }
    ctx->pc = 0x11F428u;
    {
        const bool branch_taken_0x11f428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f428) {
            ctx->pc = 0x11F444u;
            goto label_11f444;
        }
    }
    ctx->pc = 0x11F430u;
label_11f430:
    // 0x11f430: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11f434:
    // 0x11f434: 0x84440150  lh          $a0, 0x150($v0)
    ctx->pc = 0x11f434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 336)));
label_11f438:
    // 0x11f438: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x11f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_11f43c:
    // 0x11f43c: 0x60f809  jalr        $v1
label_11f440:
    if (ctx->pc == 0x11F440u) {
        ctx->pc = 0x11F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F43Cu;
        // 0x11f440: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F444u;
        goto label_11f444;
    }
    ctx->pc = 0x11F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F444u);
        ctx->pc = 0x11F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F43Cu;
        // 0x11f440: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F43Cu, 0x11F444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F444u;
label_11f444:
    // 0x11f444: 0x16e0001d  bnez        $s7, . + 4 + (0x1D << 2)
label_11f448:
    if (ctx->pc == 0x11F448u) {
        ctx->pc = 0x11F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F444u;
        // 0x11f448: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F44Cu;
        goto label_11f44c;
    }
    ctx->pc = 0x11F444u;
    {
        const bool branch_taken_0x11f444 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F444u;
        // 0x11f448: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f444) {
            ctx->pc = 0x11F4BCu;
            goto label_11f4bc;
        }
    }
    ctx->pc = 0x11F44Cu;
label_11f44c:
    // 0x11f44c: 0x8e23b1d8  lw          $v1, -0x4E28($s1)
    ctx->pc = 0x11f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947288)));
label_11f450:
    // 0x11f450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f454:
    // 0x11f454: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_11f458:
    if (ctx->pc == 0x11F458u) {
        ctx->pc = 0x11F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F454u;
        // 0x11f458: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F45Cu;
        goto label_11f45c;
    }
    ctx->pc = 0x11F454u;
    {
        const bool branch_taken_0x11f454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F454u;
        // 0x11f458: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f454) {
            ctx->pc = 0x11F4BCu;
            goto label_11f4bc;
        }
    }
    ctx->pc = 0x11F45Cu;
label_11f45c:
    // 0x11f45c: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x11f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_11f460:
    // 0x11f460: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11f460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f464:
    // 0x11f464: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11f464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_11f468:
    // 0x11f468: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11f468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11f46c:
    // 0x11f46c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_11f470:
    if (ctx->pc == 0x11F470u) {
        ctx->pc = 0x11F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F46Cu;
        // 0x11f470: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F474u;
        goto label_11f474;
    }
    ctx->pc = 0x11F46Cu;
    {
        const bool branch_taken_0x11f46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F46Cu;
        // 0x11f470: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f46c) {
            ctx->pc = 0x11F4B8u;
            goto label_11f4b8;
        }
    }
    ctx->pc = 0x11F474u;
label_11f474:
    // 0x11f474: 0x24429148  addiu       $v0, $v0, -0x6EB8
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938952));
label_11f478:
    // 0x11f478: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x11f478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_11f47c:
    // 0x11f47c: 0x0  nop
    ctx->pc = 0x11f47cu;
    // NOP
label_11f480:
    // 0x11f480: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11f480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11f484:
    // 0x11f484: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_11f488:
    if (ctx->pc == 0x11F488u) {
        ctx->pc = 0x11F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F484u;
        // 0x11f488: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F48Cu;
        goto label_11f48c;
    }
    ctx->pc = 0x11F484u;
    {
        const bool branch_taken_0x11f484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F484u;
        // 0x11f488: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f484) {
            ctx->pc = 0x11F4A4u;
            goto label_11f4a4;
        }
    }
    ctx->pc = 0x11F48Cu;
label_11f48c:
    // 0x11f48c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11f490:
    // 0x11f490: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x11f490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_11f494:
    // 0x11f494: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x11f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_11f498:
    // 0x11f498: 0x60f809  jalr        $v1
label_11f49c:
    if (ctx->pc == 0x11F49Cu) {
        ctx->pc = 0x11F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F498u;
        // 0x11f49c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F4A0u;
        goto label_11f4a0;
    }
    ctx->pc = 0x11F498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F4A0u);
        ctx->pc = 0x11F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F498u;
        // 0x11f49c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F498u, 0x11F4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F4A0u;
label_11f4a0:
    // 0x11f4a0: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x11f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_11f4a4:
    // 0x11f4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11f4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11f4a8:
    // 0x11f4a8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11f4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_11f4ac:
    // 0x11f4ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11f4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11f4b0:
    // 0x11f4b0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_11f4b4:
    if (ctx->pc == 0x11F4B4u) {
        ctx->pc = 0x11F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4B0u;
        // 0x11f4b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F4B8u;
        goto label_11f4b8;
    }
    ctx->pc = 0x11F4B0u;
    {
        const bool branch_taken_0x11f4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4B0u;
        // 0x11f4b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4b0) {
            ctx->pc = 0x11F480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f480;
        }
    }
    ctx->pc = 0x11F4B8u;
label_11f4b8:
    // 0x11f4b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11f4bc:
    // 0x11f4bc: 0x8c62b198  lw          $v0, -0x4E68($v1)
    ctx->pc = 0x11f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_11f4c0:
    // 0x11f4c0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_11f4c4:
    if (ctx->pc == 0x11F4C4u) {
        ctx->pc = 0x11F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4C0u;
        // 0x11f4c4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F4C8u;
        goto label_11f4c8;
    }
    ctx->pc = 0x11F4C0u;
    {
        const bool branch_taken_0x11f4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f4c0) {
            ctx->pc = 0x11F4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F4C0u;
            // 0x11f4c4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F53Cu;
            goto label_11f53c;
        }
    }
    ctx->pc = 0x11F4C8u;
label_11f4c8:
    // 0x11f4c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f4cc:
    // 0x11f4cc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f4d0:
    // 0x11f4d0: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f4d4:
    // 0x11f4d4: 0x40f809  jalr        $v0
label_11f4d8:
    if (ctx->pc == 0x11F4D8u) {
        ctx->pc = 0x11F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4D4u;
        // 0x11f4d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F4DCu;
        goto label_11f4dc;
    }
    ctx->pc = 0x11F4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F4DCu);
        ctx->pc = 0x11F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4D4u;
        // 0x11f4d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F4D4u, 0x11F4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F4DCu;
label_11f4dc:
    // 0x11f4dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f4e0:
    // 0x11f4e0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_11f4e4:
    if (ctx->pc == 0x11F4E4u) {
        ctx->pc = 0x11F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4E0u;
        // 0x11f4e4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F4E8u;
        goto label_11f4e8;
    }
    ctx->pc = 0x11F4E0u;
    {
        const bool branch_taken_0x11f4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4E0u;
        // 0x11f4e4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4e0) {
            ctx->pc = 0x11F508u;
            goto label_11f508;
        }
    }
    ctx->pc = 0x11F4E8u;
label_11f4e8:
    // 0x11f4e8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f4ec:
    // 0x11f4ec: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f4f0:
    // 0x11f4f0: 0x40f809  jalr        $v0
label_11f4f4:
    if (ctx->pc == 0x11F4F4u) {
        ctx->pc = 0x11F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4F0u;
        // 0x11f4f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F4F8u;
        goto label_11f4f8;
    }
    ctx->pc = 0x11F4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F4F8u);
        ctx->pc = 0x11F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4F0u;
        // 0x11f4f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F4F0u, 0x11F4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F4F8u;
label_11f4f8:
    // 0x11f4f8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f4fc:
    // 0x11f4fc: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_11f500:
    if (ctx->pc == 0x11F500u) {
        ctx->pc = 0x11F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4FCu;
        // 0x11f500: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F504u;
        goto label_11f504;
    }
    ctx->pc = 0x11F4FCu;
    {
        const bool branch_taken_0x11f4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f4fc) {
            ctx->pc = 0x11F500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F4FCu;
            // 0x11f500: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F53Cu;
            goto label_11f53c;
        }
    }
    ctx->pc = 0x11F504u;
label_11f504:
    // 0x11f504: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f508:
    // 0x11f508: 0x84640280  lh          $a0, 0x280($v1)
    ctx->pc = 0x11f508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 640)));
label_11f50c:
    // 0x11f50c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x11f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_11f510:
    // 0x11f510: 0x40f809  jalr        $v0
label_11f514:
    if (ctx->pc == 0x11F514u) {
        ctx->pc = 0x11F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F510u;
        // 0x11f514: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F518u;
        goto label_11f518;
    }
    ctx->pc = 0x11F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F518u);
        ctx->pc = 0x11F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F510u;
        // 0x11f514: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F510u, 0x11F518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F518u;
label_11f518:
    // 0x11f518: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_11f51c:
    if (ctx->pc == 0x11F51Cu) {
        ctx->pc = 0x11F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F518u;
        // 0x11f51c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F520u;
        goto label_11f520;
    }
    ctx->pc = 0x11F518u;
    {
        const bool branch_taken_0x11f518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f518) {
            ctx->pc = 0x11F51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F518u;
            // 0x11f51c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F53Cu;
            goto label_11f53c;
        }
    }
    ctx->pc = 0x11F520u;
label_11f520:
    // 0x11f520: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11f524:
    // 0x11f524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f528:
    // 0x11f528: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x11f528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_11f52c:
    // 0x11f52c: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x11f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_11f530:
    // 0x11f530: 0x60f809  jalr        $v1
label_11f534:
    if (ctx->pc == 0x11F534u) {
        ctx->pc = 0x11F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F530u;
        // 0x11f534: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F538u;
        goto label_11f538;
    }
    ctx->pc = 0x11F530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F538u);
        ctx->pc = 0x11F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F530u;
        // 0x11f534: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F530u, 0x11F538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F538u;
label_11f538:
    // 0x11f538: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11f538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11f53c:
    // 0x11f53c: 0x8c83b198  lw          $v1, -0x4E68($a0)
    ctx->pc = 0x11f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947224)));
label_11f540:
    // 0x11f540: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11f540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11f544:
    // 0x11f544: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x11f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_11f548:
    // 0x11f548: 0x106200bd  beq         $v1, $v0, . + 4 + (0xBD << 2)
label_11f54c:
    if (ctx->pc == 0x11F54Cu) {
        ctx->pc = 0x11F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F548u;
        // 0x11f54c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F550u;
        goto label_11f550;
    }
    ctx->pc = 0x11F548u;
    {
        const bool branch_taken_0x11f548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F548u;
        // 0x11f54c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f548) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F550u;
label_11f550:
    // 0x11f550: 0x8c43b1e8  lw          $v1, -0x4E18($v0)
    ctx->pc = 0x11f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947304)));
label_11f554:
    // 0x11f554: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
label_11f558:
    if (ctx->pc == 0x11F558u) {
        ctx->pc = 0x11F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F554u;
        // 0x11f558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F55Cu;
        goto label_11f55c;
    }
    ctx->pc = 0x11F554u;
    {
        const bool branch_taken_0x11f554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F554u;
        // 0x11f558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f554) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F55Cu;
label_11f55c:
    // 0x11f55c: 0x16620064  bne         $s3, $v0, . + 4 + (0x64 << 2)
label_11f560:
    if (ctx->pc == 0x11F560u) {
        ctx->pc = 0x11F564u;
        goto label_11f564;
    }
    ctx->pc = 0x11F55Cu;
    {
        const bool branch_taken_0x11f55c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f55c) {
            ctx->pc = 0x11F6F0u;
            goto label_11f6f0;
        }
    }
    ctx->pc = 0x11F564u;
label_11f564:
    // 0x11f564: 0xc047e6c  jal         func_11F9B0
label_11f568:
    if (ctx->pc == 0x11F568u) {
        ctx->pc = 0x11F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F564u;
        // 0x11f568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F56Cu;
        goto label_11f56c;
    }
    ctx->pc = 0x11F564u;
    SET_GPR_U32(ctx, 31, 0x11F56Cu);
    ctx->pc = 0x11F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F564u;
    // 0x11f568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11F564u, 0x11F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F56Cu;
label_11f56c:
    // 0x11f56c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_11f570:
    if (ctx->pc == 0x11F570u) {
        ctx->pc = 0x11F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F56Cu;
        // 0x11f570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F574u;
        goto label_11f574;
    }
    ctx->pc = 0x11F56Cu;
    {
        const bool branch_taken_0x11f56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F56Cu;
        // 0x11f570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f56c) {
            ctx->pc = 0x11F6F0u;
            goto label_11f6f0;
        }
    }
    ctx->pc = 0x11F574u;
label_11f574:
    // 0x11f574: 0xc047e6c  jal         func_11F9B0
label_11f578:
    if (ctx->pc == 0x11F578u) {
        ctx->pc = 0x11F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F574u;
        // 0x11f578: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F57Cu;
        goto label_11f57c;
    }
    ctx->pc = 0x11F574u;
    SET_GPR_U32(ctx, 31, 0x11F57Cu);
    ctx->pc = 0x11F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F574u;
    // 0x11f578: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11F574u, 0x11F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F57Cu;
label_11f57c:
    // 0x11f57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f580:
    // 0x11f580: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f584:
    // 0x11f584: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f588:
    // 0x11f588: 0xa0f809  jalr        $a1
label_11f58c:
    if (ctx->pc == 0x11F58Cu) {
        ctx->pc = 0x11F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F588u;
        // 0x11f58c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F590u;
        goto label_11f590;
    }
    ctx->pc = 0x11F588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F590u);
        ctx->pc = 0x11F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F588u;
        // 0x11f58c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F588u, 0x11F590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F590u;
label_11f590:
    // 0x11f590: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_11f594:
    if (ctx->pc == 0x11F594u) {
        ctx->pc = 0x11F598u;
        goto label_11f598;
    }
    ctx->pc = 0x11F590u;
    {
        const bool branch_taken_0x11f590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x11f590) {
            ctx->pc = 0x11F5C0u;
            goto label_11f5c0;
        }
    }
    ctx->pc = 0x11F598u;
label_11f598:
    // 0x11f598: 0xc047e6c  jal         func_11F9B0
label_11f59c:
    if (ctx->pc == 0x11F59Cu) {
        ctx->pc = 0x11F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F598u;
        // 0x11f59c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F5A0u;
        goto label_11f5a0;
    }
    ctx->pc = 0x11F598u;
    SET_GPR_U32(ctx, 31, 0x11F5A0u);
    ctx->pc = 0x11F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F598u;
    // 0x11f59c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11F598u, 0x11F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5A0u;
label_11f5a0:
    // 0x11f5a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f5a4:
    // 0x11f5a4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f5a8:
    // 0x11f5a8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f5ac:
    // 0x11f5ac: 0xa0f809  jalr        $a1
label_11f5b0:
    if (ctx->pc == 0x11F5B0u) {
        ctx->pc = 0x11F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5ACu;
        // 0x11f5b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F5B4u;
        goto label_11f5b4;
    }
    ctx->pc = 0x11F5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F5B4u);
        ctx->pc = 0x11F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5ACu;
        // 0x11f5b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5ACu, 0x11F5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F5B4u;
label_11f5b4:
    // 0x11f5b4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f5b8:
    // 0x11f5b8: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
label_11f5bc:
    if (ctx->pc == 0x11F5BCu) {
        ctx->pc = 0x11F5C0u;
        goto label_11f5c0;
    }
    ctx->pc = 0x11F5B8u;
    {
        const bool branch_taken_0x11f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f5b8) {
            ctx->pc = 0x11F6F0u;
            goto label_11f6f0;
        }
    }
    ctx->pc = 0x11F5C0u;
label_11f5c0:
    // 0x11f5c0: 0xc047e6c  jal         func_11F9B0
label_11f5c4:
    if (ctx->pc == 0x11F5C4u) {
        ctx->pc = 0x11F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5C0u;
        // 0x11f5c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F5C8u;
        goto label_11f5c8;
    }
    ctx->pc = 0x11F5C0u;
    SET_GPR_U32(ctx, 31, 0x11F5C8u);
    ctx->pc = 0x11F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5C0u;
    // 0x11f5c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11F5C0u, 0x11F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5C8u;
label_11f5c8:
    // 0x11f5c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f5cc:
    // 0x11f5cc: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11f5d0:
    // 0x11f5d0: 0x8c65027c  lw          $a1, 0x27C($v1)
    ctx->pc = 0x11f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11f5d4:
    // 0x11f5d4: 0xa0f809  jalr        $a1
label_11f5d8:
    if (ctx->pc == 0x11F5D8u) {
        ctx->pc = 0x11F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5D4u;
        // 0x11f5d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F5DCu;
        goto label_11f5dc;
    }
    ctx->pc = 0x11F5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F5DCu);
        ctx->pc = 0x11F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5D4u;
        // 0x11f5d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5D4u, 0x11F5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F5DCu;
label_11f5dc:
    // 0x11f5dc: 0x14530044  bne         $v0, $s3, . + 4 + (0x44 << 2)
label_11f5e0:
    if (ctx->pc == 0x11F5E0u) {
        ctx->pc = 0x11F5E4u;
        goto label_11f5e4;
    }
    ctx->pc = 0x11F5DCu;
    {
        const bool branch_taken_0x11f5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x11f5dc) {
            ctx->pc = 0x11F6F0u;
            goto label_11f6f0;
        }
    }
    ctx->pc = 0x11F5E4u;
label_11f5e4:
    // 0x11f5e4: 0xc047e6c  jal         func_11F9B0
label_11f5e8:
    if (ctx->pc == 0x11F5E8u) {
        ctx->pc = 0x11F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5E4u;
        // 0x11f5e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F5ECu;
        goto label_11f5ec;
    }
    ctx->pc = 0x11F5E4u;
    SET_GPR_U32(ctx, 31, 0x11F5ECu);
    ctx->pc = 0x11F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5E4u;
    // 0x11f5e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11F5E4u, 0x11F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5ECu;
label_11f5ec:
    // 0x11f5ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f5f0:
    // 0x11f5f0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f5f4:
    // 0x11f5f4: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f5f8:
    // 0x11f5f8: 0xa0f809  jalr        $a1
label_11f5fc:
    if (ctx->pc == 0x11F5FCu) {
        ctx->pc = 0x11F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5F8u;
        // 0x11f5fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F600u;
        goto label_11f600;
    }
    ctx->pc = 0x11F5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F600u);
        ctx->pc = 0x11F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5F8u;
        // 0x11f5fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5F8u, 0x11F600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F600u;
label_11f600:
    // 0x11f600: 0x1450001a  bne         $v0, $s0, . + 4 + (0x1A << 2)
label_11f604:
    if (ctx->pc == 0x11F604u) {
        ctx->pc = 0x11F608u;
        goto label_11f608;
    }
    ctx->pc = 0x11F600u;
    {
        const bool branch_taken_0x11f600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x11f600) {
            ctx->pc = 0x11F66Cu;
            goto label_11f66c;
        }
    }
    ctx->pc = 0x11F608u;
label_11f608:
    // 0x11f608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f60c:
    // 0x11f60c: 0xc047e78  jal         func_11F9E0
label_11f610:
    if (ctx->pc == 0x11F610u) {
        ctx->pc = 0x11F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F60Cu;
        // 0x11f610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F614u;
        goto label_11f614;
    }
    ctx->pc = 0x11F60Cu;
    SET_GPR_U32(ctx, 31, 0x11F614u);
    ctx->pc = 0x11F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F60Cu;
    // 0x11f610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F60Cu, 0x11F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F614u;
label_11f614:
    // 0x11f614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f618:
    // 0x11f618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f61c:
    // 0x11f61c: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f61cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f620:
    // 0x11f620: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f624:
    // 0x11f624: 0xc0f809  jalr        $a2
label_11f628:
    if (ctx->pc == 0x11F628u) {
        ctx->pc = 0x11F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F624u;
        // 0x11f628: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F62Cu;
        goto label_11f62c;
    }
    ctx->pc = 0x11F624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F62Cu);
        ctx->pc = 0x11F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F624u;
        // 0x11f628: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F624u, 0x11F62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F62Cu;
label_11f62c:
    // 0x11f62c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f630:
    // 0x11f630: 0xc047e78  jal         func_11F9E0
label_11f634:
    if (ctx->pc == 0x11F634u) {
        ctx->pc = 0x11F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F630u;
        // 0x11f634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F638u;
        goto label_11f638;
    }
    ctx->pc = 0x11F630u;
    SET_GPR_U32(ctx, 31, 0x11F638u);
    ctx->pc = 0x11F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F630u;
    // 0x11f634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F630u, 0x11F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F638u;
label_11f638:
    // 0x11f638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f63c:
    // 0x11f63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f640:
    // 0x11f640: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f644:
    // 0x11f644: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f648:
    // 0x11f648: 0xc0f809  jalr        $a2
label_11f64c:
    if (ctx->pc == 0x11F64Cu) {
        ctx->pc = 0x11F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F648u;
        // 0x11f64c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F650u;
        goto label_11f650;
    }
    ctx->pc = 0x11F648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F650u);
        ctx->pc = 0x11F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F648u;
        // 0x11f64c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F648u, 0x11F650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F650u;
label_11f650:
    // 0x11f650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f654:
    // 0x11f654: 0xc047e78  jal         func_11F9E0
label_11f658:
    if (ctx->pc == 0x11F658u) {
        ctx->pc = 0x11F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F654u;
        // 0x11f658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F65Cu;
        goto label_11f65c;
    }
    ctx->pc = 0x11F654u;
    SET_GPR_U32(ctx, 31, 0x11F65Cu);
    ctx->pc = 0x11F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F654u;
    // 0x11f658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F654u, 0x11F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F65Cu;
label_11f65c:
    // 0x11f65c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11f660:
    // 0x11f660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f664:
    // 0x11f664: 0x10000055  b           . + 4 + (0x55 << 2)
label_11f668:
    if (ctx->pc == 0x11F668u) {
        ctx->pc = 0x11F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F664u;
        // 0x11f668: 0xac629150  sw          $v0, -0x6EB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F66Cu;
        goto label_11f66c;
    }
    ctx->pc = 0x11F664u;
    {
        const bool branch_taken_0x11f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F664u;
        // 0x11f668: 0xac629150  sw          $v0, -0x6EB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f664) {
            ctx->pc = 0x11F7BCu;
            goto label_11f7bc;
        }
    }
    ctx->pc = 0x11F66Cu;
label_11f66c:
    // 0x11f66c: 0xc047e6c  jal         func_11F9B0
label_11f670:
    if (ctx->pc == 0x11F670u) {
        ctx->pc = 0x11F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F66Cu;
        // 0x11f670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F674u;
        goto label_11f674;
    }
    ctx->pc = 0x11F66Cu;
    SET_GPR_U32(ctx, 31, 0x11F674u);
    ctx->pc = 0x11F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F66Cu;
    // 0x11f670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11F66Cu, 0x11F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F674u;
label_11f674:
    // 0x11f674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f678:
    // 0x11f678: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f67c:
    // 0x11f67c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f680:
    // 0x11f680: 0xa0f809  jalr        $a1
label_11f684:
    if (ctx->pc == 0x11F684u) {
        ctx->pc = 0x11F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F680u;
        // 0x11f684: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F688u;
        goto label_11f688;
    }
    ctx->pc = 0x11F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F688u);
        ctx->pc = 0x11F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F680u;
        // 0x11f684: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F680u, 0x11F688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F688u;
label_11f688:
    // 0x11f688: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f68c:
    // 0x11f68c: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
label_11f690:
    if (ctx->pc == 0x11F690u) {
        ctx->pc = 0x11F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F68Cu;
        // 0x11f690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F694u;
        goto label_11f694;
    }
    ctx->pc = 0x11F68Cu;
    {
        const bool branch_taken_0x11f68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F68Cu;
        // 0x11f690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f68c) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F694u;
label_11f694:
    // 0x11f694: 0xc047eec  jal         func_11FBB0
label_11f698:
    if (ctx->pc == 0x11F698u) {
        ctx->pc = 0x11F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F694u;
        // 0x11f698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F69Cu;
        goto label_11f69c;
    }
    ctx->pc = 0x11F694u;
    SET_GPR_U32(ctx, 31, 0x11F69Cu);
    ctx->pc = 0x11F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F694u;
    // 0x11f698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F694u, 0x11F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F69Cu;
label_11f69c:
    // 0x11f69c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f6a0:
    // 0x11f6a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f6a4:
    // 0x11f6a4: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f6a8:
    // 0x11f6a8: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f6ac:
    // 0x11f6ac: 0xc0f809  jalr        $a2
label_11f6b0:
    if (ctx->pc == 0x11F6B0u) {
        ctx->pc = 0x11F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6ACu;
        // 0x11f6b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6B4u;
        goto label_11f6b4;
    }
    ctx->pc = 0x11F6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F6B4u);
        ctx->pc = 0x11F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6ACu;
        // 0x11f6b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F6ACu, 0x11F6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F6B4u;
label_11f6b4:
    // 0x11f6b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f6b8:
    // 0x11f6b8: 0xc047eec  jal         func_11FBB0
label_11f6bc:
    if (ctx->pc == 0x11F6BCu) {
        ctx->pc = 0x11F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6B8u;
        // 0x11f6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6C0u;
        goto label_11f6c0;
    }
    ctx->pc = 0x11F6B8u;
    SET_GPR_U32(ctx, 31, 0x11F6C0u);
    ctx->pc = 0x11F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F6B8u;
    // 0x11f6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F6B8u, 0x11F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6C0u;
label_11f6c0:
    // 0x11f6c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f6c4:
    // 0x11f6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f6c8:
    // 0x11f6c8: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f6cc:
    // 0x11f6cc: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f6d0:
    // 0x11f6d0: 0xc0f809  jalr        $a2
label_11f6d4:
    if (ctx->pc == 0x11F6D4u) {
        ctx->pc = 0x11F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6D0u;
        // 0x11f6d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6D8u;
        goto label_11f6d8;
    }
    ctx->pc = 0x11F6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F6D8u);
        ctx->pc = 0x11F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6D0u;
        // 0x11f6d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F6D0u, 0x11F6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F6D8u;
label_11f6d8:
    // 0x11f6d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f6dc:
    // 0x11f6dc: 0xc047eec  jal         func_11FBB0
label_11f6e0:
    if (ctx->pc == 0x11F6E0u) {
        ctx->pc = 0x11F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6DCu;
        // 0x11f6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6E4u;
        goto label_11f6e4;
    }
    ctx->pc = 0x11F6DCu;
    SET_GPR_U32(ctx, 31, 0x11F6E4u);
    ctx->pc = 0x11F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F6DCu;
    // 0x11f6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F6DCu, 0x11F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F6E4u;
label_11f6e4:
    // 0x11f6e4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_11f6e8:
    // 0x11f6e8: 0x10000055  b           . + 4 + (0x55 << 2)
label_11f6ec:
    if (ctx->pc == 0x11F6ECu) {
        ctx->pc = 0x11F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6E8u;
        // 0x11f6ec: 0xac829150  sw          $v0, -0x6EB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F6F0u;
        goto label_11f6f0;
    }
    ctx->pc = 0x11F6E8u;
    {
        const bool branch_taken_0x11f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6E8u;
        // 0x11f6ec: 0xac829150  sw          $v0, -0x6EB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6e8) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F6F0u;
label_11f6f0:
    // 0x11f6f0: 0x16600053  bnez        $s3, . + 4 + (0x53 << 2)
label_11f6f4:
    if (ctx->pc == 0x11F6F4u) {
        ctx->pc = 0x11F6F8u;
        goto label_11f6f8;
    }
    ctx->pc = 0x11F6F0u;
    {
        const bool branch_taken_0x11f6f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f6f0) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F6F8u;
label_11f6f8:
    // 0x11f6f8: 0x12800051  beqz        $s4, . + 4 + (0x51 << 2)
label_11f6fc:
    if (ctx->pc == 0x11F6FCu) {
        ctx->pc = 0x11F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6F8u;
        // 0x11f6fc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F700u;
        goto label_11f700;
    }
    ctx->pc = 0x11F6F8u;
    {
        const bool branch_taken_0x11f6f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6F8u;
        // 0x11f6fc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6f8) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F700u;
label_11f700:
    // 0x11f700: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x11f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11f704:
    // 0x11f704: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f708:
    // 0x11f708: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f70c:
    // 0x11f70c: 0x40f809  jalr        $v0
label_11f710:
    if (ctx->pc == 0x11F710u) {
        ctx->pc = 0x11F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F70Cu;
        // 0x11f710: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F714u;
        goto label_11f714;
    }
    ctx->pc = 0x11F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F714u);
        ctx->pc = 0x11F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F70Cu;
        // 0x11f710: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F70Cu, 0x11F714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F714u;
label_11f714:
    // 0x11f714: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_11f718:
    if (ctx->pc == 0x11F718u) {
        ctx->pc = 0x11F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F714u;
        // 0x11f718: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F71Cu;
        goto label_11f71c;
    }
    ctx->pc = 0x11F714u;
    {
        const bool branch_taken_0x11f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F714u;
        // 0x11f718: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f714) {
            ctx->pc = 0x11F73Cu;
            goto label_11f73c;
        }
    }
    ctx->pc = 0x11F71Cu;
label_11f71c:
    // 0x11f71c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f71cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f720:
    // 0x11f720: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f724:
    // 0x11f724: 0x40f809  jalr        $v0
label_11f728:
    if (ctx->pc == 0x11F728u) {
        ctx->pc = 0x11F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F724u;
        // 0x11f728: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F72Cu;
        goto label_11f72c;
    }
    ctx->pc = 0x11F724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F72Cu);
        ctx->pc = 0x11F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F724u;
        // 0x11f728: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F724u, 0x11F72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F72Cu;
label_11f72c:
    // 0x11f72c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f730:
    // 0x11f730: 0x14430043  bne         $v0, $v1, . + 4 + (0x43 << 2)
label_11f734:
    if (ctx->pc == 0x11F734u) {
        ctx->pc = 0x11F738u;
        goto label_11f738;
    }
    ctx->pc = 0x11F730u;
    {
        const bool branch_taken_0x11f730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f730) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F738u;
label_11f738:
    // 0x11f738: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x11f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11f73c:
    // 0x11f73c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11f73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11f740:
    // 0x11f740: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11f744:
    // 0x11f744: 0x40f809  jalr        $v0
label_11f748:
    if (ctx->pc == 0x11F748u) {
        ctx->pc = 0x11F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F744u;
        // 0x11f748: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F74Cu;
        goto label_11f74c;
    }
    ctx->pc = 0x11F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F74Cu);
        ctx->pc = 0x11F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F744u;
        // 0x11f748: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F744u, 0x11F74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F74Cu;
label_11f74c:
    // 0x11f74c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_11f750:
    if (ctx->pc == 0x11F750u) {
        ctx->pc = 0x11F754u;
        goto label_11f754;
    }
    ctx->pc = 0x11F74Cu;
    {
        const bool branch_taken_0x11f74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f74c) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F754u;
label_11f754:
    // 0x11f754: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x11f754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_11f758:
    // 0x11f758: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f75c:
    // 0x11f75c: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f760:
    // 0x11f760: 0x40f809  jalr        $v0
label_11f764:
    if (ctx->pc == 0x11F764u) {
        ctx->pc = 0x11F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F760u;
        // 0x11f764: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F768u;
        goto label_11f768;
    }
    ctx->pc = 0x11F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F768u);
        ctx->pc = 0x11F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F760u;
        // 0x11f764: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F760u, 0x11F768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F768u;
label_11f768:
    // 0x11f768: 0x5450001d  bnel        $v0, $s0, . + 4 + (0x1D << 2)
label_11f76c:
    if (ctx->pc == 0x11F76Cu) {
        ctx->pc = 0x11F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F768u;
        // 0x11f76c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F770u;
        goto label_11f770;
    }
    ctx->pc = 0x11F768u;
    {
        const bool branch_taken_0x11f768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x11f768) {
            ctx->pc = 0x11F76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F768u;
            // 0x11f76c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F7E0u;
            goto label_11f7e0;
        }
    }
    ctx->pc = 0x11F770u;
label_11f770:
    // 0x11f770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f774:
    // 0x11f774: 0xc047e78  jal         func_11F9E0
label_11f778:
    if (ctx->pc == 0x11F778u) {
        ctx->pc = 0x11F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F774u;
        // 0x11f778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F77Cu;
        goto label_11f77c;
    }
    ctx->pc = 0x11F774u;
    SET_GPR_U32(ctx, 31, 0x11F77Cu);
    ctx->pc = 0x11F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F774u;
    // 0x11f778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F774u, 0x11F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F77Cu;
label_11f77c:
    // 0x11f77c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f780:
    // 0x11f780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f784:
    // 0x11f784: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f788:
    // 0x11f788: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f78c:
    // 0x11f78c: 0xc0f809  jalr        $a2
label_11f790:
    if (ctx->pc == 0x11F790u) {
        ctx->pc = 0x11F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F78Cu;
        // 0x11f790: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F794u;
        goto label_11f794;
    }
    ctx->pc = 0x11F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F794u);
        ctx->pc = 0x11F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F78Cu;
        // 0x11f790: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F78Cu, 0x11F794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F794u;
label_11f794:
    // 0x11f794: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f798:
    // 0x11f798: 0xc047e78  jal         func_11F9E0
label_11f79c:
    if (ctx->pc == 0x11F79Cu) {
        ctx->pc = 0x11F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F798u;
        // 0x11f79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F7A0u;
        goto label_11f7a0;
    }
    ctx->pc = 0x11F798u;
    SET_GPR_U32(ctx, 31, 0x11F7A0u);
    ctx->pc = 0x11F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F798u;
    // 0x11f79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F798u, 0x11F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7A0u;
label_11f7a0:
    // 0x11f7a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f7a4:
    // 0x11f7a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f7a8:
    // 0x11f7a8: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f7a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f7ac:
    // 0x11f7ac: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f7b0:
    // 0x11f7b0: 0xc0f809  jalr        $a2
label_11f7b4:
    if (ctx->pc == 0x11F7B4u) {
        ctx->pc = 0x11F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7B0u;
        // 0x11f7b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F7B8u;
        goto label_11f7b8;
    }
    ctx->pc = 0x11F7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F7B8u);
        ctx->pc = 0x11F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7B0u;
        // 0x11f7b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F7B0u, 0x11F7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F7B8u;
label_11f7b8:
    // 0x11f7b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f7bc:
    // 0x11f7bc: 0xc047e78  jal         func_11F9E0
label_11f7c0:
    if (ctx->pc == 0x11F7C0u) {
        ctx->pc = 0x11F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7BCu;
        // 0x11f7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F7C4u;
        goto label_11f7c4;
    }
    ctx->pc = 0x11F7BCu;
    SET_GPR_U32(ctx, 31, 0x11F7C4u);
    ctx->pc = 0x11F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7BCu;
    // 0x11f7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F7BCu, 0x11F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7C4u;
label_11f7c4:
    // 0x11f7c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f7c8:
    // 0x11f7c8: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x11f7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_11f7cc:
    // 0x11f7cc: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x11f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_11f7d0:
    // 0x11f7d0: 0xa0f809  jalr        $a1
label_11f7d4:
    if (ctx->pc == 0x11F7D4u) {
        ctx->pc = 0x11F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7D0u;
        // 0x11f7d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F7D8u;
        goto label_11f7d8;
    }
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F7D8u);
        ctx->pc = 0x11F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7D0u;
        // 0x11f7d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F7D0u, 0x11F7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F7D8u;
label_11f7d8:
    // 0x11f7d8: 0x10000019  b           . + 4 + (0x19 << 2)
label_11f7dc:
    if (ctx->pc == 0x11F7DCu) {
        ctx->pc = 0x11F7E0u;
        goto label_11f7e0;
    }
    ctx->pc = 0x11F7D8u;
    {
        const bool branch_taken_0x11f7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f7d8) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F7E0u;
label_11f7e0:
    // 0x11f7e0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f7e4:
    // 0x11f7e4: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f7e8:
    // 0x11f7e8: 0x40f809  jalr        $v0
label_11f7ec:
    if (ctx->pc == 0x11F7ECu) {
        ctx->pc = 0x11F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7E8u;
        // 0x11f7ec: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F7F0u;
        goto label_11f7f0;
    }
    ctx->pc = 0x11F7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F7F0u);
        ctx->pc = 0x11F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7E8u;
        // 0x11f7ec: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F7E8u, 0x11F7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F7F0u;
label_11f7f0:
    // 0x11f7f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f7f4:
    // 0x11f7f4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_11f7f8:
    if (ctx->pc == 0x11F7F8u) {
        ctx->pc = 0x11F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7F4u;
        // 0x11f7f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F7FCu;
        goto label_11f7fc;
    }
    ctx->pc = 0x11F7F4u;
    {
        const bool branch_taken_0x11f7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7F4u;
        // 0x11f7f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7f4) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F7FCu;
label_11f7fc:
    // 0x11f7fc: 0xc047eec  jal         func_11FBB0
label_11f800:
    if (ctx->pc == 0x11F800u) {
        ctx->pc = 0x11F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7FCu;
        // 0x11f800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F804u;
        goto label_11f804;
    }
    ctx->pc = 0x11F7FCu;
    SET_GPR_U32(ctx, 31, 0x11F804u);
    ctx->pc = 0x11F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7FCu;
    // 0x11f800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F7FCu, 0x11F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F804u;
label_11f804:
    // 0x11f804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f808:
    // 0x11f808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f80c:
    // 0x11f80c: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f810:
    // 0x11f810: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f814:
    // 0x11f814: 0xc0f809  jalr        $a2
label_11f818:
    if (ctx->pc == 0x11F818u) {
        ctx->pc = 0x11F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F814u;
        // 0x11f818: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F81Cu;
        goto label_11f81c;
    }
    ctx->pc = 0x11F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F81Cu);
        ctx->pc = 0x11F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F814u;
        // 0x11f818: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F814u, 0x11F81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F81Cu;
label_11f81c:
    // 0x11f81c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f820:
    // 0x11f820: 0xc047eec  jal         func_11FBB0
label_11f824:
    if (ctx->pc == 0x11F824u) {
        ctx->pc = 0x11F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F820u;
        // 0x11f824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F828u;
        goto label_11f828;
    }
    ctx->pc = 0x11F820u;
    SET_GPR_U32(ctx, 31, 0x11F828u);
    ctx->pc = 0x11F824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F820u;
    // 0x11f824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F820u, 0x11F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F828u;
label_11f828:
    // 0x11f828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f82c:
    // 0x11f82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f830:
    // 0x11f830: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11f834:
    // 0x11f834: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11f834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11f838:
    // 0x11f838: 0xc0f809  jalr        $a2
label_11f83c:
    if (ctx->pc == 0x11F83Cu) {
        ctx->pc = 0x11F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F838u;
        // 0x11f83c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F840u;
        goto label_11f840;
    }
    ctx->pc = 0x11F838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11F840u);
        ctx->pc = 0x11F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F838u;
        // 0x11f83c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F838u, 0x11F840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F840u;
label_11f840:
    // 0x11f840: 0xc048bb4  jal         func_122ED0
label_11f844:
    if (ctx->pc == 0x11F844u) {
        ctx->pc = 0x11F848u;
        goto label_11f848;
    }
    ctx->pc = 0x11F840u;
    SET_GPR_U32(ctx, 31, 0x11F848u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x11F840u, 0x11F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F848u;
label_11f848:
    // 0x11f848: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11f848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11f84c:
    // 0x11f84c: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x11f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_11f850:
    // 0x11f850: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11f850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11f854:
    // 0x11f854: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_11f858:
    if (ctx->pc == 0x11F858u) {
        ctx->pc = 0x11F85Cu;
        goto label_11f85c;
    }
    ctx->pc = 0x11F854u;
    {
        const bool branch_taken_0x11f854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f854) {
            ctx->pc = 0x11F958u;
            goto label_11f958;
        }
    }
    ctx->pc = 0x11F85Cu;
label_11f85c:
    // 0x11f85c: 0xc047e72  jal         func_11F9C8
label_11f860:
    if (ctx->pc == 0x11F860u) {
        ctx->pc = 0x11F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F85Cu;
        // 0x11f860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F864u;
        goto label_11f864;
    }
    ctx->pc = 0x11F85Cu;
    SET_GPR_U32(ctx, 31, 0x11F864u);
    ctx->pc = 0x11F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F85Cu;
    // 0x11f860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11F85Cu, 0x11F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F864u;
label_11f864:
    // 0x11f864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f868:
    // 0x11f868: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f86c:
    // 0x11f86c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f870:
    // 0x11f870: 0xa0f809  jalr        $a1
label_11f874:
    if (ctx->pc == 0x11F874u) {
        ctx->pc = 0x11F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F870u;
        // 0x11f874: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F878u;
        goto label_11f878;
    }
    ctx->pc = 0x11F870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F878u);
        ctx->pc = 0x11F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F870u;
        // 0x11f874: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F870u, 0x11F878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F878u;
label_11f878:
    // 0x11f878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11f878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f87c:
    // 0x11f87c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11f880:
    // 0x11f880: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
label_11f884:
    if (ctx->pc == 0x11F884u) {
        ctx->pc = 0x11F888u;
        goto label_11f888;
    }
    ctx->pc = 0x11F880u;
    {
        const bool branch_taken_0x11f880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f880) {
            ctx->pc = 0x11F8F4u;
            goto label_11f8f4;
        }
    }
    ctx->pc = 0x11F888u;
label_11f888:
    // 0x11f888: 0xc047e72  jal         func_11F9C8
label_11f88c:
    if (ctx->pc == 0x11F88Cu) {
        ctx->pc = 0x11F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F888u;
        // 0x11f88c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F890u;
        goto label_11f890;
    }
    ctx->pc = 0x11F888u;
    SET_GPR_U32(ctx, 31, 0x11F890u);
    ctx->pc = 0x11F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F888u;
    // 0x11f88c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11F888u, 0x11F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F890u;
label_11f890:
    // 0x11f890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f894:
    // 0x11f894: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f898:
    // 0x11f898: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f89c:
    // 0x11f89c: 0xa0f809  jalr        $a1
label_11f8a0:
    if (ctx->pc == 0x11F8A0u) {
        ctx->pc = 0x11F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F89Cu;
        // 0x11f8a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F8A4u;
        goto label_11f8a4;
    }
    ctx->pc = 0x11F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F8A4u);
        ctx->pc = 0x11F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F89Cu;
        // 0x11f8a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F89Cu, 0x11F8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F8A4u;
label_11f8a4:
    // 0x11f8a4: 0x14500013  bne         $v0, $s0, . + 4 + (0x13 << 2)
label_11f8a8:
    if (ctx->pc == 0x11F8A8u) {
        ctx->pc = 0x11F8ACu;
        goto label_11f8ac;
    }
    ctx->pc = 0x11F8A4u;
    {
        const bool branch_taken_0x11f8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x11f8a4) {
            ctx->pc = 0x11F8F4u;
            goto label_11f8f4;
        }
    }
    ctx->pc = 0x11F8ACu;
label_11f8ac:
    // 0x11f8ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f8b0:
    // 0x11f8b0: 0xc047e78  jal         func_11F9E0
label_11f8b4:
    if (ctx->pc == 0x11F8B4u) {
        ctx->pc = 0x11F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8B0u;
        // 0x11f8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F8B8u;
        goto label_11f8b8;
    }
    ctx->pc = 0x11F8B0u;
    SET_GPR_U32(ctx, 31, 0x11F8B8u);
    ctx->pc = 0x11F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8B0u;
    // 0x11f8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F8B0u, 0x11F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8B8u;
label_11f8b8:
    // 0x11f8b8: 0xc049f04  jal         func_127C10
label_11f8bc:
    if (ctx->pc == 0x11F8BCu) {
        ctx->pc = 0x11F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8B8u;
        // 0x11f8bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F8C0u;
        goto label_11f8c0;
    }
    ctx->pc = 0x11F8B8u;
    SET_GPR_U32(ctx, 31, 0x11F8C0u);
    ctx->pc = 0x11F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8B8u;
    // 0x11f8bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x11F8B8u, 0x11F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8C0u;
label_11f8c0:
    // 0x11f8c0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11f8c4:
    // 0x11f8c4: 0x8c83b198  lw          $v1, -0x4E68($a0)
    ctx->pc = 0x11f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947224)));
label_11f8c8:
    // 0x11f8c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11f8cc:
    // 0x11f8cc: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x11f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_11f8d0:
    // 0x11f8d0: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_11f8d4:
    if (ctx->pc == 0x11F8D4u) {
        ctx->pc = 0x11F8D8u;
        goto label_11f8d8;
    }
    ctx->pc = 0x11F8D0u;
    {
        const bool branch_taken_0x11f8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f8d0) {
            ctx->pc = 0x11F958u;
            goto label_11f958;
        }
    }
    ctx->pc = 0x11F8D8u;
label_11f8d8:
    // 0x11f8d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f8dc:
    // 0x11f8dc: 0xc047e78  jal         func_11F9E0
label_11f8e0:
    if (ctx->pc == 0x11F8E0u) {
        ctx->pc = 0x11F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8DCu;
        // 0x11f8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F8E4u;
        goto label_11f8e4;
    }
    ctx->pc = 0x11F8DCu;
    SET_GPR_U32(ctx, 31, 0x11F8E4u);
    ctx->pc = 0x11F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8DCu;
    // 0x11f8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11F8DCu, 0x11F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8E4u;
label_11f8e4:
    // 0x11f8e4: 0xc049f04  jal         func_127C10
label_11f8e8:
    if (ctx->pc == 0x11F8E8u) {
        ctx->pc = 0x11F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8E4u;
        // 0x11f8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F8ECu;
        goto label_11f8ec;
    }
    ctx->pc = 0x11F8E4u;
    SET_GPR_U32(ctx, 31, 0x11F8ECu);
    ctx->pc = 0x11F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8E4u;
    // 0x11f8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x11F8E4u, 0x11F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8ECu;
label_11f8ec:
    // 0x11f8ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_11f8f0:
    if (ctx->pc == 0x11F8F0u) {
        ctx->pc = 0x11F8F4u;
        goto label_11f8f4;
    }
    ctx->pc = 0x11F8ECu;
    {
        const bool branch_taken_0x11f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f8ec) {
            ctx->pc = 0x11F958u;
            goto label_11f958;
        }
    }
    ctx->pc = 0x11F8F4u;
label_11f8f4:
    // 0x11f8f4: 0xc047e72  jal         func_11F9C8
label_11f8f8:
    if (ctx->pc == 0x11F8F8u) {
        ctx->pc = 0x11F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F4u;
        // 0x11f8f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F8FCu;
        goto label_11f8fc;
    }
    ctx->pc = 0x11F8F4u;
    SET_GPR_U32(ctx, 31, 0x11F8FCu);
    ctx->pc = 0x11F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8F4u;
    // 0x11f8f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11F8F4u, 0x11F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8FCu;
label_11f8fc:
    // 0x11f8fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f900:
    // 0x11f900: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f904:
    // 0x11f904: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f908:
    // 0x11f908: 0xa0f809  jalr        $a1
label_11f90c:
    if (ctx->pc == 0x11F90Cu) {
        ctx->pc = 0x11F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F908u;
        // 0x11f90c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F910u;
        goto label_11f910;
    }
    ctx->pc = 0x11F908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F910u);
        ctx->pc = 0x11F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F908u;
        // 0x11f90c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F908u, 0x11F910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F910u;
label_11f910:
    // 0x11f910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11f910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f914:
    // 0x11f914: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11f918:
    // 0x11f918: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_11f91c:
    if (ctx->pc == 0x11F91Cu) {
        ctx->pc = 0x11F920u;
        goto label_11f920;
    }
    ctx->pc = 0x11F918u;
    {
        const bool branch_taken_0x11f918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f918) {
            ctx->pc = 0x11F958u;
            goto label_11f958;
        }
    }
    ctx->pc = 0x11F920u;
label_11f920:
    // 0x11f920: 0xc047e72  jal         func_11F9C8
label_11f924:
    if (ctx->pc == 0x11F924u) {
        ctx->pc = 0x11F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F920u;
        // 0x11f924: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F928u;
        goto label_11f928;
    }
    ctx->pc = 0x11F920u;
    SET_GPR_U32(ctx, 31, 0x11F928u);
    ctx->pc = 0x11F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F920u;
    // 0x11f924: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11F920u, 0x11F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F928u;
label_11f928:
    // 0x11f928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f92c:
    // 0x11f92c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11f92cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11f930:
    // 0x11f930: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11f930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11f934:
    // 0x11f934: 0xa0f809  jalr        $a1
label_11f938:
    if (ctx->pc == 0x11F938u) {
        ctx->pc = 0x11F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F934u;
        // 0x11f938: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F93Cu;
        goto label_11f93c;
    }
    ctx->pc = 0x11F934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F93Cu);
        ctx->pc = 0x11F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F934u;
        // 0x11f938: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F934u, 0x11F93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F93Cu;
label_11f93c:
    // 0x11f93c: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_11f940:
    if (ctx->pc == 0x11F940u) {
        ctx->pc = 0x11F944u;
        goto label_11f944;
    }
    ctx->pc = 0x11F93Cu;
    {
        const bool branch_taken_0x11f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x11f93c) {
            ctx->pc = 0x11F958u;
            goto label_11f958;
        }
    }
    ctx->pc = 0x11F944u;
label_11f944:
    // 0x11f944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f948:
    // 0x11f948: 0xc047eec  jal         func_11FBB0
label_11f94c:
    if (ctx->pc == 0x11F94Cu) {
        ctx->pc = 0x11F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F948u;
        // 0x11f94c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F950u;
        goto label_11f950;
    }
    ctx->pc = 0x11F948u;
    SET_GPR_U32(ctx, 31, 0x11F950u);
    ctx->pc = 0x11F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F948u;
    // 0x11f94c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11F948u, 0x11F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F950u;
label_11f950:
    // 0x11f950: 0xc04f39e  jal         func_13CE78
label_11f954:
    if (ctx->pc == 0x11F954u) {
        ctx->pc = 0x11F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F950u;
        // 0x11f954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F958u;
        goto label_11f958;
    }
    ctx->pc = 0x11F950u;
    SET_GPR_U32(ctx, 31, 0x11F958u);
    ctx->pc = 0x11F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F950u;
    // 0x11f954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CE78u, 0x11F950u, 0x11F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F958u;
label_11f958:
    // 0x11f958: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_11f95c:
    if (ctx->pc == 0x11F95Cu) {
        ctx->pc = 0x11F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F958u;
        // 0x11f95c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F960u;
        goto label_11f960;
    }
    ctx->pc = 0x11F958u;
    {
        const bool branch_taken_0x11f958 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F958u;
        // 0x11f95c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f958) {
            ctx->pc = 0x11F980u;
            goto label_11f980;
        }
    }
    ctx->pc = 0x11F960u;
label_11f960:
    // 0x11f960: 0x12b20008  beq         $s5, $s2, . + 4 + (0x8 << 2)
label_11f964:
    if (ctx->pc == 0x11F964u) {
        ctx->pc = 0x11F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F960u;
        // 0x11f964: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F968u;
        goto label_11f968;
    }
    ctx->pc = 0x11F960u;
    {
        const bool branch_taken_0x11f960 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        ctx->pc = 0x11F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F960u;
        // 0x11f964: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f960) {
            ctx->pc = 0x11F984u;
            goto label_11f984;
        }
    }
    ctx->pc = 0x11F968u;
label_11f968:
    // 0x11f968: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x11f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_11f96c:
    // 0x11f96c: 0x84440150  lh          $a0, 0x150($v0)
    ctx->pc = 0x11f96cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 336)));
label_11f970:
    // 0x11f970: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x11f970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_11f974:
    // 0x11f974: 0x60f809  jalr        $v1
label_11f978:
    if (ctx->pc == 0x11F978u) {
        ctx->pc = 0x11F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F974u;
        // 0x11f978: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F97Cu;
        goto label_11f97c;
    }
    ctx->pc = 0x11F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F97Cu);
        ctx->pc = 0x11F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F974u;
        // 0x11f978: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F974u, 0x11F97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F97Cu;
label_11f97c:
    // 0x11f97c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x11f97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_11f980:
    // 0x11f980: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x11f980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11f984:
    // 0x11f984: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x11f984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11f988:
    // 0x11f988: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x11f988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11f98c:
    // 0x11f98c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x11f98cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11f990:
    // 0x11f990: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x11f990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11f994:
    // 0x11f994: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x11f994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11f998:
    // 0x11f998: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x11f998u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11f99c:
    // 0x11f99c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x11f99cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11f9a0:
    // 0x11f9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11f9a4:
    // 0x11f9a4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x11f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11f9a8:
    // 0x11f9a8: 0x3e00008  jr          $ra
label_11f9ac:
    if (ctx->pc == 0x11F9ACu) {
        ctx->pc = 0x11F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9A8u;
        // 0x11f9ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F9B0u;
        goto label_fallthrough_0x11f9a8;
    }
    ctx->pc = 0x11F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9A8u;
        // 0x11f9ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11f9a8:
    ctx->pc = 0x11F9B0u;
}
