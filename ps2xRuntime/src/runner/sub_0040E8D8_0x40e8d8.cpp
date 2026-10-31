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

// Function: sub_0040E8D8
// Address: 0x40e8d8 - 0x40f5b8
void sub_0040E8D8_0x40e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E8D8_0x40e8d8");
#endif

    switch (ctx->pc) {
        case 0x40e8d8u: goto label_40e8d8;
        case 0x40e8dcu: goto label_40e8dc;
        case 0x40e8e0u: goto label_40e8e0;
        case 0x40e8e4u: goto label_40e8e4;
        case 0x40e8e8u: goto label_40e8e8;
        case 0x40e8ecu: goto label_40e8ec;
        case 0x40e8f0u: goto label_40e8f0;
        case 0x40e8f4u: goto label_40e8f4;
        case 0x40e8f8u: goto label_40e8f8;
        case 0x40e8fcu: goto label_40e8fc;
        case 0x40e900u: goto label_40e900;
        case 0x40e904u: goto label_40e904;
        case 0x40e908u: goto label_40e908;
        case 0x40e90cu: goto label_40e90c;
        case 0x40e910u: goto label_40e910;
        case 0x40e914u: goto label_40e914;
        case 0x40e918u: goto label_40e918;
        case 0x40e91cu: goto label_40e91c;
        case 0x40e920u: goto label_40e920;
        case 0x40e924u: goto label_40e924;
        case 0x40e928u: goto label_40e928;
        case 0x40e92cu: goto label_40e92c;
        case 0x40e930u: goto label_40e930;
        case 0x40e934u: goto label_40e934;
        case 0x40e938u: goto label_40e938;
        case 0x40e93cu: goto label_40e93c;
        case 0x40e940u: goto label_40e940;
        case 0x40e944u: goto label_40e944;
        case 0x40e948u: goto label_40e948;
        case 0x40e94cu: goto label_40e94c;
        case 0x40e950u: goto label_40e950;
        case 0x40e954u: goto label_40e954;
        case 0x40e958u: goto label_40e958;
        case 0x40e95cu: goto label_40e95c;
        case 0x40e960u: goto label_40e960;
        case 0x40e964u: goto label_40e964;
        case 0x40e968u: goto label_40e968;
        case 0x40e96cu: goto label_40e96c;
        case 0x40e970u: goto label_40e970;
        case 0x40e974u: goto label_40e974;
        case 0x40e978u: goto label_40e978;
        case 0x40e97cu: goto label_40e97c;
        case 0x40e980u: goto label_40e980;
        case 0x40e984u: goto label_40e984;
        case 0x40e988u: goto label_40e988;
        case 0x40e98cu: goto label_40e98c;
        case 0x40e990u: goto label_40e990;
        case 0x40e994u: goto label_40e994;
        case 0x40e998u: goto label_40e998;
        case 0x40e99cu: goto label_40e99c;
        case 0x40e9a0u: goto label_40e9a0;
        case 0x40e9a4u: goto label_40e9a4;
        case 0x40e9a8u: goto label_40e9a8;
        case 0x40e9acu: goto label_40e9ac;
        case 0x40e9b0u: goto label_40e9b0;
        case 0x40e9b4u: goto label_40e9b4;
        case 0x40e9b8u: goto label_40e9b8;
        case 0x40e9bcu: goto label_40e9bc;
        case 0x40e9c0u: goto label_40e9c0;
        case 0x40e9c4u: goto label_40e9c4;
        case 0x40e9c8u: goto label_40e9c8;
        case 0x40e9ccu: goto label_40e9cc;
        case 0x40e9d0u: goto label_40e9d0;
        case 0x40e9d4u: goto label_40e9d4;
        case 0x40e9d8u: goto label_40e9d8;
        case 0x40e9dcu: goto label_40e9dc;
        case 0x40e9e0u: goto label_40e9e0;
        case 0x40e9e4u: goto label_40e9e4;
        case 0x40e9e8u: goto label_40e9e8;
        case 0x40e9ecu: goto label_40e9ec;
        case 0x40e9f0u: goto label_40e9f0;
        case 0x40e9f4u: goto label_40e9f4;
        case 0x40e9f8u: goto label_40e9f8;
        case 0x40e9fcu: goto label_40e9fc;
        case 0x40ea00u: goto label_40ea00;
        case 0x40ea04u: goto label_40ea04;
        case 0x40ea08u: goto label_40ea08;
        case 0x40ea0cu: goto label_40ea0c;
        case 0x40ea10u: goto label_40ea10;
        case 0x40ea14u: goto label_40ea14;
        case 0x40ea18u: goto label_40ea18;
        case 0x40ea1cu: goto label_40ea1c;
        case 0x40ea20u: goto label_40ea20;
        case 0x40ea24u: goto label_40ea24;
        case 0x40ea28u: goto label_40ea28;
        case 0x40ea2cu: goto label_40ea2c;
        case 0x40ea30u: goto label_40ea30;
        case 0x40ea34u: goto label_40ea34;
        case 0x40ea38u: goto label_40ea38;
        case 0x40ea3cu: goto label_40ea3c;
        case 0x40ea40u: goto label_40ea40;
        case 0x40ea44u: goto label_40ea44;
        case 0x40ea48u: goto label_40ea48;
        case 0x40ea4cu: goto label_40ea4c;
        case 0x40ea50u: goto label_40ea50;
        case 0x40ea54u: goto label_40ea54;
        case 0x40ea58u: goto label_40ea58;
        case 0x40ea5cu: goto label_40ea5c;
        case 0x40ea60u: goto label_40ea60;
        case 0x40ea64u: goto label_40ea64;
        case 0x40ea68u: goto label_40ea68;
        case 0x40ea6cu: goto label_40ea6c;
        case 0x40ea70u: goto label_40ea70;
        case 0x40ea74u: goto label_40ea74;
        case 0x40ea78u: goto label_40ea78;
        case 0x40ea7cu: goto label_40ea7c;
        case 0x40ea80u: goto label_40ea80;
        case 0x40ea84u: goto label_40ea84;
        case 0x40ea88u: goto label_40ea88;
        case 0x40ea8cu: goto label_40ea8c;
        case 0x40ea90u: goto label_40ea90;
        case 0x40ea94u: goto label_40ea94;
        case 0x40ea98u: goto label_40ea98;
        case 0x40ea9cu: goto label_40ea9c;
        case 0x40eaa0u: goto label_40eaa0;
        case 0x40eaa4u: goto label_40eaa4;
        case 0x40eaa8u: goto label_40eaa8;
        case 0x40eaacu: goto label_40eaac;
        case 0x40eab0u: goto label_40eab0;
        case 0x40eab4u: goto label_40eab4;
        case 0x40eab8u: goto label_40eab8;
        case 0x40eabcu: goto label_40eabc;
        case 0x40eac0u: goto label_40eac0;
        case 0x40eac4u: goto label_40eac4;
        case 0x40eac8u: goto label_40eac8;
        case 0x40eaccu: goto label_40eacc;
        case 0x40ead0u: goto label_40ead0;
        case 0x40ead4u: goto label_40ead4;
        case 0x40ead8u: goto label_40ead8;
        case 0x40eadcu: goto label_40eadc;
        case 0x40eae0u: goto label_40eae0;
        case 0x40eae4u: goto label_40eae4;
        case 0x40eae8u: goto label_40eae8;
        case 0x40eaecu: goto label_40eaec;
        case 0x40eaf0u: goto label_40eaf0;
        case 0x40eaf4u: goto label_40eaf4;
        case 0x40eaf8u: goto label_40eaf8;
        case 0x40eafcu: goto label_40eafc;
        case 0x40eb00u: goto label_40eb00;
        case 0x40eb04u: goto label_40eb04;
        case 0x40eb08u: goto label_40eb08;
        case 0x40eb0cu: goto label_40eb0c;
        case 0x40eb10u: goto label_40eb10;
        case 0x40eb14u: goto label_40eb14;
        case 0x40eb18u: goto label_40eb18;
        case 0x40eb1cu: goto label_40eb1c;
        case 0x40eb20u: goto label_40eb20;
        case 0x40eb24u: goto label_40eb24;
        case 0x40eb28u: goto label_40eb28;
        case 0x40eb2cu: goto label_40eb2c;
        case 0x40eb30u: goto label_40eb30;
        case 0x40eb34u: goto label_40eb34;
        case 0x40eb38u: goto label_40eb38;
        case 0x40eb3cu: goto label_40eb3c;
        case 0x40eb40u: goto label_40eb40;
        case 0x40eb44u: goto label_40eb44;
        case 0x40eb48u: goto label_40eb48;
        case 0x40eb4cu: goto label_40eb4c;
        case 0x40eb50u: goto label_40eb50;
        case 0x40eb54u: goto label_40eb54;
        case 0x40eb58u: goto label_40eb58;
        case 0x40eb5cu: goto label_40eb5c;
        case 0x40eb60u: goto label_40eb60;
        case 0x40eb64u: goto label_40eb64;
        case 0x40eb68u: goto label_40eb68;
        case 0x40eb6cu: goto label_40eb6c;
        case 0x40eb70u: goto label_40eb70;
        case 0x40eb74u: goto label_40eb74;
        case 0x40eb78u: goto label_40eb78;
        case 0x40eb7cu: goto label_40eb7c;
        case 0x40eb80u: goto label_40eb80;
        case 0x40eb84u: goto label_40eb84;
        case 0x40eb88u: goto label_40eb88;
        case 0x40eb8cu: goto label_40eb8c;
        case 0x40eb90u: goto label_40eb90;
        case 0x40eb94u: goto label_40eb94;
        case 0x40eb98u: goto label_40eb98;
        case 0x40eb9cu: goto label_40eb9c;
        case 0x40eba0u: goto label_40eba0;
        case 0x40eba4u: goto label_40eba4;
        case 0x40eba8u: goto label_40eba8;
        case 0x40ebacu: goto label_40ebac;
        case 0x40ebb0u: goto label_40ebb0;
        case 0x40ebb4u: goto label_40ebb4;
        case 0x40ebb8u: goto label_40ebb8;
        case 0x40ebbcu: goto label_40ebbc;
        case 0x40ebc0u: goto label_40ebc0;
        case 0x40ebc4u: goto label_40ebc4;
        case 0x40ebc8u: goto label_40ebc8;
        case 0x40ebccu: goto label_40ebcc;
        case 0x40ebd0u: goto label_40ebd0;
        case 0x40ebd4u: goto label_40ebd4;
        case 0x40ebd8u: goto label_40ebd8;
        case 0x40ebdcu: goto label_40ebdc;
        case 0x40ebe0u: goto label_40ebe0;
        case 0x40ebe4u: goto label_40ebe4;
        case 0x40ebe8u: goto label_40ebe8;
        case 0x40ebecu: goto label_40ebec;
        case 0x40ebf0u: goto label_40ebf0;
        case 0x40ebf4u: goto label_40ebf4;
        case 0x40ebf8u: goto label_40ebf8;
        case 0x40ebfcu: goto label_40ebfc;
        case 0x40ec00u: goto label_40ec00;
        case 0x40ec04u: goto label_40ec04;
        case 0x40ec08u: goto label_40ec08;
        case 0x40ec0cu: goto label_40ec0c;
        case 0x40ec10u: goto label_40ec10;
        case 0x40ec14u: goto label_40ec14;
        case 0x40ec18u: goto label_40ec18;
        case 0x40ec1cu: goto label_40ec1c;
        case 0x40ec20u: goto label_40ec20;
        case 0x40ec24u: goto label_40ec24;
        case 0x40ec28u: goto label_40ec28;
        case 0x40ec2cu: goto label_40ec2c;
        case 0x40ec30u: goto label_40ec30;
        case 0x40ec34u: goto label_40ec34;
        case 0x40ec38u: goto label_40ec38;
        case 0x40ec3cu: goto label_40ec3c;
        case 0x40ec40u: goto label_40ec40;
        case 0x40ec44u: goto label_40ec44;
        case 0x40ec48u: goto label_40ec48;
        case 0x40ec4cu: goto label_40ec4c;
        case 0x40ec50u: goto label_40ec50;
        case 0x40ec54u: goto label_40ec54;
        case 0x40ec58u: goto label_40ec58;
        case 0x40ec5cu: goto label_40ec5c;
        case 0x40ec60u: goto label_40ec60;
        case 0x40ec64u: goto label_40ec64;
        case 0x40ec68u: goto label_40ec68;
        case 0x40ec6cu: goto label_40ec6c;
        case 0x40ec70u: goto label_40ec70;
        case 0x40ec74u: goto label_40ec74;
        case 0x40ec78u: goto label_40ec78;
        case 0x40ec7cu: goto label_40ec7c;
        case 0x40ec80u: goto label_40ec80;
        case 0x40ec84u: goto label_40ec84;
        case 0x40ec88u: goto label_40ec88;
        case 0x40ec8cu: goto label_40ec8c;
        case 0x40ec90u: goto label_40ec90;
        case 0x40ec94u: goto label_40ec94;
        case 0x40ec98u: goto label_40ec98;
        case 0x40ec9cu: goto label_40ec9c;
        case 0x40eca0u: goto label_40eca0;
        case 0x40eca4u: goto label_40eca4;
        case 0x40eca8u: goto label_40eca8;
        case 0x40ecacu: goto label_40ecac;
        case 0x40ecb0u: goto label_40ecb0;
        case 0x40ecb4u: goto label_40ecb4;
        case 0x40ecb8u: goto label_40ecb8;
        case 0x40ecbcu: goto label_40ecbc;
        case 0x40ecc0u: goto label_40ecc0;
        case 0x40ecc4u: goto label_40ecc4;
        case 0x40ecc8u: goto label_40ecc8;
        case 0x40ecccu: goto label_40eccc;
        case 0x40ecd0u: goto label_40ecd0;
        case 0x40ecd4u: goto label_40ecd4;
        case 0x40ecd8u: goto label_40ecd8;
        case 0x40ecdcu: goto label_40ecdc;
        case 0x40ece0u: goto label_40ece0;
        case 0x40ece4u: goto label_40ece4;
        case 0x40ece8u: goto label_40ece8;
        case 0x40ececu: goto label_40ecec;
        case 0x40ecf0u: goto label_40ecf0;
        case 0x40ecf4u: goto label_40ecf4;
        case 0x40ecf8u: goto label_40ecf8;
        case 0x40ecfcu: goto label_40ecfc;
        case 0x40ed00u: goto label_40ed00;
        case 0x40ed04u: goto label_40ed04;
        case 0x40ed08u: goto label_40ed08;
        case 0x40ed0cu: goto label_40ed0c;
        case 0x40ed10u: goto label_40ed10;
        case 0x40ed14u: goto label_40ed14;
        case 0x40ed18u: goto label_40ed18;
        case 0x40ed1cu: goto label_40ed1c;
        case 0x40ed20u: goto label_40ed20;
        case 0x40ed24u: goto label_40ed24;
        case 0x40ed28u: goto label_40ed28;
        case 0x40ed2cu: goto label_40ed2c;
        case 0x40ed30u: goto label_40ed30;
        case 0x40ed34u: goto label_40ed34;
        case 0x40ed38u: goto label_40ed38;
        case 0x40ed3cu: goto label_40ed3c;
        case 0x40ed40u: goto label_40ed40;
        case 0x40ed44u: goto label_40ed44;
        case 0x40ed48u: goto label_40ed48;
        case 0x40ed4cu: goto label_40ed4c;
        case 0x40ed50u: goto label_40ed50;
        case 0x40ed54u: goto label_40ed54;
        case 0x40ed58u: goto label_40ed58;
        case 0x40ed5cu: goto label_40ed5c;
        case 0x40ed60u: goto label_40ed60;
        case 0x40ed64u: goto label_40ed64;
        case 0x40ed68u: goto label_40ed68;
        case 0x40ed6cu: goto label_40ed6c;
        case 0x40ed70u: goto label_40ed70;
        case 0x40ed74u: goto label_40ed74;
        case 0x40ed78u: goto label_40ed78;
        case 0x40ed7cu: goto label_40ed7c;
        case 0x40ed80u: goto label_40ed80;
        case 0x40ed84u: goto label_40ed84;
        case 0x40ed88u: goto label_40ed88;
        case 0x40ed8cu: goto label_40ed8c;
        case 0x40ed90u: goto label_40ed90;
        case 0x40ed94u: goto label_40ed94;
        case 0x40ed98u: goto label_40ed98;
        case 0x40ed9cu: goto label_40ed9c;
        case 0x40eda0u: goto label_40eda0;
        case 0x40eda4u: goto label_40eda4;
        case 0x40eda8u: goto label_40eda8;
        case 0x40edacu: goto label_40edac;
        case 0x40edb0u: goto label_40edb0;
        case 0x40edb4u: goto label_40edb4;
        case 0x40edb8u: goto label_40edb8;
        case 0x40edbcu: goto label_40edbc;
        case 0x40edc0u: goto label_40edc0;
        case 0x40edc4u: goto label_40edc4;
        case 0x40edc8u: goto label_40edc8;
        case 0x40edccu: goto label_40edcc;
        case 0x40edd0u: goto label_40edd0;
        case 0x40edd4u: goto label_40edd4;
        case 0x40edd8u: goto label_40edd8;
        case 0x40eddcu: goto label_40eddc;
        case 0x40ede0u: goto label_40ede0;
        case 0x40ede4u: goto label_40ede4;
        case 0x40ede8u: goto label_40ede8;
        case 0x40edecu: goto label_40edec;
        case 0x40edf0u: goto label_40edf0;
        case 0x40edf4u: goto label_40edf4;
        case 0x40edf8u: goto label_40edf8;
        case 0x40edfcu: goto label_40edfc;
        case 0x40ee00u: goto label_40ee00;
        case 0x40ee04u: goto label_40ee04;
        case 0x40ee08u: goto label_40ee08;
        case 0x40ee0cu: goto label_40ee0c;
        case 0x40ee10u: goto label_40ee10;
        case 0x40ee14u: goto label_40ee14;
        case 0x40ee18u: goto label_40ee18;
        case 0x40ee1cu: goto label_40ee1c;
        case 0x40ee20u: goto label_40ee20;
        case 0x40ee24u: goto label_40ee24;
        case 0x40ee28u: goto label_40ee28;
        case 0x40ee2cu: goto label_40ee2c;
        case 0x40ee30u: goto label_40ee30;
        case 0x40ee34u: goto label_40ee34;
        case 0x40ee38u: goto label_40ee38;
        case 0x40ee3cu: goto label_40ee3c;
        case 0x40ee40u: goto label_40ee40;
        case 0x40ee44u: goto label_40ee44;
        case 0x40ee48u: goto label_40ee48;
        case 0x40ee4cu: goto label_40ee4c;
        case 0x40ee50u: goto label_40ee50;
        case 0x40ee54u: goto label_40ee54;
        case 0x40ee58u: goto label_40ee58;
        case 0x40ee5cu: goto label_40ee5c;
        case 0x40ee60u: goto label_40ee60;
        case 0x40ee64u: goto label_40ee64;
        case 0x40ee68u: goto label_40ee68;
        case 0x40ee6cu: goto label_40ee6c;
        case 0x40ee70u: goto label_40ee70;
        case 0x40ee74u: goto label_40ee74;
        case 0x40ee78u: goto label_40ee78;
        case 0x40ee7cu: goto label_40ee7c;
        case 0x40ee80u: goto label_40ee80;
        case 0x40ee84u: goto label_40ee84;
        case 0x40ee88u: goto label_40ee88;
        case 0x40ee8cu: goto label_40ee8c;
        case 0x40ee90u: goto label_40ee90;
        case 0x40ee94u: goto label_40ee94;
        case 0x40ee98u: goto label_40ee98;
        case 0x40ee9cu: goto label_40ee9c;
        case 0x40eea0u: goto label_40eea0;
        case 0x40eea4u: goto label_40eea4;
        case 0x40eea8u: goto label_40eea8;
        case 0x40eeacu: goto label_40eeac;
        case 0x40eeb0u: goto label_40eeb0;
        case 0x40eeb4u: goto label_40eeb4;
        case 0x40eeb8u: goto label_40eeb8;
        case 0x40eebcu: goto label_40eebc;
        case 0x40eec0u: goto label_40eec0;
        case 0x40eec4u: goto label_40eec4;
        case 0x40eec8u: goto label_40eec8;
        case 0x40eeccu: goto label_40eecc;
        case 0x40eed0u: goto label_40eed0;
        case 0x40eed4u: goto label_40eed4;
        case 0x40eed8u: goto label_40eed8;
        case 0x40eedcu: goto label_40eedc;
        case 0x40eee0u: goto label_40eee0;
        case 0x40eee4u: goto label_40eee4;
        case 0x40eee8u: goto label_40eee8;
        case 0x40eeecu: goto label_40eeec;
        case 0x40eef0u: goto label_40eef0;
        case 0x40eef4u: goto label_40eef4;
        case 0x40eef8u: goto label_40eef8;
        case 0x40eefcu: goto label_40eefc;
        case 0x40ef00u: goto label_40ef00;
        case 0x40ef04u: goto label_40ef04;
        case 0x40ef08u: goto label_40ef08;
        case 0x40ef0cu: goto label_40ef0c;
        case 0x40ef10u: goto label_40ef10;
        case 0x40ef14u: goto label_40ef14;
        case 0x40ef18u: goto label_40ef18;
        case 0x40ef1cu: goto label_40ef1c;
        case 0x40ef20u: goto label_40ef20;
        case 0x40ef24u: goto label_40ef24;
        case 0x40ef28u: goto label_40ef28;
        case 0x40ef2cu: goto label_40ef2c;
        case 0x40ef30u: goto label_40ef30;
        case 0x40ef34u: goto label_40ef34;
        case 0x40ef38u: goto label_40ef38;
        case 0x40ef3cu: goto label_40ef3c;
        case 0x40ef40u: goto label_40ef40;
        case 0x40ef44u: goto label_40ef44;
        case 0x40ef48u: goto label_40ef48;
        case 0x40ef4cu: goto label_40ef4c;
        case 0x40ef50u: goto label_40ef50;
        case 0x40ef54u: goto label_40ef54;
        case 0x40ef58u: goto label_40ef58;
        case 0x40ef5cu: goto label_40ef5c;
        case 0x40ef60u: goto label_40ef60;
        case 0x40ef64u: goto label_40ef64;
        case 0x40ef68u: goto label_40ef68;
        case 0x40ef6cu: goto label_40ef6c;
        case 0x40ef70u: goto label_40ef70;
        case 0x40ef74u: goto label_40ef74;
        case 0x40ef78u: goto label_40ef78;
        case 0x40ef7cu: goto label_40ef7c;
        case 0x40ef80u: goto label_40ef80;
        case 0x40ef84u: goto label_40ef84;
        case 0x40ef88u: goto label_40ef88;
        case 0x40ef8cu: goto label_40ef8c;
        case 0x40ef90u: goto label_40ef90;
        case 0x40ef94u: goto label_40ef94;
        case 0x40ef98u: goto label_40ef98;
        case 0x40ef9cu: goto label_40ef9c;
        case 0x40efa0u: goto label_40efa0;
        case 0x40efa4u: goto label_40efa4;
        case 0x40efa8u: goto label_40efa8;
        case 0x40efacu: goto label_40efac;
        case 0x40efb0u: goto label_40efb0;
        case 0x40efb4u: goto label_40efb4;
        case 0x40efb8u: goto label_40efb8;
        case 0x40efbcu: goto label_40efbc;
        case 0x40efc0u: goto label_40efc0;
        case 0x40efc4u: goto label_40efc4;
        case 0x40efc8u: goto label_40efc8;
        case 0x40efccu: goto label_40efcc;
        case 0x40efd0u: goto label_40efd0;
        case 0x40efd4u: goto label_40efd4;
        case 0x40efd8u: goto label_40efd8;
        case 0x40efdcu: goto label_40efdc;
        case 0x40efe0u: goto label_40efe0;
        case 0x40efe4u: goto label_40efe4;
        case 0x40efe8u: goto label_40efe8;
        case 0x40efecu: goto label_40efec;
        case 0x40eff0u: goto label_40eff0;
        case 0x40eff4u: goto label_40eff4;
        case 0x40eff8u: goto label_40eff8;
        case 0x40effcu: goto label_40effc;
        case 0x40f000u: goto label_40f000;
        case 0x40f004u: goto label_40f004;
        case 0x40f008u: goto label_40f008;
        case 0x40f00cu: goto label_40f00c;
        case 0x40f010u: goto label_40f010;
        case 0x40f014u: goto label_40f014;
        case 0x40f018u: goto label_40f018;
        case 0x40f01cu: goto label_40f01c;
        case 0x40f020u: goto label_40f020;
        case 0x40f024u: goto label_40f024;
        case 0x40f028u: goto label_40f028;
        case 0x40f02cu: goto label_40f02c;
        case 0x40f030u: goto label_40f030;
        case 0x40f034u: goto label_40f034;
        case 0x40f038u: goto label_40f038;
        case 0x40f03cu: goto label_40f03c;
        case 0x40f040u: goto label_40f040;
        case 0x40f044u: goto label_40f044;
        case 0x40f048u: goto label_40f048;
        case 0x40f04cu: goto label_40f04c;
        case 0x40f050u: goto label_40f050;
        case 0x40f054u: goto label_40f054;
        case 0x40f058u: goto label_40f058;
        case 0x40f05cu: goto label_40f05c;
        case 0x40f060u: goto label_40f060;
        case 0x40f064u: goto label_40f064;
        case 0x40f068u: goto label_40f068;
        case 0x40f06cu: goto label_40f06c;
        case 0x40f070u: goto label_40f070;
        case 0x40f074u: goto label_40f074;
        case 0x40f078u: goto label_40f078;
        case 0x40f07cu: goto label_40f07c;
        case 0x40f080u: goto label_40f080;
        case 0x40f084u: goto label_40f084;
        case 0x40f088u: goto label_40f088;
        case 0x40f08cu: goto label_40f08c;
        case 0x40f090u: goto label_40f090;
        case 0x40f094u: goto label_40f094;
        case 0x40f098u: goto label_40f098;
        case 0x40f09cu: goto label_40f09c;
        case 0x40f0a0u: goto label_40f0a0;
        case 0x40f0a4u: goto label_40f0a4;
        case 0x40f0a8u: goto label_40f0a8;
        case 0x40f0acu: goto label_40f0ac;
        case 0x40f0b0u: goto label_40f0b0;
        case 0x40f0b4u: goto label_40f0b4;
        case 0x40f0b8u: goto label_40f0b8;
        case 0x40f0bcu: goto label_40f0bc;
        case 0x40f0c0u: goto label_40f0c0;
        case 0x40f0c4u: goto label_40f0c4;
        case 0x40f0c8u: goto label_40f0c8;
        case 0x40f0ccu: goto label_40f0cc;
        case 0x40f0d0u: goto label_40f0d0;
        case 0x40f0d4u: goto label_40f0d4;
        case 0x40f0d8u: goto label_40f0d8;
        case 0x40f0dcu: goto label_40f0dc;
        case 0x40f0e0u: goto label_40f0e0;
        case 0x40f0e4u: goto label_40f0e4;
        case 0x40f0e8u: goto label_40f0e8;
        case 0x40f0ecu: goto label_40f0ec;
        case 0x40f0f0u: goto label_40f0f0;
        case 0x40f0f4u: goto label_40f0f4;
        case 0x40f0f8u: goto label_40f0f8;
        case 0x40f0fcu: goto label_40f0fc;
        case 0x40f100u: goto label_40f100;
        case 0x40f104u: goto label_40f104;
        case 0x40f108u: goto label_40f108;
        case 0x40f10cu: goto label_40f10c;
        case 0x40f110u: goto label_40f110;
        case 0x40f114u: goto label_40f114;
        case 0x40f118u: goto label_40f118;
        case 0x40f11cu: goto label_40f11c;
        case 0x40f120u: goto label_40f120;
        case 0x40f124u: goto label_40f124;
        case 0x40f128u: goto label_40f128;
        case 0x40f12cu: goto label_40f12c;
        case 0x40f130u: goto label_40f130;
        case 0x40f134u: goto label_40f134;
        case 0x40f138u: goto label_40f138;
        case 0x40f13cu: goto label_40f13c;
        case 0x40f140u: goto label_40f140;
        case 0x40f144u: goto label_40f144;
        case 0x40f148u: goto label_40f148;
        case 0x40f14cu: goto label_40f14c;
        case 0x40f150u: goto label_40f150;
        case 0x40f154u: goto label_40f154;
        case 0x40f158u: goto label_40f158;
        case 0x40f15cu: goto label_40f15c;
        case 0x40f160u: goto label_40f160;
        case 0x40f164u: goto label_40f164;
        case 0x40f168u: goto label_40f168;
        case 0x40f16cu: goto label_40f16c;
        case 0x40f170u: goto label_40f170;
        case 0x40f174u: goto label_40f174;
        case 0x40f178u: goto label_40f178;
        case 0x40f17cu: goto label_40f17c;
        case 0x40f180u: goto label_40f180;
        case 0x40f184u: goto label_40f184;
        case 0x40f188u: goto label_40f188;
        case 0x40f18cu: goto label_40f18c;
        case 0x40f190u: goto label_40f190;
        case 0x40f194u: goto label_40f194;
        case 0x40f198u: goto label_40f198;
        case 0x40f19cu: goto label_40f19c;
        case 0x40f1a0u: goto label_40f1a0;
        case 0x40f1a4u: goto label_40f1a4;
        case 0x40f1a8u: goto label_40f1a8;
        case 0x40f1acu: goto label_40f1ac;
        case 0x40f1b0u: goto label_40f1b0;
        case 0x40f1b4u: goto label_40f1b4;
        case 0x40f1b8u: goto label_40f1b8;
        case 0x40f1bcu: goto label_40f1bc;
        case 0x40f1c0u: goto label_40f1c0;
        case 0x40f1c4u: goto label_40f1c4;
        case 0x40f1c8u: goto label_40f1c8;
        case 0x40f1ccu: goto label_40f1cc;
        case 0x40f1d0u: goto label_40f1d0;
        case 0x40f1d4u: goto label_40f1d4;
        case 0x40f1d8u: goto label_40f1d8;
        case 0x40f1dcu: goto label_40f1dc;
        case 0x40f1e0u: goto label_40f1e0;
        case 0x40f1e4u: goto label_40f1e4;
        case 0x40f1e8u: goto label_40f1e8;
        case 0x40f1ecu: goto label_40f1ec;
        case 0x40f1f0u: goto label_40f1f0;
        case 0x40f1f4u: goto label_40f1f4;
        case 0x40f1f8u: goto label_40f1f8;
        case 0x40f1fcu: goto label_40f1fc;
        case 0x40f200u: goto label_40f200;
        case 0x40f204u: goto label_40f204;
        case 0x40f208u: goto label_40f208;
        case 0x40f20cu: goto label_40f20c;
        case 0x40f210u: goto label_40f210;
        case 0x40f214u: goto label_40f214;
        case 0x40f218u: goto label_40f218;
        case 0x40f21cu: goto label_40f21c;
        case 0x40f220u: goto label_40f220;
        case 0x40f224u: goto label_40f224;
        case 0x40f228u: goto label_40f228;
        case 0x40f22cu: goto label_40f22c;
        case 0x40f230u: goto label_40f230;
        case 0x40f234u: goto label_40f234;
        case 0x40f238u: goto label_40f238;
        case 0x40f23cu: goto label_40f23c;
        case 0x40f240u: goto label_40f240;
        case 0x40f244u: goto label_40f244;
        case 0x40f248u: goto label_40f248;
        case 0x40f24cu: goto label_40f24c;
        case 0x40f250u: goto label_40f250;
        case 0x40f254u: goto label_40f254;
        case 0x40f258u: goto label_40f258;
        case 0x40f25cu: goto label_40f25c;
        case 0x40f260u: goto label_40f260;
        case 0x40f264u: goto label_40f264;
        case 0x40f268u: goto label_40f268;
        case 0x40f26cu: goto label_40f26c;
        case 0x40f270u: goto label_40f270;
        case 0x40f274u: goto label_40f274;
        case 0x40f278u: goto label_40f278;
        case 0x40f27cu: goto label_40f27c;
        case 0x40f280u: goto label_40f280;
        case 0x40f284u: goto label_40f284;
        case 0x40f288u: goto label_40f288;
        case 0x40f28cu: goto label_40f28c;
        case 0x40f290u: goto label_40f290;
        case 0x40f294u: goto label_40f294;
        case 0x40f298u: goto label_40f298;
        case 0x40f29cu: goto label_40f29c;
        case 0x40f2a0u: goto label_40f2a0;
        case 0x40f2a4u: goto label_40f2a4;
        case 0x40f2a8u: goto label_40f2a8;
        case 0x40f2acu: goto label_40f2ac;
        case 0x40f2b0u: goto label_40f2b0;
        case 0x40f2b4u: goto label_40f2b4;
        case 0x40f2b8u: goto label_40f2b8;
        case 0x40f2bcu: goto label_40f2bc;
        case 0x40f2c0u: goto label_40f2c0;
        case 0x40f2c4u: goto label_40f2c4;
        case 0x40f2c8u: goto label_40f2c8;
        case 0x40f2ccu: goto label_40f2cc;
        case 0x40f2d0u: goto label_40f2d0;
        case 0x40f2d4u: goto label_40f2d4;
        case 0x40f2d8u: goto label_40f2d8;
        case 0x40f2dcu: goto label_40f2dc;
        case 0x40f2e0u: goto label_40f2e0;
        case 0x40f2e4u: goto label_40f2e4;
        case 0x40f2e8u: goto label_40f2e8;
        case 0x40f2ecu: goto label_40f2ec;
        case 0x40f2f0u: goto label_40f2f0;
        case 0x40f2f4u: goto label_40f2f4;
        case 0x40f2f8u: goto label_40f2f8;
        case 0x40f2fcu: goto label_40f2fc;
        case 0x40f300u: goto label_40f300;
        case 0x40f304u: goto label_40f304;
        case 0x40f308u: goto label_40f308;
        case 0x40f30cu: goto label_40f30c;
        case 0x40f310u: goto label_40f310;
        case 0x40f314u: goto label_40f314;
        case 0x40f318u: goto label_40f318;
        case 0x40f31cu: goto label_40f31c;
        case 0x40f320u: goto label_40f320;
        case 0x40f324u: goto label_40f324;
        case 0x40f328u: goto label_40f328;
        case 0x40f32cu: goto label_40f32c;
        case 0x40f330u: goto label_40f330;
        case 0x40f334u: goto label_40f334;
        case 0x40f338u: goto label_40f338;
        case 0x40f33cu: goto label_40f33c;
        case 0x40f340u: goto label_40f340;
        case 0x40f344u: goto label_40f344;
        case 0x40f348u: goto label_40f348;
        case 0x40f34cu: goto label_40f34c;
        case 0x40f350u: goto label_40f350;
        case 0x40f354u: goto label_40f354;
        case 0x40f358u: goto label_40f358;
        case 0x40f35cu: goto label_40f35c;
        case 0x40f360u: goto label_40f360;
        case 0x40f364u: goto label_40f364;
        case 0x40f368u: goto label_40f368;
        case 0x40f36cu: goto label_40f36c;
        case 0x40f370u: goto label_40f370;
        case 0x40f374u: goto label_40f374;
        case 0x40f378u: goto label_40f378;
        case 0x40f37cu: goto label_40f37c;
        case 0x40f380u: goto label_40f380;
        case 0x40f384u: goto label_40f384;
        case 0x40f388u: goto label_40f388;
        case 0x40f38cu: goto label_40f38c;
        case 0x40f390u: goto label_40f390;
        case 0x40f394u: goto label_40f394;
        case 0x40f398u: goto label_40f398;
        case 0x40f39cu: goto label_40f39c;
        case 0x40f3a0u: goto label_40f3a0;
        case 0x40f3a4u: goto label_40f3a4;
        case 0x40f3a8u: goto label_40f3a8;
        case 0x40f3acu: goto label_40f3ac;
        case 0x40f3b0u: goto label_40f3b0;
        case 0x40f3b4u: goto label_40f3b4;
        case 0x40f3b8u: goto label_40f3b8;
        case 0x40f3bcu: goto label_40f3bc;
        case 0x40f3c0u: goto label_40f3c0;
        case 0x40f3c4u: goto label_40f3c4;
        case 0x40f3c8u: goto label_40f3c8;
        case 0x40f3ccu: goto label_40f3cc;
        case 0x40f3d0u: goto label_40f3d0;
        case 0x40f3d4u: goto label_40f3d4;
        case 0x40f3d8u: goto label_40f3d8;
        case 0x40f3dcu: goto label_40f3dc;
        case 0x40f3e0u: goto label_40f3e0;
        case 0x40f3e4u: goto label_40f3e4;
        case 0x40f3e8u: goto label_40f3e8;
        case 0x40f3ecu: goto label_40f3ec;
        case 0x40f3f0u: goto label_40f3f0;
        case 0x40f3f4u: goto label_40f3f4;
        case 0x40f3f8u: goto label_40f3f8;
        case 0x40f3fcu: goto label_40f3fc;
        case 0x40f400u: goto label_40f400;
        case 0x40f404u: goto label_40f404;
        case 0x40f408u: goto label_40f408;
        case 0x40f40cu: goto label_40f40c;
        case 0x40f410u: goto label_40f410;
        case 0x40f414u: goto label_40f414;
        case 0x40f418u: goto label_40f418;
        case 0x40f41cu: goto label_40f41c;
        case 0x40f420u: goto label_40f420;
        case 0x40f424u: goto label_40f424;
        case 0x40f428u: goto label_40f428;
        case 0x40f42cu: goto label_40f42c;
        case 0x40f430u: goto label_40f430;
        case 0x40f434u: goto label_40f434;
        case 0x40f438u: goto label_40f438;
        case 0x40f43cu: goto label_40f43c;
        case 0x40f440u: goto label_40f440;
        case 0x40f444u: goto label_40f444;
        case 0x40f448u: goto label_40f448;
        case 0x40f44cu: goto label_40f44c;
        case 0x40f450u: goto label_40f450;
        case 0x40f454u: goto label_40f454;
        case 0x40f458u: goto label_40f458;
        case 0x40f45cu: goto label_40f45c;
        case 0x40f460u: goto label_40f460;
        case 0x40f464u: goto label_40f464;
        case 0x40f468u: goto label_40f468;
        case 0x40f46cu: goto label_40f46c;
        case 0x40f470u: goto label_40f470;
        case 0x40f474u: goto label_40f474;
        case 0x40f478u: goto label_40f478;
        case 0x40f47cu: goto label_40f47c;
        case 0x40f480u: goto label_40f480;
        case 0x40f484u: goto label_40f484;
        case 0x40f488u: goto label_40f488;
        case 0x40f48cu: goto label_40f48c;
        case 0x40f490u: goto label_40f490;
        case 0x40f494u: goto label_40f494;
        case 0x40f498u: goto label_40f498;
        case 0x40f49cu: goto label_40f49c;
        case 0x40f4a0u: goto label_40f4a0;
        case 0x40f4a4u: goto label_40f4a4;
        case 0x40f4a8u: goto label_40f4a8;
        case 0x40f4acu: goto label_40f4ac;
        case 0x40f4b0u: goto label_40f4b0;
        case 0x40f4b4u: goto label_40f4b4;
        case 0x40f4b8u: goto label_40f4b8;
        case 0x40f4bcu: goto label_40f4bc;
        case 0x40f4c0u: goto label_40f4c0;
        case 0x40f4c4u: goto label_40f4c4;
        case 0x40f4c8u: goto label_40f4c8;
        case 0x40f4ccu: goto label_40f4cc;
        case 0x40f4d0u: goto label_40f4d0;
        case 0x40f4d4u: goto label_40f4d4;
        case 0x40f4d8u: goto label_40f4d8;
        case 0x40f4dcu: goto label_40f4dc;
        case 0x40f4e0u: goto label_40f4e0;
        case 0x40f4e4u: goto label_40f4e4;
        case 0x40f4e8u: goto label_40f4e8;
        case 0x40f4ecu: goto label_40f4ec;
        case 0x40f4f0u: goto label_40f4f0;
        case 0x40f4f4u: goto label_40f4f4;
        case 0x40f4f8u: goto label_40f4f8;
        case 0x40f4fcu: goto label_40f4fc;
        case 0x40f500u: goto label_40f500;
        case 0x40f504u: goto label_40f504;
        case 0x40f508u: goto label_40f508;
        case 0x40f50cu: goto label_40f50c;
        case 0x40f510u: goto label_40f510;
        case 0x40f514u: goto label_40f514;
        case 0x40f518u: goto label_40f518;
        case 0x40f51cu: goto label_40f51c;
        case 0x40f520u: goto label_40f520;
        case 0x40f524u: goto label_40f524;
        case 0x40f528u: goto label_40f528;
        case 0x40f52cu: goto label_40f52c;
        case 0x40f530u: goto label_40f530;
        case 0x40f534u: goto label_40f534;
        case 0x40f538u: goto label_40f538;
        case 0x40f53cu: goto label_40f53c;
        case 0x40f540u: goto label_40f540;
        case 0x40f544u: goto label_40f544;
        case 0x40f548u: goto label_40f548;
        case 0x40f54cu: goto label_40f54c;
        case 0x40f550u: goto label_40f550;
        case 0x40f554u: goto label_40f554;
        case 0x40f558u: goto label_40f558;
        case 0x40f55cu: goto label_40f55c;
        case 0x40f560u: goto label_40f560;
        case 0x40f564u: goto label_40f564;
        case 0x40f568u: goto label_40f568;
        case 0x40f56cu: goto label_40f56c;
        case 0x40f570u: goto label_40f570;
        case 0x40f574u: goto label_40f574;
        case 0x40f578u: goto label_40f578;
        case 0x40f57cu: goto label_40f57c;
        case 0x40f580u: goto label_40f580;
        case 0x40f584u: goto label_40f584;
        case 0x40f588u: goto label_40f588;
        case 0x40f58cu: goto label_40f58c;
        case 0x40f590u: goto label_40f590;
        case 0x40f594u: goto label_40f594;
        case 0x40f598u: goto label_40f598;
        case 0x40f59cu: goto label_40f59c;
        case 0x40f5a0u: goto label_40f5a0;
        case 0x40f5a4u: goto label_40f5a4;
        case 0x40f5a8u: goto label_40f5a8;
        case 0x40f5acu: goto label_40f5ac;
        case 0x40f5b0u: goto label_40f5b0;
        case 0x40f5b4u: goto label_40f5b4;
        default: break;
    }

    ctx->pc = 0x40e8d8u;

