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

// Function: sub_0039EC60
// Address: 0x39ec60 - 0x39f450
void sub_0039EC60_0x39ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EC60_0x39ec60");
#endif

    switch (ctx->pc) {
        case 0x39ec60u: goto label_39ec60;
        case 0x39ec64u: goto label_39ec64;
        case 0x39ec68u: goto label_39ec68;
        case 0x39ec6cu: goto label_39ec6c;
        case 0x39ec70u: goto label_39ec70;
        case 0x39ec74u: goto label_39ec74;
        case 0x39ec78u: goto label_39ec78;
        case 0x39ec7cu: goto label_39ec7c;
        case 0x39ec80u: goto label_39ec80;
        case 0x39ec84u: goto label_39ec84;
        case 0x39ec88u: goto label_39ec88;
        case 0x39ec8cu: goto label_39ec8c;
        case 0x39ec90u: goto label_39ec90;
        case 0x39ec94u: goto label_39ec94;
        case 0x39ec98u: goto label_39ec98;
        case 0x39ec9cu: goto label_39ec9c;
        case 0x39eca0u: goto label_39eca0;
        case 0x39eca4u: goto label_39eca4;
        case 0x39eca8u: goto label_39eca8;
        case 0x39ecacu: goto label_39ecac;
        case 0x39ecb0u: goto label_39ecb0;
        case 0x39ecb4u: goto label_39ecb4;
        case 0x39ecb8u: goto label_39ecb8;
        case 0x39ecbcu: goto label_39ecbc;
        case 0x39ecc0u: goto label_39ecc0;
        case 0x39ecc4u: goto label_39ecc4;
        case 0x39ecc8u: goto label_39ecc8;
        case 0x39ecccu: goto label_39eccc;
        case 0x39ecd0u: goto label_39ecd0;
        case 0x39ecd4u: goto label_39ecd4;
        case 0x39ecd8u: goto label_39ecd8;
        case 0x39ecdcu: goto label_39ecdc;
        case 0x39ece0u: goto label_39ece0;
        case 0x39ece4u: goto label_39ece4;
        case 0x39ece8u: goto label_39ece8;
        case 0x39ececu: goto label_39ecec;
        case 0x39ecf0u: goto label_39ecf0;
        case 0x39ecf4u: goto label_39ecf4;
        case 0x39ecf8u: goto label_39ecf8;
        case 0x39ecfcu: goto label_39ecfc;
        case 0x39ed00u: goto label_39ed00;
        case 0x39ed04u: goto label_39ed04;
        case 0x39ed08u: goto label_39ed08;
        case 0x39ed0cu: goto label_39ed0c;
        case 0x39ed10u: goto label_39ed10;
        case 0x39ed14u: goto label_39ed14;
        case 0x39ed18u: goto label_39ed18;
        case 0x39ed1cu: goto label_39ed1c;
        case 0x39ed20u: goto label_39ed20;
        case 0x39ed24u: goto label_39ed24;
        case 0x39ed28u: goto label_39ed28;
        case 0x39ed2cu: goto label_39ed2c;
        case 0x39ed30u: goto label_39ed30;
        case 0x39ed34u: goto label_39ed34;
        case 0x39ed38u: goto label_39ed38;
        case 0x39ed3cu: goto label_39ed3c;
        case 0x39ed40u: goto label_39ed40;
        case 0x39ed44u: goto label_39ed44;
        case 0x39ed48u: goto label_39ed48;
        case 0x39ed4cu: goto label_39ed4c;
        case 0x39ed50u: goto label_39ed50;
        case 0x39ed54u: goto label_39ed54;
        case 0x39ed58u: goto label_39ed58;
        case 0x39ed5cu: goto label_39ed5c;
        case 0x39ed60u: goto label_39ed60;
        case 0x39ed64u: goto label_39ed64;
        case 0x39ed68u: goto label_39ed68;
        case 0x39ed6cu: goto label_39ed6c;
        case 0x39ed70u: goto label_39ed70;
        case 0x39ed74u: goto label_39ed74;
        case 0x39ed78u: goto label_39ed78;
        case 0x39ed7cu: goto label_39ed7c;
        case 0x39ed80u: goto label_39ed80;
        case 0x39ed84u: goto label_39ed84;
        case 0x39ed88u: goto label_39ed88;
        case 0x39ed8cu: goto label_39ed8c;
        case 0x39ed90u: goto label_39ed90;
        case 0x39ed94u: goto label_39ed94;
        case 0x39ed98u: goto label_39ed98;
        case 0x39ed9cu: goto label_39ed9c;
        case 0x39eda0u: goto label_39eda0;
        case 0x39eda4u: goto label_39eda4;
        case 0x39eda8u: goto label_39eda8;
        case 0x39edacu: goto label_39edac;
        case 0x39edb0u: goto label_39edb0;
        case 0x39edb4u: goto label_39edb4;
        case 0x39edb8u: goto label_39edb8;
        case 0x39edbcu: goto label_39edbc;
        case 0x39edc0u: goto label_39edc0;
        case 0x39edc4u: goto label_39edc4;
        case 0x39edc8u: goto label_39edc8;
        case 0x39edccu: goto label_39edcc;
        case 0x39edd0u: goto label_39edd0;
        case 0x39edd4u: goto label_39edd4;
        case 0x39edd8u: goto label_39edd8;
        case 0x39eddcu: goto label_39eddc;
        case 0x39ede0u: goto label_39ede0;
        case 0x39ede4u: goto label_39ede4;
        case 0x39ede8u: goto label_39ede8;
        case 0x39edecu: goto label_39edec;
        case 0x39edf0u: goto label_39edf0;
        case 0x39edf4u: goto label_39edf4;
        case 0x39edf8u: goto label_39edf8;
        case 0x39edfcu: goto label_39edfc;
        case 0x39ee00u: goto label_39ee00;
        case 0x39ee04u: goto label_39ee04;
        case 0x39ee08u: goto label_39ee08;
        case 0x39ee0cu: goto label_39ee0c;
        case 0x39ee10u: goto label_39ee10;
        case 0x39ee14u: goto label_39ee14;
        case 0x39ee18u: goto label_39ee18;
        case 0x39ee1cu: goto label_39ee1c;
        case 0x39ee20u: goto label_39ee20;
        case 0x39ee24u: goto label_39ee24;
        case 0x39ee28u: goto label_39ee28;
        case 0x39ee2cu: goto label_39ee2c;
        case 0x39ee30u: goto label_39ee30;
        case 0x39ee34u: goto label_39ee34;
        case 0x39ee38u: goto label_39ee38;
        case 0x39ee3cu: goto label_39ee3c;
        case 0x39ee40u: goto label_39ee40;
        case 0x39ee44u: goto label_39ee44;
        case 0x39ee48u: goto label_39ee48;
        case 0x39ee4cu: goto label_39ee4c;
        case 0x39ee50u: goto label_39ee50;
        case 0x39ee54u: goto label_39ee54;
        case 0x39ee58u: goto label_39ee58;
        case 0x39ee5cu: goto label_39ee5c;
        case 0x39ee60u: goto label_39ee60;
        case 0x39ee64u: goto label_39ee64;
        case 0x39ee68u: goto label_39ee68;
        case 0x39ee6cu: goto label_39ee6c;
        case 0x39ee70u: goto label_39ee70;
        case 0x39ee74u: goto label_39ee74;
        case 0x39ee78u: goto label_39ee78;
        case 0x39ee7cu: goto label_39ee7c;
        case 0x39ee80u: goto label_39ee80;
        case 0x39ee84u: goto label_39ee84;
        case 0x39ee88u: goto label_39ee88;
        case 0x39ee8cu: goto label_39ee8c;
        case 0x39ee90u: goto label_39ee90;
        case 0x39ee94u: goto label_39ee94;
        case 0x39ee98u: goto label_39ee98;
        case 0x39ee9cu: goto label_39ee9c;
        case 0x39eea0u: goto label_39eea0;
        case 0x39eea4u: goto label_39eea4;
        case 0x39eea8u: goto label_39eea8;
        case 0x39eeacu: goto label_39eeac;
        case 0x39eeb0u: goto label_39eeb0;
        case 0x39eeb4u: goto label_39eeb4;
        case 0x39eeb8u: goto label_39eeb8;
        case 0x39eebcu: goto label_39eebc;
        case 0x39eec0u: goto label_39eec0;
        case 0x39eec4u: goto label_39eec4;
        case 0x39eec8u: goto label_39eec8;
        case 0x39eeccu: goto label_39eecc;
        case 0x39eed0u: goto label_39eed0;
        case 0x39eed4u: goto label_39eed4;
        case 0x39eed8u: goto label_39eed8;
        case 0x39eedcu: goto label_39eedc;
        case 0x39eee0u: goto label_39eee0;
        case 0x39eee4u: goto label_39eee4;
        case 0x39eee8u: goto label_39eee8;
        case 0x39eeecu: goto label_39eeec;
        case 0x39eef0u: goto label_39eef0;
        case 0x39eef4u: goto label_39eef4;
        case 0x39eef8u: goto label_39eef8;
        case 0x39eefcu: goto label_39eefc;
        case 0x39ef00u: goto label_39ef00;
        case 0x39ef04u: goto label_39ef04;
        case 0x39ef08u: goto label_39ef08;
        case 0x39ef0cu: goto label_39ef0c;
        case 0x39ef10u: goto label_39ef10;
        case 0x39ef14u: goto label_39ef14;
        case 0x39ef18u: goto label_39ef18;
        case 0x39ef1cu: goto label_39ef1c;
        case 0x39ef20u: goto label_39ef20;
        case 0x39ef24u: goto label_39ef24;
        case 0x39ef28u: goto label_39ef28;
        case 0x39ef2cu: goto label_39ef2c;
        case 0x39ef30u: goto label_39ef30;
        case 0x39ef34u: goto label_39ef34;
        case 0x39ef38u: goto label_39ef38;
        case 0x39ef3cu: goto label_39ef3c;
        case 0x39ef40u: goto label_39ef40;
        case 0x39ef44u: goto label_39ef44;
        case 0x39ef48u: goto label_39ef48;
        case 0x39ef4cu: goto label_39ef4c;
        case 0x39ef50u: goto label_39ef50;
        case 0x39ef54u: goto label_39ef54;
        case 0x39ef58u: goto label_39ef58;
        case 0x39ef5cu: goto label_39ef5c;
        case 0x39ef60u: goto label_39ef60;
        case 0x39ef64u: goto label_39ef64;
        case 0x39ef68u: goto label_39ef68;
        case 0x39ef6cu: goto label_39ef6c;
        case 0x39ef70u: goto label_39ef70;
        case 0x39ef74u: goto label_39ef74;
        case 0x39ef78u: goto label_39ef78;
        case 0x39ef7cu: goto label_39ef7c;
        case 0x39ef80u: goto label_39ef80;
        case 0x39ef84u: goto label_39ef84;
        case 0x39ef88u: goto label_39ef88;
        case 0x39ef8cu: goto label_39ef8c;
        case 0x39ef90u: goto label_39ef90;
        case 0x39ef94u: goto label_39ef94;
        case 0x39ef98u: goto label_39ef98;
        case 0x39ef9cu: goto label_39ef9c;
        case 0x39efa0u: goto label_39efa0;
        case 0x39efa4u: goto label_39efa4;
        case 0x39efa8u: goto label_39efa8;
        case 0x39efacu: goto label_39efac;
        case 0x39efb0u: goto label_39efb0;
        case 0x39efb4u: goto label_39efb4;
        case 0x39efb8u: goto label_39efb8;
        case 0x39efbcu: goto label_39efbc;
        case 0x39efc0u: goto label_39efc0;
        case 0x39efc4u: goto label_39efc4;
        case 0x39efc8u: goto label_39efc8;
        case 0x39efccu: goto label_39efcc;
        case 0x39efd0u: goto label_39efd0;
        case 0x39efd4u: goto label_39efd4;
        case 0x39efd8u: goto label_39efd8;
        case 0x39efdcu: goto label_39efdc;
        case 0x39efe0u: goto label_39efe0;
        case 0x39efe4u: goto label_39efe4;
        case 0x39efe8u: goto label_39efe8;
        case 0x39efecu: goto label_39efec;
        case 0x39eff0u: goto label_39eff0;
        case 0x39eff4u: goto label_39eff4;
        case 0x39eff8u: goto label_39eff8;
        case 0x39effcu: goto label_39effc;
        case 0x39f000u: goto label_39f000;
        case 0x39f004u: goto label_39f004;
        case 0x39f008u: goto label_39f008;
        case 0x39f00cu: goto label_39f00c;
        case 0x39f010u: goto label_39f010;
        case 0x39f014u: goto label_39f014;
        case 0x39f018u: goto label_39f018;
        case 0x39f01cu: goto label_39f01c;
        case 0x39f020u: goto label_39f020;
        case 0x39f024u: goto label_39f024;
        case 0x39f028u: goto label_39f028;
        case 0x39f02cu: goto label_39f02c;
        case 0x39f030u: goto label_39f030;
        case 0x39f034u: goto label_39f034;
        case 0x39f038u: goto label_39f038;
        case 0x39f03cu: goto label_39f03c;
        case 0x39f040u: goto label_39f040;
        case 0x39f044u: goto label_39f044;
        case 0x39f048u: goto label_39f048;
        case 0x39f04cu: goto label_39f04c;
        case 0x39f050u: goto label_39f050;
        case 0x39f054u: goto label_39f054;
        case 0x39f058u: goto label_39f058;
        case 0x39f05cu: goto label_39f05c;
        case 0x39f060u: goto label_39f060;
        case 0x39f064u: goto label_39f064;
        case 0x39f068u: goto label_39f068;
        case 0x39f06cu: goto label_39f06c;
        case 0x39f070u: goto label_39f070;
        case 0x39f074u: goto label_39f074;
        case 0x39f078u: goto label_39f078;
        case 0x39f07cu: goto label_39f07c;
        case 0x39f080u: goto label_39f080;
        case 0x39f084u: goto label_39f084;
        case 0x39f088u: goto label_39f088;
        case 0x39f08cu: goto label_39f08c;
        case 0x39f090u: goto label_39f090;
        case 0x39f094u: goto label_39f094;
        case 0x39f098u: goto label_39f098;
        case 0x39f09cu: goto label_39f09c;
        case 0x39f0a0u: goto label_39f0a0;
        case 0x39f0a4u: goto label_39f0a4;
        case 0x39f0a8u: goto label_39f0a8;
        case 0x39f0acu: goto label_39f0ac;
        case 0x39f0b0u: goto label_39f0b0;
        case 0x39f0b4u: goto label_39f0b4;
        case 0x39f0b8u: goto label_39f0b8;
        case 0x39f0bcu: goto label_39f0bc;
        case 0x39f0c0u: goto label_39f0c0;
        case 0x39f0c4u: goto label_39f0c4;
        case 0x39f0c8u: goto label_39f0c8;
        case 0x39f0ccu: goto label_39f0cc;
        case 0x39f0d0u: goto label_39f0d0;
        case 0x39f0d4u: goto label_39f0d4;
        case 0x39f0d8u: goto label_39f0d8;
        case 0x39f0dcu: goto label_39f0dc;
        case 0x39f0e0u: goto label_39f0e0;
        case 0x39f0e4u: goto label_39f0e4;
        case 0x39f0e8u: goto label_39f0e8;
        case 0x39f0ecu: goto label_39f0ec;
        case 0x39f0f0u: goto label_39f0f0;
        case 0x39f0f4u: goto label_39f0f4;
        case 0x39f0f8u: goto label_39f0f8;
        case 0x39f0fcu: goto label_39f0fc;
        case 0x39f100u: goto label_39f100;
        case 0x39f104u: goto label_39f104;
        case 0x39f108u: goto label_39f108;
        case 0x39f10cu: goto label_39f10c;
        case 0x39f110u: goto label_39f110;
        case 0x39f114u: goto label_39f114;
        case 0x39f118u: goto label_39f118;
        case 0x39f11cu: goto label_39f11c;
        case 0x39f120u: goto label_39f120;
        case 0x39f124u: goto label_39f124;
        case 0x39f128u: goto label_39f128;
        case 0x39f12cu: goto label_39f12c;
        case 0x39f130u: goto label_39f130;
        case 0x39f134u: goto label_39f134;
        case 0x39f138u: goto label_39f138;
        case 0x39f13cu: goto label_39f13c;
        case 0x39f140u: goto label_39f140;
        case 0x39f144u: goto label_39f144;
        case 0x39f148u: goto label_39f148;
        case 0x39f14cu: goto label_39f14c;
        case 0x39f150u: goto label_39f150;
        case 0x39f154u: goto label_39f154;
        case 0x39f158u: goto label_39f158;
        case 0x39f15cu: goto label_39f15c;
        case 0x39f160u: goto label_39f160;
        case 0x39f164u: goto label_39f164;
        case 0x39f168u: goto label_39f168;
        case 0x39f16cu: goto label_39f16c;
        case 0x39f170u: goto label_39f170;
        case 0x39f174u: goto label_39f174;
        case 0x39f178u: goto label_39f178;
        case 0x39f17cu: goto label_39f17c;
        case 0x39f180u: goto label_39f180;
        case 0x39f184u: goto label_39f184;
        case 0x39f188u: goto label_39f188;
        case 0x39f18cu: goto label_39f18c;
        case 0x39f190u: goto label_39f190;
        case 0x39f194u: goto label_39f194;
        case 0x39f198u: goto label_39f198;
        case 0x39f19cu: goto label_39f19c;
        case 0x39f1a0u: goto label_39f1a0;
        case 0x39f1a4u: goto label_39f1a4;
        case 0x39f1a8u: goto label_39f1a8;
        case 0x39f1acu: goto label_39f1ac;
        case 0x39f1b0u: goto label_39f1b0;
        case 0x39f1b4u: goto label_39f1b4;
        case 0x39f1b8u: goto label_39f1b8;
        case 0x39f1bcu: goto label_39f1bc;
        case 0x39f1c0u: goto label_39f1c0;
        case 0x39f1c4u: goto label_39f1c4;
        case 0x39f1c8u: goto label_39f1c8;
        case 0x39f1ccu: goto label_39f1cc;
        case 0x39f1d0u: goto label_39f1d0;
        case 0x39f1d4u: goto label_39f1d4;
        case 0x39f1d8u: goto label_39f1d8;
        case 0x39f1dcu: goto label_39f1dc;
        case 0x39f1e0u: goto label_39f1e0;
        case 0x39f1e4u: goto label_39f1e4;
        case 0x39f1e8u: goto label_39f1e8;
        case 0x39f1ecu: goto label_39f1ec;
        case 0x39f1f0u: goto label_39f1f0;
        case 0x39f1f4u: goto label_39f1f4;
        case 0x39f1f8u: goto label_39f1f8;
        case 0x39f1fcu: goto label_39f1fc;
        case 0x39f200u: goto label_39f200;
        case 0x39f204u: goto label_39f204;
        case 0x39f208u: goto label_39f208;
        case 0x39f20cu: goto label_39f20c;
        case 0x39f210u: goto label_39f210;
        case 0x39f214u: goto label_39f214;
        case 0x39f218u: goto label_39f218;
        case 0x39f21cu: goto label_39f21c;
        case 0x39f220u: goto label_39f220;
        case 0x39f224u: goto label_39f224;
        case 0x39f228u: goto label_39f228;
        case 0x39f22cu: goto label_39f22c;
        case 0x39f230u: goto label_39f230;
        case 0x39f234u: goto label_39f234;
        case 0x39f238u: goto label_39f238;
        case 0x39f23cu: goto label_39f23c;
        case 0x39f240u: goto label_39f240;
        case 0x39f244u: goto label_39f244;
        case 0x39f248u: goto label_39f248;
        case 0x39f24cu: goto label_39f24c;
        case 0x39f250u: goto label_39f250;
        case 0x39f254u: goto label_39f254;
        case 0x39f258u: goto label_39f258;
        case 0x39f25cu: goto label_39f25c;
        case 0x39f260u: goto label_39f260;
        case 0x39f264u: goto label_39f264;
        case 0x39f268u: goto label_39f268;
        case 0x39f26cu: goto label_39f26c;
        case 0x39f270u: goto label_39f270;
        case 0x39f274u: goto label_39f274;
        case 0x39f278u: goto label_39f278;
        case 0x39f27cu: goto label_39f27c;
        case 0x39f280u: goto label_39f280;
        case 0x39f284u: goto label_39f284;
        case 0x39f288u: goto label_39f288;
        case 0x39f28cu: goto label_39f28c;
        case 0x39f290u: goto label_39f290;
        case 0x39f294u: goto label_39f294;
        case 0x39f298u: goto label_39f298;
        case 0x39f29cu: goto label_39f29c;
        case 0x39f2a0u: goto label_39f2a0;
        case 0x39f2a4u: goto label_39f2a4;
        case 0x39f2a8u: goto label_39f2a8;
        case 0x39f2acu: goto label_39f2ac;
        case 0x39f2b0u: goto label_39f2b0;
        case 0x39f2b4u: goto label_39f2b4;
        case 0x39f2b8u: goto label_39f2b8;
        case 0x39f2bcu: goto label_39f2bc;
        case 0x39f2c0u: goto label_39f2c0;
        case 0x39f2c4u: goto label_39f2c4;
        case 0x39f2c8u: goto label_39f2c8;
        case 0x39f2ccu: goto label_39f2cc;
        case 0x39f2d0u: goto label_39f2d0;
        case 0x39f2d4u: goto label_39f2d4;
        case 0x39f2d8u: goto label_39f2d8;
        case 0x39f2dcu: goto label_39f2dc;
        case 0x39f2e0u: goto label_39f2e0;
        case 0x39f2e4u: goto label_39f2e4;
        case 0x39f2e8u: goto label_39f2e8;
        case 0x39f2ecu: goto label_39f2ec;
        case 0x39f2f0u: goto label_39f2f0;
        case 0x39f2f4u: goto label_39f2f4;
        case 0x39f2f8u: goto label_39f2f8;
        case 0x39f2fcu: goto label_39f2fc;
        case 0x39f300u: goto label_39f300;
        case 0x39f304u: goto label_39f304;
        case 0x39f308u: goto label_39f308;
        case 0x39f30cu: goto label_39f30c;
        case 0x39f310u: goto label_39f310;
        case 0x39f314u: goto label_39f314;
        case 0x39f318u: goto label_39f318;
        case 0x39f31cu: goto label_39f31c;
        case 0x39f320u: goto label_39f320;
        case 0x39f324u: goto label_39f324;
        case 0x39f328u: goto label_39f328;
        case 0x39f32cu: goto label_39f32c;
        case 0x39f330u: goto label_39f330;
        case 0x39f334u: goto label_39f334;
        case 0x39f338u: goto label_39f338;
        case 0x39f33cu: goto label_39f33c;
        case 0x39f340u: goto label_39f340;
        case 0x39f344u: goto label_39f344;
        case 0x39f348u: goto label_39f348;
        case 0x39f34cu: goto label_39f34c;
        case 0x39f350u: goto label_39f350;
        case 0x39f354u: goto label_39f354;
        case 0x39f358u: goto label_39f358;
        case 0x39f35cu: goto label_39f35c;
        case 0x39f360u: goto label_39f360;
        case 0x39f364u: goto label_39f364;
        case 0x39f368u: goto label_39f368;
        case 0x39f36cu: goto label_39f36c;
        case 0x39f370u: goto label_39f370;
        case 0x39f374u: goto label_39f374;
        case 0x39f378u: goto label_39f378;
        case 0x39f37cu: goto label_39f37c;
        case 0x39f380u: goto label_39f380;
        case 0x39f384u: goto label_39f384;
        case 0x39f388u: goto label_39f388;
        case 0x39f38cu: goto label_39f38c;
        case 0x39f390u: goto label_39f390;
        case 0x39f394u: goto label_39f394;
        case 0x39f398u: goto label_39f398;
        case 0x39f39cu: goto label_39f39c;
        case 0x39f3a0u: goto label_39f3a0;
        case 0x39f3a4u: goto label_39f3a4;
        case 0x39f3a8u: goto label_39f3a8;
        case 0x39f3acu: goto label_39f3ac;
        case 0x39f3b0u: goto label_39f3b0;
        case 0x39f3b4u: goto label_39f3b4;
        case 0x39f3b8u: goto label_39f3b8;
        case 0x39f3bcu: goto label_39f3bc;
        case 0x39f3c0u: goto label_39f3c0;
        case 0x39f3c4u: goto label_39f3c4;
        case 0x39f3c8u: goto label_39f3c8;
        case 0x39f3ccu: goto label_39f3cc;
        case 0x39f3d0u: goto label_39f3d0;
        case 0x39f3d4u: goto label_39f3d4;
        case 0x39f3d8u: goto label_39f3d8;
        case 0x39f3dcu: goto label_39f3dc;
        case 0x39f3e0u: goto label_39f3e0;
        case 0x39f3e4u: goto label_39f3e4;
        case 0x39f3e8u: goto label_39f3e8;
        case 0x39f3ecu: goto label_39f3ec;
        case 0x39f3f0u: goto label_39f3f0;
        case 0x39f3f4u: goto label_39f3f4;
        case 0x39f3f8u: goto label_39f3f8;
        case 0x39f3fcu: goto label_39f3fc;
        case 0x39f400u: goto label_39f400;
        case 0x39f404u: goto label_39f404;
        case 0x39f408u: goto label_39f408;
        case 0x39f40cu: goto label_39f40c;
        case 0x39f410u: goto label_39f410;
        case 0x39f414u: goto label_39f414;
        case 0x39f418u: goto label_39f418;
        case 0x39f41cu: goto label_39f41c;
        case 0x39f420u: goto label_39f420;
        case 0x39f424u: goto label_39f424;
        case 0x39f428u: goto label_39f428;
        case 0x39f42cu: goto label_39f42c;
        case 0x39f430u: goto label_39f430;
        case 0x39f434u: goto label_39f434;
        case 0x39f438u: goto label_39f438;
        case 0x39f43cu: goto label_39f43c;
        case 0x39f440u: goto label_39f440;
        case 0x39f444u: goto label_39f444;
        case 0x39f448u: goto label_39f448;
        case 0x39f44cu: goto label_39f44c;
        default: break;
    }

    ctx->pc = 0x39ec60u;

