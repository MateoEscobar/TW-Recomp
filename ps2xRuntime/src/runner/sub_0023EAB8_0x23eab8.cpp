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

// Function: sub_0023EAB8
// Address: 0x23eab8 - 0x23f150
void sub_0023EAB8_0x23eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EAB8_0x23eab8");
#endif

    switch (ctx->pc) {
        case 0x23eab8u: goto label_23eab8;
        case 0x23eabcu: goto label_23eabc;
        case 0x23eac0u: goto label_23eac0;
        case 0x23eac4u: goto label_23eac4;
        case 0x23eac8u: goto label_23eac8;
        case 0x23eaccu: goto label_23eacc;
        case 0x23ead0u: goto label_23ead0;
        case 0x23ead4u: goto label_23ead4;
        case 0x23ead8u: goto label_23ead8;
        case 0x23eadcu: goto label_23eadc;
        case 0x23eae0u: goto label_23eae0;
        case 0x23eae4u: goto label_23eae4;
        case 0x23eae8u: goto label_23eae8;
        case 0x23eaecu: goto label_23eaec;
        case 0x23eaf0u: goto label_23eaf0;
        case 0x23eaf4u: goto label_23eaf4;
        case 0x23eaf8u: goto label_23eaf8;
        case 0x23eafcu: goto label_23eafc;
        case 0x23eb00u: goto label_23eb00;
        case 0x23eb04u: goto label_23eb04;
        case 0x23eb08u: goto label_23eb08;
        case 0x23eb0cu: goto label_23eb0c;
        case 0x23eb10u: goto label_23eb10;
        case 0x23eb14u: goto label_23eb14;
        case 0x23eb18u: goto label_23eb18;
        case 0x23eb1cu: goto label_23eb1c;
        case 0x23eb20u: goto label_23eb20;
        case 0x23eb24u: goto label_23eb24;
        case 0x23eb28u: goto label_23eb28;
        case 0x23eb2cu: goto label_23eb2c;
        case 0x23eb30u: goto label_23eb30;
        case 0x23eb34u: goto label_23eb34;
        case 0x23eb38u: goto label_23eb38;
        case 0x23eb3cu: goto label_23eb3c;
        case 0x23eb40u: goto label_23eb40;
        case 0x23eb44u: goto label_23eb44;
        case 0x23eb48u: goto label_23eb48;
        case 0x23eb4cu: goto label_23eb4c;
        case 0x23eb50u: goto label_23eb50;
        case 0x23eb54u: goto label_23eb54;
        case 0x23eb58u: goto label_23eb58;
        case 0x23eb5cu: goto label_23eb5c;
        case 0x23eb60u: goto label_23eb60;
        case 0x23eb64u: goto label_23eb64;
        case 0x23eb68u: goto label_23eb68;
        case 0x23eb6cu: goto label_23eb6c;
        case 0x23eb70u: goto label_23eb70;
        case 0x23eb74u: goto label_23eb74;
        case 0x23eb78u: goto label_23eb78;
        case 0x23eb7cu: goto label_23eb7c;
        case 0x23eb80u: goto label_23eb80;
        case 0x23eb84u: goto label_23eb84;
        case 0x23eb88u: goto label_23eb88;
        case 0x23eb8cu: goto label_23eb8c;
        case 0x23eb90u: goto label_23eb90;
        case 0x23eb94u: goto label_23eb94;
        case 0x23eb98u: goto label_23eb98;
        case 0x23eb9cu: goto label_23eb9c;
        case 0x23eba0u: goto label_23eba0;
        case 0x23eba4u: goto label_23eba4;
        case 0x23eba8u: goto label_23eba8;
        case 0x23ebacu: goto label_23ebac;
        case 0x23ebb0u: goto label_23ebb0;
        case 0x23ebb4u: goto label_23ebb4;
        case 0x23ebb8u: goto label_23ebb8;
        case 0x23ebbcu: goto label_23ebbc;
        case 0x23ebc0u: goto label_23ebc0;
        case 0x23ebc4u: goto label_23ebc4;
        case 0x23ebc8u: goto label_23ebc8;
        case 0x23ebccu: goto label_23ebcc;
        case 0x23ebd0u: goto label_23ebd0;
        case 0x23ebd4u: goto label_23ebd4;
        case 0x23ebd8u: goto label_23ebd8;
        case 0x23ebdcu: goto label_23ebdc;
        case 0x23ebe0u: goto label_23ebe0;
        case 0x23ebe4u: goto label_23ebe4;
        case 0x23ebe8u: goto label_23ebe8;
        case 0x23ebecu: goto label_23ebec;
        case 0x23ebf0u: goto label_23ebf0;
        case 0x23ebf4u: goto label_23ebf4;
        case 0x23ebf8u: goto label_23ebf8;
        case 0x23ebfcu: goto label_23ebfc;
        case 0x23ec00u: goto label_23ec00;
        case 0x23ec04u: goto label_23ec04;
        case 0x23ec08u: goto label_23ec08;
        case 0x23ec0cu: goto label_23ec0c;
        case 0x23ec10u: goto label_23ec10;
        case 0x23ec14u: goto label_23ec14;
        case 0x23ec18u: goto label_23ec18;
        case 0x23ec1cu: goto label_23ec1c;
        case 0x23ec20u: goto label_23ec20;
        case 0x23ec24u: goto label_23ec24;
        case 0x23ec28u: goto label_23ec28;
        case 0x23ec2cu: goto label_23ec2c;
        case 0x23ec30u: goto label_23ec30;
        case 0x23ec34u: goto label_23ec34;
        case 0x23ec38u: goto label_23ec38;
        case 0x23ec3cu: goto label_23ec3c;
        case 0x23ec40u: goto label_23ec40;
        case 0x23ec44u: goto label_23ec44;
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec4cu: goto label_23ec4c;
        case 0x23ec50u: goto label_23ec50;
        case 0x23ec54u: goto label_23ec54;
        case 0x23ec58u: goto label_23ec58;
        case 0x23ec5cu: goto label_23ec5c;
        case 0x23ec60u: goto label_23ec60;
        case 0x23ec64u: goto label_23ec64;
        case 0x23ec68u: goto label_23ec68;
        case 0x23ec6cu: goto label_23ec6c;
        case 0x23ec70u: goto label_23ec70;
        case 0x23ec74u: goto label_23ec74;
        case 0x23ec78u: goto label_23ec78;
        case 0x23ec7cu: goto label_23ec7c;
        case 0x23ec80u: goto label_23ec80;
        case 0x23ec84u: goto label_23ec84;
        case 0x23ec88u: goto label_23ec88;
        case 0x23ec8cu: goto label_23ec8c;
        case 0x23ec90u: goto label_23ec90;
        case 0x23ec94u: goto label_23ec94;
        case 0x23ec98u: goto label_23ec98;
        case 0x23ec9cu: goto label_23ec9c;
        case 0x23eca0u: goto label_23eca0;
        case 0x23eca4u: goto label_23eca4;
        case 0x23eca8u: goto label_23eca8;
        case 0x23ecacu: goto label_23ecac;
        case 0x23ecb0u: goto label_23ecb0;
        case 0x23ecb4u: goto label_23ecb4;
        case 0x23ecb8u: goto label_23ecb8;
        case 0x23ecbcu: goto label_23ecbc;
        case 0x23ecc0u: goto label_23ecc0;
        case 0x23ecc4u: goto label_23ecc4;
        case 0x23ecc8u: goto label_23ecc8;
        case 0x23ecccu: goto label_23eccc;
        case 0x23ecd0u: goto label_23ecd0;
        case 0x23ecd4u: goto label_23ecd4;
        case 0x23ecd8u: goto label_23ecd8;
        case 0x23ecdcu: goto label_23ecdc;
        case 0x23ece0u: goto label_23ece0;
        case 0x23ece4u: goto label_23ece4;
        case 0x23ece8u: goto label_23ece8;
        case 0x23ececu: goto label_23ecec;
        case 0x23ecf0u: goto label_23ecf0;
        case 0x23ecf4u: goto label_23ecf4;
        case 0x23ecf8u: goto label_23ecf8;
        case 0x23ecfcu: goto label_23ecfc;
        case 0x23ed00u: goto label_23ed00;
        case 0x23ed04u: goto label_23ed04;
        case 0x23ed08u: goto label_23ed08;
        case 0x23ed0cu: goto label_23ed0c;
        case 0x23ed10u: goto label_23ed10;
        case 0x23ed14u: goto label_23ed14;
        case 0x23ed18u: goto label_23ed18;
        case 0x23ed1cu: goto label_23ed1c;
        case 0x23ed20u: goto label_23ed20;
        case 0x23ed24u: goto label_23ed24;
        case 0x23ed28u: goto label_23ed28;
        case 0x23ed2cu: goto label_23ed2c;
        case 0x23ed30u: goto label_23ed30;
        case 0x23ed34u: goto label_23ed34;
        case 0x23ed38u: goto label_23ed38;
        case 0x23ed3cu: goto label_23ed3c;
        case 0x23ed40u: goto label_23ed40;
        case 0x23ed44u: goto label_23ed44;
        case 0x23ed48u: goto label_23ed48;
        case 0x23ed4cu: goto label_23ed4c;
        case 0x23ed50u: goto label_23ed50;
        case 0x23ed54u: goto label_23ed54;
        case 0x23ed58u: goto label_23ed58;
        case 0x23ed5cu: goto label_23ed5c;
        case 0x23ed60u: goto label_23ed60;
        case 0x23ed64u: goto label_23ed64;
        case 0x23ed68u: goto label_23ed68;
        case 0x23ed6cu: goto label_23ed6c;
        case 0x23ed70u: goto label_23ed70;
        case 0x23ed74u: goto label_23ed74;
        case 0x23ed78u: goto label_23ed78;
        case 0x23ed7cu: goto label_23ed7c;
        case 0x23ed80u: goto label_23ed80;
        case 0x23ed84u: goto label_23ed84;
        case 0x23ed88u: goto label_23ed88;
        case 0x23ed8cu: goto label_23ed8c;
        case 0x23ed90u: goto label_23ed90;
        case 0x23ed94u: goto label_23ed94;
        case 0x23ed98u: goto label_23ed98;
        case 0x23ed9cu: goto label_23ed9c;
        case 0x23eda0u: goto label_23eda0;
        case 0x23eda4u: goto label_23eda4;
        case 0x23eda8u: goto label_23eda8;
        case 0x23edacu: goto label_23edac;
        case 0x23edb0u: goto label_23edb0;
        case 0x23edb4u: goto label_23edb4;
        case 0x23edb8u: goto label_23edb8;
        case 0x23edbcu: goto label_23edbc;
        case 0x23edc0u: goto label_23edc0;
        case 0x23edc4u: goto label_23edc4;
        case 0x23edc8u: goto label_23edc8;
        case 0x23edccu: goto label_23edcc;
        case 0x23edd0u: goto label_23edd0;
        case 0x23edd4u: goto label_23edd4;
        case 0x23edd8u: goto label_23edd8;
        case 0x23eddcu: goto label_23eddc;
        case 0x23ede0u: goto label_23ede0;
        case 0x23ede4u: goto label_23ede4;
        case 0x23ede8u: goto label_23ede8;
        case 0x23edecu: goto label_23edec;
        case 0x23edf0u: goto label_23edf0;
        case 0x23edf4u: goto label_23edf4;
        case 0x23edf8u: goto label_23edf8;
        case 0x23edfcu: goto label_23edfc;
        case 0x23ee00u: goto label_23ee00;
        case 0x23ee04u: goto label_23ee04;
        case 0x23ee08u: goto label_23ee08;
        case 0x23ee0cu: goto label_23ee0c;
        case 0x23ee10u: goto label_23ee10;
        case 0x23ee14u: goto label_23ee14;
        case 0x23ee18u: goto label_23ee18;
        case 0x23ee1cu: goto label_23ee1c;
        case 0x23ee20u: goto label_23ee20;
        case 0x23ee24u: goto label_23ee24;
        case 0x23ee28u: goto label_23ee28;
        case 0x23ee2cu: goto label_23ee2c;
        case 0x23ee30u: goto label_23ee30;
        case 0x23ee34u: goto label_23ee34;
        case 0x23ee38u: goto label_23ee38;
        case 0x23ee3cu: goto label_23ee3c;
        case 0x23ee40u: goto label_23ee40;
        case 0x23ee44u: goto label_23ee44;
        case 0x23ee48u: goto label_23ee48;
        case 0x23ee4cu: goto label_23ee4c;
        case 0x23ee50u: goto label_23ee50;
        case 0x23ee54u: goto label_23ee54;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee5cu: goto label_23ee5c;
        case 0x23ee60u: goto label_23ee60;
        case 0x23ee64u: goto label_23ee64;
        case 0x23ee68u: goto label_23ee68;
        case 0x23ee6cu: goto label_23ee6c;
        case 0x23ee70u: goto label_23ee70;
        case 0x23ee74u: goto label_23ee74;
        case 0x23ee78u: goto label_23ee78;
        case 0x23ee7cu: goto label_23ee7c;
        case 0x23ee80u: goto label_23ee80;
        case 0x23ee84u: goto label_23ee84;
        case 0x23ee88u: goto label_23ee88;
        case 0x23ee8cu: goto label_23ee8c;
        case 0x23ee90u: goto label_23ee90;
        case 0x23ee94u: goto label_23ee94;
        case 0x23ee98u: goto label_23ee98;
        case 0x23ee9cu: goto label_23ee9c;
        case 0x23eea0u: goto label_23eea0;
        case 0x23eea4u: goto label_23eea4;
        case 0x23eea8u: goto label_23eea8;
        case 0x23eeacu: goto label_23eeac;
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23eeb4u: goto label_23eeb4;
        case 0x23eeb8u: goto label_23eeb8;
        case 0x23eebcu: goto label_23eebc;
        case 0x23eec0u: goto label_23eec0;
        case 0x23eec4u: goto label_23eec4;
        case 0x23eec8u: goto label_23eec8;
        case 0x23eeccu: goto label_23eecc;
        case 0x23eed0u: goto label_23eed0;
        case 0x23eed4u: goto label_23eed4;
        case 0x23eed8u: goto label_23eed8;
        case 0x23eedcu: goto label_23eedc;
        case 0x23eee0u: goto label_23eee0;
        case 0x23eee4u: goto label_23eee4;
        case 0x23eee8u: goto label_23eee8;
        case 0x23eeecu: goto label_23eeec;
        case 0x23eef0u: goto label_23eef0;
        case 0x23eef4u: goto label_23eef4;
        case 0x23eef8u: goto label_23eef8;
        case 0x23eefcu: goto label_23eefc;
        case 0x23ef00u: goto label_23ef00;
        case 0x23ef04u: goto label_23ef04;
        case 0x23ef08u: goto label_23ef08;
        case 0x23ef0cu: goto label_23ef0c;
        case 0x23ef10u: goto label_23ef10;
        case 0x23ef14u: goto label_23ef14;
        case 0x23ef18u: goto label_23ef18;
        case 0x23ef1cu: goto label_23ef1c;
        case 0x23ef20u: goto label_23ef20;
        case 0x23ef24u: goto label_23ef24;
        case 0x23ef28u: goto label_23ef28;
        case 0x23ef2cu: goto label_23ef2c;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef34u: goto label_23ef34;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef3cu: goto label_23ef3c;
        case 0x23ef40u: goto label_23ef40;
        case 0x23ef44u: goto label_23ef44;
        case 0x23ef48u: goto label_23ef48;
        case 0x23ef4cu: goto label_23ef4c;
        case 0x23ef50u: goto label_23ef50;
        case 0x23ef54u: goto label_23ef54;
        case 0x23ef58u: goto label_23ef58;
        case 0x23ef5cu: goto label_23ef5c;
        case 0x23ef60u: goto label_23ef60;
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef68u: goto label_23ef68;
        case 0x23ef6cu: goto label_23ef6c;
        case 0x23ef70u: goto label_23ef70;
        case 0x23ef74u: goto label_23ef74;
        case 0x23ef78u: goto label_23ef78;
        case 0x23ef7cu: goto label_23ef7c;
        case 0x23ef80u: goto label_23ef80;
        case 0x23ef84u: goto label_23ef84;
        case 0x23ef88u: goto label_23ef88;
        case 0x23ef8cu: goto label_23ef8c;
        case 0x23ef90u: goto label_23ef90;
        case 0x23ef94u: goto label_23ef94;
        case 0x23ef98u: goto label_23ef98;
        case 0x23ef9cu: goto label_23ef9c;
        case 0x23efa0u: goto label_23efa0;
        case 0x23efa4u: goto label_23efa4;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efacu: goto label_23efac;
        case 0x23efb0u: goto label_23efb0;
        case 0x23efb4u: goto label_23efb4;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efbcu: goto label_23efbc;
        case 0x23efc0u: goto label_23efc0;
        case 0x23efc4u: goto label_23efc4;
        case 0x23efc8u: goto label_23efc8;
        case 0x23efccu: goto label_23efcc;
        case 0x23efd0u: goto label_23efd0;
        case 0x23efd4u: goto label_23efd4;
        case 0x23efd8u: goto label_23efd8;
        case 0x23efdcu: goto label_23efdc;
        case 0x23efe0u: goto label_23efe0;
        case 0x23efe4u: goto label_23efe4;
        case 0x23efe8u: goto label_23efe8;
        case 0x23efecu: goto label_23efec;
        case 0x23eff0u: goto label_23eff0;
        case 0x23eff4u: goto label_23eff4;
        case 0x23eff8u: goto label_23eff8;
        case 0x23effcu: goto label_23effc;
        case 0x23f000u: goto label_23f000;
        case 0x23f004u: goto label_23f004;
        case 0x23f008u: goto label_23f008;
        case 0x23f00cu: goto label_23f00c;
        case 0x23f010u: goto label_23f010;
        case 0x23f014u: goto label_23f014;
        case 0x23f018u: goto label_23f018;
        case 0x23f01cu: goto label_23f01c;
        case 0x23f020u: goto label_23f020;
        case 0x23f024u: goto label_23f024;
        case 0x23f028u: goto label_23f028;
        case 0x23f02cu: goto label_23f02c;
        case 0x23f030u: goto label_23f030;
        case 0x23f034u: goto label_23f034;
        case 0x23f038u: goto label_23f038;
        case 0x23f03cu: goto label_23f03c;
        case 0x23f040u: goto label_23f040;
        case 0x23f044u: goto label_23f044;
        case 0x23f048u: goto label_23f048;
        case 0x23f04cu: goto label_23f04c;
        case 0x23f050u: goto label_23f050;
        case 0x23f054u: goto label_23f054;
        case 0x23f058u: goto label_23f058;
        case 0x23f05cu: goto label_23f05c;
        case 0x23f060u: goto label_23f060;
        case 0x23f064u: goto label_23f064;
        case 0x23f068u: goto label_23f068;
        case 0x23f06cu: goto label_23f06c;
        case 0x23f070u: goto label_23f070;
        case 0x23f074u: goto label_23f074;
        case 0x23f078u: goto label_23f078;
        case 0x23f07cu: goto label_23f07c;
        case 0x23f080u: goto label_23f080;
        case 0x23f084u: goto label_23f084;
        case 0x23f088u: goto label_23f088;
        case 0x23f08cu: goto label_23f08c;
        case 0x23f090u: goto label_23f090;
        case 0x23f094u: goto label_23f094;
        case 0x23f098u: goto label_23f098;
        case 0x23f09cu: goto label_23f09c;
        case 0x23f0a0u: goto label_23f0a0;
        case 0x23f0a4u: goto label_23f0a4;
        case 0x23f0a8u: goto label_23f0a8;
        case 0x23f0acu: goto label_23f0ac;
        case 0x23f0b0u: goto label_23f0b0;
        case 0x23f0b4u: goto label_23f0b4;
        case 0x23f0b8u: goto label_23f0b8;
        case 0x23f0bcu: goto label_23f0bc;
        case 0x23f0c0u: goto label_23f0c0;
        case 0x23f0c4u: goto label_23f0c4;
        case 0x23f0c8u: goto label_23f0c8;
        case 0x23f0ccu: goto label_23f0cc;
        case 0x23f0d0u: goto label_23f0d0;
        case 0x23f0d4u: goto label_23f0d4;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f0dcu: goto label_23f0dc;
        case 0x23f0e0u: goto label_23f0e0;
        case 0x23f0e4u: goto label_23f0e4;
        case 0x23f0e8u: goto label_23f0e8;
        case 0x23f0ecu: goto label_23f0ec;
        case 0x23f0f0u: goto label_23f0f0;
        case 0x23f0f4u: goto label_23f0f4;
        case 0x23f0f8u: goto label_23f0f8;
        case 0x23f0fcu: goto label_23f0fc;
        case 0x23f100u: goto label_23f100;
        case 0x23f104u: goto label_23f104;
        case 0x23f108u: goto label_23f108;
        case 0x23f10cu: goto label_23f10c;
        case 0x23f110u: goto label_23f110;
        case 0x23f114u: goto label_23f114;
        case 0x23f118u: goto label_23f118;
        case 0x23f11cu: goto label_23f11c;
        case 0x23f120u: goto label_23f120;
        case 0x23f124u: goto label_23f124;
        case 0x23f128u: goto label_23f128;
        case 0x23f12cu: goto label_23f12c;
        case 0x23f130u: goto label_23f130;
        case 0x23f134u: goto label_23f134;
        case 0x23f138u: goto label_23f138;
        case 0x23f13cu: goto label_23f13c;
        case 0x23f140u: goto label_23f140;
        case 0x23f144u: goto label_23f144;
        case 0x23f148u: goto label_23f148;
        case 0x23f14cu: goto label_23f14c;
        default: break;
    }

    ctx->pc = 0x23eab8u;