label_40e8d8:
    // 0x40e8d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x40e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_40e8dc:
    // 0x40e8dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x40e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_40e8e0:
    // 0x40e8e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40e8e4:
    // 0x40e8e4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x40e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_40e8e8:
    // 0x40e8e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40e8e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40e8ec:
    // 0x40e8ec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x40e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_40e8f0:
    // 0x40e8f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x40e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_40e8f4:
    // 0x40e8f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x40e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_40e8f8:
    // 0x40e8f8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x40e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_40e8fc:
    // 0x40e8fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x40e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_40e900:
    // 0x40e900: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x40e900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_40e904:
    // 0x40e904: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x40e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_40e908:
    // 0x40e908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40e908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40e90c:
    // 0x40e90c: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x40e90cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_40e910:
    // 0x40e910: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x40e910u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_40e914:
    // 0x40e914: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x40e914u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_40e918:
    // 0x40e918: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x40e918u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_40e91c:
    // 0x40e91c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x40e91cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_40e920:
    // 0x40e920: 0x8c42deb8  lw          $v0, -0x2148($v0)
    ctx->pc = 0x40e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_40e924:
    // 0x40e924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40e928:
    // 0x40e928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40e928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40e92c:
    // 0x40e92c: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x40e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e930:
    // 0x40e930: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40e930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40e934:
    // 0x40e934: 0x0  nop
    ctx->pc = 0x40e934u;
    // NOP