label_39ec60:
    // 0x39ec60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_39ec64:
    // 0x39ec64: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x39ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_39ec68:
    // 0x39ec68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_39ec6c:
    // 0x39ec6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39ec6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ec70:
    // 0x39ec70: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x39ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_39ec74:
    // 0x39ec74: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x39ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_39ec78:
    // 0x39ec78: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x39ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_39ec7c:
    // 0x39ec7c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x39ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_39ec80:
    // 0x39ec80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39ec84:
    // 0x39ec84: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39ec88:
    // 0x39ec88: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39ec88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39ec8c:
    // 0x39ec8c: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
label_39ec90:
    if (ctx->pc == 0x39EC90u) {
        ctx->pc = 0x39EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC8Cu;
        // 0x39ec90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EC94u;
        goto label_39ec94;
    }
    ctx->pc = 0x39EC8Cu;
    {
        const bool branch_taken_0x39ec8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC8Cu;
        // 0x39ec90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec8c) {
            ctx->pc = 0x39EEDCu;
            goto label_39eedc;
        }
    }
    ctx->pc = 0x39EC94u;
label_39ec94:
    // 0x39ec94: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x39ec94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_39ec98:
    // 0x39ec98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39ec98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ec9c:
    // 0x39ec9c: 0x0  nop
    ctx->pc = 0x39ec9cu;
    // NOP
