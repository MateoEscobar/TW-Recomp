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

// Function: sub_002CEDB0
// Address: 0x2cedb0 - 0x2cf480
void sub_002CEDB0_0x2cedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEDB0_0x2cedb0");
#endif

    switch (ctx->pc) {
        case 0x2cedb0u: goto label_2cedb0;
        case 0x2cedb4u: goto label_2cedb4;
        case 0x2cedb8u: goto label_2cedb8;
        case 0x2cedbcu: goto label_2cedbc;
        case 0x2cedc0u: goto label_2cedc0;
        case 0x2cedc4u: goto label_2cedc4;
        case 0x2cedc8u: goto label_2cedc8;
        case 0x2cedccu: goto label_2cedcc;
        case 0x2cedd0u: goto label_2cedd0;
        case 0x2cedd4u: goto label_2cedd4;
        case 0x2cedd8u: goto label_2cedd8;
        case 0x2ceddcu: goto label_2ceddc;
        case 0x2cede0u: goto label_2cede0;
        case 0x2cede4u: goto label_2cede4;
        case 0x2cede8u: goto label_2cede8;
        case 0x2cedecu: goto label_2cedec;
        case 0x2cedf0u: goto label_2cedf0;
        case 0x2cedf4u: goto label_2cedf4;
        case 0x2cedf8u: goto label_2cedf8;
        case 0x2cedfcu: goto label_2cedfc;
        case 0x2cee00u: goto label_2cee00;
        case 0x2cee04u: goto label_2cee04;
        case 0x2cee08u: goto label_2cee08;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee10u: goto label_2cee10;
        case 0x2cee14u: goto label_2cee14;
        case 0x2cee18u: goto label_2cee18;
        case 0x2cee1cu: goto label_2cee1c;
        case 0x2cee20u: goto label_2cee20;
        case 0x2cee24u: goto label_2cee24;
        case 0x2cee28u: goto label_2cee28;
        case 0x2cee2cu: goto label_2cee2c;
        case 0x2cee30u: goto label_2cee30;
        case 0x2cee34u: goto label_2cee34;
        case 0x2cee38u: goto label_2cee38;
        case 0x2cee3cu: goto label_2cee3c;
        case 0x2cee40u: goto label_2cee40;
        case 0x2cee44u: goto label_2cee44;
        case 0x2cee48u: goto label_2cee48;
        case 0x2cee4cu: goto label_2cee4c;
        case 0x2cee50u: goto label_2cee50;
        case 0x2cee54u: goto label_2cee54;
        case 0x2cee58u: goto label_2cee58;
        case 0x2cee5cu: goto label_2cee5c;
        case 0x2cee60u: goto label_2cee60;
        case 0x2cee64u: goto label_2cee64;
        case 0x2cee68u: goto label_2cee68;
        case 0x2cee6cu: goto label_2cee6c;
        case 0x2cee70u: goto label_2cee70;
        case 0x2cee74u: goto label_2cee74;
        case 0x2cee78u: goto label_2cee78;
        case 0x2cee7cu: goto label_2cee7c;
        case 0x2cee80u: goto label_2cee80;
        case 0x2cee84u: goto label_2cee84;
        case 0x2cee88u: goto label_2cee88;
        case 0x2cee8cu: goto label_2cee8c;
        case 0x2cee90u: goto label_2cee90;
        case 0x2cee94u: goto label_2cee94;
        case 0x2cee98u: goto label_2cee98;
        case 0x2cee9cu: goto label_2cee9c;
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2ceea4u: goto label_2ceea4;
        case 0x2ceea8u: goto label_2ceea8;
        case 0x2ceeacu: goto label_2ceeac;
        case 0x2ceeb0u: goto label_2ceeb0;
        case 0x2ceeb4u: goto label_2ceeb4;
        case 0x2ceeb8u: goto label_2ceeb8;
        case 0x2ceebcu: goto label_2ceebc;
        case 0x2ceec0u: goto label_2ceec0;
        case 0x2ceec4u: goto label_2ceec4;
        case 0x2ceec8u: goto label_2ceec8;
        case 0x2ceeccu: goto label_2ceecc;
        case 0x2ceed0u: goto label_2ceed0;
        case 0x2ceed4u: goto label_2ceed4;
        case 0x2ceed8u: goto label_2ceed8;
        case 0x2ceedcu: goto label_2ceedc;
        case 0x2ceee0u: goto label_2ceee0;
        case 0x2ceee4u: goto label_2ceee4;
        case 0x2ceee8u: goto label_2ceee8;
        case 0x2ceeecu: goto label_2ceeec;
        case 0x2ceef0u: goto label_2ceef0;
        case 0x2ceef4u: goto label_2ceef4;
        case 0x2ceef8u: goto label_2ceef8;
        case 0x2ceefcu: goto label_2ceefc;
        case 0x2cef00u: goto label_2cef00;
        case 0x2cef04u: goto label_2cef04;
        case 0x2cef08u: goto label_2cef08;
        case 0x2cef0cu: goto label_2cef0c;
        case 0x2cef10u: goto label_2cef10;
        case 0x2cef14u: goto label_2cef14;
        case 0x2cef18u: goto label_2cef18;
        case 0x2cef1cu: goto label_2cef1c;
        case 0x2cef20u: goto label_2cef20;
        case 0x2cef24u: goto label_2cef24;
        case 0x2cef28u: goto label_2cef28;
        case 0x2cef2cu: goto label_2cef2c;
        case 0x2cef30u: goto label_2cef30;
        case 0x2cef34u: goto label_2cef34;
        case 0x2cef38u: goto label_2cef38;
        case 0x2cef3cu: goto label_2cef3c;
        case 0x2cef40u: goto label_2cef40;
        case 0x2cef44u: goto label_2cef44;
        case 0x2cef48u: goto label_2cef48;
        case 0x2cef4cu: goto label_2cef4c;
        case 0x2cef50u: goto label_2cef50;
        case 0x2cef54u: goto label_2cef54;
        case 0x2cef58u: goto label_2cef58;
        case 0x2cef5cu: goto label_2cef5c;
        case 0x2cef60u: goto label_2cef60;
        case 0x2cef64u: goto label_2cef64;
        case 0x2cef68u: goto label_2cef68;
        case 0x2cef6cu: goto label_2cef6c;
        case 0x2cef70u: goto label_2cef70;
        case 0x2cef74u: goto label_2cef74;
        case 0x2cef78u: goto label_2cef78;
        case 0x2cef7cu: goto label_2cef7c;
        case 0x2cef80u: goto label_2cef80;
        case 0x2cef84u: goto label_2cef84;
        case 0x2cef88u: goto label_2cef88;
        case 0x2cef8cu: goto label_2cef8c;
        case 0x2cef90u: goto label_2cef90;
        case 0x2cef94u: goto label_2cef94;
        case 0x2cef98u: goto label_2cef98;
        case 0x2cef9cu: goto label_2cef9c;
        case 0x2cefa0u: goto label_2cefa0;
        case 0x2cefa4u: goto label_2cefa4;
        case 0x2cefa8u: goto label_2cefa8;
        case 0x2cefacu: goto label_2cefac;
        case 0x2cefb0u: goto label_2cefb0;
        case 0x2cefb4u: goto label_2cefb4;
        case 0x2cefb8u: goto label_2cefb8;
        case 0x2cefbcu: goto label_2cefbc;
        case 0x2cefc0u: goto label_2cefc0;
        case 0x2cefc4u: goto label_2cefc4;
        case 0x2cefc8u: goto label_2cefc8;
        case 0x2cefccu: goto label_2cefcc;
        case 0x2cefd0u: goto label_2cefd0;
        case 0x2cefd4u: goto label_2cefd4;
        case 0x2cefd8u: goto label_2cefd8;
        case 0x2cefdcu: goto label_2cefdc;
        case 0x2cefe0u: goto label_2cefe0;
        case 0x2cefe4u: goto label_2cefe4;
        case 0x2cefe8u: goto label_2cefe8;
        case 0x2cefecu: goto label_2cefec;
        case 0x2ceff0u: goto label_2ceff0;
        case 0x2ceff4u: goto label_2ceff4;
        case 0x2ceff8u: goto label_2ceff8;
        case 0x2ceffcu: goto label_2ceffc;
        case 0x2cf000u: goto label_2cf000;
        case 0x2cf004u: goto label_2cf004;
        case 0x2cf008u: goto label_2cf008;
        case 0x2cf00cu: goto label_2cf00c;
        case 0x2cf010u: goto label_2cf010;
        case 0x2cf014u: goto label_2cf014;
        case 0x2cf018u: goto label_2cf018;
        case 0x2cf01cu: goto label_2cf01c;
        case 0x2cf020u: goto label_2cf020;
        case 0x2cf024u: goto label_2cf024;
        case 0x2cf028u: goto label_2cf028;
        case 0x2cf02cu: goto label_2cf02c;
        case 0x2cf030u: goto label_2cf030;
        case 0x2cf034u: goto label_2cf034;
        case 0x2cf038u: goto label_2cf038;
        case 0x2cf03cu: goto label_2cf03c;
        case 0x2cf040u: goto label_2cf040;
        case 0x2cf044u: goto label_2cf044;
        case 0x2cf048u: goto label_2cf048;
        case 0x2cf04cu: goto label_2cf04c;
        case 0x2cf050u: goto label_2cf050;
        case 0x2cf054u: goto label_2cf054;
        case 0x2cf058u: goto label_2cf058;
        case 0x2cf05cu: goto label_2cf05c;
        case 0x2cf060u: goto label_2cf060;
        case 0x2cf064u: goto label_2cf064;
        case 0x2cf068u: goto label_2cf068;
        case 0x2cf06cu: goto label_2cf06c;
        case 0x2cf070u: goto label_2cf070;
        case 0x2cf074u: goto label_2cf074;
        case 0x2cf078u: goto label_2cf078;
        case 0x2cf07cu: goto label_2cf07c;
        case 0x2cf080u: goto label_2cf080;
        case 0x2cf084u: goto label_2cf084;
        case 0x2cf088u: goto label_2cf088;
        case 0x2cf08cu: goto label_2cf08c;
        case 0x2cf090u: goto label_2cf090;
        case 0x2cf094u: goto label_2cf094;
        case 0x2cf098u: goto label_2cf098;
        case 0x2cf09cu: goto label_2cf09c;
        case 0x2cf0a0u: goto label_2cf0a0;
        case 0x2cf0a4u: goto label_2cf0a4;
        case 0x2cf0a8u: goto label_2cf0a8;
        case 0x2cf0acu: goto label_2cf0ac;
        case 0x2cf0b0u: goto label_2cf0b0;
        case 0x2cf0b4u: goto label_2cf0b4;
        case 0x2cf0b8u: goto label_2cf0b8;
        case 0x2cf0bcu: goto label_2cf0bc;
        case 0x2cf0c0u: goto label_2cf0c0;
        case 0x2cf0c4u: goto label_2cf0c4;
        case 0x2cf0c8u: goto label_2cf0c8;
        case 0x2cf0ccu: goto label_2cf0cc;
        case 0x2cf0d0u: goto label_2cf0d0;
        case 0x2cf0d4u: goto label_2cf0d4;
        case 0x2cf0d8u: goto label_2cf0d8;
        case 0x2cf0dcu: goto label_2cf0dc;
        case 0x2cf0e0u: goto label_2cf0e0;
        case 0x2cf0e4u: goto label_2cf0e4;
        case 0x2cf0e8u: goto label_2cf0e8;
        case 0x2cf0ecu: goto label_2cf0ec;
        case 0x2cf0f0u: goto label_2cf0f0;
        case 0x2cf0f4u: goto label_2cf0f4;
        case 0x2cf0f8u: goto label_2cf0f8;
        case 0x2cf0fcu: goto label_2cf0fc;
        case 0x2cf100u: goto label_2cf100;
        case 0x2cf104u: goto label_2cf104;
        case 0x2cf108u: goto label_2cf108;
        case 0x2cf10cu: goto label_2cf10c;
        case 0x2cf110u: goto label_2cf110;
        case 0x2cf114u: goto label_2cf114;
        case 0x2cf118u: goto label_2cf118;
        case 0x2cf11cu: goto label_2cf11c;
        case 0x2cf120u: goto label_2cf120;
        case 0x2cf124u: goto label_2cf124;
        case 0x2cf128u: goto label_2cf128;
        case 0x2cf12cu: goto label_2cf12c;
        case 0x2cf130u: goto label_2cf130;
        case 0x2cf134u: goto label_2cf134;
        case 0x2cf138u: goto label_2cf138;
        case 0x2cf13cu: goto label_2cf13c;
        case 0x2cf140u: goto label_2cf140;
        case 0x2cf144u: goto label_2cf144;
        case 0x2cf148u: goto label_2cf148;
        case 0x2cf14cu: goto label_2cf14c;
        case 0x2cf150u: goto label_2cf150;
        case 0x2cf154u: goto label_2cf154;
        case 0x2cf158u: goto label_2cf158;
        case 0x2cf15cu: goto label_2cf15c;
        case 0x2cf160u: goto label_2cf160;
        case 0x2cf164u: goto label_2cf164;
        case 0x2cf168u: goto label_2cf168;
        case 0x2cf16cu: goto label_2cf16c;
        case 0x2cf170u: goto label_2cf170;
        case 0x2cf174u: goto label_2cf174;
        case 0x2cf178u: goto label_2cf178;
        case 0x2cf17cu: goto label_2cf17c;
        case 0x2cf180u: goto label_2cf180;
        case 0x2cf184u: goto label_2cf184;
        case 0x2cf188u: goto label_2cf188;
        case 0x2cf18cu: goto label_2cf18c;
        case 0x2cf190u: goto label_2cf190;
        case 0x2cf194u: goto label_2cf194;
        case 0x2cf198u: goto label_2cf198;
        case 0x2cf19cu: goto label_2cf19c;
        case 0x2cf1a0u: goto label_2cf1a0;
        case 0x2cf1a4u: goto label_2cf1a4;
        case 0x2cf1a8u: goto label_2cf1a8;
        case 0x2cf1acu: goto label_2cf1ac;
        case 0x2cf1b0u: goto label_2cf1b0;
        case 0x2cf1b4u: goto label_2cf1b4;
        case 0x2cf1b8u: goto label_2cf1b8;
        case 0x2cf1bcu: goto label_2cf1bc;
        case 0x2cf1c0u: goto label_2cf1c0;
        case 0x2cf1c4u: goto label_2cf1c4;
        case 0x2cf1c8u: goto label_2cf1c8;
        case 0x2cf1ccu: goto label_2cf1cc;
        case 0x2cf1d0u: goto label_2cf1d0;
        case 0x2cf1d4u: goto label_2cf1d4;
        case 0x2cf1d8u: goto label_2cf1d8;
        case 0x2cf1dcu: goto label_2cf1dc;
        case 0x2cf1e0u: goto label_2cf1e0;
        case 0x2cf1e4u: goto label_2cf1e4;
        case 0x2cf1e8u: goto label_2cf1e8;
        case 0x2cf1ecu: goto label_2cf1ec;
        case 0x2cf1f0u: goto label_2cf1f0;
        case 0x2cf1f4u: goto label_2cf1f4;
        case 0x2cf1f8u: goto label_2cf1f8;
        case 0x2cf1fcu: goto label_2cf1fc;
        case 0x2cf200u: goto label_2cf200;
        case 0x2cf204u: goto label_2cf204;
        case 0x2cf208u: goto label_2cf208;
        case 0x2cf20cu: goto label_2cf20c;
        case 0x2cf210u: goto label_2cf210;
        case 0x2cf214u: goto label_2cf214;
        case 0x2cf218u: goto label_2cf218;
        case 0x2cf21cu: goto label_2cf21c;
        case 0x2cf220u: goto label_2cf220;
        case 0x2cf224u: goto label_2cf224;
        case 0x2cf228u: goto label_2cf228;
        case 0x2cf22cu: goto label_2cf22c;
        case 0x2cf230u: goto label_2cf230;
        case 0x2cf234u: goto label_2cf234;
        case 0x2cf238u: goto label_2cf238;
        case 0x2cf23cu: goto label_2cf23c;
        case 0x2cf240u: goto label_2cf240;
        case 0x2cf244u: goto label_2cf244;
        case 0x2cf248u: goto label_2cf248;
        case 0x2cf24cu: goto label_2cf24c;
        case 0x2cf250u: goto label_2cf250;
        case 0x2cf254u: goto label_2cf254;
        case 0x2cf258u: goto label_2cf258;
        case 0x2cf25cu: goto label_2cf25c;
        case 0x2cf260u: goto label_2cf260;
        case 0x2cf264u: goto label_2cf264;
        case 0x2cf268u: goto label_2cf268;
        case 0x2cf26cu: goto label_2cf26c;
        case 0x2cf270u: goto label_2cf270;
        case 0x2cf274u: goto label_2cf274;
        case 0x2cf278u: goto label_2cf278;
        case 0x2cf27cu: goto label_2cf27c;
        case 0x2cf280u: goto label_2cf280;
        case 0x2cf284u: goto label_2cf284;
        case 0x2cf288u: goto label_2cf288;
        case 0x2cf28cu: goto label_2cf28c;
        case 0x2cf290u: goto label_2cf290;
        case 0x2cf294u: goto label_2cf294;
        case 0x2cf298u: goto label_2cf298;
        case 0x2cf29cu: goto label_2cf29c;
        case 0x2cf2a0u: goto label_2cf2a0;
        case 0x2cf2a4u: goto label_2cf2a4;
        case 0x2cf2a8u: goto label_2cf2a8;
        case 0x2cf2acu: goto label_2cf2ac;
        case 0x2cf2b0u: goto label_2cf2b0;
        case 0x2cf2b4u: goto label_2cf2b4;
        case 0x2cf2b8u: goto label_2cf2b8;
        case 0x2cf2bcu: goto label_2cf2bc;
        case 0x2cf2c0u: goto label_2cf2c0;
        case 0x2cf2c4u: goto label_2cf2c4;
        case 0x2cf2c8u: goto label_2cf2c8;
        case 0x2cf2ccu: goto label_2cf2cc;
        case 0x2cf2d0u: goto label_2cf2d0;
        case 0x2cf2d4u: goto label_2cf2d4;
        case 0x2cf2d8u: goto label_2cf2d8;
        case 0x2cf2dcu: goto label_2cf2dc;
        case 0x2cf2e0u: goto label_2cf2e0;
        case 0x2cf2e4u: goto label_2cf2e4;
        case 0x2cf2e8u: goto label_2cf2e8;
        case 0x2cf2ecu: goto label_2cf2ec;
        case 0x2cf2f0u: goto label_2cf2f0;
        case 0x2cf2f4u: goto label_2cf2f4;
        case 0x2cf2f8u: goto label_2cf2f8;
        case 0x2cf2fcu: goto label_2cf2fc;
        case 0x2cf300u: goto label_2cf300;
        case 0x2cf304u: goto label_2cf304;
        case 0x2cf308u: goto label_2cf308;
        case 0x2cf30cu: goto label_2cf30c;
        case 0x2cf310u: goto label_2cf310;
        case 0x2cf314u: goto label_2cf314;
        case 0x2cf318u: goto label_2cf318;
        case 0x2cf31cu: goto label_2cf31c;
        case 0x2cf320u: goto label_2cf320;
        case 0x2cf324u: goto label_2cf324;
        case 0x2cf328u: goto label_2cf328;
        case 0x2cf32cu: goto label_2cf32c;
        case 0x2cf330u: goto label_2cf330;
        case 0x2cf334u: goto label_2cf334;
        case 0x2cf338u: goto label_2cf338;
        case 0x2cf33cu: goto label_2cf33c;
        case 0x2cf340u: goto label_2cf340;
        case 0x2cf344u: goto label_2cf344;
        case 0x2cf348u: goto label_2cf348;
        case 0x2cf34cu: goto label_2cf34c;
        case 0x2cf350u: goto label_2cf350;
        case 0x2cf354u: goto label_2cf354;
        case 0x2cf358u: goto label_2cf358;
        case 0x2cf35cu: goto label_2cf35c;
        case 0x2cf360u: goto label_2cf360;
        case 0x2cf364u: goto label_2cf364;
        case 0x2cf368u: goto label_2cf368;
        case 0x2cf36cu: goto label_2cf36c;
        case 0x2cf370u: goto label_2cf370;
        case 0x2cf374u: goto label_2cf374;
        case 0x2cf378u: goto label_2cf378;
        case 0x2cf37cu: goto label_2cf37c;
        case 0x2cf380u: goto label_2cf380;
        case 0x2cf384u: goto label_2cf384;
        case 0x2cf388u: goto label_2cf388;
        case 0x2cf38cu: goto label_2cf38c;
        case 0x2cf390u: goto label_2cf390;
        case 0x2cf394u: goto label_2cf394;
        case 0x2cf398u: goto label_2cf398;
        case 0x2cf39cu: goto label_2cf39c;
        case 0x2cf3a0u: goto label_2cf3a0;
        case 0x2cf3a4u: goto label_2cf3a4;
        case 0x2cf3a8u: goto label_2cf3a8;
        case 0x2cf3acu: goto label_2cf3ac;
        case 0x2cf3b0u: goto label_2cf3b0;
        case 0x2cf3b4u: goto label_2cf3b4;
        case 0x2cf3b8u: goto label_2cf3b8;
        case 0x2cf3bcu: goto label_2cf3bc;
        case 0x2cf3c0u: goto label_2cf3c0;
        case 0x2cf3c4u: goto label_2cf3c4;
        case 0x2cf3c8u: goto label_2cf3c8;
        case 0x2cf3ccu: goto label_2cf3cc;
        case 0x2cf3d0u: goto label_2cf3d0;
        case 0x2cf3d4u: goto label_2cf3d4;
        case 0x2cf3d8u: goto label_2cf3d8;
        case 0x2cf3dcu: goto label_2cf3dc;
        case 0x2cf3e0u: goto label_2cf3e0;
        case 0x2cf3e4u: goto label_2cf3e4;
        case 0x2cf3e8u: goto label_2cf3e8;
        case 0x2cf3ecu: goto label_2cf3ec;
        case 0x2cf3f0u: goto label_2cf3f0;
        case 0x2cf3f4u: goto label_2cf3f4;
        case 0x2cf3f8u: goto label_2cf3f8;
        case 0x2cf3fcu: goto label_2cf3fc;
        case 0x2cf400u: goto label_2cf400;
        case 0x2cf404u: goto label_2cf404;
        case 0x2cf408u: goto label_2cf408;
        case 0x2cf40cu: goto label_2cf40c;
        case 0x2cf410u: goto label_2cf410;
        case 0x2cf414u: goto label_2cf414;
        case 0x2cf418u: goto label_2cf418;
        case 0x2cf41cu: goto label_2cf41c;
        case 0x2cf420u: goto label_2cf420;
        case 0x2cf424u: goto label_2cf424;
        case 0x2cf428u: goto label_2cf428;
        case 0x2cf42cu: goto label_2cf42c;
        case 0x2cf430u: goto label_2cf430;
        case 0x2cf434u: goto label_2cf434;
        case 0x2cf438u: goto label_2cf438;
        case 0x2cf43cu: goto label_2cf43c;
        case 0x2cf440u: goto label_2cf440;
        case 0x2cf444u: goto label_2cf444;
        case 0x2cf448u: goto label_2cf448;
        case 0x2cf44cu: goto label_2cf44c;
        case 0x2cf450u: goto label_2cf450;
        case 0x2cf454u: goto label_2cf454;
        case 0x2cf458u: goto label_2cf458;
        case 0x2cf45cu: goto label_2cf45c;
        case 0x2cf460u: goto label_2cf460;
        case 0x2cf464u: goto label_2cf464;
        case 0x2cf468u: goto label_2cf468;
        case 0x2cf46cu: goto label_2cf46c;
        case 0x2cf470u: goto label_2cf470;
        case 0x2cf474u: goto label_2cf474;
        case 0x2cf478u: goto label_2cf478;
        case 0x2cf47cu: goto label_2cf47c;
        default: break;
    }

    ctx->pc = 0x2cedb0u;