label_40e938:
    // 0x40e938: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_40e93c:
    if (ctx->pc == 0x40E93Cu) {
        ctx->pc = 0x40E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E938u;
        // 0x40e93c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E940u;
        goto label_40e940;
    }
    ctx->pc = 0x40E938u;
    {
        const bool branch_taken_0x40e938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E938u;
        // 0x40e93c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e938) {
            ctx->pc = 0x40E94Cu;
            goto label_40e94c;
        }
    }
    ctx->pc = 0x40E940u;
label_40e940:
    // 0x40e940: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x40e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_40e944:
    // 0x40e944: 0x1440030c  bnez        $v0, . + 4 + (0x30C << 2)
label_40e948:
    if (ctx->pc == 0x40E948u) {
        ctx->pc = 0x40E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E944u;
        // 0x40e948: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E94Cu;
        goto label_40e94c;
    }
    ctx->pc = 0x40E944u;
    {
        const bool branch_taken_0x40e944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E944u;
        // 0x40e948: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e944) {
            ctx->pc = 0x40F578u;
            goto label_40f578;
        }
    }
    ctx->pc = 0x40E94Cu;
label_40e94c:
    // 0x40e94c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40e950:
    // 0x40e950: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40e950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40e954:
    // 0x40e954: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x40e954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_40e958:
    // 0x40e958: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x40e958u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e95c:
    // 0x40e95c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x40e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_40e960:
    // 0x40e960: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40e960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40e964:
    // 0x40e964: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40e968:
    // 0x40e968: 0x40f809  jalr        $v0
label_40e96c:
    if (ctx->pc == 0x40E96Cu) {
        ctx->pc = 0x40E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E968u;
        // 0x40e96c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E970u;
        goto label_40e970;
    }
    ctx->pc = 0x40E968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40E970u);
        ctx->pc = 0x40E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E968u;
        // 0x40e96c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E968u, 0x40E970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E970u;
label_40e970:
    // 0x40e970: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40e970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e974:
    // 0x40e974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x40e974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40e978:
    // 0x40e978: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x40e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_40e97c:
    // 0x40e97c: 0xc047e6c  jal         func_11F9B0
label_40e980:
    if (ctx->pc == 0x40E980u) {
        ctx->pc = 0x40E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E97Cu;
        // 0x40e980: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E984u;
        goto label_40e984;
    }
    ctx->pc = 0x40E97Cu;
    SET_GPR_U32(ctx, 31, 0x40E984u);
    ctx->pc = 0x40E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E97Cu;
    // 0x40e980: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x40E97Cu, 0x40E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E984u;
label_40e984:
    // 0x40e984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40e984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40e988:
    // 0x40e988: 0xc05e984  jal         func_17A610
label_40e98c:
    if (ctx->pc == 0x40E98Cu) {
        ctx->pc = 0x40E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E988u;
        // 0x40e98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E990u;
        goto label_40e990;
    }
    ctx->pc = 0x40E988u;
    SET_GPR_U32(ctx, 31, 0x40E990u);
    ctx->pc = 0x40E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E988u;
    // 0x40e98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A610u, 0x40E988u, 0x40E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E990u;
label_40e990:
    // 0x40e990: 0xc047e6c  jal         func_11F9B0
label_40e994:
    if (ctx->pc == 0x40E994u) {
        ctx->pc = 0x40E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E990u;
        // 0x40e994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E998u;
        goto label_40e998;
    }
    ctx->pc = 0x40E990u;
    SET_GPR_U32(ctx, 31, 0x40E998u);
    ctx->pc = 0x40E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E990u;
    // 0x40e994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x40E990u, 0x40E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E998u;
label_40e998:
    // 0x40e998: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x40e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40e99c:
    // 0x40e99c: 0x84640208  lh          $a0, 0x208($v1)
    ctx->pc = 0x40e99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 520)));
label_40e9a0:
    // 0x40e9a0: 0x8c65020c  lw          $a1, 0x20C($v1)
    ctx->pc = 0x40e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_40e9a4:
    // 0x40e9a4: 0xa0f809  jalr        $a1
label_40e9a8:
    if (ctx->pc == 0x40E9A8u) {
        ctx->pc = 0x40E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9A4u;
        // 0x40e9a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E9ACu;
        goto label_40e9ac;
    }
    ctx->pc = 0x40E9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x40E9ACu);
        ctx->pc = 0x40E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9A4u;
        // 0x40e9a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E9A4u, 0x40E9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E9ACu;
label_40e9ac:
    // 0x40e9ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40e9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e9b0:
    // 0x40e9b0: 0xc047e6c  jal         func_11F9B0
label_40e9b4:
    if (ctx->pc == 0x40E9B4u) {
        ctx->pc = 0x40E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9B0u;
        // 0x40e9b4: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E9B8u;
        goto label_40e9b8;
    }
    ctx->pc = 0x40E9B0u;
    SET_GPR_U32(ctx, 31, 0x40E9B8u);
    ctx->pc = 0x40E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E9B0u;
    // 0x40e9b4: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x40E9B0u, 0x40E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E9B8u;
label_40e9b8:
    // 0x40e9b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x40e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40e9bc:
    // 0x40e9bc: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x40e9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_40e9c0:
    // 0x40e9c0: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x40e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_40e9c4:
    // 0x40e9c4: 0xa0f809  jalr        $a1
label_40e9c8:
    if (ctx->pc == 0x40E9C8u) {
        ctx->pc = 0x40E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9C4u;
        // 0x40e9c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E9CCu;
        goto label_40e9cc;
    }
    ctx->pc = 0x40E9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x40E9CCu);
        ctx->pc = 0x40E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9C4u;
        // 0x40e9c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E9C4u, 0x40E9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40E9CCu;
label_40e9cc:
    // 0x40e9cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40e9d0:
    // 0x40e9d0: 0x8c62c698  lw          $v0, -0x3968($v1)
    ctx->pc = 0x40e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952600)));
label_40e9d4:
    // 0x40e9d4: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_40e9d8:
    if (ctx->pc == 0x40E9D8u) {
        ctx->pc = 0x40E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9D4u;
        // 0x40e9d8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E9DCu;
        goto label_40e9dc;
    }
    ctx->pc = 0x40E9D4u;
    {
        const bool branch_taken_0x40e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9D4u;
        // 0x40e9d8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e9d4) {
            ctx->pc = 0x40EC2Cu;
            goto label_40ec2c;
        }
    }
    ctx->pc = 0x40E9DCu;
label_40e9dc:
    // 0x40e9dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40e9e0:
    // 0x40e9e0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x40e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_40e9e4:
    // 0x40e9e4: 0x90620410  lbu         $v0, 0x410($v1)
    ctx->pc = 0x40e9e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_40e9e8:
    // 0x40e9e8: 0x54400091  bnel        $v0, $zero, . + 4 + (0x91 << 2)
label_40e9ec:
    if (ctx->pc == 0x40E9ECu) {
        ctx->pc = 0x40E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9E8u;
        // 0x40e9ec: 0x4600c546  mov.s       $f21, $f24 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40E9F0u;
        goto label_40e9f0;
    }
    ctx->pc = 0x40E9E8u;
    {
        const bool branch_taken_0x40e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40e9e8) {
            ctx->pc = 0x40E9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E9E8u;
            // 0x40e9ec: 0x4600c546  mov.s       $f21, $f24 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40EC30u;
            goto label_40ec30;
        }
    }
    ctx->pc = 0x40E9F0u;
label_40e9f0:
    // 0x40e9f0: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x40e9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_40e9f4:
    // 0x40e9f4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x40e9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_40e9f8:
    // 0x40e9f8: 0x8e2239f4  lw          $v0, 0x39F4($s1)
    ctx->pc = 0x40e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14836)));
label_40e9fc:
    // 0x40e9fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_40ea00:
    if (ctx->pc == 0x40EA00u) {
        ctx->pc = 0x40EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9FCu;
        // 0x40ea00: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EA04u;
        goto label_40ea04;
    }
    ctx->pc = 0x40E9FCu;
    {
        const bool branch_taken_0x40e9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E9FCu;
        // 0x40ea00: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e9fc) {
            ctx->pc = 0x40EA28u;
            goto label_40ea28;
        }
    }
    ctx->pc = 0x40EA04u;
label_40ea04:
    // 0x40ea04: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x40ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_40ea08:
    // 0x40ea08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40ea0c:
    // 0x40ea0c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x40ea0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_40ea10:
    // 0x40ea10: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40ea14:
    // 0x40ea14: 0x40f809  jalr        $v0
label_40ea18:
    if (ctx->pc == 0x40EA18u) {
        ctx->pc = 0x40EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA14u;
        // 0x40ea18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EA1Cu;
        goto label_40ea1c;
    }
    ctx->pc = 0x40EA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EA1Cu);
        ctx->pc = 0x40EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA14u;
        // 0x40ea18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EA14u, 0x40EA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EA1Cu;
label_40ea1c:
    // 0x40ea1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ea20:
    // 0x40ea20: 0xae4239f0  sw          $v0, 0x39F0($s2)
    ctx->pc = 0x40ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14832), GPR_U32(ctx, 2));
label_40ea24:
    // 0x40ea24: 0xae2339f4  sw          $v1, 0x39F4($s1)
    ctx->pc = 0x40ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14836), GPR_U32(ctx, 3));
label_40ea28:
    // 0x40ea28: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x40ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_40ea2c:
    // 0x40ea2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40ea30:
    // 0x40ea30: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x40ea30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_40ea34:
    // 0x40ea34: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_40ea38:
    // 0x40ea38: 0x40f809  jalr        $v0
label_40ea3c:
    if (ctx->pc == 0x40EA3Cu) {
        ctx->pc = 0x40EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA38u;
        // 0x40ea3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EA40u;
        goto label_40ea40;
    }
    ctx->pc = 0x40EA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EA40u);
        ctx->pc = 0x40EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA38u;
        // 0x40ea3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EA38u, 0x40EA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EA40u;
label_40ea40:
    // 0x40ea40: 0x8e4339f0  lw          $v1, 0x39F0($s2)
    ctx->pc = 0x40ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14832)));
label_40ea44:
    // 0x40ea44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40ea44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40ea48:
    // 0x40ea48: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x40ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_40ea4c:
    // 0x40ea4c: 0xc32823  subu        $a1, $a2, $v1
    ctx->pc = 0x40ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_40ea50:
    // 0x40ea50: 0x2ca20065  sltiu       $v0, $a1, 0x65
    ctx->pc = 0x40ea50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_40ea54:
    // 0x40ea54: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x40ea54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_40ea58:
    // 0x40ea58: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_40ea5c:
    if (ctx->pc == 0x40EA5Cu) {
        ctx->pc = 0x40EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA58u;
        // 0x40ea5c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EA60u;
        goto label_40ea60;
    }
    ctx->pc = 0x40EA58u;
    {
        const bool branch_taken_0x40ea58 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x40EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EA58u;
        // 0x40ea5c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ea58) {
            ctx->pc = 0x40EA74u;
            goto label_40ea74;
        }
    }
    ctx->pc = 0x40EA60u;
label_40ea60:
    // 0x40ea60: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x40ea60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40ea64:
    // 0x40ea64: 0x0  nop
    ctx->pc = 0x40ea64u;
    // NOP
label_40ea68:
    // 0x40ea68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40ea68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40ea6c:
    // 0x40ea6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_40ea70:
    if (ctx->pc == 0x40EA70u) {
        ctx->pc = 0x40EA74u;
        goto label_40ea74;
    }
    ctx->pc = 0x40EA6Cu;
    {
        const bool branch_taken_0x40ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ea6c) {
            ctx->pc = 0x40EA8Cu;
            goto label_40ea8c;
        }
    }
    ctx->pc = 0x40EA74u;
label_40ea74:
    // 0x40ea74: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x40ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_40ea78:
    // 0x40ea78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_40ea7c:
    // 0x40ea7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40ea7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40ea80:
    // 0x40ea80: 0x0  nop
    ctx->pc = 0x40ea80u;
    // NOP
label_40ea84:
    // 0x40ea84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40ea84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40ea88:
    // 0x40ea88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40ea88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40ea8c:
    // 0x40ea8c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x40ea8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_40ea90:
    // 0x40ea90: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x40ea90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_40ea94:
    // 0x40ea94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40ea94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ea98:
    // 0x40ea98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40ea9c:
    // 0x40ea9c: 0xae4639f0  sw          $a2, 0x39F0($s2)
    ctx->pc = 0x40ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14832), GPR_U32(ctx, 6));
label_40eaa0:
    // 0x40eaa0: 0xc103a34  jal         func_40E8D0
label_40eaa4:
    if (ctx->pc == 0x40EAA4u) {
        ctx->pc = 0x40EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAA0u;
        // 0x40eaa4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EAA8u;
        goto label_40eaa8;
    }
    ctx->pc = 0x40EAA0u;
    SET_GPR_U32(ctx, 31, 0x40EAA8u);
    ctx->pc = 0x40EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EAA0u;
    // 0x40eaa4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40EAA0u, 0x40EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EAA8u;
label_40eaa8:
    // 0x40eaa8: 0xc104620  jal         func_411880
label_40eaac:
    if (ctx->pc == 0x40EAACu) {
        ctx->pc = 0x40EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAA8u;
        // 0x40eaac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EAB0u;
        goto label_40eab0;
    }
    ctx->pc = 0x40EAA8u;
    SET_GPR_U32(ctx, 31, 0x40EAB0u);
    ctx->pc = 0x40EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EAA8u;
    // 0x40eaac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411880u, 0x40EAA8u, 0x40EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EAB0u;
label_40eab0:
    // 0x40eab0: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x40eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_40eab4:
    // 0x40eab4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_40eab8:
    if (ctx->pc == 0x40EAB8u) {
        ctx->pc = 0x40EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAB4u;
        // 0x40eab8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EABCu;
        goto label_40eabc;
    }
    ctx->pc = 0x40EAB4u;
    {
        const bool branch_taken_0x40eab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAB4u;
        // 0x40eab8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eab4) {
            ctx->pc = 0x40EADCu;
            goto label_40eadc;
        }
    }
    ctx->pc = 0x40EABCu;
label_40eabc:
    // 0x40eabc: 0xc104620  jal         func_411880
label_40eac0:
    if (ctx->pc == 0x40EAC0u) {
        ctx->pc = 0x40EAC4u;
        goto label_40eac4;
    }
    ctx->pc = 0x40EABCu;
    SET_GPR_U32(ctx, 31, 0x40EAC4u);
    ctx->pc = 0x411880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411880u, 0x40EABCu, 0x40EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EAC4u;
label_40eac4:
    // 0x40eac4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40eac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40eac8:
    // 0x40eac8: 0x0  nop
    ctx->pc = 0x40eac8u;
    // NOP
label_40eacc:
    // 0x40eacc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_40ead0:
    if (ctx->pc == 0x40EAD0u) {
        ctx->pc = 0x40EAD4u;
        goto label_40ead4;
    }
    ctx->pc = 0x40EACCu;
    {
        const bool branch_taken_0x40eacc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40eacc) {
            ctx->pc = 0x40EAF4u;
            goto label_40eaf4;
        }
    }
    ctx->pc = 0x40EAD4u;
label_40ead4:
    // 0x40ead4: 0x1000000b  b           . + 4 + (0xB << 2)
label_40ead8:
    if (ctx->pc == 0x40EAD8u) {
        ctx->pc = 0x40EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAD4u;
        // 0x40ead8: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EADCu;
        goto label_40eadc;
    }
    ctx->pc = 0x40EAD4u;
    {
        const bool branch_taken_0x40ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAD4u;
        // 0x40ead8: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ead4) {
            ctx->pc = 0x40EB04u;
            goto label_40eb04;
        }
    }
    ctx->pc = 0x40EADCu;
label_40eadc:
    // 0x40eadc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40eae0:
    // 0x40eae0: 0xc4408c5c  lwc1        $f0, -0x73A4($v0)
    ctx->pc = 0x40eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40eae4:
    // 0x40eae4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40eae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40eae8:
    // 0x40eae8: 0x0  nop
    ctx->pc = 0x40eae8u;
    // NOP
label_40eaec:
    // 0x40eaec: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_40eaf0:
    if (ctx->pc == 0x40EAF0u) {
        ctx->pc = 0x40EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAECu;
        // 0x40eaf0: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EAF4u;
        goto label_40eaf4;
    }
    ctx->pc = 0x40EAECu;
    {
        const bool branch_taken_0x40eaec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40eaec) {
            ctx->pc = 0x40EAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40EAECu;
            // 0x40eaf0: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40EB04u;
            goto label_40eb04;
        }
    }
    ctx->pc = 0x40EAF4u;
label_40eaf4:
    // 0x40eaf4: 0xc103a34  jal         func_40E8D0
label_40eaf8:
    if (ctx->pc == 0x40EAF8u) {
        ctx->pc = 0x40EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAF4u;
        // 0x40eaf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EAFCu;
        goto label_40eafc;
    }
    ctx->pc = 0x40EAF4u;
    SET_GPR_U32(ctx, 31, 0x40EAFCu);
    ctx->pc = 0x40EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EAF4u;
    // 0x40eaf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40EAF4u, 0x40EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EAFCu;