label_39eca0:
    // 0x39eca0: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x39eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_39eca4:
    // 0x39eca4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39eca8:
    // 0x39eca8: 0x8c510050  lw          $s1, 0x50($v0)
    ctx->pc = 0x39eca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39ecac:
    // 0x39ecac: 0x52200085  beql        $s1, $zero, . + 4 + (0x85 << 2)
label_39ecb0:
    if (ctx->pc == 0x39ECB0u) {
        ctx->pc = 0x39ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECACu;
        // 0x39ecb0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ECB4u;
        goto label_39ecb4;
    }
    ctx->pc = 0x39ECACu;
    {
        const bool branch_taken_0x39ecac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ecac) {
            ctx->pc = 0x39ECB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ECACu;
            // 0x39ecb0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EEC4u;
            goto label_39eec4;
        }
    }
    ctx->pc = 0x39ECB4u;
label_39ecb4:
    // 0x39ecb4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x39ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_39ecb8:
    // 0x39ecb8: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
label_39ecbc:
    if (ctx->pc == 0x39ECBCu) {
        ctx->pc = 0x39ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECB8u;
        // 0x39ecbc: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ECC0u;
        goto label_39ecc0;
    }
    ctx->pc = 0x39ECB8u;
    {
        const bool branch_taken_0x39ecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ecb8) {
            ctx->pc = 0x39ECBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ECB8u;
            // 0x39ecbc: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EEC4u;
            goto label_39eec4;
        }
    }
    ctx->pc = 0x39ECC0u;
label_39ecc0:
    // 0x39ecc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39ecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ecc4:
    // 0x39ecc4: 0xc089988  jal         func_226620
label_39ecc8:
    if (ctx->pc == 0x39ECC8u) {
        ctx->pc = 0x39ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECC4u;
        // 0x39ecc8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ECCCu;
        goto label_39eccc;
    }
    ctx->pc = 0x39ECC4u;
    SET_GPR_U32(ctx, 31, 0x39ECCCu);
    ctx->pc = 0x39ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ECC4u;
    // 0x39ecc8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x39ECC4u, 0x39ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ECCCu;
label_39eccc:
    // 0x39eccc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39ecd0:
    // 0x39ecd0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39ecd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39ecd4:
    // 0x39ecd4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39ecd8:
    // 0x39ecd8: 0x40f809  jalr        $v0
label_39ecdc:
    if (ctx->pc == 0x39ECDCu) {
        ctx->pc = 0x39ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECD8u;
        // 0x39ecdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ECE0u;
        goto label_39ece0;
    }
    ctx->pc = 0x39ECD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39ECE0u);
        ctx->pc = 0x39ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECD8u;
        // 0x39ecdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ECD8u, 0x39ECE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39ECE0u;
label_39ece0:
    // 0x39ece0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39ece0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ece4:
    // 0x39ece4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_39ece8:
    if (ctx->pc == 0x39ECE8u) {
        ctx->pc = 0x39ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECE4u;
        // 0x39ece8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ECECu;
        goto label_39ecec;
    }
    ctx->pc = 0x39ECE4u;
    {
        const bool branch_taken_0x39ece4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECE4u;
        // 0x39ece8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ece4) {
            ctx->pc = 0x39ECFCu;
            goto label_39ecfc;
        }
    }
    ctx->pc = 0x39ECECu;
label_39ecec:
    // 0x39ecec: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x39ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_39ecf0:
    // 0x39ecf0: 0xa460003c  sh          $zero, 0x3C($v1)
    ctx->pc = 0x39ecf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 0));
label_39ecf4:
    // 0x39ecf4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x39ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_39ecf8:
    // 0x39ecf8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x39ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_39ecfc:
    // 0x39ecfc: 0xc087b0e  jal         func_21EC38
label_39ed00:
    if (ctx->pc == 0x39ED00u) {
        ctx->pc = 0x39ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECFCu;
        // 0x39ed00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ED04u;
        goto label_39ed04;
    }
    ctx->pc = 0x39ECFCu;
    SET_GPR_U32(ctx, 31, 0x39ED04u);
    ctx->pc = 0x39ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ECFCu;
    // 0x39ed00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x39ECFCu, 0x39ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED04u;
label_39ed04:
    // 0x39ed04: 0xc087c16  jal         func_21F058
label_39ed08:
    if (ctx->pc == 0x39ED08u) {
        ctx->pc = 0x39ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED04u;
        // 0x39ed08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ED0Cu;
        goto label_39ed0c;
    }
    ctx->pc = 0x39ED04u;
    SET_GPR_U32(ctx, 31, 0x39ED0Cu);
    ctx->pc = 0x39ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ED04u;
    // 0x39ed08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x39ED04u, 0x39ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED0Cu;
label_39ed0c:
    // 0x39ed0c: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x39ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39ed10:
    // 0x39ed10: 0x924400ea  lbu         $a0, 0xEA($s2)
    ctx->pc = 0x39ed10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 234)));
label_39ed14:
    // 0x39ed14: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x39ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_39ed18:
    // 0x39ed18: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x39ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_39ed1c:
    // 0x39ed1c: 0x78650030  lq          $a1, 0x30($v1)
    ctx->pc = 0x39ed1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_39ed20:
    // 0x39ed20: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x39ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_39ed24:
    // 0x39ed24: 0x78660040  lq          $a2, 0x40($v1)
    ctx->pc = 0x39ed24u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_39ed28:
    // 0x39ed28: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
