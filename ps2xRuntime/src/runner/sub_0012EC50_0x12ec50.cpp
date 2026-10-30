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

// Function: sub_0012EC50
// Address: 0x12ec50 - 0x12f3e0
void sub_0012EC50_0x12ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EC50_0x12ec50");
#endif

    switch (ctx->pc) {
        case 0x12ec50u: goto label_12ec50;
        case 0x12ec54u: goto label_12ec54;
        case 0x12ec58u: goto label_12ec58;
        case 0x12ec5cu: goto label_12ec5c;
        case 0x12ec60u: goto label_12ec60;
        case 0x12ec64u: goto label_12ec64;
        case 0x12ec68u: goto label_12ec68;
        case 0x12ec6cu: goto label_12ec6c;
        case 0x12ec70u: goto label_12ec70;
        case 0x12ec74u: goto label_12ec74;
        case 0x12ec78u: goto label_12ec78;
        case 0x12ec7cu: goto label_12ec7c;
        case 0x12ec80u: goto label_12ec80;
        case 0x12ec84u: goto label_12ec84;
        case 0x12ec88u: goto label_12ec88;
        case 0x12ec8cu: goto label_12ec8c;
        case 0x12ec90u: goto label_12ec90;
        case 0x12ec94u: goto label_12ec94;
        case 0x12ec98u: goto label_12ec98;
        case 0x12ec9cu: goto label_12ec9c;
        case 0x12eca0u: goto label_12eca0;
        case 0x12eca4u: goto label_12eca4;
        case 0x12eca8u: goto label_12eca8;
        case 0x12ecacu: goto label_12ecac;
        case 0x12ecb0u: goto label_12ecb0;
        case 0x12ecb4u: goto label_12ecb4;
        case 0x12ecb8u: goto label_12ecb8;
        case 0x12ecbcu: goto label_12ecbc;
        case 0x12ecc0u: goto label_12ecc0;
        case 0x12ecc4u: goto label_12ecc4;
        case 0x12ecc8u: goto label_12ecc8;
        case 0x12ecccu: goto label_12eccc;
        case 0x12ecd0u: goto label_12ecd0;
        case 0x12ecd4u: goto label_12ecd4;
        case 0x12ecd8u: goto label_12ecd8;
        case 0x12ecdcu: goto label_12ecdc;
        case 0x12ece0u: goto label_12ece0;
        case 0x12ece4u: goto label_12ece4;
        case 0x12ece8u: goto label_12ece8;
        case 0x12ececu: goto label_12ecec;
        case 0x12ecf0u: goto label_12ecf0;
        case 0x12ecf4u: goto label_12ecf4;
        case 0x12ecf8u: goto label_12ecf8;
        case 0x12ecfcu: goto label_12ecfc;
        case 0x12ed00u: goto label_12ed00;
        case 0x12ed04u: goto label_12ed04;
        case 0x12ed08u: goto label_12ed08;
        case 0x12ed0cu: goto label_12ed0c;
        case 0x12ed10u: goto label_12ed10;
        case 0x12ed14u: goto label_12ed14;
        case 0x12ed18u: goto label_12ed18;
        case 0x12ed1cu: goto label_12ed1c;
        case 0x12ed20u: goto label_12ed20;
        case 0x12ed24u: goto label_12ed24;
        case 0x12ed28u: goto label_12ed28;
        case 0x12ed2cu: goto label_12ed2c;
        case 0x12ed30u: goto label_12ed30;
        case 0x12ed34u: goto label_12ed34;
        case 0x12ed38u: goto label_12ed38;
        case 0x12ed3cu: goto label_12ed3c;
        case 0x12ed40u: goto label_12ed40;
        case 0x12ed44u: goto label_12ed44;
        case 0x12ed48u: goto label_12ed48;
        case 0x12ed4cu: goto label_12ed4c;
        case 0x12ed50u: goto label_12ed50;
        case 0x12ed54u: goto label_12ed54;
        case 0x12ed58u: goto label_12ed58;
        case 0x12ed5cu: goto label_12ed5c;
        case 0x12ed60u: goto label_12ed60;
        case 0x12ed64u: goto label_12ed64;
        case 0x12ed68u: goto label_12ed68;
        case 0x12ed6cu: goto label_12ed6c;
        case 0x12ed70u: goto label_12ed70;
        case 0x12ed74u: goto label_12ed74;
        case 0x12ed78u: goto label_12ed78;
        case 0x12ed7cu: goto label_12ed7c;
        case 0x12ed80u: goto label_12ed80;
        case 0x12ed84u: goto label_12ed84;
        case 0x12ed88u: goto label_12ed88;
        case 0x12ed8cu: goto label_12ed8c;
        case 0x12ed90u: goto label_12ed90;
        case 0x12ed94u: goto label_12ed94;
        case 0x12ed98u: goto label_12ed98;
        case 0x12ed9cu: goto label_12ed9c;
        case 0x12eda0u: goto label_12eda0;
        case 0x12eda4u: goto label_12eda4;
        case 0x12eda8u: goto label_12eda8;
        case 0x12edacu: goto label_12edac;
        case 0x12edb0u: goto label_12edb0;
        case 0x12edb4u: goto label_12edb4;
        case 0x12edb8u: goto label_12edb8;
        case 0x12edbcu: goto label_12edbc;
        case 0x12edc0u: goto label_12edc0;
        case 0x12edc4u: goto label_12edc4;
        case 0x12edc8u: goto label_12edc8;
        case 0x12edccu: goto label_12edcc;
        case 0x12edd0u: goto label_12edd0;
        case 0x12edd4u: goto label_12edd4;
        case 0x12edd8u: goto label_12edd8;
        case 0x12eddcu: goto label_12eddc;
        case 0x12ede0u: goto label_12ede0;
        case 0x12ede4u: goto label_12ede4;
        case 0x12ede8u: goto label_12ede8;
        case 0x12edecu: goto label_12edec;
        case 0x12edf0u: goto label_12edf0;
        case 0x12edf4u: goto label_12edf4;
        case 0x12edf8u: goto label_12edf8;
        case 0x12edfcu: goto label_12edfc;
        case 0x12ee00u: goto label_12ee00;
        case 0x12ee04u: goto label_12ee04;
        case 0x12ee08u: goto label_12ee08;
        case 0x12ee0cu: goto label_12ee0c;
        case 0x12ee10u: goto label_12ee10;
        case 0x12ee14u: goto label_12ee14;
        case 0x12ee18u: goto label_12ee18;
        case 0x12ee1cu: goto label_12ee1c;
        case 0x12ee20u: goto label_12ee20;
        case 0x12ee24u: goto label_12ee24;
        case 0x12ee28u: goto label_12ee28;
        case 0x12ee2cu: goto label_12ee2c;
        case 0x12ee30u: goto label_12ee30;
        case 0x12ee34u: goto label_12ee34;
        case 0x12ee38u: goto label_12ee38;
        case 0x12ee3cu: goto label_12ee3c;
        case 0x12ee40u: goto label_12ee40;
        case 0x12ee44u: goto label_12ee44;
        case 0x12ee48u: goto label_12ee48;
        case 0x12ee4cu: goto label_12ee4c;
        case 0x12ee50u: goto label_12ee50;
        case 0x12ee54u: goto label_12ee54;
        case 0x12ee58u: goto label_12ee58;
        case 0x12ee5cu: goto label_12ee5c;
        case 0x12ee60u: goto label_12ee60;
        case 0x12ee64u: goto label_12ee64;
        case 0x12ee68u: goto label_12ee68;
        case 0x12ee6cu: goto label_12ee6c;
        case 0x12ee70u: goto label_12ee70;
        case 0x12ee74u: goto label_12ee74;
        case 0x12ee78u: goto label_12ee78;
        case 0x12ee7cu: goto label_12ee7c;
        case 0x12ee80u: goto label_12ee80;
        case 0x12ee84u: goto label_12ee84;
        case 0x12ee88u: goto label_12ee88;
        case 0x12ee8cu: goto label_12ee8c;
        case 0x12ee90u: goto label_12ee90;
        case 0x12ee94u: goto label_12ee94;
        case 0x12ee98u: goto label_12ee98;
        case 0x12ee9cu: goto label_12ee9c;
        case 0x12eea0u: goto label_12eea0;
        case 0x12eea4u: goto label_12eea4;
        case 0x12eea8u: goto label_12eea8;
        case 0x12eeacu: goto label_12eeac;
        case 0x12eeb0u: goto label_12eeb0;
        case 0x12eeb4u: goto label_12eeb4;
        case 0x12eeb8u: goto label_12eeb8;
        case 0x12eebcu: goto label_12eebc;
        case 0x12eec0u: goto label_12eec0;
        case 0x12eec4u: goto label_12eec4;
        case 0x12eec8u: goto label_12eec8;
        case 0x12eeccu: goto label_12eecc;
        case 0x12eed0u: goto label_12eed0;
        case 0x12eed4u: goto label_12eed4;
        case 0x12eed8u: goto label_12eed8;
        case 0x12eedcu: goto label_12eedc;
        case 0x12eee0u: goto label_12eee0;
        case 0x12eee4u: goto label_12eee4;
        case 0x12eee8u: goto label_12eee8;
        case 0x12eeecu: goto label_12eeec;
        case 0x12eef0u: goto label_12eef0;
        case 0x12eef4u: goto label_12eef4;
        case 0x12eef8u: goto label_12eef8;
        case 0x12eefcu: goto label_12eefc;
        case 0x12ef00u: goto label_12ef00;
        case 0x12ef04u: goto label_12ef04;
        case 0x12ef08u: goto label_12ef08;
        case 0x12ef0cu: goto label_12ef0c;
        case 0x12ef10u: goto label_12ef10;
        case 0x12ef14u: goto label_12ef14;
        case 0x12ef18u: goto label_12ef18;
        case 0x12ef1cu: goto label_12ef1c;
        case 0x12ef20u: goto label_12ef20;
        case 0x12ef24u: goto label_12ef24;
        case 0x12ef28u: goto label_12ef28;
        case 0x12ef2cu: goto label_12ef2c;
        case 0x12ef30u: goto label_12ef30;
        case 0x12ef34u: goto label_12ef34;
        case 0x12ef38u: goto label_12ef38;
        case 0x12ef3cu: goto label_12ef3c;
        case 0x12ef40u: goto label_12ef40;
        case 0x12ef44u: goto label_12ef44;
        case 0x12ef48u: goto label_12ef48;
        case 0x12ef4cu: goto label_12ef4c;
        case 0x12ef50u: goto label_12ef50;
        case 0x12ef54u: goto label_12ef54;
        case 0x12ef58u: goto label_12ef58;
        case 0x12ef5cu: goto label_12ef5c;
        case 0x12ef60u: goto label_12ef60;
        case 0x12ef64u: goto label_12ef64;
        case 0x12ef68u: goto label_12ef68;
        case 0x12ef6cu: goto label_12ef6c;
        case 0x12ef70u: goto label_12ef70;
        case 0x12ef74u: goto label_12ef74;
        case 0x12ef78u: goto label_12ef78;
        case 0x12ef7cu: goto label_12ef7c;
        case 0x12ef80u: goto label_12ef80;
        case 0x12ef84u: goto label_12ef84;
        case 0x12ef88u: goto label_12ef88;
        case 0x12ef8cu: goto label_12ef8c;
        case 0x12ef90u: goto label_12ef90;
        case 0x12ef94u: goto label_12ef94;
        case 0x12ef98u: goto label_12ef98;
        case 0x12ef9cu: goto label_12ef9c;
        case 0x12efa0u: goto label_12efa0;
        case 0x12efa4u: goto label_12efa4;
        case 0x12efa8u: goto label_12efa8;
        case 0x12efacu: goto label_12efac;
        case 0x12efb0u: goto label_12efb0;
        case 0x12efb4u: goto label_12efb4;
        case 0x12efb8u: goto label_12efb8;
        case 0x12efbcu: goto label_12efbc;
        case 0x12efc0u: goto label_12efc0;
        case 0x12efc4u: goto label_12efc4;
        case 0x12efc8u: goto label_12efc8;
        case 0x12efccu: goto label_12efcc;
        case 0x12efd0u: goto label_12efd0;
        case 0x12efd4u: goto label_12efd4;
        case 0x12efd8u: goto label_12efd8;
        case 0x12efdcu: goto label_12efdc;
        case 0x12efe0u: goto label_12efe0;
        case 0x12efe4u: goto label_12efe4;
        case 0x12efe8u: goto label_12efe8;
        case 0x12efecu: goto label_12efec;
        case 0x12eff0u: goto label_12eff0;
        case 0x12eff4u: goto label_12eff4;
        case 0x12eff8u: goto label_12eff8;
        case 0x12effcu: goto label_12effc;
        case 0x12f000u: goto label_12f000;
        case 0x12f004u: goto label_12f004;
        case 0x12f008u: goto label_12f008;
        case 0x12f00cu: goto label_12f00c;
        case 0x12f010u: goto label_12f010;
        case 0x12f014u: goto label_12f014;
        case 0x12f018u: goto label_12f018;
        case 0x12f01cu: goto label_12f01c;
        case 0x12f020u: goto label_12f020;
        case 0x12f024u: goto label_12f024;
        case 0x12f028u: goto label_12f028;
        case 0x12f02cu: goto label_12f02c;
        case 0x12f030u: goto label_12f030;
        case 0x12f034u: goto label_12f034;
        case 0x12f038u: goto label_12f038;
        case 0x12f03cu: goto label_12f03c;
        case 0x12f040u: goto label_12f040;
        case 0x12f044u: goto label_12f044;
        case 0x12f048u: goto label_12f048;
        case 0x12f04cu: goto label_12f04c;
        case 0x12f050u: goto label_12f050;
        case 0x12f054u: goto label_12f054;
        case 0x12f058u: goto label_12f058;
        case 0x12f05cu: goto label_12f05c;
        case 0x12f060u: goto label_12f060;
        case 0x12f064u: goto label_12f064;
        case 0x12f068u: goto label_12f068;
        case 0x12f06cu: goto label_12f06c;
        case 0x12f070u: goto label_12f070;
        case 0x12f074u: goto label_12f074;
        case 0x12f078u: goto label_12f078;
        case 0x12f07cu: goto label_12f07c;
        case 0x12f080u: goto label_12f080;
        case 0x12f084u: goto label_12f084;
        case 0x12f088u: goto label_12f088;
        case 0x12f08cu: goto label_12f08c;
        case 0x12f090u: goto label_12f090;
        case 0x12f094u: goto label_12f094;
        case 0x12f098u: goto label_12f098;
        case 0x12f09cu: goto label_12f09c;
        case 0x12f0a0u: goto label_12f0a0;
        case 0x12f0a4u: goto label_12f0a4;
        case 0x12f0a8u: goto label_12f0a8;
        case 0x12f0acu: goto label_12f0ac;
        case 0x12f0b0u: goto label_12f0b0;
        case 0x12f0b4u: goto label_12f0b4;
        case 0x12f0b8u: goto label_12f0b8;
        case 0x12f0bcu: goto label_12f0bc;
        case 0x12f0c0u: goto label_12f0c0;
        case 0x12f0c4u: goto label_12f0c4;
        case 0x12f0c8u: goto label_12f0c8;
        case 0x12f0ccu: goto label_12f0cc;
        case 0x12f0d0u: goto label_12f0d0;
        case 0x12f0d4u: goto label_12f0d4;
        case 0x12f0d8u: goto label_12f0d8;
        case 0x12f0dcu: goto label_12f0dc;
        case 0x12f0e0u: goto label_12f0e0;
        case 0x12f0e4u: goto label_12f0e4;
        case 0x12f0e8u: goto label_12f0e8;
        case 0x12f0ecu: goto label_12f0ec;
        case 0x12f0f0u: goto label_12f0f0;
        case 0x12f0f4u: goto label_12f0f4;
        case 0x12f0f8u: goto label_12f0f8;
        case 0x12f0fcu: goto label_12f0fc;
        case 0x12f100u: goto label_12f100;
        case 0x12f104u: goto label_12f104;
        case 0x12f108u: goto label_12f108;
        case 0x12f10cu: goto label_12f10c;
        case 0x12f110u: goto label_12f110;
        case 0x12f114u: goto label_12f114;
        case 0x12f118u: goto label_12f118;
        case 0x12f11cu: goto label_12f11c;
        case 0x12f120u: goto label_12f120;
        case 0x12f124u: goto label_12f124;
        case 0x12f128u: goto label_12f128;
        case 0x12f12cu: goto label_12f12c;
        case 0x12f130u: goto label_12f130;
        case 0x12f134u: goto label_12f134;
        case 0x12f138u: goto label_12f138;
        case 0x12f13cu: goto label_12f13c;
        case 0x12f140u: goto label_12f140;
        case 0x12f144u: goto label_12f144;
        case 0x12f148u: goto label_12f148;
        case 0x12f14cu: goto label_12f14c;
        case 0x12f150u: goto label_12f150;
        case 0x12f154u: goto label_12f154;
        case 0x12f158u: goto label_12f158;
        case 0x12f15cu: goto label_12f15c;
        case 0x12f160u: goto label_12f160;
        case 0x12f164u: goto label_12f164;
        case 0x12f168u: goto label_12f168;
        case 0x12f16cu: goto label_12f16c;
        case 0x12f170u: goto label_12f170;
        case 0x12f174u: goto label_12f174;
        case 0x12f178u: goto label_12f178;
        case 0x12f17cu: goto label_12f17c;
        case 0x12f180u: goto label_12f180;
        case 0x12f184u: goto label_12f184;
        case 0x12f188u: goto label_12f188;
        case 0x12f18cu: goto label_12f18c;
        case 0x12f190u: goto label_12f190;
        case 0x12f194u: goto label_12f194;
        case 0x12f198u: goto label_12f198;
        case 0x12f19cu: goto label_12f19c;
        case 0x12f1a0u: goto label_12f1a0;
        case 0x12f1a4u: goto label_12f1a4;
        case 0x12f1a8u: goto label_12f1a8;
        case 0x12f1acu: goto label_12f1ac;
        case 0x12f1b0u: goto label_12f1b0;
        case 0x12f1b4u: goto label_12f1b4;
        case 0x12f1b8u: goto label_12f1b8;
        case 0x12f1bcu: goto label_12f1bc;
        case 0x12f1c0u: goto label_12f1c0;
        case 0x12f1c4u: goto label_12f1c4;
        case 0x12f1c8u: goto label_12f1c8;
        case 0x12f1ccu: goto label_12f1cc;
        case 0x12f1d0u: goto label_12f1d0;
        case 0x12f1d4u: goto label_12f1d4;
        case 0x12f1d8u: goto label_12f1d8;
        case 0x12f1dcu: goto label_12f1dc;
        case 0x12f1e0u: goto label_12f1e0;
        case 0x12f1e4u: goto label_12f1e4;
        case 0x12f1e8u: goto label_12f1e8;
        case 0x12f1ecu: goto label_12f1ec;
        case 0x12f1f0u: goto label_12f1f0;
        case 0x12f1f4u: goto label_12f1f4;
        case 0x12f1f8u: goto label_12f1f8;
        case 0x12f1fcu: goto label_12f1fc;
        case 0x12f200u: goto label_12f200;
        case 0x12f204u: goto label_12f204;
        case 0x12f208u: goto label_12f208;
        case 0x12f20cu: goto label_12f20c;
        case 0x12f210u: goto label_12f210;
        case 0x12f214u: goto label_12f214;
        case 0x12f218u: goto label_12f218;
        case 0x12f21cu: goto label_12f21c;
        case 0x12f220u: goto label_12f220;
        case 0x12f224u: goto label_12f224;
        case 0x12f228u: goto label_12f228;
        case 0x12f22cu: goto label_12f22c;
        case 0x12f230u: goto label_12f230;
        case 0x12f234u: goto label_12f234;
        case 0x12f238u: goto label_12f238;
        case 0x12f23cu: goto label_12f23c;
        case 0x12f240u: goto label_12f240;
        case 0x12f244u: goto label_12f244;
        case 0x12f248u: goto label_12f248;
        case 0x12f24cu: goto label_12f24c;
        case 0x12f250u: goto label_12f250;
        case 0x12f254u: goto label_12f254;
        case 0x12f258u: goto label_12f258;
        case 0x12f25cu: goto label_12f25c;
        case 0x12f260u: goto label_12f260;
        case 0x12f264u: goto label_12f264;
        case 0x12f268u: goto label_12f268;
        case 0x12f26cu: goto label_12f26c;
        case 0x12f270u: goto label_12f270;
        case 0x12f274u: goto label_12f274;
        case 0x12f278u: goto label_12f278;
        case 0x12f27cu: goto label_12f27c;
        case 0x12f280u: goto label_12f280;
        case 0x12f284u: goto label_12f284;
        case 0x12f288u: goto label_12f288;
        case 0x12f28cu: goto label_12f28c;
        case 0x12f290u: goto label_12f290;
        case 0x12f294u: goto label_12f294;
        case 0x12f298u: goto label_12f298;
        case 0x12f29cu: goto label_12f29c;
        case 0x12f2a0u: goto label_12f2a0;
        case 0x12f2a4u: goto label_12f2a4;
        case 0x12f2a8u: goto label_12f2a8;
        case 0x12f2acu: goto label_12f2ac;
        case 0x12f2b0u: goto label_12f2b0;
        case 0x12f2b4u: goto label_12f2b4;
        case 0x12f2b8u: goto label_12f2b8;
        case 0x12f2bcu: goto label_12f2bc;
        case 0x12f2c0u: goto label_12f2c0;
        case 0x12f2c4u: goto label_12f2c4;
        case 0x12f2c8u: goto label_12f2c8;
        case 0x12f2ccu: goto label_12f2cc;
        case 0x12f2d0u: goto label_12f2d0;
        case 0x12f2d4u: goto label_12f2d4;
        case 0x12f2d8u: goto label_12f2d8;
        case 0x12f2dcu: goto label_12f2dc;
        case 0x12f2e0u: goto label_12f2e0;
        case 0x12f2e4u: goto label_12f2e4;
        case 0x12f2e8u: goto label_12f2e8;
        case 0x12f2ecu: goto label_12f2ec;
        case 0x12f2f0u: goto label_12f2f0;
        case 0x12f2f4u: goto label_12f2f4;
        case 0x12f2f8u: goto label_12f2f8;
        case 0x12f2fcu: goto label_12f2fc;
        case 0x12f300u: goto label_12f300;
        case 0x12f304u: goto label_12f304;
        case 0x12f308u: goto label_12f308;
        case 0x12f30cu: goto label_12f30c;
        case 0x12f310u: goto label_12f310;
        case 0x12f314u: goto label_12f314;
        case 0x12f318u: goto label_12f318;
        case 0x12f31cu: goto label_12f31c;
        case 0x12f320u: goto label_12f320;
        case 0x12f324u: goto label_12f324;
        case 0x12f328u: goto label_12f328;
        case 0x12f32cu: goto label_12f32c;
        case 0x12f330u: goto label_12f330;
        case 0x12f334u: goto label_12f334;
        case 0x12f338u: goto label_12f338;
        case 0x12f33cu: goto label_12f33c;
        case 0x12f340u: goto label_12f340;
        case 0x12f344u: goto label_12f344;
        case 0x12f348u: goto label_12f348;
        case 0x12f34cu: goto label_12f34c;
        case 0x12f350u: goto label_12f350;
        case 0x12f354u: goto label_12f354;
        case 0x12f358u: goto label_12f358;
        case 0x12f35cu: goto label_12f35c;
        case 0x12f360u: goto label_12f360;
        case 0x12f364u: goto label_12f364;
        case 0x12f368u: goto label_12f368;
        case 0x12f36cu: goto label_12f36c;
        case 0x12f370u: goto label_12f370;
        case 0x12f374u: goto label_12f374;
        case 0x12f378u: goto label_12f378;
        case 0x12f37cu: goto label_12f37c;
        case 0x12f380u: goto label_12f380;
        case 0x12f384u: goto label_12f384;
        case 0x12f388u: goto label_12f388;
        case 0x12f38cu: goto label_12f38c;
        case 0x12f390u: goto label_12f390;
        case 0x12f394u: goto label_12f394;
        case 0x12f398u: goto label_12f398;
        case 0x12f39cu: goto label_12f39c;
        case 0x12f3a0u: goto label_12f3a0;
        case 0x12f3a4u: goto label_12f3a4;
        case 0x12f3a8u: goto label_12f3a8;
        case 0x12f3acu: goto label_12f3ac;
        case 0x12f3b0u: goto label_12f3b0;
        case 0x12f3b4u: goto label_12f3b4;
        case 0x12f3b8u: goto label_12f3b8;
        case 0x12f3bcu: goto label_12f3bc;
        case 0x12f3c0u: goto label_12f3c0;
        case 0x12f3c4u: goto label_12f3c4;
        case 0x12f3c8u: goto label_12f3c8;
        case 0x12f3ccu: goto label_12f3cc;
        case 0x12f3d0u: goto label_12f3d0;
        case 0x12f3d4u: goto label_12f3d4;
        case 0x12f3d8u: goto label_12f3d8;
        case 0x12f3dcu: goto label_12f3dc;
        default: break;
    }

    ctx->pc = 0x12ec50u;