label_2cedb0:
    // 0x2cedb0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2cedb4:
    // 0x2cedb4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2cedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_2cedb8:
    // 0x2cedb8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2cedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_2cedbc:
    // 0x2cedbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cedbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cedc0:
    // 0x2cedc0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2cedc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_2cedc4:
    // 0x2cedc4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2cedc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cedc8:
    // 0x2cedc8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2cedc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_2cedcc:
    // 0x2cedcc: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2cedccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_2cedd0:
    // 0x2cedd0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2cedd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_2cedd4:
    // 0x2cedd4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2cedd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_2cedd8:
    // 0x2cedd8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2cedd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_2ceddc:
    // 0x2ceddc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ceddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2cede0:
    // 0x2cede0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2cede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2cede4:
    // 0x2cede4: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x2cede4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2cede8:
    // 0x2cede8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2cede8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_2cedec:
    // 0x2cedec: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2cedecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2cedf0:
    // 0x2cedf0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cedf4:
    // 0x2cedf4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2cedf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cedf8:
    // 0x2cedf8: 0xc08bfbc  jal         func_22FEF0
label_2cedfc:
    if (ctx->pc == 0x2CEDFCu) {
        ctx->pc = 0x2CEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEDF8u;
        // 0x2cedfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE00u;
        goto label_2cee00;
    }
    ctx->pc = 0x2CEDF8u;
    SET_GPR_U32(ctx, 31, 0x2CEE00u);
    ctx->pc = 0x2CEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEDF8u;
    // 0x2cedfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2CEDF8u, 0x2CEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE00u;
