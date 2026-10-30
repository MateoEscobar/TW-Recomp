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

// Function: sub_0043EA18
// Address: 0x43ea18 - 0x43f730
void sub_0043EA18_0x43ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043EA18_0x43ea18");
#endif

    switch (ctx->pc) {
        case 0x43ea18u: goto label_43ea18;
        case 0x43ea1cu: goto label_43ea1c;
        case 0x43ea20u: goto label_43ea20;
        case 0x43ea24u: goto label_43ea24;
        case 0x43ea28u: goto label_43ea28;
        case 0x43ea2cu: goto label_43ea2c;
        case 0x43ea30u: goto label_43ea30;
        case 0x43ea34u: goto label_43ea34;
        case 0x43ea38u: goto label_43ea38;
        case 0x43ea3cu: goto label_43ea3c;
        case 0x43ea40u: goto label_43ea40;
        case 0x43ea44u: goto label_43ea44;
        case 0x43ea48u: goto label_43ea48;
        case 0x43ea4cu: goto label_43ea4c;
        case 0x43ea50u: goto label_43ea50;
        case 0x43ea54u: goto label_43ea54;
        case 0x43ea58u: goto label_43ea58;
        case 0x43ea5cu: goto label_43ea5c;
        case 0x43ea60u: goto label_43ea60;
        case 0x43ea64u: goto label_43ea64;
        case 0x43ea68u: goto label_43ea68;
        case 0x43ea6cu: goto label_43ea6c;
        case 0x43ea70u: goto label_43ea70;
        case 0x43ea74u: goto label_43ea74;
        case 0x43ea78u: goto label_43ea78;
        case 0x43ea7cu: goto label_43ea7c;
        case 0x43ea80u: goto label_43ea80;
        case 0x43ea84u: goto label_43ea84;
        case 0x43ea88u: goto label_43ea88;
        case 0x43ea8cu: goto label_43ea8c;
        case 0x43ea90u: goto label_43ea90;
        case 0x43ea94u: goto label_43ea94;
        case 0x43ea98u: goto label_43ea98;
        case 0x43ea9cu: goto label_43ea9c;
        case 0x43eaa0u: goto label_43eaa0;
        case 0x43eaa4u: goto label_43eaa4;
        case 0x43eaa8u: goto label_43eaa8;
        case 0x43eaacu: goto label_43eaac;
        case 0x43eab0u: goto label_43eab0;
        case 0x43eab4u: goto label_43eab4;
        case 0x43eab8u: goto label_43eab8;
        case 0x43eabcu: goto label_43eabc;
        case 0x43eac0u: goto label_43eac0;
        case 0x43eac4u: goto label_43eac4;
        case 0x43eac8u: goto label_43eac8;
        case 0x43eaccu: goto label_43eacc;
        case 0x43ead0u: goto label_43ead0;
        case 0x43ead4u: goto label_43ead4;
        case 0x43ead8u: goto label_43ead8;
        case 0x43eadcu: goto label_43eadc;
        case 0x43eae0u: goto label_43eae0;
        case 0x43eae4u: goto label_43eae4;
        case 0x43eae8u: goto label_43eae8;
        case 0x43eaecu: goto label_43eaec;
        case 0x43eaf0u: goto label_43eaf0;
        case 0x43eaf4u: goto label_43eaf4;
        case 0x43eaf8u: goto label_43eaf8;
        case 0x43eafcu: goto label_43eafc;
        case 0x43eb00u: goto label_43eb00;
        case 0x43eb04u: goto label_43eb04;
        case 0x43eb08u: goto label_43eb08;
        case 0x43eb0cu: goto label_43eb0c;
        case 0x43eb10u: goto label_43eb10;
        case 0x43eb14u: goto label_43eb14;
        case 0x43eb18u: goto label_43eb18;
        case 0x43eb1cu: goto label_43eb1c;
        case 0x43eb20u: goto label_43eb20;
        case 0x43eb24u: goto label_43eb24;
        case 0x43eb28u: goto label_43eb28;
        case 0x43eb2cu: goto label_43eb2c;
        case 0x43eb30u: goto label_43eb30;
        case 0x43eb34u: goto label_43eb34;
        case 0x43eb38u: goto label_43eb38;
        case 0x43eb3cu: goto label_43eb3c;
        case 0x43eb40u: goto label_43eb40;
        case 0x43eb44u: goto label_43eb44;
        case 0x43eb48u: goto label_43eb48;
        case 0x43eb4cu: goto label_43eb4c;
        case 0x43eb50u: goto label_43eb50;
        case 0x43eb54u: goto label_43eb54;
        case 0x43eb58u: goto label_43eb58;
        case 0x43eb5cu: goto label_43eb5c;
        case 0x43eb60u: goto label_43eb60;
        case 0x43eb64u: goto label_43eb64;
        case 0x43eb68u: goto label_43eb68;
        case 0x43eb6cu: goto label_43eb6c;
        case 0x43eb70u: goto label_43eb70;
        case 0x43eb74u: goto label_43eb74;
        case 0x43eb78u: goto label_43eb78;
        case 0x43eb7cu: goto label_43eb7c;
        case 0x43eb80u: goto label_43eb80;
        case 0x43eb84u: goto label_43eb84;
        case 0x43eb88u: goto label_43eb88;
        case 0x43eb8cu: goto label_43eb8c;
        case 0x43eb90u: goto label_43eb90;
        case 0x43eb94u: goto label_43eb94;
        case 0x43eb98u: goto label_43eb98;
        case 0x43eb9cu: goto label_43eb9c;
        case 0x43eba0u: goto label_43eba0;
        case 0x43eba4u: goto label_43eba4;
        case 0x43eba8u: goto label_43eba8;
        case 0x43ebacu: goto label_43ebac;
        case 0x43ebb0u: goto label_43ebb0;
        case 0x43ebb4u: goto label_43ebb4;
        case 0x43ebb8u: goto label_43ebb8;
        case 0x43ebbcu: goto label_43ebbc;
        case 0x43ebc0u: goto label_43ebc0;
        case 0x43ebc4u: goto label_43ebc4;
        case 0x43ebc8u: goto label_43ebc8;
        case 0x43ebccu: goto label_43ebcc;
        case 0x43ebd0u: goto label_43ebd0;
        case 0x43ebd4u: goto label_43ebd4;
        case 0x43ebd8u: goto label_43ebd8;
        case 0x43ebdcu: goto label_43ebdc;
        case 0x43ebe0u: goto label_43ebe0;
        case 0x43ebe4u: goto label_43ebe4;
        case 0x43ebe8u: goto label_43ebe8;
        case 0x43ebecu: goto label_43ebec;
        case 0x43ebf0u: goto label_43ebf0;
        case 0x43ebf4u: goto label_43ebf4;
        case 0x43ebf8u: goto label_43ebf8;
        case 0x43ebfcu: goto label_43ebfc;
        case 0x43ec00u: goto label_43ec00;
        case 0x43ec04u: goto label_43ec04;
        case 0x43ec08u: goto label_43ec08;
        case 0x43ec0cu: goto label_43ec0c;
        case 0x43ec10u: goto label_43ec10;
        case 0x43ec14u: goto label_43ec14;
        case 0x43ec18u: goto label_43ec18;
        case 0x43ec1cu: goto label_43ec1c;
        case 0x43ec20u: goto label_43ec20;
        case 0x43ec24u: goto label_43ec24;
        case 0x43ec28u: goto label_43ec28;
        case 0x43ec2cu: goto label_43ec2c;
        case 0x43ec30u: goto label_43ec30;
        case 0x43ec34u: goto label_43ec34;
        case 0x43ec38u: goto label_43ec38;
        case 0x43ec3cu: goto label_43ec3c;
        case 0x43ec40u: goto label_43ec40;
        case 0x43ec44u: goto label_43ec44;
        case 0x43ec48u: goto label_43ec48;
        case 0x43ec4cu: goto label_43ec4c;
        case 0x43ec50u: goto label_43ec50;
        case 0x43ec54u: goto label_43ec54;
        case 0x43ec58u: goto label_43ec58;
        case 0x43ec5cu: goto label_43ec5c;
        case 0x43ec60u: goto label_43ec60;
        case 0x43ec64u: goto label_43ec64;
        case 0x43ec68u: goto label_43ec68;
        case 0x43ec6cu: goto label_43ec6c;
        case 0x43ec70u: goto label_43ec70;
        case 0x43ec74u: goto label_43ec74;
        case 0x43ec78u: goto label_43ec78;
        case 0x43ec7cu: goto label_43ec7c;
        case 0x43ec80u: goto label_43ec80;
        case 0x43ec84u: goto label_43ec84;
        case 0x43ec88u: goto label_43ec88;
        case 0x43ec8cu: goto label_43ec8c;
        case 0x43ec90u: goto label_43ec90;
        case 0x43ec94u: goto label_43ec94;
        case 0x43ec98u: goto label_43ec98;
        case 0x43ec9cu: goto label_43ec9c;
        case 0x43eca0u: goto label_43eca0;
        case 0x43eca4u: goto label_43eca4;
        case 0x43eca8u: goto label_43eca8;
        case 0x43ecacu: goto label_43ecac;
        case 0x43ecb0u: goto label_43ecb0;
        case 0x43ecb4u: goto label_43ecb4;
        case 0x43ecb8u: goto label_43ecb8;
        case 0x43ecbcu: goto label_43ecbc;
        case 0x43ecc0u: goto label_43ecc0;
        case 0x43ecc4u: goto label_43ecc4;
        case 0x43ecc8u: goto label_43ecc8;
        case 0x43ecccu: goto label_43eccc;
        case 0x43ecd0u: goto label_43ecd0;
        case 0x43ecd4u: goto label_43ecd4;
        case 0x43ecd8u: goto label_43ecd8;
        case 0x43ecdcu: goto label_43ecdc;
        case 0x43ece0u: goto label_43ece0;
        case 0x43ece4u: goto label_43ece4;
        case 0x43ece8u: goto label_43ece8;
        case 0x43ececu: goto label_43ecec;
        case 0x43ecf0u: goto label_43ecf0;
        case 0x43ecf4u: goto label_43ecf4;
        case 0x43ecf8u: goto label_43ecf8;
        case 0x43ecfcu: goto label_43ecfc;
        case 0x43ed00u: goto label_43ed00;
        case 0x43ed04u: goto label_43ed04;
        case 0x43ed08u: goto label_43ed08;
        case 0x43ed0cu: goto label_43ed0c;
        case 0x43ed10u: goto label_43ed10;
        case 0x43ed14u: goto label_43ed14;
        case 0x43ed18u: goto label_43ed18;
        case 0x43ed1cu: goto label_43ed1c;
        case 0x43ed20u: goto label_43ed20;
        case 0x43ed24u: goto label_43ed24;
        case 0x43ed28u: goto label_43ed28;
        case 0x43ed2cu: goto label_43ed2c;
        case 0x43ed30u: goto label_43ed30;
        case 0x43ed34u: goto label_43ed34;
        case 0x43ed38u: goto label_43ed38;
        case 0x43ed3cu: goto label_43ed3c;
        case 0x43ed40u: goto label_43ed40;
        case 0x43ed44u: goto label_43ed44;
        case 0x43ed48u: goto label_43ed48;
        case 0x43ed4cu: goto label_43ed4c;
        case 0x43ed50u: goto label_43ed50;
        case 0x43ed54u: goto label_43ed54;
        case 0x43ed58u: goto label_43ed58;
        case 0x43ed5cu: goto label_43ed5c;
        case 0x43ed60u: goto label_43ed60;
        case 0x43ed64u: goto label_43ed64;
        case 0x43ed68u: goto label_43ed68;
        case 0x43ed6cu: goto label_43ed6c;
        case 0x43ed70u: goto label_43ed70;
        case 0x43ed74u: goto label_43ed74;
        case 0x43ed78u: goto label_43ed78;
        case 0x43ed7cu: goto label_43ed7c;
        case 0x43ed80u: goto label_43ed80;
        case 0x43ed84u: goto label_43ed84;
        case 0x43ed88u: goto label_43ed88;
        case 0x43ed8cu: goto label_43ed8c;
        case 0x43ed90u: goto label_43ed90;
        case 0x43ed94u: goto label_43ed94;
        case 0x43ed98u: goto label_43ed98;
        case 0x43ed9cu: goto label_43ed9c;
        case 0x43eda0u: goto label_43eda0;
        case 0x43eda4u: goto label_43eda4;
        case 0x43eda8u: goto label_43eda8;
        case 0x43edacu: goto label_43edac;
        case 0x43edb0u: goto label_43edb0;
        case 0x43edb4u: goto label_43edb4;
        case 0x43edb8u: goto label_43edb8;
        case 0x43edbcu: goto label_43edbc;
        case 0x43edc0u: goto label_43edc0;
        case 0x43edc4u: goto label_43edc4;
        case 0x43edc8u: goto label_43edc8;
        case 0x43edccu: goto label_43edcc;
        case 0x43edd0u: goto label_43edd0;
        case 0x43edd4u: goto label_43edd4;
        case 0x43edd8u: goto label_43edd8;
        case 0x43eddcu: goto label_43eddc;
        case 0x43ede0u: goto label_43ede0;
        case 0x43ede4u: goto label_43ede4;
        case 0x43ede8u: goto label_43ede8;
        case 0x43edecu: goto label_43edec;
        case 0x43edf0u: goto label_43edf0;
        case 0x43edf4u: goto label_43edf4;
        case 0x43edf8u: goto label_43edf8;
        case 0x43edfcu: goto label_43edfc;
        case 0x43ee00u: goto label_43ee00;
        case 0x43ee04u: goto label_43ee04;
        case 0x43ee08u: goto label_43ee08;
        case 0x43ee0cu: goto label_43ee0c;
        case 0x43ee10u: goto label_43ee10;
        case 0x43ee14u: goto label_43ee14;
        case 0x43ee18u: goto label_43ee18;
        case 0x43ee1cu: goto label_43ee1c;
        case 0x43ee20u: goto label_43ee20;
        case 0x43ee24u: goto label_43ee24;
        case 0x43ee28u: goto label_43ee28;
        case 0x43ee2cu: goto label_43ee2c;
        case 0x43ee30u: goto label_43ee30;
        case 0x43ee34u: goto label_43ee34;
        case 0x43ee38u: goto label_43ee38;
        case 0x43ee3cu: goto label_43ee3c;
        case 0x43ee40u: goto label_43ee40;
        case 0x43ee44u: goto label_43ee44;
        case 0x43ee48u: goto label_43ee48;
        case 0x43ee4cu: goto label_43ee4c;
        case 0x43ee50u: goto label_43ee50;
        case 0x43ee54u: goto label_43ee54;
        case 0x43ee58u: goto label_43ee58;
        case 0x43ee5cu: goto label_43ee5c;
        case 0x43ee60u: goto label_43ee60;
        case 0x43ee64u: goto label_43ee64;
        case 0x43ee68u: goto label_43ee68;
        case 0x43ee6cu: goto label_43ee6c;
        case 0x43ee70u: goto label_43ee70;
        case 0x43ee74u: goto label_43ee74;
        case 0x43ee78u: goto label_43ee78;
        case 0x43ee7cu: goto label_43ee7c;
        case 0x43ee80u: goto label_43ee80;
        case 0x43ee84u: goto label_43ee84;
        case 0x43ee88u: goto label_43ee88;
        case 0x43ee8cu: goto label_43ee8c;
        case 0x43ee90u: goto label_43ee90;
        case 0x43ee94u: goto label_43ee94;
        case 0x43ee98u: goto label_43ee98;
        case 0x43ee9cu: goto label_43ee9c;
        case 0x43eea0u: goto label_43eea0;
        case 0x43eea4u: goto label_43eea4;
        case 0x43eea8u: goto label_43eea8;
        case 0x43eeacu: goto label_43eeac;
        case 0x43eeb0u: goto label_43eeb0;
        case 0x43eeb4u: goto label_43eeb4;
        case 0x43eeb8u: goto label_43eeb8;
        case 0x43eebcu: goto label_43eebc;
        case 0x43eec0u: goto label_43eec0;
        case 0x43eec4u: goto label_43eec4;
        case 0x43eec8u: goto label_43eec8;
        case 0x43eeccu: goto label_43eecc;
        case 0x43eed0u: goto label_43eed0;
        case 0x43eed4u: goto label_43eed4;
        case 0x43eed8u: goto label_43eed8;
        case 0x43eedcu: goto label_43eedc;
        case 0x43eee0u: goto label_43eee0;
        case 0x43eee4u: goto label_43eee4;
        case 0x43eee8u: goto label_43eee8;
        case 0x43eeecu: goto label_43eeec;
        case 0x43eef0u: goto label_43eef0;
        case 0x43eef4u: goto label_43eef4;
        case 0x43eef8u: goto label_43eef8;
        case 0x43eefcu: goto label_43eefc;
        case 0x43ef00u: goto label_43ef00;
        case 0x43ef04u: goto label_43ef04;
        case 0x43ef08u: goto label_43ef08;
        case 0x43ef0cu: goto label_43ef0c;
        case 0x43ef10u: goto label_43ef10;
        case 0x43ef14u: goto label_43ef14;
        case 0x43ef18u: goto label_43ef18;
        case 0x43ef1cu: goto label_43ef1c;
        case 0x43ef20u: goto label_43ef20;
        case 0x43ef24u: goto label_43ef24;
        case 0x43ef28u: goto label_43ef28;
        case 0x43ef2cu: goto label_43ef2c;
        case 0x43ef30u: goto label_43ef30;
        case 0x43ef34u: goto label_43ef34;
        case 0x43ef38u: goto label_43ef38;
        case 0x43ef3cu: goto label_43ef3c;
        case 0x43ef40u: goto label_43ef40;
        case 0x43ef44u: goto label_43ef44;
        case 0x43ef48u: goto label_43ef48;
        case 0x43ef4cu: goto label_43ef4c;
        case 0x43ef50u: goto label_43ef50;
        case 0x43ef54u: goto label_43ef54;
        case 0x43ef58u: goto label_43ef58;
        case 0x43ef5cu: goto label_43ef5c;
        case 0x43ef60u: goto label_43ef60;
        case 0x43ef64u: goto label_43ef64;
        case 0x43ef68u: goto label_43ef68;
        case 0x43ef6cu: goto label_43ef6c;
        case 0x43ef70u: goto label_43ef70;
        case 0x43ef74u: goto label_43ef74;
        case 0x43ef78u: goto label_43ef78;
        case 0x43ef7cu: goto label_43ef7c;
        case 0x43ef80u: goto label_43ef80;
        case 0x43ef84u: goto label_43ef84;
        case 0x43ef88u: goto label_43ef88;
        case 0x43ef8cu: goto label_43ef8c;
        case 0x43ef90u: goto label_43ef90;
        case 0x43ef94u: goto label_43ef94;
        case 0x43ef98u: goto label_43ef98;
        case 0x43ef9cu: goto label_43ef9c;
        case 0x43efa0u: goto label_43efa0;
        case 0x43efa4u: goto label_43efa4;
        case 0x43efa8u: goto label_43efa8;
        case 0x43efacu: goto label_43efac;
        case 0x43efb0u: goto label_43efb0;
        case 0x43efb4u: goto label_43efb4;
        case 0x43efb8u: goto label_43efb8;
        case 0x43efbcu: goto label_43efbc;
        case 0x43efc0u: goto label_43efc0;
        case 0x43efc4u: goto label_43efc4;
        case 0x43efc8u: goto label_43efc8;
        case 0x43efccu: goto label_43efcc;
        case 0x43efd0u: goto label_43efd0;
        case 0x43efd4u: goto label_43efd4;
        case 0x43efd8u: goto label_43efd8;
        case 0x43efdcu: goto label_43efdc;
        case 0x43efe0u: goto label_43efe0;
        case 0x43efe4u: goto label_43efe4;
        case 0x43efe8u: goto label_43efe8;
        case 0x43efecu: goto label_43efec;
        case 0x43eff0u: goto label_43eff0;
        case 0x43eff4u: goto label_43eff4;
        case 0x43eff8u: goto label_43eff8;
        case 0x43effcu: goto label_43effc;
        case 0x43f000u: goto label_43f000;
        case 0x43f004u: goto label_43f004;
        case 0x43f008u: goto label_43f008;
        case 0x43f00cu: goto label_43f00c;
        case 0x43f010u: goto label_43f010;
        case 0x43f014u: goto label_43f014;
        case 0x43f018u: goto label_43f018;
        case 0x43f01cu: goto label_43f01c;
        case 0x43f020u: goto label_43f020;
        case 0x43f024u: goto label_43f024;
        case 0x43f028u: goto label_43f028;
        case 0x43f02cu: goto label_43f02c;
        case 0x43f030u: goto label_43f030;
        case 0x43f034u: goto label_43f034;
        case 0x43f038u: goto label_43f038;
        case 0x43f03cu: goto label_43f03c;
        case 0x43f040u: goto label_43f040;
        case 0x43f044u: goto label_43f044;
        case 0x43f048u: goto label_43f048;
        case 0x43f04cu: goto label_43f04c;
        case 0x43f050u: goto label_43f050;
        case 0x43f054u: goto label_43f054;
        case 0x43f058u: goto label_43f058;
        case 0x43f05cu: goto label_43f05c;
        case 0x43f060u: goto label_43f060;
        case 0x43f064u: goto label_43f064;
        case 0x43f068u: goto label_43f068;
        case 0x43f06cu: goto label_43f06c;
        case 0x43f070u: goto label_43f070;
        case 0x43f074u: goto label_43f074;
        case 0x43f078u: goto label_43f078;
        case 0x43f07cu: goto label_43f07c;
        case 0x43f080u: goto label_43f080;
        case 0x43f084u: goto label_43f084;
        case 0x43f088u: goto label_43f088;
        case 0x43f08cu: goto label_43f08c;
        case 0x43f090u: goto label_43f090;
        case 0x43f094u: goto label_43f094;
        case 0x43f098u: goto label_43f098;
        case 0x43f09cu: goto label_43f09c;
        case 0x43f0a0u: goto label_43f0a0;
        case 0x43f0a4u: goto label_43f0a4;
        case 0x43f0a8u: goto label_43f0a8;
        case 0x43f0acu: goto label_43f0ac;
        case 0x43f0b0u: goto label_43f0b0;
        case 0x43f0b4u: goto label_43f0b4;
        case 0x43f0b8u: goto label_43f0b8;
        case 0x43f0bcu: goto label_43f0bc;
        case 0x43f0c0u: goto label_43f0c0;
        case 0x43f0c4u: goto label_43f0c4;
        case 0x43f0c8u: goto label_43f0c8;
        case 0x43f0ccu: goto label_43f0cc;
        case 0x43f0d0u: goto label_43f0d0;
        case 0x43f0d4u: goto label_43f0d4;
        case 0x43f0d8u: goto label_43f0d8;
        case 0x43f0dcu: goto label_43f0dc;
        case 0x43f0e0u: goto label_43f0e0;
        case 0x43f0e4u: goto label_43f0e4;
        case 0x43f0e8u: goto label_43f0e8;
        case 0x43f0ecu: goto label_43f0ec;
        case 0x43f0f0u: goto label_43f0f0;
        case 0x43f0f4u: goto label_43f0f4;
        case 0x43f0f8u: goto label_43f0f8;
        case 0x43f0fcu: goto label_43f0fc;
        case 0x43f100u: goto label_43f100;
        case 0x43f104u: goto label_43f104;
        case 0x43f108u: goto label_43f108;
        case 0x43f10cu: goto label_43f10c;
        case 0x43f110u: goto label_43f110;
        case 0x43f114u: goto label_43f114;
        case 0x43f118u: goto label_43f118;
        case 0x43f11cu: goto label_43f11c;
        case 0x43f120u: goto label_43f120;
        case 0x43f124u: goto label_43f124;
        case 0x43f128u: goto label_43f128;
        case 0x43f12cu: goto label_43f12c;
        case 0x43f130u: goto label_43f130;
        case 0x43f134u: goto label_43f134;
        case 0x43f138u: goto label_43f138;
        case 0x43f13cu: goto label_43f13c;
        case 0x43f140u: goto label_43f140;
        case 0x43f144u: goto label_43f144;
        case 0x43f148u: goto label_43f148;
        case 0x43f14cu: goto label_43f14c;
        case 0x43f150u: goto label_43f150;
        case 0x43f154u: goto label_43f154;
        case 0x43f158u: goto label_43f158;
        case 0x43f15cu: goto label_43f15c;
        case 0x43f160u: goto label_43f160;
        case 0x43f164u: goto label_43f164;
        case 0x43f168u: goto label_43f168;
        case 0x43f16cu: goto label_43f16c;
        case 0x43f170u: goto label_43f170;
        case 0x43f174u: goto label_43f174;
        case 0x43f178u: goto label_43f178;
        case 0x43f17cu: goto label_43f17c;
        case 0x43f180u: goto label_43f180;
        case 0x43f184u: goto label_43f184;
        case 0x43f188u: goto label_43f188;
        case 0x43f18cu: goto label_43f18c;
        case 0x43f190u: goto label_43f190;
        case 0x43f194u: goto label_43f194;
        case 0x43f198u: goto label_43f198;
        case 0x43f19cu: goto label_43f19c;
        case 0x43f1a0u: goto label_43f1a0;
        case 0x43f1a4u: goto label_43f1a4;
        case 0x43f1a8u: goto label_43f1a8;
        case 0x43f1acu: goto label_43f1ac;
        case 0x43f1b0u: goto label_43f1b0;
        case 0x43f1b4u: goto label_43f1b4;
        case 0x43f1b8u: goto label_43f1b8;
        case 0x43f1bcu: goto label_43f1bc;
        case 0x43f1c0u: goto label_43f1c0;
        case 0x43f1c4u: goto label_43f1c4;
        case 0x43f1c8u: goto label_43f1c8;
        case 0x43f1ccu: goto label_43f1cc;
        case 0x43f1d0u: goto label_43f1d0;
        case 0x43f1d4u: goto label_43f1d4;
        case 0x43f1d8u: goto label_43f1d8;
        case 0x43f1dcu: goto label_43f1dc;
        case 0x43f1e0u: goto label_43f1e0;
        case 0x43f1e4u: goto label_43f1e4;
        case 0x43f1e8u: goto label_43f1e8;
        case 0x43f1ecu: goto label_43f1ec;
        case 0x43f1f0u: goto label_43f1f0;
        case 0x43f1f4u: goto label_43f1f4;
        case 0x43f1f8u: goto label_43f1f8;
        case 0x43f1fcu: goto label_43f1fc;
        case 0x43f200u: goto label_43f200;
        case 0x43f204u: goto label_43f204;
        case 0x43f208u: goto label_43f208;
        case 0x43f20cu: goto label_43f20c;
        case 0x43f210u: goto label_43f210;
        case 0x43f214u: goto label_43f214;
        case 0x43f218u: goto label_43f218;
        case 0x43f21cu: goto label_43f21c;
        case 0x43f220u: goto label_43f220;
        case 0x43f224u: goto label_43f224;
        case 0x43f228u: goto label_43f228;
        case 0x43f22cu: goto label_43f22c;
        case 0x43f230u: goto label_43f230;
        case 0x43f234u: goto label_43f234;
        case 0x43f238u: goto label_43f238;
        case 0x43f23cu: goto label_43f23c;
        case 0x43f240u: goto label_43f240;
        case 0x43f244u: goto label_43f244;
        case 0x43f248u: goto label_43f248;
        case 0x43f24cu: goto label_43f24c;
        case 0x43f250u: goto label_43f250;
        case 0x43f254u: goto label_43f254;
        case 0x43f258u: goto label_43f258;
        case 0x43f25cu: goto label_43f25c;
        case 0x43f260u: goto label_43f260;
        case 0x43f264u: goto label_43f264;
        case 0x43f268u: goto label_43f268;
        case 0x43f26cu: goto label_43f26c;
        case 0x43f270u: goto label_43f270;
        case 0x43f274u: goto label_43f274;
        case 0x43f278u: goto label_43f278;
        case 0x43f27cu: goto label_43f27c;
        case 0x43f280u: goto label_43f280;
        case 0x43f284u: goto label_43f284;
        case 0x43f288u: goto label_43f288;
        case 0x43f28cu: goto label_43f28c;
        case 0x43f290u: goto label_43f290;
        case 0x43f294u: goto label_43f294;
        case 0x43f298u: goto label_43f298;
        case 0x43f29cu: goto label_43f29c;
        case 0x43f2a0u: goto label_43f2a0;
        case 0x43f2a4u: goto label_43f2a4;
        case 0x43f2a8u: goto label_43f2a8;
        case 0x43f2acu: goto label_43f2ac;
        case 0x43f2b0u: goto label_43f2b0;
        case 0x43f2b4u: goto label_43f2b4;
        case 0x43f2b8u: goto label_43f2b8;
        case 0x43f2bcu: goto label_43f2bc;
        case 0x43f2c0u: goto label_43f2c0;
        case 0x43f2c4u: goto label_43f2c4;
        case 0x43f2c8u: goto label_43f2c8;
        case 0x43f2ccu: goto label_43f2cc;
        case 0x43f2d0u: goto label_43f2d0;
        case 0x43f2d4u: goto label_43f2d4;
        case 0x43f2d8u: goto label_43f2d8;
        case 0x43f2dcu: goto label_43f2dc;
        case 0x43f2e0u: goto label_43f2e0;
        case 0x43f2e4u: goto label_43f2e4;
        case 0x43f2e8u: goto label_43f2e8;
        case 0x43f2ecu: goto label_43f2ec;
        case 0x43f2f0u: goto label_43f2f0;
        case 0x43f2f4u: goto label_43f2f4;
        case 0x43f2f8u: goto label_43f2f8;
        case 0x43f2fcu: goto label_43f2fc;
        case 0x43f300u: goto label_43f300;
        case 0x43f304u: goto label_43f304;
        case 0x43f308u: goto label_43f308;
        case 0x43f30cu: goto label_43f30c;
        case 0x43f310u: goto label_43f310;
        case 0x43f314u: goto label_43f314;
        case 0x43f318u: goto label_43f318;
        case 0x43f31cu: goto label_43f31c;
        case 0x43f320u: goto label_43f320;
        case 0x43f324u: goto label_43f324;
        case 0x43f328u: goto label_43f328;
        case 0x43f32cu: goto label_43f32c;
        case 0x43f330u: goto label_43f330;
        case 0x43f334u: goto label_43f334;
        case 0x43f338u: goto label_43f338;
        case 0x43f33cu: goto label_43f33c;
        case 0x43f340u: goto label_43f340;
        case 0x43f344u: goto label_43f344;
        case 0x43f348u: goto label_43f348;
        case 0x43f34cu: goto label_43f34c;
        case 0x43f350u: goto label_43f350;
        case 0x43f354u: goto label_43f354;
        case 0x43f358u: goto label_43f358;
        case 0x43f35cu: goto label_43f35c;
        case 0x43f360u: goto label_43f360;
        case 0x43f364u: goto label_43f364;
        case 0x43f368u: goto label_43f368;
        case 0x43f36cu: goto label_43f36c;
        case 0x43f370u: goto label_43f370;
        case 0x43f374u: goto label_43f374;
        case 0x43f378u: goto label_43f378;
        case 0x43f37cu: goto label_43f37c;
        case 0x43f380u: goto label_43f380;
        case 0x43f384u: goto label_43f384;
        case 0x43f388u: goto label_43f388;
        case 0x43f38cu: goto label_43f38c;
        case 0x43f390u: goto label_43f390;
        case 0x43f394u: goto label_43f394;
        case 0x43f398u: goto label_43f398;
        case 0x43f39cu: goto label_43f39c;
        case 0x43f3a0u: goto label_43f3a0;
        case 0x43f3a4u: goto label_43f3a4;
        case 0x43f3a8u: goto label_43f3a8;
        case 0x43f3acu: goto label_43f3ac;
        case 0x43f3b0u: goto label_43f3b0;
        case 0x43f3b4u: goto label_43f3b4;
        case 0x43f3b8u: goto label_43f3b8;
        case 0x43f3bcu: goto label_43f3bc;
        case 0x43f3c0u: goto label_43f3c0;
        case 0x43f3c4u: goto label_43f3c4;
        case 0x43f3c8u: goto label_43f3c8;
        case 0x43f3ccu: goto label_43f3cc;
        case 0x43f3d0u: goto label_43f3d0;
        case 0x43f3d4u: goto label_43f3d4;
        case 0x43f3d8u: goto label_43f3d8;
        case 0x43f3dcu: goto label_43f3dc;
        case 0x43f3e0u: goto label_43f3e0;
        case 0x43f3e4u: goto label_43f3e4;
        case 0x43f3e8u: goto label_43f3e8;
        case 0x43f3ecu: goto label_43f3ec;
        case 0x43f3f0u: goto label_43f3f0;
        case 0x43f3f4u: goto label_43f3f4;
        case 0x43f3f8u: goto label_43f3f8;
        case 0x43f3fcu: goto label_43f3fc;
        case 0x43f400u: goto label_43f400;
        case 0x43f404u: goto label_43f404;
        case 0x43f408u: goto label_43f408;
        case 0x43f40cu: goto label_43f40c;
        case 0x43f410u: goto label_43f410;
        case 0x43f414u: goto label_43f414;
        case 0x43f418u: goto label_43f418;
        case 0x43f41cu: goto label_43f41c;
        case 0x43f420u: goto label_43f420;
        case 0x43f424u: goto label_43f424;
        case 0x43f428u: goto label_43f428;
        case 0x43f42cu: goto label_43f42c;
        case 0x43f430u: goto label_43f430;
        case 0x43f434u: goto label_43f434;
        case 0x43f438u: goto label_43f438;
        case 0x43f43cu: goto label_43f43c;
        case 0x43f440u: goto label_43f440;
        case 0x43f444u: goto label_43f444;
        case 0x43f448u: goto label_43f448;
        case 0x43f44cu: goto label_43f44c;
        case 0x43f450u: goto label_43f450;
        case 0x43f454u: goto label_43f454;
        case 0x43f458u: goto label_43f458;
        case 0x43f45cu: goto label_43f45c;
        case 0x43f460u: goto label_43f460;
        case 0x43f464u: goto label_43f464;
        case 0x43f468u: goto label_43f468;
        case 0x43f46cu: goto label_43f46c;
        case 0x43f470u: goto label_43f470;
        case 0x43f474u: goto label_43f474;
        case 0x43f478u: goto label_43f478;
        case 0x43f47cu: goto label_43f47c;
        case 0x43f480u: goto label_43f480;
        case 0x43f484u: goto label_43f484;
        case 0x43f488u: goto label_43f488;
        case 0x43f48cu: goto label_43f48c;
        case 0x43f490u: goto label_43f490;
        case 0x43f494u: goto label_43f494;
        case 0x43f498u: goto label_43f498;
        case 0x43f49cu: goto label_43f49c;
        case 0x43f4a0u: goto label_43f4a0;
        case 0x43f4a4u: goto label_43f4a4;
        case 0x43f4a8u: goto label_43f4a8;
        case 0x43f4acu: goto label_43f4ac;
        case 0x43f4b0u: goto label_43f4b0;
        case 0x43f4b4u: goto label_43f4b4;
        case 0x43f4b8u: goto label_43f4b8;
        case 0x43f4bcu: goto label_43f4bc;
        case 0x43f4c0u: goto label_43f4c0;
        case 0x43f4c4u: goto label_43f4c4;
        case 0x43f4c8u: goto label_43f4c8;
        case 0x43f4ccu: goto label_43f4cc;
        case 0x43f4d0u: goto label_43f4d0;
        case 0x43f4d4u: goto label_43f4d4;
        case 0x43f4d8u: goto label_43f4d8;
        case 0x43f4dcu: goto label_43f4dc;
        case 0x43f4e0u: goto label_43f4e0;
        case 0x43f4e4u: goto label_43f4e4;
        case 0x43f4e8u: goto label_43f4e8;
        case 0x43f4ecu: goto label_43f4ec;
        case 0x43f4f0u: goto label_43f4f0;
        case 0x43f4f4u: goto label_43f4f4;
        case 0x43f4f8u: goto label_43f4f8;
        case 0x43f4fcu: goto label_43f4fc;
        case 0x43f500u: goto label_43f500;
        case 0x43f504u: goto label_43f504;
        case 0x43f508u: goto label_43f508;
        case 0x43f50cu: goto label_43f50c;
        case 0x43f510u: goto label_43f510;
        case 0x43f514u: goto label_43f514;
        case 0x43f518u: goto label_43f518;
        case 0x43f51cu: goto label_43f51c;
        case 0x43f520u: goto label_43f520;
        case 0x43f524u: goto label_43f524;
        case 0x43f528u: goto label_43f528;
        case 0x43f52cu: goto label_43f52c;
        case 0x43f530u: goto label_43f530;
        case 0x43f534u: goto label_43f534;
        case 0x43f538u: goto label_43f538;
        case 0x43f53cu: goto label_43f53c;
        case 0x43f540u: goto label_43f540;
        case 0x43f544u: goto label_43f544;
        case 0x43f548u: goto label_43f548;
        case 0x43f54cu: goto label_43f54c;
        case 0x43f550u: goto label_43f550;
        case 0x43f554u: goto label_43f554;
        case 0x43f558u: goto label_43f558;
        case 0x43f55cu: goto label_43f55c;
        case 0x43f560u: goto label_43f560;
        case 0x43f564u: goto label_43f564;
        case 0x43f568u: goto label_43f568;
        case 0x43f56cu: goto label_43f56c;
        case 0x43f570u: goto label_43f570;
        case 0x43f574u: goto label_43f574;
        case 0x43f578u: goto label_43f578;
        case 0x43f57cu: goto label_43f57c;
        case 0x43f580u: goto label_43f580;
        case 0x43f584u: goto label_43f584;
        case 0x43f588u: goto label_43f588;
        case 0x43f58cu: goto label_43f58c;
        case 0x43f590u: goto label_43f590;
        case 0x43f594u: goto label_43f594;
        case 0x43f598u: goto label_43f598;
        case 0x43f59cu: goto label_43f59c;
        case 0x43f5a0u: goto label_43f5a0;
        case 0x43f5a4u: goto label_43f5a4;
        case 0x43f5a8u: goto label_43f5a8;
        case 0x43f5acu: goto label_43f5ac;
        case 0x43f5b0u: goto label_43f5b0;
        case 0x43f5b4u: goto label_43f5b4;
        case 0x43f5b8u: goto label_43f5b8;
        case 0x43f5bcu: goto label_43f5bc;
        case 0x43f5c0u: goto label_43f5c0;
        case 0x43f5c4u: goto label_43f5c4;
        case 0x43f5c8u: goto label_43f5c8;
        case 0x43f5ccu: goto label_43f5cc;
        case 0x43f5d0u: goto label_43f5d0;
        case 0x43f5d4u: goto label_43f5d4;
        case 0x43f5d8u: goto label_43f5d8;
        case 0x43f5dcu: goto label_43f5dc;
        case 0x43f5e0u: goto label_43f5e0;
        case 0x43f5e4u: goto label_43f5e4;
        case 0x43f5e8u: goto label_43f5e8;
        case 0x43f5ecu: goto label_43f5ec;
        case 0x43f5f0u: goto label_43f5f0;
        case 0x43f5f4u: goto label_43f5f4;
        case 0x43f5f8u: goto label_43f5f8;
        case 0x43f5fcu: goto label_43f5fc;
        case 0x43f600u: goto label_43f600;
        case 0x43f604u: goto label_43f604;
        case 0x43f608u: goto label_43f608;
        case 0x43f60cu: goto label_43f60c;
        case 0x43f610u: goto label_43f610;
        case 0x43f614u: goto label_43f614;
        case 0x43f618u: goto label_43f618;
        case 0x43f61cu: goto label_43f61c;
        case 0x43f620u: goto label_43f620;
        case 0x43f624u: goto label_43f624;
        case 0x43f628u: goto label_43f628;
        case 0x43f62cu: goto label_43f62c;
        case 0x43f630u: goto label_43f630;
        case 0x43f634u: goto label_43f634;
        case 0x43f638u: goto label_43f638;
        case 0x43f63cu: goto label_43f63c;
        case 0x43f640u: goto label_43f640;
        case 0x43f644u: goto label_43f644;
        case 0x43f648u: goto label_43f648;
        case 0x43f64cu: goto label_43f64c;
        case 0x43f650u: goto label_43f650;
        case 0x43f654u: goto label_43f654;
        case 0x43f658u: goto label_43f658;
        case 0x43f65cu: goto label_43f65c;
        case 0x43f660u: goto label_43f660;
        case 0x43f664u: goto label_43f664;
        case 0x43f668u: goto label_43f668;
        case 0x43f66cu: goto label_43f66c;
        case 0x43f670u: goto label_43f670;
        case 0x43f674u: goto label_43f674;
        case 0x43f678u: goto label_43f678;
        case 0x43f67cu: goto label_43f67c;
        case 0x43f680u: goto label_43f680;
        case 0x43f684u: goto label_43f684;
        case 0x43f688u: goto label_43f688;
        case 0x43f68cu: goto label_43f68c;
        case 0x43f690u: goto label_43f690;
        case 0x43f694u: goto label_43f694;
        case 0x43f698u: goto label_43f698;
        case 0x43f69cu: goto label_43f69c;
        case 0x43f6a0u: goto label_43f6a0;
        case 0x43f6a4u: goto label_43f6a4;
        case 0x43f6a8u: goto label_43f6a8;
        case 0x43f6acu: goto label_43f6ac;
        case 0x43f6b0u: goto label_43f6b0;
        case 0x43f6b4u: goto label_43f6b4;
        case 0x43f6b8u: goto label_43f6b8;
        case 0x43f6bcu: goto label_43f6bc;
        case 0x43f6c0u: goto label_43f6c0;
        case 0x43f6c4u: goto label_43f6c4;
        case 0x43f6c8u: goto label_43f6c8;
        case 0x43f6ccu: goto label_43f6cc;
        case 0x43f6d0u: goto label_43f6d0;
        case 0x43f6d4u: goto label_43f6d4;
        case 0x43f6d8u: goto label_43f6d8;
        case 0x43f6dcu: goto label_43f6dc;
        case 0x43f6e0u: goto label_43f6e0;
        case 0x43f6e4u: goto label_43f6e4;
        case 0x43f6e8u: goto label_43f6e8;
        case 0x43f6ecu: goto label_43f6ec;
        case 0x43f6f0u: goto label_43f6f0;
        case 0x43f6f4u: goto label_43f6f4;
        case 0x43f6f8u: goto label_43f6f8;
        case 0x43f6fcu: goto label_43f6fc;
        case 0x43f700u: goto label_43f700;
        case 0x43f704u: goto label_43f704;
        case 0x43f708u: goto label_43f708;
        case 0x43f70cu: goto label_43f70c;
        case 0x43f710u: goto label_43f710;
        case 0x43f714u: goto label_43f714;
        case 0x43f718u: goto label_43f718;
        case 0x43f71cu: goto label_43f71c;
        case 0x43f720u: goto label_43f720;
        case 0x43f724u: goto label_43f724;
        case 0x43f728u: goto label_43f728;
        case 0x43f72cu: goto label_43f72c;
        default: break;
    }

    ctx->pc = 0x43ea18u;