label_23eab8:
    // 0x23eab8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x23eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_23eabc:
    // 0x23eabc: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x23eabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_23eac0:
    // 0x23eac0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x23eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_23eac4:
    // 0x23eac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23eac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23eac8:
    // 0x23eac8: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x23eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_23eacc:
    // 0x23eacc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23eaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ead0:
    // 0x23ead0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x23ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_23ead4:
    // 0x23ead4: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x23ead4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_23ead8:
    // 0x23ead8: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x23ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_23eadc:
    // 0x23eadc: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x23eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_23eae0:
    // 0x23eae0: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x23eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_23eae4:
    // 0x23eae4: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x23eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_23eae8:
    // 0x23eae8: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x23eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_23eaec:
    // 0x23eaec: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x23eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_23eaf0:
    // 0x23eaf0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23eaf4:
    // 0x23eaf4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x23eaf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_23eaf8:
    // 0x23eaf8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23eafc:
    // 0x23eafc: 0x60f809  jalr        $v1
label_23eb00:
    if (ctx->pc == 0x23EB00u) {
        ctx->pc = 0x23EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAFCu;
        // 0x23eb00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB04u;
        goto label_23eb04;
    }
    ctx->pc = 0x23EAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23EB04u);
        ctx->pc = 0x23EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAFCu;
        // 0x23eb00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EAFCu, 0x23EB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EB04u;
label_23eb04:
    // 0x23eb04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23eb08:
    // 0x23eb08: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x23eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_23eb0c:
    // 0x23eb0c: 0x24734b00  addiu       $s3, $v1, 0x4B00
    ctx->pc = 0x23eb0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_23eb10:
    // 0x23eb10: 0x24541740  addiu       $s4, $v0, 0x1740
    ctx->pc = 0x23eb10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_23eb14:
    // 0x23eb14: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x23eb14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_23eb18:
    // 0x23eb18: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x23eb18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_23eb1c:
    // 0x23eb1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23eb1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_23eb20:
    // 0x23eb20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23eb24:
    // 0x23eb24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23eb24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23eb28:
    // 0x23eb28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23eb28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23eb2c:
    // 0x23eb2c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23eb2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23eb30:
    // 0x23eb30: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23eb30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_23eb34:
    // 0x23eb34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23eb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_23eb38:
    // 0x23eb38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23eb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23eb3c:
    // 0x23eb3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23eb40:
    // 0x23eb40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23eb44:
    // 0x23eb44: 0x24631770  addiu       $v1, $v1, 0x1770
    ctx->pc = 0x23eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