label_40eafc:
    // 0x40eafc: 0x10000003  b           . + 4 + (0x3 << 2)
label_40eb00:
    if (ctx->pc == 0x40EB00u) {
        ctx->pc = 0x40EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAFCu;
        // 0x40eb00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EB04u;
        goto label_40eb04;
    }
    ctx->pc = 0x40EAFCu;
    {
        const bool branch_taken_0x40eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EAFCu;
        // 0x40eb00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eafc) {
            ctx->pc = 0x40EB0Cu;
            goto label_40eb0c;
        }
    }
    ctx->pc = 0x40EB04u;
label_40eb04:
    // 0x40eb04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_40eb08:
    if (ctx->pc == 0x40EB08u) {
        ctx->pc = 0x40EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EB04u;
        // 0x40eb08: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EB0Cu;
        goto label_40eb0c;
    }
    ctx->pc = 0x40EB04u;
    {
        const bool branch_taken_0x40eb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EB04u;
        // 0x40eb08: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eb04) {
            ctx->pc = 0x40EB1Cu;
            goto label_40eb1c;
        }
    }
    ctx->pc = 0x40EB0Cu;
label_40eb0c:
    // 0x40eb0c: 0xc104620  jal         func_411880
label_40eb10:
    if (ctx->pc == 0x40EB10u) {
        ctx->pc = 0x40EB14u;
        goto label_40eb14;
    }
    ctx->pc = 0x40EB0Cu;
    SET_GPR_U32(ctx, 31, 0x40EB14u);
    ctx->pc = 0x411880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411880u, 0x40EB0Cu, 0x40EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EB14u;
label_40eb14:
    // 0x40eb14: 0x10000002  b           . + 4 + (0x2 << 2)
label_40eb18:
    if (ctx->pc == 0x40EB18u) {
        ctx->pc = 0x40EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EB14u;
        // 0x40eb18: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EB1Cu;
        goto label_40eb1c;
    }
    ctx->pc = 0x40EB14u;
    {
        const bool branch_taken_0x40eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EB14u;
        // 0x40eb18: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eb14) {
            ctx->pc = 0x40EB20u;
            goto label_40eb20;
        }
    }
    ctx->pc = 0x40EB1Cu;
label_40eb1c:
    // 0x40eb1c: 0xc4548c5c  lwc1        $f20, -0x73A4($v0)
    ctx->pc = 0x40eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40eb20:
    // 0x40eb20: 0x8fc3cdb4  lw          $v1, -0x324C($fp)
    ctx->pc = 0x40eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954420)));
label_40eb24:
    // 0x40eb24: 0x3c0141ec  lui         $at, 0x41EC
    ctx->pc = 0x40eb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16876 << 16));
label_40eb28:
    // 0x40eb28: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x40eb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_40eb2c:
    // 0x40eb2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40eb30:
    // 0x40eb30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x40eb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_40eb34:
    // 0x40eb34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_40eb38:
    if (ctx->pc == 0x40EB38u) {
        ctx->pc = 0x40EB3Cu;
        goto label_40eb3c;
    }
    ctx->pc = 0x40EB34u;
    {
        const bool branch_taken_0x40eb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40eb34) {
            ctx->pc = 0x40EB44u;
            goto label_40eb44;
        }
    }
    ctx->pc = 0x40EB3Cu;
label_40eb3c:
    // 0x40eb3c: 0x3c0141c4  lui         $at, 0x41C4
    ctx->pc = 0x40eb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16836 << 16));
label_40eb40:
    // 0x40eb40: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x40eb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_40eb44:
    // 0x40eb44: 0xc047ab8  jal         func_11EAE0
label_40eb48:
    if (ctx->pc == 0x40EB48u) {
        ctx->pc = 0x40EB4Cu;
        goto label_40eb4c;
    }
    ctx->pc = 0x40EB44u;
    SET_GPR_U32(ctx, 31, 0x40EB4Cu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x40EB44u, 0x40EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EB4Cu;
label_40eb4c:
    // 0x40eb4c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_40eb50:
    if (ctx->pc == 0x40EB50u) {
        ctx->pc = 0x40EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EB4Cu;
        // 0x40eb50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EB54u;
        goto label_40eb54;
    }
    ctx->pc = 0x40EB4Cu;
    {
        const bool branch_taken_0x40eb4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x40EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EB4Cu;
        // 0x40eb50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eb4c) {
            ctx->pc = 0x40EB68u;
            goto label_40eb68;
        }
    }
    ctx->pc = 0x40EB54u;
label_40eb54:
    // 0x40eb54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40eb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40eb58:
    // 0x40eb58: 0x0  nop
    ctx->pc = 0x40eb58u;
    // NOP
label_40eb5c:
    // 0x40eb5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40eb5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40eb60:
    // 0x40eb60: 0x10000007  b           . + 4 + (0x7 << 2)
label_40eb64:
    if (ctx->pc == 0x40EB64u) {
        ctx->pc = 0x40EB68u;
        goto label_40eb68;
    }
    ctx->pc = 0x40EB60u;
    {
        const bool branch_taken_0x40eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40eb60) {
            ctx->pc = 0x40EB80u;
            goto label_40eb80;
        }
    }
    ctx->pc = 0x40EB68u;
label_40eb68:
    // 0x40eb68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40eb6c:
    // 0x40eb6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_40eb70:
    // 0x40eb70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40eb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40eb74:
    // 0x40eb74: 0x0  nop
    ctx->pc = 0x40eb74u;
    // NOP
label_40eb78:
    // 0x40eb78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40eb78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40eb7c:
    // 0x40eb7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40eb7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40eb80:
    // 0x40eb80: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x40eb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_40eb84:
    // 0x40eb84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40eb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40eb88:
    // 0x40eb88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40eb8c:
    // 0x40eb8c: 0xc443c680  lwc1        $f3, -0x3980($v0)
    ctx->pc = 0x40eb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40eb90:
    // 0x40eb90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40eb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40eb94:
    // 0x40eb94: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x40eb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_40eb98:
    // 0x40eb98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40eb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40eb9c:
    // 0x40eb9c: 0x4603b834  c.lt.s      $f23, $f3
    ctx->pc = 0x40eb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40eba0:
    // 0x40eba0: 0x0  nop
    ctx->pc = 0x40eba0u;
    // NOP
label_40eba4:
    // 0x40eba4: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_40eba8:
    if (ctx->pc == 0x40EBA8u) {
        ctx->pc = 0x40EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBA4u;
        // 0x40eba8: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EBACu;
        goto label_40ebac;
    }
    ctx->pc = 0x40EBA4u;
    {
        const bool branch_taken_0x40eba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBA4u;
        // 0x40eba8: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eba4) {
            ctx->pc = 0x40EC04u;
            goto label_40ec04;
        }
    }
    ctx->pc = 0x40EBACu;
label_40ebac:
    // 0x40ebac: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x40ebacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ebb0:
    // 0x40ebb0: 0x0  nop
    ctx->pc = 0x40ebb0u;
    // NOP
label_40ebb4:
    // 0x40ebb4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_40ebb8:
    if (ctx->pc == 0x40EBB8u) {
        ctx->pc = 0x40EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBB4u;
        // 0x40ebb8: 0x4615a001  sub.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EBBCu;
        goto label_40ebbc;
    }
    ctx->pc = 0x40EBB4u;
    {
        const bool branch_taken_0x40ebb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ebb4) {
            ctx->pc = 0x40EBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40EBB4u;
            // 0x40ebb8: 0x4615a001  sub.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40EBDCu;
            goto label_40ebdc;
        }
    }
    ctx->pc = 0x40EBBCu;
label_40ebbc:
    // 0x40ebbc: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x40ebbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_40ebc0:
    // 0x40ebc0: 0x3c014222  lui         $at, 0x4222
    ctx->pc = 0x40ebc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16930 << 16));
label_40ebc4:
    // 0x40ebc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40ebc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ebc8:
    // 0x40ebc8: 0x0  nop
    ctx->pc = 0x40ebc8u;
    // NOP
label_40ebcc:
    // 0x40ebcc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x40ebccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_40ebd0:
    // 0x40ebd0: 0x461608c2  mul.s       $f3, $f1, $f22
    ctx->pc = 0x40ebd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_40ebd4:
    // 0x40ebd4: 0x10000011  b           . + 4 + (0x11 << 2)
label_40ebd8:
    if (ctx->pc == 0x40EBD8u) {
        ctx->pc = 0x40EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBD4u;
        // 0x40ebd8: 0x460300e9  min.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = std::min(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EBDCu;
        goto label_40ebdc;
    }
    ctx->pc = 0x40EBD4u;
    {
        const bool branch_taken_0x40ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBD4u;
        // 0x40ebd8: 0x460300e9  min.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = std::min(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ebd4) {
            ctx->pc = 0x40EC1Cu;
            goto label_40ec1c;
        }
    }
    ctx->pc = 0x40EBDCu;
label_40ebdc:
    // 0x40ebdc: 0x3c014128  lui         $at, 0x4128
    ctx->pc = 0x40ebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16680 << 16));
label_40ebe0:
    // 0x40ebe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40ebe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40ebe4:
    // 0x40ebe4: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x40ebe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
label_40ebe8:
    // 0x40ebe8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x40ebe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40ebec:
    // 0x40ebec: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x40ebecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_40ebf0:
    // 0x40ebf0: 0x461600c2  mul.s       $f3, $f0, $f22
    ctx->pc = 0x40ebf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_40ebf4:
    // 0x40ebf4: 0x460308e9  min.s       $f3, $f1, $f3
    ctx->pc = 0x40ebf4u;
    ctx->f[3] = std::min(ctx->f[1], ctx->f[3]);
label_40ebf8:
    // 0x40ebf8: 0x4603ad40  add.s       $f21, $f21, $f3
    ctx->pc = 0x40ebf8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
label_40ebfc:
    // 0x40ebfc: 0x10000009  b           . + 4 + (0x9 << 2)
label_40ec00:
    if (ctx->pc == 0x40EC00u) {
        ctx->pc = 0x40EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBFCu;
        // 0x40ec00: 0x4602ad69  min.s       $f21, $f21, $f2 (Delay Slot)
        ctx->f[21] = std::min(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EC04u;
        goto label_40ec04;
    }
    ctx->pc = 0x40EBFCu;
    {
        const bool branch_taken_0x40ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBFCu;
        // 0x40ec00: 0x4602ad69  min.s       $f21, $f21, $f2 (Delay Slot)
        ctx->f[21] = std::min(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ebfc) {
            ctx->pc = 0x40EC24u;
            goto label_40ec24;
        }
    }
    ctx->pc = 0x40EC04u;
label_40ec04:
    // 0x40ec04: 0x4603b801  sub.s       $f0, $f23, $f3
    ctx->pc = 0x40ec04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[3]);
label_40ec08:
    // 0x40ec08: 0x3c014128  lui         $at, 0x4128
    ctx->pc = 0x40ec08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16680 << 16));
label_40ec0c:
    // 0x40ec0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40ec0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40ec10:
    // 0x40ec10: 0x0  nop
    ctx->pc = 0x40ec10u;
    // NOP
label_40ec14:
    // 0x40ec14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40ec14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40ec18:
    // 0x40ec18: 0x4600b0c2  mul.s       $f3, $f22, $f0
    ctx->pc = 0x40ec18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_40ec1c:
    // 0x40ec1c: 0x4603ad41  sub.s       $f21, $f21, $f3
    ctx->pc = 0x40ec1cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_40ec20:
    // 0x40ec20: 0x4602ad68  max.s       $f21, $f21, $f2
    ctx->pc = 0x40ec20u;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[2]);
label_40ec24:
    // 0x40ec24: 0x10000002  b           . + 4 + (0x2 << 2)
label_40ec28:
    if (ctx->pc == 0x40EC28u) {
        ctx->pc = 0x40EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC24u;
        // 0x40ec28: 0x4618ad69  min.s       $f21, $f21, $f24 (Delay Slot)
        ctx->f[21] = std::min(ctx->f[21], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EC2Cu;
        goto label_40ec2c;
    }
    ctx->pc = 0x40EC24u;
    {
        const bool branch_taken_0x40ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC24u;
        // 0x40ec28: 0x4618ad69  min.s       $f21, $f21, $f24 (Delay Slot)
        ctx->f[21] = std::min(ctx->f[21], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ec24) {
            ctx->pc = 0x40EC30u;
            goto label_40ec30;
        }
    }
    ctx->pc = 0x40EC2Cu;
label_40ec2c:
    // 0x40ec2c: 0x4600c546  mov.s       $f21, $f24
    ctx->pc = 0x40ec2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[24]);
label_40ec30:
    // 0x40ec30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ec34:
    // 0x40ec34: 0xc047e6c  jal         func_11F9B0
label_40ec38:
    if (ctx->pc == 0x40EC38u) {
        ctx->pc = 0x40EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC34u;
        // 0x40ec38: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EC3Cu;
        goto label_40ec3c;
    }
    ctx->pc = 0x40EC34u;
    SET_GPR_U32(ctx, 31, 0x40EC3Cu);
    ctx->pc = 0x40EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EC34u;
    // 0x40ec38: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x40EC34u, 0x40EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EC3Cu;
label_40ec3c:
    // 0x40ec3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x40ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40ec40:
    // 0x40ec40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40ec40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_40ec44:
    // 0x40ec44: 0x846401b0  lh          $a0, 0x1B0($v1)
    ctx->pc = 0x40ec44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 432)));
label_40ec48:
    // 0x40ec48: 0x8c6501b4  lw          $a1, 0x1B4($v1)
    ctx->pc = 0x40ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
label_40ec4c:
    // 0x40ec4c: 0xa0f809  jalr        $a1
label_40ec50:
    if (ctx->pc == 0x40EC50u) {
        ctx->pc = 0x40EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC4Cu;
        // 0x40ec50: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EC54u;
        goto label_40ec54;
    }
    ctx->pc = 0x40EC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x40EC54u);
        ctx->pc = 0x40EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC4Cu;
        // 0x40ec50: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EC4Cu, 0x40EC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EC54u;
label_40ec54:
    // 0x40ec54: 0xc05d080  jal         func_174200
label_40ec58:
    if (ctx->pc == 0x40EC58u) {
        ctx->pc = 0x40EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC54u;
        // 0x40ec58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EC5Cu;
        goto label_40ec5c;
    }
    ctx->pc = 0x40EC54u;
    SET_GPR_U32(ctx, 31, 0x40EC5Cu);
    ctx->pc = 0x40EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EC54u;
    // 0x40ec58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174200u, 0x40EC54u, 0x40EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EC5Cu;
label_40ec5c:
    // 0x40ec5c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x40ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ec60:
    // 0x40ec60: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40ec60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_40ec64:
    // 0x40ec64: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x40ec64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_40ec68:
    // 0x40ec68: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x40ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_40ec6c:
    // 0x40ec6c: 0x60f809  jalr        $v1
label_40ec70:
    if (ctx->pc == 0x40EC70u) {
        ctx->pc = 0x40EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC6Cu;
        // 0x40ec70: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EC74u;
        goto label_40ec74;
    }
    ctx->pc = 0x40EC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40EC74u);
        ctx->pc = 0x40EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC6Cu;
        // 0x40ec70: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EC6Cu, 0x40EC74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EC74u;
label_40ec74:
    // 0x40ec74: 0x8fc5cdb4  lw          $a1, -0x324C($fp)
    ctx->pc = 0x40ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954420)));
label_40ec78:
    // 0x40ec78: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x40ec78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ec7c:
    // 0x40ec7c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x40ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40ec80:
    // 0x40ec80: 0x86110040  lh          $s1, 0x40($s0)
    ctx->pc = 0x40ec80u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_40ec84:
    // 0x40ec84: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x40ec84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_40ec88:
    // 0x40ec88: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x40ec88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_40ec8c:
    // 0x40ec8c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x40ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_40ec90:
    // 0x40ec90: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x40ec90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_40ec94:
    // 0x40ec94: 0x60f809  jalr        $v1
label_40ec98:
    if (ctx->pc == 0x40EC98u) {
        ctx->pc = 0x40EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC94u;
        // 0x40ec98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EC9Cu;
        goto label_40ec9c;
    }
    ctx->pc = 0x40EC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40EC9Cu);
        ctx->pc = 0x40EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EC94u;
        // 0x40ec98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EC94u, 0x40EC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EC9Cu;
label_40ec9c:
    // 0x40ec9c: 0x4600ab02  mul.s       $f12, $f21, $f0
    ctx->pc = 0x40ec9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_40eca0:
    // 0x40eca0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40eca4:
    // 0x40eca4: 0x40f809  jalr        $v0
label_40eca8:
    if (ctx->pc == 0x40ECA8u) {
        ctx->pc = 0x40ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECA4u;
        // 0x40eca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ECACu;
        goto label_40ecac;
    }
    ctx->pc = 0x40ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ECACu);
        ctx->pc = 0x40ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECA4u;
        // 0x40eca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ECA4u, 0x40ECACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ECACu;
label_40ecac:
    // 0x40ecac: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x40ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_40ecb0:
    // 0x40ecb0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x40ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_40ecb4:
    // 0x40ecb4: 0xc11cb14  jal         func_472C50
label_40ecb8:
    if (ctx->pc == 0x40ECB8u) {
        ctx->pc = 0x40ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECB4u;
        // 0x40ecb8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ECBCu;
        goto label_40ecbc;
    }
    ctx->pc = 0x40ECB4u;
    SET_GPR_U32(ctx, 31, 0x40ECBCu);
    ctx->pc = 0x40ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ECB4u;
    // 0x40ecb8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C50u, 0x40ECB4u, 0x40ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ECBCu;
label_40ecbc:
    // 0x40ecbc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ecc0:
    // 0x40ecc0: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40ecc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40ecc4:
    // 0x40ecc4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40ecc8:
    // 0x40ecc8: 0x40f809  jalr        $v0
label_40eccc:
    if (ctx->pc == 0x40ECCCu) {
        ctx->pc = 0x40ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECC8u;
        // 0x40eccc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ECD0u;
        goto label_40ecd0;
    }
    ctx->pc = 0x40ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ECD0u);
        ctx->pc = 0x40ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECC8u;
        // 0x40eccc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ECC8u, 0x40ECD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ECD0u;
label_40ecd0:
    // 0x40ecd0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_40ecd4:
    if (ctx->pc == 0x40ECD4u) {
        ctx->pc = 0x40ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECD0u;
        // 0x40ecd4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ECD8u;
        goto label_40ecd8;
    }
    ctx->pc = 0x40ECD0u;
    {
        const bool branch_taken_0x40ecd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECD0u;
        // 0x40ecd4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ecd0) {
            ctx->pc = 0x40ED80u;
            goto label_40ed80;
        }
    }
    ctx->pc = 0x40ECD8u;
label_40ecd8:
    // 0x40ecd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40ecdc:
    // 0x40ecdc: 0x2450ad28  addiu       $s0, $v0, -0x52D8
    ctx->pc = 0x40ecdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_40ece0:
    // 0x40ece0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40ece4:
    // 0x40ece4: 0x40f809  jalr        $v0
label_40ece8:
    if (ctx->pc == 0x40ECE8u) {
        ctx->pc = 0x40ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECE4u;
        // 0x40ece8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ECECu;
        goto label_40ecec;
    }
    ctx->pc = 0x40ECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ECECu);
        ctx->pc = 0x40ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECE4u;
        // 0x40ece8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ECE4u, 0x40ECECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ECECu;
label_40ecec:
    // 0x40ecec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40ecf0:
    // 0x40ecf0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40ecf4:
    // 0x40ecf4: 0x40f809  jalr        $v0
label_40ecf8:
    if (ctx->pc == 0x40ECF8u) {
        ctx->pc = 0x40ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECF4u;
        // 0x40ecf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ECFCu;
        goto label_40ecfc;
    }
    ctx->pc = 0x40ECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ECFCu);
        ctx->pc = 0x40ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECF4u;
        // 0x40ecf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ECF4u, 0x40ECFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ECFCu;
label_40ecfc:
    // 0x40ecfc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40ed00:
    // 0x40ed00: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x40ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40ed04:
    // 0x40ed04: 0x40f809  jalr        $v0
label_40ed08:
    if (ctx->pc == 0x40ED08u) {
        ctx->pc = 0x40ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED04u;
        // 0x40ed08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED0Cu;
        goto label_40ed0c;
    }
    ctx->pc = 0x40ED04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ED0Cu);
        ctx->pc = 0x40ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED04u;
        // 0x40ed08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ED04u, 0x40ED0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ED0Cu;