label_12ec50:
    // 0x12ec50: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x12ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_12ec54:
    // 0x12ec54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12ec58:
    // 0x12ec58: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x12ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_12ec5c:
    // 0x12ec5c: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x12ec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_12ec60:
    // 0x12ec60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ec60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ec64:
    // 0x12ec64: 0x8c43b238  lw          $v1, -0x4DC8($v0)
    ctx->pc = 0x12ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947384)));
label_12ec68:
    // 0x12ec68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12ec68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12ec6c:
    // 0x12ec6c: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x12ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_12ec70:
    // 0x12ec70: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x12ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_12ec74:
    // 0x12ec74: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x12ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_12ec78:
    // 0x12ec78: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x12ec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_12ec7c:
    // 0x12ec7c: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x12ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_12ec80:
    // 0x12ec80: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x12ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_12ec84:
    // 0x12ec84: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x12ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
label_12ec88:
    // 0x12ec88: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x12ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_12ec8c:
    // 0x12ec8c: 0xe7b90218  swc1        $f25, 0x218($sp)
    ctx->pc = 0x12ec8cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_12ec90:
    // 0x12ec90: 0xe7b80210  swc1        $f24, 0x210($sp)
    ctx->pc = 0x12ec90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_12ec94:
    // 0x12ec94: 0xe7b70208  swc1        $f23, 0x208($sp)
    ctx->pc = 0x12ec94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_12ec98:
    // 0x12ec98: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x12ec98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_12ec9c:
    // 0x12ec9c: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x12ec9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_12eca0:
    // 0x12eca0: 0x106001bd  beqz        $v1, . + 4 + (0x1BD << 2)