label_43ea18:
    // 0x43ea18: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x43ea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_43ea1c:
    // 0x43ea1c: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x43ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_43ea20:
    // 0x43ea20: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x43ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_43ea24:
    // 0x43ea24: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x43ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_43ea28:
    // 0x43ea28: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x43ea28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43ea2c:
    // 0x43ea2c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x43ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_43ea30:
    // 0x43ea30: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x43ea30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43ea34:
    // 0x43ea34: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x43ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_43ea38:
    // 0x43ea38: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x43ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_43ea3c:
    // 0x43ea3c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x43ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_43ea40:
    // 0x43ea40: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x43ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_43ea44:
    // 0x43ea44: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x43ea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_43ea48:
    // 0x43ea48: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x43ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_43ea4c:
    // 0x43ea4c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x43ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_43ea50:
    // 0x43ea50: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x43ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_43ea54:
    // 0x43ea54: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x43ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_43ea58:
    // 0x43ea58: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x43ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_43ea5c:
    // 0x43ea5c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x43ea5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_43ea60:
    // 0x43ea60: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x43ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_43ea64:
    // 0x43ea64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x43ea64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ea68:
    // 0x43ea68: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_43ea6c:
    if (ctx->pc == 0x43EA6Cu) {
        ctx->pc = 0x43EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EA68u;
        // 0x43ea6c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EA70u;
        goto label_43ea70;
    }
    ctx->pc = 0x43EA68u;
    {
        const bool branch_taken_0x43ea68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EA68u;
        // 0x43ea6c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ea68) {
            ctx->pc = 0x43F6DCu;
            goto label_43f6dc;
        }
    }
    ctx->pc = 0x43EA70u;