label_23eb48:
    // 0x23eb48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23eb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23eb4c:
    // 0x23eb4c: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x23eb4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_23eb50:
    // 0x23eb50: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x23eb50u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23eb54:
    // 0x23eb54: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_23eb58:
    // 0x23eb58: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x23eb58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_23eb5c:
    // 0x23eb5c: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x23eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_23eb60:
    // 0x23eb60: 0x8ce447c4  lw          $a0, 0x47C4($a3)
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18372)));
label_23eb64:
    // 0x23eb64: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x23eb64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_23eb68:
    // 0x23eb68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23eb68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23eb6c:
    // 0x23eb6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23eb6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23eb70:
    // 0x23eb70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23eb70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23eb74:
    // 0x23eb74: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23eb74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23eb78:
    // 0x23eb78: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23eb78u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23eb7c:
    // 0x23eb7c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x23eb7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_23eb80:
    // 0x23eb80: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x23eb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
label_23eb84:
    // 0x23eb84: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x23eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_23eb88:
    // 0x23eb88: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_23eb8c:
    // 0x23eb8c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23eb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_23eb90:
    // 0x23eb90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23eb90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23eb94:
    // 0x23eb94: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23eb98:
    // 0x23eb98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_23eb9c:
    // 0x23eb9c: 0xc1036e2  jal         func_40DB88
label_23eba0:
    if (ctx->pc == 0x23EBA0u) {
        ctx->pc = 0x23EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB9Cu;
        // 0x23eba0: 0xafb10084  sw          $s1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBA4u;
        goto label_23eba4;
    }
    ctx->pc = 0x23EB9Cu;
    SET_GPR_U32(ctx, 31, 0x23EBA4u);
    ctx->pc = 0x23EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB9Cu;
    // 0x23eba0: 0xafb10084  sw          $s1, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x23EB9Cu, 0x23EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBA4u;
label_23eba4:
    // 0x23eba4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x23eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23eba8:
    // 0x23eba8: 0x1040013e  beqz        $v0, . + 4 + (0x13E << 2)
label_23ebac:
    if (ctx->pc == 0x23EBACu) {
        ctx->pc = 0x23EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBA8u;
        // 0x23ebac: 0x8fa50078  lw          $a1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBB0u;
        goto label_23ebb0;
    }
    ctx->pc = 0x23EBA8u;
    {
        const bool branch_taken_0x23eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBA8u;
        // 0x23ebac: 0x8fa50078  lw          $a1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eba8) {
            ctx->pc = 0x23F0A4u;
            goto label_23f0a4;
        }
    }
    ctx->pc = 0x23EBB0u;
label_23ebb0:
    // 0x23ebb0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x23ebb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_23ebb4:
    // 0x23ebb4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_23ebb8:
    // 0x23ebb8: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x23ebb8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23ebbc:
    // 0x23ebbc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_23ebc0:
    // 0x23ebc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23ebc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23ebc4:
    // 0x23ebc4: 0xae2501d8  sw          $a1, 0x1D8($s1)
    ctx->pc = 0x23ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 5));
label_23ebc8:
    // 0x23ebc8: 0x7e230390  sq          $v1, 0x390($s1)
    ctx->pc = 0x23ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 912), GPR_VEC(ctx, 3));
label_23ebcc:
    // 0x23ebcc: 0x16000154  bnez        $s0, . + 4 + (0x154 << 2)
label_23ebd0:
    if (ctx->pc == 0x23EBD0u) {
        ctx->pc = 0x23EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBCCu;
        // 0x23ebd0: 0x7e240230  sq          $a0, 0x230($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBD4u;
        goto label_23ebd4;
    }
    ctx->pc = 0x23EBCCu;
    {
        const bool branch_taken_0x23ebcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBCCu;
        // 0x23ebd0: 0x7e240230  sq          $a0, 0x230($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebcc) {
            ctx->pc = 0x23F120u;
            goto label_23f120;
        }
    }
    ctx->pc = 0x23EBD4u;
label_23ebd4:
    // 0x23ebd4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x23ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ebd8:
    // 0x23ebd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ebdc:
    // 0x23ebdc: 0x7a860000  lq          $a2, 0x0($s4)
    ctx->pc = 0x23ebdcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_23ebe0:
    // 0x23ebe0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23ebe4:
    // 0x23ebe4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23ebe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_23ebe8:
    // 0x23ebe8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23ebe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ebec:
    // 0x23ebec: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x23ebecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_23ebf0:
    // 0x23ebf0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23ebf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23ebf4:
    // 0x23ebf4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23ebf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23ebf8:
    // 0x23ebf8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x23ebf8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_23ebfc:
    // 0x23ebfc: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x23ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_23ec00:
    // 0x23ec00: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23ec00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23ec04:
    // 0x23ec04: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23ec04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23ec08:
    // 0x23ec08: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23ec08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23ec0c:
    // 0x23ec0c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23ec0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23ec10:
    // 0x23ec10: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23ec10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23ec14:
    // 0x23ec14: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x23ec14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_23ec18:
    // 0x23ec18: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x23ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_23ec1c:
    // 0x23ec1c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x23ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_23ec20:
    // 0x23ec20: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x23ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_23ec24:
    // 0x23ec24: 0xc086c2e  jal         func_21B0B8
label_23ec28:
    if (ctx->pc == 0x23EC28u) {
        ctx->pc = 0x23EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC24u;
        // 0x23ec28: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC2Cu;
        goto label_23ec2c;
    }
    ctx->pc = 0x23EC24u;
    SET_GPR_U32(ctx, 31, 0x23EC2Cu);
    ctx->pc = 0x23EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC24u;
    // 0x23ec28: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x23EC24u, 0x23EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC2Cu;
label_23ec2c:
    // 0x23ec2c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x23ec2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23ec30:
    // 0x23ec30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ec34:
    // 0x23ec34: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x23ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_23ec38:
    // 0x23ec38: 0xc087502  jal         func_21D408
label_23ec3c:
    if (ctx->pc == 0x23EC3Cu) {
        ctx->pc = 0x23EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC38u;
        // 0x23ec3c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC40u;
        goto label_23ec40;
    }
    ctx->pc = 0x23EC38u;
    SET_GPR_U32(ctx, 31, 0x23EC40u);
    ctx->pc = 0x23EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC38u;
    // 0x23ec3c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23EC38u, 0x23EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC40u;
label_23ec40:
    // 0x23ec40: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x23ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_23ec44:
    // 0x23ec44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ec44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec48:
    // 0x23ec48: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_23ec4c:
    // 0x23ec4c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x23ec4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_23ec50:
    // 0x23ec50: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23ec50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23ec54:
    // 0x23ec54: 0x10400132  beqz        $v0, . + 4 + (0x132 << 2)
label_23ec58:
    if (ctx->pc == 0x23EC58u) {
        ctx->pc = 0x23EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC54u;
        // 0x23ec58: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC5Cu;
        goto label_23ec5c;
    }
    ctx->pc = 0x23EC54u;
    {
        const bool branch_taken_0x23ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC54u;
        // 0x23ec58: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec54) {
            ctx->pc = 0x23F120u;
            goto label_23f120;
        }
    }
    ctx->pc = 0x23EC5Cu;
label_23ec5c:
    // 0x23ec5c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x23ec5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ec60:
    // 0x23ec60: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x23ec60u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_23ec64:
    // 0x23ec64: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x23ec64u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_23ec68:
    // 0x23ec68: 0x8ea2489c  lw          $v0, 0x489C($s5)
    ctx->pc = 0x23ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23ec6c:
    // 0x23ec6c: 0x0  nop
    ctx->pc = 0x23ec6cu;
    // NOP
label_23ec70:
    // 0x23ec70: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x23ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23ec74:
    // 0x23ec74: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_23ec78:
    // 0x23ec78: 0xc0e409a  jal         func_390268
label_23ec7c:
    if (ctx->pc == 0x23EC7Cu) {
        ctx->pc = 0x23EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC78u;
        // 0x23ec7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC80u;
        goto label_23ec80;
    }
    ctx->pc = 0x23EC78u;
    SET_GPR_U32(ctx, 31, 0x23EC80u);
    ctx->pc = 0x23EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC78u;
    // 0x23ec7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23EC78u, 0x23EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC80u;
label_23ec80:
    // 0x23ec80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23ec80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec84:
    // 0x23ec84: 0x12000100  beqz        $s0, . + 4 + (0x100 << 2)
label_23ec88:
    if (ctx->pc == 0x23EC88u) {
        ctx->pc = 0x23EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC84u;
        // 0x23ec88: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC8Cu;
        goto label_23ec8c;
    }
    ctx->pc = 0x23EC84u;
    {
        const bool branch_taken_0x23ec84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC84u;
        // 0x23ec88: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec84) {
            ctx->pc = 0x23F088u;
            goto label_23f088;
        }
    }
    ctx->pc = 0x23EC8Cu;
label_23ec8c:
    // 0x23ec8c: 0xc087502  jal         func_21D408
label_23ec90:
    if (ctx->pc == 0x23EC90u) {
        ctx->pc = 0x23EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC8Cu;
        // 0x23ec90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC94u;
        goto label_23ec94;
    }
    ctx->pc = 0x23EC8Cu;
    SET_GPR_U32(ctx, 31, 0x23EC94u);
    ctx->pc = 0x23EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC8Cu;
    // 0x23ec90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23EC8Cu, 0x23EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC94u;
label_23ec94:
    // 0x23ec94: 0x12300004  beq         $s1, $s0, . + 4 + (0x4 << 2)
label_23ec98:
    if (ctx->pc == 0x23EC98u) {
        ctx->pc = 0x23EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC94u;
        // 0x23ec98: 0x8c43020c  lw          $v1, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC9Cu;
        goto label_23ec9c;
    }
    ctx->pc = 0x23EC94u;
    {
        const bool branch_taken_0x23ec94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x23EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC94u;
        // 0x23ec98: 0x8c43020c  lw          $v1, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec94) {
            ctx->pc = 0x23ECA8u;
            goto label_23eca8;
        }
    }
    ctx->pc = 0x23EC9Cu;
label_23ec9c:
    // 0x23ec9c: 0x8e62020c  lw          $v0, 0x20C($s3)
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_23eca0:
    // 0x23eca0: 0x144300ab  bne         $v0, $v1, . + 4 + (0xAB << 2)
label_23eca4:
    if (ctx->pc == 0x23ECA4u) {
        ctx->pc = 0x23ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECA0u;
        // 0x23eca4: 0x97a5007c  lhu         $a1, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECA8u;
        goto label_23eca8;
    }
    ctx->pc = 0x23ECA0u;
    {
        const bool branch_taken_0x23eca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECA0u;
        // 0x23eca4: 0x97a5007c  lhu         $a1, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eca0) {
            ctx->pc = 0x23EF50u;
            goto label_23ef50;
        }
    }
    ctx->pc = 0x23ECA8u;
label_23eca8:
    // 0x23eca8: 0x97a2007c  lhu         $v0, 0x7C($sp)
    ctx->pc = 0x23eca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
label_23ecac:
    // 0x23ecac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23ecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_23ecb0:
    // 0x23ecb0: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_23ecb4:
    if (ctx->pc == 0x23ECB4u) {
        ctx->pc = 0x23ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB0u;
        // 0x23ecb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECB8u;
        goto label_23ecb8;
    }
    ctx->pc = 0x23ECB0u;
    {
        const bool branch_taken_0x23ecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB0u;
        // 0x23ecb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecb0) {
            ctx->pc = 0x23EE70u;
            goto label_23ee70;
        }
    }
    ctx->pc = 0x23ECB8u;
label_23ecb8:
    // 0x23ecb8: 0x926202d5  lbu         $v0, 0x2D5($s3)
    ctx->pc = 0x23ecb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 725)));