label_40ed0c:
    // 0x40ed0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40ed10:
    // 0x40ed10: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x40ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_40ed14:
    // 0x40ed14: 0x40f809  jalr        $v0
label_40ed18:
    if (ctx->pc == 0x40ED18u) {
        ctx->pc = 0x40ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED14u;
        // 0x40ed18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED1Cu;
        goto label_40ed1c;
    }
    ctx->pc = 0x40ED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ED1Cu);
        ctx->pc = 0x40ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED14u;
        // 0x40ed18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ED14u, 0x40ED1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ED1Cu;
label_40ed1c:
    // 0x40ed1c: 0x26e35348  addiu       $v1, $s7, 0x5348
    ctx->pc = 0x40ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
label_40ed20:
    // 0x40ed20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ed24:
    // 0x40ed24: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x40ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_40ed28:
    // 0x40ed28: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
label_40ed2c:
    if (ctx->pc == 0x40ED2Cu) {
        ctx->pc = 0x40ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED28u;
        // 0x40ed2c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED30u;
        goto label_40ed30;
    }
    ctx->pc = 0x40ED28u;
    {
        const bool branch_taken_0x40ed28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x40ed28) {
            ctx->pc = 0x40ED2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40ED28u;
            // 0x40ed2c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40ED40u;
            goto label_40ed40;
        }
    }
    ctx->pc = 0x40ED30u;
label_40ed30:
    // 0x40ed30: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x40ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_40ed34:
    // 0x40ed34: 0xc11c754  jal         func_471D50
label_40ed38:
    if (ctx->pc == 0x40ED38u) {
        ctx->pc = 0x40ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED34u;
        // 0x40ed38: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED3Cu;
        goto label_40ed3c;
    }
    ctx->pc = 0x40ED34u;
    SET_GPR_U32(ctx, 31, 0x40ED3Cu);
    ctx->pc = 0x40ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ED34u;
    // 0x40ed38: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D50u, 0x40ED34u, 0x40ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ED3Cu;
label_40ed3c:
    // 0x40ed3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40ed40:
    // 0x40ed40: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x40ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_40ed44:
    // 0x40ed44: 0x40f809  jalr        $v0
label_40ed48:
    if (ctx->pc == 0x40ED48u) {
        ctx->pc = 0x40ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED44u;
        // 0x40ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED4Cu;
        goto label_40ed4c;
    }
    ctx->pc = 0x40ED44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ED4Cu);
        ctx->pc = 0x40ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED44u;
        // 0x40ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ED44u, 0x40ED4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ED4Cu;
label_40ed4c:
    // 0x40ed4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40ed50:
    // 0x40ed50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40ed54:
    // 0x40ed54: 0x40f809  jalr        $v0
label_40ed58:
    if (ctx->pc == 0x40ED58u) {
        ctx->pc = 0x40ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED54u;
        // 0x40ed58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED5Cu;
        goto label_40ed5c;
    }
    ctx->pc = 0x40ED54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ED5Cu);
        ctx->pc = 0x40ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED54u;
        // 0x40ed58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ED54u, 0x40ED5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ED5Cu;
label_40ed5c:
    // 0x40ed5c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40ed60:
    // 0x40ed60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x40ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40ed64:
    // 0x40ed64: 0x40f809  jalr        $v0
label_40ed68:
    if (ctx->pc == 0x40ED68u) {
        ctx->pc = 0x40ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED64u;
        // 0x40ed68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED6Cu;
        goto label_40ed6c;
    }
    ctx->pc = 0x40ED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ED6Cu);
        ctx->pc = 0x40ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED64u;
        // 0x40ed68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ED64u, 0x40ED6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ED6Cu;
label_40ed6c:
    // 0x40ed6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ed70:
    // 0x40ed70: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40ed70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40ed74:
    // 0x40ed74: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40ed78:
    // 0x40ed78: 0x40f809  jalr        $v0
label_40ed7c:
    if (ctx->pc == 0x40ED7Cu) {
        ctx->pc = 0x40ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED78u;
        // 0x40ed7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED80u;
        goto label_40ed80;
    }
    ctx->pc = 0x40ED78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40ED80u);
        ctx->pc = 0x40ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED78u;
        // 0x40ed7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40ED78u, 0x40ED80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40ED80u;
label_40ed80:
    // 0x40ed80: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x40ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_40ed84:
    // 0x40ed84: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x40ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_40ed88:
    // 0x40ed88: 0xc11cb0a  jal         func_472C28
label_40ed8c:
    if (ctx->pc == 0x40ED8Cu) {
        ctx->pc = 0x40ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED88u;
        // 0x40ed8c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED90u;
        goto label_40ed90;
    }
    ctx->pc = 0x40ED88u;
    SET_GPR_U32(ctx, 31, 0x40ED90u);
    ctx->pc = 0x40ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ED88u;
    // 0x40ed8c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C28u, 0x40ED88u, 0x40ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ED90u;
label_40ed90:
    // 0x40ed90: 0xc103a34  jal         func_40E8D0
label_40ed94:
    if (ctx->pc == 0x40ED94u) {
        ctx->pc = 0x40ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED90u;
        // 0x40ed94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40ED98u;
        goto label_40ed98;
    }
    ctx->pc = 0x40ED90u;
    SET_GPR_U32(ctx, 31, 0x40ED98u);
    ctx->pc = 0x40ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ED90u;
    // 0x40ed94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40ED90u, 0x40ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40ED98u;
label_40ed98:
    // 0x40ed98: 0x8c44215c  lw          $a0, 0x215C($v0)
    ctx->pc = 0x40ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
label_40ed9c:
    // 0x40ed9c: 0xc11cb14  jal         func_472C50
label_40eda0:
    if (ctx->pc == 0x40EDA0u) {
        ctx->pc = 0x40EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED9Cu;
        // 0x40eda0: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EDA4u;
        goto label_40eda4;
    }
    ctx->pc = 0x40ED9Cu;
    SET_GPR_U32(ctx, 31, 0x40EDA4u);
    ctx->pc = 0x40EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40ED9Cu;
    // 0x40eda0: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C50u, 0x40ED9Cu, 0x40EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EDA4u;
label_40eda4:
    // 0x40eda4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40eda8:
    // 0x40eda8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40eda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40edac:
    // 0x40edac: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40edb0:
    // 0x40edb0: 0x40f809  jalr        $v0
label_40edb4:
    if (ctx->pc == 0x40EDB4u) {
        ctx->pc = 0x40EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDB0u;
        // 0x40edb4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EDB8u;
        goto label_40edb8;
    }
    ctx->pc = 0x40EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EDB8u);
        ctx->pc = 0x40EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDB0u;
        // 0x40edb4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EDB0u, 0x40EDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EDB8u;
label_40edb8:
    // 0x40edb8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_40edbc:
    if (ctx->pc == 0x40EDBCu) {
        ctx->pc = 0x40EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDB8u;
        // 0x40edbc: 0x26f05348  addiu       $s0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EDC0u;
        goto label_40edc0;
    }
    ctx->pc = 0x40EDB8u;
    {
        const bool branch_taken_0x40edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDB8u;
        // 0x40edbc: 0x26f05348  addiu       $s0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40edb8) {
            ctx->pc = 0x40EE9Cu;
            goto label_40ee9c;
        }
    }
    ctx->pc = 0x40EDC0u;
label_40edc0:
    // 0x40edc0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x40edc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40edc4:
    // 0x40edc4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x40edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_40edc8:
    // 0x40edc8: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
label_40edcc:
    if (ctx->pc == 0x40EDCCu) {
        ctx->pc = 0x40EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDC8u;
        // 0x40edcc: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EDD0u;
        goto label_40edd0;
    }
    ctx->pc = 0x40EDC8u;
    {
        const bool branch_taken_0x40edc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x40edc8) {
            ctx->pc = 0x40EDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40EDC8u;
            // 0x40edcc: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40EDE8u;
            goto label_40ede8;
        }
    }
    ctx->pc = 0x40EDD0u;
label_40edd0:
    // 0x40edd0: 0xc103a34  jal         func_40E8D0
label_40edd4:
    if (ctx->pc == 0x40EDD4u) {
        ctx->pc = 0x40EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDD0u;
        // 0x40edd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EDD8u;
        goto label_40edd8;
    }
    ctx->pc = 0x40EDD0u;
    SET_GPR_U32(ctx, 31, 0x40EDD8u);
    ctx->pc = 0x40EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EDD0u;
    // 0x40edd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40EDD0u, 0x40EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EDD8u;
label_40edd8:
    // 0x40edd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40eddc:
    // 0x40eddc: 0xc104744  jal         func_411D10
label_40ede0:
    if (ctx->pc == 0x40EDE0u) {
        ctx->pc = 0x40EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDDCu;
        // 0x40ede0: 0x2ea50001  sltiu       $a1, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EDE4u;
        goto label_40ede4;
    }
    ctx->pc = 0x40EDDCu;
    SET_GPR_U32(ctx, 31, 0x40EDE4u);
    ctx->pc = 0x40EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EDDCu;
    // 0x40ede0: 0x2ea50001  sltiu       $a1, $s5, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x411D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411D10u, 0x40EDDCu, 0x40EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EDE4u;
label_40ede4:
    // 0x40ede4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x40ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_40ede8:
    // 0x40ede8: 0x1451001d  bne         $v0, $s1, . + 4 + (0x1D << 2)
label_40edec:
    if (ctx->pc == 0x40EDECu) {
        ctx->pc = 0x40EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDE8u;
        // 0x40edec: 0x2691004c  addiu       $s1, $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EDF0u;
        goto label_40edf0;
    }
    ctx->pc = 0x40EDE8u;
    {
        const bool branch_taken_0x40ede8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x40EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDE8u;
        // 0x40edec: 0x2691004c  addiu       $s1, $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ede8) {
            ctx->pc = 0x40EE60u;
            goto label_40ee60;
        }
    }
    ctx->pc = 0x40EDF0u;
label_40edf0:
    // 0x40edf0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x40edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_40edf4:
    // 0x40edf4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x40edf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_40edf8:
    // 0x40edf8: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x40edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_40edfc:
    // 0x40edfc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40ee00:
    // 0x40ee00: 0x40f809  jalr        $v0
label_40ee04:
    if (ctx->pc == 0x40EE04u) {
        ctx->pc = 0x40EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE00u;
        // 0x40ee04: 0x8cc5c69c  lw          $a1, -0x3964($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EE08u;
        goto label_40ee08;
    }
    ctx->pc = 0x40EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EE08u);
        ctx->pc = 0x40EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE00u;
        // 0x40ee04: 0x8cc5c69c  lw          $a1, -0x3964($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952604)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EE00u, 0x40EE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EE08u;
label_40ee08:
    // 0x40ee08: 0x2683004c  addiu       $v1, $s4, 0x4C
    ctx->pc = 0x40ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
label_40ee0c:
    // 0x40ee0c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x40ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_40ee10:
    // 0x40ee10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_40ee14:
    // 0x40ee14: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
label_40ee18:
    if (ctx->pc == 0x40EE18u) {
        ctx->pc = 0x40EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE14u;
        // 0x40ee18: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EE1Cu;
        goto label_40ee1c;
    }
    ctx->pc = 0x40EE14u;
    {
        const bool branch_taken_0x40ee14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x40EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE14u;
        // 0x40ee18: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ee14) {
            ctx->pc = 0x40EE88u;
            goto label_40ee88;
        }
    }
    ctx->pc = 0x40EE1Cu;
label_40ee1c:
    // 0x40ee1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40ee1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40ee20:
    // 0x40ee20: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x40ee20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_40ee24:
    // 0x40ee24: 0x0  nop
    ctx->pc = 0x40ee24u;
    // NOP
label_40ee28:
    // 0x40ee28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x40ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40ee2c:
    // 0x40ee2c: 0x8e24ced0  lw          $a0, -0x3130($s1)
    ctx->pc = 0x40ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954704)));
label_40ee30:
    // 0x40ee30: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x40ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_40ee34:
    // 0x40ee34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x40ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_40ee38:
    // 0x40ee38: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x40ee38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_40ee3c:
    // 0x40ee3c: 0xc104664  jal         func_411990
label_40ee40:
    if (ctx->pc == 0x40EE40u) {
        ctx->pc = 0x40EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE3Cu;
        // 0x40ee40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EE44u;
        goto label_40ee44;
    }
    ctx->pc = 0x40EE3Cu;
    SET_GPR_U32(ctx, 31, 0x40EE44u);
    ctx->pc = 0x40EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EE3Cu;
    // 0x40ee40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411990u, 0x40EE3Cu, 0x40EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EE44u;
label_40ee44:
    // 0x40ee44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x40ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40ee48:
    // 0x40ee48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40ee4c:
    // 0x40ee4c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x40ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_40ee50:
    // 0x40ee50: 0x1443fff5  bne         $v0, $v1, . + 4 + (-0xB << 2)
label_40ee54:
    if (ctx->pc == 0x40EE54u) {
        ctx->pc = 0x40EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE50u;
        // 0x40ee54: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EE58u;
        goto label_40ee58;
    }
    ctx->pc = 0x40EE50u;
    {
        const bool branch_taken_0x40ee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE50u;
        // 0x40ee54: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ee50) {
            ctx->pc = 0x40EE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ee28;
        }
    }
    ctx->pc = 0x40EE58u;
label_40ee58:
    // 0x40ee58: 0x1000000c  b           . + 4 + (0xC << 2)
label_40ee5c:
    if (ctx->pc == 0x40EE5Cu) {
        ctx->pc = 0x40EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE58u;
        // 0x40ee5c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EE60u;
        goto label_40ee60;
    }
    ctx->pc = 0x40EE58u;
    {
        const bool branch_taken_0x40ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE58u;
        // 0x40ee5c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ee58) {
            ctx->pc = 0x40EE8Cu;
            goto label_40ee8c;
        }
    }
    ctx->pc = 0x40EE60u;
label_40ee60:
    // 0x40ee60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ee60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ee64:
    // 0x40ee64: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x40ee64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40ee68:
    // 0x40ee68: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x40ee68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40ee6c:
    // 0x40ee6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40ee70:
    // 0x40ee70: 0xc10c1bb  jal         func_4306EC
label_40ee74:
    if (ctx->pc == 0x40EE74u) {
        ctx->pc = 0x40EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE70u;
        // 0x40ee74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EE78u;
        goto label_40ee78;
    }
    ctx->pc = 0x40EE70u;
    SET_GPR_U32(ctx, 31, 0x40EE78u);
    ctx->pc = 0x40EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EE70u;
    // 0x40ee74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x40EE70u, 0x40EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EE78u;
label_40ee78:
    // 0x40ee78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x40ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40ee7c:
    // 0x40ee7c: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x40ee7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_40ee80:
    // 0x40ee80: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x40ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40ee84:
    // 0x40ee84: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40ee88:
    // 0x40ee88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ee8c:
    // 0x40ee8c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40ee8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40ee90:
    // 0x40ee90: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40ee94:
    // 0x40ee94: 0x40f809  jalr        $v0
label_40ee98:
    if (ctx->pc == 0x40EE98u) {
        ctx->pc = 0x40EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE94u;
        // 0x40ee98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EE9Cu;
        goto label_40ee9c;
    }
    ctx->pc = 0x40EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EE9Cu);
        ctx->pc = 0x40EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE94u;
        // 0x40ee98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EE94u, 0x40EE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EE9Cu;
label_40ee9c:
    // 0x40ee9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40eea0:
    // 0x40eea0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x40eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_40eea4:
    // 0x40eea4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40eea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40eea8:
    // 0x40eea8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x40eea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_40eeac:
    // 0x40eeac: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x40eeacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_40eeb0:
    // 0x40eeb0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x40eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_40eeb4:
    // 0x40eeb4: 0x40f809  jalr        $v0
label_40eeb8:
    if (ctx->pc == 0x40EEB8u) {
        ctx->pc = 0x40EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEB4u;
        // 0x40eeb8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EEBCu;
        goto label_40eebc;
    }
    ctx->pc = 0x40EEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EEBCu);
        ctx->pc = 0x40EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEB4u;
        // 0x40eeb8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EEB4u, 0x40EEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EEBCu;
label_40eebc:
    // 0x40eebc: 0x26e35348  addiu       $v1, $s7, 0x5348
    ctx->pc = 0x40eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
label_40eec0:
    // 0x40eec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40eec4:
    // 0x40eec4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x40eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_40eec8:
    // 0x40eec8: 0x14440028  bne         $v0, $a0, . + 4 + (0x28 << 2)
label_40eecc:
    if (ctx->pc == 0x40EECCu) {
        ctx->pc = 0x40EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEC8u;
        // 0x40eecc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EED0u;
        goto label_40eed0;
    }
    ctx->pc = 0x40EEC8u;
    {
        const bool branch_taken_0x40eec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x40EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEC8u;
        // 0x40eecc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eec8) {
            ctx->pc = 0x40EF6Cu;
            goto label_40ef6c;
        }
    }
    ctx->pc = 0x40EED0u;
label_40eed0:
    // 0x40eed0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40eed4:
    // 0x40eed4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40eed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40eed8:
    // 0x40eed8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40eedc:
    // 0x40eedc: 0x40f809  jalr        $v0
label_40eee0:
    if (ctx->pc == 0x40EEE0u) {
        ctx->pc = 0x40EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEDCu;
        // 0x40eee0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EEE4u;
        goto label_40eee4;
    }
    ctx->pc = 0x40EEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EEE4u);
        ctx->pc = 0x40EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEDCu;
        // 0x40eee0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EEDCu, 0x40EEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EEE4u;
label_40eee4:
    // 0x40eee4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_40eee8:
    if (ctx->pc == 0x40EEE8u) {
        ctx->pc = 0x40EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEE4u;
        // 0x40eee8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EEECu;
        goto label_40eeec;
    }
    ctx->pc = 0x40EEE4u;
    {
        const bool branch_taken_0x40eee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEE4u;
        // 0x40eee8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40eee4) {
            ctx->pc = 0x40EF9Cu;
            goto label_40ef9c;
        }
    }
    ctx->pc = 0x40EEECu;
label_40eeec:
    // 0x40eeec: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x40eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_40eef0:
    // 0x40eef0: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x40eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_40eef4:
    // 0x40eef4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40eef8:
    // 0x40eef8: 0x40f809  jalr        $v0
label_40eefc:
    if (ctx->pc == 0x40EEFCu) {
        ctx->pc = 0x40EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEF8u;
        // 0x40eefc: 0x8cc5c69c  lw          $a1, -0x3964($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EF00u;
        goto label_40ef00;
    }
    ctx->pc = 0x40EEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EF00u);
        ctx->pc = 0x40EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EEF8u;
        // 0x40eefc: 0x8cc5c69c  lw          $a1, -0x3964($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952604)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EEF8u, 0x40EF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EF00u;
label_40ef00:
    // 0x40ef00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40ef04:
    // 0x40ef04: 0x8c62cd4c  lw          $v0, -0x32B4($v1)
    ctx->pc = 0x40ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_40ef08:
    // 0x40ef08: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x40ef08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40ef0c:
    // 0x40ef0c: 0x24420c74  addiu       $v0, $v0, 0xC74
    ctx->pc = 0x40ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3188));
label_40ef10:
    // 0x40ef10: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x40ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40ef14:
    // 0x40ef14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x40ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40ef18:
    // 0x40ef18: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
label_40ef1c:
    if (ctx->pc == 0x40EF1Cu) {
        ctx->pc = 0x40EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF18u;
        // 0x40ef1c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EF20u;
        goto label_40ef20;
    }
    ctx->pc = 0x40EF18u;
    {
        const bool branch_taken_0x40ef18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x40EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF18u;
        // 0x40ef1c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef18) {
            ctx->pc = 0x40EF50u;
            goto label_40ef50;
        }
    }
    ctx->pc = 0x40EF20u;
label_40ef20:
    // 0x40ef20: 0x8e03cd4c  lw          $v1, -0x32B4($s0)
    ctx->pc = 0x40ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_40ef24:
    // 0x40ef24: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40ef24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40ef28:
    // 0x40ef28: 0x8c620c7c  lw          $v0, 0xC7C($v1)
    ctx->pc = 0x40ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3196)));
label_40ef2c:
    // 0x40ef2c: 0xc05d0c8  jal         func_174320