label_43ea70:
    // 0x43ea70: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x43ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43ea74:
    // 0x43ea74: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x43ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_43ea78:
    // 0x43ea78: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x43ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_43ea7c:
    // 0x43ea7c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x43ea7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ea80:
    // 0x43ea80: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x43ea80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_43ea84:
    // 0x43ea84: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x43ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_43ea88:
    // 0x43ea88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x43ea88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ea8c:
    // 0x43ea8c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x43ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_43ea90:
    // 0x43ea90: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_43ea94:
    if (ctx->pc == 0x43EA94u) {
        ctx->pc = 0x43EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EA90u;
        // 0x43ea94: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EA98u;
        goto label_43ea98;
    }
    ctx->pc = 0x43EA90u;
    {
        const bool branch_taken_0x43ea90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x43EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EA90u;
        // 0x43ea94: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ea90) {
            ctx->pc = 0x43F694u;
            goto label_43f694;
        }
    }
    ctx->pc = 0x43EA98u;
label_43ea98:
    // 0x43ea98: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x43ea98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43ea9c:
    // 0x43ea9c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x43ea9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_43eaa0:
    // 0x43eaa0: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x43eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_43eaa4:
    // 0x43eaa4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x43eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_43eaa8:
    // 0x43eaa8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x43eaa8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_43eaac:
    // 0x43eaac: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x43eaacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_43eab0:
    // 0x43eab0: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_43eab4:
    if (ctx->pc == 0x43EAB4u) {
        ctx->pc = 0x43EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAB0u;
        // 0x43eab4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EAB8u;
        goto label_43eab8;
    }
    ctx->pc = 0x43EAB0u;
    {
        const bool branch_taken_0x43eab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAB0u;
        // 0x43eab4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eab0) {
            ctx->pc = 0x43F1E4u;
            goto label_43f1e4;
        }
    }
    ctx->pc = 0x43EAB8u;
label_43eab8:
    // 0x43eab8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43eabc:
    // 0x43eabc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x43eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_43eac0:
    // 0x43eac0: 0x2442d940  addiu       $v0, $v0, -0x26C0
    ctx->pc = 0x43eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
label_43eac4:
    // 0x43eac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_43eac8:
    // 0x43eac8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43eacc:
    // 0x43eacc: 0x800008  jr          $a0
label_43ead0:
    if (ctx->pc == 0x43EAD0u) {
        ctx->pc = 0x43EAD4u;
        goto label_43ead4;
    }
    ctx->pc = 0x43EACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x43EAD4u: goto label_43ead4;
            case 0x43EADCu: goto label_43eadc;
            case 0x43EAE4u: goto label_43eae4;
            case 0x43EAECu: goto label_43eaec;
            case 0x43EB34u: goto label_43eb34;
            case 0x43EBBCu: goto label_43ebbc;
            case 0x43EBC4u: goto label_43ebc4;
            case 0x43EBCCu: goto label_43ebcc;
            case 0x43EBD4u: goto label_43ebd4;
            case 0x43EBDCu: goto label_43ebdc;
            case 0x43EC90u: goto label_43ec90;
            case 0x43ECBCu: goto label_43ecbc;
            case 0x43ED7Cu: goto label_43ed7c;
            case 0x43EE94u: goto label_43ee94;
            case 0x43EF58u: goto label_43ef58;
            case 0x43EFBCu: goto label_43efbc;
            case 0x43F100u: goto label_43f100;
            case 0x43F138u: goto label_43f138;
            case 0x43F1E4u: goto label_43f1e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EACCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x43EAD4u;
label_43ead4:
    // 0x43ead4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_43ead8:
    if (ctx->pc == 0x43EAD8u) {
        ctx->pc = 0x43EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAD4u;
        // 0x43ead8: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EADCu;
        goto label_43eadc;
    }
    ctx->pc = 0x43EAD4u;
    {
        const bool branch_taken_0x43ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAD4u;
        // 0x43ead8: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ead4) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EADCu;
label_43eadc:
    // 0x43eadc: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_43eae0:
    if (ctx->pc == 0x43EAE0u) {
        ctx->pc = 0x43EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EADCu;
        // 0x43eae0: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EAE4u;
        goto label_43eae4;
    }
    ctx->pc = 0x43EADCu;
    {
        const bool branch_taken_0x43eadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EADCu;
        // 0x43eae0: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eadc) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EAE4u;
label_43eae4:
    // 0x43eae4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_43eae8:
    if (ctx->pc == 0x43EAE8u) {
        ctx->pc = 0x43EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAE4u;
        // 0x43eae8: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EAECu;
        goto label_43eaec;
    }
    ctx->pc = 0x43EAE4u;
    {
        const bool branch_taken_0x43eae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAE4u;
        // 0x43eae8: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eae4) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EAECu;
label_43eaec:
    // 0x43eaec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x43eaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43eaf0:
    // 0x43eaf0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x43eaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_43eaf4:
    // 0x43eaf4: 0x0  nop
    ctx->pc = 0x43eaf4u;
    // NOP
label_43eaf8:
    // 0x43eaf8: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x43eaf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43eafc:
    // 0x43eafc: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x43eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_43eb00:
    // 0x43eb00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x43eb00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43eb04:
    // 0x43eb04: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x43eb04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_43eb08:
    // 0x43eb08: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x43eb08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_43eb0c:
    // 0x43eb0c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x43eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_43eb10:
    // 0x43eb10: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x43eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_43eb14:
    // 0x43eb14: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x43eb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_43eb18:
    // 0x43eb18: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_43eb1c:
    if (ctx->pc == 0x43EB1Cu) {
        ctx->pc = 0x43EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB18u;
        // 0x43eb1c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB20u;
        goto label_43eb20;
    }
    ctx->pc = 0x43EB18u;
    {
        const bool branch_taken_0x43eb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB18u;
        // 0x43eb1c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eb18) {
            ctx->pc = 0x43EAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43eaf8;
        }
    }
    ctx->pc = 0x43EB20u;
label_43eb20:
    // 0x43eb20: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x43eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_43eb24:
    // 0x43eb24: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_43eb28:
    if (ctx->pc == 0x43EB28u) {
        ctx->pc = 0x43EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB24u;
        // 0x43eb28: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB2Cu;
        goto label_43eb2c;
    }
    ctx->pc = 0x43EB24u;
    {
        const bool branch_taken_0x43eb24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB24u;
        // 0x43eb28: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eb24) {
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43EB2Cu;
label_43eb2c:
    // 0x43eb2c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_43eb30:
    if (ctx->pc == 0x43EB30u) {
        ctx->pc = 0x43EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB2Cu;
        // 0x43eb30: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB34u;
        goto label_43eb34;
    }
    ctx->pc = 0x43EB2Cu;
    {
        const bool branch_taken_0x43eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB2Cu;
        // 0x43eb30: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eb2c) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EB34u;
label_43eb34:
    // 0x43eb34: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x43eb34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43eb38:
    // 0x43eb38: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x43eb38u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_43eb3c:
    // 0x43eb3c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x43eb3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_43eb40:
    // 0x43eb40: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x43eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_43eb44:
    // 0x43eb44: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_43eb48:
    if (ctx->pc == 0x43EB48u) {
        ctx->pc = 0x43EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB44u;
        // 0x43eb48: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB4Cu;
        goto label_43eb4c;
    }
    ctx->pc = 0x43EB44u;
    {
        const bool branch_taken_0x43eb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB44u;
        // 0x43eb48: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eb44) {
            ctx->pc = 0x43EB68u;
            goto label_43eb68;
        }
    }
    ctx->pc = 0x43EB4Cu;
label_43eb4c:
    // 0x43eb4c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43eb4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43eb50:
    // 0x43eb50: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x43eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43eb54:
    // 0x43eb54: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x43eb54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43eb58:
    // 0x43eb58: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x43eb58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43eb5c:
    // 0x43eb5c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x43eb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_43eb60:
    // 0x43eb60: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_43eb64:
    if (ctx->pc == 0x43EB64u) {
        ctx->pc = 0x43EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB60u;
        // 0x43eb64: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB68u;
        goto label_43eb68;
    }
    ctx->pc = 0x43EB60u;
    {
        const bool branch_taken_0x43eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB60u;
        // 0x43eb64: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eb60) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EB68u;
label_43eb68:
    // 0x43eb68: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x43eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_43eb6c:
    // 0x43eb6c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x43eb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_43eb70:
    // 0x43eb70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_43eb74:
    if (ctx->pc == 0x43EB74u) {
        ctx->pc = 0x43EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB70u;
        // 0x43eb74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EB78u;
        goto label_43eb78;
    }
    ctx->pc = 0x43EB70u;
    {
        const bool branch_taken_0x43eb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EB70u;
        // 0x43eb74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eb70) {
            ctx->pc = 0x43EBA8u;
            goto label_43eba8;
        }
    }
    ctx->pc = 0x43EB78u;
label_43eb78:
    // 0x43eb78: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x43eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_43eb7c:
    // 0x43eb7c: 0x0  nop
    ctx->pc = 0x43eb7cu;
    // NOP
label_43eb80:
    // 0x43eb80: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x43eb80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43eb84:
    // 0x43eb84: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x43eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_43eb88:
    // 0x43eb88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x43eb88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43eb8c:
    // 0x43eb8c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x43eb8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_43eb90:
    // 0x43eb90: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x43eb90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_43eb94:
    // 0x43eb94: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x43eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_43eb98:
    // 0x43eb98: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x43eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_43eb9c:
    // 0x43eb9c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x43eb9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_43eba0:
    // 0x43eba0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_43eba4:
    if (ctx->pc == 0x43EBA4u) {
        ctx->pc = 0x43EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBA0u;
        // 0x43eba4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBA8u;
        goto label_43eba8;
    }
    ctx->pc = 0x43EBA0u;
    {
        const bool branch_taken_0x43eba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBA0u;
        // 0x43eba4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eba0) {
            ctx->pc = 0x43EB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43eb80;
        }
    }
    ctx->pc = 0x43EBA8u;
label_43eba8:
    // 0x43eba8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x43eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43ebac:
    // 0x43ebac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x43ebacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43ebb0:
    // 0x43ebb0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x43ebb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_43ebb4:
    // 0x43ebb4: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_43ebb8:
    if (ctx->pc == 0x43EBB8u) {
        ctx->pc = 0x43EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBB4u;
        // 0x43ebb8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBBCu;
        goto label_43ebbc;
    }
    ctx->pc = 0x43EBB4u;
    {
        const bool branch_taken_0x43ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBB4u;
        // 0x43ebb8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebb4) {
            ctx->pc = 0x43EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43eb24;
        }
    }
    ctx->pc = 0x43EBBCu;
label_43ebbc:
    // 0x43ebbc: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_43ebc0:
    if (ctx->pc == 0x43EBC0u) {
        ctx->pc = 0x43EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBBCu;
        // 0x43ebc0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBC4u;
        goto label_43ebc4;
    }
    ctx->pc = 0x43EBBCu;
    {
        const bool branch_taken_0x43ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBBCu;
        // 0x43ebc0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebbc) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EBC4u;
label_43ebc4:
    // 0x43ebc4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_43ebc8:
    if (ctx->pc == 0x43EBC8u) {
        ctx->pc = 0x43EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBC4u;
        // 0x43ebc8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBCCu;
        goto label_43ebcc;
    }
    ctx->pc = 0x43EBC4u;
    {
        const bool branch_taken_0x43ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBC4u;
        // 0x43ebc8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebc4) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EBCCu;
label_43ebcc:
    // 0x43ebcc: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_43ebd0:
    if (ctx->pc == 0x43EBD0u) {
        ctx->pc = 0x43EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBCCu;
        // 0x43ebd0: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBD4u;
        goto label_43ebd4;
    }
    ctx->pc = 0x43EBCCu;
    {
        const bool branch_taken_0x43ebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBCCu;
        // 0x43ebd0: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebcc) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EBD4u;
label_43ebd4:
    // 0x43ebd4: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_43ebd8:
    if (ctx->pc == 0x43EBD8u) {
        ctx->pc = 0x43EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBD4u;
        // 0x43ebd8: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBDCu;
        goto label_43ebdc;
    }
    ctx->pc = 0x43EBD4u;
    {
        const bool branch_taken_0x43ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBD4u;
        // 0x43ebd8: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebd4) {
            ctx->pc = 0x43EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea98;
        }
    }
    ctx->pc = 0x43EBDCu;
label_43ebdc:
    // 0x43ebdc: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x43ebdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_43ebe0:
    // 0x43ebe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_43ebe4:
    if (ctx->pc == 0x43EBE4u) {
        ctx->pc = 0x43EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBE0u;
        // 0x43ebe4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBE8u;
        goto label_43ebe8;
    }
    ctx->pc = 0x43EBE0u;
    {
        const bool branch_taken_0x43ebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBE0u;
        // 0x43ebe4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebe0) {
            ctx->pc = 0x43EBF4u;
            goto label_43ebf4;
        }
    }
    ctx->pc = 0x43EBE8u;
label_43ebe8:
    // 0x43ebe8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43ebe8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43ebec:
    // 0x43ebec: 0x10000006  b           . + 4 + (0x6 << 2)
label_43ebf0:
    if (ctx->pc == 0x43EBF0u) {
        ctx->pc = 0x43EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBECu;
        // 0x43ebf0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBF4u;
        goto label_43ebf4;
    }
    ctx->pc = 0x43EBECu;
    {
        const bool branch_taken_0x43ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBECu;
        // 0x43ebf0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebec) {
            ctx->pc = 0x43EC08u;
            goto label_43ec08;
        }
    }
    ctx->pc = 0x43EBF4u;
label_43ebf4:
    // 0x43ebf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43ebf8:
    if (ctx->pc == 0x43EBF8u) {
        ctx->pc = 0x43EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBF4u;
        // 0x43ebf8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EBFCu;
        goto label_43ebfc;
    }
    ctx->pc = 0x43EBF4u;
    {
        const bool branch_taken_0x43ebf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBF4u;
        // 0x43ebf8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebf4) {
            ctx->pc = 0x43EC04u;
            goto label_43ec04;
        }
    }
    ctx->pc = 0x43EBFCu;