label_2cee00:
    // 0x2cee00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cee04:
    // 0x2cee04: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cee04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cee08:
    // 0x2cee08: 0x1c60018d  bgtz        $v1, . + 4 + (0x18D << 2)
label_2cee0c:
    if (ctx->pc == 0x2CEE0Cu) {
        ctx->pc = 0x2CEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE08u;
        // 0x2cee0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE10u;
        goto label_2cee10;
    }
    ctx->pc = 0x2CEE08u;
    {
        const bool branch_taken_0x2cee08 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE08u;
        // 0x2cee0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee08) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CEE10u;
label_2cee10:
    // 0x2cee10: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x2cee10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_2cee14:
    // 0x2cee14: 0x50560001  beql        $v0, $s6, . + 4 + (0x1 << 2)
label_2cee18:
    if (ctx->pc == 0x2CEE18u) {
        ctx->pc = 0x2CEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE14u;
        // 0x2cee18: 0xa620003c  sh          $zero, 0x3C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE1Cu;
        goto label_2cee1c;
    }
    ctx->pc = 0x2CEE14u;
    {
        const bool branch_taken_0x2cee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2cee14) {
            ctx->pc = 0x2CEE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE14u;
            // 0x2cee18: 0xa620003c  sh          $zero, 0x3C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEE1Cu;
            goto label_2cee1c;
        }
    }
    ctx->pc = 0x2CEE1Cu;
label_2cee1c:
    // 0x2cee1c: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x2cee1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_2cee20:
    // 0x2cee20: 0x14400187  bnez        $v0, . + 4 + (0x187 << 2)
label_2cee24:
    if (ctx->pc == 0x2CEE24u) {
        ctx->pc = 0x2CEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE20u;
        // 0x2cee24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE28u;
        goto label_2cee28;
    }
    ctx->pc = 0x2CEE20u;
    {
        const bool branch_taken_0x2cee20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE20u;
        // 0x2cee24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee20) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CEE28u;
label_2cee28:
    // 0x2cee28: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x2cee28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2cee2c:
    // 0x2cee2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cee30:
    // 0x2cee30: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2cee30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2cee34:
    // 0x2cee34: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2cee34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2cee38:
    // 0x2cee38: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2cee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2cee3c:
    // 0x2cee3c: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x2cee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2cee40:
    // 0x2cee40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cee40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2cee44:
    // 0x2cee44: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x2cee44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cee48:
    // 0x2cee48: 0xc05959e  jal         func_165678
label_2cee4c:
    if (ctx->pc == 0x2CEE4Cu) {
        ctx->pc = 0x2CEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE48u;
        // 0x2cee4c: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE50u;
        goto label_2cee50;
    }
    ctx->pc = 0x2CEE48u;
    SET_GPR_U32(ctx, 31, 0x2CEE50u);
    ctx->pc = 0x2CEE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE48u;
    // 0x2cee4c: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2CEE48u, 0x2CEE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE50u;
label_2cee50:
    // 0x2cee50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cee50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cee54:
    // 0x2cee54: 0xc0b3a78  jal         func_2CE9E0
label_2cee58:
    if (ctx->pc == 0x2CEE58u) {
        ctx->pc = 0x2CEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE54u;
        // 0x2cee58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE5Cu;
        goto label_2cee5c;
    }
    ctx->pc = 0x2CEE54u;
    SET_GPR_U32(ctx, 31, 0x2CEE5Cu);
    ctx->pc = 0x2CEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE54u;
    // 0x2cee58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE9E0u, 0x2CEE54u, 0x2CEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE5Cu;
label_2cee5c:
    // 0x2cee5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cee5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cee60:
    // 0x2cee60: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2cee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2cee64:
    // 0x2cee64: 0x14400176  bnez        $v0, . + 4 + (0x176 << 2)
label_2cee68:
    if (ctx->pc == 0x2CEE68u) {
        ctx->pc = 0x2CEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE64u;
        // 0x2cee68: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE6Cu;
        goto label_2cee6c;
    }
    ctx->pc = 0x2CEE64u;
    {
        const bool branch_taken_0x2cee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE64u;
        // 0x2cee68: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee64) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CEE6Cu;
label_2cee6c:
    // 0x2cee6c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2cee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2cee70:
    // 0x2cee70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cee74:
    // 0x2cee74: 0xc0cdb38  jal         func_336CE0
label_2cee78:
    if (ctx->pc == 0x2CEE78u) {
        ctx->pc = 0x2CEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE74u;
        // 0x2cee78: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE7Cu;
        goto label_2cee7c;
    }
    ctx->pc = 0x2CEE74u;
    SET_GPR_U32(ctx, 31, 0x2CEE7Cu);
    ctx->pc = 0x2CEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE74u;
    // 0x2cee78: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CEE74u, 0x2CEE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE7Cu;
label_2cee7c:
    // 0x2cee7c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2cee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cee80:
    // 0x2cee80: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cee80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2cee84:
    // 0x2cee84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cee84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cee88:
    // 0x2cee88: 0x0  nop
    ctx->pc = 0x2cee88u;
    // NOP
label_2cee8c:
    // 0x2cee8c: 0x450000c2  bc1f        . + 4 + (0xC2 << 2)
label_2cee90:
    if (ctx->pc == 0x2CEE90u) {
        ctx->pc = 0x2CEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE8Cu;
        // 0x2cee90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE94u;
        goto label_2cee94;
    }
    ctx->pc = 0x2CEE8Cu;
    {
        const bool branch_taken_0x2cee8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE8Cu;
        // 0x2cee90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee8c) {
            ctx->pc = 0x2CF198u;
            goto label_2cf198;
        }
    }
    ctx->pc = 0x2CEE94u;
label_2cee94:
    // 0x2cee94: 0x52400036  beql        $s2, $zero, . + 4 + (0x36 << 2)
label_2cee98:
    if (ctx->pc == 0x2CEE98u) {
        ctx->pc = 0x2CEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE94u;
        // 0x2cee98: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEE9Cu;
        goto label_2cee9c;
    }
    ctx->pc = 0x2CEE94u;
    {
        const bool branch_taken_0x2cee94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee94) {
            ctx->pc = 0x2CEE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE94u;
            // 0x2cee98: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF70u;
            goto label_2cef70;
        }
    }
    ctx->pc = 0x2CEE9Cu;