label_12eca4:
    if (ctx->pc == 0x12ECA4u) {
        ctx->pc = 0x12ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA0u;
        // 0x12eca4: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECA8u;
        goto label_12eca8;
    }
    ctx->pc = 0x12ECA0u;
    {
        const bool branch_taken_0x12eca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA0u;
        // 0x12eca4: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eca0) {
            ctx->pc = 0x12F398u;
            goto label_12f398;
        }
    }
    ctx->pc = 0x12ECA8u;
label_12eca8:
    // 0x12eca8: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x12eca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12ecac:
    // 0x12ecac: 0x104001ba  beqz        $v0, . + 4 + (0x1BA << 2)
label_12ecb0:
    if (ctx->pc == 0x12ECB0u) {
        ctx->pc = 0x12ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECACu;
        // 0x12ecb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECB4u;
        goto label_12ecb4;
    }
    ctx->pc = 0x12ECACu;
    {
        const bool branch_taken_0x12ecac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECACu;
        // 0x12ecb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecac) {
            ctx->pc = 0x12F398u;
            goto label_12f398;
        }
    }
    ctx->pc = 0x12ECB4u;
label_12ecb4:
    // 0x12ecb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12ecb8:
    // 0x12ecb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ecb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ecbc:
    // 0x12ecbc: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x12ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_12ecc0:
    // 0x12ecc0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ecc4:
    // 0x12ecc4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12ecc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12ecc8:
    // 0x12ecc8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x12ecc8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_12eccc:
    // 0x12eccc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12ecccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12ecd0:
    // 0x12ecd0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x12ecd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_12ecd4:
    // 0x12ecd4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x12ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_12ecd8:
    // 0x12ecd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12ecd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ecdc:
    // 0x12ecdc: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x12ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_12ece0:
    // 0x12ece0: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x12ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_12ece4:
    // 0x12ece4: 0x84a40058  lh          $a0, 0x58($a1)
    ctx->pc = 0x12ece4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
label_12ece8:
    // 0x12ece8: 0x40f809  jalr        $v0
label_12ecec:
    if (ctx->pc == 0x12ECECu) {
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE8u;
        // 0x12ecec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECF0u;
        goto label_12ecf0;
    }
    ctx->pc = 0x12ECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12ECF0u);
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE8u;
        // 0x12ecec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECE8u, 0x12ECF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ECF0u;
label_12ecf0:
    // 0x12ecf0: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x12ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_12ecf4:
    // 0x12ecf4: 0xc086618  jal         func_219860
label_12ecf8:
    if (ctx->pc == 0x12ECF8u) {
        ctx->pc = 0x12ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECF4u;
        // 0x12ecf8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECFCu;
        goto label_12ecfc;
    }
    ctx->pc = 0x12ECF4u;
    SET_GPR_U32(ctx, 31, 0x12ECFCu);
    ctx->pc = 0x12ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ECF4u;
    // 0x12ecf8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x12ECF4u, 0x12ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECFCu;
label_12ecfc:
    // 0x12ecfc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12ed00:
    // 0x12ed00: 0x4600a668  max.s       $f25, $f20, $f0
    ctx->pc = 0x12ed00u;
    ctx->f[25] = std::max(ctx->f[20], ctx->f[0]);