label_43ebfc:
    // 0x43ebfc: 0x10000002  b           . + 4 + (0x2 << 2)
label_43ec00:
    if (ctx->pc == 0x43EC00u) {
        ctx->pc = 0x43EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBFCu;
        // 0x43ec00: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC04u;
        goto label_43ec04;
    }
    ctx->pc = 0x43EBFCu;
    {
        const bool branch_taken_0x43ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EBFCu;
        // 0x43ec00: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ebfc) {
            ctx->pc = 0x43EC08u;
            goto label_43ec08;
        }
    }
    ctx->pc = 0x43EC04u;
label_43ec04:
    // 0x43ec04: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x43ec04u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43ec08:
    // 0x43ec08: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_43ec0c:
    if (ctx->pc == 0x43EC0Cu) {
        ctx->pc = 0x43EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC08u;
        // 0x43ec0c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC10u;
        goto label_43ec10;
    }
    ctx->pc = 0x43EC08u;
    {
        const bool branch_taken_0x43ec08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC08u;
        // 0x43ec0c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec08) {
            ctx->pc = 0x43EC38u;
            goto label_43ec38;
        }
    }
    ctx->pc = 0x43EC10u;
label_43ec10:
    // 0x43ec10: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x43ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_43ec14:
    // 0x43ec14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43ec18:
    if (ctx->pc == 0x43EC18u) {
        ctx->pc = 0x43EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC14u;
        // 0x43ec18: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC1Cu;
        goto label_43ec1c;
    }
    ctx->pc = 0x43EC14u;
    {
        const bool branch_taken_0x43ec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC14u;
        // 0x43ec18: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec14) {
            ctx->pc = 0x43EC24u;
            goto label_43ec24;
        }
    }
    ctx->pc = 0x43EC1Cu;
label_43ec1c:
    // 0x43ec1c: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_43ec20:
    if (ctx->pc == 0x43EC20u) {
        ctx->pc = 0x43EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC1Cu;
        // 0x43ec20: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC24u;
        goto label_43ec24;
    }
    ctx->pc = 0x43EC1Cu;
    {
        const bool branch_taken_0x43ec1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC1Cu;
        // 0x43ec20: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec1c) {
            ctx->pc = 0x43EC7Cu;
            goto label_43ec7c;
        }
    }
    ctx->pc = 0x43EC24u;
label_43ec24:
    // 0x43ec24: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43ec24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43ec28:
    // 0x43ec28: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x43ec28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_43ec2c:
    // 0x43ec2c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ec2cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ec30:
    // 0x43ec30: 0x10000013  b           . + 4 + (0x13 << 2)
label_43ec34:
    if (ctx->pc == 0x43EC34u) {
        ctx->pc = 0x43EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC30u;
        // 0x43ec34: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC38u;
        goto label_43ec38;
    }
    ctx->pc = 0x43EC30u;
    {
        const bool branch_taken_0x43ec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC30u;
        // 0x43ec34: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec30) {
            ctx->pc = 0x43EC80u;
            goto label_43ec80;
        }
    }
    ctx->pc = 0x43EC38u;
label_43ec38:
    // 0x43ec38: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43ec38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43ec3c:
    // 0x43ec3c: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x43ec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_43ec40:
    // 0x43ec40: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ec40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ec44:
    // 0x43ec44: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43ec44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43ec48:
    // 0x43ec48: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x43ec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_43ec4c:
    // 0x43ec4c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x43ec4cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_43ec50:
    // 0x43ec50: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x43ec50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_43ec54:
    // 0x43ec54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x43ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_43ec58:
    // 0x43ec58: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x43ec58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_43ec5c:
    // 0x43ec5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43ec5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_43ec60:
    // 0x43ec60: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_43ec64:
    if (ctx->pc == 0x43EC64u) {
        ctx->pc = 0x43EC68u;
        goto label_43ec68;
    }
    ctx->pc = 0x43EC60u;
    {
        const bool branch_taken_0x43ec60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x43ec60) {
            ctx->pc = 0x43EC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ec48;
        }
    }
    ctx->pc = 0x43EC68u;
label_43ec68:
    // 0x43ec68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_43ec6c:
    if (ctx->pc == 0x43EC6Cu) {
        ctx->pc = 0x43EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC68u;
        // 0x43ec6c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC70u;
        goto label_43ec70;
    }
    ctx->pc = 0x43EC68u;
    {
        const bool branch_taken_0x43ec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC68u;
        // 0x43ec6c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec68) {
            ctx->pc = 0x43EC84u;
            goto label_43ec84;
        }
    }
    ctx->pc = 0x43EC70u;
label_43ec70:
    // 0x43ec70: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x43ec70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_43ec74:
    // 0x43ec74: 0x10000003  b           . + 4 + (0x3 << 2)
label_43ec78:
    if (ctx->pc == 0x43EC78u) {
        ctx->pc = 0x43EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC74u;
        // 0x43ec78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC7Cu;
        goto label_43ec7c;
    }
    ctx->pc = 0x43EC74u;
    {
        const bool branch_taken_0x43ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC74u;
        // 0x43ec78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec74) {
            ctx->pc = 0x43EC84u;
            goto label_43ec84;
        }
    }
    ctx->pc = 0x43EC7Cu;
label_43ec7c:
    // 0x43ec7c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ec7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ec80:
    // 0x43ec80: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43ec80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43ec84:
    // 0x43ec84: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x43ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_43ec88:
    // 0x43ec88: 0x10000162  b           . + 4 + (0x162 << 2)
label_43ec8c:
    if (ctx->pc == 0x43EC8Cu) {
        ctx->pc = 0x43EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC88u;
        // 0x43ec8c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EC90u;
        goto label_43ec90;
    }
    ctx->pc = 0x43EC88u;
    {
        const bool branch_taken_0x43ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC88u;
        // 0x43ec8c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec88) {
            ctx->pc = 0x43F214u;
            goto label_43f214;
        }
    }
    ctx->pc = 0x43EC90u;
label_43ec90:
    // 0x43ec90: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43ec94:
    // 0x43ec94: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x43ec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_43ec98:
    // 0x43ec98: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_43ec9c:
    if (ctx->pc == 0x43EC9Cu) {
        ctx->pc = 0x43EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC98u;
        // 0x43ec9c: 0x2444d910  addiu       $a0, $v0, -0x26F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ECA0u;
        goto label_43eca0;
    }
    ctx->pc = 0x43EC98u;
    {
        const bool branch_taken_0x43ec98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EC98u;
        // 0x43ec9c: 0x2444d910  addiu       $a0, $v0, -0x26F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ec98) {
            ctx->pc = 0x43ECE4u;
            goto label_43ece4;
        }
    }
    ctx->pc = 0x43ECA0u;
label_43eca0:
    // 0x43eca0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x43eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43eca4:
    // 0x43eca4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x43eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_43eca8:
    // 0x43eca8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x43eca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_43ecac:
    // 0x43ecac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43ecb0:
    // 0x43ecb0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x43ecb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_43ecb4:
    // 0x43ecb4: 0x1000000b  b           . + 4 + (0xB << 2)
label_43ecb8:
    if (ctx->pc == 0x43ECB8u) {
        ctx->pc = 0x43ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECB4u;
        // 0x43ecb8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ECBCu;
        goto label_43ecbc;
    }
    ctx->pc = 0x43ECB4u;
    {
        const bool branch_taken_0x43ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECB4u;
        // 0x43ecb8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ecb4) {
            ctx->pc = 0x43ECE4u;
            goto label_43ece4;
        }
    }
    ctx->pc = 0x43ECBCu;
label_43ecbc:
    // 0x43ecbc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43ecc0:
    // 0x43ecc0: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x43ecc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_43ecc4:
    // 0x43ecc4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_43ecc8:
    if (ctx->pc == 0x43ECC8u) {
        ctx->pc = 0x43ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECC4u;
        // 0x43ecc8: 0x2444d928  addiu       $a0, $v0, -0x26D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ECCCu;
        goto label_43eccc;
    }
    ctx->pc = 0x43ECC4u;
    {
        const bool branch_taken_0x43ecc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECC4u;
        // 0x43ecc8: 0x2444d928  addiu       $a0, $v0, -0x26D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ecc4) {
            ctx->pc = 0x43ECE4u;
            goto label_43ece4;
        }
    }
    ctx->pc = 0x43ECCCu;
label_43eccc:
    // 0x43eccc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x43ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43ecd0:
    // 0x43ecd0: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x43ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_43ecd4:
    // 0x43ecd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x43ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43ecd8:
    // 0x43ecd8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x43ecd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_43ecdc:
    // 0x43ecdc: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x43ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_43ece0:
    // 0x43ece0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x43ece0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_43ece4:
    // 0x43ece4: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x43ece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_43ece8:
    // 0x43ece8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_43ecec:
    if (ctx->pc == 0x43ECECu) {
        ctx->pc = 0x43ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECE8u;
        // 0x43ecec: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ECF0u;
        goto label_43ecf0;
    }
    ctx->pc = 0x43ECE8u;
    {
        const bool branch_taken_0x43ece8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECE8u;
        // 0x43ecec: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ece8) {
            ctx->pc = 0x43ECFCu;
            goto label_43ecfc;
        }
    }
    ctx->pc = 0x43ECF0u;
label_43ecf0:
    // 0x43ecf0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43ecf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43ecf4:
    // 0x43ecf4: 0x10000006  b           . + 4 + (0x6 << 2)
label_43ecf8:
    if (ctx->pc == 0x43ECF8u) {
        ctx->pc = 0x43ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECF4u;
        // 0x43ecf8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ECFCu;
        goto label_43ecfc;
    }
    ctx->pc = 0x43ECF4u;
    {
        const bool branch_taken_0x43ecf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECF4u;
        // 0x43ecf8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ecf4) {
            ctx->pc = 0x43ED10u;
            goto label_43ed10;
        }
    }
    ctx->pc = 0x43ECFCu;
label_43ecfc:
    // 0x43ecfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43ed00:
    if (ctx->pc == 0x43ED00u) {
        ctx->pc = 0x43ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECFCu;
        // 0x43ed00: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED04u;
        goto label_43ed04;
    }
    ctx->pc = 0x43ECFCu;
    {
        const bool branch_taken_0x43ecfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ECFCu;
        // 0x43ed00: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ecfc) {
            ctx->pc = 0x43ED0Cu;
            goto label_43ed0c;
        }
    }
    ctx->pc = 0x43ED04u;
label_43ed04:
    // 0x43ed04: 0x10000002  b           . + 4 + (0x2 << 2)
label_43ed08:
    if (ctx->pc == 0x43ED08u) {
        ctx->pc = 0x43ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED04u;
        // 0x43ed08: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED0Cu;
        goto label_43ed0c;
    }
    ctx->pc = 0x43ED04u;
    {
        const bool branch_taken_0x43ed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED04u;
        // 0x43ed08: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed04) {
            ctx->pc = 0x43ED10u;
            goto label_43ed10;
        }
    }
    ctx->pc = 0x43ED0Cu;
label_43ed0c:
    // 0x43ed0c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x43ed0cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43ed10:
    // 0x43ed10: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_43ed14:
    if (ctx->pc == 0x43ED14u) {
        ctx->pc = 0x43ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED10u;
        // 0x43ed14: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED18u;
        goto label_43ed18;
    }
    ctx->pc = 0x43ED10u;
    {
        const bool branch_taken_0x43ed10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED10u;
        // 0x43ed14: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed10) {
            ctx->pc = 0x43ED44u;
            goto label_43ed44;
        }
    }
    ctx->pc = 0x43ED18u;
label_43ed18:
    // 0x43ed18: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x43ed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_43ed1c:
    // 0x43ed1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43ed20:
    if (ctx->pc == 0x43ED20u) {
        ctx->pc = 0x43ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED1Cu;
        // 0x43ed20: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED24u;
        goto label_43ed24;
    }
    ctx->pc = 0x43ED1Cu;
    {
        const bool branch_taken_0x43ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED1Cu;
        // 0x43ed20: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed1c) {
            ctx->pc = 0x43ED2Cu;
            goto label_43ed2c;
        }
    }
    ctx->pc = 0x43ED24u;
label_43ed24:
    // 0x43ed24: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_43ed28:
    if (ctx->pc == 0x43ED28u) {
        ctx->pc = 0x43ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED24u;
        // 0x43ed28: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED2Cu;
        goto label_43ed2c;
    }
    ctx->pc = 0x43ED24u;
    {
        const bool branch_taken_0x43ed24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED24u;
        // 0x43ed28: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed24) {
            ctx->pc = 0x43EF40u;
            goto label_43ef40;
        }
    }
    ctx->pc = 0x43ED2Cu;
label_43ed2c:
    // 0x43ed2c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x43ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43ed30:
    // 0x43ed30: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43ed30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43ed34:
    // 0x43ed34: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x43ed34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_43ed38:
    // 0x43ed38: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ed38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ed3c:
    // 0x43ed3c: 0x10000081  b           . + 4 + (0x81 << 2)
label_43ed40:
    if (ctx->pc == 0x43ED40u) {
        ctx->pc = 0x43ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED3Cu;
        // 0x43ed40: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED44u;
        goto label_43ed44;
    }
    ctx->pc = 0x43ED3Cu;
    {
        const bool branch_taken_0x43ed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED3Cu;
        // 0x43ed40: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed3c) {
            ctx->pc = 0x43EF44u;
            goto label_43ef44;
        }
    }
    ctx->pc = 0x43ED44u;
label_43ed44:
    // 0x43ed44: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43ed44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43ed48:
    // 0x43ed48: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ed48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ed4c:
    // 0x43ed4c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43ed4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43ed50:
    // 0x43ed50: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x43ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_43ed54:
    // 0x43ed54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_43ed58:
    // 0x43ed58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43ed58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_43ed5c:
    // 0x43ed5c: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x43ed5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_43ed60:
    // 0x43ed60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x43ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43ed64:
    // 0x43ed64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x43ed64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43ed68:
    // 0x43ed68: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x43ed68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_43ed6c:
    // 0x43ed6c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_43ed70:
    if (ctx->pc == 0x43ED70u) {
        ctx->pc = 0x43ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED6Cu;
        // 0x43ed70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED74u;
        goto label_43ed74;
    }
    ctx->pc = 0x43ED6Cu;
    {
        const bool branch_taken_0x43ed6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED6Cu;
        // 0x43ed70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed6c) {
            ctx->pc = 0x43ED50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ed50;
        }
    }
    ctx->pc = 0x43ED74u;
label_43ed74:
    // 0x43ed74: 0x10000075  b           . + 4 + (0x75 << 2)
label_43ed78:
    if (ctx->pc == 0x43ED78u) {
        ctx->pc = 0x43ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED74u;
        // 0x43ed78: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED7Cu;
        goto label_43ed7c;
    }
    ctx->pc = 0x43ED74u;
    {
        const bool branch_taken_0x43ed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED74u;
        // 0x43ed78: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed74) {
            ctx->pc = 0x43EF4Cu;
            goto label_43ef4c;
        }
    }
    ctx->pc = 0x43ED7Cu;
label_43ed7c:
    // 0x43ed7c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x43ed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_43ed80:
    // 0x43ed80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_43ed84:
    if (ctx->pc == 0x43ED84u) {
        ctx->pc = 0x43ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED80u;
        // 0x43ed84: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED88u;
        goto label_43ed88;
    }
    ctx->pc = 0x43ED80u;
    {
        const bool branch_taken_0x43ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED80u;
        // 0x43ed84: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed80) {
            ctx->pc = 0x43ED94u;
            goto label_43ed94;
        }
    }
    ctx->pc = 0x43ED88u;
label_43ed88:
    // 0x43ed88: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43ed88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43ed8c:
    // 0x43ed8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_43ed90:
    if (ctx->pc == 0x43ED90u) {
        ctx->pc = 0x43ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED8Cu;
        // 0x43ed90: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED94u;
        goto label_43ed94;
    }
    ctx->pc = 0x43ED8Cu;
    {
        const bool branch_taken_0x43ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED8Cu;
        // 0x43ed90: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed8c) {
            ctx->pc = 0x43EDA8u;
            goto label_43eda8;
        }
    }
    ctx->pc = 0x43ED94u;
label_43ed94:
    // 0x43ed94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43ed98:
    if (ctx->pc == 0x43ED98u) {
        ctx->pc = 0x43ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED94u;
        // 0x43ed98: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43ED9Cu;
        goto label_43ed9c;
    }
    ctx->pc = 0x43ED94u;
    {
        const bool branch_taken_0x43ed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED94u;
        // 0x43ed98: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed94) {
            ctx->pc = 0x43EDA4u;
            goto label_43eda4;
        }
    }
    ctx->pc = 0x43ED9Cu;
label_43ed9c:
    // 0x43ed9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_43eda0:
    if (ctx->pc == 0x43EDA0u) {
        ctx->pc = 0x43EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED9Cu;
        // 0x43eda0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EDA4u;
        goto label_43eda4;
    }
    ctx->pc = 0x43ED9Cu;
    {
        const bool branch_taken_0x43ed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ED9Cu;
        // 0x43eda0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ed9c) {
            ctx->pc = 0x43EDA8u;
            goto label_43eda8;
        }
    }
    ctx->pc = 0x43EDA4u;
label_43eda4:
    // 0x43eda4: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x43eda4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43eda8:
    // 0x43eda8: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_43edac:
    if (ctx->pc == 0x43EDACu) {
        ctx->pc = 0x43EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDA8u;
        // 0x43edac: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EDB0u;
        goto label_43edb0;
    }
    ctx->pc = 0x43EDA8u;
    {
        const bool branch_taken_0x43eda8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x43EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDA8u;
        // 0x43edac: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eda8) {
            ctx->pc = 0x43EDE0u;
            goto label_43ede0;
        }
    }
    ctx->pc = 0x43EDB0u;
label_43edb0:
    // 0x43edb0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x43edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_43edb4:
    // 0x43edb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_43edb8:
    if (ctx->pc == 0x43EDB8u) {
        ctx->pc = 0x43EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDB4u;
        // 0x43edb8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EDBCu;
        goto label_43edbc;
    }
    ctx->pc = 0x43EDB4u;
    {
        const bool branch_taken_0x43edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDB4u;
        // 0x43edb8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43edb4) {
            ctx->pc = 0x43EDC8u;
            goto label_43edc8;
        }
    }
    ctx->pc = 0x43EDBCu;
label_43edbc:
    // 0x43edbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43edc0:
    // 0x43edc0: 0x1000000a  b           . + 4 + (0xA << 2)
label_43edc4:
    if (ctx->pc == 0x43EDC4u) {
        ctx->pc = 0x43EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDC0u;
        // 0x43edc4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EDC8u;
        goto label_43edc8;
    }
    ctx->pc = 0x43EDC0u;
    {
        const bool branch_taken_0x43edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDC0u;
        // 0x43edc4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43edc0) {
            ctx->pc = 0x43EDECu;
            goto label_43edec;
        }
    }
    ctx->pc = 0x43EDC8u;