label_39ed2c:
    if (ctx->pc == 0x39ED2Cu) {
        ctx->pc = 0x39ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED28u;
        // 0x39ed2c: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ED30u;
        goto label_39ed30;
    }
    ctx->pc = 0x39ED28u;
    {
        const bool branch_taken_0x39ed28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED28u;
        // 0x39ed2c: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed28) {
            ctx->pc = 0x39EDD8u;
            goto label_39edd8;
        }
    }
    ctx->pc = 0x39ED30u;
label_39ed30:
    // 0x39ed30: 0x7a4200b0  lq          $v0, 0xB0($s2)
    ctx->pc = 0x39ed30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 176)));
label_39ed34:
    // 0x39ed34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39ed34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39ed38:
    // 0x39ed38: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x39ed38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_39ed3c:
    // 0x39ed3c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39ed3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ed40:
    // 0x39ed40: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39ed40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39ed44:
    // 0x39ed44: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39ed44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39ed48:
    // 0x39ed48: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39ed48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ed4c:
    // 0x39ed4c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x39ed4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ed50:
    // 0x39ed50: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x39ed50u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39ed54:
    // 0x39ed54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39ed54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ed58:
    // 0x39ed58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x39ed58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39ed5c:
    // 0x39ed5c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x39ed5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39ed60:
    // 0x39ed60: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x39ed60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ed64:
    // 0x39ed64: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39ed64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39ed68:
    // 0x39ed68: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x39ed68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ed6c:
    // 0x39ed6c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x39ed6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ed70:
    // 0x39ed70: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x39ed70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ed74:
    // 0x39ed74: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x39ed74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_39ed78:
    // 0x39ed78: 0x7a4400c0  lq          $a0, 0xC0($s2)
    ctx->pc = 0x39ed78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 192)));
label_39ed7c:
    // 0x39ed7c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39ed7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39ed80:
    // 0x39ed80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39ed80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39ed84:
    // 0x39ed84: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39ed84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39ed88:
    // 0x39ed88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39ed88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39ed8c:
    // 0x39ed8c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x39ed8cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_39ed90:
    // 0x39ed90: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39ed94:
    // 0x39ed94: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39ed98:
    // 0x39ed98: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x39ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_39ed9c:
    // 0x39ed9c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x39ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_39eda0:
    // 0x39eda0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39eda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39eda4:
    // 0x39eda4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x39eda4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_39eda8:
    // 0x39eda8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39eda8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39edac:
    // 0x39edac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39edacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39edb0:
    // 0x39edb0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39edb0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39edb4:
    // 0x39edb4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39edb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39edb8:
    // 0x39edb8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39edb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39edbc:
    // 0x39edbc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39edbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39edc0:
    // 0x39edc0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39edc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39edc4:
    // 0x39edc4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39edc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39edc8:
    // 0x39edc8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39edc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39edcc:
    // 0x39edcc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39edccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39edd0:
    // 0x39edd0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x39edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_39edd4:
    // 0x39edd4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39edd8:
    // 0x39edd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x39edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39eddc:
    // 0x39eddc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39eddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39ede0:
    // 0x39ede0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x39ede0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_39ede4:
    // 0x39ede4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x39ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39ede8:
    // 0x39ede8: 0x60f809  jalr        $v1
label_39edec:
    if (ctx->pc == 0x39EDECu) {
        ctx->pc = 0x39EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDE8u;
        // 0x39edec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EDF0u;
        goto label_39edf0;
    }
    ctx->pc = 0x39EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39EDF0u);
        ctx->pc = 0x39EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDE8u;
        // 0x39edec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EDE8u, 0x39EDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EDF0u;
label_39edf0:
    // 0x39edf0: 0xc087502  jal         func_21D408
label_39edf4:
    if (ctx->pc == 0x39EDF4u) {
        ctx->pc = 0x39EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDF0u;
        // 0x39edf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EDF8u;
        goto label_39edf8;
    }
    ctx->pc = 0x39EDF0u;
    SET_GPR_U32(ctx, 31, 0x39EDF8u);
    ctx->pc = 0x39EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EDF0u;
    // 0x39edf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39EDF0u, 0x39EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EDF8u;
label_39edf8:
    // 0x39edf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39edf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39edfc:
    // 0x39edfc: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x39edfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_39ee00:
    // 0x39ee00: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_39ee04:
    if (ctx->pc == 0x39EE04u) {
        ctx->pc = 0x39EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE00u;
        // 0x39ee04: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EE08u;
        goto label_39ee08;
    }
    ctx->pc = 0x39EE00u;
    {
        const bool branch_taken_0x39ee00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x39EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE00u;
        // 0x39ee04: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee00) {
            ctx->pc = 0x39EE14u;
            goto label_39ee14;
        }
    }
    ctx->pc = 0x39EE08u;
label_39ee08:
    // 0x39ee08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39ee0c:
    // 0x39ee0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_39ee10:
    if (ctx->pc == 0x39EE10u) {
        ctx->pc = 0x39EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE0Cu;
        // 0x39ee10: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EE14u;
        goto label_39ee14;
    }
    ctx->pc = 0x39EE0Cu;
    {
        const bool branch_taken_0x39ee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE0Cu;
        // 0x39ee10: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee0c) {
            ctx->pc = 0x39EE18u;
            goto label_39ee18;
        }
    }
    ctx->pc = 0x39EE14u;
label_39ee14:
    // 0x39ee14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39ee14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ee18:
    // 0x39ee18: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_39ee1c:
    if (ctx->pc == 0x39EE1Cu) {
        ctx->pc = 0x39EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE18u;
        // 0x39ee1c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EE20u;
        goto label_39ee20;
    }
    ctx->pc = 0x39EE18u;
    {
        const bool branch_taken_0x39ee18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ee18) {
            ctx->pc = 0x39EE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EE18u;
            // 0x39ee1c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EEB4u;
            goto label_39eeb4;
        }
    }
    ctx->pc = 0x39EE20u;
label_39ee20:
    // 0x39ee20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39ee24:
    // 0x39ee24: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39ee24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39ee28:
    // 0x39ee28: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39ee2c:
    // 0x39ee2c: 0x40f809  jalr        $v0
label_39ee30:
    if (ctx->pc == 0x39EE30u) {
        ctx->pc = 0x39EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE2Cu;
        // 0x39ee30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EE34u;
        goto label_39ee34;
    }
    ctx->pc = 0x39EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39EE34u);
        ctx->pc = 0x39EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE2Cu;
        // 0x39ee30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EE2Cu, 0x39EE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EE34u;
label_39ee34:
    // 0x39ee34: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x39ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_39ee38:
    // 0x39ee38: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_39ee3c:
    if (ctx->pc == 0x39EE3Cu) {
        ctx->pc = 0x39EE40u;
        goto label_39ee40;
    }
    ctx->pc = 0x39EE38u;
    {
        const bool branch_taken_0x39ee38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ee38) {
            ctx->pc = 0x39EEA0u;
            goto label_39eea0;
        }
    }
    ctx->pc = 0x39EE40u;
label_39ee40:
    // 0x39ee40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39ee44:
    // 0x39ee44: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39ee44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39ee48:
    // 0x39ee48: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39ee4c:
    // 0x39ee4c: 0x40f809  jalr        $v0
label_39ee50:
    if (ctx->pc == 0x39EE50u) {
        ctx->pc = 0x39EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE4Cu;
        // 0x39ee50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EE54u;
        goto label_39ee54;
    }
    ctx->pc = 0x39EE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39EE54u);
        ctx->pc = 0x39EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE4Cu;
        // 0x39ee50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EE4Cu, 0x39EE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EE54u;
label_39ee54:
    // 0x39ee54: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x39ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_39ee58:
    // 0x39ee58: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_39ee5c:
    if (ctx->pc == 0x39EE5Cu) {
        ctx->pc = 0x39EE60u;
        goto label_39ee60;
    }
    ctx->pc = 0x39EE58u;
    {
        const bool branch_taken_0x39ee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ee58) {
            ctx->pc = 0x39EEA0u;
            goto label_39eea0;
        }
    }
    ctx->pc = 0x39EE60u;
label_39ee60:
    // 0x39ee60: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39ee64:
    // 0x39ee64: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39ee64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39ee68:
    // 0x39ee68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39ee6c:
    // 0x39ee6c: 0x40f809  jalr        $v0
label_39ee70:
    if (ctx->pc == 0x39EE70u) {
        ctx->pc = 0x39EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE6Cu;
        // 0x39ee70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EE74u;
        goto label_39ee74;
    }
    ctx->pc = 0x39EE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39EE74u);
        ctx->pc = 0x39EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE6Cu;
        // 0x39ee70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EE6Cu, 0x39EE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EE74u;
label_39ee74:
    // 0x39ee74: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x39ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_39ee78:
    // 0x39ee78: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_39ee7c:
    if (ctx->pc == 0x39EE7Cu) {
        ctx->pc = 0x39EE80u;
        goto label_39ee80;
    }
    ctx->pc = 0x39EE78u;
    {
        const bool branch_taken_0x39ee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ee78) {
            ctx->pc = 0x39EEA0u;
            goto label_39eea0;
        }
    }
    ctx->pc = 0x39EE80u;
label_39ee80:
    // 0x39ee80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39ee84:
    // 0x39ee84: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x39ee84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_39ee88:
    // 0x39ee88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39ee8c:
    // 0x39ee8c: 0x40f809  jalr        $v0
label_39ee90:
    if (ctx->pc == 0x39EE90u) {
        ctx->pc = 0x39EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE8Cu;
        // 0x39ee90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EE94u;
        goto label_39ee94;
    }
    ctx->pc = 0x39EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39EE94u);
        ctx->pc = 0x39EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE8Cu;
        // 0x39ee90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EE8Cu, 0x39EE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39EE94u;
label_39ee94:
    // 0x39ee94: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x39ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_39ee98:
    // 0x39ee98: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_39ee9c:
    if (ctx->pc == 0x39EE9Cu) {
        ctx->pc = 0x39EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE98u;
        // 0x39ee9c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EEA0u;
        goto label_39eea0;
    }
    ctx->pc = 0x39EE98u;
    {
        const bool branch_taken_0x39ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39ee98) {
            ctx->pc = 0x39EE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EE98u;
            // 0x39ee9c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EEB4u;
            goto label_39eeb4;
        }
    }
    ctx->pc = 0x39EEA0u;
label_39eea0:
    // 0x39eea0: 0xc087502  jal         func_21D408
label_39eea4:
    if (ctx->pc == 0x39EEA4u) {
        ctx->pc = 0x39EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEA0u;
        // 0x39eea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EEA8u;
        goto label_39eea8;
    }
    ctx->pc = 0x39EEA0u;
    SET_GPR_U32(ctx, 31, 0x39EEA8u);
    ctx->pc = 0x39EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EEA0u;
    // 0x39eea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39EEA0u, 0x39EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EEA8u;
label_39eea8:
    // 0x39eea8: 0xc0a35f6  jal         func_28D7D8
label_39eeac:
    if (ctx->pc == 0x39EEACu) {
        ctx->pc = 0x39EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEA8u;
        // 0x39eeac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EEB0u;
        goto label_39eeb0;
    }
    ctx->pc = 0x39EEA8u;
    SET_GPR_U32(ctx, 31, 0x39EEB0u);
    ctx->pc = 0x39EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EEA8u;
    // 0x39eeac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x39EEA8u, 0x39EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EEB0u;