label_12ed04:
    // 0x12ed04: 0x8c62b238  lw          $v0, -0x4DC8($v1)
    ctx->pc = 0x12ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947384)));
label_12ed08:
    // 0x12ed08: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_12ed0c:
    if (ctx->pc == 0x12ED0Cu) {
        ctx->pc = 0x12ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED08u;
        // 0x12ed0c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED10u;
        goto label_12ed10;
    }
    ctx->pc = 0x12ED08u;
    {
        const bool branch_taken_0x12ed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED08u;
        // 0x12ed0c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed08) {
            ctx->pc = 0x12EEA0u;
            goto label_12eea0;
        }
    }
    ctx->pc = 0x12ED10u;
label_12ed10:
    // 0x12ed10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12ed14:
    // 0x12ed14: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x12ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
label_12ed18:
    // 0x12ed18: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x12ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_12ed1c:
    // 0x12ed1c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x12ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_12ed20:
    // 0x12ed20: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x12ed20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12ed24:
    // 0x12ed24: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x12ed24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12ed28:
    // 0x12ed28: 0x4600be06  mov.s       $f24, $f23
    ctx->pc = 0x12ed28u;
    ctx->f[24] = FPU_MOV_S(ctx->f[23]);
label_12ed2c:
    // 0x12ed2c: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x12ed2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12ed30:
    // 0x12ed30: 0x27b600f0  addiu       $s6, $sp, 0xF0
    ctx->pc = 0x12ed30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12ed34:
    // 0x12ed34: 0x26350180  addiu       $s5, $s1, 0x180
    ctx->pc = 0x12ed34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_12ed38:
    // 0x12ed38: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x12ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_12ed3c:
    // 0x12ed3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12ed40:
    // 0x12ed40: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x12ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_12ed44:
    // 0x12ed44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x12ed44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12ed48:
    // 0x12ed48: 0xc0e44cc  jal         func_391330
label_12ed4c:
    if (ctx->pc == 0x12ED4Cu) {
        ctx->pc = 0x12ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED48u;
        // 0x12ed4c: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED50u;
        goto label_12ed50;
    }
    ctx->pc = 0x12ED48u;
    SET_GPR_U32(ctx, 31, 0x12ED50u);
    ctx->pc = 0x12ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED48u;
    // 0x12ed4c: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x12ED48u, 0x12ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED50u;
label_12ed50:
    // 0x12ed50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12ed54:
    // 0x12ed54: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x12ed54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_12ed58:
    // 0x12ed58: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x12ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_12ed5c:
    // 0x12ed5c: 0xc0e44cc  jal         func_391330
label_12ed60:
    if (ctx->pc == 0x12ED60u) {
        ctx->pc = 0x12ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED5Cu;
        // 0x12ed60: 0xc4560078  lwc1        $f22, 0x78($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED64u;
        goto label_12ed64;
    }
    ctx->pc = 0x12ED5Cu;
    SET_GPR_U32(ctx, 31, 0x12ED64u);
    ctx->pc = 0x12ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED5Cu;
    // 0x12ed60: 0xc4560078  lwc1        $f22, 0x78($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x12ED5Cu, 0x12ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED64u;
label_12ed64:
    // 0x12ed64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12ed68:
    // 0x12ed68: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x12ed68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_12ed6c:
    // 0x12ed6c: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x12ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_12ed70:
    // 0x12ed70: 0xc0e44cc  jal         func_391330
label_12ed74:
    if (ctx->pc == 0x12ED74u) {
        ctx->pc = 0x12ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED70u;
        // 0x12ed74: 0xc455007c  lwc1        $f21, 0x7C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED78u;
        goto label_12ed78;
    }
    ctx->pc = 0x12ED70u;
    SET_GPR_U32(ctx, 31, 0x12ED78u);
    ctx->pc = 0x12ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED70u;
    // 0x12ed74: 0xc455007c  lwc1        $f21, 0x7C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x12ED70u, 0x12ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED78u;
label_12ed78:
    // 0x12ed78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12ed7c:
    // 0x12ed7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ed80:
    // 0x12ed80: 0xc4540080  lwc1        $f20, 0x80($v0)
    ctx->pc = 0x12ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12ed84:
    // 0x12ed84: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x12ed84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_12ed88:
    // 0x12ed88: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x12ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_12ed8c:
    // 0x12ed8c: 0x40f809  jalr        $v0
label_12ed90:
    if (ctx->pc == 0x12ED90u) {
        ctx->pc = 0x12ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED8Cu;
        // 0x12ed90: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED94u;
        goto label_12ed94;
    }
    ctx->pc = 0x12ED8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12ED94u);
        ctx->pc = 0x12ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED8Cu;
        // 0x12ed90: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED8Cu, 0x12ED94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ED94u;
label_12ed94:
    // 0x12ed94: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x12ed94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12ed98:
    // 0x12ed98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ed9c:
    // 0x12ed9c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x12ed9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_12eda0:
    // 0x12eda0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12eda4:
    // 0x12eda4: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x12eda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_12eda8:
    // 0x12eda8: 0xe7b500a4  swc1        $f21, 0xA4($sp)
    ctx->pc = 0x12eda8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_12edac:
    // 0x12edac: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x12edacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_12edb0:
    // 0x12edb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12edb4:
    // 0x12edb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12edb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12edb8:
    // 0x12edb8: 0xc136b24  jal         func_4DAC90
label_12edbc:
    if (ctx->pc == 0x12EDBCu) {
        ctx->pc = 0x12EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDB8u;
        // 0x12edbc: 0xe658000c  swc1        $f24, 0xC($s2) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EDC0u;
        goto label_12edc0;
    }
    ctx->pc = 0x12EDB8u;
    SET_GPR_U32(ctx, 31, 0x12EDC0u);
    ctx->pc = 0x12EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDB8u;
    // 0x12edbc: 0xe658000c  swc1        $f24, 0xC($s2) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12EDB8u, 0x12EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDC0u;
label_12edc0:
    // 0x12edc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12edc4:
    // 0x12edc4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12edc8:
    // 0x12edc8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x12edc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_12edcc:
    // 0x12edcc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x12edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_12edd0:
    // 0x12edd0: 0x60f809  jalr        $v1
label_12edd4:
    if (ctx->pc == 0x12EDD4u) {
        ctx->pc = 0x12EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDD0u;
        // 0x12edd4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EDD8u;
        goto label_12edd8;
    }
    ctx->pc = 0x12EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12EDD8u);
        ctx->pc = 0x12EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDD0u;
        // 0x12edd4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EDD0u, 0x12EDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12EDD8u;
label_12edd8:
    // 0x12edd8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12eddc:
    // 0x12eddc: 0xc0cd940  jal         func_336500
label_12ede0:
    if (ctx->pc == 0x12EDE0u) {
        ctx->pc = 0x12EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDDCu;
        // 0x12ede0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EDE4u;
        goto label_12ede4;
    }
    ctx->pc = 0x12EDDCu;
    SET_GPR_U32(ctx, 31, 0x12EDE4u);
    ctx->pc = 0x12EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDDCu;
    // 0x12ede0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x12EDDCu, 0x12EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDE4u;
label_12ede4:
    // 0x12ede4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x12ede4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12ede8:
    // 0x12ede8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12ede8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12edec:
    // 0x12edec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12edecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12edf0:
    // 0x12edf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12edf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12edf4:
    // 0x12edf4: 0xc136afa  jal         func_4DABE8
label_12edf8:
    if (ctx->pc == 0x12EDF8u) {
        ctx->pc = 0x12EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDF4u;
        // 0x12edf8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EDFCu;
        goto label_12edfc;
    }
    ctx->pc = 0x12EDF4u;
    SET_GPR_U32(ctx, 31, 0x12EDFCu);
    ctx->pc = 0x12EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDF4u;
    // 0x12edf8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12EDF4u, 0x12EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDFCu;
label_12edfc:
    // 0x12edfc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12edfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12ee00:
    // 0x12ee00: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x12ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12ee04:
    // 0x12ee04: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x12ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_12ee08:
    // 0x12ee08: 0x27a70138  addiu       $a3, $sp, 0x138
    ctx->pc = 0x12ee08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_12ee0c:
    // 0x12ee0c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x12ee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_12ee10:
    // 0x12ee10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12ee14:
    // 0x12ee14: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x12ee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_12ee18:
    // 0x12ee18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ee18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ee1c:
    // 0x12ee1c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x12ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_12ee20:
    // 0x12ee20: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x12ee20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_12ee24:
    // 0x12ee24: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12ee28:
    // 0x12ee28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12ee2c:
    // 0x12ee2c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x12ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_12ee30:
    // 0x12ee30: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x12ee30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12ee34:
    // 0x12ee34: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x12ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_12ee38:
    // 0x12ee38: 0x246616c0  addiu       $a2, $v1, 0x16C0
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_12ee3c:
    // 0x12ee3c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12ee3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12ee40:
    // 0x12ee40: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x12ee40u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_12ee44:
    // 0x12ee44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_12ee48:
    // 0x12ee48: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x12ee48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12ee4c:
    // 0x12ee4c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x12ee4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_12ee50:
    // 0x12ee50: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x12ee50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12ee54:
    // 0x12ee54: 0xc0d2efa  jal         func_34BBE8
label_12ee58:
    if (ctx->pc == 0x12EE58u) {
        ctx->pc = 0x12EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE54u;
        // 0x12ee58: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE5Cu;
        goto label_12ee5c;
    }
    ctx->pc = 0x12EE54u;
    SET_GPR_U32(ctx, 31, 0x12EE5Cu);
    ctx->pc = 0x12EE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE54u;
    // 0x12ee58: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BBE8u, 0x12EE54u, 0x12EE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE5Cu;
label_12ee5c:
    // 0x12ee5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_12ee60:
    if (ctx->pc == 0x12EE60u) {
        ctx->pc = 0x12EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE5Cu;
        // 0x12ee60: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE64u;
        goto label_12ee64;
    }
    ctx->pc = 0x12EE5Cu;
    {
        const bool branch_taken_0x12ee5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE5Cu;
        // 0x12ee60: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee5c) {
            ctx->pc = 0x12EE80u;
            goto label_12ee80;
        }
    }
    ctx->pc = 0x12EE64u;