label_2cee9c:
    // 0x2cee9c: 0x12530033  beq         $s2, $s3, . + 4 + (0x33 << 2)
label_2ceea0:
    if (ctx->pc == 0x2CEEA0u) {
        ctx->pc = 0x2CEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE9Cu;
        // 0x2ceea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEEA4u;
        goto label_2ceea4;
    }
    ctx->pc = 0x2CEE9Cu;
    {
        const bool branch_taken_0x2cee9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE9Cu;
        // 0x2ceea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee9c) {
            ctx->pc = 0x2CEF6Cu;
            goto label_2cef6c;
        }
    }
    ctx->pc = 0x2CEEA4u;
label_2ceea4:
    // 0x2ceea4: 0xc08750a  jal         func_21D428
label_2ceea8:
    if (ctx->pc == 0x2CEEA8u) {
        ctx->pc = 0x2CEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEA4u;
        // 0x2ceea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEEACu;
        goto label_2ceeac;
    }
    ctx->pc = 0x2CEEA4u;
    SET_GPR_U32(ctx, 31, 0x2CEEACu);
    ctx->pc = 0x2CEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEEA4u;
    // 0x2ceea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2CEEA4u, 0x2CEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEACu;
label_2ceeac:
    // 0x2ceeac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ceeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeb0:
    // 0x2ceeb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ceeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeb4:
    // 0x2ceeb4: 0xc0a58bc  jal         func_2962F0
label_2ceeb8:
    if (ctx->pc == 0x2CEEB8u) {
        ctx->pc = 0x2CEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEB4u;
        // 0x2ceeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEEBCu;
        goto label_2ceebc;
    }
    ctx->pc = 0x2CEEB4u;
    SET_GPR_U32(ctx, 31, 0x2CEEBCu);
    ctx->pc = 0x2CEEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEEB4u;
    // 0x2ceeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x2CEEB4u, 0x2CEEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEBCu;
label_2ceebc:
    // 0x2ceebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ceebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceec0:
    // 0x2ceec0: 0xc0a58d6  jal         func_296358
label_2ceec4:
    if (ctx->pc == 0x2CEEC4u) {
        ctx->pc = 0x2CEEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEC0u;
        // 0x2ceec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEEC8u;
        goto label_2ceec8;
    }
    ctx->pc = 0x2CEEC0u;
    SET_GPR_U32(ctx, 31, 0x2CEEC8u);
    ctx->pc = 0x2CEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEEC0u;
    // 0x2ceec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296358u, 0x2CEEC0u, 0x2CEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEC8u;
label_2ceec8:
    // 0x2ceec8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ceec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceecc:
    // 0x2ceecc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ceeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ceed0:
    // 0x2ceed0: 0x10c20026  beq         $a2, $v0, . + 4 + (0x26 << 2)
label_2ceed4:
    if (ctx->pc == 0x2CEED4u) {
        ctx->pc = 0x2CEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEED0u;
        // 0x2ceed4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEED8u;
        goto label_2ceed8;
    }
    ctx->pc = 0x2CEED0u;
    {
        const bool branch_taken_0x2ceed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEED0u;
        // 0x2ceed4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceed0) {
            ctx->pc = 0x2CEF6Cu;
            goto label_2cef6c;
        }
    }
    ctx->pc = 0x2CEED8u;
label_2ceed8:
    // 0x2ceed8: 0xc0a5904  jal         func_296410
label_2ceedc:
    if (ctx->pc == 0x2CEEDCu) {
        ctx->pc = 0x2CEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEED8u;
        // 0x2ceedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEEE0u;
        goto label_2ceee0;
    }
    ctx->pc = 0x2CEED8u;
    SET_GPR_U32(ctx, 31, 0x2CEEE0u);
    ctx->pc = 0x2CEEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEED8u;
    // 0x2ceedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x2CEED8u, 0x2CEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEE0u;
label_2ceee0:
    // 0x2ceee0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ceee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ceee4:
    // 0x2ceee4: 0xc0cdb38  jal         func_336CE0
label_2ceee8:
    if (ctx->pc == 0x2CEEE8u) {
        ctx->pc = 0x2CEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEE4u;
        // 0x2ceee8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEEECu;
        goto label_2ceeec;
    }
    ctx->pc = 0x2CEEE4u;
    SET_GPR_U32(ctx, 31, 0x2CEEECu);
    ctx->pc = 0x2CEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEEE4u;
    // 0x2ceee8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CEEE4u, 0x2CEEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEECu;
label_2ceeec:
    // 0x2ceeec: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x2ceeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_2ceef0:
    // 0x2ceef0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2ceef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2ceef4:
    // 0x2ceef4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ceef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ceef8:
    // 0x2ceef8: 0x0  nop
    ctx->pc = 0x2ceef8u;
    // NOP
label_2ceefc:
    // 0x2ceefc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ceefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cef00:
    // 0x2cef00: 0x0  nop
    ctx->pc = 0x2cef00u;
    // NOP
label_2cef04:
    // 0x2cef04: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_2cef08:
    if (ctx->pc == 0x2CEF08u) {
        ctx->pc = 0x2CEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF04u;
        // 0x2cef08: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF0Cu;
        goto label_2cef0c;
    }
    ctx->pc = 0x2CEF04u;
    {
        const bool branch_taken_0x2cef04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cef04) {
            ctx->pc = 0x2CEF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEF04u;
            // 0x2cef08: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF70u;
            goto label_2cef70;
        }
    }
    ctx->pc = 0x2CEF0Cu;
label_2cef0c:
    // 0x2cef0c: 0xc0a4e54  jal         func_293950
label_2cef10:
    if (ctx->pc == 0x2CEF10u) {
        ctx->pc = 0x2CEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF0Cu;
        // 0x2cef10: 0xae360044  sw          $s6, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF14u;
        goto label_2cef14;
    }
    ctx->pc = 0x2CEF0Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF14u);
    ctx->pc = 0x2CEF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF0Cu;
    // 0x2cef10: 0xae360044  sw          $s6, 0x44($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CEF0Cu, 0x2CEF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF14u;
label_2cef14:
    // 0x2cef14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cef14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cef18:
    // 0x2cef18: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2cef1c:
    if (ctx->pc == 0x2CEF1Cu) {
        ctx->pc = 0x2CEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF18u;
        // 0x2cef1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF20u;
        goto label_2cef20;
    }
    ctx->pc = 0x2CEF18u;
    {
        const bool branch_taken_0x2cef18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef18) {
            ctx->pc = 0x2CEF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEF18u;
            // 0x2cef1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF5Cu;
            goto label_2cef5c;
        }
    }
    ctx->pc = 0x2CEF20u;
label_2cef20:
    // 0x2cef20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cef24:
    // 0x2cef24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cef24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cef28:
    // 0x2cef28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cef2c:
    // 0x2cef2c: 0x40f809  jalr        $v0
label_2cef30:
    if (ctx->pc == 0x2CEF30u) {
        ctx->pc = 0x2CEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF2Cu;
        // 0x2cef30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF34u;
        goto label_2cef34;
    }
    ctx->pc = 0x2CEF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CEF34u);
        ctx->pc = 0x2CEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF2Cu;
        // 0x2cef30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEF2Cu, 0x2CEF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CEF34u;
label_2cef34:
    // 0x2cef34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cef34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cef38:
    // 0x2cef38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cef38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cef3c:
    // 0x2cef3c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2cef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_2cef40:
    // 0x2cef40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2cef40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2cef44:
    // 0x2cef44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cef44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cef48:
    // 0x2cef48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cef4c:
    // 0x2cef4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cef4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cef50:
    // 0x2cef50: 0xc0b7eea  jal         func_2DFBA8
label_2cef54:
    if (ctx->pc == 0x2CEF54u) {
        ctx->pc = 0x2CEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF50u;
        // 0x2cef54: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF58u;
        goto label_2cef58;
    }
    ctx->pc = 0x2CEF50u;
    SET_GPR_U32(ctx, 31, 0x2CEF58u);
    ctx->pc = 0x2CEF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF50u;
    // 0x2cef54: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2CEF50u, 0x2CEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF58u;
label_2cef58:
    // 0x2cef58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cef5c:
    // 0x2cef5c: 0xc0a35d6  jal         func_28D758
label_2cef60:
    if (ctx->pc == 0x2CEF60u) {
        ctx->pc = 0x2CEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF5Cu;
        // 0x2cef60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF64u;
        goto label_2cef64;
    }
    ctx->pc = 0x2CEF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF64u);
    ctx->pc = 0x2CEF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF5Cu;
    // 0x2cef60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CEF5Cu, 0x2CEF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF64u;
label_2cef64:
    // 0x2cef64: 0x10000136  b           . + 4 + (0x136 << 2)
label_2cef68:
    if (ctx->pc == 0x2CEF68u) {
        ctx->pc = 0x2CEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF64u;
        // 0x2cef68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF6Cu;
        goto label_2cef6c;
    }
    ctx->pc = 0x2CEF64u;
    {
        const bool branch_taken_0x2cef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF64u;
        // 0x2cef68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef64) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CEF6Cu;
label_2cef6c:
    // 0x2cef6c: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x2cef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2cef70:
    // 0x2cef70: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
label_2cef74:
    if (ctx->pc == 0x2CEF74u) {
        ctx->pc = 0x2CEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF70u;
        // 0x2cef74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF78u;
        goto label_2cef78;
    }
    ctx->pc = 0x2CEF70u;
    {
        const bool branch_taken_0x2cef70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF70u;
        // 0x2cef74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef70) {
            ctx->pc = 0x2CEFA0u;
            goto label_2cefa0;
        }
    }
    ctx->pc = 0x2CEF78u;
label_2cef78:
    // 0x2cef78: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cef78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cef7c:
    // 0x2cef7c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2cef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2cef80:
    // 0x2cef80: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2cef80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2cef84:
    // 0x2cef84: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x2cef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2cef88:
    // 0x2cef88: 0x24061f40  addiu       $a2, $zero, 0x1F40
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
label_2cef8c:
    // 0x2cef8c: 0xc0cd4fc  jal         func_3353F0