label_43edc8:
    // 0x43edc8: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x43edc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_43edcc:
    // 0x43edcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_43edd0:
    if (ctx->pc == 0x43EDD0u) {
        ctx->pc = 0x43EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDCCu;
        // 0x43edd0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EDD4u;
        goto label_43edd4;
    }
    ctx->pc = 0x43EDCCu;
    {
        const bool branch_taken_0x43edcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDCCu;
        // 0x43edd0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43edcc) {
            ctx->pc = 0x43EDF0u;
            goto label_43edf0;
        }
    }
    ctx->pc = 0x43EDD4u;
label_43edd4:
    // 0x43edd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43edd8:
    // 0x43edd8: 0x10000004  b           . + 4 + (0x4 << 2)
label_43eddc:
    if (ctx->pc == 0x43EDDCu) {
        ctx->pc = 0x43EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDD8u;
        // 0x43eddc: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EDE0u;
        goto label_43ede0;
    }
    ctx->pc = 0x43EDD8u;
    {
        const bool branch_taken_0x43edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDD8u;
        // 0x43eddc: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43edd8) {
            ctx->pc = 0x43EDECu;
            goto label_43edec;
        }
    }
    ctx->pc = 0x43EDE0u;
label_43ede0:
    // 0x43ede0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x43ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_43ede4:
    // 0x43ede4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43ede8:
    // 0x43ede8: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x43ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_43edec:
    // 0x43edec: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x43edecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_43edf0:
    // 0x43edf0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_43edf4:
    if (ctx->pc == 0x43EDF4u) {
        ctx->pc = 0x43EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDF0u;
        // 0x43edf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EDF8u;
        goto label_43edf8;
    }
    ctx->pc = 0x43EDF0u;
    {
        const bool branch_taken_0x43edf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDF0u;
        // 0x43edf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43edf0) {
            ctx->pc = 0x43EE24u;
            goto label_43ee24;
        }
    }
    ctx->pc = 0x43EDF8u;
label_43edf8:
    // 0x43edf8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x43edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_43edfc:
    // 0x43edfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43ee00:
    if (ctx->pc == 0x43EE00u) {
        ctx->pc = 0x43EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDFCu;
        // 0x43ee00: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE04u;
        goto label_43ee04;
    }
    ctx->pc = 0x43EDFCu;
    {
        const bool branch_taken_0x43edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EDFCu;
        // 0x43ee00: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43edfc) {
            ctx->pc = 0x43EE0Cu;
            goto label_43ee0c;
        }
    }
    ctx->pc = 0x43EE04u;
label_43ee04:
    // 0x43ee04: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_43ee08:
    if (ctx->pc == 0x43EE08u) {
        ctx->pc = 0x43EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE04u;
        // 0x43ee08: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE0Cu;
        goto label_43ee0c;
    }
    ctx->pc = 0x43EE04u;
    {
        const bool branch_taken_0x43ee04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE04u;
        // 0x43ee08: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee04) {
            ctx->pc = 0x43EE80u;
            goto label_43ee80;
        }
    }
    ctx->pc = 0x43EE0Cu;
label_43ee0c:
    // 0x43ee0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x43ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43ee10:
    // 0x43ee10: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43ee10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43ee14:
    // 0x43ee14: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ee14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ee18:
    // 0x43ee18: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x43ee18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_43ee1c:
    // 0x43ee1c: 0x10000019  b           . + 4 + (0x19 << 2)
label_43ee20:
    if (ctx->pc == 0x43EE20u) {
        ctx->pc = 0x43EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE1Cu;
        // 0x43ee20: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE24u;
        goto label_43ee24;
    }
    ctx->pc = 0x43EE1Cu;
    {
        const bool branch_taken_0x43ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE1Cu;
        // 0x43ee20: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee1c) {
            ctx->pc = 0x43EE84u;
            goto label_43ee84;
        }
    }
    ctx->pc = 0x43EE24u;
label_43ee24:
    // 0x43ee24: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x43ee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_43ee28:
    // 0x43ee28: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x43ee28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_43ee2c:
    // 0x43ee2c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x43ee2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_43ee30:
    // 0x43ee30: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_43ee34:
    if (ctx->pc == 0x43EE34u) {
        ctx->pc = 0x43EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE30u;
        // 0x43ee34: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE38u;
        goto label_43ee38;
    }
    ctx->pc = 0x43EE30u;
    {
        const bool branch_taken_0x43ee30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE30u;
        // 0x43ee34: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee30) {
            ctx->pc = 0x43EE80u;
            goto label_43ee80;
        }
    }
    ctx->pc = 0x43EE38u;
label_43ee38:
    // 0x43ee38: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ee38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ee3c:
    // 0x43ee3c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43ee3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43ee40:
    // 0x43ee40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ee44:
    // 0x43ee44: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x43ee44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_43ee48:
    // 0x43ee48: 0xc1365f8  jal         func_4D97E0
label_43ee4c:
    if (ctx->pc == 0x43EE4Cu) {
        ctx->pc = 0x43EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE48u;
        // 0x43ee4c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE50u;
        goto label_43ee50;
    }
    ctx->pc = 0x43EE48u;
    SET_GPR_U32(ctx, 31, 0x43EE50u);
    ctx->pc = 0x43EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EE48u;
    // 0x43ee4c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D97E0u, 0x43EE48u, 0x43EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EE50u;
label_43ee50:
    // 0x43ee50: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x43ee50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_43ee54:
    // 0x43ee54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ee58:
    // 0x43ee58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x43ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_43ee5c:
    // 0x43ee5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x43ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_43ee60:
    // 0x43ee60: 0xc13643c  jal         func_4D90F0
label_43ee64:
    if (ctx->pc == 0x43EE64u) {
        ctx->pc = 0x43EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE60u;
        // 0x43ee64: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE68u;
        goto label_43ee68;
    }
    ctx->pc = 0x43EE60u;
    SET_GPR_U32(ctx, 31, 0x43EE68u);
    ctx->pc = 0x43EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EE60u;
    // 0x43ee64: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D90F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D90F0u, 0x43EE60u, 0x43EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EE68u;
label_43ee68:
    // 0x43ee68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43ee68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_43ee6c:
    // 0x43ee6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43ee6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43ee70:
    // 0x43ee70: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_43ee74:
    if (ctx->pc == 0x43EE74u) {
        ctx->pc = 0x43EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE70u;
        // 0x43ee74: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE78u;
        goto label_43ee78;
    }
    ctx->pc = 0x43EE70u;
    {
        const bool branch_taken_0x43ee70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE70u;
        // 0x43ee74: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee70) {
            ctx->pc = 0x43EE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ee40;
        }
    }
    ctx->pc = 0x43EE78u;
label_43ee78:
    // 0x43ee78: 0x10000004  b           . + 4 + (0x4 << 2)
label_43ee7c:
    if (ctx->pc == 0x43EE7Cu) {
        ctx->pc = 0x43EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE78u;
        // 0x43ee7c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE80u;
        goto label_43ee80;
    }
    ctx->pc = 0x43EE78u;
    {
        const bool branch_taken_0x43ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE78u;
        // 0x43ee7c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee78) {
            ctx->pc = 0x43EE8Cu;
            goto label_43ee8c;
        }
    }
    ctx->pc = 0x43EE80u;
label_43ee80:
    // 0x43ee80: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ee80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ee84:
    // 0x43ee84: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43ee84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43ee88:
    // 0x43ee88: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x43ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_43ee8c:
    // 0x43ee8c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_43ee90:
    if (ctx->pc == 0x43EE90u) {
        ctx->pc = 0x43EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE8Cu;
        // 0x43ee90: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EE94u;
        goto label_43ee94;
    }
    ctx->pc = 0x43EE8Cu;
    {
        const bool branch_taken_0x43ee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE8Cu;
        // 0x43ee90: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee8c) {
            ctx->pc = 0x43F214u;
            goto label_43f214;
        }
    }
    ctx->pc = 0x43EE94u;
label_43ee94:
    // 0x43ee94: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x43ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_43ee98:
    // 0x43ee98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_43ee9c:
    if (ctx->pc == 0x43EE9Cu) {
        ctx->pc = 0x43EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE98u;
        // 0x43ee9c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EEA0u;
        goto label_43eea0;
    }
    ctx->pc = 0x43EE98u;
    {
        const bool branch_taken_0x43ee98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EE98u;
        // 0x43ee9c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ee98) {
            ctx->pc = 0x43EEACu;
            goto label_43eeac;
        }
    }
    ctx->pc = 0x43EEA0u;
label_43eea0:
    // 0x43eea0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43eea0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43eea4:
    // 0x43eea4: 0x10000006  b           . + 4 + (0x6 << 2)
label_43eea8:
    if (ctx->pc == 0x43EEA8u) {
        ctx->pc = 0x43EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEA4u;
        // 0x43eea8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EEACu;
        goto label_43eeac;
    }
    ctx->pc = 0x43EEA4u;
    {
        const bool branch_taken_0x43eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEA4u;
        // 0x43eea8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eea4) {
            ctx->pc = 0x43EEC0u;
            goto label_43eec0;
        }
    }
    ctx->pc = 0x43EEACu;
label_43eeac:
    // 0x43eeac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43eeb0:
    if (ctx->pc == 0x43EEB0u) {
        ctx->pc = 0x43EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEACu;
        // 0x43eeb0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EEB4u;
        goto label_43eeb4;
    }
    ctx->pc = 0x43EEACu;
    {
        const bool branch_taken_0x43eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEACu;
        // 0x43eeb0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eeac) {
            ctx->pc = 0x43EEBCu;
            goto label_43eebc;
        }
    }
    ctx->pc = 0x43EEB4u;
label_43eeb4:
    // 0x43eeb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_43eeb8:
    if (ctx->pc == 0x43EEB8u) {
        ctx->pc = 0x43EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEB4u;
        // 0x43eeb8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EEBCu;
        goto label_43eebc;
    }
    ctx->pc = 0x43EEB4u;
    {
        const bool branch_taken_0x43eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEB4u;
        // 0x43eeb8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eeb4) {
            ctx->pc = 0x43EEC0u;
            goto label_43eec0;
        }
    }
    ctx->pc = 0x43EEBCu;
label_43eebc:
    // 0x43eebc: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x43eebcu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43eec0:
    // 0x43eec0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_43eec4:
    if (ctx->pc == 0x43EEC4u) {
        ctx->pc = 0x43EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEC0u;
        // 0x43eec4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EEC8u;
        goto label_43eec8;
    }
    ctx->pc = 0x43EEC0u;
    {
        const bool branch_taken_0x43eec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEC0u;
        // 0x43eec4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eec0) {
            ctx->pc = 0x43EEF0u;
            goto label_43eef0;
        }
    }
    ctx->pc = 0x43EEC8u;
label_43eec8:
    // 0x43eec8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x43eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_43eecc:
    // 0x43eecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43eed0:
    if (ctx->pc == 0x43EED0u) {
        ctx->pc = 0x43EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EECCu;
        // 0x43eed0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EED4u;
        goto label_43eed4;
    }
    ctx->pc = 0x43EECCu;
    {
        const bool branch_taken_0x43eecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EECCu;
        // 0x43eed0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eecc) {
            ctx->pc = 0x43EEDCu;
            goto label_43eedc;
        }
    }
    ctx->pc = 0x43EED4u;
label_43eed4:
    // 0x43eed4: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_43eed8:
    if (ctx->pc == 0x43EED8u) {
        ctx->pc = 0x43EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EED4u;
        // 0x43eed8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EEDCu;
        goto label_43eedc;
    }
    ctx->pc = 0x43EED4u;
    {
        const bool branch_taken_0x43eed4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EED4u;
        // 0x43eed8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eed4) {
            ctx->pc = 0x43EF40u;
            goto label_43ef40;
        }
    }
    ctx->pc = 0x43EEDCu;
label_43eedc:
    // 0x43eedc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43eedcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43eee0:
    // 0x43eee0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x43eee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_43eee4:
    // 0x43eee4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43eee4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43eee8:
    // 0x43eee8: 0x10000016  b           . + 4 + (0x16 << 2)
label_43eeec:
    if (ctx->pc == 0x43EEECu) {
        ctx->pc = 0x43EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEE8u;
        // 0x43eeec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EEF0u;
        goto label_43eef0;
    }
    ctx->pc = 0x43EEE8u;
    {
        const bool branch_taken_0x43eee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EEE8u;
        // 0x43eeec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43eee8) {
            ctx->pc = 0x43EF44u;
            goto label_43ef44;
        }
    }
    ctx->pc = 0x43EEF0u;
label_43eef0:
    // 0x43eef0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43eef0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43eef4:
    // 0x43eef4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43eef4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43eef8:
    // 0x43eef8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43eef8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43eefc:
    // 0x43eefc: 0x0  nop
    ctx->pc = 0x43eefcu;
    // NOP
label_43ef00:
    // 0x43ef00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ef00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ef04:
    // 0x43ef04: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x43ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_43ef08:
    // 0x43ef08: 0xc10f1c0  jal         func_43C700
label_43ef0c:
    if (ctx->pc == 0x43EF0Cu) {
        ctx->pc = 0x43EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF08u;
        // 0x43ef0c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF10u;
        goto label_43ef10;
    }
    ctx->pc = 0x43EF08u;
    SET_GPR_U32(ctx, 31, 0x43EF10u);
    ctx->pc = 0x43EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EF08u;
    // 0x43ef0c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C700u, 0x43EF08u, 0x43EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EF10u;
label_43ef10:
    // 0x43ef10: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x43ef10u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_43ef14:
    // 0x43ef14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ef18:
    // 0x43ef18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x43ef18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_43ef1c:
    // 0x43ef1c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x43ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_43ef20:
    // 0x43ef20: 0xc10acae  jal         func_42B2B8
label_43ef24:
    if (ctx->pc == 0x43EF24u) {
        ctx->pc = 0x43EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF20u;
        // 0x43ef24: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF28u;
        goto label_43ef28;
    }
    ctx->pc = 0x43EF20u;
    SET_GPR_U32(ctx, 31, 0x43EF28u);
    ctx->pc = 0x43EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EF20u;
    // 0x43ef24: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x43EF20u, 0x43EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EF28u;
label_43ef28:
    // 0x43ef28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43ef28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_43ef2c:
    // 0x43ef2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43ef2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43ef30:
    // 0x43ef30: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_43ef34:
    if (ctx->pc == 0x43EF34u) {
        ctx->pc = 0x43EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF30u;
        // 0x43ef34: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF38u;
        goto label_43ef38;
    }
    ctx->pc = 0x43EF30u;
    {
        const bool branch_taken_0x43ef30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF30u;
        // 0x43ef34: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef30) {
            ctx->pc = 0x43EF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ef00;
        }
    }
    ctx->pc = 0x43EF38u;
label_43ef38:
    // 0x43ef38: 0x10000004  b           . + 4 + (0x4 << 2)
label_43ef3c:
    if (ctx->pc == 0x43EF3Cu) {
        ctx->pc = 0x43EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF38u;
        // 0x43ef3c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF40u;
        goto label_43ef40;
    }
    ctx->pc = 0x43EF38u;
    {
        const bool branch_taken_0x43ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF38u;
        // 0x43ef3c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef38) {
            ctx->pc = 0x43EF4Cu;
            goto label_43ef4c;
        }
    }
    ctx->pc = 0x43EF40u;
label_43ef40:
    // 0x43ef40: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43ef40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43ef44:
    // 0x43ef44: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43ef44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43ef48:
    // 0x43ef48: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x43ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_43ef4c:
    // 0x43ef4c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x43ef4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43ef50:
    // 0x43ef50: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_43ef54:
    if (ctx->pc == 0x43EF54u) {
        ctx->pc = 0x43EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF50u;
        // 0x43ef54: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF58u;
        goto label_43ef58;
    }
    ctx->pc = 0x43EF50u;
    {
        const bool branch_taken_0x43ef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF50u;
        // 0x43ef54: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef50) {
            ctx->pc = 0x43F218u;
            goto label_43f218;
        }
    }
    ctx->pc = 0x43EF58u;
label_43ef58:
    // 0x43ef58: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43ef58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43ef5c:
    // 0x43ef5c: 0xc10b13c  jal         func_42C4F0
label_43ef60:
    if (ctx->pc == 0x43EF60u) {
        ctx->pc = 0x43EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF5Cu;
        // 0x43ef60: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF64u;
        goto label_43ef64;
    }
    ctx->pc = 0x43EF5Cu;
    SET_GPR_U32(ctx, 31, 0x43EF64u);
    ctx->pc = 0x43EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EF5Cu;
    // 0x43ef60: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x43EF5Cu, 0x43EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EF64u;
label_43ef64:
    // 0x43ef64: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x43ef64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_43ef68:
    // 0x43ef68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x43ef68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43ef6c:
    // 0x43ef6c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x43ef6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43ef70:
    // 0x43ef70: 0x0  nop
    ctx->pc = 0x43ef70u;
    // NOP
label_43ef74:
    // 0x43ef74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_43ef78:
    if (ctx->pc == 0x43EF78u) {
        ctx->pc = 0x43EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF74u;
        // 0x43ef78: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF7Cu;
        goto label_43ef7c;
    }
    ctx->pc = 0x43EF74u;
    {
        const bool branch_taken_0x43ef74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x43EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF74u;
        // 0x43ef78: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef74) {
            ctx->pc = 0x43EF8Cu;
            goto label_43ef8c;
        }
    }
    ctx->pc = 0x43EF7Cu;
label_43ef7c:
    // 0x43ef7c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x43ef7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43ef80:
    // 0x43ef80: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43ef84:
    // 0x43ef84: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_43ef88:
    if (ctx->pc == 0x43EF88u) {
        ctx->pc = 0x43EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF84u;
        // 0x43ef88: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF8Cu;
        goto label_43ef8c;
    }
    ctx->pc = 0x43EF84u;
    {
        const bool branch_taken_0x43ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF84u;
        // 0x43ef88: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ef84) {
            ctx->pc = 0x43F6A4u;
            goto label_43f6a4;
        }
    }
    ctx->pc = 0x43EF8Cu;
label_43ef8c:
    // 0x43ef8c: 0xc10b1f8  jal         func_42C7E0
label_43ef90:
    if (ctx->pc == 0x43EF90u) {
        ctx->pc = 0x43EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EF8Cu;
        // 0x43ef90: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EF94u;
        goto label_43ef94;
    }
    ctx->pc = 0x43EF8Cu;
    SET_GPR_U32(ctx, 31, 0x43EF94u);
    ctx->pc = 0x43EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EF8Cu;
    // 0x43ef90: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x43EF8Cu, 0x43EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EF94u;
label_43ef94:
    // 0x43ef94: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x43ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43ef98:
    // 0x43ef98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x43ef98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43ef9c:
    // 0x43ef9c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x43ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43efa0:
    // 0x43efa0: 0xc10fa10  jal         func_43E840
label_43efa4:
    if (ctx->pc == 0x43EFA4u) {
        ctx->pc = 0x43EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFA0u;
        // 0x43efa4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFA8u;
        goto label_43efa8;
    }
    ctx->pc = 0x43EFA0u;
    SET_GPR_U32(ctx, 31, 0x43EFA8u);
    ctx->pc = 0x43EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EFA0u;
    // 0x43efa4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E840u, 0x43EFA0u, 0x43EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EFA8u;
label_43efa8:
    // 0x43efa8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x43efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43efac:
    // 0x43efac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x43efacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_43efb0:
    // 0x43efb0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x43efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_43efb4:
    // 0x43efb4: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_43efb8:
    if (ctx->pc == 0x43EFB8u) {
        ctx->pc = 0x43EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFB4u;
        // 0x43efb8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFBCu;
        goto label_43efbc;
    }
    ctx->pc = 0x43EFB4u;
    {
        const bool branch_taken_0x43efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFB4u;
        // 0x43efb8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43efb4) {
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43EFBCu;
label_43efbc:
    // 0x43efbc: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43efbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43efc0:
    // 0x43efc0: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x43efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43efc4:
    // 0x43efc4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_43efc8:
    if (ctx->pc == 0x43EFC8u) {
        ctx->pc = 0x43EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFC4u;
        // 0x43efc8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFCCu;
        goto label_43efcc;
    }
    ctx->pc = 0x43EFC4u;
    {
        const bool branch_taken_0x43efc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFC4u;
        // 0x43efc8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43efc4) {
            ctx->pc = 0x43F050u;
            goto label_43f050;
        }
    }
    ctx->pc = 0x43EFCCu;