label_12ee64:
    // 0x12ee64: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x12ee64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ee68:
    // 0x12ee68: 0x0  nop
    ctx->pc = 0x12ee68u;
    // NOP
label_12ee6c:
    // 0x12ee6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12ee70:
    if (ctx->pc == 0x12EE70u) {
        ctx->pc = 0x12EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE6Cu;
        // 0x12ee70: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE74u;
        goto label_12ee74;
    }
    ctx->pc = 0x12EE6Cu;
    {
        const bool branch_taken_0x12ee6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE6Cu;
        // 0x12ee70: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee6c) {
            ctx->pc = 0x12EE80u;
            goto label_12ee80;
        }
    }
    ctx->pc = 0x12EE74u;
label_12ee74:
    // 0x12ee74: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x12ee74u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_12ee78:
    // 0x12ee78: 0xafb3013c  sw          $s3, 0x13C($sp)
    ctx->pc = 0x12ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 19));
label_12ee7c:
    // 0x12ee7c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x12ee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_12ee80:
    // 0x12ee80: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x12ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_12ee84:
    // 0x12ee84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12ee88:
    // 0x12ee88: 0x8c62b238  lw          $v0, -0x4DC8($v1)
    ctx->pc = 0x12ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947384)));
label_12ee8c:
    // 0x12ee8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12ee8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12ee90:
    // 0x12ee90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_12ee94:
    // 0x12ee94: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x12ee94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12ee98:
    // 0x12ee98: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_12ee9c:
    if (ctx->pc == 0x12EE9Cu) {
        ctx->pc = 0x12EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE98u;
        // 0x12ee9c: 0xafa40144  sw          $a0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEA0u;
        goto label_12eea0;
    }
    ctx->pc = 0x12EE98u;
    {
        const bool branch_taken_0x12ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE98u;
        // 0x12ee9c: 0xafa40144  sw          $a0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee98) {
            ctx->pc = 0x12ED38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ed38;
        }
    }
    ctx->pc = 0x12EEA0u;
label_12eea0:
    // 0x12eea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12eea4:
    // 0x12eea4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x12eea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_12eea8:
    // 0x12eea8: 0x0  nop
    ctx->pc = 0x12eea8u;
    // NOP
label_12eeac:
    // 0x12eeac: 0x4618b834  c.lt.s      $f23, $f24
    ctx->pc = 0x12eeacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12eeb0:
    // 0x12eeb0: 0x0  nop
    ctx->pc = 0x12eeb0u;
    // NOP
label_12eeb4:
    // 0x12eeb4: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
label_12eeb8:
    if (ctx->pc == 0x12EEB8u) {
        ctx->pc = 0x12EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB4u;
        // 0x12eeb8: 0xa2200461  sb          $zero, 0x461($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1121), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEBCu;
        goto label_12eebc;
    }
    ctx->pc = 0x12EEB4u;
    {
        const bool branch_taken_0x12eeb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB4u;
        // 0x12eeb8: 0xa2200461  sb          $zero, 0x461($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1121), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eeb4) {
            ctx->pc = 0x12F210u;
            goto label_12f210;
        }
    }
    ctx->pc = 0x12EEBCu;
label_12eebc:
    // 0x12eebc: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x12eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_12eec0:
    // 0x12eec0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x12eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_12eec4:
    // 0x12eec4: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x12eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
label_12eec8:
    // 0x12eec8: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x12eec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12eecc:
    // 0x12eecc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12eed0:
    // 0x12eed0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x12eed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_12eed4:
    // 0x12eed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12eed8:
    // 0x12eed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12eed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12eedc:
    // 0x12eedc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x12eedcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12eee0:
    // 0x12eee0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12eee4:
    // 0x12eee4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x12eee4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_12eee8:
    // 0x12eee8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x12eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_12eeec:
    // 0x12eeec: 0x60f809  jalr        $v1
label_12eef0:
    if (ctx->pc == 0x12EEF0u) {
        ctx->pc = 0x12EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEECu;
        // 0x12eef0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEF4u;
        goto label_12eef4;
    }
    ctx->pc = 0x12EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12EEF4u);
        ctx->pc = 0x12EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEECu;
        // 0x12eef0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EEECu, 0x12EEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12EEF4u;
label_12eef4:
    // 0x12eef4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x12eef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_12eef8:
    // 0x12eef8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12eefc:
    // 0x12eefc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12eefcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12ef00:
    // 0x12ef00: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12ef00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12ef04:
    // 0x12ef04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12ef04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12ef08:
    // 0x12ef08: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12ef08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12ef0c:
    // 0x12ef0c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12ef0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_12ef10:
    // 0x12ef10: 0x4a0003bf  vwaitq
    ctx->pc = 0x12ef10u;
    // VWAITQ (Q already resolved in this runtime)
label_12ef14:
    // 0x12ef14: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12ef14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12ef18:
    // 0x12ef18: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12ef18u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12ef1c:
    // 0x12ef1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12ef1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ef20:
    // 0x12ef20: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x12ef20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_12ef24:
    // 0x12ef24: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x12ef24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12ef28:
    // 0x12ef28: 0x0  nop
    ctx->pc = 0x12ef28u;
    // NOP
label_12ef2c:
    // 0x12ef2c: 0x0  nop
    ctx->pc = 0x12ef2cu;
    // NOP
label_12ef30:
    // 0x12ef30: 0x4615c303  div.s       $f12, $f24, $f21
    ctx->pc = 0x12ef30u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[24], ctx->f[21]); }
label_12ef34:
    // 0x12ef34: 0xc136b24  jal         func_4DAC90
label_12ef38:
    if (ctx->pc == 0x12EF38u) {
        ctx->pc = 0x12EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF34u;
        // 0x12ef38: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF3Cu;
        goto label_12ef3c;
    }
    ctx->pc = 0x12EF34u;
    SET_GPR_U32(ctx, 31, 0x12EF3Cu);
    ctx->pc = 0x12EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF34u;
    // 0x12ef38: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12EF34u, 0x12EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF3Cu;
label_12ef3c:
    // 0x12ef3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ef3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ef40:
    // 0x12ef40: 0xc0cd8ec  jal         func_3363B0
label_12ef44:
    if (ctx->pc == 0x12EF44u) {
        ctx->pc = 0x12EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF40u;
        // 0x12ef44: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF48u;
        goto label_12ef48;
    }
    ctx->pc = 0x12EF40u;
    SET_GPR_U32(ctx, 31, 0x12EF48u);
    ctx->pc = 0x12EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF40u;
    // 0x12ef44: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x12EF40u, 0x12EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF48u;
label_12ef48:
    // 0x12ef48: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x12ef48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_12ef4c:
    // 0x12ef4c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x12ef4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12ef50:
    // 0x12ef50: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12ef50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12ef54:
    // 0x12ef54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12ef54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12ef58:
    // 0x12ef58: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12ef58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12ef5c:
    // 0x12ef5c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12ef5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12ef60:
    // 0x12ef60: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12ef60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12ef64:
    // 0x12ef64: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12ef64u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12ef68:
    // 0x12ef68: 0x3c01c03d  lui         $at, 0xC03D
    ctx->pc = 0x12ef68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49213 << 16));
label_12ef6c:
    // 0x12ef6c: 0x3421e44f  ori         $at, $at, 0xE44F
    ctx->pc = 0x12ef6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58447);
label_12ef70:
    // 0x12ef70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12ef70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12ef74:
    // 0x12ef74: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x12ef74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12ef78:
    // 0x12ef78: 0xc12e29c  jal         func_4B8A70
label_12ef7c:
    if (ctx->pc == 0x12EF7Cu) {
        ctx->pc = 0x12EF80u;
        goto label_12ef80;
    }
    ctx->pc = 0x12EF78u;
    SET_GPR_U32(ctx, 31, 0x12EF80u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12EF78u, 0x12EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF80u;
label_12ef80:
    // 0x12ef80: 0x4616b832  c.eq.s      $f23, $f22
    ctx->pc = 0x12ef80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ef84:
    // 0x12ef84: 0x0  nop
    ctx->pc = 0x12ef84u;
    // NOP
label_12ef88:
    // 0x12ef88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_12ef8c:
    if (ctx->pc == 0x12EF8Cu) {
        ctx->pc = 0x12EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF88u;
        // 0x12ef8c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF90u;
        goto label_12ef90;
    }
    ctx->pc = 0x12EF88u;
    {
        const bool branch_taken_0x12ef88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF88u;
        // 0x12ef8c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef88) {
            ctx->pc = 0x12EFA0u;
            goto label_12efa0;
        }
    }
    ctx->pc = 0x12EF90u;
label_12ef90:
    // 0x12ef90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12ef90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ef94:
    // 0x12ef94: 0x0  nop
    ctx->pc = 0x12ef94u;
    // NOP
label_12ef98:
    // 0x12ef98: 0x4502006a  bc1fl       . + 4 + (0x6A << 2)
label_12ef9c:
    if (ctx->pc == 0x12EF9Cu) {
        ctx->pc = 0x12EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF98u;
        // 0x12ef9c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFA0u;
        goto label_12efa0;
    }
    ctx->pc = 0x12EF98u;
    {
        const bool branch_taken_0x12ef98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ef98) {
            ctx->pc = 0x12EF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF98u;
            // 0x12ef9c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F144u;
            goto label_12f144;
        }
    }
    ctx->pc = 0x12EFA0u;
label_12efa0:
    // 0x12efa0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12efa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12efa4:
    // 0x12efa4: 0xc136afa  jal         func_4DABE8
label_12efa8:
    if (ctx->pc == 0x12EFA8u) {
        ctx->pc = 0x12EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFA4u;
        // 0x12efa8: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFACu;
        goto label_12efac;
    }
    ctx->pc = 0x12EFA4u;
    SET_GPR_U32(ctx, 31, 0x12EFACu);
    ctx->pc = 0x12EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EFA4u;
    // 0x12efa8: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12EFA4u, 0x12EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFACu;