label_39eeb0:
    // 0x39eeb0: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39eeb4:
    // 0x39eeb4: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x39eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_39eeb8:
    // 0x39eeb8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39eebc:
    // 0x39eebc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x39eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_39eec0:
    // 0x39eec0: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39eec4:
    // 0x39eec4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39eec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39eec8:
    // 0x39eec8: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x39eec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_39eecc:
    // 0x39eecc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39eeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39eed0:
    // 0x39eed0: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
label_39eed4:
    if (ctx->pc == 0x39EED4u) {
        ctx->pc = 0x39EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EED0u;
        // 0x39eed4: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EED8u;
        goto label_39eed8;
    }
    ctx->pc = 0x39EED0u;
    {
        const bool branch_taken_0x39eed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EED0u;
        // 0x39eed4: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eed0) {
            ctx->pc = 0x39ECA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39eca0;
        }
    }
    ctx->pc = 0x39EED8u;
label_39eed8:
    // 0x39eed8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39eedc:
    // 0x39eedc: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39eedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39eee0:
    // 0x39eee0: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
label_39eee4:
    if (ctx->pc == 0x39EEE4u) {
        ctx->pc = 0x39EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEE0u;
        // 0x39eee4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EEE8u;
        goto label_39eee8;
    }
    ctx->pc = 0x39EEE0u;
    {
        const bool branch_taken_0x39eee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEE0u;
        // 0x39eee4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eee0) {
            ctx->pc = 0x39F1E0u;
            goto label_39f1e0;
        }
    }
    ctx->pc = 0x39EEE8u;
label_39eee8:
    // 0x39eee8: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x39eee8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_39eeec:
    // 0x39eeec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39eeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39eef0:
    // 0x39eef0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39eef4:
    // 0x39eef4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39eef8:
    // 0x39eef8: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x39eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_39eefc:
    // 0x39eefc: 0x508000b3  beql        $a0, $zero, . + 4 + (0xB3 << 2)
label_39ef00:
    if (ctx->pc == 0x39EF00u) {
        ctx->pc = 0x39EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEFCu;
        // 0x39ef00: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EF04u;
        goto label_39ef04;
    }
    ctx->pc = 0x39EEFCu;
    {
        const bool branch_taken_0x39eefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39eefc) {
            ctx->pc = 0x39EF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EEFCu;
            // 0x39ef00: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F1CCu;
            goto label_39f1cc;
        }
    }
    ctx->pc = 0x39EF04u;
label_39ef04:
    // 0x39ef04: 0xc0e57ce  jal         func_395F38
label_39ef08:
    if (ctx->pc == 0x39EF08u) {
        ctx->pc = 0x39EF0Cu;
        goto label_39ef0c;
    }
    ctx->pc = 0x39EF04u;
    SET_GPR_U32(ctx, 31, 0x39EF0Cu);
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39EF04u, 0x39EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EF0Cu;
label_39ef0c:
    // 0x39ef0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39ef0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ef10:
    // 0x39ef10: 0x5200004e  beql        $s0, $zero, . + 4 + (0x4E << 2)
label_39ef14:
    if (ctx->pc == 0x39EF14u) {
        ctx->pc = 0x39EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF10u;
        // 0x39ef14: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EF18u;
        goto label_39ef18;
    }
    ctx->pc = 0x39EF10u;
    {
        const bool branch_taken_0x39ef10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ef10) {
            ctx->pc = 0x39EF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EF10u;
            // 0x39ef14: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F04Cu;
            goto label_39f04c;
        }
    }
    ctx->pc = 0x39EF18u;
label_39ef18:
    // 0x39ef18: 0xc0e5812  jal         func_396048
label_39ef1c:
    if (ctx->pc == 0x39EF1Cu) {
        ctx->pc = 0x39EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF18u;
        // 0x39ef1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EF20u;
        goto label_39ef20;
    }
    ctx->pc = 0x39EF18u;
    SET_GPR_U32(ctx, 31, 0x39EF20u);
    ctx->pc = 0x39EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EF18u;
    // 0x39ef1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396048u, 0x39EF18u, 0x39EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EF20u;
label_39ef20:
    // 0x39ef20: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x39ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39ef24:
    // 0x39ef24: 0x924400ea  lbu         $a0, 0xEA($s2)
    ctx->pc = 0x39ef24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 234)));
label_39ef28:
    // 0x39ef28: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x39ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_39ef2c:
    // 0x39ef2c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x39ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_39ef30:
    // 0x39ef30: 0x78650030  lq          $a1, 0x30($v1)
    ctx->pc = 0x39ef30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_39ef34:
    // 0x39ef34: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x39ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_39ef38:
    // 0x39ef38: 0x78660040  lq          $a2, 0x40($v1)
    ctx->pc = 0x39ef38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_39ef3c:
    // 0x39ef3c: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
label_39ef40:
    if (ctx->pc == 0x39EF40u) {
        ctx->pc = 0x39EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF3Cu;
        // 0x39ef40: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39EF44u;
        goto label_39ef44;
    }
    ctx->pc = 0x39EF3Cu;
    {
        const bool branch_taken_0x39ef3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF3Cu;
        // 0x39ef40: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef3c) {
            ctx->pc = 0x39EFECu;
            goto label_39efec;
        }
    }
    ctx->pc = 0x39EF44u;
label_39ef44:
    // 0x39ef44: 0x7a4200b0  lq          $v0, 0xB0($s2)
    ctx->pc = 0x39ef44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 176)));
label_39ef48:
    // 0x39ef48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39ef48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39ef4c:
    // 0x39ef4c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x39ef4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_39ef50:
    // 0x39ef50: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39ef50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ef54:
    // 0x39ef54: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39ef54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39ef58:
    // 0x39ef58: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39ef58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39ef5c:
    // 0x39ef5c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39ef5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ef60:
    // 0x39ef60: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x39ef60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ef64:
    // 0x39ef64: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x39ef64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39ef68:
    // 0x39ef68: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39ef68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ef6c:
    // 0x39ef6c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x39ef6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39ef70:
    // 0x39ef70: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x39ef70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39ef74:
    // 0x39ef74: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x39ef74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ef78:
    // 0x39ef78: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39ef78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39ef7c:
    // 0x39ef7c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x39ef7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39ef80:
    // 0x39ef80: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x39ef80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ef84:
    // 0x39ef84: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x39ef84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39ef88:
    // 0x39ef88: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x39ef88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_39ef8c:
    // 0x39ef8c: 0x7a4400c0  lq          $a0, 0xC0($s2)
    ctx->pc = 0x39ef8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 192)));
label_39ef90:
    // 0x39ef90: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39ef90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39ef94:
    // 0x39ef94: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39ef94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39ef98:
    // 0x39ef98: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39ef98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39ef9c:
    // 0x39ef9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39ef9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39efa0:
    // 0x39efa0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x39efa0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_39efa4:
    // 0x39efa4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39efa8:
    // 0x39efa8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39efa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39efac:
    // 0x39efac: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x39efacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_39efb0:
    // 0x39efb0: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x39efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_39efb4:
    // 0x39efb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39efb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39efb8:
    // 0x39efb8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x39efb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_39efbc:
    // 0x39efbc: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39efbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39efc0:
    // 0x39efc0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39efc0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39efc4:
    // 0x39efc4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39efc4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39efc8:
    // 0x39efc8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39efc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39efcc:
    // 0x39efcc: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39efccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39efd0:
    // 0x39efd0: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39efd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39efd4:
    // 0x39efd4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39efd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39efd8:
    // 0x39efd8: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39efd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39efdc:
    // 0x39efdc: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39efdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39efe0:
    // 0x39efe0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39efe0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39efe4:
    // 0x39efe4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x39efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_39efe8:
    // 0x39efe8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39efec:
    // 0x39efec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39eff0:
    // 0x39eff0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39eff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39eff4:
    // 0x39eff4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x39eff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_39eff8:
    // 0x39eff8: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x39eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39effc:
    // 0x39effc: 0xc0f809  jalr        $a2
label_39f000:
    if (ctx->pc == 0x39F000u) {
        ctx->pc = 0x39F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EFFCu;
        // 0x39f000: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F004u;
        goto label_39f004;
    }
    ctx->pc = 0x39EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39F004u);
        ctx->pc = 0x39F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EFFCu;
        // 0x39f000: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EFFCu, 0x39F004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F004u;
label_39f004:
    // 0x39f004: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f008:
    // 0x39f008: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39f008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39f00c:
    // 0x39f00c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39f010:
    // 0x39f010: 0x40f809  jalr        $v0
label_39f014:
    if (ctx->pc == 0x39F014u) {
        ctx->pc = 0x39F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F010u;
        // 0x39f014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F018u;
        goto label_39f018;
    }
    ctx->pc = 0x39F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F018u);
        ctx->pc = 0x39F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F010u;
        // 0x39f014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F010u, 0x39F018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F018u;
label_39f018:
    // 0x39f018: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39f018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f01c:
    // 0x39f01c: 0x10c0005d  beqz        $a2, . + 4 + (0x5D << 2)
label_39f020:
    if (ctx->pc == 0x39F020u) {
        ctx->pc = 0x39F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F01Cu;
        // 0x39f020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F024u;
        goto label_39f024;
    }
    ctx->pc = 0x39F01Cu;
    {
        const bool branch_taken_0x39f01c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F01Cu;
        // 0x39f020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f01c) {
            ctx->pc = 0x39F194u;
            goto label_39f194;
        }
    }
    ctx->pc = 0x39F024u;
label_39f024:
    // 0x39f024: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x39f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_39f028:
    // 0x39f028: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x39f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_39f02c:
    // 0x39f02c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x39f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_39f030:
    // 0x39f030: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x39f030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_39f034:
    // 0x39f034: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39f034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39f038:
    // 0x39f038: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39f03c:
    // 0x39f03c: 0x40f809  jalr        $v0
label_39f040:
    if (ctx->pc == 0x39F040u) {
        ctx->pc = 0x39F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F03Cu;
        // 0x39f040: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F044u;
        goto label_39f044;
    }
    ctx->pc = 0x39F03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F044u);
        ctx->pc = 0x39F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F03Cu;
        // 0x39f040: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F03Cu, 0x39F044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F044u;
label_39f044:
    // 0x39f044: 0x10000054  b           . + 4 + (0x54 << 2)
label_39f048:
    if (ctx->pc == 0x39F048u) {
        ctx->pc = 0x39F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F044u;
        // 0x39f048: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F04Cu;
        goto label_39f04c;
    }
    ctx->pc = 0x39F044u;
    {
        const bool branch_taken_0x39f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F044u;
        // 0x39f048: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f044) {
            ctx->pc = 0x39F198u;
            goto label_39f198;
        }
    }
    ctx->pc = 0x39F04Cu;
label_39f04c:
    // 0x39f04c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39f050:
    // 0x39f050: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39f054:
    // 0x39f054: 0xc0e2612  jal         func_389848