label_43efcc:
    // 0x43efcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43efccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43efd0:
    // 0x43efd0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x43efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_43efd4:
    // 0x43efd4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43efd8:
    // 0x43efd8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43efdc:
    // 0x43efdc: 0x60f809  jalr        $v1
label_43efe0:
    if (ctx->pc == 0x43EFE0u) {
        ctx->pc = 0x43EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFDCu;
        // 0x43efe0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFE4u;
        goto label_43efe4;
    }
    ctx->pc = 0x43EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43EFE4u);
        ctx->pc = 0x43EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFDCu;
        // 0x43efe0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EFDCu, 0x43EFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43EFE4u;
label_43efe4:
    // 0x43efe4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43efe8:
    // 0x43efe8: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x43efe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_43efec:
    // 0x43efec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43eff0:
    // 0x43eff0: 0x60f809  jalr        $v1
label_43eff4:
    if (ctx->pc == 0x43EFF4u) {
        ctx->pc = 0x43EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFF0u;
        // 0x43eff4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EFF8u;
        goto label_43eff8;
    }
    ctx->pc = 0x43EFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43EFF8u);
        ctx->pc = 0x43EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EFF0u;
        // 0x43eff4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EFF0u, 0x43EFF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43EFF8u;
label_43eff8:
    // 0x43eff8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43effc:
    // 0x43effc: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x43effcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_43f000:
    // 0x43f000: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f004:
    // 0x43f004: 0x60f809  jalr        $v1
label_43f008:
    if (ctx->pc == 0x43F008u) {
        ctx->pc = 0x43F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F004u;
        // 0x43f008: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F00Cu;
        goto label_43f00c;
    }
    ctx->pc = 0x43F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F00Cu);
        ctx->pc = 0x43F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F004u;
        // 0x43f008: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F004u, 0x43F00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F00Cu;
label_43f00c:
    // 0x43f00c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f010:
    // 0x43f010: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x43f010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_43f014:
    // 0x43f014: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f018:
    // 0x43f018: 0x60f809  jalr        $v1
label_43f01c:
    if (ctx->pc == 0x43F01Cu) {
        ctx->pc = 0x43F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F018u;
        // 0x43f01c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F020u;
        goto label_43f020;
    }
    ctx->pc = 0x43F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F020u);
        ctx->pc = 0x43F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F018u;
        // 0x43f01c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F018u, 0x43F020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F020u;
label_43f020:
    // 0x43f020: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f024:
    // 0x43f024: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x43f024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_43f028:
    // 0x43f028: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f02c:
    // 0x43f02c: 0x60f809  jalr        $v1
label_43f030:
    if (ctx->pc == 0x43F030u) {
        ctx->pc = 0x43F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F02Cu;
        // 0x43f030: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F034u;
        goto label_43f034;
    }
    ctx->pc = 0x43F02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F034u);
        ctx->pc = 0x43F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F02Cu;
        // 0x43f030: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F02Cu, 0x43F034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F034u;
label_43f034:
    // 0x43f034: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f038:
    // 0x43f038: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x43f038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_43f03c:
    // 0x43f03c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f040:
    // 0x43f040: 0x60f809  jalr        $v1
label_43f044:
    if (ctx->pc == 0x43F044u) {
        ctx->pc = 0x43F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F040u;
        // 0x43f044: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F048u;
        goto label_43f048;
    }
    ctx->pc = 0x43F040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F048u);
        ctx->pc = 0x43F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F040u;
        // 0x43f044: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F040u, 0x43F048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F048u;
label_43f048:
    // 0x43f048: 0x1000019e  b           . + 4 + (0x19E << 2)
label_43f04c:
    if (ctx->pc == 0x43F04Cu) {
        ctx->pc = 0x43F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F048u;
        // 0x43f04c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F050u;
        goto label_43f050;
    }
    ctx->pc = 0x43F048u;
    {
        const bool branch_taken_0x43f048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F048u;
        // 0x43f04c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f048) {
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43F050u;
label_43f050:
    // 0x43f050: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_43f054:
    if (ctx->pc == 0x43F054u) {
        ctx->pc = 0x43F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F050u;
        // 0x43f054: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F058u;
        goto label_43f058;
    }
    ctx->pc = 0x43F050u;
    {
        const bool branch_taken_0x43f050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F050u;
        // 0x43f054: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f050) {
            ctx->pc = 0x43F0B0u;
            goto label_43f0b0;
        }
    }
    ctx->pc = 0x43F058u;
label_43f058:
    // 0x43f058: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_43f05c:
    if (ctx->pc == 0x43F05Cu) {
        ctx->pc = 0x43F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F058u;
        // 0x43f05c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F060u;
        goto label_43f060;
    }
    ctx->pc = 0x43F058u;
    {
        const bool branch_taken_0x43f058 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x43F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F058u;
        // 0x43f05c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f058) {
            ctx->pc = 0x43F09Cu;
            goto label_43f09c;
        }
    }
    ctx->pc = 0x43F060u;
label_43f060:
    // 0x43f060: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x43f060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_43f064:
    // 0x43f064: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_43f068:
    if (ctx->pc == 0x43F068u) {
        ctx->pc = 0x43F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F064u;
        // 0x43f068: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F06Cu;
        goto label_43f06c;
    }
    ctx->pc = 0x43F064u;
    {
        const bool branch_taken_0x43f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F064u;
        // 0x43f068: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f064) {
            ctx->pc = 0x43F09Cu;
            goto label_43f09c;
        }
    }
    ctx->pc = 0x43F06Cu;
label_43f06c:
    // 0x43f06c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f06cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f070:
    // 0x43f070: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f070u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f074:
    // 0x43f074: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f074u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f078:
    // 0x43f078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43f078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43f07c:
    // 0x43f07c: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x43f07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_43f080:
    // 0x43f080: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_43f084:
    if (ctx->pc == 0x43F084u) {
        ctx->pc = 0x43F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F080u;
        // 0x43f084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F088u;
        goto label_43f088;
    }
    ctx->pc = 0x43F080u;
    {
        const bool branch_taken_0x43f080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F080u;
        // 0x43f084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f080) {
            ctx->pc = 0x43F0F8u;
            goto label_43f0f8;
        }
    }
    ctx->pc = 0x43F088u;
label_43f088:
    // 0x43f088: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x43f088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_43f08c:
    // 0x43f08c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_43f090:
    if (ctx->pc == 0x43F090u) {
        ctx->pc = 0x43F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F08Cu;
        // 0x43f090: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F094u;
        goto label_43f094;
    }
    ctx->pc = 0x43F08Cu;
    {
        const bool branch_taken_0x43f08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F08Cu;
        // 0x43f090: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f08c) {
            ctx->pc = 0x43F078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f078;
        }
    }
    ctx->pc = 0x43F094u;
label_43f094:
    // 0x43f094: 0x10000060  b           . + 4 + (0x60 << 2)
label_43f098:
    if (ctx->pc == 0x43F098u) {
        ctx->pc = 0x43F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F094u;
        // 0x43f098: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F09Cu;
        goto label_43f09c;
    }
    ctx->pc = 0x43F094u;
    {
        const bool branch_taken_0x43f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F094u;
        // 0x43f098: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f094) {
            ctx->pc = 0x43F218u;
            goto label_43f218;
        }
    }
    ctx->pc = 0x43F09Cu;
label_43f09c:
    // 0x43f09c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f09cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f0a0:
    // 0x43f0a0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f0a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f0a4:
    // 0x43f0a4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f0a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f0a8:
    // 0x43f0a8: 0x10000013  b           . + 4 + (0x13 << 2)
label_43f0ac:
    if (ctx->pc == 0x43F0ACu) {
        ctx->pc = 0x43F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0A8u;
        // 0x43f0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F0B0u;
        goto label_43f0b0;
    }
    ctx->pc = 0x43F0A8u;
    {
        const bool branch_taken_0x43f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0A8u;
        // 0x43f0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f0a8) {
            ctx->pc = 0x43F0F8u;
            goto label_43f0f8;
        }
    }
    ctx->pc = 0x43F0B0u;
label_43f0b0:
    // 0x43f0b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x43f0b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_43f0b4:
    // 0x43f0b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_43f0b8:
    if (ctx->pc == 0x43F0B8u) {
        ctx->pc = 0x43F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0B4u;
        // 0x43f0b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F0BCu;
        goto label_43f0bc;
    }
    ctx->pc = 0x43F0B4u;
    {
        const bool branch_taken_0x43f0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0B4u;
        // 0x43f0b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f0b4) {
            ctx->pc = 0x43F0ECu;
            goto label_43f0ec;
        }
    }
    ctx->pc = 0x43F0BCu;
label_43f0bc:
    // 0x43f0bc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f0bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f0c0:
    // 0x43f0c0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f0c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f0c4:
    // 0x43f0c4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f0c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f0c8:
    // 0x43f0c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43f0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43f0cc:
    // 0x43f0cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x43f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_43f0d0:
    // 0x43f0d0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x43f0d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_43f0d4:
    // 0x43f0d4: 0x0  nop
    ctx->pc = 0x43f0d4u;
    // NOP
label_43f0d8:
    // 0x43f0d8: 0x0  nop
    ctx->pc = 0x43f0d8u;
    // NOP
label_43f0dc:
    // 0x43f0dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_43f0e0:
    if (ctx->pc == 0x43F0E0u) {
        ctx->pc = 0x43F0E4u;
        goto label_43f0e4;
    }
    ctx->pc = 0x43F0DCu;
    {
        const bool branch_taken_0x43f0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43f0dc) {
            ctx->pc = 0x43F0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f0c8;
        }
    }
    ctx->pc = 0x43F0E4u;
label_43f0e4:
    // 0x43f0e4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_43f0e8:
    if (ctx->pc == 0x43F0E8u) {
        ctx->pc = 0x43F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0E4u;
        // 0x43f0e8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F0ECu;
        goto label_43f0ec;
    }
    ctx->pc = 0x43F0E4u;
    {
        const bool branch_taken_0x43f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0E4u;
        // 0x43f0e8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f0e4) {
            ctx->pc = 0x43F218u;
            goto label_43f218;
        }
    }
    ctx->pc = 0x43F0ECu;
label_43f0ec:
    // 0x43f0ec: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f0ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f0f0:
    // 0x43f0f0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f0f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f0f4:
    // 0x43f0f4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f0f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f0f8:
    // 0x43f0f8: 0x10000047  b           . + 4 + (0x47 << 2)
label_43f0fc:
    if (ctx->pc == 0x43F0FCu) {
        ctx->pc = 0x43F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0F8u;
        // 0x43f0fc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F100u;
        goto label_43f100;
    }
    ctx->pc = 0x43F0F8u;
    {
        const bool branch_taken_0x43f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F0F8u;
        // 0x43f0fc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f0f8) {
            ctx->pc = 0x43F218u;
            goto label_43f218;
        }
    }
    ctx->pc = 0x43F100u;
label_43f100:
    // 0x43f100: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43f100u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43f104:
    // 0x43f104: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x43f104u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_43f108:
    // 0x43f108: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x43f108u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43f10c:
    // 0x43f10c: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x43f10cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_43f110:
    // 0x43f110: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43f110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f114:
    // 0x43f114: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f114u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f118:
    // 0x43f118: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x43f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_43f11c:
    // 0x43f11c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f11cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f120:
    // 0x43f120: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x43f120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_43f124:
    // 0x43f124: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f124u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f128:
    // 0x43f128: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43f128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_43f12c:
    // 0x43f12c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x43f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_43f130:
    // 0x43f130: 0x10000038  b           . + 4 + (0x38 << 2)
label_43f134:
    if (ctx->pc == 0x43F134u) {
        ctx->pc = 0x43F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F130u;
        // 0x43f134: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F138u;
        goto label_43f138;
    }
    ctx->pc = 0x43F130u;
    {
        const bool branch_taken_0x43f130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F130u;
        // 0x43f134: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f130) {
            ctx->pc = 0x43F214u;
            goto label_43f214;
        }
    }
    ctx->pc = 0x43F138u;
label_43f138:
    // 0x43f138: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x43f138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_43f13c:
    // 0x43f13c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x43f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_43f140:
    // 0x43f140: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x43f140u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_43f144:
    // 0x43f144: 0x2444d910  addiu       $a0, $v0, -0x26F0
    ctx->pc = 0x43f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_43f148:
    // 0x43f148: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_43f14c:
    if (ctx->pc == 0x43F14Cu) {
        ctx->pc = 0x43F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F148u;
        // 0x43f14c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F150u;
        goto label_43f150;
    }
    ctx->pc = 0x43F148u;
    {
        const bool branch_taken_0x43f148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F148u;
        // 0x43f14c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f148) {
            ctx->pc = 0x43F178u;
            goto label_43f178;
        }
    }
    ctx->pc = 0x43F150u;
label_43f150:
    // 0x43f150: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x43f150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_43f154:
    // 0x43f154: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_43f158:
    if (ctx->pc == 0x43F158u) {
        ctx->pc = 0x43F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F154u;
        // 0x43f158: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F15Cu;
        goto label_43f15c;
    }
    ctx->pc = 0x43F154u;
    {
        const bool branch_taken_0x43f154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F154u;
        // 0x43f158: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f154) {
            ctx->pc = 0x43F164u;
            goto label_43f164;
        }
    }
    ctx->pc = 0x43F15Cu;
label_43f15c:
    // 0x43f15c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_43f160:
    if (ctx->pc == 0x43F160u) {
        ctx->pc = 0x43F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F15Cu;
        // 0x43f160: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F164u;
        goto label_43f164;
    }
    ctx->pc = 0x43F15Cu;
    {
        const bool branch_taken_0x43f15c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F15Cu;
        // 0x43f160: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f15c) {
            ctx->pc = 0x43F1B4u;
            goto label_43f1b4;
        }
    }
    ctx->pc = 0x43F164u;
label_43f164:
    // 0x43f164: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f164u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f168:
    // 0x43f168: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x43f168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_43f16c:
    // 0x43f16c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f16cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f170:
    // 0x43f170: 0x10000011  b           . + 4 + (0x11 << 2)
label_43f174:
    if (ctx->pc == 0x43F174u) {
        ctx->pc = 0x43F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F170u;
        // 0x43f174: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F178u;
        goto label_43f178;
    }
    ctx->pc = 0x43F170u;
    {
        const bool branch_taken_0x43f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F170u;
        // 0x43f174: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f170) {
            ctx->pc = 0x43F1B8u;
            goto label_43f1b8;
        }
    }
    ctx->pc = 0x43F178u;
label_43f178:
    // 0x43f178: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f178u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f17c:
    // 0x43f17c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f17cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f180:
    // 0x43f180: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f180u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f184:
    // 0x43f184: 0x0  nop
    ctx->pc = 0x43f184u;
    // NOP
label_43f188:
    // 0x43f188: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x43f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_43f18c:
    // 0x43f18c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_43f190:
    // 0x43f190: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43f190u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_43f194:
    // 0x43f194: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x43f194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_43f198:
    // 0x43f198: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x43f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f19c:
    // 0x43f19c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x43f19cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43f1a0:
    // 0x43f1a0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x43f1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_43f1a4:
    // 0x43f1a4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_43f1a8:
    if (ctx->pc == 0x43F1A8u) {
        ctx->pc = 0x43F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1A4u;
        // 0x43f1a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F1ACu;
        goto label_43f1ac;
    }
    ctx->pc = 0x43F1A4u;
    {
        const bool branch_taken_0x43f1a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1A4u;
        // 0x43f1a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f1a4) {
            ctx->pc = 0x43F188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f188;
        }
    }
    ctx->pc = 0x43F1ACu;
label_43f1ac:
    // 0x43f1ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_43f1b0:
    if (ctx->pc == 0x43F1B0u) {
        ctx->pc = 0x43F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1ACu;
        // 0x43f1b0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F1B4u;
        goto label_43f1b4;
    }
    ctx->pc = 0x43F1ACu;
    {
        const bool branch_taken_0x43f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1ACu;
        // 0x43f1b0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f1ac) {
            ctx->pc = 0x43F1C0u;
            goto label_43f1c0;
        }
    }
    ctx->pc = 0x43F1B4u;
label_43f1b4:
    // 0x43f1b4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f1b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f1b8:
    // 0x43f1b8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f1b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f1bc:
    // 0x43f1bc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x43f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43f1c0:
    // 0x43f1c0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x43f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_43f1c4:
    // 0x43f1c4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x43f1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_43f1c8:
    // 0x43f1c8: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x43f1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43f1cc:
    // 0x43f1cc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x43f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_43f1d0:
    // 0x43f1d0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x43f1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_43f1d4:
    // 0x43f1d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43f1d8:
    // 0x43f1d8: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x43f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_43f1dc:
    // 0x43f1dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_43f1e0:
    if (ctx->pc == 0x43F1E0u) {
        ctx->pc = 0x43F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1DCu;
        // 0x43f1e0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F1E4u;
        goto label_43f1e4;
    }
    ctx->pc = 0x43F1DCu;
    {
        const bool branch_taken_0x43f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1DCu;
        // 0x43f1e0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f1dc) {
            ctx->pc = 0x43F218u;
            goto label_43f218;
        }
    }
    ctx->pc = 0x43F1E4u;
label_43f1e4:
    // 0x43f1e4: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x43f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_43f1e8:
    // 0x43f1e8: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_43f1ec:
    if (ctx->pc == 0x43F1ECu) {
        ctx->pc = 0x43F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1E8u;
        // 0x43f1ec: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F1F0u;
        goto label_43f1f0;
    }
    ctx->pc = 0x43F1E8u;
    {
        const bool branch_taken_0x43f1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F1E8u;
        // 0x43f1ec: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f1e8) {
            ctx->pc = 0x43F6C0u;
            goto label_43f6c0;
        }
    }
    ctx->pc = 0x43F1F0u;
label_43f1f0:
    // 0x43f1f0: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x43f1f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_43f1f4:
    // 0x43f1f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43f1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f1f8:
    // 0x43f1f8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f1f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f1fc:
    // 0x43f1fc: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x43f1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_43f200:
    // 0x43f200: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x43f200u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_43f204:
    // 0x43f204: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x43f204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_43f208:
    // 0x43f208: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x43f208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_43f20c:
    // 0x43f20c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x43f20cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43f210:
    // 0x43f210: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x43f210u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_43f214:
    // 0x43f214: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x43f214u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_43f218:
    // 0x43f218: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x43f218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43f21c:
    // 0x43f21c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x43f21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f220:
    // 0x43f220: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x43f220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_43f224:
    // 0x43f224: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x43f224u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_43f228:
    // 0x43f228: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x43f228u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_43f22c:
    // 0x43f22c: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x43f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_43f230:
    // 0x43f230: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x43f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f234:
    // 0x43f234: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x43f234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_43f238:
    // 0x43f238: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x43f238u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_43f23c:
    // 0x43f23c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x43f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_43f240:
    // 0x43f240: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_43f244:
    if (ctx->pc == 0x43F244u) {
        ctx->pc = 0x43F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F240u;
        // 0x43f244: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F248u;
        goto label_43f248;
    }
    ctx->pc = 0x43F240u;
    {
        const bool branch_taken_0x43f240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F240u;
        // 0x43f244: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f240) {
            ctx->pc = 0x43F264u;
            goto label_43f264;
        }
    }
    ctx->pc = 0x43F248u;