label_23ecbc:
    // 0x23ecbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23ecc0:
    if (ctx->pc == 0x23ECC0u) {
        ctx->pc = 0x23ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECBCu;
        // 0x23ecc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECC4u;
        goto label_23ecc4;
    }
    ctx->pc = 0x23ECBCu;
    {
        const bool branch_taken_0x23ecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECBCu;
        // 0x23ecc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecbc) {
            ctx->pc = 0x23ECD0u;
            goto label_23ecd0;
        }
    }
    ctx->pc = 0x23ECC4u;
label_23ecc4:
    // 0x23ecc4: 0xc0a3c00  jal         func_28F000
label_23ecc8:
    if (ctx->pc == 0x23ECC8u) {
        ctx->pc = 0x23ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECC4u;
        // 0x23ecc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECCCu;
        goto label_23eccc;
    }
    ctx->pc = 0x23ECC4u;
    SET_GPR_U32(ctx, 31, 0x23ECCCu);
    ctx->pc = 0x23ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECC4u;
    // 0x23ecc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F000u, 0x23ECC4u, 0x23ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECCCu;
label_23eccc:
    // 0x23eccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ecd0:
    // 0x23ecd0: 0xc0a3bc0  jal         func_28EF00
label_23ecd4:
    if (ctx->pc == 0x23ECD4u) {
        ctx->pc = 0x23ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECD0u;
        // 0x23ecd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECD8u;
        goto label_23ecd8;
    }
    ctx->pc = 0x23ECD0u;
    SET_GPR_U32(ctx, 31, 0x23ECD8u);
    ctx->pc = 0x23ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECD0u;
    // 0x23ecd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF00u, 0x23ECD0u, 0x23ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECD8u;
label_23ecd8:
    // 0x23ecd8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ecdc:
    // 0x23ecdc: 0xc089bfc  jal         func_226FF0
label_23ece0:
    if (ctx->pc == 0x23ECE0u) {
        ctx->pc = 0x23ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECDCu;
        // 0x23ece0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECE4u;
        goto label_23ece4;
    }
    ctx->pc = 0x23ECDCu;
    SET_GPR_U32(ctx, 31, 0x23ECE4u);
    ctx->pc = 0x23ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECDCu;
    // 0x23ece0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x23ECDCu, 0x23ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECE4u;
label_23ece4:
    // 0x23ece4: 0xc0e57ce  jal         func_395F38
label_23ece8:
    if (ctx->pc == 0x23ECE8u) {
        ctx->pc = 0x23ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECE4u;
        // 0x23ece8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECECu;
        goto label_23ecec;
    }
    ctx->pc = 0x23ECE4u;
    SET_GPR_U32(ctx, 31, 0x23ECECu);
    ctx->pc = 0x23ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECE4u;
    // 0x23ece8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x23ECE4u, 0x23ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECECu;
label_23ecec:
    // 0x23ecec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23ecf0:
    if (ctx->pc == 0x23ECF0u) {
        ctx->pc = 0x23ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECECu;
        // 0x23ecf0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECF4u;
        goto label_23ecf4;
    }
    ctx->pc = 0x23ECECu;
    {
        const bool branch_taken_0x23ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECECu;
        // 0x23ecf0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecec) {
            ctx->pc = 0x23ED30u;
            goto label_23ed30;
        }
    }
    ctx->pc = 0x23ECF4u;
label_23ecf4:
    // 0x23ecf4: 0x94450112  lhu         $a1, 0x112($v0)
    ctx->pc = 0x23ecf4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_23ecf8:
    // 0x23ecf8: 0xc0e44cc  jal         func_391330
label_23ecfc:
    if (ctx->pc == 0x23ECFCu) {
        ctx->pc = 0x23ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECF8u;
        // 0x23ecfc: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED00u;
        goto label_23ed00;
    }
    ctx->pc = 0x23ECF8u;
    SET_GPR_U32(ctx, 31, 0x23ED00u);
    ctx->pc = 0x23ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECF8u;
    // 0x23ecfc: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23ECF8u, 0x23ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED00u;
label_23ed00:
    // 0x23ed00: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x23ed00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_23ed04:
    // 0x23ed04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23ed08:
    // 0x23ed08: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_23ed0c:
    if (ctx->pc == 0x23ED0Cu) {
        ctx->pc = 0x23ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED08u;
        // 0x23ed0c: 0x92620152  lbu         $v0, 0x152($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 338)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED10u;
        goto label_23ed10;
    }
    ctx->pc = 0x23ED08u;
    {
        const bool branch_taken_0x23ed08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ed08) {
            ctx->pc = 0x23ED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED08u;
            // 0x23ed0c: 0x92620152  lbu         $v0, 0x152($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 338)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED34u;
            goto label_23ed34;
        }
    }
    ctx->pc = 0x23ED10u;
label_23ed10:
    // 0x23ed10: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x23ed10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_23ed14:
    // 0x23ed14: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23ed14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23ed18:
    // 0x23ed18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23ed1c:
    if (ctx->pc == 0x23ED1Cu) {
        ctx->pc = 0x23ED20u;
        goto label_23ed20;
    }
    ctx->pc = 0x23ED18u;
    {
        const bool branch_taken_0x23ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ed18) {
            ctx->pc = 0x23ED28u;
            goto label_23ed28;
        }
    }
    ctx->pc = 0x23ED20u;
label_23ed20:
    // 0x23ed20: 0x10000003  b           . + 4 + (0x3 << 2)
label_23ed24:
    if (ctx->pc == 0x23ED24u) {
        ctx->pc = 0x23ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED20u;
        // 0x23ed24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED28u;
        goto label_23ed28;
    }
    ctx->pc = 0x23ED20u;
    {
        const bool branch_taken_0x23ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED20u;
        // 0x23ed24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed20) {
            ctx->pc = 0x23ED30u;
            goto label_23ed30;
        }
    }
    ctx->pc = 0x23ED28u;
label_23ed28:
    // 0x23ed28: 0xc095fce  jal         func_257F38
label_23ed2c:
    if (ctx->pc == 0x23ED2Cu) {
        ctx->pc = 0x23ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED28u;
        // 0x23ed2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED30u;
        goto label_23ed30;
    }
    ctx->pc = 0x23ED28u;
    SET_GPR_U32(ctx, 31, 0x23ED30u);
    ctx->pc = 0x23ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED28u;
    // 0x23ed2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x23ED28u, 0x23ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED30u;
label_23ed30:
    // 0x23ed30: 0x92620152  lbu         $v0, 0x152($s3)
    ctx->pc = 0x23ed30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 338)));
label_23ed34:
    // 0x23ed34: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_23ed38:
    if (ctx->pc == 0x23ED38u) {
        ctx->pc = 0x23ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED34u;
        // 0x23ed38: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED3Cu;
        goto label_23ed3c;
    }
    ctx->pc = 0x23ED34u;
    {
        const bool branch_taken_0x23ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ed34) {
            ctx->pc = 0x23ED38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED34u;
            // 0x23ed38: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EDA8u;
            goto label_23eda8;
        }
    }
    ctx->pc = 0x23ED3Cu;
label_23ed3c:
    // 0x23ed3c: 0x5657001a  bnel        $s2, $s7, . + 4 + (0x1A << 2)
label_23ed40:
    if (ctx->pc == 0x23ED40u) {
        ctx->pc = 0x23ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED3Cu;
        // 0x23ed40: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED44u;
        goto label_23ed44;
    }
    ctx->pc = 0x23ED3Cu;
    {
        const bool branch_taken_0x23ed3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        if (branch_taken_0x23ed3c) {
            ctx->pc = 0x23ED40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED3Cu;
            // 0x23ed40: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EDA8u;
            goto label_23eda8;
        }
    }
    ctx->pc = 0x23ED44u;
label_23ed44:
    // 0x23ed44: 0x56300006  bnel        $s1, $s0, . + 4 + (0x6 << 2)
label_23ed48:
    if (ctx->pc == 0x23ED48u) {
        ctx->pc = 0x23ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED44u;
        // 0x23ed48: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED4Cu;
        goto label_23ed4c;
    }
    ctx->pc = 0x23ED44u;
    {
        const bool branch_taken_0x23ed44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x23ed44) {
            ctx->pc = 0x23ED48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED44u;
            // 0x23ed48: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED60u;
            goto label_23ed60;
        }
    }
    ctx->pc = 0x23ED4Cu;
label_23ed4c:
    // 0x23ed4c: 0xafd70320  sw          $s7, 0x320($fp)
    ctx->pc = 0x23ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 800), GPR_U32(ctx, 23));
label_23ed50:
    // 0x23ed50: 0x26c40840  addiu       $a0, $s6, 0x840
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
label_23ed54:
    // 0x23ed54: 0xc06c9aa  jal         func_1B26A8
label_23ed58:
    if (ctx->pc == 0x23ED58u) {
        ctx->pc = 0x23ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED54u;
        // 0x23ed58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED5Cu;
        goto label_23ed5c;
    }
    ctx->pc = 0x23ED54u;
    SET_GPR_U32(ctx, 31, 0x23ED5Cu);
    ctx->pc = 0x23ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED54u;
    // 0x23ed58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B26A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B26A8u, 0x23ED54u, 0x23ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED5Cu;
label_23ed5c:
    // 0x23ed5c: 0x926202d4  lbu         $v0, 0x2D4($s3)
    ctx->pc = 0x23ed5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