label_39f058:
    if (ctx->pc == 0x39F058u) {
        ctx->pc = 0x39F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F054u;
        // 0x39f058: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F05Cu;
        goto label_39f05c;
    }
    ctx->pc = 0x39F054u;
    SET_GPR_U32(ctx, 31, 0x39F05Cu);
    ctx->pc = 0x39F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F054u;
    // 0x39f058: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x39F054u, 0x39F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F05Cu;
label_39f05c:
    // 0x39f05c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39f05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f060:
    // 0x39f060: 0x5200004d  beql        $s0, $zero, . + 4 + (0x4D << 2)
label_39f064:
    if (ctx->pc == 0x39F064u) {
        ctx->pc = 0x39F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F060u;
        // 0x39f064: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F068u;
        goto label_39f068;
    }
    ctx->pc = 0x39F060u;
    {
        const bool branch_taken_0x39f060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f060) {
            ctx->pc = 0x39F064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F060u;
            // 0x39f064: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F198u;
            goto label_39f198;
        }
    }
    ctx->pc = 0x39F068u;
label_39f068:
    // 0x39f068: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x39f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f06c:
    // 0x39f06c: 0x924400ea  lbu         $a0, 0xEA($s2)
    ctx->pc = 0x39f06cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 234)));
label_39f070:
    // 0x39f070: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x39f070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_39f074:
    // 0x39f074: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x39f074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_39f078:
    // 0x39f078: 0x78650030  lq          $a1, 0x30($v1)
    ctx->pc = 0x39f078u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_39f07c:
    // 0x39f07c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x39f07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_39f080:
    // 0x39f080: 0x78660040  lq          $a2, 0x40($v1)
    ctx->pc = 0x39f080u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_39f084:
    // 0x39f084: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
label_39f088:
    if (ctx->pc == 0x39F088u) {
        ctx->pc = 0x39F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F084u;
        // 0x39f088: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F08Cu;
        goto label_39f08c;
    }
    ctx->pc = 0x39F084u;
    {
        const bool branch_taken_0x39f084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F084u;
        // 0x39f088: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f084) {
            ctx->pc = 0x39F134u;
            goto label_39f134;
        }
    }
    ctx->pc = 0x39F08Cu;
label_39f08c:
    // 0x39f08c: 0x7a4200b0  lq          $v0, 0xB0($s2)
    ctx->pc = 0x39f08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 176)));
label_39f090:
    // 0x39f090: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39f090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f094:
    // 0x39f094: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x39f094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_39f098:
    // 0x39f098: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39f098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f09c:
    // 0x39f09c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39f09cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f0a0:
    // 0x39f0a0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39f0a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f0a4:
    // 0x39f0a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39f0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f0a8:
    // 0x39f0a8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x39f0a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f0ac:
    // 0x39f0ac: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x39f0acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39f0b0:
    // 0x39f0b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39f0b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f0b4:
    // 0x39f0b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x39f0b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f0b8:
    // 0x39f0b8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x39f0b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39f0bc:
    // 0x39f0bc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x39f0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f0c0:
    // 0x39f0c0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39f0c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f0c4:
    // 0x39f0c4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x39f0c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f0c8:
    // 0x39f0c8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x39f0c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f0cc:
    // 0x39f0cc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x39f0ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f0d0:
    // 0x39f0d0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x39f0d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_39f0d4:
    // 0x39f0d4: 0x7a4400c0  lq          $a0, 0xC0($s2)
    ctx->pc = 0x39f0d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 192)));
label_39f0d8:
    // 0x39f0d8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39f0d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39f0dc:
    // 0x39f0dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x39f0dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39f0e0:
    // 0x39f0e0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39f0e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39f0e4:
    // 0x39f0e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39f0e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39f0e8:
    // 0x39f0e8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x39f0e8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_39f0ec:
    // 0x39f0ec: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39f0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39f0f0:
    // 0x39f0f0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39f0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39f0f4:
    // 0x39f0f4: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x39f0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_39f0f8:
    // 0x39f0f8: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x39f0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_39f0fc:
    // 0x39f0fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39f0fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39f100:
    // 0x39f100: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x39f100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_39f104:
    // 0x39f104: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39f104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f108:
    // 0x39f108: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39f108u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f10c:
    // 0x39f10c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39f10cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39f110:
    // 0x39f110: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39f110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f114:
    // 0x39f114: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39f114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39f118:
    // 0x39f118: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39f118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f11c:
    // 0x39f11c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39f11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39f120:
    // 0x39f120: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39f120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f124:
    // 0x39f124: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39f124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39f128:
    // 0x39f128: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39f128u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39f12c:
    // 0x39f12c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x39f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_39f130:
    // 0x39f130: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39f134:
    // 0x39f134: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f138:
    // 0x39f138: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39f138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39f13c:
    // 0x39f13c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x39f13cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_39f140:
    // 0x39f140: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x39f140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_39f144:
    // 0x39f144: 0xc0f809  jalr        $a2
label_39f148:
    if (ctx->pc == 0x39F148u) {
        ctx->pc = 0x39F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F144u;
        // 0x39f148: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F14Cu;
        goto label_39f14c;
    }
    ctx->pc = 0x39F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39F14Cu);
        ctx->pc = 0x39F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F144u;
        // 0x39f148: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F144u, 0x39F14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F14Cu;
label_39f14c:
    // 0x39f14c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39f150:
    // 0x39f150: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39f150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_39f154:
    // 0x39f154: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x39f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39f158:
    // 0x39f158: 0x40f809  jalr        $v0
label_39f15c:
    if (ctx->pc == 0x39F15Cu) {
        ctx->pc = 0x39F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F158u;
        // 0x39f15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F160u;
        goto label_39f160;
    }
    ctx->pc = 0x39F158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F160u);
        ctx->pc = 0x39F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F158u;
        // 0x39f15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F158u, 0x39F160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F160u;
label_39f160:
    // 0x39f160: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39f160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f164:
    // 0x39f164: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_39f168:
    if (ctx->pc == 0x39F168u) {
        ctx->pc = 0x39F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F164u;
        // 0x39f168: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F16Cu;
        goto label_39f16c;
    }
    ctx->pc = 0x39F164u;
    {
        const bool branch_taken_0x39f164 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F164u;
        // 0x39f168: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f164) {
            ctx->pc = 0x39F18Cu;
            goto label_39f18c;
        }
    }
    ctx->pc = 0x39F16Cu;
label_39f16c:
    // 0x39f16c: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x39f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_39f170:
    // 0x39f170: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x39f170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_39f174:
    // 0x39f174: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x39f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_39f178:
    // 0x39f178: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x39f178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_39f17c:
    // 0x39f17c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39f17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39f180:
    // 0x39f180: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39f184:
    // 0x39f184: 0x40f809  jalr        $v0
label_39f188:
    if (ctx->pc == 0x39F188u) {
        ctx->pc = 0x39F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F184u;
        // 0x39f188: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F18Cu;
        goto label_39f18c;
    }
    ctx->pc = 0x39F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F18Cu);
        ctx->pc = 0x39F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F184u;
        // 0x39f188: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F184u, 0x39F18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F18Cu;
label_39f18c:
    // 0x39f18c: 0xc0e1de0  jal         func_387780
label_39f190:
    if (ctx->pc == 0x39F190u) {
        ctx->pc = 0x39F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F18Cu;
        // 0x39f190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F194u;
        goto label_39f194;
    }
    ctx->pc = 0x39F18Cu;
    SET_GPR_U32(ctx, 31, 0x39F194u);
    ctx->pc = 0x39F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F18Cu;
    // 0x39f190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387780u, 0x39F18Cu, 0x39F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F194u;
label_39f194:
    // 0x39f194: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x39f194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f198:
    // 0x39f198: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39f19c:
    // 0x39f19c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x39f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_39f1a0:
    // 0x39f1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f1a4:
    // 0x39f1a4: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x39f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_39f1a8:
    // 0x39f1a8: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x39f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_39f1ac:
    // 0x39f1ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39f1b0:
    // 0x39f1b0: 0xc0e637e  jal         func_398DF8
label_39f1b4:
    if (ctx->pc == 0x39F1B4u) {
        ctx->pc = 0x39F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1B0u;
        // 0x39f1b4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F1B8u;
        goto label_39f1b8;
    }
    ctx->pc = 0x39F1B0u;
    SET_GPR_U32(ctx, 31, 0x39F1B8u);
    ctx->pc = 0x39F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F1B0u;
    // 0x39f1b4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x39F1B0u, 0x39F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F1B8u;
label_39f1b8:
    // 0x39f1b8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f1bc:
    // 0x39f1bc: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x39f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_39f1c0:
    // 0x39f1c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39f1c4:
    // 0x39f1c4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x39f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_39f1c8:
    // 0x39f1c8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f1cc:
    // 0x39f1cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39f1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39f1d0:
    // 0x39f1d0: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39f1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39f1d4:
    // 0x39f1d4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x39f1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39f1d8:
    // 0x39f1d8: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
label_39f1dc:
    if (ctx->pc == 0x39F1DCu) {
        ctx->pc = 0x39F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1D8u;
        // 0x39f1dc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F1E0u;
        goto label_39f1e0;
    }
    ctx->pc = 0x39F1D8u;
    {
        const bool branch_taken_0x39f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1D8u;
        // 0x39f1dc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1d8) {
            ctx->pc = 0x39EEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39eef0;
        }
    }
    ctx->pc = 0x39F1E0u;
label_39f1e0:
    // 0x39f1e0: 0x8e460090  lw          $a2, 0x90($s2)
    ctx->pc = 0x39f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_39f1e4:
    // 0x39f1e4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_39f1e8:
    if (ctx->pc == 0x39F1E8u) {
        ctx->pc = 0x39F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1E4u;
        // 0x39f1e8: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F1ECu;
        goto label_39f1ec;
    }
    ctx->pc = 0x39F1E4u;
    {
        const bool branch_taken_0x39f1e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1E4u;
        // 0x39f1e8: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1e4) {
            ctx->pc = 0x39F200u;
            goto label_39f200;
        }
    }
    ctx->pc = 0x39F1ECu;
label_39f1ec:
    // 0x39f1ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39f1f0:
    // 0x39f1f0: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x39f1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_39f1f4:
    // 0x39f1f4: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x39f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_39f1f8:
    // 0x39f1f8: 0x60f809  jalr        $v1
label_39f1fc:
    if (ctx->pc == 0x39F1FCu) {
        ctx->pc = 0x39F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1F8u;
        // 0x39f1fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F200u;
        goto label_39f200;
    }
    ctx->pc = 0x39F1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39F200u);
        ctx->pc = 0x39F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1F8u;
        // 0x39f1fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F1F8u, 0x39F200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F200u;
label_39f200:
    // 0x39f200: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x39f200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_39f204:
    // 0x39f204: 0xc047e72  jal         func_11F9C8
label_39f208:
    if (ctx->pc == 0x39F208u) {
        ctx->pc = 0x39F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F204u;
        // 0x39f208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F20Cu;
        goto label_39f20c;
    }
    ctx->pc = 0x39F204u;
    SET_GPR_U32(ctx, 31, 0x39F20Cu);
    ctx->pc = 0x39F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F204u;
    // 0x39f208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39F204u, 0x39F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F20Cu;