label_12efac:
    // 0x12efac: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x12efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12efb0:
    // 0x12efb0: 0x4600c106  mov.s       $f4, $f24
    ctx->pc = 0x12efb0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[24]);
label_12efb4:
    // 0x12efb4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x12efb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12efb8:
    // 0x12efb8: 0xc6230188  lwc1        $f3, 0x188($s1)
    ctx->pc = 0x12efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12efbc:
    // 0x12efbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12efbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12efc0:
    // 0x12efc0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x12efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12efc4:
    // 0x12efc4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x12efc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12efc8:
    // 0x12efc8: 0x46031581  sub.s       $f22, $f2, $f3
    ctx->pc = 0x12efc8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_12efcc:
    // 0x12efcc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12efccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12efd0:
    // 0x12efd0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x12efd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12efd4:
    // 0x12efd4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12efd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12efd8:
    // 0x12efd8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12efd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12efdc:
    // 0x12efdc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12efdcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_12efe0:
    // 0x12efe0: 0x4a0003bf  vwaitq
    ctx->pc = 0x12efe0u;
    // VWAITQ (Q already resolved in this runtime)
label_12efe4:
    // 0x12efe4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12efe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12efe8:
    // 0x12efe8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12efe8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12efec:
    // 0x12efec: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x12efecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_12eff0:
    // 0x12eff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12eff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12eff4:
    // 0x12eff4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12eff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_12eff8:
    // 0x12eff8: 0x0  nop
    ctx->pc = 0x12eff8u;
    // NOP
label_12effc:
    // 0x12effc: 0x0  nop
    ctx->pc = 0x12effcu;
    // NOP
label_12f000:
    // 0x12f000: 0x46012543  div.s       $f21, $f4, $f1
    ctx->pc = 0x12f000u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
label_12f004:
    // 0x12f004: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x12f004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f008:
    // 0x12f008: 0x0  nop
    ctx->pc = 0x12f008u;
    // NOP
label_12f00c:
    // 0x12f00c: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_12f010:
    if (ctx->pc == 0x12F010u) {
        ctx->pc = 0x12F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F00Cu;
        // 0x12f010: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F014u;
        goto label_12f014;
    }
    ctx->pc = 0x12F00Cu;
    {
        const bool branch_taken_0x12f00c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F00Cu;
        // 0x12f010: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f00c) {
            ctx->pc = 0x12F210u;
            goto label_12f210;
        }
    }
    ctx->pc = 0x12F014u;
label_12f014:
    // 0x12f014: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x12f014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_12f018:
    // 0x12f018: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x12f018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f01c:
    // 0x12f01c: 0x0  nop
    ctx->pc = 0x12f01cu;
    // NOP
label_12f020:
    // 0x12f020: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_12f024:
    if (ctx->pc == 0x12F024u) {
        ctx->pc = 0x12F028u;
        goto label_12f028;
    }
    ctx->pc = 0x12F020u;
    {
        const bool branch_taken_0x12f020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f020) {
            ctx->pc = 0x12F03Cu;
            goto label_12f03c;
        }
    }
    ctx->pc = 0x12F028u;
label_12f028:
    // 0x12f028: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12f02c:
    // 0x12f02c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12f030:
    // 0x12f030: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12f030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f034:
    // 0x12f034: 0x10000018  b           . + 4 + (0x18 << 2)
label_12f038:
    if (ctx->pc == 0x12F038u) {
        ctx->pc = 0x12F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F034u;
        // 0x12f038: 0x4615b082  mul.s       $f2, $f22, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F03Cu;
        goto label_12f03c;
    }
    ctx->pc = 0x12F034u;
    {
        const bool branch_taken_0x12f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F034u;
        // 0x12f038: 0x4615b082  mul.s       $f2, $f22, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f034) {
            ctx->pc = 0x12F098u;
            goto label_12f098;
        }
    }
    ctx->pc = 0x12F03Cu;
label_12f03c:
    // 0x12f03c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12f03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12f040:
    // 0x12f040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f044:
    // 0x12f044: 0x0  nop
    ctx->pc = 0x12f044u;
    // NOP
label_12f048:
    // 0x12f048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12f048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f04c:
    // 0x12f04c: 0x0  nop
    ctx->pc = 0x12f04cu;
    // NOP
label_12f050:
    // 0x12f050: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12f054:
    if (ctx->pc == 0x12F054u) {
        ctx->pc = 0x12F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F050u;
        // 0x12f054: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F058u;
        goto label_12f058;
    }
    ctx->pc = 0x12F050u;
    {
        const bool branch_taken_0x12f050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f050) {
            ctx->pc = 0x12F054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F050u;
            // 0x12f054: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F06Cu;
            goto label_12f06c;
        }
    }
    ctx->pc = 0x12F058u;
label_12f058:
    // 0x12f058: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_12f05c:
    // 0x12f05c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f05cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12f060:
    // 0x12f060: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12f060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f064:
    // 0x12f064: 0x1000000c  b           . + 4 + (0xC << 2)
label_12f068:
    if (ctx->pc == 0x12F068u) {
        ctx->pc = 0x12F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F064u;
        // 0x12f068: 0x4615b082  mul.s       $f2, $f22, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F06Cu;
        goto label_12f06c;
    }
    ctx->pc = 0x12F064u;
    {
        const bool branch_taken_0x12f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F064u;
        // 0x12f068: 0x4615b082  mul.s       $f2, $f22, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f064) {
            ctx->pc = 0x12F098u;
            goto label_12f098;
        }
    }
    ctx->pc = 0x12F06Cu;
label_12f06c:
    // 0x12f06c: 0x460cc301  sub.s       $f12, $f24, $f12
    ctx->pc = 0x12f06cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[12]);
label_12f070:
    // 0x12f070: 0x0  nop
    ctx->pc = 0x12f070u;
    // NOP
label_12f074:
    // 0x12f074: 0x0  nop
    ctx->pc = 0x12f074u;
    // NOP
label_12f078:
    // 0x12f078: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12f078u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12f07c:
    // 0x12f07c: 0x0  nop
    ctx->pc = 0x12f07cu;
    // NOP
label_12f080:
    // 0x12f080: 0x0  nop
    ctx->pc = 0x12f080u;
    // NOP
label_12f084:
    // 0x12f084: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x12f084u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_12f088:
    // 0x12f088: 0xc0cd5a8  jal         func_3356A0
label_12f08c:
    if (ctx->pc == 0x12F08Cu) {
        ctx->pc = 0x12F090u;
        goto label_12f090;
    }
    ctx->pc = 0x12F088u;
    SET_GPR_U32(ctx, 31, 0x12F090u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12F088u, 0x12F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F090u;
label_12f090:
    // 0x12f090: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12f090u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_12f094:
    // 0x12f094: 0x4615b082  mul.s       $f2, $f22, $f21
    ctx->pc = 0x12f094u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
label_12f098:
    // 0x12f098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f09c:
    // 0x12f09c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12f0a0:
    // 0x12f0a0: 0x0  nop
    ctx->pc = 0x12f0a0u;
    // NOP
label_12f0a4:
    // 0x12f0a4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12f0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f0a8:
    // 0x12f0a8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12f0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12f0ac:
    // 0x12f0ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12f0b0:
    // 0x12f0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f0b4:
    // 0x12f0b4: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
label_12f0b8:
    if (ctx->pc == 0x12F0B8u) {
        ctx->pc = 0x12F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0B4u;
        // 0x12f0b8: 0x461400c1  sub.s       $f3, $f0, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F0BCu;
        goto label_12f0bc;
    }
    ctx->pc = 0x12F0B4u;
    {
        const bool branch_taken_0x12f0b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f0b4) {
            ctx->pc = 0x12F0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0B4u;
            // 0x12f0b8: 0x461400c1  sub.s       $f3, $f0, $f20 (Delay Slot)
            ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F114u;
            goto label_12f114;
        }
    }
    ctx->pc = 0x12F0BCu;
label_12f0bc:
    // 0x12f0bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12f0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12f0c0:
    // 0x12f0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f0c4:
    // 0x12f0c4: 0x0  nop
    ctx->pc = 0x12f0c4u;
    // NOP
label_12f0c8:
    // 0x12f0c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12f0c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f0cc:
    // 0x12f0cc: 0x0  nop
    ctx->pc = 0x12f0ccu;
    // NOP
label_12f0d0:
    // 0x12f0d0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12f0d4:
    if (ctx->pc == 0x12F0D4u) {
        ctx->pc = 0x12F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0D0u;
        // 0x12f0d4: 0x46021302  mul.s       $f12, $f2, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F0D8u;
        goto label_12f0d8;
    }
    ctx->pc = 0x12F0D0u;
    {
        const bool branch_taken_0x12f0d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f0d0) {
            ctx->pc = 0x12F0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0D0u;
            // 0x12f0d4: 0x46021302  mul.s       $f12, $f2, $f2 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F0ECu;
            goto label_12f0ec;
        }
    }
    ctx->pc = 0x12F0D8u;
label_12f0d8:
    // 0x12f0d8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x12f0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_12f0dc:
    // 0x12f0dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f0dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12f0e0:
    // 0x12f0e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f0e4:
    // 0x12f0e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_12f0e8:
    if (ctx->pc == 0x12F0E8u) {
        ctx->pc = 0x12F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0E4u;
        // 0x12f0e8: 0x461400c1  sub.s       $f3, $f0, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F0ECu;
        goto label_12f0ec;
    }
    ctx->pc = 0x12F0E4u;
    {
        const bool branch_taken_0x12f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0E4u;
        // 0x12f0e8: 0x461400c1  sub.s       $f3, $f0, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0e4) {
            ctx->pc = 0x12F114u;
            goto label_12f114;
        }
    }
    ctx->pc = 0x12F0ECu;
label_12f0ec:
    // 0x12f0ec: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12f0ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12f0f0:
    // 0x12f0f0: 0x0  nop
    ctx->pc = 0x12f0f0u;
    // NOP