label_23ed60:
    // 0x23ed60: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_23ed64:
    if (ctx->pc == 0x23ED64u) {
        ctx->pc = 0x23ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED60u;
        // 0x23ed64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED68u;
        goto label_23ed68;
    }
    ctx->pc = 0x23ED60u;
    {
        const bool branch_taken_0x23ed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED60u;
        // 0x23ed64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed60) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23ED68u;
label_23ed68:
    // 0x23ed68: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x23ed68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_23ed6c:
    // 0x23ed6c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23ed6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23ed70:
    // 0x23ed70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23ed70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23ed74:
    // 0x23ed74: 0x145700b5  bne         $v0, $s7, . + 4 + (0xB5 << 2)
label_23ed78:
    if (ctx->pc == 0x23ED78u) {
        ctx->pc = 0x23ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED74u;
        // 0x23ed78: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED7Cu;
        goto label_23ed7c;
    }
    ctx->pc = 0x23ED74u;
    {
        const bool branch_taken_0x23ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x23ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED74u;
        // 0x23ed78: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed74) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23ED7Cu;
label_23ed7c:
    // 0x23ed7c: 0xc08f9f8  jal         func_23E7E0
label_23ed80:
    if (ctx->pc == 0x23ED80u) {
        ctx->pc = 0x23ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED7Cu;
        // 0x23ed80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED84u;
        goto label_23ed84;
    }
    ctx->pc = 0x23ED7Cu;
    SET_GPR_U32(ctx, 31, 0x23ED84u);
    ctx->pc = 0x23ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED7Cu;
    // 0x23ed80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E7E0u, 0x23ED7Cu, 0x23ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED84u;
label_23ed84:
    // 0x23ed84: 0xc08a05a  jal         func_228168
label_23ed88:
    if (ctx->pc == 0x23ED88u) {
        ctx->pc = 0x23ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED84u;
        // 0x23ed88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED8Cu;
        goto label_23ed8c;
    }
    ctx->pc = 0x23ED84u;
    SET_GPR_U32(ctx, 31, 0x23ED8Cu);
    ctx->pc = 0x23ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED84u;
    // 0x23ed88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x23ED84u, 0x23ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED8Cu;
label_23ed8c:
    // 0x23ed8c: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
label_23ed90:
    if (ctx->pc == 0x23ED90u) {
        ctx->pc = 0x23ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED8Cu;
        // 0x23ed90: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED94u;
        goto label_23ed94;
    }
    ctx->pc = 0x23ED8Cu;
    {
        const bool branch_taken_0x23ed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED8Cu;
        // 0x23ed90: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed8c) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23ED94u;
label_23ed94:
    // 0x23ed94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ed98:
    // 0x23ed98: 0xc0a3ba2  jal         func_28EE88
label_23ed9c:
    if (ctx->pc == 0x23ED9Cu) {
        ctx->pc = 0x23ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED98u;
        // 0x23ed9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDA0u;
        goto label_23eda0;
    }
    ctx->pc = 0x23ED98u;
    SET_GPR_U32(ctx, 31, 0x23EDA0u);
    ctx->pc = 0x23ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED98u;
    // 0x23ed9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE88u, 0x23ED98u, 0x23EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA0u;
label_23eda0:
    // 0x23eda0: 0x100000aa  b           . + 4 + (0xAA << 2)
label_23eda4:
    if (ctx->pc == 0x23EDA4u) {
        ctx->pc = 0x23EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDA0u;
        // 0x23eda4: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDA8u;
        goto label_23eda8;
    }
    ctx->pc = 0x23EDA0u;
    {
        const bool branch_taken_0x23eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDA0u;
        // 0x23eda4: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eda0) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EDA8u;
label_23eda8:
    // 0x23eda8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23edac:
    if (ctx->pc == 0x23EDACu) {
        ctx->pc = 0x23EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDA8u;
        // 0x23edac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDB0u;
        goto label_23edb0;
    }
    ctx->pc = 0x23EDA8u;
    {
        const bool branch_taken_0x23eda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDA8u;
        // 0x23edac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eda8) {
            ctx->pc = 0x23EDC0u;
            goto label_23edc0;
        }
    }
    ctx->pc = 0x23EDB0u;
label_23edb0:
    // 0x23edb0: 0xc08a05a  jal         func_228168
label_23edb4:
    if (ctx->pc == 0x23EDB4u) {
        ctx->pc = 0x23EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDB0u;
        // 0x23edb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDB8u;
        goto label_23edb8;
    }
    ctx->pc = 0x23EDB0u;
    SET_GPR_U32(ctx, 31, 0x23EDB8u);
    ctx->pc = 0x23EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDB0u;
    // 0x23edb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x23EDB0u, 0x23EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDB8u;
label_23edb8:
    // 0x23edb8: 0x145200a4  bne         $v0, $s2, . + 4 + (0xA4 << 2)
label_23edbc:
    if (ctx->pc == 0x23EDBCu) {
        ctx->pc = 0x23EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDB8u;
        // 0x23edbc: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDC0u;
        goto label_23edc0;
    }
    ctx->pc = 0x23EDB8u;
    {
        const bool branch_taken_0x23edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x23EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDB8u;
        // 0x23edbc: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edb8) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EDC0u;
label_23edc0:
    // 0x23edc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23edc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23edc4:
    // 0x23edc4: 0xc08f9ba  jal         func_23E6E8
label_23edc8:
    if (ctx->pc == 0x23EDC8u) {
        ctx->pc = 0x23EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDC4u;
        // 0x23edc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDCCu;
        goto label_23edcc;
    }
    ctx->pc = 0x23EDC4u;
    SET_GPR_U32(ctx, 31, 0x23EDCCu);
    ctx->pc = 0x23EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDC4u;
    // 0x23edc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E6E8u, 0x23EDC4u, 0x23EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDCCu;
label_23edcc:
    // 0x23edcc: 0x1630009f  bne         $s1, $s0, . + 4 + (0x9F << 2)
label_23edd0:
    if (ctx->pc == 0x23EDD0u) {
        ctx->pc = 0x23EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDCCu;
        // 0x23edd0: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDD4u;
        goto label_23edd4;
    }
    ctx->pc = 0x23EDCCu;
    {
        const bool branch_taken_0x23edcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x23EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDCCu;
        // 0x23edd0: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edcc) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EDD4u;
label_23edd4:
    // 0x23edd4: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23edd8:
    // 0x23edd8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x23edd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_23eddc:
    // 0x23eddc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23eddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23ede0:
    // 0x23ede0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23ede4:
    // 0x23ede4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_23ede8:
    if (ctx->pc == 0x23EDE8u) {
        ctx->pc = 0x23EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE4u;
        // 0x23ede8: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDECu;
        goto label_23edec;
    }
    ctx->pc = 0x23EDE4u;
    {
        const bool branch_taken_0x23ede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE4u;
        // 0x23ede8: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ede4) {
            ctx->pc = 0x23EE60u;
            goto label_23ee60;
        }
    }
    ctx->pc = 0x23EDECu;
label_23edec:
    // 0x23edec: 0xc047ab8  jal         func_11EAE0
label_23edf0:
    if (ctx->pc == 0x23EDF0u) {
        ctx->pc = 0x23EDF4u;
        goto label_23edf4;
    }
    ctx->pc = 0x23EDECu;
    SET_GPR_U32(ctx, 31, 0x23EDF4u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x23EDECu, 0x23EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDF4u;
label_23edf4:
    // 0x23edf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23edf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23edf8:
    // 0x23edf8: 0x14720019  bne         $v1, $s2, . + 4 + (0x19 << 2)
label_23edfc:
    if (ctx->pc == 0x23EDFCu) {
        ctx->pc = 0x23EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDF8u;
        // 0x23edfc: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE00u;
        goto label_23ee00;
    }
    ctx->pc = 0x23EDF8u;
    {
        const bool branch_taken_0x23edf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x23EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDF8u;
        // 0x23edfc: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edf8) {
            ctx->pc = 0x23EE60u;
            goto label_23ee60;
        }
    }
    ctx->pc = 0x23EE00u;
label_23ee00:
    // 0x23ee00: 0x8fc20320  lw          $v0, 0x320($fp)
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 800)));
label_23ee04:
    // 0x23ee04: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_23ee08:
    if (ctx->pc == 0x23EE08u) {
        ctx->pc = 0x23EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE04u;
        // 0x23ee08: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE0Cu;
        goto label_23ee0c;
    }
    ctx->pc = 0x23EE04u;
    {
        const bool branch_taken_0x23ee04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE04u;
        // 0x23ee08: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee04) {
            ctx->pc = 0x23EE60u;
            goto label_23ee60;
        }
    }
    ctx->pc = 0x23EE0Cu;
label_23ee0c:
    // 0x23ee0c: 0x14180b  movn        $v1, $zero, $s4
    ctx->pc = 0x23ee0cu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_23ee10:
    // 0x23ee10: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x23ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23ee14:
    // 0x23ee14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ee18:
    // 0x23ee18: 0x24500228  addiu       $s0, $v0, 0x228
    ctx->pc = 0x23ee18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
label_23ee1c:
    // 0x23ee1c: 0xc0e409a  jal         func_390268
label_23ee20:
    if (ctx->pc == 0x23EE20u) {
        ctx->pc = 0x23EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE1Cu;
        // 0x23ee20: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE24u;
        goto label_23ee24;
    }
    ctx->pc = 0x23EE1Cu;
    SET_GPR_U32(ctx, 31, 0x23EE24u);
    ctx->pc = 0x23EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE1Cu;
    // 0x23ee20: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23EE1Cu, 0x23EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE24u;
label_23ee24:
    // 0x23ee24: 0xc089f76  jal         func_227DD8
label_23ee28:
    if (ctx->pc == 0x23EE28u) {
        ctx->pc = 0x23EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE24u;
        // 0x23ee28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE2Cu;
        goto label_23ee2c;
    }
    ctx->pc = 0x23EE24u;
    SET_GPR_U32(ctx, 31, 0x23EE2Cu);
    ctx->pc = 0x23EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE24u;
    // 0x23ee28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x23EE24u, 0x23EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE2Cu;
label_23ee2c:
    // 0x23ee2c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23ee30:
    if (ctx->pc == 0x23EE30u) {
        ctx->pc = 0x23EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE2Cu;
        // 0x23ee30: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE34u;
        goto label_23ee34;
    }
    ctx->pc = 0x23EE2Cu;
    {
        const bool branch_taken_0x23ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ee2c) {
            ctx->pc = 0x23EE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EE2Cu;
            // 0x23ee30: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EE50u;
            goto label_23ee50;
        }
    }
    ctx->pc = 0x23EE34u;
label_23ee34:
    // 0x23ee34: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x23ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23ee38:
    // 0x23ee38: 0xc0e409a  jal         func_390268
label_23ee3c:
    if (ctx->pc == 0x23EE3Cu) {
        ctx->pc = 0x23EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE38u;
        // 0x23ee3c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE40u;
        goto label_23ee40;
    }
    ctx->pc = 0x23EE38u;
    SET_GPR_U32(ctx, 31, 0x23EE40u);
    ctx->pc = 0x23EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE38u;
    // 0x23ee3c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23EE38u, 0x23EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE40u;
label_23ee40:
    // 0x23ee40: 0xc088edc  jal         func_223B70
label_23ee44:
    if (ctx->pc == 0x23EE44u) {
        ctx->pc = 0x23EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE40u;
        // 0x23ee44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE48u;
        goto label_23ee48;
    }
    ctx->pc = 0x23EE40u;
    SET_GPR_U32(ctx, 31, 0x23EE48u);
    ctx->pc = 0x23EE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE40u;
    // 0x23ee44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x23EE40u, 0x23EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE48u;
label_23ee48:
    // 0x23ee48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23ee4c:
    if (ctx->pc == 0x23EE4Cu) {
        ctx->pc = 0x23EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE48u;
        // 0x23ee4c: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE50u;
        goto label_23ee50;
    }
    ctx->pc = 0x23EE48u;
    {
        const bool branch_taken_0x23ee48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE48u;
        // 0x23ee4c: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee48) {
            ctx->pc = 0x23EE58u;
            goto label_23ee58;
        }
    }
    ctx->pc = 0x23EE50u;
label_23ee50:
    // 0x23ee50: 0xc06c9e4  jal         func_1B2790
label_23ee54:
    if (ctx->pc == 0x23EE54u) {
        ctx->pc = 0x23EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE50u;
        // 0x23ee54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE58u;
        goto label_23ee58;
    }
    ctx->pc = 0x23EE50u;
    SET_GPR_U32(ctx, 31, 0x23EE58u);
    ctx->pc = 0x23EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE50u;
    // 0x23ee54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2790u, 0x23EE50u, 0x23EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE58u;
label_23ee58:
    // 0x23ee58: 0x1000007b  b           . + 4 + (0x7B << 2)
label_23ee5c:
    if (ctx->pc == 0x23EE5Cu) {
        ctx->pc = 0x23EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE58u;
        // 0x23ee5c: 0xae400320  sw          $zero, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE60u;
        goto label_23ee60;
    }
    ctx->pc = 0x23EE58u;
    {
        const bool branch_taken_0x23ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE58u;
        // 0x23ee5c: 0xae400320  sw          $zero, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee58) {
            ctx->pc = 0x23F048u;
            goto label_23f048;
        }
    }
    ctx->pc = 0x23EE60u;
label_23ee60:
    // 0x23ee60: 0xc06c9e4  jal         func_1B2790
label_23ee64:
    if (ctx->pc == 0x23EE64u) {
        ctx->pc = 0x23EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE60u;
        // 0x23ee64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE68u;
        goto label_23ee68;
    }
    ctx->pc = 0x23EE60u;
    SET_GPR_U32(ctx, 31, 0x23EE68u);
    ctx->pc = 0x23EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE60u;
    // 0x23ee64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2790u, 0x23EE60u, 0x23EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE68u;
label_23ee68:
    // 0x23ee68: 0x10000078  b           . + 4 + (0x78 << 2)
label_23ee6c:
    if (ctx->pc == 0x23EE6Cu) {
        ctx->pc = 0x23EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE68u;
        // 0x23ee6c: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE70u;
        goto label_23ee70;
    }
    ctx->pc = 0x23EE68u;
    {
        const bool branch_taken_0x23ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE68u;
        // 0x23ee6c: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee68) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EE70u;
label_23ee70:
    // 0x23ee70: 0xc0a3bc0  jal         func_28EF00
label_23ee74:
    if (ctx->pc == 0x23EE74u) {
        ctx->pc = 0x23EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE70u;
        // 0x23ee74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE78u;
        goto label_23ee78;
    }
    ctx->pc = 0x23EE70u;
    SET_GPR_U32(ctx, 31, 0x23EE78u);
    ctx->pc = 0x23EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE70u;
    // 0x23ee74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF00u, 0x23EE70u, 0x23EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE78u;
label_23ee78:
    // 0x23ee78: 0x56300028  bnel        $s1, $s0, . + 4 + (0x28 << 2)
label_23ee7c:
    if (ctx->pc == 0x23EE7Cu) {
        ctx->pc = 0x23EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE78u;
        // 0x23ee7c: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE80u;
        goto label_23ee80;
    }
    ctx->pc = 0x23EE78u;
    {
        const bool branch_taken_0x23ee78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x23ee78) {
            ctx->pc = 0x23EE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EE78u;
            // 0x23ee7c: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EF1Cu;
            goto label_23ef1c;
        }
    }
    ctx->pc = 0x23EE80u;