label_39f20c:
    // 0x39f20c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39f210:
    // 0x39f210: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x39f210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_39f214:
    // 0x39f214: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x39f214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_39f218:
    // 0x39f218: 0xa0f809  jalr        $a1
label_39f21c:
    if (ctx->pc == 0x39F21Cu) {
        ctx->pc = 0x39F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F218u;
        // 0x39f21c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F220u;
        goto label_39f220;
    }
    ctx->pc = 0x39F218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39F220u);
        ctx->pc = 0x39F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F218u;
        // 0x39f21c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F218u, 0x39F220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F220u;
label_39f220:
    // 0x39f220: 0xc047e72  jal         func_11F9C8
label_39f224:
    if (ctx->pc == 0x39F224u) {
        ctx->pc = 0x39F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F220u;
        // 0x39f224: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F228u;
        goto label_39f228;
    }
    ctx->pc = 0x39F220u;
    SET_GPR_U32(ctx, 31, 0x39F228u);
    ctx->pc = 0x39F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F220u;
    // 0x39f224: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39F220u, 0x39F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F228u;
label_39f228:
    // 0x39f228: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_39f22c:
    if (ctx->pc == 0x39F22Cu) {
        ctx->pc = 0x39F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F228u;
        // 0x39f22c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F230u;
        goto label_39f230;
    }
    ctx->pc = 0x39F228u;
    {
        const bool branch_taken_0x39f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F228u;
        // 0x39f22c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f228) {
            ctx->pc = 0x39F250u;
            goto label_39f250;
        }
    }
    ctx->pc = 0x39F230u;
label_39f230:
    // 0x39f230: 0xc047e72  jal         func_11F9C8
label_39f234:
    if (ctx->pc == 0x39F234u) {
        ctx->pc = 0x39F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F230u;
        // 0x39f234: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F238u;
        goto label_39f238;
    }
    ctx->pc = 0x39F230u;
    SET_GPR_U32(ctx, 31, 0x39F238u);
    ctx->pc = 0x39F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F230u;
    // 0x39f234: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x39F230u, 0x39F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F238u;
label_39f238:
    // 0x39f238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39f23c:
    // 0x39f23c: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x39f23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_39f240:
    // 0x39f240: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x39f240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_39f244:
    // 0x39f244: 0xa0f809  jalr        $a1
label_39f248:
    if (ctx->pc == 0x39F248u) {
        ctx->pc = 0x39F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F244u;
        // 0x39f248: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F24Cu;
        goto label_39f24c;
    }
    ctx->pc = 0x39F244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x39F24Cu);
        ctx->pc = 0x39F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F244u;
        // 0x39f248: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F244u, 0x39F24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F24Cu;
label_39f24c:
    // 0x39f24c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39f250:
    // 0x39f250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f254:
    // 0x39f254: 0x8c44eddc  lw          $a0, -0x1224($v0)
    ctx->pc = 0x39f254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_39f258:
    // 0x39f258: 0xac8320ac  sw          $v1, 0x20AC($a0)
    ctx->pc = 0x39f258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8364), GPR_U32(ctx, 3));
label_39f25c:
    // 0x39f25c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f260:
    // 0x39f260: 0x90620022  lbu         $v0, 0x22($v1)
    ctx->pc = 0x39f260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_39f264:
    // 0x39f264: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_39f268:
    if (ctx->pc == 0x39F268u) {
        ctx->pc = 0x39F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F264u;
        // 0x39f268: 0x924200ed  lbu         $v0, 0xED($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F26Cu;
        goto label_39f26c;
    }
    ctx->pc = 0x39F264u;
    {
        const bool branch_taken_0x39f264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f264) {
            ctx->pc = 0x39F268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F264u;
            // 0x39f268: 0x924200ed  lbu         $v0, 0xED($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F2ECu;
            goto label_39f2ec;
        }
    }
    ctx->pc = 0x39F26Cu;
label_39f26c:
    // 0x39f26c: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x39f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_39f270:
    // 0x39f270: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x39f270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39f274:
    // 0x39f274: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
label_39f278:
    if (ctx->pc == 0x39F278u) {
        ctx->pc = 0x39F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F274u;
        // 0x39f278: 0x924200ed  lbu         $v0, 0xED($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F27Cu;
        goto label_39f27c;
    }
    ctx->pc = 0x39F274u;
    {
        const bool branch_taken_0x39f274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f274) {
            ctx->pc = 0x39F278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F274u;
            // 0x39f278: 0x924200ed  lbu         $v0, 0xED($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F2ECu;
            goto label_39f2ec;
        }
    }
    ctx->pc = 0x39F27Cu;
label_39f27c:
    // 0x39f27c: 0x94c20014  lhu         $v0, 0x14($a2)
    ctx->pc = 0x39f27cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
label_39f280:
    // 0x39f280: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39f284:
    if (ctx->pc == 0x39F284u) {
        ctx->pc = 0x39F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F280u;
        // 0x39f284: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F288u;
        goto label_39f288;
    }
    ctx->pc = 0x39F280u;
    {
        const bool branch_taken_0x39f280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F280u;
        // 0x39f284: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f280) {
            ctx->pc = 0x39F2A4u;
            goto label_39f2a4;
        }
    }
    ctx->pc = 0x39F288u;
label_39f288:
    // 0x39f288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39f288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f28c:
    // 0x39f28c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x39f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_39f290:
    // 0x39f290: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x39f290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_39f294:
    // 0x39f294: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x39f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39f298:
    // 0x39f298: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x39f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_39f29c:
    // 0x39f29c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39f2a0:
    // 0x39f2a0: 0x448023  subu        $s0, $v0, $a0
    ctx->pc = 0x39f2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_39f2a4:
    // 0x39f2a4: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_39f2a8:
    if (ctx->pc == 0x39F2A8u) {
        ctx->pc = 0x39F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2A4u;
        // 0x39f2a8: 0x924200ed  lbu         $v0, 0xED($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2ACu;
        goto label_39f2ac;
    }
    ctx->pc = 0x39F2A4u;
    {
        const bool branch_taken_0x39f2a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f2a4) {
            ctx->pc = 0x39F2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F2A4u;
            // 0x39f2a8: 0x924200ed  lbu         $v0, 0xED($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F2ECu;
            goto label_39f2ec;
        }
    }
    ctx->pc = 0x39F2ACu;
label_39f2ac:
    // 0x39f2ac: 0x94d10014  lhu         $s1, 0x14($a2)
    ctx->pc = 0x39f2acu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
label_39f2b0:
    // 0x39f2b0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_39f2b4:
    if (ctx->pc == 0x39F2B4u) {
        ctx->pc = 0x39F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2B0u;
        // 0x39f2b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2B8u;
        goto label_39f2b8;
    }
    ctx->pc = 0x39F2B0u;
    {
        const bool branch_taken_0x39f2b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2B0u;
        // 0x39f2b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2b0) {
            ctx->pc = 0x39F2E8u;
            goto label_39f2e8;
        }
    }
    ctx->pc = 0x39F2B8u;
label_39f2b8:
    // 0x39f2b8: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x39f2b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_39f2bc:
    // 0x39f2bc: 0x0  nop
    ctx->pc = 0x39f2bcu;
    // NOP
label_39f2c0:
    // 0x39f2c0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x39f2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_39f2c4:
    // 0x39f2c4: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
label_39f2c8:
    if (ctx->pc == 0x39F2C8u) {
        ctx->pc = 0x39F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2C4u;
        // 0x39f2c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2CCu;
        goto label_39f2cc;
    }
    ctx->pc = 0x39F2C4u;
    {
        const bool branch_taken_0x39f2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x39F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2C4u;
        // 0x39f2c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2c4) {
            ctx->pc = 0x39F2D8u;
            goto label_39f2d8;
        }
    }
    ctx->pc = 0x39F2CCu;
label_39f2cc:
    // 0x39f2cc: 0xc0e836a  jal         func_3A0DA8
label_39f2d0:
    if (ctx->pc == 0x39F2D0u) {
        ctx->pc = 0x39F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2CCu;
        // 0x39f2d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2D4u;
        goto label_39f2d4;
    }
    ctx->pc = 0x39F2CCu;
    SET_GPR_U32(ctx, 31, 0x39F2D4u);
    ctx->pc = 0x39F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F2CCu;
    // 0x39f2d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DA8u, 0x39F2CCu, 0x39F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F2D4u;
label_39f2d4:
    // 0x39f2d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39f2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39f2d8:
    // 0x39f2d8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x39f2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_39f2dc:
    // 0x39f2dc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x39f2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_39f2e0:
    // 0x39f2e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_39f2e4:
    if (ctx->pc == 0x39F2E4u) {
        ctx->pc = 0x39F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2E0u;
        // 0x39f2e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2E8u;
        goto label_39f2e8;
    }
    ctx->pc = 0x39F2E0u;
    {
        const bool branch_taken_0x39f2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2E0u;
        // 0x39f2e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2e0) {
            ctx->pc = 0x39F2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f2c0;
        }
    }
    ctx->pc = 0x39F2E8u;
label_39f2e8:
    // 0x39f2e8: 0x924200ed  lbu         $v0, 0xED($s2)
    ctx->pc = 0x39f2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_39f2ec:
    // 0x39f2ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_39f2f0:
    if (ctx->pc == 0x39F2F0u) {
        ctx->pc = 0x39F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2ECu;
        // 0x39f2f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2F4u;
        goto label_39f2f4;
    }
    ctx->pc = 0x39F2ECu;
    {
        const bool branch_taken_0x39f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2ECu;
        // 0x39f2f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2ec) {
            ctx->pc = 0x39F32Cu;
            goto label_39f32c;
        }
    }
    ctx->pc = 0x39F2F4u;
label_39f2f4:
    // 0x39f2f4: 0xc04401e  jal         func_110078
label_39f2f8:
    if (ctx->pc == 0x39F2F8u) {
        ctx->pc = 0x39F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2F4u;
        // 0x39f2f8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F2FCu;
        goto label_39f2fc;
    }
    ctx->pc = 0x39F2F4u;
    SET_GPR_U32(ctx, 31, 0x39F2FCu);
    ctx->pc = 0x39F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F2F4u;
    // 0x39f2f8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110078u, 0x39F2F4u, 0x39F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F2FCu;
label_39f2fc:
    // 0x39f2fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_39f300:
    // 0x39f300: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x39f300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_39f304:
    // 0x39f304: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x39f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_39f308:
    // 0x39f308: 0xa0400410  sb          $zero, 0x410($v0)
    ctx->pc = 0x39f308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1040), (uint8_t)GPR_U32(ctx, 0));
label_39f30c:
    // 0x39f30c: 0x8c8348ac  lw          $v1, 0x48AC($a0)
    ctx->pc = 0x39f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18604)));
label_39f310:
    // 0x39f310: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_39f314:
    if (ctx->pc == 0x39F314u) {
        ctx->pc = 0x39F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F310u;
        // 0x39f314: 0x8ca4489c  lw          $a0, 0x489C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F318u;
        goto label_39f318;
    }
    ctx->pc = 0x39F310u;
    {
        const bool branch_taken_0x39f310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F310u;
        // 0x39f314: 0x8ca4489c  lw          $a0, 0x489C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f310) {
            ctx->pc = 0x39F32Cu;
            goto label_39f32c;
        }
    }
    ctx->pc = 0x39F318u;