label_2cef90:
    if (ctx->pc == 0x2CEF90u) {
        ctx->pc = 0x2CEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF8Cu;
        // 0x2cef90: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEF94u;
        goto label_2cef94;
    }
    ctx->pc = 0x2CEF8Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF94u);
    ctx->pc = 0x2CEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF8Cu;
    // 0x2cef90: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CEF8Cu, 0x2CEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF94u;
label_2cef94:
    // 0x2cef94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2cef94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2cef98:
    // 0x2cef98: 0x10000128  b           . + 4 + (0x128 << 2)
label_2cef9c:
    if (ctx->pc == 0x2CEF9Cu) {
        ctx->pc = 0x2CEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF98u;
        // 0x2cef9c: 0xae300034  sw          $s0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEFA0u;
        goto label_2cefa0;
    }
    ctx->pc = 0x2CEF98u;
    {
        const bool branch_taken_0x2cef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF98u;
        // 0x2cef9c: 0xae300034  sw          $s0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef98) {
            ctx->pc = 0x2CF43Cu;
            goto label_2cf43c;
        }
    }
    ctx->pc = 0x2CEFA0u;
label_2cefa0:
    // 0x2cefa0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2cefa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2cefa4:
    // 0x2cefa4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2cefa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2cefa8:
    // 0x2cefa8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2cefa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2cefac:
    // 0x2cefac: 0x10600123  beqz        $v1, . + 4 + (0x123 << 2)
label_2cefb0:
    if (ctx->pc == 0x2CEFB0u) {
        ctx->pc = 0x2CEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFACu;
        // 0x2cefb0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEFB4u;
        goto label_2cefb4;
    }
    ctx->pc = 0x2CEFACu;
    {
        const bool branch_taken_0x2cefac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFACu;
        // 0x2cefb0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefac) {
            ctx->pc = 0x2CF43Cu;
            goto label_2cf43c;
        }
    }
    ctx->pc = 0x2CEFB4u;
label_2cefb4:
    // 0x2cefb4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2cefb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2cefb8:
    // 0x2cefb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cefbc:
    // 0x2cefbc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2cefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2cefc0:
    // 0x2cefc0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2cefc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2cefc4:
    // 0x2cefc4: 0xc0cd4ee  jal         func_3353B8
label_2cefc8:
    if (ctx->pc == 0x2CEFC8u) {
        ctx->pc = 0x2CEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFC4u;
        // 0x2cefc8: 0x905402d2  lbu         $s4, 0x2D2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 722)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEFCCu;
        goto label_2cefcc;
    }
    ctx->pc = 0x2CEFC4u;
    SET_GPR_U32(ctx, 31, 0x2CEFCCu);
    ctx->pc = 0x2CEFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEFC4u;
    // 0x2cefc8: 0x905402d2  lbu         $s4, 0x2D2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 722)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2CEFC4u, 0x2CEFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEFCCu;
label_2cefcc:
    // 0x2cefcc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2cefccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cefd0:
    // 0x2cefd0: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_2cefd4:
    if (ctx->pc == 0x2CEFD4u) {
        ctx->pc = 0x2CEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFD0u;
        // 0x2cefd4: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEFD8u;
        goto label_2cefd8;
    }
    ctx->pc = 0x2CEFD0u;
    {
        const bool branch_taken_0x2cefd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cefd0) {
            ctx->pc = 0x2CEFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEFD0u;
            // 0x2cefd4: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF08Cu;
            goto label_2cf08c;
        }
    }
    ctx->pc = 0x2CEFD8u;
label_2cefd8:
    // 0x2cefd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cefd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cefdc:
    // 0x2cefdc: 0xc105d9c  jal         func_417670
label_2cefe0:
    if (ctx->pc == 0x2CEFE0u) {
        ctx->pc = 0x2CEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFDCu;
        // 0x2cefe0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEFE4u;
        goto label_2cefe4;
    }
    ctx->pc = 0x2CEFDCu;
    SET_GPR_U32(ctx, 31, 0x2CEFE4u);
    ctx->pc = 0x2CEFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEFDCu;
    // 0x2cefe0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417670u, 0x2CEFDCu, 0x2CEFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEFE4u;
label_2cefe4:
    // 0x2cefe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cefe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cefe8:
    // 0x2cefe8: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
label_2cefec:
    if (ctx->pc == 0x2CEFECu) {
        ctx->pc = 0x2CEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFE8u;
        // 0x2cefec: 0xc7a10070  lwc1        $f1, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEFF0u;
        goto label_2ceff0;
    }
    ctx->pc = 0x2CEFE8u;
    {
        const bool branch_taken_0x2cefe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFE8u;
        // 0x2cefec: 0xc7a10070  lwc1        $f1, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefe8) {
            ctx->pc = 0x2CF088u;
            goto label_2cf088;
        }
    }
    ctx->pc = 0x2CEFF0u;
label_2ceff0:
    // 0x2ceff0: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2ceff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ceff4:
    // 0x2ceff4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ceff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2ceff8:
    // 0x2ceff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ceff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ceffc:
    // 0x2ceffc: 0x0  nop
    ctx->pc = 0x2ceffcu;
    // NOP
label_2cf000:
    // 0x2cf000: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
label_2cf004:
    if (ctx->pc == 0x2CF004u) {
        ctx->pc = 0x2CF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF000u;
        // 0x2cf004: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF008u;
        goto label_2cf008;
    }
    ctx->pc = 0x2CF000u;
    {
        const bool branch_taken_0x2cf000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf000) {
            ctx->pc = 0x2CF004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF000u;
            // 0x2cf004: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF08Cu;
            goto label_2cf08c;
        }
    }
    ctx->pc = 0x2CF008u;
label_2cf008:
    // 0x2cf008: 0xc10587a  jal         func_4161E8
label_2cf00c:
    if (ctx->pc == 0x2CF00Cu) {
        ctx->pc = 0x2CF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF008u;
        // 0x2cf00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF010u;
        goto label_2cf010;
    }
    ctx->pc = 0x2CF008u;
    SET_GPR_U32(ctx, 31, 0x2CF010u);
    ctx->pc = 0x2CF00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF008u;
    // 0x2cf00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CF008u, 0x2CF010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF010u;
label_2cf010:
    // 0x2cf010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf014:
    // 0x2cf014: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cf014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cf018:
    // 0x2cf018: 0xc091e94  jal         func_247A50
label_2cf01c:
    if (ctx->pc == 0x2CF01Cu) {
        ctx->pc = 0x2CF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF018u;
        // 0x2cf01c: 0x27a60074  addiu       $a2, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF020u;
        goto label_2cf020;
    }
    ctx->pc = 0x2CF018u;
    SET_GPR_U32(ctx, 31, 0x2CF020u);
    ctx->pc = 0x2CF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF018u;
    // 0x2cf01c: 0x27a60074  addiu       $a2, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A50u, 0x2CF018u, 0x2CF020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF020u;
label_2cf020:
    // 0x2cf020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf024:
    // 0x2cf024: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_2cf028:
    if (ctx->pc == 0x2CF028u) {
        ctx->pc = 0x2CF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF024u;
        // 0x2cf028: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF02Cu;
        goto label_2cf02c;
    }
    ctx->pc = 0x2CF024u;
    {
        const bool branch_taken_0x2cf024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf024) {
            ctx->pc = 0x2CF028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF024u;
            // 0x2cf028: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF08Cu;
            goto label_2cf08c;
        }
    }
    ctx->pc = 0x2CF02Cu;
label_2cf02c:
    // 0x2cf02c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2cf02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cf030:
    // 0x2cf030: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2cf030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2cf034:
    // 0x2cf034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cf038:
    // 0x2cf038: 0x0  nop
    ctx->pc = 0x2cf038u;
    // NOP
label_2cf03c:
    // 0x2cf03c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf040:
    // 0x2cf040: 0x0  nop
    ctx->pc = 0x2cf040u;
    // NOP
label_2cf044:
    // 0x2cf044: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_2cf048:
    if (ctx->pc == 0x2CF048u) {
        ctx->pc = 0x2CF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF044u;
        // 0x2cf048: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF04Cu;
        goto label_2cf04c;
    }
    ctx->pc = 0x2CF044u;
    {
        const bool branch_taken_0x2cf044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf044) {
            ctx->pc = 0x2CF048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF044u;
            // 0x2cf048: 0x87c40002  lh          $a0, 0x2($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF08Cu;
            goto label_2cf08c;
        }
    }
    ctx->pc = 0x2CF04Cu;
label_2cf04c:
    // 0x2cf04c: 0xc0a4e54  jal         func_293950
label_2cf050:
    if (ctx->pc == 0x2CF050u) {
        ctx->pc = 0x2CF054u;
        goto label_2cf054;
    }
    ctx->pc = 0x2CF04Cu;
    SET_GPR_U32(ctx, 31, 0x2CF054u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CF04Cu, 0x2CF054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF054u;
label_2cf054:
    // 0x2cf054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf058:
    // 0x2cf058: 0x1200ffbf  beqz        $s0, . + 4 + (-0x41 << 2)
label_2cf05c:
    if (ctx->pc == 0x2CF05Cu) {
        ctx->pc = 0x2CF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF058u;
        // 0x2cf05c: 0x3a880064  xori        $t0, $s4, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)100);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF060u;
        goto label_2cf060;
    }
    ctx->pc = 0x2CF058u;
    {
        const bool branch_taken_0x2cf058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF058u;
        // 0x2cf05c: 0x3a880064  xori        $t0, $s4, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)100);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf058) {
            ctx->pc = 0x2CEF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cef58;
        }
    }
    ctx->pc = 0x2CF060u;
label_2cf060:
    // 0x2cf060: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cf060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf064:
    // 0x2cf064: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2cf068:
    // 0x2cf068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cf068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cf06c:
    // 0x2cf06c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cf06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cf070:
    // 0x2cf070: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x2cf070u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cf074:
    // 0x2cf074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf078:
    // 0x2cf078: 0xc0b6dda  jal         func_2DB768
label_2cf07c:
    if (ctx->pc == 0x2CF07Cu) {
        ctx->pc = 0x2CF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF078u;
        // 0x2cf07c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF080u;
        goto label_2cf080;
    }
    ctx->pc = 0x2CF078u;
    SET_GPR_U32(ctx, 31, 0x2CF080u);
    ctx->pc = 0x2CF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF078u;
    // 0x2cf07c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x2CF078u, 0x2CF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF080u;