label_23ee80:
    // 0x23ee80: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x23ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23ee84:
    // 0x23ee84: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x23ee84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_23ee88:
    // 0x23ee88: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23ee88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23ee8c:
    // 0x23ee8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23ee8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23ee90:
    // 0x23ee90: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23ee94:
    if (ctx->pc == 0x23EE94u) {
        ctx->pc = 0x23EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE90u;
        // 0x23ee94: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE98u;
        goto label_23ee98;
    }
    ctx->pc = 0x23EE90u;
    {
        const bool branch_taken_0x23ee90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE90u;
        // 0x23ee94: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee90) {
            ctx->pc = 0x23EF10u;
            goto label_23ef10;
        }
    }
    ctx->pc = 0x23EE98u;
label_23ee98:
    // 0x23ee98: 0xc047ab8  jal         func_11EAE0
label_23ee9c:
    if (ctx->pc == 0x23EE9Cu) {
        ctx->pc = 0x23EEA0u;
        goto label_23eea0;
    }
    ctx->pc = 0x23EE98u;
    SET_GPR_U32(ctx, 31, 0x23EEA0u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x23EE98u, 0x23EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEA0u;
label_23eea0:
    // 0x23eea0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23eea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23eea4:
    // 0x23eea4: 0x1477001a  bne         $v1, $s7, . + 4 + (0x1A << 2)
label_23eea8:
    if (ctx->pc == 0x23EEA8u) {
        ctx->pc = 0x23EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEA4u;
        // 0x23eea8: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEACu;
        goto label_23eeac;
    }
    ctx->pc = 0x23EEA4u;
    {
        const bool branch_taken_0x23eea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x23EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEA4u;
        // 0x23eea8: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eea4) {
            ctx->pc = 0x23EF10u;
            goto label_23ef10;
        }
    }
    ctx->pc = 0x23EEACu;
label_23eeac:
    // 0x23eeac: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x23eeacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_23eeb0:
    // 0x23eeb0: 0x8ca20320  lw          $v0, 0x320($a1)
    ctx->pc = 0x23eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
label_23eeb4:
    // 0x23eeb4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_23eeb8:
    if (ctx->pc == 0x23EEB8u) {
        ctx->pc = 0x23EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEB4u;
        // 0x23eeb8: 0x14180b  movn        $v1, $zero, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEBCu;
        goto label_23eebc;
    }
    ctx->pc = 0x23EEB4u;
    {
        const bool branch_taken_0x23eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEB4u;
        // 0x23eeb8: 0x14180b  movn        $v1, $zero, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eeb4) {
            ctx->pc = 0x23EF10u;
            goto label_23ef10;
        }
    }
    ctx->pc = 0x23EEBCu;
label_23eebc:
    // 0x23eebc: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x23eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23eec0:
    // 0x23eec0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23eec4:
    // 0x23eec4: 0xaca00320  sw          $zero, 0x320($a1)
    ctx->pc = 0x23eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 0));
label_23eec8:
    // 0x23eec8: 0x24500228  addiu       $s0, $v0, 0x228
    ctx->pc = 0x23eec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
label_23eecc:
    // 0x23eecc: 0xc0e409a  jal         func_390268
label_23eed0:
    if (ctx->pc == 0x23EED0u) {
        ctx->pc = 0x23EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EECCu;
        // 0x23eed0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EED4u;
        goto label_23eed4;
    }
    ctx->pc = 0x23EECCu;
    SET_GPR_U32(ctx, 31, 0x23EED4u);
    ctx->pc = 0x23EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EECCu;
    // 0x23eed0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23EECCu, 0x23EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EED4u;
label_23eed4:
    // 0x23eed4: 0xc089f76  jal         func_227DD8
label_23eed8:
    if (ctx->pc == 0x23EED8u) {
        ctx->pc = 0x23EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EED4u;
        // 0x23eed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEDCu;
        goto label_23eedc;
    }
    ctx->pc = 0x23EED4u;
    SET_GPR_U32(ctx, 31, 0x23EEDCu);
    ctx->pc = 0x23EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EED4u;
    // 0x23eed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x23EED4u, 0x23EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEDCu;
label_23eedc:
    // 0x23eedc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23eee0:
    if (ctx->pc == 0x23EEE0u) {
        ctx->pc = 0x23EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEDCu;
        // 0x23eee0: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEE4u;
        goto label_23eee4;
    }
    ctx->pc = 0x23EEDCu;
    {
        const bool branch_taken_0x23eedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eedc) {
            ctx->pc = 0x23EEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EEDCu;
            // 0x23eee0: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EF00u;
            goto label_23ef00;
        }
    }
    ctx->pc = 0x23EEE4u;
label_23eee4:
    // 0x23eee4: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x23eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23eee8:
    // 0x23eee8: 0xc0e409a  jal         func_390268
label_23eeec:
    if (ctx->pc == 0x23EEECu) {
        ctx->pc = 0x23EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE8u;
        // 0x23eeec: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEF0u;
        goto label_23eef0;
    }
    ctx->pc = 0x23EEE8u;
    SET_GPR_U32(ctx, 31, 0x23EEF0u);
    ctx->pc = 0x23EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEE8u;
    // 0x23eeec: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23EEE8u, 0x23EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEF0u;
label_23eef0:
    // 0x23eef0: 0xc088edc  jal         func_223B70
label_23eef4:
    if (ctx->pc == 0x23EEF4u) {
        ctx->pc = 0x23EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF0u;
        // 0x23eef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEF8u;
        goto label_23eef8;
    }
    ctx->pc = 0x23EEF0u;
    SET_GPR_U32(ctx, 31, 0x23EEF8u);
    ctx->pc = 0x23EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEF0u;
    // 0x23eef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x23EEF0u, 0x23EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEF8u;
label_23eef8:
    // 0x23eef8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23eefc:
    if (ctx->pc == 0x23EEFCu) {
        ctx->pc = 0x23EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF8u;
        // 0x23eefc: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF00u;
        goto label_23ef00;
    }
    ctx->pc = 0x23EEF8u;
    {
        const bool branch_taken_0x23eef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF8u;
        // 0x23eefc: 0x26c40840  addiu       $a0, $s6, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eef8) {
            ctx->pc = 0x23EF18u;
            goto label_23ef18;
        }
    }
    ctx->pc = 0x23EF00u;
label_23ef00:
    // 0x23ef00: 0xc06c9e4  jal         func_1B2790
label_23ef04:
    if (ctx->pc == 0x23EF04u) {
        ctx->pc = 0x23EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF00u;
        // 0x23ef04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF08u;
        goto label_23ef08;
    }
    ctx->pc = 0x23EF00u;
    SET_GPR_U32(ctx, 31, 0x23EF08u);
    ctx->pc = 0x23EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF00u;
    // 0x23ef04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2790u, 0x23EF00u, 0x23EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF08u;
label_23ef08:
    // 0x23ef08: 0x10000004  b           . + 4 + (0x4 << 2)
label_23ef0c:
    if (ctx->pc == 0x23EF0Cu) {
        ctx->pc = 0x23EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF08u;
        // 0x23ef0c: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF10u;
        goto label_23ef10;
    }
    ctx->pc = 0x23EF08u;
    {
        const bool branch_taken_0x23ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF08u;
        // 0x23ef0c: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef08) {
            ctx->pc = 0x23EF1Cu;
            goto label_23ef1c;
        }
    }
    ctx->pc = 0x23EF10u;
label_23ef10:
    // 0x23ef10: 0xc06c9e4  jal         func_1B2790
label_23ef14:
    if (ctx->pc == 0x23EF14u) {
        ctx->pc = 0x23EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF10u;
        // 0x23ef14: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF18u;
        goto label_23ef18;
    }
    ctx->pc = 0x23EF10u;
    SET_GPR_U32(ctx, 31, 0x23EF18u);
    ctx->pc = 0x23EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF10u;
    // 0x23ef14: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2790u, 0x23EF10u, 0x23EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF18u;
label_23ef18:
    // 0x23ef18: 0x926202d4  lbu         $v0, 0x2D4($s3)
    ctx->pc = 0x23ef18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
label_23ef1c:
    // 0x23ef1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23ef20:
    if (ctx->pc == 0x23EF20u) {
        ctx->pc = 0x23EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF1Cu;
        // 0x23ef20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF24u;
        goto label_23ef24;
    }
    ctx->pc = 0x23EF1Cu;
    {
        const bool branch_taken_0x23ef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF1Cu;
        // 0x23ef20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef1c) {
            ctx->pc = 0x23EF2Cu;
            goto label_23ef2c;
        }
    }
    ctx->pc = 0x23EF24u;
label_23ef24:
    // 0x23ef24: 0xc08f9ba  jal         func_23E6E8
label_23ef28:
    if (ctx->pc == 0x23EF28u) {
        ctx->pc = 0x23EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF24u;
        // 0x23ef28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF2Cu;
        goto label_23ef2c;
    }
    ctx->pc = 0x23EF24u;
    SET_GPR_U32(ctx, 31, 0x23EF2Cu);
    ctx->pc = 0x23EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF24u;
    // 0x23ef28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E6E8u, 0x23EF24u, 0x23EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF2Cu;
label_23ef2c:
    // 0x23ef2c: 0xc08a05a  jal         func_228168
label_23ef30:
    if (ctx->pc == 0x23EF30u) {
        ctx->pc = 0x23EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF2Cu;
        // 0x23ef30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF34u;
        goto label_23ef34;
    }
    ctx->pc = 0x23EF2Cu;
    SET_GPR_U32(ctx, 31, 0x23EF34u);
    ctx->pc = 0x23EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF2Cu;
    // 0x23ef30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x23EF2Cu, 0x23EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF34u;
label_23ef34:
    // 0x23ef34: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_23ef38:
    if (ctx->pc == 0x23EF38u) {
        ctx->pc = 0x23EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF34u;
        // 0x23ef38: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF3Cu;
        goto label_23ef3c;
    }
    ctx->pc = 0x23EF34u;
    {
        const bool branch_taken_0x23ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF34u;
        // 0x23ef38: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef34) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EF3Cu;
label_23ef3c:
    // 0x23ef3c: 0x92620152  lbu         $v0, 0x152($s3)
    ctx->pc = 0x23ef3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 338)));
label_23ef40:
    // 0x23ef40: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_23ef44:
    if (ctx->pc == 0x23EF44u) {
        ctx->pc = 0x23EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF40u;
        // 0x23ef44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF48u;
        goto label_23ef48;
    }
    ctx->pc = 0x23EF40u;
    {
        const bool branch_taken_0x23ef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF40u;
        // 0x23ef44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef40) {
            ctx->pc = 0x23F048u;
            goto label_23f048;
        }
    }
    ctx->pc = 0x23EF48u;
label_23ef48:
    // 0x23ef48: 0x1000002d  b           . + 4 + (0x2D << 2)
label_23ef4c:
    if (ctx->pc == 0x23EF4Cu) {
        ctx->pc = 0x23EF50u;
        goto label_23ef50;
    }
    ctx->pc = 0x23EF48u;
    {
        const bool branch_taken_0x23ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef48) {
            ctx->pc = 0x23F000u;
            goto label_23f000;
        }
    }
    ctx->pc = 0x23EF50u;
label_23ef50:
    // 0x23ef50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ef54:
    // 0x23ef54: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x23ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_23ef58:
    // 0x23ef58: 0xc0a3bc0  jal         func_28EF00
label_23ef5c:
    if (ctx->pc == 0x23EF5Cu) {
        ctx->pc = 0x23EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF58u;
        // 0x23ef5c: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF60u;
        goto label_23ef60;
    }
    ctx->pc = 0x23EF58u;
    SET_GPR_U32(ctx, 31, 0x23EF60u);
    ctx->pc = 0x23EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF58u;
    // 0x23ef5c: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF00u, 0x23EF58u, 0x23EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF60u;