label_12f0f4:
    // 0x12f0f4: 0x0  nop
    ctx->pc = 0x12f0f4u;
    // NOP
label_12f0f8:
    // 0x12f0f8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12f0f8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12f0fc:
    // 0x12f0fc: 0x0  nop
    ctx->pc = 0x12f0fcu;
    // NOP
label_12f100:
    // 0x12f100: 0x0  nop
    ctx->pc = 0x12f100u;
    // NOP
label_12f104:
    // 0x12f104: 0x460c1303  div.s       $f12, $f2, $f12
    ctx->pc = 0x12f104u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
label_12f108:
    // 0x12f108: 0xc0cd5a8  jal         func_3356A0
label_12f10c:
    if (ctx->pc == 0x12F10Cu) {
        ctx->pc = 0x12F110u;
        goto label_12f110;
    }
    ctx->pc = 0x12F108u;
    SET_GPR_U32(ctx, 31, 0x12F110u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12F108u, 0x12F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F110u;
label_12f110:
    // 0x12f110: 0x461400c1  sub.s       $f3, $f0, $f20
    ctx->pc = 0x12f110u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_12f114:
    // 0x12f114: 0xc62103a8  lwc1        $f1, 0x3A8($s1)
    ctx->pc = 0x12f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f118:
    // 0x12f118: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x12f118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_12f11c:
    // 0x12f11c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12f11cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_12f120:
    // 0x12f120: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12f120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12f124:
    // 0x12f124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12f128:
    // 0x12f128: 0xa2220461  sb          $v0, 0x461($s1)
    ctx->pc = 0x12f128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1121), (uint8_t)GPR_U32(ctx, 2));
label_12f12c:
    // 0x12f12c: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x12f12cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_12f130:
    // 0x12f130: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12f130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_12f134:
    // 0x12f134: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12f134u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12f138:
    // 0x12f138: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x12f138u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
label_12f13c:
    // 0x12f13c: 0x10000034  b           . + 4 + (0x34 << 2)
label_12f140:
    if (ctx->pc == 0x12F140u) {
        ctx->pc = 0x12F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F13Cu;
        // 0x12f140: 0xe62103a8  swc1        $f1, 0x3A8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F144u;
        goto label_12f144;
    }
    ctx->pc = 0x12F13Cu;
    {
        const bool branch_taken_0x12f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F13Cu;
        // 0x12f140: 0xe62103a8  swc1        $f1, 0x3A8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f13c) {
            ctx->pc = 0x12F210u;
            goto label_12f210;
        }
    }
    ctx->pc = 0x12F144u;
label_12f144:
    // 0x12f144: 0x263001e0  addiu       $s0, $s1, 0x1E0
    ctx->pc = 0x12f144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_12f148:
    // 0x12f148: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x12f148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_12f14c:
    // 0x12f14c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x12f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_12f150:
    // 0x12f150: 0x60f809  jalr        $v1
label_12f154:
    if (ctx->pc == 0x12F154u) {
        ctx->pc = 0x12F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F150u;
        // 0x12f154: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F158u;
        goto label_12f158;
    }
    ctx->pc = 0x12F150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12F158u);
        ctx->pc = 0x12F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F150u;
        // 0x12f154: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F150u, 0x12F158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F158u;
label_12f158:
    // 0x12f158: 0x4617ab02  mul.s       $f12, $f21, $f23
    ctx->pc = 0x12f158u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
label_12f15c:
    // 0x12f15c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12f160:
    // 0x12f160: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x12f160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12f164:
    // 0x12f164: 0xc136b24  jal         func_4DAC90
label_12f168:
    if (ctx->pc == 0x12F168u) {
        ctx->pc = 0x12F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F164u;
        // 0x12f168: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F16Cu;
        goto label_12f16c;
    }
    ctx->pc = 0x12F164u;
    SET_GPR_U32(ctx, 31, 0x12F16Cu);
    ctx->pc = 0x12F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F164u;
    // 0x12f168: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12F164u, 0x12F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F16Cu;
label_12f16c:
    // 0x12f16c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12f16cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12f170:
    // 0x12f170: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12f170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12f174:
    // 0x12f174: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x12f174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12f178:
    // 0x12f178: 0x26250180  addiu       $a1, $s1, 0x180
    ctx->pc = 0x12f178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_12f17c:
    // 0x12f17c: 0xc136b18  jal         func_4DAC60
label_12f180:
    if (ctx->pc == 0x12F180u) {
        ctx->pc = 0x12F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F17Cu;
        // 0x12f180: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F184u;
        goto label_12f184;
    }
    ctx->pc = 0x12F17Cu;
    SET_GPR_U32(ctx, 31, 0x12F184u);
    ctx->pc = 0x12F180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F17Cu;
    // 0x12f180: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12F17Cu, 0x12F184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F184u;
label_12f184:
    // 0x12f184: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12f184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12f188:
    // 0x12f188: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12f18c:
    // 0x12f18c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12f18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12f190:
    // 0x12f190: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12f190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f194:
    // 0x12f194: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x12f194u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_12f198:
    // 0x12f198: 0xc136afa  jal         func_4DABE8
label_12f19c:
    if (ctx->pc == 0x12F19Cu) {
        ctx->pc = 0x12F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F198u;
        // 0x12f19c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F1A0u;
        goto label_12f1a0;
    }
    ctx->pc = 0x12F198u;
    SET_GPR_U32(ctx, 31, 0x12F1A0u);
    ctx->pc = 0x12F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F198u;
    // 0x12f19c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12F198u, 0x12F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1A0u;
label_12f1a0:
    // 0x12f1a0: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x12f1a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12f1a4:
    // 0x12f1a4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x12f1a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_12f1a8:
    // 0x12f1a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12f1a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12f1ac:
    // 0x12f1ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12f1acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12f1b0:
    // 0x12f1b0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12f1b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12f1b4:
    // 0x12f1b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f1b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12f1b8:
    // 0x12f1b8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12f1b8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12f1bc:
    // 0x12f1bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x12f1bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f1c0:
    // 0x12f1c0: 0x0  nop
    ctx->pc = 0x12f1c0u;
    // NOP
label_12f1c4:
    // 0x12f1c4: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x12f1c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f1c8:
    // 0x12f1c8: 0x0  nop
    ctx->pc = 0x12f1c8u;
    // NOP
label_12f1cc:
    // 0x12f1cc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12f1d0:
    if (ctx->pc == 0x12F1D0u) {
        ctx->pc = 0x12F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1CCu;
        // 0x12f1d0: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F1D4u;
        goto label_12f1d4;
    }
    ctx->pc = 0x12F1CCu;
    {
        const bool branch_taken_0x12f1cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1CCu;
        // 0x12f1d0: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1cc) {
            ctx->pc = 0x12F210u;
            goto label_12f210;
        }
    }
    ctx->pc = 0x12F1D4u;
label_12f1d4:
    // 0x12f1d4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12f1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_12f1d8:
    // 0x12f1d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12f1d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12f1dc:
    // 0x12f1dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12f1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12f1e0:
    // 0x12f1e0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12f1e4:
    // 0x12f1e4: 0xc136b24  jal         func_4DAC90
label_12f1e8:
    if (ctx->pc == 0x12F1E8u) {
        ctx->pc = 0x12F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1E4u;
        // 0x12f1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F1ECu;
        goto label_12f1ec;
    }
    ctx->pc = 0x12F1E4u;
    SET_GPR_U32(ctx, 31, 0x12F1ECu);
    ctx->pc = 0x12F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1E4u;
    // 0x12f1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12F1E4u, 0x12F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1ECu;
label_12f1ec:
    // 0x12f1ec: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12f1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12f1f0:
    // 0x12f1f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f1f4:
    // 0x12f1f4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12f1f8:
    // 0x12f1f8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x12f1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12f1fc:
    // 0x12f1fc: 0xc136b18  jal         func_4DAC60
label_12f200:
    if (ctx->pc == 0x12F200u) {
        ctx->pc = 0x12F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1FCu;
        // 0x12f200: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F204u;
        goto label_12f204;
    }
    ctx->pc = 0x12F1FCu;
    SET_GPR_U32(ctx, 31, 0x12F204u);
    ctx->pc = 0x12F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1FCu;
    // 0x12f200: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12F1FCu, 0x12F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F204u;
label_12f204:
    // 0x12f204: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12f204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12f208:
    // 0x12f208: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x12f208u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_12f20c:
    // 0x12f20c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x12f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_12f210:
    // 0x12f210: 0xc62003a8  lwc1        $f0, 0x3A8($s1)
    ctx->pc = 0x12f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f214:
    // 0x12f214: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12f218:
    // 0x12f218: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12f218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12f21c:
    // 0x12f21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12f220:
    // 0x12f220: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12f220u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12f224:
    // 0x12f224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f228:
    // 0x12f228: 0x0  nop
    ctx->pc = 0x12f228u;
    // NOP
label_12f22c:
    // 0x12f22c: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_12f230:
    if (ctx->pc == 0x12F230u) {
        ctx->pc = 0x12F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F22Cu;
        // 0x12f230: 0x27b200e0  addiu       $s2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F234u;
        goto label_12f234;
    }
    ctx->pc = 0x12F22Cu;
    {
        const bool branch_taken_0x12f22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F22Cu;
        // 0x12f230: 0x27b200e0  addiu       $s2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f22c) {
            ctx->pc = 0x12F394u;
            goto label_12f394;
        }
    }
    ctx->pc = 0x12F234u;
label_12f234:
    // 0x12f234: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12f238:
    // 0x12f238: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x12f238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_12f23c:
    // 0x12f23c: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x12f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_12f240:
    // 0x12f240: 0x40f809  jalr        $v0
label_12f244:
    if (ctx->pc == 0x12F244u) {
        ctx->pc = 0x12F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F240u;
        // 0x12f244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F248u;
        goto label_12f248;
    }
    ctx->pc = 0x12F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12F248u);
        ctx->pc = 0x12F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F240u;
        // 0x12f244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F240u, 0x12F248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F248u;
label_12f248:
    // 0x12f248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f24c:
    // 0x12f24c: 0xc0cd8ec  jal         func_3363B0