label_2cf080:
    // 0x2cf080: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_2cf084:
    if (ctx->pc == 0x2CF084u) {
        ctx->pc = 0x2CF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF080u;
        // 0x2cf084: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF088u;
        goto label_2cf088;
    }
    ctx->pc = 0x2CF080u;
    {
        const bool branch_taken_0x2cf080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF080u;
        // 0x2cf084: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf080) {
            ctx->pc = 0x2CEF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cef5c;
        }
    }
    ctx->pc = 0x2CF088u;
label_2cf088:
    // 0x2cf088: 0x87c40002  lh          $a0, 0x2($fp)
    ctx->pc = 0x2cf088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2cf08c:
    // 0x2cf08c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2cf08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2cf090:
    // 0x2cf090: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2cf090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2cf094:
    // 0x2cf094: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cf094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cf098:
    // 0x2cf098: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cf098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2cf09c:
    // 0x2cf09c: 0xc0cd7d2  jal         func_335F48
label_2cf0a0:
    if (ctx->pc == 0x2CF0A0u) {
        ctx->pc = 0x2CF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF09Cu;
        // 0x2cf0a0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0A4u;
        goto label_2cf0a4;
    }
    ctx->pc = 0x2CF09Cu;
    SET_GPR_U32(ctx, 31, 0x2CF0A4u);
    ctx->pc = 0x2CF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF09Cu;
    // 0x2cf0a0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2CF09Cu, 0x2CF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0A4u;
label_2cf0a4:
    // 0x2cf0a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cf0a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2cf0a8:
    // 0x2cf0a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cf0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0ac:
    // 0x2cf0ac: 0xc0cd780  jal         func_335E00
label_2cf0b0:
    if (ctx->pc == 0x2CF0B0u) {
        ctx->pc = 0x2CF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0ACu;
        // 0x2cf0b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0B4u;
        goto label_2cf0b4;
    }
    ctx->pc = 0x2CF0ACu;
    SET_GPR_U32(ctx, 31, 0x2CF0B4u);
    ctx->pc = 0x2CF0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0ACu;
    // 0x2cf0b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2CF0ACu, 0x2CF0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0B4u;
label_2cf0b4:
    // 0x2cf0b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cf0b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2cf0b8:
    // 0x2cf0b8: 0xc0cdd2e  jal         func_3374B8
label_2cf0bc:
    if (ctx->pc == 0x2CF0BCu) {
        ctx->pc = 0x2CF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0B8u;
        // 0x2cf0bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0C0u;
        goto label_2cf0c0;
    }
    ctx->pc = 0x2CF0B8u;
    SET_GPR_U32(ctx, 31, 0x2CF0C0u);
    ctx->pc = 0x2CF0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0B8u;
    // 0x2cf0bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2CF0B8u, 0x2CF0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0C0u;
label_2cf0c0:
    // 0x2cf0c0: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2cf0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2cf0c4:
    // 0x2cf0c4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2cf0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2cf0c8:
    // 0x2cf0c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cf0cc:
    // 0x2cf0cc: 0x0  nop
    ctx->pc = 0x2cf0ccu;
    // NOP
label_2cf0d0:
    // 0x2cf0d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf0d4:
    // 0x2cf0d4: 0x0  nop
    ctx->pc = 0x2cf0d4u;
    // NOP
label_2cf0d8:
    // 0x2cf0d8: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2cf0dc:
    if (ctx->pc == 0x2CF0DCu) {
        ctx->pc = 0x2CF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0D8u;
        // 0x2cf0dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0E0u;
        goto label_2cf0e0;
    }
    ctx->pc = 0x2CF0D8u;
    {
        const bool branch_taken_0x2cf0d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf0d8) {
            ctx->pc = 0x2CF0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF0D8u;
            // 0x2cf0dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF11Cu;
            goto label_2cf11c;
        }
    }
    ctx->pc = 0x2CF0E0u;
label_2cf0e0:
    // 0x2cf0e0: 0xc0a367c  jal         func_28D9F0
label_2cf0e4:
    if (ctx->pc == 0x2CF0E4u) {
        ctx->pc = 0x2CF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0E0u;
        // 0x2cf0e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0E8u;
        goto label_2cf0e8;
    }
    ctx->pc = 0x2CF0E0u;
    SET_GPR_U32(ctx, 31, 0x2CF0E8u);
    ctx->pc = 0x2CF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0E0u;
    // 0x2cf0e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CF0E0u, 0x2CF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0E8u;
label_2cf0e8:
    // 0x2cf0e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf0ec:
    // 0x2cf0ec: 0x120000d4  beqz        $s0, . + 4 + (0xD4 << 2)
label_2cf0f0:
    if (ctx->pc == 0x2CF0F0u) {
        ctx->pc = 0x2CF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0ECu;
        // 0x2cf0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0F4u;
        goto label_2cf0f4;
    }
    ctx->pc = 0x2CF0ECu;
    {
        const bool branch_taken_0x2cf0ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0ECu;
        // 0x2cf0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0ec) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CF0F4u;
label_2cf0f4:
    // 0x2cf0f4: 0xc0884f6  jal         func_2213D8
label_2cf0f8:
    if (ctx->pc == 0x2CF0F8u) {
        ctx->pc = 0x2CF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0F4u;
        // 0x2cf0f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF0FCu;
        goto label_2cf0fc;
    }
    ctx->pc = 0x2CF0F4u;
    SET_GPR_U32(ctx, 31, 0x2CF0FCu);
    ctx->pc = 0x2CF0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0F4u;
    // 0x2cf0f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CF0F4u, 0x2CF0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0FCu;
label_2cf0fc:
    // 0x2cf0fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cf0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf100:
    // 0x2cf100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf104:
    // 0x2cf104: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2cf104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2cf108:
    // 0x2cf108: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cf108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cf10c:
    // 0x2cf10c: 0xc0bf800  jal         func_2FE000
label_2cf110:
    if (ctx->pc == 0x2CF110u) {
        ctx->pc = 0x2CF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF10Cu;
        // 0x2cf110: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF114u;
        goto label_2cf114;
    }
    ctx->pc = 0x2CF10Cu;
    SET_GPR_U32(ctx, 31, 0x2CF114u);
    ctx->pc = 0x2CF110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF10Cu;
    // 0x2cf110: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CF10Cu, 0x2CF114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF114u;
label_2cf114:
    // 0x2cf114: 0x100000ca  b           . + 4 + (0xCA << 2)
label_2cf118:
    if (ctx->pc == 0x2CF118u) {
        ctx->pc = 0x2CF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF114u;
        // 0x2cf118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF11Cu;
        goto label_2cf11c;
    }
    ctx->pc = 0x2CF114u;
    {
        const bool branch_taken_0x2cf114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF114u;
        // 0x2cf118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf114) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CF11Cu;
label_2cf11c:
    // 0x2cf11c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2cf11cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2cf120:
    // 0x2cf120: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2cf120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2cf124:
    // 0x2cf124: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_2cf128:
    if (ctx->pc == 0x2CF128u) {
        ctx->pc = 0x2CF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF124u;
        // 0x2cf128: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF12Cu;
        goto label_2cf12c;
    }
    ctx->pc = 0x2CF124u;
    {
        const bool branch_taken_0x2cf124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF124u;
        // 0x2cf128: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf124) {
            ctx->pc = 0x2CF18Cu;
            goto label_2cf18c;
        }
    }
    ctx->pc = 0x2CF12Cu;
label_2cf12c:
    // 0x2cf12c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2cf12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2cf130:
    // 0x2cf130: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2cf130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2cf134:
    // 0x2cf134: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2cf134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2cf138:
    // 0x2cf138: 0x40f809  jalr        $v0
label_2cf13c:
    if (ctx->pc == 0x2CF13Cu) {
        ctx->pc = 0x2CF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF138u;
        // 0x2cf13c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF140u;
        goto label_2cf140;
    }
    ctx->pc = 0x2CF138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF140u);
        ctx->pc = 0x2CF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF138u;
        // 0x2cf13c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF138u, 0x2CF140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF140u;
label_2cf140:
    // 0x2cf140: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2cf140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cf144:
    // 0x2cf144: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_2cf148:
    if (ctx->pc == 0x2CF148u) {
        ctx->pc = 0x2CF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF144u;
        // 0x2cf148: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF14Cu;
        goto label_2cf14c;
    }
    ctx->pc = 0x2CF144u;
    {
        const bool branch_taken_0x2cf144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF144u;
        // 0x2cf148: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf144) {
            ctx->pc = 0x2CF18Cu;
            goto label_2cf18c;
        }
    }
    ctx->pc = 0x2CF14Cu;
label_2cf14c:
    // 0x2cf14c: 0xc0a367c  jal         func_28D9F0
label_2cf150:
    if (ctx->pc == 0x2CF150u) {
        ctx->pc = 0x2CF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF14Cu;
        // 0x2cf150: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF154u;
        goto label_2cf154;
    }
    ctx->pc = 0x2CF14Cu;
    SET_GPR_U32(ctx, 31, 0x2CF154u);
    ctx->pc = 0x2CF150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF14Cu;
    // 0x2cf150: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CF14Cu, 0x2CF154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF154u;
label_2cf154:
    // 0x2cf154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf158:
    // 0x2cf158: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2cf15c:
    if (ctx->pc == 0x2CF15Cu) {
        ctx->pc = 0x2CF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF158u;
        // 0x2cf15c: 0x2406025b  addiu       $a2, $zero, 0x25B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF160u;
        goto label_2cf160;
    }
    ctx->pc = 0x2CF158u;
    {
        const bool branch_taken_0x2cf158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF158u;
        // 0x2cf15c: 0x2406025b  addiu       $a2, $zero, 0x25B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf158) {
            ctx->pc = 0x2CF188u;
            goto label_2cf188;
        }
    }
    ctx->pc = 0x2CF160u;
label_2cf160:
    // 0x2cf160: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2cf160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2cf164:
    // 0x2cf164: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cf164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2cf168:
    // 0x2cf168: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cf168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cf16c:
    // 0x2cf16c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2cf16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cf170:
    // 0x2cf170: 0x80470040  lb          $a3, 0x40($v0)
    ctx->pc = 0x2cf170u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
label_2cf174:
    // 0x2cf174: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cf174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2cf178:
    // 0x2cf178: 0x30e70007  andi        $a3, $a3, 0x7
    ctx->pc = 0x2cf178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_2cf17c:
    // 0x2cf17c: 0xa0470040  sb          $a3, 0x40($v0)
    ctx->pc = 0x2cf17cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 7));