label_40ef30:
    if (ctx->pc == 0x40EF30u) {
        ctx->pc = 0x40EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF2Cu;
        // 0x40ef30: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EF34u;
        goto label_40ef34;
    }
    ctx->pc = 0x40EF2Cu;
    SET_GPR_U32(ctx, 31, 0x40EF34u);
    ctx->pc = 0x40EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EF2Cu;
    // 0x40ef30: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174320u, 0x40EF2Cu, 0x40EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EF34u;
label_40ef34:
    // 0x40ef34: 0x8e03cd4c  lw          $v1, -0x32B4($s0)
    ctx->pc = 0x40ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_40ef38:
    // 0x40ef38: 0x24630c74  addiu       $v1, $v1, 0xC74
    ctx->pc = 0x40ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3188));
label_40ef3c:
    // 0x40ef3c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_40ef40:
    // 0x40ef40: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x40ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_40ef44:
    // 0x40ef44: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x40ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_40ef48:
    // 0x40ef48: 0x1482fff5  bne         $a0, $v0, . + 4 + (-0xB << 2)
label_40ef4c:
    if (ctx->pc == 0x40EF4Cu) {
        ctx->pc = 0x40EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF48u;
        // 0x40ef4c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EF50u;
        goto label_40ef50;
    }
    ctx->pc = 0x40EF48u;
    {
        const bool branch_taken_0x40ef48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x40EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF48u;
        // 0x40ef4c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef48) {
            ctx->pc = 0x40EF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ef20;
        }
    }
    ctx->pc = 0x40EF50u;
label_40ef50:
    // 0x40ef50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40ef54:
    // 0x40ef54: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40ef54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40ef58:
    // 0x40ef58: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40ef5c:
    // 0x40ef5c: 0x40f809  jalr        $v0
label_40ef60:
    if (ctx->pc == 0x40EF60u) {
        ctx->pc = 0x40EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF5Cu;
        // 0x40ef60: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EF64u;
        goto label_40ef64;
    }
    ctx->pc = 0x40EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EF64u);
        ctx->pc = 0x40EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF5Cu;
        // 0x40ef60: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EF5Cu, 0x40EF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EF64u;
label_40ef64:
    // 0x40ef64: 0x1000000e  b           . + 4 + (0xE << 2)
label_40ef68:
    if (ctx->pc == 0x40EF68u) {
        ctx->pc = 0x40EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF64u;
        // 0x40ef68: 0x8fc5cdb4  lw          $a1, -0x324C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EF6Cu;
        goto label_40ef6c;
    }
    ctx->pc = 0x40EF64u;
    {
        const bool branch_taken_0x40ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF64u;
        // 0x40ef68: 0x8fc5cdb4  lw          $a1, -0x324C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ef64) {
            ctx->pc = 0x40EFA0u;
            goto label_40efa0;
        }
    }
    ctx->pc = 0x40EF6Cu;
label_40ef6c:
    // 0x40ef6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ef6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ef70:
    // 0x40ef70: 0x8c51cd4c  lw          $s1, -0x32B4($v0)
    ctx->pc = 0x40ef70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_40ef74:
    // 0x40ef74: 0x26310c74  addiu       $s1, $s1, 0xC74
    ctx->pc = 0x40ef74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3188));
label_40ef78:
    // 0x40ef78: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x40ef78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40ef7c:
    // 0x40ef7c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x40ef7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40ef80:
    // 0x40ef80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40ef84:
    // 0x40ef84: 0xc10c1bb  jal         func_4306EC
label_40ef88:
    if (ctx->pc == 0x40EF88u) {
        ctx->pc = 0x40EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EF84u;
        // 0x40ef88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EF8Cu;
        goto label_40ef8c;
    }
    ctx->pc = 0x40EF84u;
    SET_GPR_U32(ctx, 31, 0x40EF8Cu);
    ctx->pc = 0x40EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40EF84u;
    // 0x40ef88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x40EF84u, 0x40EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40EF8Cu;
label_40ef8c:
    // 0x40ef8c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x40ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40ef90:
    // 0x40ef90: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x40ef90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_40ef94:
    // 0x40ef94: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x40ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40ef98:
    // 0x40ef98: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40ef9c:
    // 0x40ef9c: 0x8fc5cdb4  lw          $a1, -0x324C($fp)
    ctx->pc = 0x40ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954420)));
label_40efa0:
    // 0x40efa0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x40efa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40efa4:
    // 0x40efa4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x40efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40efa8:
    // 0x40efa8: 0x86110040  lh          $s1, 0x40($s0)
    ctx->pc = 0x40efa8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_40efac:
    // 0x40efac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x40efacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_40efb0:
    // 0x40efb0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x40efb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_40efb4:
    // 0x40efb4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x40efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_40efb8:
    // 0x40efb8: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x40efb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_40efbc:
    // 0x40efbc: 0x60f809  jalr        $v1
label_40efc0:
    if (ctx->pc == 0x40EFC0u) {
        ctx->pc = 0x40EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFBCu;
        // 0x40efc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EFC4u;
        goto label_40efc4;
    }
    ctx->pc = 0x40EFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40EFC4u);
        ctx->pc = 0x40EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFBCu;
        // 0x40efc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EFBCu, 0x40EFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EFC4u;
label_40efc4:
    // 0x40efc4: 0x4600ab02  mul.s       $f12, $f21, $f0
    ctx->pc = 0x40efc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_40efc8:
    // 0x40efc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40efcc:
    // 0x40efcc: 0x40f809  jalr        $v0
label_40efd0:
    if (ctx->pc == 0x40EFD0u) {
        ctx->pc = 0x40EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFCCu;
        // 0x40efd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EFD4u;
        goto label_40efd4;
    }
    ctx->pc = 0x40EFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EFD4u);
        ctx->pc = 0x40EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFCCu;
        // 0x40efd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EFCCu, 0x40EFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EFD4u;
label_40efd4:
    // 0x40efd4: 0x26e35348  addiu       $v1, $s7, 0x5348
    ctx->pc = 0x40efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
label_40efd8:
    // 0x40efd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40efdc:
    // 0x40efdc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x40efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_40efe0:
    // 0x40efe0: 0x14440023  bne         $v0, $a0, . + 4 + (0x23 << 2)
label_40efe4:
    if (ctx->pc == 0x40EFE4u) {
        ctx->pc = 0x40EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFE0u;
        // 0x40efe4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EFE8u;
        goto label_40efe8;
    }
    ctx->pc = 0x40EFE0u;
    {
        const bool branch_taken_0x40efe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x40EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFE0u;
        // 0x40efe4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40efe0) {
            ctx->pc = 0x40F070u;
            goto label_40f070;
        }
    }
    ctx->pc = 0x40EFE8u;
label_40efe8:
    // 0x40efe8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40efec:
    // 0x40efec: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40efecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40eff0:
    // 0x40eff0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40eff4:
    // 0x40eff4: 0x40f809  jalr        $v0
label_40eff8:
    if (ctx->pc == 0x40EFF8u) {
        ctx->pc = 0x40EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFF4u;
        // 0x40eff8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40EFFCu;
        goto label_40effc;
    }
    ctx->pc = 0x40EFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40EFFCu);
        ctx->pc = 0x40EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFF4u;
        // 0x40eff8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EFF4u, 0x40EFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40EFFCu;
label_40effc:
    // 0x40effc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_40f000:
    if (ctx->pc == 0x40F000u) {
        ctx->pc = 0x40F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFFCu;
        // 0x40f000: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F004u;
        goto label_40f004;
    }
    ctx->pc = 0x40EFFCu;
    {
        const bool branch_taken_0x40effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EFFCu;
        // 0x40f000: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40effc) {
            ctx->pc = 0x40F0A0u;
            goto label_40f0a0;
        }
    }
    ctx->pc = 0x40F004u;
label_40f004:
    // 0x40f004: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40f004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40f008:
    // 0x40f008: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x40f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_40f00c:
    // 0x40f00c: 0x40f809  jalr        $v0
label_40f010:
    if (ctx->pc == 0x40F010u) {
        ctx->pc = 0x40F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F00Cu;
        // 0x40f010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F014u;
        goto label_40f014;
    }
    ctx->pc = 0x40F00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F014u);
        ctx->pc = 0x40F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F00Cu;
        // 0x40f010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F00Cu, 0x40F014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F014u;
label_40f014:
    // 0x40f014: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40f014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40f018:
    // 0x40f018: 0x8c62cd4c  lw          $v0, -0x32B4($v1)
    ctx->pc = 0x40f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_40f01c:
    // 0x40f01c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x40f01cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40f020:
    // 0x40f020: 0x24420c94  addiu       $v0, $v0, 0xC94
    ctx->pc = 0x40f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3220));
label_40f024:
    // 0x40f024: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40f028:
    // 0x40f028: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x40f028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40f02c:
    // 0x40f02c: 0x5203000a  beql        $s0, $v1, . + 4 + (0xA << 2)
label_40f030:
    if (ctx->pc == 0x40F030u) {
        ctx->pc = 0x40F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F02Cu;
        // 0x40f030: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F034u;
        goto label_40f034;
    }
    ctx->pc = 0x40F02Cu;
    {
        const bool branch_taken_0x40f02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x40f02c) {
            ctx->pc = 0x40F030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F02Cu;
            // 0x40f030: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F058u;
            goto label_40f058;
        }
    }
    ctx->pc = 0x40F034u;
label_40f034:
    // 0x40f034: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x40f034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40f038:
    // 0x40f038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40f038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f03c:
    // 0x40f03c: 0xc05cb1c  jal         func_172C70
label_40f040:
    if (ctx->pc == 0x40F040u) {
        ctx->pc = 0x40F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F03Cu;
        // 0x40f040: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F044u;
        goto label_40f044;
    }
    ctx->pc = 0x40F03Cu;
    SET_GPR_U32(ctx, 31, 0x40F044u);
    ctx->pc = 0x40F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F03Cu;
    // 0x40f040: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172C70u, 0x40F03Cu, 0x40F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F044u;
label_40f044:
    // 0x40f044: 0x8ec3cd4c  lw          $v1, -0x32B4($s6)
    ctx->pc = 0x40f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_40f048:
    // 0x40f048: 0x8c620c9c  lw          $v0, 0xC9C($v1)
    ctx->pc = 0x40f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3228)));
label_40f04c:
    // 0x40f04c: 0x5602fffa  bnel        $s0, $v0, . + 4 + (-0x6 << 2)
label_40f050:
    if (ctx->pc == 0x40F050u) {
        ctx->pc = 0x40F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F04Cu;
        // 0x40f050: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F054u;
        goto label_40f054;
    }
    ctx->pc = 0x40F04Cu;
    {
        const bool branch_taken_0x40f04c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x40f04c) {
            ctx->pc = 0x40F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F04Cu;
            // 0x40f050: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40f038;
        }
    }
    ctx->pc = 0x40F054u;
label_40f054:
    // 0x40f054: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f058:
    // 0x40f058: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40f058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40f05c:
    // 0x40f05c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40f060:
    // 0x40f060: 0x40f809  jalr        $v0
label_40f064:
    if (ctx->pc == 0x40F064u) {
        ctx->pc = 0x40F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F060u;
        // 0x40f064: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F068u;
        goto label_40f068;
    }
    ctx->pc = 0x40F060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F068u);
        ctx->pc = 0x40F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F060u;
        // 0x40f064: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F060u, 0x40F068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F068u;
label_40f068:
    // 0x40f068: 0x1000000e  b           . + 4 + (0xE << 2)
label_40f06c:
    if (ctx->pc == 0x40F06Cu) {
        ctx->pc = 0x40F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F068u;
        // 0x40f06c: 0x26e25348  addiu       $v0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F070u;
        goto label_40f070;
    }
    ctx->pc = 0x40F068u;
    {
        const bool branch_taken_0x40f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F068u;
        // 0x40f06c: 0x26e25348  addiu       $v0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f068) {
            ctx->pc = 0x40F0A4u;
            goto label_40f0a4;
        }
    }
    ctx->pc = 0x40F070u;
label_40f070:
    // 0x40f070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40f070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f074:
    // 0x40f074: 0x8c51cd4c  lw          $s1, -0x32B4($v0)
    ctx->pc = 0x40f074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_40f078:
    // 0x40f078: 0x26310c94  addiu       $s1, $s1, 0xC94
    ctx->pc = 0x40f078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3220));
label_40f07c:
    // 0x40f07c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x40f07cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40f080:
    // 0x40f080: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x40f080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f084:
    // 0x40f084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40f088:
    // 0x40f088: 0xc10c1bb  jal         func_4306EC
label_40f08c:
    if (ctx->pc == 0x40F08Cu) {
        ctx->pc = 0x40F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F088u;
        // 0x40f08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F090u;
        goto label_40f090;
    }
    ctx->pc = 0x40F088u;
    SET_GPR_U32(ctx, 31, 0x40F090u);
    ctx->pc = 0x40F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F088u;
    // 0x40f08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x40F088u, 0x40F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F090u;
label_40f090:
    // 0x40f090: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x40f090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f094:
    // 0x40f094: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x40f094u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_40f098:
    // 0x40f098: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x40f098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40f09c:
    // 0x40f09c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40f0a0:
    // 0x40f0a0: 0x26e25348  addiu       $v0, $s7, 0x5348
    ctx->pc = 0x40f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
label_40f0a4:
    // 0x40f0a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f0a8:
    // 0x40f0a8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x40f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_40f0ac:
    // 0x40f0ac: 0x1464002b  bne         $v1, $a0, . + 4 + (0x2B << 2)
label_40f0b0:
    if (ctx->pc == 0x40F0B0u) {
        ctx->pc = 0x40F0B4u;
        goto label_40f0b4;
    }
    ctx->pc = 0x40F0ACu;
    {
        const bool branch_taken_0x40f0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x40f0ac) {
            ctx->pc = 0x40F15Cu;
            goto label_40f15c;
        }
    }
    ctx->pc = 0x40F0B4u;
label_40f0b4:
    // 0x40f0b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f0b8:
    // 0x40f0b8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40f0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40f0bc:
    // 0x40f0bc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40f0c0:
    // 0x40f0c0: 0x40f809  jalr        $v0
label_40f0c4:
    if (ctx->pc == 0x40F0C4u) {
        ctx->pc = 0x40F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0C0u;
        // 0x40f0c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F0C8u;
        goto label_40f0c8;
    }
    ctx->pc = 0x40F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F0C8u);
        ctx->pc = 0x40F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0C0u;
        // 0x40f0c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F0C0u, 0x40F0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F0C8u;
label_40f0c8:
    // 0x40f0c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_40f0cc:
    if (ctx->pc == 0x40F0CCu) {
        ctx->pc = 0x40F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0C8u;
        // 0x40f0cc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F0D0u;
        goto label_40f0d0;
    }
    ctx->pc = 0x40F0C8u;
    {
        const bool branch_taken_0x40f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0C8u;
        // 0x40f0cc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f0c8) {
            ctx->pc = 0x40F15Cu;
            goto label_40f15c;
        }
    }
    ctx->pc = 0x40F0D0u;
label_40f0d0:
    // 0x40f0d0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x40f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_40f0d4:
    // 0x40f0d4: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x40f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_40f0d8:
    // 0x40f0d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40f0dc:
    // 0x40f0dc: 0x40f809  jalr        $v0
label_40f0e0:
    if (ctx->pc == 0x40F0E0u) {
        ctx->pc = 0x40F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0DCu;
        // 0x40f0e0: 0x8cc5c69c  lw          $a1, -0x3964($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F0E4u;
        goto label_40f0e4;
    }
    ctx->pc = 0x40F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F0E4u);
        ctx->pc = 0x40F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0DCu;
        // 0x40f0e0: 0x8cc5c69c  lw          $a1, -0x3964($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952604)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F0DCu, 0x40F0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F0E4u;
label_40f0e4:
    // 0x40f0e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40f0e8:
    // 0x40f0e8: 0x8c62cd4c  lw          $v0, -0x32B4($v1)
    ctx->pc = 0x40f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_40f0ec:
    // 0x40f0ec: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x40f0ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40f0f0:
    // 0x40f0f0: 0x24420c84  addiu       $v0, $v0, 0xC84
    ctx->pc = 0x40f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3204));
label_40f0f4:
    // 0x40f0f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40f0f8:
    // 0x40f0f8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x40f0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40f0fc:
    // 0x40f0fc: 0x52030013  beql        $s0, $v1, . + 4 + (0x13 << 2)
label_40f100:
    if (ctx->pc == 0x40F100u) {
        ctx->pc = 0x40F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0FCu;
        // 0x40f100: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F104u;
        goto label_40f104;
    }
    ctx->pc = 0x40F0FCu;
    {
        const bool branch_taken_0x40f0fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x40f0fc) {
            ctx->pc = 0x40F100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F0FCu;
            // 0x40f100: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F14Cu;
            goto label_40f14c;
        }
    }
    ctx->pc = 0x40F104u;
label_40f104:
    // 0x40f104: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x40f104u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_40f108:
    // 0x40f108: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x40f108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_40f10c:
    // 0x40f10c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x40f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40f110:
    // 0x40f110: 0x8e442c04  lw          $a0, 0x2C04($s2)
    ctx->pc = 0x40f110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11268)));
label_40f114:
    // 0x40f114: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x40f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_40f118:
    // 0x40f118: 0xc0e4552  jal         func_391548
label_40f11c:
    if (ctx->pc == 0x40F11Cu) {
        ctx->pc = 0x40F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F118u;
        // 0x40f11c: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F120u;
        goto label_40f120;
    }
    ctx->pc = 0x40F118u;
    SET_GPR_U32(ctx, 31, 0x40F120u);
    ctx->pc = 0x40F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F118u;
    // 0x40f11c: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391548u, 0x40F118u, 0x40F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F120u;
label_40f120:
    // 0x40f120: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_40f124:
    if (ctx->pc == 0x40F124u) {
        ctx->pc = 0x40F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F120u;
        // 0x40f124: 0x8ec3cd4c  lw          $v1, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F128u;
        goto label_40f128;
    }
    ctx->pc = 0x40F120u;
    {
        const bool branch_taken_0x40f120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F120u;
        // 0x40f124: 0x8ec3cd4c  lw          $v1, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f120) {
            ctx->pc = 0x40F138u;
            goto label_40f138;
        }
    }
    ctx->pc = 0x40F128u;
label_40f128:
    // 0x40f128: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x40f128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40f12c:
    // 0x40f12c: 0xc05ff5e  jal         func_17FD78
label_40f130:
    if (ctx->pc == 0x40F130u) {
        ctx->pc = 0x40F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F12Cu;
        // 0x40f130: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F134u;
        goto label_40f134;
    }
    ctx->pc = 0x40F12Cu;
    SET_GPR_U32(ctx, 31, 0x40F134u);
    ctx->pc = 0x40F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F12Cu;
    // 0x40f130: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD78u, 0x40F12Cu, 0x40F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F134u;
label_40f134:
    // 0x40f134: 0x8ec3cd4c  lw          $v1, -0x32B4($s6)
    ctx->pc = 0x40f134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_40f138:
    // 0x40f138: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x40f138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_40f13c:
    // 0x40f13c: 0x8c620c8c  lw          $v0, 0xC8C($v1)
    ctx->pc = 0x40f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3212)));
label_40f140:
    // 0x40f140: 0x5602fff3  bnel        $s0, $v0, . + 4 + (-0xD << 2)
label_40f144:
    if (ctx->pc == 0x40F144u) {
        ctx->pc = 0x40F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F140u;
        // 0x40f144: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F148u;
        goto label_40f148;
    }
    ctx->pc = 0x40F140u;
    {
        const bool branch_taken_0x40f140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x40f140) {
            ctx->pc = 0x40F144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F140u;
            // 0x40f144: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40f110;
        }
    }
    ctx->pc = 0x40F148u;
label_40f148:
    // 0x40f148: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f14c:
    // 0x40f14c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40f14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40f150:
    // 0x40f150: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40f154:
    // 0x40f154: 0x40f809  jalr        $v0
label_40f158:
    if (ctx->pc == 0x40F158u) {
        ctx->pc = 0x40F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F154u;
        // 0x40f158: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F15Cu;
        goto label_40f15c;
    }
    ctx->pc = 0x40F154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F15Cu);
        ctx->pc = 0x40F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F154u;
        // 0x40f158: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F154u, 0x40F15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F15Cu;
label_40f15c:
    // 0x40f15c: 0xc103a34  jal         func_40E8D0