label_43f248:
    // 0x43f248: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x43f248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_43f24c:
    // 0x43f24c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_43f250:
    if (ctx->pc == 0x43F250u) {
        ctx->pc = 0x43F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F24Cu;
        // 0x43f250: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F254u;
        goto label_43f254;
    }
    ctx->pc = 0x43F24Cu;
    {
        const bool branch_taken_0x43f24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F24Cu;
        // 0x43f250: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f24c) {
            ctx->pc = 0x43F284u;
            goto label_43f284;
        }
    }
    ctx->pc = 0x43F254u;
label_43f254:
    // 0x43f254: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x43f254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f258:
    // 0x43f258: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x43f258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43f25c:
    // 0x43f25c: 0x10000008  b           . + 4 + (0x8 << 2)
label_43f260:
    if (ctx->pc == 0x43F260u) {
        ctx->pc = 0x43F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F25Cu;
        // 0x43f260: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F264u;
        goto label_43f264;
    }
    ctx->pc = 0x43F25Cu;
    {
        const bool branch_taken_0x43f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F25Cu;
        // 0x43f260: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f25c) {
            ctx->pc = 0x43F280u;
            goto label_43f280;
        }
    }
    ctx->pc = 0x43F264u;
label_43f264:
    // 0x43f264: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x43f264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_43f268:
    // 0x43f268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x43f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43f26c:
    // 0x43f26c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_43f270:
    if (ctx->pc == 0x43F270u) {
        ctx->pc = 0x43F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F26Cu;
        // 0x43f270: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F274u;
        goto label_43f274;
    }
    ctx->pc = 0x43F26Cu;
    {
        const bool branch_taken_0x43f26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F26Cu;
        // 0x43f270: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f26c) {
            ctx->pc = 0x43F284u;
            goto label_43f284;
        }
    }
    ctx->pc = 0x43F274u;
label_43f274:
    // 0x43f274: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x43f274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f278:
    // 0x43f278: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x43f278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43f27c:
    // 0x43f27c: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x43f27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_43f280:
    // 0x43f280: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x43f280u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_43f284:
    // 0x43f284: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_43f288:
    if (ctx->pc == 0x43F288u) {
        ctx->pc = 0x43F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F284u;
        // 0x43f288: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F28Cu;
        goto label_43f28c;
    }
    ctx->pc = 0x43F284u;
    {
        const bool branch_taken_0x43f284 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F284u;
        // 0x43f288: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f284) {
            ctx->pc = 0x43F390u;
            goto label_43f390;
        }
    }
    ctx->pc = 0x43F28Cu;
label_43f28c:
    // 0x43f28c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_43f290:
    if (ctx->pc == 0x43F290u) {
        ctx->pc = 0x43F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F28Cu;
        // 0x43f290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F294u;
        goto label_43f294;
    }
    ctx->pc = 0x43F28Cu;
    {
        const bool branch_taken_0x43f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F28Cu;
        // 0x43f290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f28c) {
            ctx->pc = 0x43F2E4u;
            goto label_43f2e4;
        }
    }
    ctx->pc = 0x43F294u;
label_43f294:
    // 0x43f294: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x43f294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_43f298:
    // 0x43f298: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f298u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f29c:
    // 0x43f29c: 0x0  nop
    ctx->pc = 0x43f29cu;
    // NOP
label_43f2a0:
    // 0x43f2a0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x43f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43f2a4:
    // 0x43f2a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f2a8:
    // 0x43f2a8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x43f2a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43f2ac:
    // 0x43f2ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43f2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43f2b0:
    // 0x43f2b0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f2b4:
    // 0x43f2b4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f2b8:
    // 0x43f2b8: 0x60f809  jalr        $v1
label_43f2bc:
    if (ctx->pc == 0x43F2BCu) {
        ctx->pc = 0x43F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F2B8u;
        // 0x43f2bc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F2C0u;
        goto label_43f2c0;
    }
    ctx->pc = 0x43F2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F2C0u);
        ctx->pc = 0x43F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F2B8u;
        // 0x43f2bc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F2B8u, 0x43F2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F2C0u;
label_43f2c0:
    // 0x43f2c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f2c4:
    // 0x43f2c4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x43f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f2c8:
    // 0x43f2c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f2cc:
    // 0x43f2cc: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x43f2ccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43f2d0:
    // 0x43f2d0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x43f2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_43f2d4:
    // 0x43f2d4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_43f2d8:
    if (ctx->pc == 0x43F2D8u) {
        ctx->pc = 0x43F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F2D4u;
        // 0x43f2d8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F2DCu;
        goto label_43f2dc;
    }
    ctx->pc = 0x43F2D4u;
    {
        const bool branch_taken_0x43f2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F2D4u;
        // 0x43f2d8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f2d4) {
            ctx->pc = 0x43F2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f2a0;
        }
    }
    ctx->pc = 0x43F2DCu;
label_43f2dc:
    // 0x43f2dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_43f2e0:
    if (ctx->pc == 0x43F2E0u) {
        ctx->pc = 0x43F2E4u;
        goto label_43f2e4;
    }
    ctx->pc = 0x43F2DCu;
    {
        const bool branch_taken_0x43f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f2dc) {
            ctx->pc = 0x43F2E8u;
            goto label_43f2e8;
        }
    }
    ctx->pc = 0x43F2E4u;
label_43f2e4:
    // 0x43f2e4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f2e4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f2e8:
    // 0x43f2e8: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_43f2ec:
    if (ctx->pc == 0x43F2ECu) {
        ctx->pc = 0x43F2F0u;
        goto label_43f2f0;
    }
    ctx->pc = 0x43F2E8u;
    {
        const bool branch_taken_0x43f2e8 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x43f2e8) {
            ctx->pc = 0x43F320u;
            goto label_43f320;
        }
    }
    ctx->pc = 0x43F2F0u;
label_43f2f0:
    // 0x43f2f0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x43f2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43f2f4:
    // 0x43f2f4: 0x0  nop
    ctx->pc = 0x43f2f4u;
    // NOP
label_43f2f8:
    // 0x43f2f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f2fc:
    // 0x43f2fc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x43f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43f300:
    // 0x43f300: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f304:
    // 0x43f304: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f308:
    // 0x43f308: 0x60f809  jalr        $v1
label_43f30c:
    if (ctx->pc == 0x43F30Cu) {
        ctx->pc = 0x43F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F308u;
        // 0x43f30c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F310u;
        goto label_43f310;
    }
    ctx->pc = 0x43F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F310u);
        ctx->pc = 0x43F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F308u;
        // 0x43f30c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F308u, 0x43F310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F310u;
label_43f310:
    // 0x43f310: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f314:
    // 0x43f314: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f318:
    // 0x43f318: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_43f31c:
    if (ctx->pc == 0x43F31Cu) {
        ctx->pc = 0x43F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F318u;
        // 0x43f31c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F320u;
        goto label_43f320;
    }
    ctx->pc = 0x43F318u;
    {
        const bool branch_taken_0x43f318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F318u;
        // 0x43f31c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f318) {
            ctx->pc = 0x43F2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f2f8;
        }
    }
    ctx->pc = 0x43F320u;
label_43f320:
    // 0x43f320: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_43f324:
    if (ctx->pc == 0x43F324u) {
        ctx->pc = 0x43F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F320u;
        // 0x43f324: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F328u;
        goto label_43f328;
    }
    ctx->pc = 0x43F320u;
    {
        const bool branch_taken_0x43f320 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F320u;
        // 0x43f324: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f320) {
            ctx->pc = 0x43F358u;
            goto label_43f358;
        }
    }
    ctx->pc = 0x43F328u;
label_43f328:
    // 0x43f328: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x43f328u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_43f32c:
    // 0x43f32c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f330:
    // 0x43f330: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43f330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43f334:
    // 0x43f334: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f338:
    // 0x43f338: 0x60f809  jalr        $v1
label_43f33c:
    if (ctx->pc == 0x43F33Cu) {
        ctx->pc = 0x43F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F338u;
        // 0x43f33c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F340u;
        goto label_43f340;
    }
    ctx->pc = 0x43F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F340u);
        ctx->pc = 0x43F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F338u;
        // 0x43f33c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F338u, 0x43F340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F340u;
label_43f340:
    // 0x43f340: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f344:
    // 0x43f344: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f348:
    // 0x43f348: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x43f348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f34c:
    // 0x43f34c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_43f350:
    if (ctx->pc == 0x43F350u) {
        ctx->pc = 0x43F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F34Cu;
        // 0x43f350: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F354u;
        goto label_43f354;
    }
    ctx->pc = 0x43F34Cu;
    {
        const bool branch_taken_0x43f34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F34Cu;
        // 0x43f350: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f34c) {
            ctx->pc = 0x43F328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f328;
        }
    }
    ctx->pc = 0x43F354u;
label_43f354:
    // 0x43f354: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x43f354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f358:
    // 0x43f358: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_43f35c:
    if (ctx->pc == 0x43F35Cu) {
        ctx->pc = 0x43F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F358u;
        // 0x43f35c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F360u;
        goto label_43f360;
    }
    ctx->pc = 0x43F358u;
    {
        const bool branch_taken_0x43f358 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x43F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F358u;
        // 0x43f35c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f358) {
            ctx->pc = 0x43EFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43efb4;
        }
    }
    ctx->pc = 0x43F360u;
label_43f360:
    // 0x43f360: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f364:
    // 0x43f364: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x43f364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_43f368:
    // 0x43f368: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f36c:
    // 0x43f36c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f370:
    // 0x43f370: 0x60f809  jalr        $v1
label_43f374:
    if (ctx->pc == 0x43F374u) {
        ctx->pc = 0x43F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F370u;
        // 0x43f374: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F378u;
        goto label_43f378;
    }
    ctx->pc = 0x43F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F378u);
        ctx->pc = 0x43F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F370u;
        // 0x43f374: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F370u, 0x43F378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F378u;
label_43f378:
    // 0x43f378: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f37c:
    // 0x43f37c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f380:
    // 0x43f380: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_43f384:
    if (ctx->pc == 0x43F384u) {
        ctx->pc = 0x43F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F380u;
        // 0x43f384: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F388u;
        goto label_43f388;
    }
    ctx->pc = 0x43F380u;
    {
        const bool branch_taken_0x43f380 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F380u;
        // 0x43f384: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f380) {
            ctx->pc = 0x43F360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f360;
        }
    }
    ctx->pc = 0x43F388u;
label_43f388:
    // 0x43f388: 0x100000ce  b           . + 4 + (0xCE << 2)
label_43f38c:
    if (ctx->pc == 0x43F38Cu) {
        ctx->pc = 0x43F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F388u;
        // 0x43f38c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F390u;
        goto label_43f390;
    }
    ctx->pc = 0x43F388u;
    {
        const bool branch_taken_0x43f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F388u;
        // 0x43f38c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f388) {
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43F390u;
label_43f390:
    // 0x43f390: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x43f390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_43f394:
    // 0x43f394: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_43f398:
    if (ctx->pc == 0x43F398u) {
        ctx->pc = 0x43F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F394u;
        // 0x43f398: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F39Cu;
        goto label_43f39c;
    }
    ctx->pc = 0x43F394u;
    {
        const bool branch_taken_0x43f394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F394u;
        // 0x43f398: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f394) {
            ctx->pc = 0x43F574u;
            goto label_43f574;
        }
    }
    ctx->pc = 0x43F39Cu;
label_43f39c:
    // 0x43f39c: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_43f3a0:
    if (ctx->pc == 0x43F3A0u) {
        ctx->pc = 0x43F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F39Cu;
        // 0x43f3a0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F3A4u;
        goto label_43f3a4;
    }
    ctx->pc = 0x43F39Cu;
    {
        const bool branch_taken_0x43f39c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x43F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F39Cu;
        // 0x43f3a0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f39c) {
            ctx->pc = 0x43F458u;
            goto label_43f458;
        }
    }
    ctx->pc = 0x43F3A4u;
label_43f3a4:
    // 0x43f3a4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x43f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f3a8:
    // 0x43f3a8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_43f3ac:
    if (ctx->pc == 0x43F3ACu) {
        ctx->pc = 0x43F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3A8u;
        // 0x43f3ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F3B0u;
        goto label_43f3b0;
    }
    ctx->pc = 0x43F3A8u;
    {
        const bool branch_taken_0x43f3a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3A8u;
        // 0x43f3ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f3a8) {
            ctx->pc = 0x43F404u;
            goto label_43f404;
        }
    }
    ctx->pc = 0x43F3B0u;
label_43f3b0:
    // 0x43f3b0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x43f3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_43f3b4:
    // 0x43f3b4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f3b4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f3b8:
    // 0x43f3b8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x43f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43f3bc:
    // 0x43f3bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f3c0:
    // 0x43f3c0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x43f3c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43f3c4:
    // 0x43f3c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43f3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43f3c8:
    // 0x43f3c8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f3cc:
    // 0x43f3cc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f3d0:
    // 0x43f3d0: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x43f3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_43f3d4:
    // 0x43f3d4: 0x60f809  jalr        $v1
label_43f3d8:
    if (ctx->pc == 0x43F3D8u) {
        ctx->pc = 0x43F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3D4u;
        // 0x43f3d8: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F3DCu;
        goto label_43f3dc;
    }
    ctx->pc = 0x43F3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F3DCu);
        ctx->pc = 0x43F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3D4u;
        // 0x43f3d8: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F3D4u, 0x43F3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F3DCu;
label_43f3dc:
    // 0x43f3dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f3e0:
    // 0x43f3e0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x43f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f3e4:
    // 0x43f3e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f3e8:
    // 0x43f3e8: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x43f3e8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43f3ec:
    // 0x43f3ec: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x43f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_43f3f0:
    // 0x43f3f0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x43f3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_43f3f4:
    // 0x43f3f4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_43f3f8:
    if (ctx->pc == 0x43F3F8u) {
        ctx->pc = 0x43F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3F4u;
        // 0x43f3f8: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F3FCu;
        goto label_43f3fc;
    }
    ctx->pc = 0x43F3F4u;
    {
        const bool branch_taken_0x43f3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3F4u;
        // 0x43f3f8: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f3f4) {
            ctx->pc = 0x43F3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f3b8;
        }
    }
    ctx->pc = 0x43F3FCu;
label_43f3fc:
    // 0x43f3fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_43f400:
    if (ctx->pc == 0x43F400u) {
        ctx->pc = 0x43F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3FCu;
        // 0x43f400: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F404u;
        goto label_43f404;
    }
    ctx->pc = 0x43F3FCu;
    {
        const bool branch_taken_0x43f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F3FCu;
        // 0x43f400: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f3fc) {
            ctx->pc = 0x43F40Cu;
            goto label_43f40c;
        }
    }
    ctx->pc = 0x43F404u;
label_43f404:
    // 0x43f404: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f404u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f408:
    // 0x43f408: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x43f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f40c:
    // 0x43f40c: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_43f410:
    if (ctx->pc == 0x43F410u) {
        ctx->pc = 0x43F414u;
        goto label_43f414;
    }
    ctx->pc = 0x43F40Cu;
    {
        const bool branch_taken_0x43f40c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43f40c) {
            ctx->pc = 0x43F504u;
            goto label_43f504;
        }
    }
    ctx->pc = 0x43F414u;
label_43f414:
    // 0x43f414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43f414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f418:
    // 0x43f418: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f41c:
    // 0x43f41c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x43f41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43f420:
    // 0x43f420: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f424:
    // 0x43f424: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x43f424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_43f428:
    // 0x43f428: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f42c:
    // 0x43f42c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x43f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_43f430:
    // 0x43f430: 0x60f809  jalr        $v1
label_43f434:
    if (ctx->pc == 0x43F434u) {
        ctx->pc = 0x43F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F430u;
        // 0x43f434: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F438u;
        goto label_43f438;
    }
    ctx->pc = 0x43F430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F438u);
        ctx->pc = 0x43F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F430u;
        // 0x43f434: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F430u, 0x43F438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F438u;
label_43f438:
    // 0x43f438: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f43c:
    // 0x43f43c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x43f43cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43f440:
    // 0x43f440: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f444:
    // 0x43f444: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x43f444u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43f448:
    // 0x43f448: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_43f44c:
    if (ctx->pc == 0x43F44Cu) {
        ctx->pc = 0x43F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F448u;
        // 0x43f44c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F450u;
        goto label_43f450;
    }
    ctx->pc = 0x43F448u;
    {
        const bool branch_taken_0x43f448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F448u;
        // 0x43f44c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f448) {
            ctx->pc = 0x43F418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f418;
        }
    }
    ctx->pc = 0x43F450u;
label_43f450:
    // 0x43f450: 0x1000002c  b           . + 4 + (0x2C << 2)
label_43f454:
    if (ctx->pc == 0x43F454u) {
        ctx->pc = 0x43F458u;
        goto label_43f458;
    }
    ctx->pc = 0x43F450u;
    {
        const bool branch_taken_0x43f450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f450) {
            ctx->pc = 0x43F504u;
            goto label_43f504;
        }
    }
    ctx->pc = 0x43F458u;
label_43f458:
    // 0x43f458: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_43f45c:
    if (ctx->pc == 0x43F45Cu) {
        ctx->pc = 0x43F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F458u;
        // 0x43f45c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F460u;
        goto label_43f460;
    }
    ctx->pc = 0x43F458u;
    {
        const bool branch_taken_0x43f458 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x43F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F458u;
        // 0x43f45c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f458) {
            ctx->pc = 0x43F4B0u;
            goto label_43f4b0;
        }
    }
    ctx->pc = 0x43F460u;
label_43f460:
    // 0x43f460: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f460u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f464:
    // 0x43f464: 0x0  nop
    ctx->pc = 0x43f464u;
    // NOP
label_43f468:
    // 0x43f468: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f46c:
    // 0x43f46c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x43f46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43f470:
    // 0x43f470: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f474:
    // 0x43f474: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43f478:
    // 0x43f478: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f47c:
    // 0x43f47c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x43f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_43f480:
    // 0x43f480: 0x60f809  jalr        $v1
label_43f484:
    if (ctx->pc == 0x43F484u) {
        ctx->pc = 0x43F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F480u;
        // 0x43f484: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F488u;
        goto label_43f488;
    }
    ctx->pc = 0x43F480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F488u);
        ctx->pc = 0x43F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F480u;
        // 0x43f484: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F480u, 0x43F488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F488u;
label_43f488:
    // 0x43f488: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f48c:
    // 0x43f48c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x43f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f490:
    // 0x43f490: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f494:
    // 0x43f494: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x43f494u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43f498:
    // 0x43f498: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x43f498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_43f49c:
    // 0x43f49c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x43f49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_43f4a0:
    // 0x43f4a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_43f4a4:
    if (ctx->pc == 0x43F4A4u) {
        ctx->pc = 0x43F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4A0u;
        // 0x43f4a4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F4A8u;
        goto label_43f4a8;
    }
    ctx->pc = 0x43F4A0u;
    {
        const bool branch_taken_0x43f4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4A0u;
        // 0x43f4a4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f4a0) {
            ctx->pc = 0x43F468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f468;
        }
    }
    ctx->pc = 0x43F4A8u;
label_43f4a8:
    // 0x43f4a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_43f4ac:
    if (ctx->pc == 0x43F4ACu) {
        ctx->pc = 0x43F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4A8u;
        // 0x43f4ac: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F4B0u;
        goto label_43f4b0;
    }
    ctx->pc = 0x43F4A8u;
    {
        const bool branch_taken_0x43f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4A8u;
        // 0x43f4ac: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f4a8) {
            ctx->pc = 0x43F4B8u;
            goto label_43f4b8;
        }
    }
    ctx->pc = 0x43F4B0u;