label_39f318:
    // 0x39f318: 0x8c8203f8  lw          $v0, 0x3F8($a0)
    ctx->pc = 0x39f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1016)));
label_39f31c:
    // 0x39f31c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_39f320:
    if (ctx->pc == 0x39F320u) {
        ctx->pc = 0x39F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F31Cu;
        // 0x39f320: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F324u;
        goto label_39f324;
    }
    ctx->pc = 0x39F31Cu;
    {
        const bool branch_taken_0x39f31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F31Cu;
        // 0x39f320: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f31c) {
            ctx->pc = 0x39F330u;
            goto label_39f330;
        }
    }
    ctx->pc = 0x39F324u;
label_39f324:
    // 0x39f324: 0xc106802  jal         func_41A008
label_39f328:
    if (ctx->pc == 0x39F328u) {
        ctx->pc = 0x39F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F324u;
        // 0x39f328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F32Cu;
        goto label_39f32c;
    }
    ctx->pc = 0x39F324u;
    SET_GPR_U32(ctx, 31, 0x39F32Cu);
    ctx->pc = 0x39F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F324u;
    // 0x39f328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x39F324u, 0x39F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F32Cu;
label_39f32c:
    // 0x39f32c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39f330:
    // 0x39f330: 0x8c452af4  lw          $a1, 0x2AF4($v0)
    ctx->pc = 0x39f330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10996)));
label_39f334:
    // 0x39f334: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_39f338:
    if (ctx->pc == 0x39F338u) {
        ctx->pc = 0x39F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F334u;
        // 0x39f338: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F33Cu;
        goto label_39f33c;
    }
    ctx->pc = 0x39F334u;
    {
        const bool branch_taken_0x39f334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F334u;
        // 0x39f338: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f334) {
            ctx->pc = 0x39F378u;
            goto label_39f378;
        }
    }
    ctx->pc = 0x39F33Cu;
label_39f33c:
    // 0x39f33c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x39f33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_39f340:
    // 0x39f340: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39f344:
    // 0x39f344: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x39f344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_39f348:
    // 0x39f348: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x39f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_39f34c:
    // 0x39f34c: 0x40f809  jalr        $v0
label_39f350:
    if (ctx->pc == 0x39F350u) {
        ctx->pc = 0x39F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F34Cu;
        // 0x39f350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F354u;
        goto label_39f354;
    }
    ctx->pc = 0x39F34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39F354u);
        ctx->pc = 0x39F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F34Cu;
        // 0x39f350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F34Cu, 0x39F354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F354u;
label_39f354:
    // 0x39f354: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39f358:
    if (ctx->pc == 0x39F358u) {
        ctx->pc = 0x39F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F354u;
        // 0x39f358: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F35Cu;
        goto label_39f35c;
    }
    ctx->pc = 0x39F354u;
    {
        const bool branch_taken_0x39f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F354u;
        // 0x39f358: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f354) {
            ctx->pc = 0x39F378u;
            goto label_39f378;
        }
    }
    ctx->pc = 0x39F35Cu;
label_39f35c:
    // 0x39f35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39f35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f360:
    // 0x39f360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f364:
    // 0x39f364: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x39f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39f368:
    // 0x39f368: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x39f368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_39f36c:
    // 0x39f36c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x39f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_39f370:
    // 0x39f370: 0x60f809  jalr        $v1
label_39f374:
    if (ctx->pc == 0x39F374u) {
        ctx->pc = 0x39F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F370u;
        // 0x39f374: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F378u;
        goto label_39f378;
    }
    ctx->pc = 0x39F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39F378u);
        ctx->pc = 0x39F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F370u;
        // 0x39f374: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F370u, 0x39F378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F378u;
label_39f378:
    // 0x39f378: 0x924200ed  lbu         $v0, 0xED($s2)
    ctx->pc = 0x39f378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_39f37c:
    // 0x39f37c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_39f380:
    if (ctx->pc == 0x39F380u) {
        ctx->pc = 0x39F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F37Cu;
        // 0x39f380: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F384u;
        goto label_39f384;
    }
    ctx->pc = 0x39F37Cu;
    {
        const bool branch_taken_0x39f37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F37Cu;
        // 0x39f380: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f37c) {
            ctx->pc = 0x39F3F8u;
            goto label_39f3f8;
        }
    }
    ctx->pc = 0x39F384u;
label_39f384:
    // 0x39f384: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39f384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f388:
    // 0x39f388: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x39f388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_39f38c:
    // 0x39f38c: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x39f38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39f390:
    // 0x39f390: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
label_39f394:
    if (ctx->pc == 0x39F394u) {
        ctx->pc = 0x39F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F390u;
        // 0x39f394: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F398u;
        goto label_39f398;
    }
    ctx->pc = 0x39F390u;
    {
        const bool branch_taken_0x39f390 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x39F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F390u;
        // 0x39f394: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f390) {
            ctx->pc = 0x39F3D0u;
            goto label_39f3d0;
        }
    }
    ctx->pc = 0x39F398u;
label_39f398:
    // 0x39f398: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39f398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39f39c:
    // 0x39f39c: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x39f39cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_39f3a0:
    // 0x39f3a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39f3a4:
    // 0x39f3a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39f3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f3a8:
    // 0x39f3a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39f3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39f3ac:
    // 0x39f3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f3b0:
    // 0x39f3b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39f3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f3b4:
    // 0x39f3b4: 0xc063514  jal         func_18D450
label_39f3b8:
    if (ctx->pc == 0x39F3B8u) {
        ctx->pc = 0x39F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3B4u;
        // 0x39f3b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F3BCu;
        goto label_39f3bc;
    }
    ctx->pc = 0x39F3B4u;
    SET_GPR_U32(ctx, 31, 0x39F3BCu);
    ctx->pc = 0x39F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3B4u;
    // 0x39f3b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x39F3B4u, 0x39F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3BCu;
label_39f3bc:
    // 0x39f3bc: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x39f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39f3c0:
    // 0x39f3c0: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x39f3c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_39f3c4:
    // 0x39f3c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x39f3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39f3c8:
    // 0x39f3c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_39f3cc:
    if (ctx->pc == 0x39F3CCu) {
        ctx->pc = 0x39F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3C8u;
        // 0x39f3cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F3D0u;
        goto label_39f3d0;
    }
    ctx->pc = 0x39F3C8u;
    {
        const bool branch_taken_0x39f3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3C8u;
        // 0x39f3cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f3c8) {
            ctx->pc = 0x39F3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f3a0;
        }
    }
    ctx->pc = 0x39F3D0u;
label_39f3d0:
    // 0x39f3d0: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x39f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39f3d4:
    // 0x39f3d4: 0xc0e409a  jal         func_390268
label_39f3d8:
    if (ctx->pc == 0x39F3D8u) {
        ctx->pc = 0x39F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3D4u;
        // 0x39f3d8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F3DCu;
        goto label_39f3dc;
    }
    ctx->pc = 0x39F3D4u;
    SET_GPR_U32(ctx, 31, 0x39F3DCu);
    ctx->pc = 0x39F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3D4u;
    // 0x39f3d8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x39F3D4u, 0x39F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3DCu;
label_39f3dc:
    // 0x39f3dc: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x39f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_39f3e0:
    // 0x39f3e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f3e4:
    // 0x39f3e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f3e8:
    // 0x39f3e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39f3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f3ec:
    // 0x39f3ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39f3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f3f0:
    // 0x39f3f0: 0xc107138  jal         func_41C4E0
label_39f3f4:
    if (ctx->pc == 0x39F3F4u) {
        ctx->pc = 0x39F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3F0u;
        // 0x39f3f4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F3F8u;
        goto label_39f3f8;
    }
    ctx->pc = 0x39F3F0u;
    SET_GPR_U32(ctx, 31, 0x39F3F8u);
    ctx->pc = 0x39F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3F0u;
    // 0x39f3f4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x39F3F0u, 0x39F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3F8u;
label_39f3f8:
    // 0x39f3f8: 0xc06cfde  jal         func_1B3F78
label_39f3fc:
    if (ctx->pc == 0x39F3FCu) {
        ctx->pc = 0x39F400u;
        goto label_39f400;
    }
    ctx->pc = 0x39F3F8u;
    SET_GPR_U32(ctx, 31, 0x39F400u);
    ctx->pc = 0x1B3F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F78u, 0x39F3F8u, 0x39F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F400u;
label_39f400:
    // 0x39f400: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x39f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f404:
    // 0x39f404: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39f408:
    // 0x39f408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f40c:
    // 0x39f40c: 0xc0e836a  jal         func_3A0DA8
label_39f410:
    if (ctx->pc == 0x39F410u) {
        ctx->pc = 0x39F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F40Cu;
        // 0x39f410: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F414u;
        goto label_39f414;
    }
    ctx->pc = 0x39F40Cu;
    SET_GPR_U32(ctx, 31, 0x39F414u);
    ctx->pc = 0x39F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F40Cu;
    // 0x39f410: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DA8u, 0x39F40Cu, 0x39F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F414u;
label_39f414:
    // 0x39f414: 0xc0d4efc  jal         func_353BF0
label_39f418:
    if (ctx->pc == 0x39F418u) {
        ctx->pc = 0x39F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F414u;
        // 0x39f418: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F41Cu;
        goto label_39f41c;
    }
    ctx->pc = 0x39F414u;
    SET_GPR_U32(ctx, 31, 0x39F41Cu);
    ctx->pc = 0x39F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F414u;
    // 0x39f418: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x39F414u, 0x39F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F41Cu;
label_39f41c:
    // 0x39f41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f420:
    // 0x39f420: 0xc0e858c  jal         func_3A1630
label_39f424:
    if (ctx->pc == 0x39F424u) {
        ctx->pc = 0x39F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F420u;
        // 0x39f424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F428u;
        goto label_39f428;
    }
    ctx->pc = 0x39F420u;
    SET_GPR_U32(ctx, 31, 0x39F428u);
    ctx->pc = 0x39F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F420u;
    // 0x39f424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x39F420u, 0x39F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F428u;
label_39f428:
    // 0x39f428: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x39f428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39f42c:
    // 0x39f42c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x39f42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39f430:
    // 0x39f430: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x39f430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39f434:
    // 0x39f434: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x39f434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39f438:
    // 0x39f438: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x39f438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39f43c:
    // 0x39f43c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x39f43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39f440:
    // 0x39f440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39f440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39f444:
    // 0x39f444: 0x3e00008  jr          $ra
label_39f448:
    if (ctx->pc == 0x39F448u) {
        ctx->pc = 0x39F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F444u;
        // 0x39f448: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F44Cu;
        goto label_39f44c;
    }
    ctx->pc = 0x39F444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F444u;
        // 0x39f448: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F44Cu;
label_39f44c:
    // 0x39f44c: 0x0  nop
    ctx->pc = 0x39f44cu;
    // NOP
    ctx->pc = 0x39f450u;
}