label_23ef60:
    // 0x23ef60: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_23ef64:
    // 0x23ef64: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23ef64u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23ef68:
    // 0x23ef68: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_23ef6c:
    if (ctx->pc == 0x23EF6Cu) {
        ctx->pc = 0x23EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF68u;
        // 0x23ef6c: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF70u;
        goto label_23ef70;
    }
    ctx->pc = 0x23EF68u;
    {
        const bool branch_taken_0x23ef68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF68u;
        // 0x23ef6c: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef68) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EF70u;
label_23ef70:
    // 0x23ef70: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_23ef74:
    // 0x23ef74: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_23ef78:
    if (ctx->pc == 0x23EF78u) {
        ctx->pc = 0x23EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF74u;
        // 0x23ef78: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF7Cu;
        goto label_23ef7c;
    }
    ctx->pc = 0x23EF74u;
    {
        const bool branch_taken_0x23ef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef74) {
            ctx->pc = 0x23EF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF74u;
            // 0x23ef78: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F010u;
            goto label_23f010;
        }
    }
    ctx->pc = 0x23EF7Cu;
label_23ef7c:
    // 0x23ef7c: 0x92620152  lbu         $v0, 0x152($s3)
    ctx->pc = 0x23ef7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 338)));
label_23ef80:
    // 0x23ef80: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_23ef84:
    if (ctx->pc == 0x23EF84u) {
        ctx->pc = 0x23EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF80u;
        // 0x23ef84: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF88u;
        goto label_23ef88;
    }
    ctx->pc = 0x23EF80u;
    {
        const bool branch_taken_0x23ef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef80) {
            ctx->pc = 0x23EF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF80u;
            // 0x23ef84: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFE4u;
            goto label_23efe4;
        }
    }
    ctx->pc = 0x23EF88u;
label_23ef88:
    // 0x23ef88: 0xc089bfc  jal         func_226FF0
label_23ef8c:
    if (ctx->pc == 0x23EF8Cu) {
        ctx->pc = 0x23EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF88u;
        // 0x23ef8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF90u;
        goto label_23ef90;
    }
    ctx->pc = 0x23EF88u;
    SET_GPR_U32(ctx, 31, 0x23EF90u);
    ctx->pc = 0x23EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF88u;
    // 0x23ef8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x23EF88u, 0x23EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF90u;
label_23ef90:
    // 0x23ef90: 0xc0e57ce  jal         func_395F38
label_23ef94:
    if (ctx->pc == 0x23EF94u) {
        ctx->pc = 0x23EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF90u;
        // 0x23ef94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF98u;
        goto label_23ef98;
    }
    ctx->pc = 0x23EF90u;
    SET_GPR_U32(ctx, 31, 0x23EF98u);
    ctx->pc = 0x23EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF90u;
    // 0x23ef94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x23EF90u, 0x23EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF98u;
label_23ef98:
    // 0x23ef98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23ef9c:
    if (ctx->pc == 0x23EF9Cu) {
        ctx->pc = 0x23EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF98u;
        // 0x23ef9c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFA0u;
        goto label_23efa0;
    }
    ctx->pc = 0x23EF98u;
    {
        const bool branch_taken_0x23ef98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF98u;
        // 0x23ef9c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef98) {
            ctx->pc = 0x23EFC4u;
            goto label_23efc4;
        }
    }
    ctx->pc = 0x23EFA0u;
label_23efa0:
    // 0x23efa0: 0x94450112  lhu         $a1, 0x112($v0)
    ctx->pc = 0x23efa0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_23efa4:
    // 0x23efa4: 0xc0e44cc  jal         func_391330
label_23efa8:
    if (ctx->pc == 0x23EFA8u) {
        ctx->pc = 0x23EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA4u;
        // 0x23efa8: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFACu;
        goto label_23efac;
    }
    ctx->pc = 0x23EFA4u;
    SET_GPR_U32(ctx, 31, 0x23EFACu);
    ctx->pc = 0x23EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFA4u;
    // 0x23efa8: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23EFA4u, 0x23EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFACu;
label_23efac:
    // 0x23efac: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x23efacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_23efb0:
    // 0x23efb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23efb4:
    // 0x23efb4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_23efb8:
    if (ctx->pc == 0x23EFB8u) {
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFBCu;
        goto label_23efbc;
    }
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EFB4u;
            // 0x23efb8: 0x926202d4  lbu         $v0, 0x2D4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EFBCu;
label_23efbc:
    // 0x23efbc: 0xc095fce  jal         func_257F38
label_23efc0:
    if (ctx->pc == 0x23EFC0u) {
        ctx->pc = 0x23EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFBCu;
        // 0x23efc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFC4u;
        goto label_23efc4;
    }
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x23EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFBCu;
    // 0x23efc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x23EFBCu, 0x23EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0x926202d4  lbu         $v0, 0x2D4($s3)
    ctx->pc = 0x23efc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 724)));
label_23efc8:
    // 0x23efc8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_23efcc:
    if (ctx->pc == 0x23EFCCu) {
        ctx->pc = 0x23EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC8u;
        // 0x23efcc: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFD0u;
        goto label_23efd0;
    }
    ctx->pc = 0x23EFC8u;
    {
        const bool branch_taken_0x23efc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC8u;
        // 0x23efcc: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efc8) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EFD0u;
label_23efd0:
    // 0x23efd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23efd4:
    // 0x23efd4: 0xc08f9ba  jal         func_23E6E8
label_23efd8:
    if (ctx->pc == 0x23EFD8u) {
        ctx->pc = 0x23EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFD4u;
        // 0x23efd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFDCu;
        goto label_23efdc;
    }
    ctx->pc = 0x23EFD4u;
    SET_GPR_U32(ctx, 31, 0x23EFDCu);
    ctx->pc = 0x23EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFD4u;
    // 0x23efd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E6E8u, 0x23EFD4u, 0x23EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFDCu;
label_23efdc:
    // 0x23efdc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_23efe0:
    if (ctx->pc == 0x23EFE0u) {
        ctx->pc = 0x23EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFDCu;
        // 0x23efe0: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFE4u;
        goto label_23efe4;
    }
    ctx->pc = 0x23EFDCu;
    {
        const bool branch_taken_0x23efdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFDCu;
        // 0x23efe0: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efdc) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EFE4u;
label_23efe4:
    // 0x23efe4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23efe8:
    if (ctx->pc == 0x23EFE8u) {
        ctx->pc = 0x23EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFE4u;
        // 0x23efe8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFECu;
        goto label_23efec;
    }
    ctx->pc = 0x23EFE4u;
    {
        const bool branch_taken_0x23efe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFE4u;
        // 0x23efe8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efe4) {
            ctx->pc = 0x23EFFCu;
            goto label_23effc;
        }
    }
    ctx->pc = 0x23EFECu;
label_23efec:
    // 0x23efec: 0xc08a05a  jal         func_228168
label_23eff0:
    if (ctx->pc == 0x23EFF0u) {
        ctx->pc = 0x23EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFECu;
        // 0x23eff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFF4u;
        goto label_23eff4;
    }
    ctx->pc = 0x23EFECu;
    SET_GPR_U32(ctx, 31, 0x23EFF4u);
    ctx->pc = 0x23EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFECu;
    // 0x23eff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x23EFECu, 0x23EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFF4u;
label_23eff4:
    // 0x23eff4: 0x14500015  bne         $v0, $s0, . + 4 + (0x15 << 2)
label_23eff8:
    if (ctx->pc == 0x23EFF8u) {
        ctx->pc = 0x23EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFF4u;
        // 0x23eff8: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFFCu;
        goto label_23effc;
    }
    ctx->pc = 0x23EFF4u;
    {
        const bool branch_taken_0x23eff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x23EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFF4u;
        // 0x23eff8: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eff4) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23EFFCu;
label_23effc:
    // 0x23effc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f000:
    // 0x23f000: 0xc08f9ba  jal         func_23E6E8
label_23f004:
    if (ctx->pc == 0x23F004u) {
        ctx->pc = 0x23F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F000u;
        // 0x23f004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F008u;
        goto label_23f008;
    }
    ctx->pc = 0x23F000u;
    SET_GPR_U32(ctx, 31, 0x23F008u);
    ctx->pc = 0x23F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F000u;
    // 0x23f004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E6E8u, 0x23F000u, 0x23F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F008u;
label_23f008:
    // 0x23f008: 0x10000010  b           . + 4 + (0x10 << 2)
label_23f00c:
    if (ctx->pc == 0x23F00Cu) {
        ctx->pc = 0x23F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F008u;
        // 0x23f00c: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F010u;
        goto label_23f010;
    }
    ctx->pc = 0x23F008u;
    {
        const bool branch_taken_0x23f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F008u;
        // 0x23f00c: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f008) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23F010u;
label_23f010:
    // 0x23f010: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23f014:
    if (ctx->pc == 0x23F014u) {
        ctx->pc = 0x23F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F010u;
        // 0x23f014: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F018u;
        goto label_23f018;
    }
    ctx->pc = 0x23F010u;
    {
        const bool branch_taken_0x23f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F010u;
        // 0x23f014: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f010) {
            ctx->pc = 0x23F03Cu;
            goto label_23f03c;
        }
    }
    ctx->pc = 0x23F018u;
label_23f018:
    // 0x23f018: 0xc08a05a  jal         func_228168
label_23f01c:
    if (ctx->pc == 0x23F01Cu) {
        ctx->pc = 0x23F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F018u;
        // 0x23f01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F020u;
        goto label_23f020;
    }
    ctx->pc = 0x23F018u;
    SET_GPR_U32(ctx, 31, 0x23F020u);
    ctx->pc = 0x23F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F018u;
    // 0x23f01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x23F018u, 0x23F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F020u;
label_23f020:
    // 0x23f020: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23f020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f024:
    // 0x23f024: 0x14700009  bne         $v1, $s0, . + 4 + (0x9 << 2)
label_23f028:
    if (ctx->pc == 0x23F028u) {
        ctx->pc = 0x23F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F024u;
        // 0x23f028: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F02Cu;
        goto label_23f02c;
    }
    ctx->pc = 0x23F024u;
    {
        const bool branch_taken_0x23f024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x23F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F024u;
        // 0x23f028: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f024) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23F02Cu;
label_23f02c:
    // 0x23f02c: 0x92620152  lbu         $v0, 0x152($s3)
    ctx->pc = 0x23f02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 338)));
label_23f030:
    // 0x23f030: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23f030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23f034:
    // 0x23f034: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_23f038:
    if (ctx->pc == 0x23F038u) {
        ctx->pc = 0x23F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F034u;
        // 0x23f038: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F03Cu;
        goto label_23f03c;
    }
    ctx->pc = 0x23F034u;
    {
        const bool branch_taken_0x23f034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F034u;
        // 0x23f038: 0x97a2007c  lhu         $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f034) {
            ctx->pc = 0x23F04Cu;
            goto label_23f04c;
        }
    }
    ctx->pc = 0x23F03Cu;
label_23f03c:
    // 0x23f03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f040:
    // 0x23f040: 0xc08f9ba  jal         func_23E6E8
label_23f044:
    if (ctx->pc == 0x23F044u) {
        ctx->pc = 0x23F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F040u;
        // 0x23f044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F048u;
        goto label_23f048;
    }
    ctx->pc = 0x23F040u;
    SET_GPR_U32(ctx, 31, 0x23F048u);
    ctx->pc = 0x23F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F040u;
    // 0x23f044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E6E8u, 0x23F040u, 0x23F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F048u;
label_23f048:
    // 0x23f048: 0x97a2007c  lhu         $v0, 0x7C($sp)
    ctx->pc = 0x23f048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
label_23f04c:
    // 0x23f04c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23f04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23f050:
    // 0x23f050: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23f054:
    if (ctx->pc == 0x23F054u) {
        ctx->pc = 0x23F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F050u;
        // 0x23f054: 0x922205b7  lbu         $v0, 0x5B7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1463)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F058u;
        goto label_23f058;
    }
    ctx->pc = 0x23F050u;
    {
        const bool branch_taken_0x23f050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F050u;
        // 0x23f054: 0x922205b7  lbu         $v0, 0x5B7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1463)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f050) {
            ctx->pc = 0x23F074u;
            goto label_23f074;
        }
    }
    ctx->pc = 0x23F058u;