label_40f160:
    if (ctx->pc == 0x40F160u) {
        ctx->pc = 0x40F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F15Cu;
        // 0x40f160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F164u;
        goto label_40f164;
    }
    ctx->pc = 0x40F15Cu;
    SET_GPR_U32(ctx, 31, 0x40F164u);
    ctx->pc = 0x40F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F15Cu;
    // 0x40f160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40F15Cu, 0x40F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F164u;
label_40f164:
    // 0x40f164: 0x8c44215c  lw          $a0, 0x215C($v0)
    ctx->pc = 0x40f164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
label_40f168:
    // 0x40f168: 0xc11cb0a  jal         func_472C28
label_40f16c:
    if (ctx->pc == 0x40F16Cu) {
        ctx->pc = 0x40F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F168u;
        // 0x40f16c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F170u;
        goto label_40f170;
    }
    ctx->pc = 0x40F168u;
    SET_GPR_U32(ctx, 31, 0x40F170u);
    ctx->pc = 0x40F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F168u;
    // 0x40f16c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C28u, 0x40F168u, 0x40F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F170u;
label_40f170:
    // 0x40f170: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x40f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_40f174:
    // 0x40f174: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
label_40f178:
    if (ctx->pc == 0x40F178u) {
        ctx->pc = 0x40F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F174u;
        // 0x40f178: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F17Cu;
        goto label_40f17c;
    }
    ctx->pc = 0x40F174u;
    {
        const bool branch_taken_0x40f174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f174) {
            ctx->pc = 0x40F178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F174u;
            // 0x40f178: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F288u;
            goto label_40f288;
        }
    }
    ctx->pc = 0x40F17Cu;
label_40f17c:
    // 0x40f17c: 0x8c44215c  lw          $a0, 0x215C($v0)
    ctx->pc = 0x40f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
label_40f180:
    // 0x40f180: 0xc11cb14  jal         func_472C50
label_40f184:
    if (ctx->pc == 0x40F184u) {
        ctx->pc = 0x40F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F180u;
        // 0x40f184: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F188u;
        goto label_40f188;
    }
    ctx->pc = 0x40F180u;
    SET_GPR_U32(ctx, 31, 0x40F188u);
    ctx->pc = 0x40F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F180u;
    // 0x40f184: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C50u, 0x40F180u, 0x40F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F188u;
label_40f188:
    // 0x40f188: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f18c:
    // 0x40f18c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40f18cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40f190:
    // 0x40f190: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40f194:
    // 0x40f194: 0x40f809  jalr        $v0
label_40f198:
    if (ctx->pc == 0x40F198u) {
        ctx->pc = 0x40F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F194u;
        // 0x40f198: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F19Cu;
        goto label_40f19c;
    }
    ctx->pc = 0x40F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F19Cu);
        ctx->pc = 0x40F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F194u;
        // 0x40f198: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F194u, 0x40F19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F19Cu;
label_40f19c:
    // 0x40f19c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_40f1a0:
    if (ctx->pc == 0x40F1A0u) {
        ctx->pc = 0x40F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F19Cu;
        // 0x40f1a0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F1A4u;
        goto label_40f1a4;
    }
    ctx->pc = 0x40F19Cu;
    {
        const bool branch_taken_0x40f19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F19Cu;
        // 0x40f1a0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f19c) {
            ctx->pc = 0x40F274u;
            goto label_40f274;
        }
    }
    ctx->pc = 0x40F1A4u;
label_40f1a4:
    // 0x40f1a4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x40f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_40f1a8:
    // 0x40f1a8: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x40f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_40f1ac:
    // 0x40f1ac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40f1b0:
    // 0x40f1b0: 0x8cc5c69c  lw          $a1, -0x3964($a2)
    ctx->pc = 0x40f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952604)));
label_40f1b4:
    // 0x40f1b4: 0x26f05348  addiu       $s0, $s7, 0x5348
    ctx->pc = 0x40f1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
label_40f1b8:
    // 0x40f1b8: 0x40f809  jalr        $v0
label_40f1bc:
    if (ctx->pc == 0x40F1BCu) {
        ctx->pc = 0x40F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1B8u;
        // 0x40f1bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F1C0u;
        goto label_40f1c0;
    }
    ctx->pc = 0x40F1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F1C0u);
        ctx->pc = 0x40F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1B8u;
        // 0x40f1bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F1B8u, 0x40F1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F1C0u;
label_40f1c0:
    // 0x40f1c0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x40f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_40f1c4:
    // 0x40f1c4: 0x54710005  bnel        $v1, $s1, . + 4 + (0x5 << 2)
label_40f1c8:
    if (ctx->pc == 0x40F1C8u) {
        ctx->pc = 0x40F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1C4u;
        // 0x40f1c8: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F1CCu;
        goto label_40f1cc;
    }
    ctx->pc = 0x40F1C4u;
    {
        const bool branch_taken_0x40f1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x40f1c4) {
            ctx->pc = 0x40F1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F1C4u;
            // 0x40f1c8: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F1DCu;
            goto label_40f1dc;
        }
    }
    ctx->pc = 0x40F1CCu;
label_40f1cc:
    // 0x40f1cc: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x40f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_40f1d0:
    // 0x40f1d0: 0xc104744  jal         func_411D10
label_40f1d4:
    if (ctx->pc == 0x40F1D4u) {
        ctx->pc = 0x40F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1D0u;
        // 0x40f1d4: 0x2ea50001  sltiu       $a1, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F1D8u;
        goto label_40f1d8;
    }
    ctx->pc = 0x40F1D0u;
    SET_GPR_U32(ctx, 31, 0x40F1D8u);
    ctx->pc = 0x40F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F1D0u;
    // 0x40f1d4: 0x2ea50001  sltiu       $a1, $s5, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x411D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411D10u, 0x40F1D0u, 0x40F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F1D8u;
label_40f1d8:
    // 0x40f1d8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x40f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_40f1dc:
    // 0x40f1dc: 0x1451001b  bne         $v0, $s1, . + 4 + (0x1B << 2)
label_40f1e0:
    if (ctx->pc == 0x40F1E0u) {
        ctx->pc = 0x40F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1DCu;
        // 0x40f1e0: 0x2691004c  addiu       $s1, $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F1E4u;
        goto label_40f1e4;
    }
    ctx->pc = 0x40F1DCu;
    {
        const bool branch_taken_0x40f1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x40F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1DCu;
        // 0x40f1e0: 0x2691004c  addiu       $s1, $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f1dc) {
            ctx->pc = 0x40F24Cu;
            goto label_40f24c;
        }
    }
    ctx->pc = 0x40F1E4u;
label_40f1e4:
    // 0x40f1e4: 0x2682004c  addiu       $v0, $s4, 0x4C
    ctx->pc = 0x40f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
label_40f1e8:
    // 0x40f1e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40f1ec:
    // 0x40f1ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40f1f0:
    // 0x40f1f0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_40f1f4:
    if (ctx->pc == 0x40F1F4u) {
        ctx->pc = 0x40F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1F0u;
        // 0x40f1f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F1F8u;
        goto label_40f1f8;
    }
    ctx->pc = 0x40F1F0u;
    {
        const bool branch_taken_0x40f1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x40F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1F0u;
        // 0x40f1f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f1f0) {
            ctx->pc = 0x40F230u;
            goto label_40f230;
        }
    }
    ctx->pc = 0x40F1F8u;
label_40f1f8:
    // 0x40f1f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40f1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40f1fc:
    // 0x40f1fc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x40f1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_40f200:
    // 0x40f200: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x40f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40f204:
    // 0x40f204: 0x8e24ced0  lw          $a0, -0x3130($s1)
    ctx->pc = 0x40f204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954704)));
label_40f208:
    // 0x40f208: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x40f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_40f20c:
    // 0x40f20c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x40f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_40f210:
    // 0x40f210: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x40f210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_40f214:
    // 0x40f214: 0xc104664  jal         func_411990
label_40f218:
    if (ctx->pc == 0x40F218u) {
        ctx->pc = 0x40F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F214u;
        // 0x40f218: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F21Cu;
        goto label_40f21c;
    }
    ctx->pc = 0x40F214u;
    SET_GPR_U32(ctx, 31, 0x40F21Cu);
    ctx->pc = 0x40F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F214u;
    // 0x40f218: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411990u, 0x40F214u, 0x40F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F21Cu;
label_40f21c:
    // 0x40f21c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x40f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40f220:
    // 0x40f220: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40f224:
    // 0x40f224: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x40f224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_40f228:
    // 0x40f228: 0x1443fff5  bne         $v0, $v1, . + 4 + (-0xB << 2)
label_40f22c:
    if (ctx->pc == 0x40F22Cu) {
        ctx->pc = 0x40F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F228u;
        // 0x40f22c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F230u;
        goto label_40f230;
    }
    ctx->pc = 0x40F228u;
    {
        const bool branch_taken_0x40f228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F228u;
        // 0x40f22c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f228) {
            ctx->pc = 0x40F200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40f200;
        }
    }
    ctx->pc = 0x40F230u;
label_40f230:
    // 0x40f230: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f234:
    // 0x40f234: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40f234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40f238:
    // 0x40f238: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40f23c:
    // 0x40f23c: 0x40f809  jalr        $v0
label_40f240:
    if (ctx->pc == 0x40F240u) {
        ctx->pc = 0x40F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F23Cu;
        // 0x40f240: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F244u;
        goto label_40f244;
    }
    ctx->pc = 0x40F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F244u);
        ctx->pc = 0x40F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F23Cu;
        // 0x40f240: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F23Cu, 0x40F244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F244u;
label_40f244:
    // 0x40f244: 0x1000000c  b           . + 4 + (0xC << 2)
label_40f248:
    if (ctx->pc == 0x40F248u) {
        ctx->pc = 0x40F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F244u;
        // 0x40f248: 0x8e820048  lw          $v0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F24Cu;
        goto label_40f24c;
    }
    ctx->pc = 0x40F244u;
    {
        const bool branch_taken_0x40f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F244u;
        // 0x40f248: 0x8e820048  lw          $v0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f244) {
            ctx->pc = 0x40F278u;
            goto label_40f278;
        }
    }
    ctx->pc = 0x40F24Cu;
label_40f24c:
    // 0x40f24c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40f24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f250:
    // 0x40f250: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x40f250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40f254:
    // 0x40f254: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x40f254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f258:
    // 0x40f258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40f258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40f25c:
    // 0x40f25c: 0xc10c1bb  jal         func_4306EC
label_40f260:
    if (ctx->pc == 0x40F260u) {
        ctx->pc = 0x40F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F25Cu;
        // 0x40f260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F264u;
        goto label_40f264;
    }
    ctx->pc = 0x40F25Cu;
    SET_GPR_U32(ctx, 31, 0x40F264u);
    ctx->pc = 0x40F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F25Cu;
    // 0x40f260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x40F25Cu, 0x40F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F264u;
label_40f264:
    // 0x40f264: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x40f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f268:
    // 0x40f268: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x40f268u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_40f26c:
    // 0x40f26c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x40f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40f270:
    // 0x40f270: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40f270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40f274:
    // 0x40f274: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x40f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_40f278:
    // 0x40f278: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x40f278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_40f27c:
    // 0x40f27c: 0xc11cb0a  jal         func_472C28
label_40f280:
    if (ctx->pc == 0x40F280u) {
        ctx->pc = 0x40F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F27Cu;
        // 0x40f280: 0x8c44215c  lw          $a0, 0x215C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F284u;
        goto label_40f284;
    }
    ctx->pc = 0x40F27Cu;
    SET_GPR_U32(ctx, 31, 0x40F284u);
    ctx->pc = 0x40F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F27Cu;
    // 0x40f280: 0x8c44215c  lw          $a0, 0x215C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C28u, 0x40F27Cu, 0x40F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F284u;
label_40f284:
    // 0x40f284: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x40f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_40f288:
    // 0x40f288: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_40f28c:
    if (ctx->pc == 0x40F28Cu) {
        ctx->pc = 0x40F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F288u;
        // 0x40f28c: 0x26e25348  addiu       $v0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F290u;
        goto label_40f290;
    }
    ctx->pc = 0x40F288u;
    {
        const bool branch_taken_0x40f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F288u;
        // 0x40f28c: 0x26e25348  addiu       $v0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f288) {
            ctx->pc = 0x40F2FCu;
            goto label_40f2fc;
        }
    }
    ctx->pc = 0x40F290u;
label_40f290:
    // 0x40f290: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f294:
    // 0x40f294: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40f294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40f298:
    // 0x40f298: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40f29c:
    // 0x40f29c: 0x40f809  jalr        $v0
label_40f2a0:
    if (ctx->pc == 0x40F2A0u) {
        ctx->pc = 0x40F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F29Cu;
        // 0x40f2a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F2A4u;
        goto label_40f2a4;
    }
    ctx->pc = 0x40F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F2A4u);
        ctx->pc = 0x40F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F29Cu;
        // 0x40f2a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F29Cu, 0x40F2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F2A4u;
label_40f2a4:
    // 0x40f2a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_40f2a8:
    if (ctx->pc == 0x40F2A8u) {
        ctx->pc = 0x40F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2A4u;
        // 0x40f2a8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F2ACu;
        goto label_40f2ac;
    }
    ctx->pc = 0x40F2A4u;
    {
        const bool branch_taken_0x40f2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2A4u;
        // 0x40f2a8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f2a4) {
            ctx->pc = 0x40F2F8u;
            goto label_40f2f8;
        }
    }
    ctx->pc = 0x40F2ACu;
label_40f2ac:
    // 0x40f2ac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x40f2acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_40f2b0:
    // 0x40f2b0: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x40f2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_40f2b4:
    // 0x40f2b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x40f2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_40f2b8:
    // 0x40f2b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40f2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40f2bc:
    // 0x40f2bc: 0xc60047d4  lwc1        $f0, 0x47D4($s0)
    ctx->pc = 0x40f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 18388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f2c0:
    // 0x40f2c0: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x40f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_40f2c4:
    // 0x40f2c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40f2c8:
    // 0x40f2c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40f2c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_40f2cc:
    // 0x40f2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f2d0:
    // 0x40f2d0: 0x40f809  jalr        $v0
label_40f2d4:
    if (ctx->pc == 0x40F2D4u) {
        ctx->pc = 0x40F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2D0u;
        // 0x40f2d4: 0xe60047d4  swc1        $f0, 0x47D4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 18388), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F2D8u;
        goto label_40f2d8;
    }
    ctx->pc = 0x40F2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F2D8u);
        ctx->pc = 0x40F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2D0u;
        // 0x40f2d4: 0xe60047d4  swc1        $f0, 0x47D4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 18388), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F2D0u, 0x40F2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F2D8u;
label_40f2d8:
    // 0x40f2d8: 0x8e84005c  lw          $a0, 0x5C($s4)
    ctx->pc = 0x40f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_40f2dc:
    // 0x40f2dc: 0xc064776  jal         func_191DD8
label_40f2e0:
    if (ctx->pc == 0x40F2E0u) {
        ctx->pc = 0x40F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2DCu;
        // 0x40f2e0: 0xc60c47d4  lwc1        $f12, 0x47D4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 18388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F2E4u;
        goto label_40f2e4;
    }
    ctx->pc = 0x40F2DCu;
    SET_GPR_U32(ctx, 31, 0x40F2E4u);
    ctx->pc = 0x40F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F2DCu;
    // 0x40f2e0: 0xc60c47d4  lwc1        $f12, 0x47D4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 18388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD8u, 0x40F2DCu, 0x40F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F2E4u;
label_40f2e4:
    // 0x40f2e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f2e8:
    // 0x40f2e8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40f2e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40f2ec:
    // 0x40f2ec: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40f2f0:
    // 0x40f2f0: 0x40f809  jalr        $v0
label_40f2f4:
    if (ctx->pc == 0x40F2F4u) {
        ctx->pc = 0x40F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2F0u;
        // 0x40f2f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F2F8u;
        goto label_40f2f8;
    }
    ctx->pc = 0x40F2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F2F8u);
        ctx->pc = 0x40F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2F0u;
        // 0x40f2f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F2F0u, 0x40F2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F2F8u;
label_40f2f8:
    // 0x40f2f8: 0x26e25348  addiu       $v0, $s7, 0x5348
    ctx->pc = 0x40f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
label_40f2fc:
    // 0x40f2fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f300:
    // 0x40f300: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x40f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_40f304:
    // 0x40f304: 0x1464003d  bne         $v1, $a0, . + 4 + (0x3D << 2)
label_40f308:
    if (ctx->pc == 0x40F308u) {
        ctx->pc = 0x40F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F304u;
        // 0x40f308: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F30Cu;
        goto label_40f30c;
    }
    ctx->pc = 0x40F304u;
    {
        const bool branch_taken_0x40f304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x40F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F304u;
        // 0x40f308: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f304) {
            ctx->pc = 0x40F3FCu;
            goto label_40f3fc;
        }
    }
    ctx->pc = 0x40F30Cu;
label_40f30c:
    // 0x40f30c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f310:
    // 0x40f310: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40f310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40f314:
    // 0x40f314: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40f318:
    // 0x40f318: 0x40f809  jalr        $v0
label_40f31c:
    if (ctx->pc == 0x40F31Cu) {
        ctx->pc = 0x40F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F318u;
        // 0x40f31c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F320u;
        goto label_40f320;
    }
    ctx->pc = 0x40F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F320u);
        ctx->pc = 0x40F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F318u;
        // 0x40f31c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F318u, 0x40F320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F320u;
label_40f320:
    // 0x40f320: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_40f324:
    if (ctx->pc == 0x40F324u) {
        ctx->pc = 0x40F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F320u;
        // 0x40f324: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F328u;
        goto label_40f328;
    }
    ctx->pc = 0x40F320u;
    {
        const bool branch_taken_0x40f320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F320u;
        // 0x40f324: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f320) {
            ctx->pc = 0x40F42Cu;
            goto label_40f42c;
        }
    }
    ctx->pc = 0x40F328u;
label_40f328:
    // 0x40f328: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40f328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40f32c:
    // 0x40f32c: 0x2470ad28  addiu       $s0, $v1, -0x52D8
    ctx->pc = 0x40f32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946088));
label_40f330:
    // 0x40f330: 0x8c45c69c  lw          $a1, -0x3964($v0)
    ctx->pc = 0x40f330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952604)));
label_40f334:
    // 0x40f334: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40f338:
    // 0x40f338: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x40f338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40f33c:
    // 0x40f33c: 0x40f809  jalr        $v0
label_40f340:
    if (ctx->pc == 0x40F340u) {
        ctx->pc = 0x40F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F33Cu;
        // 0x40f340: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F344u;
        goto label_40f344;
    }
    ctx->pc = 0x40F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F344u);
        ctx->pc = 0x40F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F33Cu;
        // 0x40f340: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F33Cu, 0x40F344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F344u;
label_40f344:
    // 0x40f344: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40f348:
    // 0x40f348: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40f348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40f34c:
    // 0x40f34c: 0x40f809  jalr        $v0
label_40f350:
    if (ctx->pc == 0x40F350u) {
        ctx->pc = 0x40F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F34Cu;
        // 0x40f350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F354u;
        goto label_40f354;
    }
    ctx->pc = 0x40F34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F354u);
        ctx->pc = 0x40F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F34Cu;
        // 0x40f350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F34Cu, 0x40F354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F354u;
label_40f354:
    // 0x40f354: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40f354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40f358:
    // 0x40f358: 0x8c62cd4c  lw          $v0, -0x32B4($v1)
    ctx->pc = 0x40f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_40f35c:
    // 0x40f35c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x40f35cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40f360:
    // 0x40f360: 0x24420c84  addiu       $v0, $v0, 0xC84
    ctx->pc = 0x40f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3204));
label_40f364:
    // 0x40f364: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x40f364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40f368:
    // 0x40f368: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x40f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40f36c:
    // 0x40f36c: 0x10640017  beq         $v1, $a0, . + 4 + (0x17 << 2)
label_40f370:
    if (ctx->pc == 0x40F370u) {
        ctx->pc = 0x40F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F36Cu;
        // 0x40f370: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F374u;
        goto label_40f374;
    }
    ctx->pc = 0x40F36Cu;
    {
        const bool branch_taken_0x40f36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x40F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F36Cu;
        // 0x40f370: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f36c) {
            ctx->pc = 0x40F3CCu;
            goto label_40f3cc;
        }
    }
    ctx->pc = 0x40F374u;