label_12f250:
    if (ctx->pc == 0x12F250u) {
        ctx->pc = 0x12F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F24Cu;
        // 0x12f250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F254u;
        goto label_12f254;
    }
    ctx->pc = 0x12F24Cu;
    SET_GPR_U32(ctx, 31, 0x12F254u);
    ctx->pc = 0x12F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F24Cu;
    // 0x12f250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x12F24Cu, 0x12F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F254u;
label_12f254:
    // 0x12f254: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x12f254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_12f258:
    // 0x12f258: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x12f258u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12f25c:
    // 0x12f25c: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x12f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_12f260:
    // 0x12f260: 0x92250461  lbu         $a1, 0x461($s1)
    ctx->pc = 0x12f260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1121)));
label_12f264:
    // 0x12f264: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x12f264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_12f268:
    // 0x12f268: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12f268u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12f26c:
    // 0x12f26c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12f26cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12f270:
    // 0x12f270: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x12f270u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_12f274:
    // 0x12f274: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x12f274u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12f278:
    // 0x12f278: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x12f278u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_12f27c:
    // 0x12f27c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12f27cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12f280:
    // 0x12f280: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12f280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12f284:
    // 0x12f284: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12f284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12f288:
    // 0x12f288: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12f288u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12f28c:
    // 0x12f28c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12f28cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12f290:
    // 0x12f290: 0x4a0003bf  vwaitq
    ctx->pc = 0x12f290u;
    // VWAITQ (Q already resolved in this runtime)
label_12f294:
    // 0x12f294: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12f294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12f298:
    // 0x12f298: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x12f298u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_12f29c:
    // 0x12f29c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x12f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_12f2a0:
    // 0x12f2a0: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x12f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
label_12f2a4:
    // 0x12f2a4: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x12f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_12f2a8:
    // 0x12f2a8: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_12f2ac:
    if (ctx->pc == 0x12F2ACu) {
        ctx->pc = 0x12F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2A8u;
        // 0x12f2ac: 0x7fa400e0  sq          $a0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2B0u;
        goto label_12f2b0;
    }
    ctx->pc = 0x12F2A8u;
    {
        const bool branch_taken_0x12f2a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2A8u;
        // 0x12f2ac: 0x7fa400e0  sq          $a0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2a8) {
            ctx->pc = 0x12F2D0u;
            goto label_12f2d0;
        }
    }
    ctx->pc = 0x12F2B0u;
label_12f2b0:
    // 0x12f2b0: 0xc62103a8  lwc1        $f1, 0x3A8($s1)
    ctx->pc = 0x12f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f2b4:
    // 0x12f2b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12f2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12f2b8:
    // 0x12f2b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12f2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12f2bc:
    // 0x12f2bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f2c0:
    // 0x12f2c0: 0x0  nop
    ctx->pc = 0x12f2c0u;
    // NOP
label_12f2c4:
    // 0x12f2c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12f2c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12f2c8:
    // 0x12f2c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12f2c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12f2cc:
    // 0x12f2cc: 0xe62103a8  swc1        $f1, 0x3A8($s1)
    ctx->pc = 0x12f2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
label_12f2d0:
    // 0x12f2d0: 0xc63403a8  lwc1        $f20, 0x3A8($s1)
    ctx->pc = 0x12f2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12f2d4:
    // 0x12f2d4: 0x26300180  addiu       $s0, $s1, 0x180
    ctx->pc = 0x12f2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_12f2d8:
    // 0x12f2d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12f2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12f2dc:
    // 0x12f2dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f2e0:
    // 0x12f2e0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x12f2e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12f2e4:
    // 0x12f2e4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x12f2e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12f2e8:
    // 0x12f2e8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x12f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_12f2ec:
    // 0x12f2ec: 0xc12e310  jal         func_4B8C40
label_12f2f0:
    if (ctx->pc == 0x12F2F0u) {
        ctx->pc = 0x12F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2ECu;
        // 0x12f2f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2F4u;
        goto label_12f2f4;
    }
    ctx->pc = 0x12F2ECu;
    SET_GPR_U32(ctx, 31, 0x12F2F4u);
    ctx->pc = 0x12F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2ECu;
    // 0x12f2f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x12F2ECu, 0x12F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2F4u;
label_12f2f4:
    // 0x12f2f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12f2f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12f2f8:
    // 0x12f2f8: 0xc12e29c  jal         func_4B8A70
label_12f2fc:
    if (ctx->pc == 0x12F2FCu) {
        ctx->pc = 0x12F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2F8u;
        // 0x12f2fc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F300u;
        goto label_12f300;
    }
    ctx->pc = 0x12F2F8u;
    SET_GPR_U32(ctx, 31, 0x12F300u);
    ctx->pc = 0x12F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2F8u;
    // 0x12f2fc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12F2F8u, 0x12F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F300u;
label_12f300:
    // 0x12f300: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x12f300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12f304:
    // 0x12f304: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12f308:
    // 0x12f308: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x12f308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_12f30c:
    // 0x12f30c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12f30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12f310:
    // 0x12f310: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12f314:
    // 0x12f314: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12f314u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12f318:
    // 0x12f318: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12f318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12f31c:
    // 0x12f31c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12f31cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12f320:
    // 0x12f320: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x12f320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_12f324:
    // 0x12f324: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x12f324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_12f328:
    // 0x12f328: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12f328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f32c:
    // 0x12f32c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x12f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_12f330:
    // 0x12f330: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x12f330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f334:
    // 0x12f334: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x12f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f338:
    // 0x12f338: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x12f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f33c:
    // 0x12f33c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x12f33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_12f340:
    // 0x12f340: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x12f340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_12f344:
    // 0x12f344: 0xc136afa  jal         func_4DABE8
label_12f348:
    if (ctx->pc == 0x12F348u) {
        ctx->pc = 0x12F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F344u;
        // 0x12f348: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F34Cu;
        goto label_12f34c;
    }
    ctx->pc = 0x12F344u;
    SET_GPR_U32(ctx, 31, 0x12F34Cu);
    ctx->pc = 0x12F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F344u;
    // 0x12f348: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12F344u, 0x12F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F34Cu;
label_12f34c:
    // 0x12f34c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12f34cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12f350:
    // 0x12f350: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12f350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12f354:
    // 0x12f354: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f358:
    // 0x12f358: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12f358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12f35c:
    // 0x12f35c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x12f35cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_12f360:
    // 0x12f360: 0xc136b30  jal         func_4DACC0
label_12f364:
    if (ctx->pc == 0x12F364u) {
        ctx->pc = 0x12F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F360u;
        // 0x12f364: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F368u;
        goto label_12f368;
    }
    ctx->pc = 0x12F360u;
    SET_GPR_U32(ctx, 31, 0x12F368u);
    ctx->pc = 0x12F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F360u;
    // 0x12f364: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x12F360u, 0x12F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F368u;
label_12f368:
    // 0x12f368: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12f368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12f36c:
    // 0x12f36c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12f36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f370:
    // 0x12f370: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12f374:
    // 0x12f374: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12f374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12f378:
    // 0x12f378: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x12f378u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_12f37c:
    // 0x12f37c: 0xc136b18  jal         func_4DAC60
label_12f380:
    if (ctx->pc == 0x12F380u) {
        ctx->pc = 0x12F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F37Cu;
        // 0x12f380: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F384u;
        goto label_12f384;
    }
    ctx->pc = 0x12F37Cu;
    SET_GPR_U32(ctx, 31, 0x12F384u);
    ctx->pc = 0x12F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F37Cu;
    // 0x12f380: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12F37Cu, 0x12F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F384u;
label_12f384:
    // 0x12f384: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12f384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12f388:
    // 0x12f388: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x12f388u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_12f38c:
    // 0x12f38c: 0x10000002  b           . + 4 + (0x2 << 2)
label_12f390:
    if (ctx->pc == 0x12F390u) {
        ctx->pc = 0x12F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F38Cu;
        // 0x12f390: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F394u;
        goto label_12f394;
    }
    ctx->pc = 0x12F38Cu;
    {
        const bool branch_taken_0x12f38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F38Cu;
        // 0x12f390: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f38c) {
            ctx->pc = 0x12F398u;
            goto label_12f398;
        }
    }
    ctx->pc = 0x12F394u;
label_12f394:
    // 0x12f394: 0xae2003a8  sw          $zero, 0x3A8($s1)
    ctx->pc = 0x12f394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 0));
label_12f398:
    // 0x12f398: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x12f398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_12f39c:
    // 0x12f39c: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x12f39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_12f3a0:
    // 0x12f3a0: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x12f3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_12f3a4:
    // 0x12f3a4: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x12f3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_12f3a8:
    // 0x12f3a8: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x12f3a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_12f3ac:
    // 0x12f3ac: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x12f3acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_12f3b0:
    // 0x12f3b0: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x12f3b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_12f3b4:
    // 0x12f3b4: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x12f3b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_12f3b8:
    // 0x12f3b8: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x12f3b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_12f3bc:
    // 0x12f3bc: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x12f3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_12f3c0:
    // 0x12f3c0: 0xc7b90218  lwc1        $f25, 0x218($sp)
    ctx->pc = 0x12f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_12f3c4:
    // 0x12f3c4: 0xc7b80210  lwc1        $f24, 0x210($sp)
    ctx->pc = 0x12f3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_12f3c8:
    // 0x12f3c8: 0xc7b70208  lwc1        $f23, 0x208($sp)
    ctx->pc = 0x12f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_12f3cc:
    // 0x12f3cc: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x12f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12f3d0:
    // 0x12f3d0: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x12f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12f3d4:
    // 0x12f3d4: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x12f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12f3d8:
    // 0x12f3d8: 0x3e00008  jr          $ra
label_12f3dc:
    if (ctx->pc == 0x12F3DCu) {
        ctx->pc = 0x12F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3D8u;
        // 0x12f3dc: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F3E0u;
        goto label_fallthrough_0x12f3d8;
    }
    ctx->pc = 0x12F3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3D8u;
        // 0x12f3dc: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12f3d8:
    ctx->pc = 0x12F3E0u;
}