label_2cf180:
    // 0x2cf180: 0xc0be8c0  jal         func_2FA300
label_2cf184:
    if (ctx->pc == 0x2CF184u) {
        ctx->pc = 0x2CF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF180u;
        // 0x2cf184: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF188u;
        goto label_2cf188;
    }
    ctx->pc = 0x2CF180u;
    SET_GPR_U32(ctx, 31, 0x2CF188u);
    ctx->pc = 0x2CF184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF180u;
    // 0x2cf184: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2CF180u, 0x2CF188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF188u;
label_2cf188:
    // 0x2cf188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf18c:
    // 0x2cf18c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf190:
    // 0x2cf190: 0x100000ab  b           . + 4 + (0xAB << 2)
label_2cf194:
    if (ctx->pc == 0x2CF194u) {
        ctx->pc = 0x2CF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF190u;
        // 0x2cf194: 0xa2230048  sb          $v1, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF198u;
        goto label_2cf198;
    }
    ctx->pc = 0x2CF190u;
    {
        const bool branch_taken_0x2cf190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF190u;
        // 0x2cf194: 0xa2230048  sb          $v1, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf190) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CF198u;
label_2cf198:
    // 0x2cf198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cf198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cf19c:
    // 0x2cf19c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cf19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cf1a0:
    // 0x2cf1a0: 0x2450b880  addiu       $s0, $v0, -0x4780
    ctx->pc = 0x2cf1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2cf1a4:
    // 0x2cf1a4: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x2cf1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_2cf1a8:
    // 0x2cf1a8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2cf1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2cf1ac:
    // 0x2cf1ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cf1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2cf1b0:
    // 0x2cf1b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cf1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cf1b4:
    // 0x2cf1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf1b8:
    // 0x2cf1b8: 0xc0cd508  jal         func_335420
label_2cf1bc:
    if (ctx->pc == 0x2CF1BCu) {
        ctx->pc = 0x2CF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1B8u;
        // 0x2cf1bc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF1C0u;
        goto label_2cf1c0;
    }
    ctx->pc = 0x2CF1B8u;
    SET_GPR_U32(ctx, 31, 0x2CF1C0u);
    ctx->pc = 0x2CF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1B8u;
    // 0x2cf1bc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2CF1B8u, 0x2CF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1C0u;
label_2cf1c0:
    // 0x2cf1c0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2cf1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cf1c4:
    // 0x2cf1c4: 0x16720003  bne         $s3, $s2, . + 4 + (0x3 << 2)
label_2cf1c8:
    if (ctx->pc == 0x2CF1C8u) {
        ctx->pc = 0x2CF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1C4u;
        // 0x2cf1c8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF1CCu;
        goto label_2cf1cc;
    }
    ctx->pc = 0x2CF1C4u;
    {
        const bool branch_taken_0x2cf1c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1C4u;
        // 0x2cf1c8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf1c4) {
            ctx->pc = 0x2CF1D4u;
            goto label_2cf1d4;
        }
    }
    ctx->pc = 0x2CF1CCu;
label_2cf1cc:
    // 0x2cf1cc: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x2cf1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_2cf1d0:
    // 0x2cf1d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2cf1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2cf1d4:
    // 0x2cf1d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cf1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cf1d8:
    // 0x2cf1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf1dc:
    // 0x2cf1dc: 0xc0cd508  jal         func_335420
label_2cf1e0:
    if (ctx->pc == 0x2CF1E0u) {
        ctx->pc = 0x2CF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1DCu;
        // 0x2cf1e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF1E4u;
        goto label_2cf1e4;
    }
    ctx->pc = 0x2CF1DCu;
    SET_GPR_U32(ctx, 31, 0x2CF1E4u);
    ctx->pc = 0x2CF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1DCu;
    // 0x2cf1e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2CF1DCu, 0x2CF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1E4u;
label_2cf1e4:
    // 0x2cf1e4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2cf1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2cf1e8:
    // 0x2cf1e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2cf1e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2cf1ec:
    // 0x2cf1ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cf1f0:
    // 0x2cf1f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2cf1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2cf1f4:
    // 0x2cf1f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cf1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2cf1f8:
    // 0x2cf1f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cf1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2cf1fc:
    // 0x2cf1fc: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2cf1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2cf200:
    // 0x2cf200: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2cf200u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cf204:
    // 0x2cf204: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2cf204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf208:
    // 0x2cf208: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2cf208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2cf20c:
    // 0x2cf20c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2cf20cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_2cf210:
    // 0x2cf210: 0xc12e310  jal         func_4B8C40
label_2cf214:
    if (ctx->pc == 0x2CF214u) {
        ctx->pc = 0x2CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF210u;
        // 0x2cf214: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF218u;
        goto label_2cf218;
    }
    ctx->pc = 0x2CF210u;
    SET_GPR_U32(ctx, 31, 0x2CF218u);
    ctx->pc = 0x2CF214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF210u;
    // 0x2cf214: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2CF210u, 0x2CF218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF218u;
label_2cf218:
    // 0x2cf218: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cf218u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2cf21c:
    // 0x2cf21c: 0xc12e29c  jal         func_4B8A70
label_2cf220:
    if (ctx->pc == 0x2CF220u) {
        ctx->pc = 0x2CF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF21Cu;
        // 0x2cf220: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF224u;
        goto label_2cf224;
    }
    ctx->pc = 0x2CF21Cu;
    SET_GPR_U32(ctx, 31, 0x2CF224u);
    ctx->pc = 0x2CF220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF21Cu;
    // 0x2cf220: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2CF21Cu, 0x2CF224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF224u;
label_2cf224:
    // 0x2cf224: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2cf224u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf228:
    // 0x2cf228: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cf228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cf22c:
    // 0x2cf22c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x2cf22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2cf230:
    // 0x2cf230: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x2cf230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_2cf234:
    // 0x2cf234: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cf234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2cf238:
    // 0x2cf238: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2cf238u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2cf23c:
    // 0x2cf23c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2cf23cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2cf240:
    // 0x2cf240: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2cf240u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2cf244:
    // 0x2cf244: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2cf244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2cf248:
    // 0x2cf248: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2cf248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2cf24c:
    // 0x2cf24c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cf24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cf250:
    // 0x2cf250: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2cf250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cf254:
    // 0x2cf254: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2cf254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cf258:
    // 0x2cf258: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2cf258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2cf25c:
    // 0x2cf25c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2cf25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2cf260:
    // 0x2cf260: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2cf260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2cf264:
    // 0x2cf264: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2cf264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2cf268:
    // 0x2cf268: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2cf268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2cf26c:
    // 0x2cf26c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2cf26cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf270:
    // 0x2cf270: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2cf270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2cf274:
    // 0x2cf274: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2cf274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2cf278:
    // 0x2cf278: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2cf278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2cf27c:
    // 0x2cf27c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2cf27cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2cf280:
    // 0x2cf280: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2cf280u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2cf284:
    // 0x2cf284: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2cf284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2cf288:
    // 0x2cf288: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2cf288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2cf28c:
    // 0x2cf28c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2cf28cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2cf290:
    // 0x2cf290: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2cf290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2cf294:
    // 0x2cf294: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2cf294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2cf298:
    // 0x2cf298: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2cf298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2cf29c:
    // 0x2cf29c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2cf29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2cf2a0:
    // 0x2cf2a0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2cf2a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2cf2a4:
    // 0x2cf2a4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2cf2a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2cf2a8:
    // 0x2cf2a8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2cf2a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2cf2ac:
    // 0x2cf2ac: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2cf2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2cf2b0:
    // 0x2cf2b0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2cf2b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_2cf2b4:
    // 0x2cf2b4: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x2cf2b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2cf2b8:
    // 0x2cf2b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cf2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cf2bc:
    // 0x2cf2bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2cf2bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2cf2c0:
    // 0x2cf2c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2cf2c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2cf2c4:
    // 0x2cf2c4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2cf2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2cf2c8:
    // 0x2cf2c8: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x2cf2c8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_2cf2cc:
    // 0x2cf2cc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2cf2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2cf2d0:
    // 0x2cf2d0: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x2cf2d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2cf2d4:
    // 0x2cf2d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cf2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2cf2d8:
    // 0x2cf2d8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2cf2d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2cf2dc:
    // 0x2cf2dc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2cf2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2cf2e0:
    // 0x2cf2e0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2cf2e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2cf2e4:
    // 0x2cf2e4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2cf2e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2cf2e8:
    // 0x2cf2e8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2cf2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2cf2ec:
    // 0x2cf2ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2cf2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2cf2f0:
    // 0x2cf2f0: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x2cf2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
label_2cf2f4:
    // 0x2cf2f4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2cf2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2cf2f8:
    // 0x2cf2f8: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x2cf2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_2cf2fc:
    // 0x2cf2fc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2cf2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_2cf300:
    // 0x2cf300: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2cf300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2cf304:
    // 0x2cf304: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2cf304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2cf308:
    // 0x2cf308: 0xc0cdb38  jal         func_336CE0
label_2cf30c:
    if (ctx->pc == 0x2CF30Cu) {
        ctx->pc = 0x2CF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF308u;
        // 0x2cf30c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF310u;
        goto label_2cf310;
    }
    ctx->pc = 0x2CF308u;
    SET_GPR_U32(ctx, 31, 0x2CF310u);
    ctx->pc = 0x2CF30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF308u;
    // 0x2cf30c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CF308u, 0x2CF310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF310u;
label_2cf310:
    // 0x2cf310: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cf310u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2cf314:
    // 0x2cf314: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2cf314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2cf318:
    // 0x2cf318: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cf31c:
    // 0x2cf31c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2cf31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cf320:
    // 0x2cf320: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cf320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2cf324:
    // 0x2cf324: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cf324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cf328:
    // 0x2cf328: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2cf328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf32c:
    // 0x2cf32c: 0x0  nop
    ctx->pc = 0x2cf32cu;
    // NOP