label_43f4b0:
    // 0x43f4b0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f4b0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f4b4:
    // 0x43f4b4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x43f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f4b8:
    // 0x43f4b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_43f4bc:
    if (ctx->pc == 0x43F4BCu) {
        ctx->pc = 0x43F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4B8u;
        // 0x43f4bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F4C0u;
        goto label_43f4c0;
    }
    ctx->pc = 0x43F4B8u;
    {
        const bool branch_taken_0x43f4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4B8u;
        // 0x43f4bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f4b8) {
            ctx->pc = 0x43F504u;
            goto label_43f504;
        }
    }
    ctx->pc = 0x43F4C0u;
label_43f4c0:
    // 0x43f4c0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x43f4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_43f4c4:
    // 0x43f4c4: 0x0  nop
    ctx->pc = 0x43f4c4u;
    // NOP
label_43f4c8:
    // 0x43f4c8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x43f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43f4cc:
    // 0x43f4cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f4d0:
    // 0x43f4d0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x43f4d0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43f4d4:
    // 0x43f4d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43f4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43f4d8:
    // 0x43f4d8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f4dc:
    // 0x43f4dc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f4e0:
    // 0x43f4e0: 0x60f809  jalr        $v1
label_43f4e4:
    if (ctx->pc == 0x43F4E4u) {
        ctx->pc = 0x43F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4E0u;
        // 0x43f4e4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F4E8u;
        goto label_43f4e8;
    }
    ctx->pc = 0x43F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F4E8u);
        ctx->pc = 0x43F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4E0u;
        // 0x43f4e4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F4E0u, 0x43F4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F4E8u;
label_43f4e8:
    // 0x43f4e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f4ec:
    // 0x43f4ec: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x43f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f4f0:
    // 0x43f4f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f4f4:
    // 0x43f4f4: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x43f4f4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43f4f8:
    // 0x43f4f8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x43f4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_43f4fc:
    // 0x43f4fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_43f500:
    if (ctx->pc == 0x43F500u) {
        ctx->pc = 0x43F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4FCu;
        // 0x43f500: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F504u;
        goto label_43f504;
    }
    ctx->pc = 0x43F4FCu;
    {
        const bool branch_taken_0x43f4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F4FCu;
        // 0x43f500: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f4fc) {
            ctx->pc = 0x43F4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f4c8;
        }
    }
    ctx->pc = 0x43F504u;
label_43f504:
    // 0x43f504: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_43f508:
    if (ctx->pc == 0x43F508u) {
        ctx->pc = 0x43F50Cu;
        goto label_43f50c;
    }
    ctx->pc = 0x43F504u;
    {
        const bool branch_taken_0x43f504 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x43f504) {
            ctx->pc = 0x43F538u;
            goto label_43f538;
        }
    }
    ctx->pc = 0x43F50Cu;
label_43f50c:
    // 0x43f50c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x43f50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43f510:
    // 0x43f510: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f514:
    // 0x43f514: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x43f514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43f518:
    // 0x43f518: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f51c:
    // 0x43f51c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f520:
    // 0x43f520: 0x60f809  jalr        $v1
label_43f524:
    if (ctx->pc == 0x43F524u) {
        ctx->pc = 0x43F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F520u;
        // 0x43f524: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F528u;
        goto label_43f528;
    }
    ctx->pc = 0x43F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F528u);
        ctx->pc = 0x43F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F520u;
        // 0x43f524: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F520u, 0x43F528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F528u;
label_43f528:
    // 0x43f528: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f52c:
    // 0x43f52c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f530:
    // 0x43f530: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_43f534:
    if (ctx->pc == 0x43F534u) {
        ctx->pc = 0x43F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F530u;
        // 0x43f534: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F538u;
        goto label_43f538;
    }
    ctx->pc = 0x43F530u;
    {
        const bool branch_taken_0x43f530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F530u;
        // 0x43f534: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f530) {
            ctx->pc = 0x43F510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f510;
        }
    }
    ctx->pc = 0x43F538u;
label_43f538:
    // 0x43f538: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_43f53c:
    if (ctx->pc == 0x43F53Cu) {
        ctx->pc = 0x43F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F538u;
        // 0x43f53c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F540u;
        goto label_43f540;
    }
    ctx->pc = 0x43F538u;
    {
        const bool branch_taken_0x43f538 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f538) {
            ctx->pc = 0x43F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43F538u;
            // 0x43f53c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43F540u;
label_43f540:
    // 0x43f540: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x43f540u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_43f544:
    // 0x43f544: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f548:
    // 0x43f548: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43f548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43f54c:
    // 0x43f54c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f550:
    // 0x43f550: 0x60f809  jalr        $v1
label_43f554:
    if (ctx->pc == 0x43F554u) {
        ctx->pc = 0x43F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F550u;
        // 0x43f554: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F558u;
        goto label_43f558;
    }
    ctx->pc = 0x43F550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F558u);
        ctx->pc = 0x43F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F550u;
        // 0x43f554: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F550u, 0x43F558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F558u;
label_43f558:
    // 0x43f558: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f55c:
    // 0x43f55c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f560:
    // 0x43f560: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x43f560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f564:
    // 0x43f564: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_43f568:
    if (ctx->pc == 0x43F568u) {
        ctx->pc = 0x43F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F564u;
        // 0x43f568: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F56Cu;
        goto label_43f56c;
    }
    ctx->pc = 0x43F564u;
    {
        const bool branch_taken_0x43f564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F564u;
        // 0x43f568: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f564) {
            ctx->pc = 0x43F540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f540;
        }
    }
    ctx->pc = 0x43F56Cu;
label_43f56c:
    // 0x43f56c: 0x10000055  b           . + 4 + (0x55 << 2)
label_43f570:
    if (ctx->pc == 0x43F570u) {
        ctx->pc = 0x43F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F56Cu;
        // 0x43f570: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F574u;
        goto label_43f574;
    }
    ctx->pc = 0x43F56Cu;
    {
        const bool branch_taken_0x43f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F56Cu;
        // 0x43f570: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f56c) {
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43F574u;
label_43f574:
    // 0x43f574: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x43f574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f578:
    // 0x43f578: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_43f57c:
    if (ctx->pc == 0x43F57Cu) {
        ctx->pc = 0x43F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F578u;
        // 0x43f57c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F580u;
        goto label_43f580;
    }
    ctx->pc = 0x43F578u;
    {
        const bool branch_taken_0x43f578 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x43F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F578u;
        // 0x43f57c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f578) {
            ctx->pc = 0x43F5D0u;
            goto label_43f5d0;
        }
    }
    ctx->pc = 0x43F580u;
label_43f580:
    // 0x43f580: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f580u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f584:
    // 0x43f584: 0x0  nop
    ctx->pc = 0x43f584u;
    // NOP
label_43f588:
    // 0x43f588: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f58c:
    // 0x43f58c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x43f58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43f590:
    // 0x43f590: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f594:
    // 0x43f594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43f594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43f598:
    // 0x43f598: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f59c:
    // 0x43f59c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x43f59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_43f5a0:
    // 0x43f5a0: 0x60f809  jalr        $v1
label_43f5a4:
    if (ctx->pc == 0x43F5A4u) {
        ctx->pc = 0x43F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5A0u;
        // 0x43f5a4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5A8u;
        goto label_43f5a8;
    }
    ctx->pc = 0x43F5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F5A8u);
        ctx->pc = 0x43F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5A0u;
        // 0x43f5a4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F5A0u, 0x43F5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F5A8u;
label_43f5a8:
    // 0x43f5a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f5ac:
    // 0x43f5ac: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x43f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_43f5b0:
    // 0x43f5b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f5b4:
    // 0x43f5b4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x43f5b4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43f5b8:
    // 0x43f5b8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x43f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_43f5bc:
    // 0x43f5bc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x43f5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_43f5c0:
    // 0x43f5c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_43f5c4:
    if (ctx->pc == 0x43F5C4u) {
        ctx->pc = 0x43F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5C0u;
        // 0x43f5c4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5C8u;
        goto label_43f5c8;
    }
    ctx->pc = 0x43F5C0u;
    {
        const bool branch_taken_0x43f5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5C0u;
        // 0x43f5c4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f5c0) {
            ctx->pc = 0x43F588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f588;
        }
    }
    ctx->pc = 0x43F5C8u;
label_43f5c8:
    // 0x43f5c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_43f5cc:
    if (ctx->pc == 0x43F5CCu) {
        ctx->pc = 0x43F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5C8u;
        // 0x43f5cc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5D0u;
        goto label_43f5d0;
    }
    ctx->pc = 0x43F5C8u;
    {
        const bool branch_taken_0x43f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5C8u;
        // 0x43f5cc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f5c8) {
            ctx->pc = 0x43F5D8u;
            goto label_43f5d8;
        }
    }
    ctx->pc = 0x43F5D0u;
label_43f5d0:
    // 0x43f5d0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x43f5d0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f5d4:
    // 0x43f5d4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x43f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f5d8:
    // 0x43f5d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_43f5dc:
    if (ctx->pc == 0x43F5DCu) {
        ctx->pc = 0x43F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5D8u;
        // 0x43f5dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F5E0u;
        goto label_43f5e0;
    }
    ctx->pc = 0x43F5D8u;
    {
        const bool branch_taken_0x43f5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F5D8u;
        // 0x43f5dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f5d8) {
            ctx->pc = 0x43F624u;
            goto label_43f624;
        }
    }
    ctx->pc = 0x43F5E0u;
label_43f5e0:
    // 0x43f5e0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x43f5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_43f5e4:
    // 0x43f5e4: 0x0  nop
    ctx->pc = 0x43f5e4u;
    // NOP
label_43f5e8:
    // 0x43f5e8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x43f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_43f5ec:
    // 0x43f5ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f5f0:
    // 0x43f5f0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x43f5f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_43f5f4:
    // 0x43f5f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43f5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_43f5f8:
    // 0x43f5f8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f5fc:
    // 0x43f5fc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f600:
    // 0x43f600: 0x60f809  jalr        $v1
label_43f604:
    if (ctx->pc == 0x43F604u) {
        ctx->pc = 0x43F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F600u;
        // 0x43f604: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F608u;
        goto label_43f608;
    }
    ctx->pc = 0x43F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F608u);
        ctx->pc = 0x43F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F600u;
        // 0x43f604: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F600u, 0x43F608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F608u;
label_43f608:
    // 0x43f608: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f60c:
    // 0x43f60c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x43f60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_43f610:
    // 0x43f610: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f614:
    // 0x43f614: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x43f614u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43f618:
    // 0x43f618: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x43f618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_43f61c:
    // 0x43f61c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_43f620:
    if (ctx->pc == 0x43F620u) {
        ctx->pc = 0x43F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F61Cu;
        // 0x43f620: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F624u;
        goto label_43f624;
    }
    ctx->pc = 0x43F61Cu;
    {
        const bool branch_taken_0x43f61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F61Cu;
        // 0x43f620: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f61c) {
            ctx->pc = 0x43F5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f5e8;
        }
    }
    ctx->pc = 0x43F624u;
label_43f624:
    // 0x43f624: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_43f628:
    if (ctx->pc == 0x43F628u) {
        ctx->pc = 0x43F62Cu;
        goto label_43f62c;
    }
    ctx->pc = 0x43F624u;
    {
        const bool branch_taken_0x43f624 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x43f624) {
            ctx->pc = 0x43F658u;
            goto label_43f658;
        }
    }
    ctx->pc = 0x43F62Cu;
label_43f62c:
    // 0x43f62c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x43f62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43f630:
    // 0x43f630: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f634:
    // 0x43f634: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x43f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_43f638:
    // 0x43f638: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f63c:
    // 0x43f63c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f640:
    // 0x43f640: 0x60f809  jalr        $v1
label_43f644:
    if (ctx->pc == 0x43F644u) {
        ctx->pc = 0x43F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F640u;
        // 0x43f644: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F648u;
        goto label_43f648;
    }
    ctx->pc = 0x43F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F648u);
        ctx->pc = 0x43F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F640u;
        // 0x43f644: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F640u, 0x43F648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F648u;
label_43f648:
    // 0x43f648: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f64c:
    // 0x43f64c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f650:
    // 0x43f650: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_43f654:
    if (ctx->pc == 0x43F654u) {
        ctx->pc = 0x43F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F650u;
        // 0x43f654: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F658u;
        goto label_43f658;
    }
    ctx->pc = 0x43F650u;
    {
        const bool branch_taken_0x43f650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F650u;
        // 0x43f654: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f650) {
            ctx->pc = 0x43F630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f630;
        }
    }
    ctx->pc = 0x43F658u;
label_43f658:
    // 0x43f658: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_43f65c:
    if (ctx->pc == 0x43F65Cu) {
        ctx->pc = 0x43F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F658u;
        // 0x43f65c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F660u;
        goto label_43f660;
    }
    ctx->pc = 0x43F658u;
    {
        const bool branch_taken_0x43f658 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f658) {
            ctx->pc = 0x43F65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43F658u;
            // 0x43f65c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43F660u;
label_43f660:
    // 0x43f660: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x43f660u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_43f664:
    // 0x43f664: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f668:
    // 0x43f668: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43f668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43f66c:
    // 0x43f66c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f670:
    // 0x43f670: 0x60f809  jalr        $v1
label_43f674:
    if (ctx->pc == 0x43F674u) {
        ctx->pc = 0x43F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F670u;
        // 0x43f674: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F678u;
        goto label_43f678;
    }
    ctx->pc = 0x43F670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F678u);
        ctx->pc = 0x43F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F670u;
        // 0x43f674: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F670u, 0x43F678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F678u;
label_43f678:
    // 0x43f678: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f67c:
    // 0x43f67c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f680:
    // 0x43f680: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x43f680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43f684:
    // 0x43f684: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_43f688:
    if (ctx->pc == 0x43F688u) {
        ctx->pc = 0x43F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F684u;
        // 0x43f688: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F68Cu;
        goto label_43f68c;
    }
    ctx->pc = 0x43F684u;
    {
        const bool branch_taken_0x43f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F684u;
        // 0x43f688: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f684) {
            ctx->pc = 0x43F660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43f660;
        }
    }
    ctx->pc = 0x43F68Cu;
label_43f68c:
    // 0x43f68c: 0x1000000d  b           . + 4 + (0xD << 2)
label_43f690:
    if (ctx->pc == 0x43F690u) {
        ctx->pc = 0x43F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F68Cu;
        // 0x43f690: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F694u;
        goto label_43f694;
    }
    ctx->pc = 0x43F68Cu;
    {
        const bool branch_taken_0x43f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F68Cu;
        // 0x43f690: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f68c) {
            ctx->pc = 0x43F6C4u;
            goto label_43f6c4;
        }
    }
    ctx->pc = 0x43F694u;
label_43f694:
    // 0x43f694: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_43f698:
    if (ctx->pc == 0x43F698u) {
        ctx->pc = 0x43F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F694u;
        // 0x43f698: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F69Cu;
        goto label_43f69c;
    }
    ctx->pc = 0x43F694u;
    {
        const bool branch_taken_0x43f694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F694u;
        // 0x43f698: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f694) {
            ctx->pc = 0x43F6C0u;
            goto label_43f6c0;
        }
    }
    ctx->pc = 0x43F69Cu;
label_43f69c:
    // 0x43f69c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f69cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f6a0:
    // 0x43f6a0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x43f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_43f6a4:
    // 0x43f6a4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f6a8:
    // 0x43f6a8: 0x60f809  jalr        $v1
label_43f6ac:
    if (ctx->pc == 0x43F6ACu) {
        ctx->pc = 0x43F6B0u;
        goto label_43f6b0;
    }
    ctx->pc = 0x43F6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F6B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F6A8u, 0x43F6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F6B0u;
label_43f6b0:
    // 0x43f6b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x43f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f6b4:
    // 0x43f6b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43f6b8:
    // 0x43f6b8: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_43f6bc:
    if (ctx->pc == 0x43F6BCu) {
        ctx->pc = 0x43F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6B8u;
        // 0x43f6bc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F6C0u;
        goto label_43f6c0;
    }
    ctx->pc = 0x43F6B8u;
    {
        const bool branch_taken_0x43f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6B8u;
        // 0x43f6bc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f6b8) {
            ctx->pc = 0x43EFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43efb4;
        }
    }
    ctx->pc = 0x43F6C0u;
label_43f6c0:
    // 0x43f6c0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x43f6c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_43f6c4:
    // 0x43f6c4: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x43f6c4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_43f6c8:
    // 0x43f6c8: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x43f6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_43f6cc:
    // 0x43f6cc: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_43f6d0:
    if (ctx->pc == 0x43F6D0u) {
        ctx->pc = 0x43F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6CCu;
        // 0x43f6d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F6D4u;
        goto label_43f6d4;
    }
    ctx->pc = 0x43F6CCu;
    {
        const bool branch_taken_0x43f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6CCu;
        // 0x43f6d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f6cc) {
            ctx->pc = 0x43EA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ea78;
        }
    }
    ctx->pc = 0x43F6D4u;
label_43f6d4:
    // 0x43f6d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_43f6d8:
    if (ctx->pc == 0x43F6D8u) {
        ctx->pc = 0x43F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6D4u;
        // 0x43f6d8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F6DCu;
        goto label_43f6dc;
    }
    ctx->pc = 0x43F6D4u;
    {
        const bool branch_taken_0x43f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6D4u;
        // 0x43f6d8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f6d4) {
            ctx->pc = 0x43F6E8u;
            goto label_43f6e8;
        }
    }
    ctx->pc = 0x43F6DCu;
label_43f6dc:
    // 0x43f6dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x43f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43f6e0:
    // 0x43f6e0: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x43f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_43f6e4:
    // 0x43f6e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x43f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_43f6e8:
    // 0x43f6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43f6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f6ec:
    // 0x43f6ec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x43f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_43f6f0:
    // 0x43f6f0: 0x60f809  jalr        $v1
label_43f6f4:
    if (ctx->pc == 0x43F6F4u) {
        ctx->pc = 0x43F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6F0u;
        // 0x43f6f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F6F8u;
        goto label_43f6f8;
    }
    ctx->pc = 0x43F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x43F6F8u);
        ctx->pc = 0x43F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F6F0u;
        // 0x43f6f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F6F0u, 0x43F6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43F6F8u;
label_43f6f8:
    // 0x43f6f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x43f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_43f6fc:
    // 0x43f6fc: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x43f6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_43f700:
    // 0x43f700: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x43f700u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_43f704:
    // 0x43f704: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x43f704u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_43f708:
    // 0x43f708: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x43f708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_43f70c:
    // 0x43f70c: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x43f70cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_43f710:
    // 0x43f710: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x43f710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_43f714:
    // 0x43f714: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x43f714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_43f718:
    // 0x43f718: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x43f718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_43f71c:
    // 0x43f71c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x43f71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_43f720:
    // 0x43f720: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x43f720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_43f724:
    // 0x43f724: 0x3e00008  jr          $ra
label_43f728:
    if (ctx->pc == 0x43F728u) {
        ctx->pc = 0x43F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F724u;
        // 0x43f728: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43F72Cu;
        goto label_43f72c;
    }
    ctx->pc = 0x43F724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F724u;
        // 0x43f728: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F72Cu;
label_43f72c:
    // 0x43f72c: 0x0  nop
    ctx->pc = 0x43f72cu;
    // NOP
    ctx->pc = 0x43f730u;
}