label_23f058:
    // 0x23f058: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_23f05c:
    if (ctx->pc == 0x23F05Cu) {
        ctx->pc = 0x23F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F058u;
        // 0x23f05c: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F060u;
        goto label_23f060;
    }
    ctx->pc = 0x23F058u;
    {
        const bool branch_taken_0x23f058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F058u;
        // 0x23f05c: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f058) {
            ctx->pc = 0x23F088u;
            goto label_23f088;
        }
    }
    ctx->pc = 0x23F060u;
label_23f060:
    // 0x23f060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f064:
    // 0x23f064: 0xc086578  jal         func_2195E0
label_23f068:
    if (ctx->pc == 0x23F068u) {
        ctx->pc = 0x23F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F064u;
        // 0x23f068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F06Cu;
        goto label_23f06c;
    }
    ctx->pc = 0x23F064u;
    SET_GPR_U32(ctx, 31, 0x23F06Cu);
    ctx->pc = 0x23F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F064u;
    // 0x23f068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2195E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2195E0u, 0x23F064u, 0x23F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F06Cu;
label_23f06c:
    // 0x23f06c: 0x10000006  b           . + 4 + (0x6 << 2)
label_23f070:
    if (ctx->pc == 0x23F070u) {
        ctx->pc = 0x23F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F06Cu;
        // 0x23f070: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F074u;
        goto label_23f074;
    }
    ctx->pc = 0x23F06Cu;
    {
        const bool branch_taken_0x23f06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F06Cu;
        // 0x23f070: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f06c) {
            ctx->pc = 0x23F088u;
            goto label_23f088;
        }
    }
    ctx->pc = 0x23F074u;
label_23f074:
    // 0x23f074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23f078:
    if (ctx->pc == 0x23F078u) {
        ctx->pc = 0x23F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F074u;
        // 0x23f078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F07Cu;
        goto label_23f07c;
    }
    ctx->pc = 0x23F074u;
    {
        const bool branch_taken_0x23f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F074u;
        // 0x23f078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f074) {
            ctx->pc = 0x23F084u;
            goto label_23f084;
        }
    }
    ctx->pc = 0x23F07Cu;
label_23f07c:
    // 0x23f07c: 0xc086578  jal         func_2195E0
label_23f080:
    if (ctx->pc == 0x23F080u) {
        ctx->pc = 0x23F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F07Cu;
        // 0x23f080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F084u;
        goto label_23f084;
    }
    ctx->pc = 0x23F07Cu;
    SET_GPR_U32(ctx, 31, 0x23F084u);
    ctx->pc = 0x23F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F07Cu;
    // 0x23f080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2195E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2195E0u, 0x23F07Cu, 0x23F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F084u;
label_23f084:
    // 0x23f084: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_23f088:
    // 0x23f088: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x23f088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_23f08c:
    // 0x23f08c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x23f08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_23f090:
    // 0x23f090: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x23f090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23f094:
    // 0x23f094: 0x1440fef6  bnez        $v0, . + 4 + (-0x10A << 2)
label_23f098:
    if (ctx->pc == 0x23F098u) {
        ctx->pc = 0x23F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F094u;
        // 0x23f098: 0x8ea2489c  lw          $v0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F09Cu;
        goto label_23f09c;
    }
    ctx->pc = 0x23F094u;
    {
        const bool branch_taken_0x23f094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F094u;
        // 0x23f098: 0x8ea2489c  lw          $v0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f094) {
            ctx->pc = 0x23EC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ec70;
        }
    }
    ctx->pc = 0x23F09Cu;
label_23f09c:
    // 0x23f09c: 0x10000021  b           . + 4 + (0x21 << 2)
label_23f0a0:
    if (ctx->pc == 0x23F0A0u) {
        ctx->pc = 0x23F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F09Cu;
        // 0x23f0a0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0A4u;
        goto label_23f0a4;
    }
    ctx->pc = 0x23F09Cu;
    {
        const bool branch_taken_0x23f09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F09Cu;
        // 0x23f0a0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f09c) {
            ctx->pc = 0x23F124u;
            goto label_23f124;
        }
    }
    ctx->pc = 0x23F0A4u;
label_23f0a4:
    // 0x23f0a4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_23f0a8:
    if (ctx->pc == 0x23F0A8u) {
        ctx->pc = 0x23F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0A4u;
        // 0x23f0a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0ACu;
        goto label_23f0ac;
    }
    ctx->pc = 0x23F0A4u;
    {
        const bool branch_taken_0x23f0a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0A4u;
        // 0x23f0a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0a4) {
            ctx->pc = 0x23F0B4u;
            goto label_23f0b4;
        }
    }
    ctx->pc = 0x23F0ACu;
label_23f0ac:
    // 0x23f0ac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23f0b0:
    if (ctx->pc == 0x23F0B0u) {
        ctx->pc = 0x23F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0ACu;
        // 0x23f0b0: 0xae2201d8  sw          $v0, 0x1D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0B4u;
        goto label_23f0b4;
    }
    ctx->pc = 0x23F0ACu;
    {
        const bool branch_taken_0x23f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0ACu;
        // 0x23f0b0: 0xae2201d8  sw          $v0, 0x1D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0ac) {
            ctx->pc = 0x23F120u;
            goto label_23f120;
        }
    }
    ctx->pc = 0x23F0B4u;
label_23f0b4:
    // 0x23f0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f0b8:
    // 0x23f0b8: 0xc089998  jal         func_226660
label_23f0bc:
    if (ctx->pc == 0x23F0BCu) {
        ctx->pc = 0x23F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0B8u;
        // 0x23f0bc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0C0u;
        goto label_23f0c0;
    }
    ctx->pc = 0x23F0B8u;
    SET_GPR_U32(ctx, 31, 0x23F0C0u);
    ctx->pc = 0x23F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0B8u;
    // 0x23f0bc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x23F0B8u, 0x23F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0C0u;
label_23f0c0:
    // 0x23f0c0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_23f0c4:
    if (ctx->pc == 0x23F0C4u) {
        ctx->pc = 0x23F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0C0u;
        // 0x23f0c4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0C8u;
        goto label_23f0c8;
    }
    ctx->pc = 0x23F0C0u;
    {
        const bool branch_taken_0x23f0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0C0u;
        // 0x23f0c4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0c0) {
            ctx->pc = 0x23F124u;
            goto label_23f124;
        }
    }
    ctx->pc = 0x23F0C8u;
label_23f0c8:
    // 0x23f0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f0cc:
    // 0x23f0cc: 0xc0874fa  jal         func_21D3E8
label_23f0d0:
    if (ctx->pc == 0x23F0D0u) {
        ctx->pc = 0x23F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0CCu;
        // 0x23f0d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0D4u;
        goto label_23f0d4;
    }
    ctx->pc = 0x23F0CCu;
    SET_GPR_U32(ctx, 31, 0x23F0D4u);
    ctx->pc = 0x23F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0CCu;
    // 0x23f0d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x23F0CCu, 0x23F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0D4u;
label_23f0d4:
    // 0x23f0d4: 0xc051fbe  jal         func_147EF8
label_23f0d8:
    if (ctx->pc == 0x23F0D8u) {
        ctx->pc = 0x23F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0D4u;
        // 0x23f0d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0DCu;
        goto label_23f0dc;
    }
    ctx->pc = 0x23F0D4u;
    SET_GPR_U32(ctx, 31, 0x23F0DCu);
    ctx->pc = 0x23F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0D4u;
    // 0x23f0d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x23F0D4u, 0x23F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0DCu;
label_23f0dc:
    // 0x23f0dc: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x23f0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_23f0e0:
    // 0x23f0e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23f0e4:
    if (ctx->pc == 0x23F0E4u) {
        ctx->pc = 0x23F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E0u;
        // 0x23f0e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0E8u;
        goto label_23f0e8;
    }
    ctx->pc = 0x23F0E0u;
    {
        const bool branch_taken_0x23f0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f0e0) {
            ctx->pc = 0x23F0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F0E0u;
            // 0x23f0e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F104u;
            goto label_23f104;
        }
    }
    ctx->pc = 0x23F0E8u;
label_23f0e8:
    // 0x23f0e8: 0xc0874fa  jal         func_21D3E8
label_23f0ec:
    if (ctx->pc == 0x23F0ECu) {
        ctx->pc = 0x23F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E8u;
        // 0x23f0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0F0u;
        goto label_23f0f0;
    }
    ctx->pc = 0x23F0E8u;
    SET_GPR_U32(ctx, 31, 0x23F0F0u);
    ctx->pc = 0x23F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0E8u;
    // 0x23f0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x23F0E8u, 0x23F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0F0u;
label_23f0f0:
    // 0x23f0f0: 0xc051fbe  jal         func_147EF8
label_23f0f4:
    if (ctx->pc == 0x23F0F4u) {
        ctx->pc = 0x23F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0F0u;
        // 0x23f0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0F8u;
        goto label_23f0f8;
    }
    ctx->pc = 0x23F0F0u;
    SET_GPR_U32(ctx, 31, 0x23F0F8u);
    ctx->pc = 0x23F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0F0u;
    // 0x23f0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x23F0F0u, 0x23F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0F8u;
label_23f0f8:
    // 0x23f0f8: 0x38420035  xori        $v0, $v0, 0x35
    ctx->pc = 0x23f0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)53);
label_23f0fc:
    // 0x23f0fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23f100:
    if (ctx->pc == 0x23F100u) {
        ctx->pc = 0x23F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0FCu;
        // 0x23f100: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F104u;
        goto label_23f104;
    }
    ctx->pc = 0x23F0FCu;
    {
        const bool branch_taken_0x23f0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f0fc) {
            ctx->pc = 0x23F100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F0FCu;
            // 0x23f100: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F104u;
            goto label_23f104;
        }
    }
    ctx->pc = 0x23F104u;
label_23f104:
    // 0x23f104: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_23f108:
    if (ctx->pc == 0x23F108u) {
        ctx->pc = 0x23F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F104u;
        // 0x23f108: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F10Cu;
        goto label_23f10c;
    }
    ctx->pc = 0x23F104u;
    {
        const bool branch_taken_0x23f104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F104u;
        // 0x23f108: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f104) {
            ctx->pc = 0x23F124u;
            goto label_23f124;
        }
    }
    ctx->pc = 0x23F10Cu;
label_23f10c:
    // 0x23f10c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23f110:
    // 0x23f110: 0x84440150  lh          $a0, 0x150($v0)
    ctx->pc = 0x23f110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 336)));
label_23f114:
    // 0x23f114: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x23f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_23f118:
    // 0x23f118: 0x60f809  jalr        $v1
label_23f11c:
    if (ctx->pc == 0x23F11Cu) {
        ctx->pc = 0x23F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F118u;
        // 0x23f11c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F120u;
        goto label_23f120;
    }
    ctx->pc = 0x23F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23F120u);
        ctx->pc = 0x23F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F118u;
        // 0x23f11c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F118u, 0x23F120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F120u;
label_23f120:
    // 0x23f120: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x23f120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_23f124:
    // 0x23f124: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x23f124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_23f128:
    // 0x23f128: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x23f128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_23f12c:
    // 0x23f12c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x23f12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_23f130:
    // 0x23f130: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x23f130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_23f134:
    // 0x23f134: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x23f134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_23f138:
    // 0x23f138: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x23f138u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_23f13c:
    // 0x23f13c: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x23f13cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_23f140:
    // 0x23f140: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x23f140u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_23f144:
    // 0x23f144: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x23f144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23f148:
    // 0x23f148: 0x3e00008  jr          $ra
label_23f14c:
    if (ctx->pc == 0x23F14Cu) {
        ctx->pc = 0x23F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F148u;
        // 0x23f14c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F150u;
        goto label_fallthrough_0x23f148;
    }
    ctx->pc = 0x23F148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F148u;
        // 0x23f14c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23f148:
    ctx->pc = 0x23F150u;
}