label_40f374:
    // 0x40f374: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x40f374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_40f378:
    // 0x40f378: 0x8ec5cd4c  lw          $a1, -0x32B4($s6)
    ctx->pc = 0x40f378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_40f37c:
    // 0x40f37c: 0x8e242c04  lw          $a0, 0x2C04($s1)
    ctx->pc = 0x40f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11268)));
label_40f380:
    // 0x40f380: 0x8ca20c8c  lw          $v0, 0xC8C($a1)
    ctx->pc = 0x40f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3212)));
label_40f384:
    // 0x40f384: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x40f384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_40f388:
    // 0x40f388: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x40f388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_40f38c:
    // 0x40f38c: 0xc0e4552  jal         func_391548
label_40f390:
    if (ctx->pc == 0x40F390u) {
        ctx->pc = 0x40F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F38Cu;
        // 0x40f390: 0x94c50112  lhu         $a1, 0x112($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F394u;
        goto label_40f394;
    }
    ctx->pc = 0x40F38Cu;
    SET_GPR_U32(ctx, 31, 0x40F394u);
    ctx->pc = 0x40F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F38Cu;
    // 0x40f390: 0x94c50112  lhu         $a1, 0x112($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391548u, 0x40F38Cu, 0x40F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F394u;
label_40f394:
    // 0x40f394: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_40f398:
    if (ctx->pc == 0x40F398u) {
        ctx->pc = 0x40F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F394u;
        // 0x40f398: 0x8ec2cd4c  lw          $v0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F39Cu;
        goto label_40f39c;
    }
    ctx->pc = 0x40F394u;
    {
        const bool branch_taken_0x40f394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x40F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F394u;
        // 0x40f398: 0x8ec2cd4c  lw          $v0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f394) {
            ctx->pc = 0x40F3B4u;
            goto label_40f3b4;
        }
    }
    ctx->pc = 0x40F39Cu;
label_40f39c:
    // 0x40f39c: 0x8ec3cd4c  lw          $v1, -0x32B4($s6)
    ctx->pc = 0x40f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_40f3a0:
    // 0x40f3a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40f3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40f3a4:
    // 0x40f3a4: 0x8c620c8c  lw          $v0, 0xC8C($v1)
    ctx->pc = 0x40f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3212)));
label_40f3a8:
    // 0x40f3a8: 0xc05ff5e  jal         func_17FD78
label_40f3ac:
    if (ctx->pc == 0x40F3ACu) {
        ctx->pc = 0x40F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3A8u;
        // 0x40f3ac: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F3B0u;
        goto label_40f3b0;
    }
    ctx->pc = 0x40F3A8u;
    SET_GPR_U32(ctx, 31, 0x40F3B0u);
    ctx->pc = 0x40F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F3A8u;
    // 0x40f3ac: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD78u, 0x40F3A8u, 0x40F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F3B0u;
label_40f3b0:
    // 0x40f3b0: 0x8ec2cd4c  lw          $v0, -0x32B4($s6)
    ctx->pc = 0x40f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_40f3b4:
    // 0x40f3b4: 0x24420c84  addiu       $v0, $v0, 0xC84
    ctx->pc = 0x40f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3204));
label_40f3b8:
    // 0x40f3b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x40f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40f3bc:
    // 0x40f3bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40f3c0:
    // 0x40f3c0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x40f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_40f3c4:
    // 0x40f3c4: 0x1483ffec  bne         $a0, $v1, . + 4 + (-0x14 << 2)
label_40f3c8:
    if (ctx->pc == 0x40F3C8u) {
        ctx->pc = 0x40F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3C4u;
        // 0x40f3c8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F3CCu;
        goto label_40f3cc;
    }
    ctx->pc = 0x40F3C4u;
    {
        const bool branch_taken_0x40f3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x40F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3C4u;
        // 0x40f3c8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f3c4) {
            ctx->pc = 0x40F378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40f378;
        }
    }
    ctx->pc = 0x40F3CCu;
label_40f3cc:
    // 0x40f3cc: 0x2643ad28  addiu       $v1, $s2, -0x52D8
    ctx->pc = 0x40f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946088));
label_40f3d0:
    // 0x40f3d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40f3d4:
    // 0x40f3d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x40f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_40f3d8:
    // 0x40f3d8: 0x40f809  jalr        $v0
label_40f3dc:
    if (ctx->pc == 0x40F3DCu) {
        ctx->pc = 0x40F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3D8u;
        // 0x40f3dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F3E0u;
        goto label_40f3e0;
    }
    ctx->pc = 0x40F3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F3E0u);
        ctx->pc = 0x40F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3D8u;
        // 0x40f3dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F3D8u, 0x40F3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F3E0u;
label_40f3e0:
    // 0x40f3e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f3e4:
    // 0x40f3e4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40f3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40f3e8:
    // 0x40f3e8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40f3ec:
    // 0x40f3ec: 0x40f809  jalr        $v0
label_40f3f0:
    if (ctx->pc == 0x40F3F0u) {
        ctx->pc = 0x40F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3ECu;
        // 0x40f3f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F3F4u;
        goto label_40f3f4;
    }
    ctx->pc = 0x40F3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F3F4u);
        ctx->pc = 0x40F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3ECu;
        // 0x40f3f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F3ECu, 0x40F3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F3F4u;
label_40f3f4:
    // 0x40f3f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_40f3f8:
    if (ctx->pc == 0x40F3F8u) {
        ctx->pc = 0x40F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3F4u;
        // 0x40f3f8: 0x26e25348  addiu       $v0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F3FCu;
        goto label_40f3fc;
    }
    ctx->pc = 0x40F3F4u;
    {
        const bool branch_taken_0x40f3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F3F4u;
        // 0x40f3f8: 0x26e25348  addiu       $v0, $s7, 0x5348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f3f4) {
            ctx->pc = 0x40F430u;
            goto label_40f430;
        }
    }
    ctx->pc = 0x40F3FCu;
label_40f3fc:
    // 0x40f3fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40f3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f400:
    // 0x40f400: 0x8c51cd4c  lw          $s1, -0x32B4($v0)
    ctx->pc = 0x40f400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_40f404:
    // 0x40f404: 0x26310c84  addiu       $s1, $s1, 0xC84
    ctx->pc = 0x40f404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3204));
label_40f408:
    // 0x40f408: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x40f408u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40f40c:
    // 0x40f40c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x40f40cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f410:
    // 0x40f410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40f410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40f414:
    // 0x40f414: 0xc10c1bb  jal         func_4306EC
label_40f418:
    if (ctx->pc == 0x40F418u) {
        ctx->pc = 0x40F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F414u;
        // 0x40f418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F41Cu;
        goto label_40f41c;
    }
    ctx->pc = 0x40F414u;
    SET_GPR_U32(ctx, 31, 0x40F41Cu);
    ctx->pc = 0x40F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F414u;
    // 0x40f418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x40F414u, 0x40F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F41Cu;
label_40f41c:
    // 0x40f41c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x40f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f420:
    // 0x40f420: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x40f420u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_40f424:
    // 0x40f424: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x40f424u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40f428:
    // 0x40f428: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40f428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40f42c:
    // 0x40f42c: 0x26e25348  addiu       $v0, $s7, 0x5348
    ctx->pc = 0x40f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 21320));
label_40f430:
    // 0x40f430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40f430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f434:
    // 0x40f434: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x40f434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_40f438:
    // 0x40f438: 0x14640033  bne         $v1, $a0, . + 4 + (0x33 << 2)
label_40f43c:
    if (ctx->pc == 0x40F43Cu) {
        ctx->pc = 0x40F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F438u;
        // 0x40f43c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F440u;
        goto label_40f440;
    }
    ctx->pc = 0x40F438u;
    {
        const bool branch_taken_0x40f438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x40F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F438u;
        // 0x40f43c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f438) {
            ctx->pc = 0x40F508u;
            goto label_40f508;
        }
    }
    ctx->pc = 0x40F440u;
label_40f440:
    // 0x40f440: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f444:
    // 0x40f444: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40f444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40f448:
    // 0x40f448: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40f44c:
    // 0x40f44c: 0x40f809  jalr        $v0
label_40f450:
    if (ctx->pc == 0x40F450u) {
        ctx->pc = 0x40F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F44Cu;
        // 0x40f450: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F454u;
        goto label_40f454;
    }
    ctx->pc = 0x40F44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F454u);
        ctx->pc = 0x40F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F44Cu;
        // 0x40f450: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F44Cu, 0x40F454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F454u;
label_40f454:
    // 0x40f454: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_40f458:
    if (ctx->pc == 0x40F458u) {
        ctx->pc = 0x40F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F454u;
        // 0x40f458: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F45Cu;
        goto label_40f45c;
    }
    ctx->pc = 0x40F454u;
    {
        const bool branch_taken_0x40f454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F454u;
        // 0x40f458: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f454) {
            ctx->pc = 0x40F538u;
            goto label_40f538;
        }
    }
    ctx->pc = 0x40F45Cu;
label_40f45c:
    // 0x40f45c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40f460:
    // 0x40f460: 0x2470ad28  addiu       $s0, $v1, -0x52D8
    ctx->pc = 0x40f460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946088));
label_40f464:
    // 0x40f464: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x40f464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40f468:
    // 0x40f468: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40f46c:
    // 0x40f46c: 0x40f809  jalr        $v0
label_40f470:
    if (ctx->pc == 0x40F470u) {
        ctx->pc = 0x40F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F46Cu;
        // 0x40f470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F474u;
        goto label_40f474;
    }
    ctx->pc = 0x40F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F474u);
        ctx->pc = 0x40F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F46Cu;
        // 0x40f470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F46Cu, 0x40F474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F474u;
label_40f474:
    // 0x40f474: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x40f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_40f478:
    // 0x40f478: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x40f478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40f47c:
    // 0x40f47c: 0x40f809  jalr        $v0
label_40f480:
    if (ctx->pc == 0x40F480u) {
        ctx->pc = 0x40F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F47Cu;
        // 0x40f480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F484u;
        goto label_40f484;
    }
    ctx->pc = 0x40F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F484u);
        ctx->pc = 0x40F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F47Cu;
        // 0x40f480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F47Cu, 0x40F484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F484u;
label_40f484:
    // 0x40f484: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40f484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40f488:
    // 0x40f488: 0x8c62cd4c  lw          $v0, -0x32B4($v1)
    ctx->pc = 0x40f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_40f48c:
    // 0x40f48c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x40f48cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40f490:
    // 0x40f490: 0x24420c94  addiu       $v0, $v0, 0xC94
    ctx->pc = 0x40f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3220));
label_40f494:
    // 0x40f494: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x40f494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40f498:
    // 0x40f498: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x40f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40f49c:
    // 0x40f49c: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
label_40f4a0:
    if (ctx->pc == 0x40F4A0u) {
        ctx->pc = 0x40F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F49Cu;
        // 0x40f4a0: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F4A4u;
        goto label_40f4a4;
    }
    ctx->pc = 0x40F49Cu;
    {
        const bool branch_taken_0x40f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x40F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F49Cu;
        // 0x40f4a0: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f49c) {
            ctx->pc = 0x40F4D8u;
            goto label_40f4d8;
        }
    }
    ctx->pc = 0x40F4A4u;
label_40f4a4:
    // 0x40f4a4: 0x0  nop
    ctx->pc = 0x40f4a4u;
    // NOP
label_40f4a8:
    // 0x40f4a8: 0x8e03cd4c  lw          $v1, -0x32B4($s0)
    ctx->pc = 0x40f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_40f4ac:
    // 0x40f4ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f4b0:
    // 0x40f4b0: 0x8c620c9c  lw          $v0, 0xC9C($v1)
    ctx->pc = 0x40f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3228)));
label_40f4b4:
    // 0x40f4b4: 0xc05cb1c  jal         func_172C70
label_40f4b8:
    if (ctx->pc == 0x40F4B8u) {
        ctx->pc = 0x40F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4B4u;
        // 0x40f4b8: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F4BCu;
        goto label_40f4bc;
    }
    ctx->pc = 0x40F4B4u;
    SET_GPR_U32(ctx, 31, 0x40F4BCu);
    ctx->pc = 0x40F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F4B4u;
    // 0x40f4b8: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172C70u, 0x40F4B4u, 0x40F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F4BCu;
label_40f4bc:
    // 0x40f4bc: 0x8e03cd4c  lw          $v1, -0x32B4($s0)
    ctx->pc = 0x40f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_40f4c0:
    // 0x40f4c0: 0x24630c94  addiu       $v1, $v1, 0xC94
    ctx->pc = 0x40f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3220));
label_40f4c4:
    // 0x40f4c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x40f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_40f4c8:
    // 0x40f4c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x40f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_40f4cc:
    // 0x40f4cc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x40f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_40f4d0:
    // 0x40f4d0: 0x1482fff5  bne         $a0, $v0, . + 4 + (-0xB << 2)
label_40f4d4:
    if (ctx->pc == 0x40F4D4u) {
        ctx->pc = 0x40F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4D0u;
        // 0x40f4d4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F4D8u;
        goto label_40f4d8;
    }
    ctx->pc = 0x40F4D0u;
    {
        const bool branch_taken_0x40f4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x40F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4D0u;
        // 0x40f4d4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f4d0) {
            ctx->pc = 0x40F4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40f4a8;
        }
    }
    ctx->pc = 0x40F4D8u;
label_40f4d8:
    // 0x40f4d8: 0x2643ad28  addiu       $v1, $s2, -0x52D8
    ctx->pc = 0x40f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946088));
label_40f4dc:
    // 0x40f4dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x40f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40f4e0:
    // 0x40f4e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x40f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_40f4e4:
    // 0x40f4e4: 0x40f809  jalr        $v0
label_40f4e8:
    if (ctx->pc == 0x40F4E8u) {
        ctx->pc = 0x40F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4E4u;
        // 0x40f4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F4ECu;
        goto label_40f4ec;
    }
    ctx->pc = 0x40F4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F4ECu);
        ctx->pc = 0x40F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4E4u;
        // 0x40f4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F4E4u, 0x40F4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F4ECu;
label_40f4ec:
    // 0x40f4ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x40f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40f4f0:
    // 0x40f4f0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x40f4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_40f4f4:
    // 0x40f4f4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x40f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_40f4f8:
    // 0x40f4f8: 0x40f809  jalr        $v0
label_40f4fc:
    if (ctx->pc == 0x40F4FCu) {
        ctx->pc = 0x40F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4F8u;
        // 0x40f4fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F500u;
        goto label_40f500;
    }
    ctx->pc = 0x40F4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F500u);
        ctx->pc = 0x40F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4F8u;
        // 0x40f4fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F4F8u, 0x40F500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F500u;
label_40f500:
    // 0x40f500: 0x1000000e  b           . + 4 + (0xE << 2)
label_40f504:
    if (ctx->pc == 0x40F504u) {
        ctx->pc = 0x40F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F500u;
        // 0x40f504: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F508u;
        goto label_40f508;
    }
    ctx->pc = 0x40F500u;
    {
        const bool branch_taken_0x40f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F500u;
        // 0x40f504: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f500) {
            ctx->pc = 0x40F53Cu;
            goto label_40f53c;
        }
    }
    ctx->pc = 0x40F508u;
label_40f508:
    // 0x40f508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40f508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f50c:
    // 0x40f50c: 0x8c51cd4c  lw          $s1, -0x32B4($v0)
    ctx->pc = 0x40f50cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_40f510:
    // 0x40f510: 0x26310c94  addiu       $s1, $s1, 0xC94
    ctx->pc = 0x40f510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3220));
label_40f514:
    // 0x40f514: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x40f514u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40f518:
    // 0x40f518: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x40f518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f51c:
    // 0x40f51c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40f520:
    // 0x40f520: 0xc10c1bb  jal         func_4306EC
label_40f524:
    if (ctx->pc == 0x40F524u) {
        ctx->pc = 0x40F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F520u;
        // 0x40f524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F528u;
        goto label_40f528;
    }
    ctx->pc = 0x40F520u;
    SET_GPR_U32(ctx, 31, 0x40F528u);
    ctx->pc = 0x40F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F520u;
    // 0x40f524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x40F520u, 0x40F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F528u;
label_40f528:
    // 0x40f528: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x40f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_40f52c:
    // 0x40f52c: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x40f52cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_40f530:
    // 0x40f530: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x40f530u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_40f534:
    // 0x40f534: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40f534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40f538:
    // 0x40f538: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40f53c:
    // 0x40f53c: 0xc106768  jal         func_419DA0
label_40f540:
    if (ctx->pc == 0x40F540u) {
        ctx->pc = 0x40F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F53Cu;
        // 0x40f540: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F544u;
        goto label_40f544;
    }
    ctx->pc = 0x40F53Cu;
    SET_GPR_U32(ctx, 31, 0x40F544u);
    ctx->pc = 0x40F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F53Cu;
    // 0x40f540: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419DA0u, 0x40F53Cu, 0x40F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F544u;
label_40f544:
    // 0x40f544: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40f544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40f548:
    // 0x40f548: 0xc05c4b0  jal         func_1712C0
label_40f54c:
    if (ctx->pc == 0x40F54Cu) {
        ctx->pc = 0x40F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F548u;
        // 0x40f54c: 0x8c4471a0  lw          $a0, 0x71A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F550u;
        goto label_40f550;
    }
    ctx->pc = 0x40F548u;
    SET_GPR_U32(ctx, 31, 0x40F550u);
    ctx->pc = 0x40F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F548u;
    // 0x40f54c: 0x8c4471a0  lw          $a0, 0x71A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1712C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1712C0u, 0x40F548u, 0x40F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F550u;
label_40f550:
    // 0x40f550: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40f554:
    // 0x40f554: 0xc05c7d6  jal         func_171F58
label_40f558:
    if (ctx->pc == 0x40F558u) {
        ctx->pc = 0x40F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F554u;
        // 0x40f558: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F55Cu;
        goto label_40f55c;
    }
    ctx->pc = 0x40F554u;
    SET_GPR_U32(ctx, 31, 0x40F55Cu);
    ctx->pc = 0x40F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F554u;
    // 0x40f558: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F58u, 0x40F554u, 0x40F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F55Cu;
label_40f55c:
    // 0x40f55c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40f560:
    // 0x40f560: 0x8c4471ac  lw          $a0, 0x71AC($v0)
    ctx->pc = 0x40f560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29100)));
label_40f564:
    // 0x40f564: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_40f568:
    if (ctx->pc == 0x40F568u) {
        ctx->pc = 0x40F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F564u;
        // 0x40f568: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F56Cu;
        goto label_40f56c;
    }
    ctx->pc = 0x40F564u;
    {
        const bool branch_taken_0x40f564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F564u;
        // 0x40f568: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f564) {
            ctx->pc = 0x40F578u;
            goto label_40f578;
        }
    }
    ctx->pc = 0x40F56Cu;
label_40f56c:
    // 0x40f56c: 0xc05e57e  jal         func_1795F8
label_40f570:
    if (ctx->pc == 0x40F570u) {
        ctx->pc = 0x40F574u;
        goto label_40f574;
    }
    ctx->pc = 0x40F56Cu;
    SET_GPR_U32(ctx, 31, 0x40F574u);
    ctx->pc = 0x1795F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1795F8u, 0x40F56Cu, 0x40F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F574u;
label_40f574:
    // 0x40f574: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x40f574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40f578:
    // 0x40f578: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x40f578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40f57c:
    // 0x40f57c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x40f57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40f580:
    // 0x40f580: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x40f580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40f584:
    // 0x40f584: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40f584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40f588:
    // 0x40f588: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x40f588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40f58c:
    // 0x40f58c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x40f58cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40f590:
    // 0x40f590: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x40f590u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40f594:
    // 0x40f594: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x40f594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40f598:
    // 0x40f598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40f598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40f59c:
    // 0x40f59c: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x40f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_40f5a0:
    // 0x40f5a0: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x40f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_40f5a4:
    // 0x40f5a4: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x40f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40f5a8:
    // 0x40f5a8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x40f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40f5ac:
    // 0x40f5ac: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x40f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40f5b0:
    // 0x40f5b0: 0x3e00008  jr          $ra
label_40f5b4:
    if (ctx->pc == 0x40F5B4u) {
        ctx->pc = 0x40F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F5B0u;
        // 0x40f5b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F5B8u;
        goto label_fallthrough_0x40f5b0;
    }
    ctx->pc = 0x40F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F5B0u;
        // 0x40f5b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40f5b0:
    ctx->pc = 0x40F5B8u;
}