label_2cf330:
    // 0x2cf330: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_2cf334:
    if (ctx->pc == 0x2CF334u) {
        ctx->pc = 0x2CF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF330u;
        // 0x2cf334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF338u;
        goto label_2cf338;
    }
    ctx->pc = 0x2CF330u;
    {
        const bool branch_taken_0x2cf330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF330u;
        // 0x2cf334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf330) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CF338u;
label_2cf338:
    // 0x2cf338: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cf338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf33c:
    // 0x2cf33c: 0xc0a3fce  jal         func_28FF38
label_2cf340:
    if (ctx->pc == 0x2CF340u) {
        ctx->pc = 0x2CF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF33Cu;
        // 0x2cf340: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF344u;
        goto label_2cf344;
    }
    ctx->pc = 0x2CF33Cu;
    SET_GPR_U32(ctx, 31, 0x2CF344u);
    ctx->pc = 0x2CF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF33Cu;
    // 0x2cf340: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2CF33Cu, 0x2CF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF344u;
label_2cf344:
    // 0x2cf344: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_2cf348:
    if (ctx->pc == 0x2CF348u) {
        ctx->pc = 0x2CF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF344u;
        // 0x2cf348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF34Cu;
        goto label_2cf34c;
    }
    ctx->pc = 0x2CF344u;
    {
        const bool branch_taken_0x2cf344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF344u;
        // 0x2cf348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf344) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CF34Cu;
label_2cf34c:
    // 0x2cf34c: 0xc0941c2  jal         func_250708
label_2cf350:
    if (ctx->pc == 0x2CF350u) {
        ctx->pc = 0x2CF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF34Cu;
        // 0x2cf350: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF354u;
        goto label_2cf354;
    }
    ctx->pc = 0x2CF34Cu;
    SET_GPR_U32(ctx, 31, 0x2CF354u);
    ctx->pc = 0x2CF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF34Cu;
    // 0x2cf350: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2CF34Cu, 0x2CF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF354u;
label_2cf354:
    // 0x2cf354: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2cf358:
    if (ctx->pc == 0x2CF358u) {
        ctx->pc = 0x2CF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF354u;
        // 0x2cf358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF35Cu;
        goto label_2cf35c;
    }
    ctx->pc = 0x2CF354u;
    {
        const bool branch_taken_0x2cf354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF354u;
        // 0x2cf358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf354) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CF35Cu;
label_2cf35c:
    // 0x2cf35c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2cf35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2cf360:
    // 0x2cf360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cf364:
    // 0x2cf364: 0x0  nop
    ctx->pc = 0x2cf364u;
    // NOP
label_2cf368:
    // 0x2cf368: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2cf368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf36c:
    // 0x2cf36c: 0x0  nop
    ctx->pc = 0x2cf36cu;
    // NOP
label_2cf370:
    // 0x2cf370: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2cf374:
    if (ctx->pc == 0x2CF374u) {
        ctx->pc = 0x2CF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF370u;
        // 0x2cf374: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF378u;
        goto label_2cf378;
    }
    ctx->pc = 0x2CF370u;
    {
        const bool branch_taken_0x2cf370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF370u;
        // 0x2cf374: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf370) {
            ctx->pc = 0x2CF37Cu;
            goto label_2cf37c;
        }
    }
    ctx->pc = 0x2CF378u;
label_2cf378:
    // 0x2cf378: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2cf378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cf37c:
    // 0x2cf37c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cf37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cf380:
    // 0x2cf380: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2cf384:
    // 0x2cf384: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2cf384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2cf388:
    // 0x2cf388: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2cf388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_2cf38c:
    // 0x2cf38c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2cf38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2cf390:
    // 0x2cf390: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2cf390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2cf394:
    // 0x2cf394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cf398:
    // 0x2cf398: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2cf398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2cf39c:
    // 0x2cf39c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2cf39cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2cf3a0:
    // 0x2cf3a0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2cf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2cf3a4:
    // 0x2cf3a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2cf3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2cf3a8:
    // 0x2cf3a8: 0xc1067b8  jal         func_419EE0
label_2cf3ac:
    if (ctx->pc == 0x2CF3ACu) {
        ctx->pc = 0x2CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3A8u;
        // 0x2cf3ac: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3B0u;
        goto label_2cf3b0;
    }
    ctx->pc = 0x2CF3A8u;
    SET_GPR_U32(ctx, 31, 0x2CF3B0u);
    ctx->pc = 0x2CF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3A8u;
    // 0x2cf3ac: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2CF3A8u, 0x2CF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3B0u;
label_2cf3b0:
    // 0x2cf3b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2cf3b4:
    if (ctx->pc == 0x2CF3B4u) {
        ctx->pc = 0x2CF3B8u;
        goto label_2cf3b8;
    }
    ctx->pc = 0x2CF3B0u;
    {
        const bool branch_taken_0x2cf3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3b0) {
            ctx->pc = 0x2CF3ECu;
            goto label_2cf3ec;
        }
    }
    ctx->pc = 0x2CF3B8u;
label_2cf3b8:
    // 0x2cf3b8: 0xc087502  jal         func_21D408
label_2cf3bc:
    if (ctx->pc == 0x2CF3BCu) {
        ctx->pc = 0x2CF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3B8u;
        // 0x2cf3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3C0u;
        goto label_2cf3c0;
    }
    ctx->pc = 0x2CF3B8u;
    SET_GPR_U32(ctx, 31, 0x2CF3C0u);
    ctx->pc = 0x2CF3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3B8u;
    // 0x2cf3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CF3B8u, 0x2CF3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3C0u;
label_2cf3c0:
    // 0x2cf3c0: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2cf3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2cf3c4:
    // 0x2cf3c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2cf3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2cf3c8:
    // 0x2cf3c8: 0x14760008  bne         $v1, $s6, . + 4 + (0x8 << 2)
label_2cf3cc:
    if (ctx->pc == 0x2CF3CCu) {
        ctx->pc = 0x2CF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3C8u;
        // 0x2cf3cc: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3D0u;
        goto label_2cf3d0;
    }
    ctx->pc = 0x2CF3C8u;
    {
        const bool branch_taken_0x2cf3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x2CF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3C8u;
        // 0x2cf3cc: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3c8) {
            ctx->pc = 0x2CF3ECu;
            goto label_2cf3ec;
        }
    }
    ctx->pc = 0x2CF3D0u;
label_2cf3d0:
    // 0x2cf3d0: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2cf3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_2cf3d4:
    // 0x2cf3d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cf3d8:
    // 0x2cf3d8: 0x0  nop
    ctx->pc = 0x2cf3d8u;
    // NOP
label_2cf3dc:
    // 0x2cf3dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cf3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf3e0:
    // 0x2cf3e0: 0x0  nop
    ctx->pc = 0x2cf3e0u;
    // NOP
label_2cf3e4:
    // 0x2cf3e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2cf3e8:
    if (ctx->pc == 0x2CF3E8u) {
        ctx->pc = 0x2CF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3E4u;
        // 0x2cf3e8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3ECu;
        goto label_2cf3ec;
    }
    ctx->pc = 0x2CF3E4u;
    {
        const bool branch_taken_0x2cf3e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf3e4) {
            ctx->pc = 0x2CF3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF3E4u;
            // 0x2cf3e8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF3ECu;
            goto label_2cf3ec;
        }
    }
    ctx->pc = 0x2CF3ECu;
label_2cf3ec:
    // 0x2cf3ec: 0xc0a367c  jal         func_28D9F0
label_2cf3f0:
    if (ctx->pc == 0x2CF3F0u) {
        ctx->pc = 0x2CF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3ECu;
        // 0x2cf3f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF3F4u;
        goto label_2cf3f4;
    }
    ctx->pc = 0x2CF3ECu;
    SET_GPR_U32(ctx, 31, 0x2CF3F4u);
    ctx->pc = 0x2CF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF3ECu;
    // 0x2cf3f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CF3ECu, 0x2CF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3F4u;
label_2cf3f4:
    // 0x2cf3f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf3f8:
    // 0x2cf3f8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2cf3fc:
    if (ctx->pc == 0x2CF3FCu) {
        ctx->pc = 0x2CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3F8u;
        // 0x2cf3fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF400u;
        goto label_2cf400;
    }
    ctx->pc = 0x2CF3F8u;
    {
        const bool branch_taken_0x2cf3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3F8u;
        // 0x2cf3fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3f8) {
            ctx->pc = 0x2CF42Cu;
            goto label_2cf42c;
        }
    }
    ctx->pc = 0x2CF400u;
label_2cf400:
    // 0x2cf400: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cf400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf404:
    // 0x2cf404: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2cf404u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2cf408:
    // 0x2cf408: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2cf408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf40c:
    // 0x2cf40c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2cf40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2cf410:
    // 0x2cf410: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2cf410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2cf414:
    // 0x2cf414: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cf414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cf418:
    // 0x2cf418: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cf418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cf41c:
    // 0x2cf41c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cf41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf420:
    // 0x2cf420: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cf424:
    // 0x2cf424: 0xc0bee7a  jal         func_2FB9E8
label_2cf428:
    if (ctx->pc == 0x2CF428u) {
        ctx->pc = 0x2CF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF424u;
        // 0x2cf428: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF42Cu;
        goto label_2cf42c;
    }
    ctx->pc = 0x2CF424u;
    SET_GPR_U32(ctx, 31, 0x2CF42Cu);
    ctx->pc = 0x2CF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF424u;
    // 0x2cf428: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2CF424u, 0x2CF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF42Cu;
label_2cf42c:
    // 0x2cf42c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2cf42cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf430:
    // 0x2cf430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf434:
    // 0x2cf434: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x2cf434u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
label_2cf438:
    // 0x2cf438: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2cf438u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_2cf43c:
    // 0x2cf43c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf440:
    // 0x2cf440: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2cf440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2cf444:
    // 0x2cf444: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2cf444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2cf448:
    // 0x2cf448: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2cf448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2cf44c:
    // 0x2cf44c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2cf44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2cf450:
    // 0x2cf450: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2cf450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2cf454:
    // 0x2cf454: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2cf454u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2cf458:
    // 0x2cf458: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2cf458u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2cf45c:
    // 0x2cf45c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2cf45cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2cf460:
    // 0x2cf460: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2cf460u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2cf464:
    // 0x2cf464: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2cf464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2cf468:
    // 0x2cf468: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2cf468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cf46c:
    // 0x2cf46c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2cf46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cf470:
    // 0x2cf470: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2cf470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cf474:
    // 0x2cf474: 0x3e00008  jr          $ra
label_2cf478:
    if (ctx->pc == 0x2CF478u) {
        ctx->pc = 0x2CF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF474u;
        // 0x2cf478: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF47Cu;
        goto label_2cf47c;
    }
    ctx->pc = 0x2CF474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF474u;
        // 0x2cf478: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF47Cu;
label_2cf47c:
    // 0x2cf47c: 0x0  nop
    ctx->pc = 0x2cf47cu;
    // NOP
    ctx->pc = 0x2cf480u;
}
