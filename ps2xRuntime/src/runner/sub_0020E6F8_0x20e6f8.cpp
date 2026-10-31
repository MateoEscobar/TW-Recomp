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

// Function: sub_0020E6F8
// Address: 0x20e6f8 - 0x20fbc0
void sub_0020E6F8_0x20e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E6F8_0x20e6f8");
#endif

    switch (ctx->pc) {
        case 0x20e6f8u: goto label_20e6f8;
        case 0x20e6fcu: goto label_20e6fc;
        case 0x20e700u: goto label_20e700;
        case 0x20e704u: goto label_20e704;
        case 0x20e708u: goto label_20e708;
        case 0x20e70cu: goto label_20e70c;
        case 0x20e710u: goto label_20e710;
        case 0x20e714u: goto label_20e714;
        case 0x20e718u: goto label_20e718;
        case 0x20e71cu: goto label_20e71c;
        case 0x20e720u: goto label_20e720;
        case 0x20e724u: goto label_20e724;
        case 0x20e728u: goto label_20e728;
        case 0x20e72cu: goto label_20e72c;
        case 0x20e730u: goto label_20e730;
        case 0x20e734u: goto label_20e734;
        case 0x20e738u: goto label_20e738;
        case 0x20e73cu: goto label_20e73c;
        case 0x20e740u: goto label_20e740;
        case 0x20e744u: goto label_20e744;
        case 0x20e748u: goto label_20e748;
        case 0x20e74cu: goto label_20e74c;
        case 0x20e750u: goto label_20e750;
        case 0x20e754u: goto label_20e754;
        case 0x20e758u: goto label_20e758;
        case 0x20e75cu: goto label_20e75c;
        case 0x20e760u: goto label_20e760;
        case 0x20e764u: goto label_20e764;
        case 0x20e768u: goto label_20e768;
        case 0x20e76cu: goto label_20e76c;
        case 0x20e770u: goto label_20e770;
        case 0x20e774u: goto label_20e774;
        case 0x20e778u: goto label_20e778;
        case 0x20e77cu: goto label_20e77c;
        case 0x20e780u: goto label_20e780;
        case 0x20e784u: goto label_20e784;
        case 0x20e788u: goto label_20e788;
        case 0x20e78cu: goto label_20e78c;
        case 0x20e790u: goto label_20e790;
        case 0x20e794u: goto label_20e794;
        case 0x20e798u: goto label_20e798;
        case 0x20e79cu: goto label_20e79c;
        case 0x20e7a0u: goto label_20e7a0;
        case 0x20e7a4u: goto label_20e7a4;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7acu: goto label_20e7ac;
        case 0x20e7b0u: goto label_20e7b0;
        case 0x20e7b4u: goto label_20e7b4;
        case 0x20e7b8u: goto label_20e7b8;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7c4u: goto label_20e7c4;
        case 0x20e7c8u: goto label_20e7c8;
        case 0x20e7ccu: goto label_20e7cc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e7d8u: goto label_20e7d8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e0u: goto label_20e7e0;
        case 0x20e7e4u: goto label_20e7e4;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7ecu: goto label_20e7ec;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e7f4u: goto label_20e7f4;
        case 0x20e7f8u: goto label_20e7f8;
        case 0x20e7fcu: goto label_20e7fc;
        case 0x20e800u: goto label_20e800;
        case 0x20e804u: goto label_20e804;
        case 0x20e808u: goto label_20e808;
        case 0x20e80cu: goto label_20e80c;
        case 0x20e810u: goto label_20e810;
        case 0x20e814u: goto label_20e814;
        case 0x20e818u: goto label_20e818;
        case 0x20e81cu: goto label_20e81c;
        case 0x20e820u: goto label_20e820;
        case 0x20e824u: goto label_20e824;
        case 0x20e828u: goto label_20e828;
        case 0x20e82cu: goto label_20e82c;
        case 0x20e830u: goto label_20e830;
        case 0x20e834u: goto label_20e834;
        case 0x20e838u: goto label_20e838;
        case 0x20e83cu: goto label_20e83c;
        case 0x20e840u: goto label_20e840;
        case 0x20e844u: goto label_20e844;
        case 0x20e848u: goto label_20e848;
        case 0x20e84cu: goto label_20e84c;
        case 0x20e850u: goto label_20e850;
        case 0x20e854u: goto label_20e854;
        case 0x20e858u: goto label_20e858;
        case 0x20e85cu: goto label_20e85c;
        case 0x20e860u: goto label_20e860;
        case 0x20e864u: goto label_20e864;
        case 0x20e868u: goto label_20e868;
        case 0x20e86cu: goto label_20e86c;
        case 0x20e870u: goto label_20e870;
        case 0x20e874u: goto label_20e874;
        case 0x20e878u: goto label_20e878;
        case 0x20e87cu: goto label_20e87c;
        case 0x20e880u: goto label_20e880;
        case 0x20e884u: goto label_20e884;
        case 0x20e888u: goto label_20e888;
        case 0x20e88cu: goto label_20e88c;
        case 0x20e890u: goto label_20e890;
        case 0x20e894u: goto label_20e894;
        case 0x20e898u: goto label_20e898;
        case 0x20e89cu: goto label_20e89c;
        case 0x20e8a0u: goto label_20e8a0;
        case 0x20e8a4u: goto label_20e8a4;
        case 0x20e8a8u: goto label_20e8a8;
        case 0x20e8acu: goto label_20e8ac;
        case 0x20e8b0u: goto label_20e8b0;
        case 0x20e8b4u: goto label_20e8b4;
        case 0x20e8b8u: goto label_20e8b8;
        case 0x20e8bcu: goto label_20e8bc;
        case 0x20e8c0u: goto label_20e8c0;
        case 0x20e8c4u: goto label_20e8c4;
        case 0x20e8c8u: goto label_20e8c8;
        case 0x20e8ccu: goto label_20e8cc;
        case 0x20e8d0u: goto label_20e8d0;
        case 0x20e8d4u: goto label_20e8d4;
        case 0x20e8d8u: goto label_20e8d8;
        case 0x20e8dcu: goto label_20e8dc;
        case 0x20e8e0u: goto label_20e8e0;
        case 0x20e8e4u: goto label_20e8e4;
        case 0x20e8e8u: goto label_20e8e8;
        case 0x20e8ecu: goto label_20e8ec;
        case 0x20e8f0u: goto label_20e8f0;
        case 0x20e8f4u: goto label_20e8f4;
        case 0x20e8f8u: goto label_20e8f8;
        case 0x20e8fcu: goto label_20e8fc;
        case 0x20e900u: goto label_20e900;
        case 0x20e904u: goto label_20e904;
        case 0x20e908u: goto label_20e908;
        case 0x20e90cu: goto label_20e90c;
        case 0x20e910u: goto label_20e910;
        case 0x20e914u: goto label_20e914;
        case 0x20e918u: goto label_20e918;
        case 0x20e91cu: goto label_20e91c;
        case 0x20e920u: goto label_20e920;
        case 0x20e924u: goto label_20e924;
        case 0x20e928u: goto label_20e928;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e930u: goto label_20e930;
        case 0x20e934u: goto label_20e934;
        case 0x20e938u: goto label_20e938;
        case 0x20e93cu: goto label_20e93c;
        case 0x20e940u: goto label_20e940;
        case 0x20e944u: goto label_20e944;
        case 0x20e948u: goto label_20e948;
        case 0x20e94cu: goto label_20e94c;
        case 0x20e950u: goto label_20e950;
        case 0x20e954u: goto label_20e954;
        case 0x20e958u: goto label_20e958;
        case 0x20e95cu: goto label_20e95c;
        case 0x20e960u: goto label_20e960;
        case 0x20e964u: goto label_20e964;
        case 0x20e968u: goto label_20e968;
        case 0x20e96cu: goto label_20e96c;
        case 0x20e970u: goto label_20e970;
        case 0x20e974u: goto label_20e974;
        case 0x20e978u: goto label_20e978;
        case 0x20e97cu: goto label_20e97c;
        case 0x20e980u: goto label_20e980;
        case 0x20e984u: goto label_20e984;
        case 0x20e988u: goto label_20e988;
        case 0x20e98cu: goto label_20e98c;
        case 0x20e990u: goto label_20e990;
        case 0x20e994u: goto label_20e994;
        case 0x20e998u: goto label_20e998;
        case 0x20e99cu: goto label_20e99c;
        case 0x20e9a0u: goto label_20e9a0;
        case 0x20e9a4u: goto label_20e9a4;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20e9acu: goto label_20e9ac;
        case 0x20e9b0u: goto label_20e9b0;
        case 0x20e9b4u: goto label_20e9b4;
        case 0x20e9b8u: goto label_20e9b8;
        case 0x20e9bcu: goto label_20e9bc;
        case 0x20e9c0u: goto label_20e9c0;
        case 0x20e9c4u: goto label_20e9c4;
        case 0x20e9c8u: goto label_20e9c8;
        case 0x20e9ccu: goto label_20e9cc;
        case 0x20e9d0u: goto label_20e9d0;
        case 0x20e9d4u: goto label_20e9d4;
        case 0x20e9d8u: goto label_20e9d8;
        case 0x20e9dcu: goto label_20e9dc;
        case 0x20e9e0u: goto label_20e9e0;
        case 0x20e9e4u: goto label_20e9e4;
        case 0x20e9e8u: goto label_20e9e8;
        case 0x20e9ecu: goto label_20e9ec;
        case 0x20e9f0u: goto label_20e9f0;
        case 0x20e9f4u: goto label_20e9f4;
        case 0x20e9f8u: goto label_20e9f8;
        case 0x20e9fcu: goto label_20e9fc;
        case 0x20ea00u: goto label_20ea00;
        case 0x20ea04u: goto label_20ea04;
        case 0x20ea08u: goto label_20ea08;
        case 0x20ea0cu: goto label_20ea0c;
        case 0x20ea10u: goto label_20ea10;
        case 0x20ea14u: goto label_20ea14;
        case 0x20ea18u: goto label_20ea18;
        case 0x20ea1cu: goto label_20ea1c;
        case 0x20ea20u: goto label_20ea20;
        case 0x20ea24u: goto label_20ea24;
        case 0x20ea28u: goto label_20ea28;
        case 0x20ea2cu: goto label_20ea2c;
        case 0x20ea30u: goto label_20ea30;
        case 0x20ea34u: goto label_20ea34;
        case 0x20ea38u: goto label_20ea38;
        case 0x20ea3cu: goto label_20ea3c;
        case 0x20ea40u: goto label_20ea40;
        case 0x20ea44u: goto label_20ea44;
        case 0x20ea48u: goto label_20ea48;
        case 0x20ea4cu: goto label_20ea4c;
        case 0x20ea50u: goto label_20ea50;
        case 0x20ea54u: goto label_20ea54;
        case 0x20ea58u: goto label_20ea58;
        case 0x20ea5cu: goto label_20ea5c;
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea64u: goto label_20ea64;
        case 0x20ea68u: goto label_20ea68;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea74u: goto label_20ea74;
        case 0x20ea78u: goto label_20ea78;
        case 0x20ea7cu: goto label_20ea7c;
        case 0x20ea80u: goto label_20ea80;
        case 0x20ea84u: goto label_20ea84;
        case 0x20ea88u: goto label_20ea88;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20ea90u: goto label_20ea90;
        case 0x20ea94u: goto label_20ea94;
        case 0x20ea98u: goto label_20ea98;
        case 0x20ea9cu: goto label_20ea9c;
        case 0x20eaa0u: goto label_20eaa0;
        case 0x20eaa4u: goto label_20eaa4;
        case 0x20eaa8u: goto label_20eaa8;
        case 0x20eaacu: goto label_20eaac;
        case 0x20eab0u: goto label_20eab0;
        case 0x20eab4u: goto label_20eab4;
        case 0x20eab8u: goto label_20eab8;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eac0u: goto label_20eac0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eac8u: goto label_20eac8;
        case 0x20eaccu: goto label_20eacc;
        case 0x20ead0u: goto label_20ead0;
        case 0x20ead4u: goto label_20ead4;
        case 0x20ead8u: goto label_20ead8;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eae0u: goto label_20eae0;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eae8u: goto label_20eae8;
        case 0x20eaecu: goto label_20eaec;
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eaf4u: goto label_20eaf4;
        case 0x20eaf8u: goto label_20eaf8;
        case 0x20eafcu: goto label_20eafc;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb04u: goto label_20eb04;
        case 0x20eb08u: goto label_20eb08;
        case 0x20eb0cu: goto label_20eb0c;
        case 0x20eb10u: goto label_20eb10;
        case 0x20eb14u: goto label_20eb14;
        case 0x20eb18u: goto label_20eb18;
        case 0x20eb1cu: goto label_20eb1c;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb24u: goto label_20eb24;
        case 0x20eb28u: goto label_20eb28;
        case 0x20eb2cu: goto label_20eb2c;
        case 0x20eb30u: goto label_20eb30;
        case 0x20eb34u: goto label_20eb34;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb3cu: goto label_20eb3c;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb44u: goto label_20eb44;
        case 0x20eb48u: goto label_20eb48;
        case 0x20eb4cu: goto label_20eb4c;
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb54u: goto label_20eb54;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb5cu: goto label_20eb5c;
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        case 0x20ecd0u: goto label_20ecd0;
        case 0x20ecd4u: goto label_20ecd4;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ece4u: goto label_20ece4;
        case 0x20ece8u: goto label_20ece8;
        case 0x20ececu: goto label_20ecec;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ecf8u: goto label_20ecf8;
        case 0x20ecfcu: goto label_20ecfc;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed04u: goto label_20ed04;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed0cu: goto label_20ed0c;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed14u: goto label_20ed14;
        case 0x20ed18u: goto label_20ed18;
        case 0x20ed1cu: goto label_20ed1c;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed24u: goto label_20ed24;
        case 0x20ed28u: goto label_20ed28;
        case 0x20ed2cu: goto label_20ed2c;
        case 0x20ed30u: goto label_20ed30;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed38u: goto label_20ed38;
        case 0x20ed3cu: goto label_20ed3c;
        case 0x20ed40u: goto label_20ed40;
        case 0x20ed44u: goto label_20ed44;
        case 0x20ed48u: goto label_20ed48;
        case 0x20ed4cu: goto label_20ed4c;
        case 0x20ed50u: goto label_20ed50;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed5cu: goto label_20ed5c;
        case 0x20ed60u: goto label_20ed60;
        case 0x20ed64u: goto label_20ed64;
        case 0x20ed68u: goto label_20ed68;
        case 0x20ed6cu: goto label_20ed6c;
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed74u: goto label_20ed74;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed7cu: goto label_20ed7c;
        case 0x20ed80u: goto label_20ed80;
        case 0x20ed84u: goto label_20ed84;
        case 0x20ed88u: goto label_20ed88;
        case 0x20ed8cu: goto label_20ed8c;
        case 0x20ed90u: goto label_20ed90;
        case 0x20ed94u: goto label_20ed94;
        case 0x20ed98u: goto label_20ed98;
        case 0x20ed9cu: goto label_20ed9c;
        case 0x20eda0u: goto label_20eda0;
        case 0x20eda4u: goto label_20eda4;
        case 0x20eda8u: goto label_20eda8;
        case 0x20edacu: goto label_20edac;
        case 0x20edb0u: goto label_20edb0;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edbcu: goto label_20edbc;
        case 0x20edc0u: goto label_20edc0;
        case 0x20edc4u: goto label_20edc4;
        case 0x20edc8u: goto label_20edc8;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd0u: goto label_20edd0;
        case 0x20edd4u: goto label_20edd4;
        case 0x20edd8u: goto label_20edd8;
        case 0x20eddcu: goto label_20eddc;
        case 0x20ede0u: goto label_20ede0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ede8u: goto label_20ede8;
        case 0x20edecu: goto label_20edec;
        case 0x20edf0u: goto label_20edf0;
        case 0x20edf4u: goto label_20edf4;
        case 0x20edf8u: goto label_20edf8;
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee00u: goto label_20ee00;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee08u: goto label_20ee08;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee10u: goto label_20ee10;
        case 0x20ee14u: goto label_20ee14;
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee1cu: goto label_20ee1c;
        case 0x20ee20u: goto label_20ee20;
        case 0x20ee24u: goto label_20ee24;
        case 0x20ee28u: goto label_20ee28;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee38u: goto label_20ee38;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee40u: goto label_20ee40;
        case 0x20ee44u: goto label_20ee44;
        case 0x20ee48u: goto label_20ee48;
        case 0x20ee4cu: goto label_20ee4c;
        case 0x20ee50u: goto label_20ee50;
        case 0x20ee54u: goto label_20ee54;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20ee60u: goto label_20ee60;
        case 0x20ee64u: goto label_20ee64;
        case 0x20ee68u: goto label_20ee68;
        case 0x20ee6cu: goto label_20ee6c;
        case 0x20ee70u: goto label_20ee70;
        case 0x20ee74u: goto label_20ee74;
        case 0x20ee78u: goto label_20ee78;
        case 0x20ee7cu: goto label_20ee7c;
        case 0x20ee80u: goto label_20ee80;
        case 0x20ee84u: goto label_20ee84;
        case 0x20ee88u: goto label_20ee88;
        case 0x20ee8cu: goto label_20ee8c;
        case 0x20ee90u: goto label_20ee90;
        case 0x20ee94u: goto label_20ee94;
        case 0x20ee98u: goto label_20ee98;
        case 0x20ee9cu: goto label_20ee9c;
        case 0x20eea0u: goto label_20eea0;
        case 0x20eea4u: goto label_20eea4;
        case 0x20eea8u: goto label_20eea8;
        case 0x20eeacu: goto label_20eeac;
        case 0x20eeb0u: goto label_20eeb0;
        case 0x20eeb4u: goto label_20eeb4;
        case 0x20eeb8u: goto label_20eeb8;
        case 0x20eebcu: goto label_20eebc;
        case 0x20eec0u: goto label_20eec0;
        case 0x20eec4u: goto label_20eec4;
        case 0x20eec8u: goto label_20eec8;
        case 0x20eeccu: goto label_20eecc;
        case 0x20eed0u: goto label_20eed0;
        case 0x20eed4u: goto label_20eed4;
        case 0x20eed8u: goto label_20eed8;
        case 0x20eedcu: goto label_20eedc;
        case 0x20eee0u: goto label_20eee0;
        case 0x20eee4u: goto label_20eee4;
        case 0x20eee8u: goto label_20eee8;
        case 0x20eeecu: goto label_20eeec;
        case 0x20eef0u: goto label_20eef0;
        case 0x20eef4u: goto label_20eef4;
        case 0x20eef8u: goto label_20eef8;
        case 0x20eefcu: goto label_20eefc;
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef04u: goto label_20ef04;
        case 0x20ef08u: goto label_20ef08;
        case 0x20ef0cu: goto label_20ef0c;
        case 0x20ef10u: goto label_20ef10;
        case 0x20ef14u: goto label_20ef14;
        case 0x20ef18u: goto label_20ef18;
        case 0x20ef1cu: goto label_20ef1c;
        case 0x20ef20u: goto label_20ef20;
        case 0x20ef24u: goto label_20ef24;
        case 0x20ef28u: goto label_20ef28;
        case 0x20ef2cu: goto label_20ef2c;
        case 0x20ef30u: goto label_20ef30;
        case 0x20ef34u: goto label_20ef34;
        case 0x20ef38u: goto label_20ef38;
        case 0x20ef3cu: goto label_20ef3c;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef44u: goto label_20ef44;
        case 0x20ef48u: goto label_20ef48;
        case 0x20ef4cu: goto label_20ef4c;
        case 0x20ef50u: goto label_20ef50;
        case 0x20ef54u: goto label_20ef54;
        case 0x20ef58u: goto label_20ef58;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20ef60u: goto label_20ef60;
        case 0x20ef64u: goto label_20ef64;
        case 0x20ef68u: goto label_20ef68;
        case 0x20ef6cu: goto label_20ef6c;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef74u: goto label_20ef74;
        case 0x20ef78u: goto label_20ef78;
        case 0x20ef7cu: goto label_20ef7c;
        case 0x20ef80u: goto label_20ef80;
        case 0x20ef84u: goto label_20ef84;
        case 0x20ef88u: goto label_20ef88;
        case 0x20ef8cu: goto label_20ef8c;
        case 0x20ef90u: goto label_20ef90;
        case 0x20ef94u: goto label_20ef94;
        case 0x20ef98u: goto label_20ef98;
        case 0x20ef9cu: goto label_20ef9c;
        case 0x20efa0u: goto label_20efa0;
        case 0x20efa4u: goto label_20efa4;
        case 0x20efa8u: goto label_20efa8;
        case 0x20efacu: goto label_20efac;
        case 0x20efb0u: goto label_20efb0;
        case 0x20efb4u: goto label_20efb4;
        case 0x20efb8u: goto label_20efb8;
        case 0x20efbcu: goto label_20efbc;
        case 0x20efc0u: goto label_20efc0;
        case 0x20efc4u: goto label_20efc4;
        case 0x20efc8u: goto label_20efc8;
        case 0x20efccu: goto label_20efcc;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd4u: goto label_20efd4;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efdcu: goto label_20efdc;
        case 0x20efe0u: goto label_20efe0;
        case 0x20efe4u: goto label_20efe4;
        case 0x20efe8u: goto label_20efe8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff0u: goto label_20eff0;
        case 0x20eff4u: goto label_20eff4;
        case 0x20eff8u: goto label_20eff8;
        case 0x20effcu: goto label_20effc;
        case 0x20f000u: goto label_20f000;
        case 0x20f004u: goto label_20f004;
        case 0x20f008u: goto label_20f008;
        case 0x20f00cu: goto label_20f00c;
        case 0x20f010u: goto label_20f010;
        case 0x20f014u: goto label_20f014;
        case 0x20f018u: goto label_20f018;
        case 0x20f01cu: goto label_20f01c;
        case 0x20f020u: goto label_20f020;
        case 0x20f024u: goto label_20f024;
        case 0x20f028u: goto label_20f028;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f030u: goto label_20f030;
        case 0x20f034u: goto label_20f034;
        case 0x20f038u: goto label_20f038;
        case 0x20f03cu: goto label_20f03c;
        case 0x20f040u: goto label_20f040;
        case 0x20f044u: goto label_20f044;
        case 0x20f048u: goto label_20f048;
        case 0x20f04cu: goto label_20f04c;
        case 0x20f050u: goto label_20f050;
        case 0x20f054u: goto label_20f054;
        case 0x20f058u: goto label_20f058;
        case 0x20f05cu: goto label_20f05c;
        case 0x20f060u: goto label_20f060;
        case 0x20f064u: goto label_20f064;
        case 0x20f068u: goto label_20f068;
        case 0x20f06cu: goto label_20f06c;
        case 0x20f070u: goto label_20f070;
        case 0x20f074u: goto label_20f074;
        case 0x20f078u: goto label_20f078;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f080u: goto label_20f080;
        case 0x20f084u: goto label_20f084;
        case 0x20f088u: goto label_20f088;
        case 0x20f08cu: goto label_20f08c;
        case 0x20f090u: goto label_20f090;
        case 0x20f094u: goto label_20f094;
        case 0x20f098u: goto label_20f098;
        case 0x20f09cu: goto label_20f09c;
        case 0x20f0a0u: goto label_20f0a0;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0a8u: goto label_20f0a8;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0b4u: goto label_20f0b4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c0u: goto label_20f0c0;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0d0u: goto label_20f0d0;
        case 0x20f0d4u: goto label_20f0d4;
        case 0x20f0d8u: goto label_20f0d8;
        case 0x20f0dcu: goto label_20f0dc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0e8u: goto label_20f0e8;
        case 0x20f0ecu: goto label_20f0ec;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0f4u: goto label_20f0f4;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f100u: goto label_20f100;
        case 0x20f104u: goto label_20f104;
        case 0x20f108u: goto label_20f108;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f110u: goto label_20f110;
        case 0x20f114u: goto label_20f114;
        case 0x20f118u: goto label_20f118;
        case 0x20f11cu: goto label_20f11c;
        case 0x20f120u: goto label_20f120;
        case 0x20f124u: goto label_20f124;
        case 0x20f128u: goto label_20f128;
        case 0x20f12cu: goto label_20f12c;
        case 0x20f130u: goto label_20f130;
        case 0x20f134u: goto label_20f134;
        case 0x20f138u: goto label_20f138;
        case 0x20f13cu: goto label_20f13c;
        case 0x20f140u: goto label_20f140;
        case 0x20f144u: goto label_20f144;
        case 0x20f148u: goto label_20f148;
        case 0x20f14cu: goto label_20f14c;
        case 0x20f150u: goto label_20f150;
        case 0x20f154u: goto label_20f154;
        case 0x20f158u: goto label_20f158;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f160u: goto label_20f160;
        case 0x20f164u: goto label_20f164;
        case 0x20f168u: goto label_20f168;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f170u: goto label_20f170;
        case 0x20f174u: goto label_20f174;
        case 0x20f178u: goto label_20f178;
        case 0x20f17cu: goto label_20f17c;
        case 0x20f180u: goto label_20f180;
        case 0x20f184u: goto label_20f184;
        case 0x20f188u: goto label_20f188;
        case 0x20f18cu: goto label_20f18c;
        case 0x20f190u: goto label_20f190;
        case 0x20f194u: goto label_20f194;
        case 0x20f198u: goto label_20f198;
        case 0x20f19cu: goto label_20f19c;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1a4u: goto label_20f1a4;
        case 0x20f1a8u: goto label_20f1a8;
        case 0x20f1acu: goto label_20f1ac;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1b4u: goto label_20f1b4;
        case 0x20f1b8u: goto label_20f1b8;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        case 0x20f278u: goto label_20f278;
        case 0x20f27cu: goto label_20f27c;
        case 0x20f280u: goto label_20f280;
        case 0x20f284u: goto label_20f284;
        case 0x20f288u: goto label_20f288;
        case 0x20f28cu: goto label_20f28c;
        case 0x20f290u: goto label_20f290;
        case 0x20f294u: goto label_20f294;
        case 0x20f298u: goto label_20f298;
        case 0x20f29cu: goto label_20f29c;
        case 0x20f2a0u: goto label_20f2a0;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2acu: goto label_20f2ac;
        case 0x20f2b0u: goto label_20f2b0;
        case 0x20f2b4u: goto label_20f2b4;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2c0u: goto label_20f2c0;
        case 0x20f2c4u: goto label_20f2c4;
        case 0x20f2c8u: goto label_20f2c8;
        case 0x20f2ccu: goto label_20f2cc;
        case 0x20f2d0u: goto label_20f2d0;
        case 0x20f2d4u: goto label_20f2d4;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f2e0u: goto label_20f2e0;
        case 0x20f2e4u: goto label_20f2e4;
        case 0x20f2e8u: goto label_20f2e8;
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f0u: goto label_20f2f0;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f2fcu: goto label_20f2fc;
        case 0x20f300u: goto label_20f300;
        case 0x20f304u: goto label_20f304;
        case 0x20f308u: goto label_20f308;
        case 0x20f30cu: goto label_20f30c;
        case 0x20f310u: goto label_20f310;
        case 0x20f314u: goto label_20f314;
        case 0x20f318u: goto label_20f318;
        case 0x20f31cu: goto label_20f31c;
        case 0x20f320u: goto label_20f320;
        case 0x20f324u: goto label_20f324;
        case 0x20f328u: goto label_20f328;
        case 0x20f32cu: goto label_20f32c;
        case 0x20f330u: goto label_20f330;
        case 0x20f334u: goto label_20f334;
        case 0x20f338u: goto label_20f338;
        case 0x20f33cu: goto label_20f33c;
        case 0x20f340u: goto label_20f340;
        case 0x20f344u: goto label_20f344;
        case 0x20f348u: goto label_20f348;
        case 0x20f34cu: goto label_20f34c;
        case 0x20f350u: goto label_20f350;
        case 0x20f354u: goto label_20f354;
        case 0x20f358u: goto label_20f358;
        case 0x20f35cu: goto label_20f35c;
        case 0x20f360u: goto label_20f360;
        case 0x20f364u: goto label_20f364;
        case 0x20f368u: goto label_20f368;
        case 0x20f36cu: goto label_20f36c;
        case 0x20f370u: goto label_20f370;
        case 0x20f374u: goto label_20f374;
        case 0x20f378u: goto label_20f378;
        case 0x20f37cu: goto label_20f37c;
        case 0x20f380u: goto label_20f380;
        case 0x20f384u: goto label_20f384;
        case 0x20f388u: goto label_20f388;
        case 0x20f38cu: goto label_20f38c;
        case 0x20f390u: goto label_20f390;
        case 0x20f394u: goto label_20f394;
        case 0x20f398u: goto label_20f398;
        case 0x20f39cu: goto label_20f39c;
        case 0x20f3a0u: goto label_20f3a0;
        case 0x20f3a4u: goto label_20f3a4;
        case 0x20f3a8u: goto label_20f3a8;
        case 0x20f3acu: goto label_20f3ac;
        case 0x20f3b0u: goto label_20f3b0;
        case 0x20f3b4u: goto label_20f3b4;
        case 0x20f3b8u: goto label_20f3b8;
        case 0x20f3bcu: goto label_20f3bc;
        case 0x20f3c0u: goto label_20f3c0;
        case 0x20f3c4u: goto label_20f3c4;
        case 0x20f3c8u: goto label_20f3c8;
        case 0x20f3ccu: goto label_20f3cc;
        case 0x20f3d0u: goto label_20f3d0;
        case 0x20f3d4u: goto label_20f3d4;
        case 0x20f3d8u: goto label_20f3d8;
        case 0x20f3dcu: goto label_20f3dc;
        case 0x20f3e0u: goto label_20f3e0;
        case 0x20f3e4u: goto label_20f3e4;
        case 0x20f3e8u: goto label_20f3e8;
        case 0x20f3ecu: goto label_20f3ec;
        case 0x20f3f0u: goto label_20f3f0;
        case 0x20f3f4u: goto label_20f3f4;
        case 0x20f3f8u: goto label_20f3f8;
        case 0x20f3fcu: goto label_20f3fc;
        case 0x20f400u: goto label_20f400;
        case 0x20f404u: goto label_20f404;
        case 0x20f408u: goto label_20f408;
        case 0x20f40cu: goto label_20f40c;
        case 0x20f410u: goto label_20f410;
        case 0x20f414u: goto label_20f414;
        case 0x20f418u: goto label_20f418;
        case 0x20f41cu: goto label_20f41c;
        case 0x20f420u: goto label_20f420;
        case 0x20f424u: goto label_20f424;
        case 0x20f428u: goto label_20f428;
        case 0x20f42cu: goto label_20f42c;
        case 0x20f430u: goto label_20f430;
        case 0x20f434u: goto label_20f434;
        case 0x20f438u: goto label_20f438;
        case 0x20f43cu: goto label_20f43c;
        case 0x20f440u: goto label_20f440;
        case 0x20f444u: goto label_20f444;
        case 0x20f448u: goto label_20f448;
        case 0x20f44cu: goto label_20f44c;
        case 0x20f450u: goto label_20f450;
        case 0x20f454u: goto label_20f454;
        case 0x20f458u: goto label_20f458;
        case 0x20f45cu: goto label_20f45c;
        case 0x20f460u: goto label_20f460;
        case 0x20f464u: goto label_20f464;
        case 0x20f468u: goto label_20f468;
        case 0x20f46cu: goto label_20f46c;
        case 0x20f470u: goto label_20f470;
        case 0x20f474u: goto label_20f474;
        case 0x20f478u: goto label_20f478;
        case 0x20f47cu: goto label_20f47c;
        case 0x20f480u: goto label_20f480;
        case 0x20f484u: goto label_20f484;
        case 0x20f488u: goto label_20f488;
        case 0x20f48cu: goto label_20f48c;
        case 0x20f490u: goto label_20f490;
        case 0x20f494u: goto label_20f494;
        case 0x20f498u: goto label_20f498;
        case 0x20f49cu: goto label_20f49c;
        case 0x20f4a0u: goto label_20f4a0;
        case 0x20f4a4u: goto label_20f4a4;
        case 0x20f4a8u: goto label_20f4a8;
        case 0x20f4acu: goto label_20f4ac;
        case 0x20f4b0u: goto label_20f4b0;
        case 0x20f4b4u: goto label_20f4b4;
        case 0x20f4b8u: goto label_20f4b8;
        case 0x20f4bcu: goto label_20f4bc;
        case 0x20f4c0u: goto label_20f4c0;
        case 0x20f4c4u: goto label_20f4c4;
        case 0x20f4c8u: goto label_20f4c8;
        case 0x20f4ccu: goto label_20f4cc;
        case 0x20f4d0u: goto label_20f4d0;
        case 0x20f4d4u: goto label_20f4d4;
        case 0x20f4d8u: goto label_20f4d8;
        case 0x20f4dcu: goto label_20f4dc;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4e4u: goto label_20f4e4;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f4ecu: goto label_20f4ec;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f4f4u: goto label_20f4f4;
        case 0x20f4f8u: goto label_20f4f8;
        case 0x20f4fcu: goto label_20f4fc;
        case 0x20f500u: goto label_20f500;
        case 0x20f504u: goto label_20f504;
        case 0x20f508u: goto label_20f508;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f510u: goto label_20f510;
        case 0x20f514u: goto label_20f514;
        case 0x20f518u: goto label_20f518;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f520u: goto label_20f520;
        case 0x20f524u: goto label_20f524;
        case 0x20f528u: goto label_20f528;
        case 0x20f52cu: goto label_20f52c;
        case 0x20f530u: goto label_20f530;
        case 0x20f534u: goto label_20f534;
        case 0x20f538u: goto label_20f538;
        case 0x20f53cu: goto label_20f53c;
        case 0x20f540u: goto label_20f540;
        case 0x20f544u: goto label_20f544;
        case 0x20f548u: goto label_20f548;
        case 0x20f54cu: goto label_20f54c;
        case 0x20f550u: goto label_20f550;
        case 0x20f554u: goto label_20f554;
        case 0x20f558u: goto label_20f558;
        case 0x20f55cu: goto label_20f55c;
        case 0x20f560u: goto label_20f560;
        case 0x20f564u: goto label_20f564;
        case 0x20f568u: goto label_20f568;
        case 0x20f56cu: goto label_20f56c;
        case 0x20f570u: goto label_20f570;
        case 0x20f574u: goto label_20f574;
        case 0x20f578u: goto label_20f578;
        case 0x20f57cu: goto label_20f57c;
        case 0x20f580u: goto label_20f580;
        case 0x20f584u: goto label_20f584;
        case 0x20f588u: goto label_20f588;
        case 0x20f58cu: goto label_20f58c;
        case 0x20f590u: goto label_20f590;
        case 0x20f594u: goto label_20f594;
        case 0x20f598u: goto label_20f598;
        case 0x20f59cu: goto label_20f59c;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5a4u: goto label_20f5a4;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f5acu: goto label_20f5ac;
        case 0x20f5b0u: goto label_20f5b0;
        case 0x20f5b4u: goto label_20f5b4;
        case 0x20f5b8u: goto label_20f5b8;
        case 0x20f5bcu: goto label_20f5bc;
        case 0x20f5c0u: goto label_20f5c0;
        case 0x20f5c4u: goto label_20f5c4;
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5ccu: goto label_20f5cc;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5d4u: goto label_20f5d4;
        case 0x20f5d8u: goto label_20f5d8;
        case 0x20f5dcu: goto label_20f5dc;
        case 0x20f5e0u: goto label_20f5e0;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5e8u: goto label_20f5e8;
        case 0x20f5ecu: goto label_20f5ec;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f5f4u: goto label_20f5f4;
        case 0x20f5f8u: goto label_20f5f8;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f600u: goto label_20f600;
        case 0x20f604u: goto label_20f604;
        case 0x20f608u: goto label_20f608;
        case 0x20f60cu: goto label_20f60c;
        case 0x20f610u: goto label_20f610;
        case 0x20f614u: goto label_20f614;
        case 0x20f618u: goto label_20f618;
        case 0x20f61cu: goto label_20f61c;
        case 0x20f620u: goto label_20f620;
        case 0x20f624u: goto label_20f624;
        case 0x20f628u: goto label_20f628;
        case 0x20f62cu: goto label_20f62c;
        case 0x20f630u: goto label_20f630;
        case 0x20f634u: goto label_20f634;
        case 0x20f638u: goto label_20f638;
        case 0x20f63cu: goto label_20f63c;
        case 0x20f640u: goto label_20f640;
        case 0x20f644u: goto label_20f644;
        case 0x20f648u: goto label_20f648;
        case 0x20f64cu: goto label_20f64c;
        case 0x20f650u: goto label_20f650;
        case 0x20f654u: goto label_20f654;
        case 0x20f658u: goto label_20f658;
        case 0x20f65cu: goto label_20f65c;
        case 0x20f660u: goto label_20f660;
        case 0x20f664u: goto label_20f664;
        case 0x20f668u: goto label_20f668;
        case 0x20f66cu: goto label_20f66c;
        case 0x20f670u: goto label_20f670;
        case 0x20f674u: goto label_20f674;
        case 0x20f678u: goto label_20f678;
        case 0x20f67cu: goto label_20f67c;
        case 0x20f680u: goto label_20f680;
        case 0x20f684u: goto label_20f684;
        case 0x20f688u: goto label_20f688;
        case 0x20f68cu: goto label_20f68c;
        case 0x20f690u: goto label_20f690;
        case 0x20f694u: goto label_20f694;
        case 0x20f698u: goto label_20f698;
        case 0x20f69cu: goto label_20f69c;
        case 0x20f6a0u: goto label_20f6a0;
        case 0x20f6a4u: goto label_20f6a4;
        case 0x20f6a8u: goto label_20f6a8;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6b0u: goto label_20f6b0;
        case 0x20f6b4u: goto label_20f6b4;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6bcu: goto label_20f6bc;
        case 0x20f6c0u: goto label_20f6c0;
        case 0x20f6c4u: goto label_20f6c4;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6ccu: goto label_20f6cc;
        case 0x20f6d0u: goto label_20f6d0;
        case 0x20f6d4u: goto label_20f6d4;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f6dcu: goto label_20f6dc;
        case 0x20f6e0u: goto label_20f6e0;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f6e8u: goto label_20f6e8;
        case 0x20f6ecu: goto label_20f6ec;
        case 0x20f6f0u: goto label_20f6f0;
        case 0x20f6f4u: goto label_20f6f4;
        case 0x20f6f8u: goto label_20f6f8;
        case 0x20f6fcu: goto label_20f6fc;
        case 0x20f700u: goto label_20f700;
        case 0x20f704u: goto label_20f704;
        case 0x20f708u: goto label_20f708;
        case 0x20f70cu: goto label_20f70c;
        case 0x20f710u: goto label_20f710;
        case 0x20f714u: goto label_20f714;
        case 0x20f718u: goto label_20f718;
        case 0x20f71cu: goto label_20f71c;
        case 0x20f720u: goto label_20f720;
        case 0x20f724u: goto label_20f724;
        case 0x20f728u: goto label_20f728;
        case 0x20f72cu: goto label_20f72c;
        case 0x20f730u: goto label_20f730;
        case 0x20f734u: goto label_20f734;
        case 0x20f738u: goto label_20f738;
        case 0x20f73cu: goto label_20f73c;
        case 0x20f740u: goto label_20f740;
        case 0x20f744u: goto label_20f744;
        case 0x20f748u: goto label_20f748;
        case 0x20f74cu: goto label_20f74c;
        case 0x20f750u: goto label_20f750;
        case 0x20f754u: goto label_20f754;
        case 0x20f758u: goto label_20f758;
        case 0x20f75cu: goto label_20f75c;
        case 0x20f760u: goto label_20f760;
        case 0x20f764u: goto label_20f764;
        case 0x20f768u: goto label_20f768;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f770u: goto label_20f770;
        case 0x20f774u: goto label_20f774;
        case 0x20f778u: goto label_20f778;
        case 0x20f77cu: goto label_20f77c;
        case 0x20f780u: goto label_20f780;
        case 0x20f784u: goto label_20f784;
        case 0x20f788u: goto label_20f788;
        case 0x20f78cu: goto label_20f78c;
        case 0x20f790u: goto label_20f790;
        case 0x20f794u: goto label_20f794;
        case 0x20f798u: goto label_20f798;
        case 0x20f79cu: goto label_20f79c;
        case 0x20f7a0u: goto label_20f7a0;
        case 0x20f7a4u: goto label_20f7a4;
        case 0x20f7a8u: goto label_20f7a8;
        case 0x20f7acu: goto label_20f7ac;
        case 0x20f7b0u: goto label_20f7b0;
        case 0x20f7b4u: goto label_20f7b4;
        case 0x20f7b8u: goto label_20f7b8;
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7c4u: goto label_20f7c4;
        case 0x20f7c8u: goto label_20f7c8;
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f7d0u: goto label_20f7d0;
        case 0x20f7d4u: goto label_20f7d4;
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        case 0x20f8ccu: goto label_20f8cc;
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        case 0x20f8e4u: goto label_20f8e4;
        case 0x20f8e8u: goto label_20f8e8;
        case 0x20f8ecu: goto label_20f8ec;
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        case 0x20f928u: goto label_20f928;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f930u: goto label_20f930;
        case 0x20f934u: goto label_20f934;
        case 0x20f938u: goto label_20f938;
        case 0x20f93cu: goto label_20f93c;
        case 0x20f940u: goto label_20f940;
        case 0x20f944u: goto label_20f944;
        case 0x20f948u: goto label_20f948;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f950u: goto label_20f950;
        case 0x20f954u: goto label_20f954;
        case 0x20f958u: goto label_20f958;
        case 0x20f95cu: goto label_20f95c;
        case 0x20f960u: goto label_20f960;
        case 0x20f964u: goto label_20f964;
        case 0x20f968u: goto label_20f968;
        case 0x20f96cu: goto label_20f96c;
        case 0x20f970u: goto label_20f970;
        case 0x20f974u: goto label_20f974;
        case 0x20f978u: goto label_20f978;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f980u: goto label_20f980;
        case 0x20f984u: goto label_20f984;
        case 0x20f988u: goto label_20f988;
        case 0x20f98cu: goto label_20f98c;
        case 0x20f990u: goto label_20f990;
        case 0x20f994u: goto label_20f994;
        case 0x20f998u: goto label_20f998;
        case 0x20f99cu: goto label_20f99c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9a4u: goto label_20f9a4;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9acu: goto label_20f9ac;
        case 0x20f9b0u: goto label_20f9b0;
        case 0x20f9b4u: goto label_20f9b4;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9bcu: goto label_20f9bc;
        case 0x20f9c0u: goto label_20f9c0;
        case 0x20f9c4u: goto label_20f9c4;
        case 0x20f9c8u: goto label_20f9c8;
        case 0x20f9ccu: goto label_20f9cc;
        case 0x20f9d0u: goto label_20f9d0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20f9e0u: goto label_20f9e0;
        case 0x20f9e4u: goto label_20f9e4;
        case 0x20f9e8u: goto label_20f9e8;
        case 0x20f9ecu: goto label_20f9ec;
        case 0x20f9f0u: goto label_20f9f0;
        case 0x20f9f4u: goto label_20f9f4;
        case 0x20f9f8u: goto label_20f9f8;
        case 0x20f9fcu: goto label_20f9fc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa04u: goto label_20fa04;
        case 0x20fa08u: goto label_20fa08;
        case 0x20fa0cu: goto label_20fa0c;
        case 0x20fa10u: goto label_20fa10;
        case 0x20fa14u: goto label_20fa14;
        case 0x20fa18u: goto label_20fa18;
        case 0x20fa1cu: goto label_20fa1c;
        case 0x20fa20u: goto label_20fa20;
        case 0x20fa24u: goto label_20fa24;
        case 0x20fa28u: goto label_20fa28;
        case 0x20fa2cu: goto label_20fa2c;
        case 0x20fa30u: goto label_20fa30;
        case 0x20fa34u: goto label_20fa34;
        case 0x20fa38u: goto label_20fa38;
        case 0x20fa3cu: goto label_20fa3c;
        case 0x20fa40u: goto label_20fa40;
        case 0x20fa44u: goto label_20fa44;
        case 0x20fa48u: goto label_20fa48;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa50u: goto label_20fa50;
        case 0x20fa54u: goto label_20fa54;
        case 0x20fa58u: goto label_20fa58;
        case 0x20fa5cu: goto label_20fa5c;
        case 0x20fa60u: goto label_20fa60;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fa6cu: goto label_20fa6c;
        case 0x20fa70u: goto label_20fa70;
        case 0x20fa74u: goto label_20fa74;
        case 0x20fa78u: goto label_20fa78;
        case 0x20fa7cu: goto label_20fa7c;
        case 0x20fa80u: goto label_20fa80;
        case 0x20fa84u: goto label_20fa84;
        case 0x20fa88u: goto label_20fa88;
        case 0x20fa8cu: goto label_20fa8c;
        case 0x20fa90u: goto label_20fa90;
        case 0x20fa94u: goto label_20fa94;
        case 0x20fa98u: goto label_20fa98;
        case 0x20fa9cu: goto label_20fa9c;
        case 0x20faa0u: goto label_20faa0;
        case 0x20faa4u: goto label_20faa4;
        case 0x20faa8u: goto label_20faa8;
        case 0x20faacu: goto label_20faac;
        case 0x20fab0u: goto label_20fab0;
        case 0x20fab4u: goto label_20fab4;
        case 0x20fab8u: goto label_20fab8;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fac0u: goto label_20fac0;
        case 0x20fac4u: goto label_20fac4;
        case 0x20fac8u: goto label_20fac8;
        case 0x20faccu: goto label_20facc;
        case 0x20fad0u: goto label_20fad0;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fad8u: goto label_20fad8;
        case 0x20fadcu: goto label_20fadc;
        case 0x20fae0u: goto label_20fae0;
        case 0x20fae4u: goto label_20fae4;
        case 0x20fae8u: goto label_20fae8;
        case 0x20faecu: goto label_20faec;
        case 0x20faf0u: goto label_20faf0;
        case 0x20faf4u: goto label_20faf4;
        case 0x20faf8u: goto label_20faf8;
        case 0x20fafcu: goto label_20fafc;
        case 0x20fb00u: goto label_20fb00;
        case 0x20fb04u: goto label_20fb04;
        case 0x20fb08u: goto label_20fb08;
        case 0x20fb0cu: goto label_20fb0c;
        case 0x20fb10u: goto label_20fb10;
        case 0x20fb14u: goto label_20fb14;
        case 0x20fb18u: goto label_20fb18;
        case 0x20fb1cu: goto label_20fb1c;
        case 0x20fb20u: goto label_20fb20;
        case 0x20fb24u: goto label_20fb24;
        case 0x20fb28u: goto label_20fb28;
        case 0x20fb2cu: goto label_20fb2c;
        case 0x20fb30u: goto label_20fb30;
        case 0x20fb34u: goto label_20fb34;
        case 0x20fb38u: goto label_20fb38;
        case 0x20fb3cu: goto label_20fb3c;
        case 0x20fb40u: goto label_20fb40;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb48u: goto label_20fb48;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb50u: goto label_20fb50;
        case 0x20fb54u: goto label_20fb54;
        case 0x20fb58u: goto label_20fb58;
        case 0x20fb5cu: goto label_20fb5c;
        case 0x20fb60u: goto label_20fb60;
        case 0x20fb64u: goto label_20fb64;
        case 0x20fb68u: goto label_20fb68;
        case 0x20fb6cu: goto label_20fb6c;
        case 0x20fb70u: goto label_20fb70;
        case 0x20fb74u: goto label_20fb74;
        case 0x20fb78u: goto label_20fb78;
        case 0x20fb7cu: goto label_20fb7c;
        case 0x20fb80u: goto label_20fb80;
        case 0x20fb84u: goto label_20fb84;
        case 0x20fb88u: goto label_20fb88;
        case 0x20fb8cu: goto label_20fb8c;
        case 0x20fb90u: goto label_20fb90;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fb98u: goto label_20fb98;
        case 0x20fb9cu: goto label_20fb9c;
        case 0x20fba0u: goto label_20fba0;
        case 0x20fba4u: goto label_20fba4;
        case 0x20fba8u: goto label_20fba8;
        case 0x20fbacu: goto label_20fbac;
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbb4u: goto label_20fbb4;
        case 0x20fbb8u: goto label_20fbb8;
        case 0x20fbbcu: goto label_20fbbc;
        default: break;
    }

    ctx->pc = 0x20e6f8u;

label_20e6f8:
    // 0x20e6f8: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x20e6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_20e6fc:
    // 0x20e6fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20e700:
    // 0x20e700: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x20e700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
label_20e704:
    // 0x20e704: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x20e704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
label_20e708:
    // 0x20e708: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x20e708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
label_20e70c:
    // 0x20e70c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20e70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e710:
    // 0x20e710: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x20e710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
label_20e714:
    // 0x20e714: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x20e714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
label_20e718:
    // 0x20e718: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x20e718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
label_20e71c:
    // 0x20e71c: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x20e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
label_20e720:
    // 0x20e720: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x20e720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
label_20e724:
    // 0x20e724: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x20e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
label_20e728:
    // 0x20e728: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x20e728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_20e72c:
    // 0x20e72c: 0xe7b70238  swc1        $f23, 0x238($sp)
    ctx->pc = 0x20e72cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_20e730:
    // 0x20e730: 0xe7b60230  swc1        $f22, 0x230($sp)
    ctx->pc = 0x20e730u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_20e734:
    // 0x20e734: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x20e734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_20e738:
    // 0x20e738: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x20e738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_20e73c:
    // 0x20e73c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x20e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_20e740:
    // 0x20e740: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20e740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20e744:
    // 0x20e744: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20e744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20e748:
    // 0x20e748: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x20e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_20e74c:
    // 0x20e74c: 0xc0e409a  jal         func_390268
label_20e750:
    if (ctx->pc == 0x20E750u) {
        ctx->pc = 0x20E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E74Cu;
        // 0x20e750: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E754u;
        goto label_20e754;
    }
    ctx->pc = 0x20E74Cu;
    SET_GPR_U32(ctx, 31, 0x20E754u);
    ctx->pc = 0x20E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E74Cu;
    // 0x20e750: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x20E74Cu, 0x20E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E754u;
label_20e754:
    // 0x20e754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e758:
    // 0x20e758: 0xc089b98  jal         func_226E60
label_20e75c:
    if (ctx->pc == 0x20E75Cu) {
        ctx->pc = 0x20E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E758u;
        // 0x20e75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E760u;
        goto label_20e760;
    }
    ctx->pc = 0x20E758u;
    SET_GPR_U32(ctx, 31, 0x20E760u);
    ctx->pc = 0x20E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E758u;
    // 0x20e75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x20E758u, 0x20E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E760u;
label_20e760:
    // 0x20e760: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x20e760u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e764:
    // 0x20e764: 0x12e002bd  beqz        $s7, . + 4 + (0x2BD << 2)
label_20e768:
    if (ctx->pc == 0x20E768u) {
        ctx->pc = 0x20E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E764u;
        // 0x20e768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E76Cu;
        goto label_20e76c;
    }
    ctx->pc = 0x20E764u;
    {
        const bool branch_taken_0x20e764 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E764u;
        // 0x20e768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e764) {
            ctx->pc = 0x20F25Cu;
            goto label_20f25c;
        }
    }
    ctx->pc = 0x20E76Cu;
label_20e76c:
    // 0x20e76c: 0xc088aa4  jal         func_222A90
label_20e770:
    if (ctx->pc == 0x20E770u) {
        ctx->pc = 0x20E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E76Cu;
        // 0x20e770: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E774u;
        goto label_20e774;
    }
    ctx->pc = 0x20E76Cu;
    SET_GPR_U32(ctx, 31, 0x20E774u);
    ctx->pc = 0x20E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E76Cu;
    // 0x20e770: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x20E76Cu, 0x20E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E774u;
label_20e774:
    // 0x20e774: 0x144002ba  bnez        $v0, . + 4 + (0x2BA << 2)
label_20e778:
    if (ctx->pc == 0x20E778u) {
        ctx->pc = 0x20E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E774u;
        // 0x20e778: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E77Cu;
        goto label_20e77c;
    }
    ctx->pc = 0x20E774u;
    {
        const bool branch_taken_0x20e774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E774u;
        // 0x20e778: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e774) {
            ctx->pc = 0x20F260u;
            goto label_20f260;
        }
    }
    ctx->pc = 0x20E77Cu;
label_20e77c:
    // 0x20e77c: 0xc089f76  jal         func_227DD8
label_20e780:
    if (ctx->pc == 0x20E780u) {
        ctx->pc = 0x20E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E77Cu;
        // 0x20e780: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E784u;
        goto label_20e784;
    }
    ctx->pc = 0x20E77Cu;
    SET_GPR_U32(ctx, 31, 0x20E784u);
    ctx->pc = 0x20E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E77Cu;
    // 0x20e780: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x20E77Cu, 0x20E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E784u;
label_20e784:
    // 0x20e784: 0x144002b6  bnez        $v0, . + 4 + (0x2B6 << 2)
label_20e788:
    if (ctx->pc == 0x20E788u) {
        ctx->pc = 0x20E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E784u;
        // 0x20e788: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E78Cu;
        goto label_20e78c;
    }
    ctx->pc = 0x20E784u;
    {
        const bool branch_taken_0x20e784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E784u;
        // 0x20e788: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e784) {
            ctx->pc = 0x20F260u;
            goto label_20f260;
        }
    }
    ctx->pc = 0x20E78Cu;
label_20e78c:
    // 0x20e78c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20e790:
    // 0x20e790: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20e790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e794:
    // 0x20e794: 0x2456f248  addiu       $s6, $v0, -0xDB8
    ctx->pc = 0x20e794u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963784));
label_20e798:
    // 0x20e798: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20e798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e79c:
    // 0x20e79c: 0x24150d00  addiu       $s5, $zero, 0xD00
    ctx->pc = 0x20e79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20e7a0:
    // 0x20e7a0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20e7a4:
    // 0x20e7a4: 0x0  nop
    ctx->pc = 0x20e7a4u;
    // NOP
label_20e7a8:
    // 0x20e7a8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_20e7ac:
    if (ctx->pc == 0x20E7ACu) {
        ctx->pc = 0x20E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7A8u;
        // 0x20e7ac: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7B0u;
        goto label_20e7b0;
    }
    ctx->pc = 0x20E7A8u;
    {
        const bool branch_taken_0x20e7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7A8u;
        // 0x20e7ac: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7a8) {
            ctx->pc = 0x20E7F4u;
            goto label_20e7f4;
        }
    }
    ctx->pc = 0x20E7B0u;
label_20e7b0:
    // 0x20e7b0: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x20e7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20e7b4:
    // 0x20e7b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20e7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e7b8:
    // 0x20e7b8: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x20e7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20e7bc:
    // 0x20e7bc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x20e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20e7c0:
    // 0x20e7c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20e7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20e7c4:
    // 0x20e7c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x20e7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_20e7c8:
    // 0x20e7c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x20e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20e7cc:
    // 0x20e7cc: 0x40f809  jalr        $v0
label_20e7d0:
    if (ctx->pc == 0x20E7D0u) {
        ctx->pc = 0x20E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7CCu;
        // 0x20e7d0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7D4u;
        goto label_20e7d4;
    }
    ctx->pc = 0x20E7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E7D4u);
        ctx->pc = 0x20E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7CCu;
        // 0x20e7d0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E7CCu, 0x20E7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E7D4u;
label_20e7d4:
    // 0x20e7d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e7d8:
    // 0x20e7d8: 0x2e240002  sltiu       $a0, $s1, 0x2
    ctx->pc = 0x20e7d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20e7dc:
    // 0x20e7dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_20e7e0:
    if (ctx->pc == 0x20E7E0u) {
        ctx->pc = 0x20E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7DCu;
        // 0x20e7e0: 0x26100680  addiu       $s0, $s0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7E4u;
        goto label_20e7e4;
    }
    ctx->pc = 0x20E7DCu;
    {
        const bool branch_taken_0x20e7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7DCu;
        // 0x20e7e0: 0x26100680  addiu       $s0, $s0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7dc) {
            ctx->pc = 0x20E7ECu;
            goto label_20e7ec;
        }
    }
    ctx->pc = 0x20E7E4u;
label_20e7e4:
    // 0x20e7e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_20e7e8:
    if (ctx->pc == 0x20E7E8u) {
        ctx->pc = 0x20E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7E4u;
        // 0x20e7e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7ECu;
        goto label_20e7ec;
    }
    ctx->pc = 0x20E7E4u;
    {
        const bool branch_taken_0x20e7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7E4u;
        // 0x20e7e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7e4) {
            ctx->pc = 0x20E7F4u;
            goto label_20e7f4;
        }
    }
    ctx->pc = 0x20E7ECu;
label_20e7ec:
    // 0x20e7ec: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
label_20e7f0:
    if (ctx->pc == 0x20E7F0u) {
        ctx->pc = 0x20E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7ECu;
        // 0x20e7f0: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7F4u;
        goto label_20e7f4;
    }
    ctx->pc = 0x20E7ECu;
    {
        const bool branch_taken_0x20e7ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e7ec) {
            ctx->pc = 0x20E7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E7ECu;
            // 0x20e7f0: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e7c0;
        }
    }
    ctx->pc = 0x20E7F4u;
label_20e7f4:
    // 0x20e7f4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x20e7f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e7f8:
    // 0x20e7f8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x20e7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_20e7fc:
    // 0x20e7fc: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_20e800:
    if (ctx->pc == 0x20E800u) {
        ctx->pc = 0x20E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7FCu;
        // 0x20e800: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E804u;
        goto label_20e804;
    }
    ctx->pc = 0x20E7FCu;
    {
        const bool branch_taken_0x20e7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e7fc) {
            ctx->pc = 0x20E800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E7FCu;
            // 0x20e800: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e7a8;
        }
    }
    ctx->pc = 0x20E804u;
label_20e804:
    // 0x20e804: 0x16600296  bnez        $s3, . + 4 + (0x296 << 2)
label_20e808:
    if (ctx->pc == 0x20E808u) {
        ctx->pc = 0x20E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E804u;
        // 0x20e808: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E80Cu;
        goto label_20e80c;
    }
    ctx->pc = 0x20E804u;
    {
        const bool branch_taken_0x20e804 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E804u;
        // 0x20e808: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e804) {
            ctx->pc = 0x20F260u;
            goto label_20f260;
        }
    }
    ctx->pc = 0x20E80Cu;
label_20e80c:
    // 0x20e80c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x20e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20e810:
    // 0x20e810: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20e810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20e814:
    // 0x20e814: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20e818:
    // 0x20e818: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x20e818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
label_20e81c:
    // 0x20e81c: 0xafa40174  sw          $a0, 0x174($sp)
    ctx->pc = 0x20e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 4));
label_20e820:
    // 0x20e820: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x20e820u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e824:
    // 0x20e824: 0x2456f240  addiu       $s6, $v0, -0xDC0
    ctx->pc = 0x20e824u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_20e828:
    // 0x20e828: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e82c:
    // 0x20e82c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x20e82cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e830:
    // 0x20e830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20e830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e834:
    // 0x20e834: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20e834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e838:
    // 0x20e838: 0x8e900040  lw          $s0, 0x40($s4)
    ctx->pc = 0x20e838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20e83c:
    // 0x20e83c: 0x0  nop
    ctx->pc = 0x20e83cu;
    // NOP
label_20e840:
    // 0x20e840: 0x24020d00  addiu       $v0, $zero, 0xD00
    ctx->pc = 0x20e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20e844:
    // 0x20e844: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x20e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20e848:
    // 0x20e848: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x20e848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20e84c:
    // 0x20e84c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x20e84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_20e850:
    // 0x20e850: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x20e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_20e854:
    // 0x20e854: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x20e854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20e858:
    // 0x20e858: 0x2162821  addu        $a1, $s0, $s6
    ctx->pc = 0x20e858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_20e85c:
    // 0x20e85c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x20e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20e860:
    // 0x20e860: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20e864:
    // 0x20e864: 0x26520680  addiu       $s2, $s2, 0x680
    ctx->pc = 0x20e864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1664));
label_20e868:
    // 0x20e868: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x20e868u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_20e86c:
    // 0x20e86c: 0x40f809  jalr        $v0
label_20e870:
    if (ctx->pc == 0x20E870u) {
        ctx->pc = 0x20E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E86Cu;
        // 0x20e870: 0x223a80a  movz        $s5, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E874u;
        goto label_20e874;
    }
    ctx->pc = 0x20E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E874u);
        ctx->pc = 0x20E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E86Cu;
        // 0x20e870: 0x223a80a  movz        $s5, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E86Cu, 0x20E874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E874u;
label_20e874:
    // 0x20e874: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20e874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20e878:
    // 0x20e878: 0x2463f248  addiu       $v1, $v1, -0xDB8
    ctx->pc = 0x20e878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963784));
label_20e87c:
    // 0x20e87c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20e87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20e880:
    // 0x20e880: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e884:
    // 0x20e884: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x20e884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_20e888:
    // 0x20e888: 0x223980a  movz        $s3, $s1, $v1
    ctx->pc = 0x20e888u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
label_20e88c:
    // 0x20e88c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20e890:
    // 0x20e890: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x20e890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20e894:
    // 0x20e894: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_20e898:
    if (ctx->pc == 0x20E898u) {
        ctx->pc = 0x20E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E894u;
        // 0x20e898: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E89Cu;
        goto label_20e89c;
    }
    ctx->pc = 0x20E894u;
    {
        const bool branch_taken_0x20e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e894) {
            ctx->pc = 0x20E898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E894u;
            // 0x20e898: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e840;
        }
    }
    ctx->pc = 0x20E89Cu;
label_20e89c:
    // 0x20e89c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e8a0:
    // 0x20e8a0: 0x52620005  beql        $s3, $v0, . + 4 + (0x5 << 2)
label_20e8a4:
    if (ctx->pc == 0x20E8A4u) {
        ctx->pc = 0x20E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A0u;
        // 0x20e8a4: 0x151027  nor         $v0, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8A8u;
        goto label_20e8a8;
    }
    ctx->pc = 0x20E8A0u;
    {
        const bool branch_taken_0x20e8a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20e8a0) {
            ctx->pc = 0x20E8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E8A0u;
            // 0x20e8a4: 0x151027  nor         $v0, $zero, $s5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E8B8u;
            goto label_20e8b8;
        }
    }
    ctx->pc = 0x20E8A8u;
label_20e8a8:
    // 0x20e8a8: 0x16a20016  bne         $s5, $v0, . + 4 + (0x16 << 2)
label_20e8ac:
    if (ctx->pc == 0x20E8ACu) {
        ctx->pc = 0x20E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A8u;
        // 0x20e8ac: 0x2b3102a  slt         $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8B0u;
        goto label_20e8b0;
    }
    ctx->pc = 0x20E8A8u;
    {
        const bool branch_taken_0x20e8a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A8u;
        // 0x20e8ac: 0x2b3102a  slt         $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a8) {
            ctx->pc = 0x20E904u;
            goto label_20e904;
        }
    }
    ctx->pc = 0x20E8B0u;
label_20e8b0:
    // 0x20e8b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_20e8b4:
    if (ctx->pc == 0x20E8B4u) {
        ctx->pc = 0x20E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B0u;
        // 0x20e8b4: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8B8u;
        goto label_20e8b8;
    }
    ctx->pc = 0x20E8B0u;
    {
        const bool branch_taken_0x20e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B0u;
        // 0x20e8b4: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8b0) {
            ctx->pc = 0x20E940u;
            goto label_20e940;
        }
    }
    ctx->pc = 0x20E8B8u;
label_20e8b8:
    // 0x20e8b8: 0x10000021  b           . + 4 + (0x21 << 2)
label_20e8bc:
    if (ctx->pc == 0x20E8BCu) {
        ctx->pc = 0x20E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B8u;
        // 0x20e8bc: 0x2a2f00b  movn        $fp, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8C0u;
        goto label_20e8c0;
    }
    ctx->pc = 0x20E8B8u;
    {
        const bool branch_taken_0x20e8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8B8u;
        // 0x20e8bc: 0x2a2f00b  movn        $fp, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8b8) {
            ctx->pc = 0x20E940u;
            goto label_20e940;
        }
    }
    ctx->pc = 0x20E8C0u;
label_20e8c0:
    // 0x20e8c0: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20e8c4:
    // 0x20e8c4: 0x24030680  addiu       $v1, $zero, 0x680
    ctx->pc = 0x20e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20e8c8:
    // 0x20e8c8: 0x24020d00  addiu       $v0, $zero, 0xD00
    ctx->pc = 0x20e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20e8cc:
    // 0x20e8cc: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x20e8ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20e8d0:
    // 0x20e8d0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x20e8d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20e8d4:
    // 0x20e8d4: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20e8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20e8d8:
    // 0x20e8d8: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x20e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_20e8dc:
    // 0x20e8dc: 0x24e6f240  addiu       $a2, $a3, -0xDC0
    ctx->pc = 0x20e8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963776));
label_20e8e0:
    // 0x20e8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e8e4:
    // 0x20e8e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20e8e8:
    // 0x20e8e8: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x20e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
label_20e8ec:
    // 0x20e8ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20e8f0:
    // 0x20e8f0: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x20e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_20e8f4:
    // 0x20e8f4: 0xc068a44  jal         func_1A2910
label_20e8f8:
    if (ctx->pc == 0x20E8F8u) {
        ctx->pc = 0x20E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8F4u;
        // 0x20e8f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8FCu;
        goto label_20e8fc;
    }
    ctx->pc = 0x20E8F4u;
    SET_GPR_U32(ctx, 31, 0x20E8FCu);
    ctx->pc = 0x20E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8F4u;
    // 0x20e8f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x20E8F4u, 0x20E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8FCu;
label_20e8fc:
    // 0x20e8fc: 0x10000060  b           . + 4 + (0x60 << 2)
label_20e900:
    if (ctx->pc == 0x20E900u) {
        ctx->pc = 0x20E904u;
        goto label_20e904;
    }
    ctx->pc = 0x20E8FCu;
    {
        const bool branch_taken_0x20e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e8fc) {
            ctx->pc = 0x20EA80u;
            goto label_20ea80;
        }
    }
    ctx->pc = 0x20E904u;
label_20e904:
    // 0x20e904: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_20e908:
    if (ctx->pc == 0x20E908u) {
        ctx->pc = 0x20E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E904u;
        // 0x20e908: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E90Cu;
        goto label_20e90c;
    }
    ctx->pc = 0x20E904u;
    {
        const bool branch_taken_0x20e904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E904u;
        // 0x20e908: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e904) {
            ctx->pc = 0x20E940u;
            goto label_20e940;
        }
    }
    ctx->pc = 0x20E90Cu;
label_20e90c:
    // 0x20e90c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20e910:
    // 0x20e910: 0x24030d00  addiu       $v1, $zero, 0xD00
    ctx->pc = 0x20e910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20e914:
    // 0x20e914: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x20e914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20e918:
    // 0x20e918: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x20e918u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20e91c:
    // 0x20e91c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x20e91cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20e920:
    // 0x20e920: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x20e920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20e924:
    // 0x20e924: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20e924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20e928:
    // 0x20e928: 0x2465f240  addiu       $a1, $v1, -0xDC0
    ctx->pc = 0x20e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
label_20e92c:
    // 0x20e92c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x20e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_20e930:
    // 0x20e930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20e934:
    // 0x20e934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20e934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_20e938:
    // 0x20e938: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20e938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20e93c:
    // 0x20e93c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_20e940:
    // 0x20e940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e944:
    // 0x20e944: 0x17c20015  bne         $fp, $v0, . + 4 + (0x15 << 2)
label_20e948:
    if (ctx->pc == 0x20E948u) {
        ctx->pc = 0x20E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E944u;
        // 0x20e948: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E94Cu;
        goto label_20e94c;
    }
    ctx->pc = 0x20E944u;
    {
        const bool branch_taken_0x20e944 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E944u;
        // 0x20e948: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e944) {
            ctx->pc = 0x20E99Cu;
            goto label_20e99c;
        }
    }
    ctx->pc = 0x20E94Cu;
label_20e94c:
    // 0x20e94c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20e950:
    // 0x20e950: 0x24030d00  addiu       $v1, $zero, 0xD00
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20e954:
    // 0x20e954: 0x24a4f240  addiu       $a0, $a1, -0xDC0
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
label_20e958:
    // 0x20e958: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x20e958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20e95c:
    // 0x20e95c: 0x2032818  mult        $a1, $s0, $v1
    ctx->pc = 0x20e95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_20e960:
    // 0x20e960: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x20e960u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e964:
    // 0x20e964: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20e968:
    // 0x20e968: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x20e968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20e96c:
    // 0x20e96c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e970:
    // 0x20e970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e974:
    // 0x20e974: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20e974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20e978:
    // 0x20e978: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x20e978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20e97c:
    // 0x20e97c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20e980:
    if (ctx->pc == 0x20E980u) {
        ctx->pc = 0x20E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E97Cu;
        // 0x20e980: 0x24c60680  addiu       $a2, $a2, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E984u;
        goto label_20e984;
    }
    ctx->pc = 0x20E97Cu;
    {
        const bool branch_taken_0x20e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E97Cu;
        // 0x20e980: 0x24c60680  addiu       $a2, $a2, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e97c) {
            ctx->pc = 0x20E98Cu;
            goto label_20e98c;
        }
    }
    ctx->pc = 0x20E984u;
label_20e984:
    // 0x20e984: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20e984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20e988:
    // 0x20e988: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x20e988u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e98c:
    // 0x20e98c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20e990:
    // 0x20e990: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x20e990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20e994:
    // 0x20e994: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_20e998:
    if (ctx->pc == 0x20E998u) {
        ctx->pc = 0x20E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E994u;
        // 0x20e998: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E99Cu;
        goto label_20e99c;
    }
    ctx->pc = 0x20E994u;
    {
        const bool branch_taken_0x20e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e994) {
            ctx->pc = 0x20E998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E994u;
            // 0x20e998: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e978;
        }
    }
    ctx->pc = 0x20E99Cu;
label_20e99c:
    // 0x20e99c: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x20e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20e9a0:
    // 0x20e9a0: 0x24130d00  addiu       $s3, $zero, 0xD00
    ctx->pc = 0x20e9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20e9a4:
    // 0x20e9a4: 0x3c28818  mult        $s1, $fp, $v0
    ctx->pc = 0x20e9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_20e9a8:
    // 0x20e9a8: 0x2138018  mult        $s0, $s0, $s3
    ctx->pc = 0x20e9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_20e9ac:
    // 0x20e9ac: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x20e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20e9b0:
    // 0x20e9b0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20e9b4:
    // 0x20e9b4: 0x2452f248  addiu       $s2, $v0, -0xDB8
    ctx->pc = 0x20e9b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963784));
label_20e9b8:
    // 0x20e9b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20e9bc:
    // 0x20e9bc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x20e9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_20e9c0:
    // 0x20e9c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x20e9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_20e9c4:
    // 0x20e9c4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x20e9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_20e9c8:
    // 0x20e9c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20e9cc:
    // 0x20e9cc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_20e9d0:
    // 0x20e9d0: 0x40f809  jalr        $v0
label_20e9d4:
    if (ctx->pc == 0x20E9D4u) {
        ctx->pc = 0x20E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9D0u;
        // 0x20e9d4: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9D8u;
        goto label_20e9d8;
    }
    ctx->pc = 0x20E9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E9D8u);
        ctx->pc = 0x20E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9D0u;
        // 0x20e9d4: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E9D0u, 0x20E9D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E9D8u;
label_20e9d8:
    // 0x20e9d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20e9dc:
    // 0x20e9dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20e9e0:
    // 0x20e9e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_20e9e4:
    // 0x20e9e4: 0x2462f6a0  addiu       $v0, $v1, -0x960
    ctx->pc = 0x20e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964896));
label_20e9e8:
    // 0x20e9e8: 0x449e1000  mtc1        $fp, $f2
    ctx->pc = 0x20e9e8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e9ec:
    // 0x20e9ec: 0x0  nop
    ctx->pc = 0x20e9ecu;
    // NOP
label_20e9f0:
    // 0x20e9f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20e9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_20e9f4:
    // 0x20e9f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20e9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20e9f8:
    // 0x20e9f8: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20e9fc:
    // 0x20e9fc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_20ea00:
    // 0x20ea00: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_20ea04:
    // 0x20ea04: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20ea08:
    // 0x20ea08: 0xe7b6000c  swc1        $f22, 0xC($sp)
    ctx->pc = 0x20ea08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_20ea0c:
    // 0x20ea0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ea10:
    // 0x20ea10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20ea10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20ea14:
    // 0x20ea14: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x20ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
label_20ea18:
    // 0x20ea18: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x20ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ea1c:
    // 0x20ea1c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x20ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ea20:
    // 0x20ea20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20ea20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20ea24:
    // 0x20ea24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20ea24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20ea28:
    // 0x20ea28: 0xc088f88  jal         func_223E20
label_20ea2c:
    if (ctx->pc == 0x20EA2Cu) {
        ctx->pc = 0x20EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA28u;
        // 0x20ea2c: 0xe6810020  swc1        $f1, 0x20($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA30u;
        goto label_20ea30;
    }
    ctx->pc = 0x20EA28u;
    SET_GPR_U32(ctx, 31, 0x20EA30u);
    ctx->pc = 0x20EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA28u;
    // 0x20ea2c: 0xe6810020  swc1        $f1, 0x20($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x20EA28u, 0x20EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA30u;
label_20ea30:
    // 0x20ea30: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
label_20ea34:
    if (ctx->pc == 0x20EA34u) {
        ctx->pc = 0x20EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA30u;
        // 0x20ea34: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA38u;
        goto label_20ea38;
    }
    ctx->pc = 0x20EA30u;
    {
        const bool branch_taken_0x20ea30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA30u;
        // 0x20ea34: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea30) {
            ctx->pc = 0x20EE2Cu;
            goto label_20ee2c;
        }
    }
    ctx->pc = 0x20EA38u;
label_20ea38:
    // 0x20ea38: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x20ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_20ea3c:
    // 0x20ea3c: 0xafa40178  sw          $a0, 0x178($sp)
    ctx->pc = 0x20ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 4));
label_20ea40:
    // 0x20ea40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20ea40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ea44:
    // 0x20ea44: 0x26900044  addiu       $s0, $s4, 0x44
    ctx->pc = 0x20ea44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
label_20ea48:
    // 0x20ea48: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x20ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20ea4c:
    // 0x20ea4c: 0x0  nop
    ctx->pc = 0x20ea4cu;
    // NOP
label_20ea50:
    // 0x20ea50: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x20ea50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_20ea54:
    // 0x20ea54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x20ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20ea58:
    // 0x20ea58: 0x40f809  jalr        $v0
label_20ea5c:
    if (ctx->pc == 0x20EA5Cu) {
        ctx->pc = 0x20EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA58u;
        // 0x20ea5c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA60u;
        goto label_20ea60;
    }
    ctx->pc = 0x20EA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EA60u);
        ctx->pc = 0x20EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA58u;
        // 0x20ea5c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EA58u, 0x20EA60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EA60u;
label_20ea60:
    // 0x20ea60: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x20ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_20ea64:
    // 0x20ea64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ea68:
    // 0x20ea68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20ea68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20ea6c:
    // 0x20ea6c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x20ea6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_20ea70:
    // 0x20ea70: 0x1043ff93  beq         $v0, $v1, . + 4 + (-0x6D << 2)
label_20ea74:
    if (ctx->pc == 0x20EA74u) {
        ctx->pc = 0x20EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA70u;
        // 0x20ea74: 0x2e240006  sltiu       $a0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA78u;
        goto label_20ea78;
    }
    ctx->pc = 0x20EA70u;
    {
        const bool branch_taken_0x20ea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA70u;
        // 0x20ea74: 0x2e240006  sltiu       $a0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea70) {
            ctx->pc = 0x20E8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e8c0;
        }
    }
    ctx->pc = 0x20EA78u;
label_20ea78:
    // 0x20ea78: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
label_20ea7c:
    if (ctx->pc == 0x20EA7Cu) {
        ctx->pc = 0x20EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA78u;
        // 0x20ea7c: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA80u;
        goto label_20ea80;
    }
    ctx->pc = 0x20EA78u;
    {
        const bool branch_taken_0x20ea78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ea78) {
            ctx->pc = 0x20EA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EA78u;
            // 0x20ea7c: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ea50;
        }
    }
    ctx->pc = 0x20EA80u;
label_20ea80:
    // 0x20ea80: 0xc088bbc  jal         func_222EF0
label_20ea84:
    if (ctx->pc == 0x20EA84u) {
        ctx->pc = 0x20EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA80u;
        // 0x20ea84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA88u;
        goto label_20ea88;
    }
    ctx->pc = 0x20EA80u;
    SET_GPR_U32(ctx, 31, 0x20EA88u);
    ctx->pc = 0x20EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA80u;
    // 0x20ea84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x20EA80u, 0x20EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA88u;
label_20ea88:
    // 0x20ea88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20ea88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ea8c:
    // 0x20ea8c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x20ea8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_20ea90:
    // 0x20ea90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20ea90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20ea94:
    // 0x20ea94: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x20ea94u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_20ea98:
    // 0x20ea98: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x20ea98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_20ea9c:
    // 0x20ea9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20ea9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20eaa0:
    // 0x20eaa0: 0x0  nop
    ctx->pc = 0x20eaa0u;
    // NOP
label_20eaa4:
    // 0x20eaa4: 0x46020069  min.s       $f1, $f0, $f2
    ctx->pc = 0x20eaa4u;
    ctx->f[1] = std::min(ctx->f[0], ctx->f[2]);
label_20eaa8:
    // 0x20eaa8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x20eaa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20eaac:
    // 0x20eaac: 0x0  nop
    ctx->pc = 0x20eaacu;
    // NOP
label_20eab0:
    // 0x20eab0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_20eab4:
    if (ctx->pc == 0x20EAB4u) {
        ctx->pc = 0x20EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAB0u;
        // 0x20eab4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAB8u;
        goto label_20eab8;
    }
    ctx->pc = 0x20EAB0u;
    {
        const bool branch_taken_0x20eab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAB0u;
        // 0x20eab4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eab0) {
            ctx->pc = 0x20EB48u;
            goto label_20eb48;
        }
    }
    ctx->pc = 0x20EAB8u;
label_20eab8:
    // 0x20eab8: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20eabc:
    // 0x20eabc: 0xa3a40130  sb          $a0, 0x130($sp)
    ctx->pc = 0x20eabcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 4));
label_20eac0:
    // 0x20eac0: 0x240a0d00  addiu       $t2, $zero, 0xD00
    ctx->pc = 0x20eac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20eac4:
    // 0x20eac4: 0x24060680  addiu       $a2, $zero, 0x680
    ctx->pc = 0x20eac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20eac8:
    // 0x20eac8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x20eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_20eacc:
    // 0x20eacc: 0x3c63018  mult        $a2, $fp, $a2
    ctx->pc = 0x20eaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_20ead0:
    // 0x20ead0: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x20ead0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20ead4:
    // 0x20ead4: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x20ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_20ead8:
    // 0x20ead8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x20ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_20eadc:
    // 0x20eadc: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x20eadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20eae0:
    // 0x20eae0: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x20eae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_20eae4:
    // 0x20eae4: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x20eae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_20eae8:
    // 0x20eae8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x20eae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20eaec:
    // 0x20eaec: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x20eaecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
label_20eaf0:
    // 0x20eaf0: 0x27a40134  addiu       $a0, $sp, 0x134
    ctx->pc = 0x20eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_20eaf4:
    // 0x20eaf4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20eaf8:
    // 0x20eaf8: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x20eaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20eafc:
    // 0x20eafc: 0x2445f4d0  addiu       $a1, $v0, -0xB30
    ctx->pc = 0x20eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
label_20eb00:
    // 0x20eb00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20eb04:
    // 0x20eb04: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x20eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_20eb08:
    // 0x20eb08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20eb0c:
    // 0x20eb0c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x20eb0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_20eb10:
    // 0x20eb10: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x20eb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
label_20eb14:
    // 0x20eb14: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x20eb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_20eb18:
    // 0x20eb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20eb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eb1c:
    // 0x20eb1c: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x20eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_20eb20:
    // 0x20eb20: 0xa3a70134  sb          $a3, 0x134($sp)
    ctx->pc = 0x20eb20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 308), (uint8_t)GPR_U32(ctx, 7));
label_20eb24:
    // 0x20eb24: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x20eb24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20eb28:
    // 0x20eb28: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20eb2c:
    // 0x20eb2c: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x20eb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
label_20eb30:
    // 0x20eb30: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x20eb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20eb34:
    // 0x20eb34: 0xa0880001  sb          $t0, 0x1($a0)
    ctx->pc = 0x20eb34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 8));
label_20eb38:
    // 0x20eb38: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x20eb38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_20eb3c:
    // 0x20eb3c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x20eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20eb40:
    // 0x20eb40: 0x10000024  b           . + 4 + (0x24 << 2)
label_20eb44:
    if (ctx->pc == 0x20EB44u) {
        ctx->pc = 0x20EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB40u;
        // 0x20eb44: 0x8fa30134  lw          $v1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB48u;
        goto label_20eb48;
    }
    ctx->pc = 0x20EB40u;
    {
        const bool branch_taken_0x20eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB40u;
        // 0x20eb44: 0x8fa30134  lw          $v1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb40) {
            ctx->pc = 0x20EBD4u;
            goto label_20ebd4;
        }
    }
    ctx->pc = 0x20EB48u;
label_20eb48:
    // 0x20eb48: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x20eb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_20eb4c:
    // 0x20eb4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20eb4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eb50:
    // 0x20eb50: 0x0  nop
    ctx->pc = 0x20eb50u;
    // NOP
label_20eb54:
    // 0x20eb54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20eb54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20eb58:
    // 0x20eb58: 0x0  nop
    ctx->pc = 0x20eb58u;
    // NOP
label_20eb5c:
    // 0x20eb5c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_20eb60:
    if (ctx->pc == 0x20EB60u) {
        ctx->pc = 0x20EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB5Cu;
        // 0x20eb60: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB64u;
        goto label_20eb64;
    }
    ctx->pc = 0x20EB5Cu;
    {
        const bool branch_taken_0x20eb5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB5Cu;
        // 0x20eb60: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb5c) {
            ctx->pc = 0x20EBE0u;
            goto label_20ebe0;
        }
    }
    ctx->pc = 0x20EB64u;
label_20eb64:
    // 0x20eb64: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20eb68:
    // 0x20eb68: 0xa3a20138  sb          $v0, 0x138($sp)
    ctx->pc = 0x20eb68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 312), (uint8_t)GPR_U32(ctx, 2));
label_20eb6c:
    // 0x20eb6c: 0x24080d00  addiu       $t0, $zero, 0xD00
    ctx->pc = 0x20eb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20eb70:
    // 0x20eb70: 0x24070680  addiu       $a3, $zero, 0x680
    ctx->pc = 0x20eb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20eb74:
    // 0x20eb74: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x20eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_20eb78:
    // 0x20eb78: 0x3c73818  mult        $a3, $fp, $a3
    ctx->pc = 0x20eb78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_20eb7c:
    // 0x20eb7c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x20eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20eb80:
    // 0x20eb80: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x20eb80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20eb84:
    // 0x20eb84: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x20eb84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_20eb88:
    // 0x20eb88: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x20eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20eb8c:
    // 0x20eb8c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x20eb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_20eb90:
    // 0x20eb90: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x20eb90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
label_20eb94:
    // 0x20eb94: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20eb98:
    // 0x20eb98: 0x2445f4d0  addiu       $a1, $v0, -0xB30
    ctx->pc = 0x20eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
label_20eb9c:
    // 0x20eb9c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_20eba0:
    // 0x20eba0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x20eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_20eba4:
    // 0x20eba4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_20eba8:
    // 0x20eba8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20ebac:
    // 0x20ebac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20ebacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20ebb0:
    // 0x20ebb0: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x20ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_20ebb4:
    // 0x20ebb4: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x20ebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
label_20ebb8:
    // 0x20ebb8: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x20ebb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_20ebbc:
    // 0x20ebbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ebbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ebc0:
    // 0x20ebc0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ebc4:
    // 0x20ebc4: 0x8c83f220  lw          $v1, -0xDE0($a0)
    ctx->pc = 0x20ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963744)));
label_20ebc8:
    // 0x20ebc8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x20ebc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20ebcc:
    // 0x20ebcc: 0x482018  mult        $a0, $v0, $t0
    ctx->pc = 0x20ebccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20ebd0:
    // 0x20ebd0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x20ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_20ebd4:
    // 0x20ebd4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x20ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20ebd8:
    // 0x20ebd8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_20ebdc:
    if (ctx->pc == 0x20EBDCu) {
        ctx->pc = 0x20EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD8u;
        // 0x20ebdc: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBE0u;
        goto label_20ebe0;
    }
    ctx->pc = 0x20EBD8u;
    {
        const bool branch_taken_0x20ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD8u;
        // 0x20ebdc: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebd8) {
            ctx->pc = 0x20EC50u;
            goto label_20ec50;
        }
    }
    ctx->pc = 0x20EBE0u;
label_20ebe0:
    // 0x20ebe0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ebe4:
    // 0x20ebe4: 0x24090d00  addiu       $t1, $zero, 0xD00
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20ebe8:
    // 0x20ebe8: 0x24060680  addiu       $a2, $zero, 0x680
    ctx->pc = 0x20ebe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20ebec:
    // 0x20ebec: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20ebf0:
    // 0x20ebf0: 0x3c63018  mult        $a2, $fp, $a2
    ctx->pc = 0x20ebf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_20ebf4:
    // 0x20ebf4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x20ebf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20ebf8:
    // 0x20ebf8: 0x8c68f220  lw          $t0, -0xDE0($v1)
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963744)));
label_20ebfc:
    // 0x20ebfc: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x20ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_20ec00:
    // 0x20ec00: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20ec04:
    // 0x20ec04: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x20ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_20ec08:
    // 0x20ec08: 0x2467f4d0  addiu       $a3, $v1, -0xB30
    ctx->pc = 0x20ec08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964432));
label_20ec0c:
    // 0x20ec0c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x20ec0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_20ec10:
    // 0x20ec10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ec10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ec14:
    // 0x20ec14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20ec18:
    // 0x20ec18: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x20ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20ec1c:
    // 0x20ec1c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_20ec20:
    // 0x20ec20: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x20ec20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20ec24:
    // 0x20ec24: 0xac480068  sw          $t0, 0x68($v0)
    ctx->pc = 0x20ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 8));
label_20ec28:
    // 0x20ec28: 0xa3a5013c  sb          $a1, 0x13C($sp)
    ctx->pc = 0x20ec28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 5));
label_20ec2c:
    // 0x20ec2c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ec30:
    // 0x20ec30: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x20ec30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_20ec34:
    // 0x20ec34: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x20ec34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20ec38:
    // 0x20ec38: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x20ec38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_20ec3c:
    // 0x20ec3c: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x20ec3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_20ec40:
    // 0x20ec40: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x20ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20ec44:
    // 0x20ec44: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_20ec48:
    // 0x20ec48: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x20ec48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_20ec4c:
    // 0x20ec4c: 0xace30060  sw          $v1, 0x60($a3)
    ctx->pc = 0x20ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 3));
label_20ec50:
    // 0x20ec50: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ec54:
    // 0x20ec54: 0x24100d00  addiu       $s0, $zero, 0xD00
    ctx->pc = 0x20ec54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20ec58:
    // 0x20ec58: 0x24130680  addiu       $s3, $zero, 0x680
    ctx->pc = 0x20ec58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20ec5c:
    // 0x20ec5c: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_20ec60:
    // 0x20ec60: 0x3d39818  mult        $s3, $fp, $s3
    ctx->pc = 0x20ec60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_20ec64:
    // 0x20ec64: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x20ec64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20ec68:
    // 0x20ec68: 0x2652f350  addiu       $s2, $s2, -0xCB0
    ctx->pc = 0x20ec68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964048));
label_20ec6c:
    // 0x20ec6c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x20ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_20ec70:
    // 0x20ec70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ec74:
    // 0x20ec74: 0x2642fef0  addiu       $v0, $s2, -0x110
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967024));
label_20ec78:
    // 0x20ec78: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x20ec78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_20ec7c:
    // 0x20ec7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ec7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ec80:
    // 0x20ec80: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x20ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_20ec84:
    // 0x20ec84: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x20ec84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20ec88:
    // 0x20ec88: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20ec8c:
    // 0x20ec8c: 0x2631f6b0  addiu       $s1, $s1, -0x950
    ctx->pc = 0x20ec8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964912));
label_20ec90:
    // 0x20ec90: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_20ec94:
    // 0x20ec94: 0x2636fff0  addiu       $s6, $s1, -0x10
    ctx->pc = 0x20ec94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_20ec98:
    // 0x20ec98: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ec9c:
    // 0x20ec9c: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x20ec9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_20eca0:
    // 0x20eca0: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x20eca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20eca4:
    // 0x20eca4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_20eca8:
    // 0x20eca8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20ecac:
    // 0x20ecac: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x20ecacu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20ecb0:
    // 0x20ecb0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x20ecb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_20ecb4:
    // 0x20ecb4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x20ecb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_20ecb8:
    // 0x20ecb8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20ecb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20ecbc:
    // 0x20ecbc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20ecbcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_20ecc0:
    // 0x20ecc0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20ecc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_20ecc4:
    // 0x20ecc4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x20ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_20ecc8:
    // 0x20ecc8: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x20ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_20eccc:
    // 0x20eccc: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_20ecd0:
    // 0x20ecd0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x20ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_20ecd4:
    // 0x20ecd4: 0xc068818  jal         func_1A2060
label_20ecd8:
    if (ctx->pc == 0x20ECD8u) {
        ctx->pc = 0x20ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECD4u;
        // 0x20ecd8: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECDCu;
        goto label_20ecdc;
    }
    ctx->pc = 0x20ECD4u;
    SET_GPR_U32(ctx, 31, 0x20ECDCu);
    ctx->pc = 0x20ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECD4u;
    // 0x20ecd8: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x20ECD4u, 0x20ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECDCu;
label_20ecdc:
    // 0x20ecdc: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ece0:
    // 0x20ece0: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_20ece4:
    // 0x20ece4: 0xa3a20140  sb          $v0, 0x140($sp)
    ctx->pc = 0x20ece4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 2));
label_20ece8:
    // 0x20ece8: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x20ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_20ecec:
    // 0x20ecec: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x20ececu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20ecf0:
    // 0x20ecf0: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x20ecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_20ecf4:
    // 0x20ecf4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x20ecf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20ecf8:
    // 0x20ecf8: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x20ecf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_20ecfc:
    // 0x20ecfc: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x20ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_20ed00:
    // 0x20ed00: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x20ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_20ed04:
    // 0x20ed04: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x20ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_20ed08:
    // 0x20ed08: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_20ed0c:
    // 0x20ed0c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20ed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20ed10:
    // 0x20ed10: 0xc068992  jal         func_1A2648
label_20ed14:
    if (ctx->pc == 0x20ED14u) {
        ctx->pc = 0x20ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED10u;
        // 0x20ed14: 0xa0660003  sb          $a2, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED18u;
        goto label_20ed18;
    }
    ctx->pc = 0x20ED10u;
    SET_GPR_U32(ctx, 31, 0x20ED18u);
    ctx->pc = 0x20ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED10u;
    // 0x20ed14: 0xa0660003  sb          $a2, 0x3($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x20ED10u, 0x20ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED18u;
label_20ed18:
    // 0x20ed18: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ed1c:
    // 0x20ed1c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20ed20:
    // 0x20ed20: 0xc4c0f9e0  lwc1        $f0, -0x620($a2)
    ctx->pc = 0x20ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ed24:
    // 0x20ed24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ed24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed28:
    // 0x20ed28: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x20ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_20ed2c:
    // 0x20ed2c: 0x901818  mult        $v1, $a0, $s0
    ctx->pc = 0x20ed2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20ed30:
    // 0x20ed30: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x20ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20ed34:
    // 0x20ed34: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x20ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20ed38:
    // 0x20ed38: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x20ed38u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_20ed3c:
    // 0x20ed3c: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x20ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_20ed40:
    // 0x20ed40: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_20ed44:
    // 0x20ed44: 0xc068848  jal         func_1A2120
label_20ed48:
    if (ctx->pc == 0x20ED48u) {
        ctx->pc = 0x20ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED44u;
        // 0x20ed48: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED4Cu;
        goto label_20ed4c;
    }
    ctx->pc = 0x20ED44u;
    SET_GPR_U32(ctx, 31, 0x20ED4Cu);
    ctx->pc = 0x20ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED44u;
    // 0x20ed48: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x20ED44u, 0x20ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED4Cu;
label_20ed4c:
    // 0x20ed4c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ed50:
    // 0x20ed50: 0x2643ff00  addiu       $v1, $s2, -0x100
    ctx->pc = 0x20ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967040));
label_20ed54:
    // 0x20ed54: 0x8fa70158  lw          $a3, 0x158($sp)
    ctx->pc = 0x20ed54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_20ed58:
    // 0x20ed58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed5c:
    // 0x20ed5c: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x20ed5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20ed60:
    // 0x20ed60: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x20ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_20ed64:
    // 0x20ed64: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x20ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_20ed68:
    // 0x20ed68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ed6c:
    // 0x20ed6c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x20ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_20ed70:
    // 0x20ed70: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ed74:
    // 0x20ed74: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x20ed74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20ed78:
    // 0x20ed78: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x20ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_20ed7c:
    // 0x20ed7c: 0xc068818  jal         func_1A2060
label_20ed80:
    if (ctx->pc == 0x20ED80u) {
        ctx->pc = 0x20ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED7Cu;
        // 0x20ed80: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED84u;
        goto label_20ed84;
    }
    ctx->pc = 0x20ED7Cu;
    SET_GPR_U32(ctx, 31, 0x20ED84u);
    ctx->pc = 0x20ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED7Cu;
    // 0x20ed80: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x20ED7Cu, 0x20ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED84u;
label_20ed84:
    // 0x20ed84: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ed88:
    // 0x20ed88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20ed8c:
    // 0x20ed8c: 0xc460f9e0  lwc1        $f0, -0x620($v1)
    ctx->pc = 0x20ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ed90:
    // 0x20ed90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed94:
    // 0x20ed94: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x20ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_20ed98:
    // 0x20ed98: 0x901818  mult        $v1, $a0, $s0
    ctx->pc = 0x20ed98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20ed9c:
    // 0x20ed9c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x20ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20eda0:
    // 0x20eda0: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x20eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20eda4:
    // 0x20eda4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x20eda4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_20eda8:
    // 0x20eda8: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_20edac:
    // 0x20edac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20edacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_20edb0:
    // 0x20edb0: 0xc068848  jal         func_1A2120
label_20edb4:
    if (ctx->pc == 0x20EDB4u) {
        ctx->pc = 0x20EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDB0u;
        // 0x20edb4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDB8u;
        goto label_20edb8;
    }
    ctx->pc = 0x20EDB0u;
    SET_GPR_U32(ctx, 31, 0x20EDB8u);
    ctx->pc = 0x20EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDB0u;
    // 0x20edb4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x20EDB0u, 0x20EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDB8u;
label_20edb8:
    // 0x20edb8: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20edbc:
    // 0x20edbc: 0x265201c0  addiu       $s2, $s2, 0x1C0
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_20edc0:
    // 0x20edc0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x20edc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_20edc4:
    // 0x20edc4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x20edc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_20edc8:
    // 0x20edc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20edc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20edcc:
    // 0x20edcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20edccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20edd0:
    // 0x20edd0: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x20edd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20edd4:
    // 0x20edd4: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x20edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20edd8:
    // 0x20edd8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20eddc:
    // 0x20eddc: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x20eddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_20ede0:
    // 0x20ede0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ede0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ede4:
    // 0x20ede4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20ede8:
    // 0x20ede8: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x20ede8u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
label_20edec:
    // 0x20edec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20edecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20edf0:
    // 0x20edf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20edf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20edf4:
    // 0x20edf4: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x20edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_20edf8:
    // 0x20edf8: 0xc457f9ec  lwc1        $f23, -0x614($v0)
    ctx->pc = 0x20edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_20edfc:
    // 0x20edfc: 0x7a240050  lq          $a0, 0x50($s1)
    ctx->pc = 0x20edfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_20ee00:
    // 0x20ee00: 0x460110a9  min.s       $f2, $f2, $f1
    ctx->pc = 0x20ee00u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[1]);
label_20ee04:
    // 0x20ee04: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20ee08:
    // 0x20ee08: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x20ee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_20ee0c:
    // 0x20ee0c: 0xe4620038  swc1        $f2, 0x38($v1)
    ctx->pc = 0x20ee0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_20ee10:
    // 0x20ee10: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ee14:
    // 0x20ee14: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x20ee14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20ee18:
    // 0x20ee18: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x20ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_20ee1c:
    // 0x20ee1c: 0xc070904  jal         func_1C2410
label_20ee20:
    if (ctx->pc == 0x20EE20u) {
        ctx->pc = 0x20EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE1Cu;
        // 0x20ee20: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE24u;
        goto label_20ee24;
    }
    ctx->pc = 0x20EE1Cu;
    SET_GPR_U32(ctx, 31, 0x20EE24u);
    ctx->pc = 0x20EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE1Cu;
    // 0x20ee20: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2410u, 0x20EE1Cu, 0x20EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE24u;
label_20ee24:
    // 0x20ee24: 0x10000038  b           . + 4 + (0x38 << 2)
label_20ee28:
    if (ctx->pc == 0x20EE28u) {
        ctx->pc = 0x20EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE24u;
        // 0x20ee28: 0x8e870040  lw          $a3, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE2Cu;
        goto label_20ee2c;
    }
    ctx->pc = 0x20EE24u;
    {
        const bool branch_taken_0x20ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE24u;
        // 0x20ee28: 0x8e870040  lw          $a3, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee24) {
            ctx->pc = 0x20EF08u;
            goto label_20ef08;
        }
    }
    ctx->pc = 0x20EE2Cu;
label_20ee2c:
    // 0x20ee2c: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ee30:
    // 0x20ee30: 0x26420108  addiu       $v0, $s2, 0x108
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
label_20ee34:
    // 0x20ee34: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x20ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_20ee38:
    // 0x20ee38: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20ee3c:
    // 0x20ee3c: 0x732018  mult        $a0, $v1, $s3
    ctx->pc = 0x20ee3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20ee40:
    // 0x20ee40: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20ee40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20ee44:
    // 0x20ee44: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x20ee44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20ee48:
    // 0x20ee48: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x20ee48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_20ee4c:
    // 0x20ee4c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x20ee4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_20ee50:
    // 0x20ee50: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x20ee50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_20ee54:
    // 0x20ee54: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x20ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_20ee58:
    // 0x20ee58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ee5c:
    // 0x20ee5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20ee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20ee60:
    // 0x20ee60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20ee64:
    // 0x20ee64: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ee68:
    // 0x20ee68: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x20ee68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20ee6c:
    // 0x20ee6c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x20ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20ee70:
    // 0x20ee70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20ee74:
    // 0x20ee74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_20ee78:
    // 0x20ee78: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ee7c:
    // 0x20ee7c: 0x8cc5f1f8  lw          $a1, -0xE08($a2)
    ctx->pc = 0x20ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963704)));
label_20ee80:
    // 0x20ee80: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x20ee80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20ee84:
    // 0x20ee84: 0x8ce6f208  lw          $a2, -0xDF8($a3)
    ctx->pc = 0x20ee84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963720)));
label_20ee88:
    // 0x20ee88: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x20ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20ee8c:
    // 0x20ee8c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x20ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_20ee90:
    // 0x20ee90: 0xac6502e8  sw          $a1, 0x2E8($v1)
    ctx->pc = 0x20ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 744), GPR_U32(ctx, 5));
label_20ee94:
    // 0x20ee94: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ee98:
    // 0x20ee98: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x20ee98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20ee9c:
    // 0x20ee9c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x20ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20eea0:
    // 0x20eea0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x20eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_20eea4:
    // 0x20eea4: 0xac4602f0  sw          $a2, 0x2F0($v0)
    ctx->pc = 0x20eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 752), GPR_U32(ctx, 6));
label_20eea8:
    // 0x20eea8: 0xc088b90  jal         func_222E40
label_20eeac:
    if (ctx->pc == 0x20EEACu) {
        ctx->pc = 0x20EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA8u;
        // 0x20eeac: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EEB0u;
        goto label_20eeb0;
    }
    ctx->pc = 0x20EEA8u;
    SET_GPR_U32(ctx, 31, 0x20EEB0u);
    ctx->pc = 0x20EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEA8u;
    // 0x20eeac: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x20EEA8u, 0x20EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEB0u;
label_20eeb0:
    // 0x20eeb0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x20eeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20eeb4:
    // 0x20eeb4: 0x0  nop
    ctx->pc = 0x20eeb4u;
    // NOP
label_20eeb8:
    // 0x20eeb8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20eeb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_20eebc:
    // 0x20eebc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20eec0:
    // 0x20eec0: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x20eec0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
label_20eec4:
    // 0x20eec4: 0xc088b98  jal         func_222E60
label_20eec8:
    if (ctx->pc == 0x20EEC8u) {
        ctx->pc = 0x20EECCu;
        goto label_20eecc;
    }
    ctx->pc = 0x20EEC4u;
    SET_GPR_U32(ctx, 31, 0x20EECCu);
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x20EEC4u, 0x20EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EECCu;
label_20eecc:
    // 0x20eecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20eed0:
    // 0x20eed0: 0x0  nop
    ctx->pc = 0x20eed0u;
    // NOP
label_20eed4:
    // 0x20eed4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20eed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20eed8:
    // 0x20eed8: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x20eed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20eedc:
    // 0x20eedc: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x20eedcu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
label_20eee0:
    // 0x20eee0: 0x0  nop
    ctx->pc = 0x20eee0u;
    // NOP
label_20eee4:
    // 0x20eee4: 0x0  nop
    ctx->pc = 0x20eee4u;
    // NOP
label_20eee8:
    // 0x20eee8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x20eee8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_20eeec:
    // 0x20eeec: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x20eeecu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
label_20eef0:
    // 0x20eef0: 0x4616a529  min.s       $f20, $f20, $f22
    ctx->pc = 0x20eef0u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[22]);
label_20eef4:
    // 0x20eef4: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x20eef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20eef8:
    // 0x20eef8: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x20eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
label_20eefc:
    // 0x20eefc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20eefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_20ef00:
    // 0x20ef00: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x20ef00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_20ef04:
    // 0x20ef04: 0x8e870040  lw          $a3, 0x40($s4)
    ctx->pc = 0x20ef04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20ef08:
    // 0x20ef08: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20ef08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20ef0c:
    // 0x20ef0c: 0x24c6f6d0  addiu       $a2, $a2, -0x930
    ctx->pc = 0x20ef0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964944));
label_20ef10:
    // 0x20ef10: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x20ef10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_20ef14:
    // 0x20ef14: 0x721c0  sll         $a0, $a3, 7
    ctx->pc = 0x20ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_20ef18:
    // 0x20ef18: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x20ef18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ef1c:
    // 0x20ef1c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20ef20:
    // 0x20ef20: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20ef20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20ef24:
    // 0x20ef24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20ef24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_20ef28:
    // 0x20ef28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x20ef28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_20ef2c:
    // 0x20ef2c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20ef2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20ef30:
    // 0x20ef30: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20ef30u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_20ef34:
    // 0x20ef34: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20ef34u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_20ef38:
    // 0x20ef38: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x20ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_20ef3c:
    // 0x20ef3c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20ef3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_20ef40:
    // 0x20ef40: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x20ef40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_20ef44:
    // 0x20ef44: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20ef44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20ef48:
    // 0x20ef48: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20ef48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_20ef4c:
    // 0x20ef4c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x20ef4cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_20ef50:
    // 0x20ef50: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x20ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_20ef54:
    // 0x20ef54: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x20ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_20ef58:
    // 0x20ef58: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x20ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_20ef5c:
    // 0x20ef5c: 0x14e0000e  bnez        $a3, . + 4 + (0xE << 2)
label_20ef60:
    if (ctx->pc == 0x20EF60u) {
        ctx->pc = 0x20EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF5Cu;
        // 0x20ef60: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF64u;
        goto label_20ef64;
    }
    ctx->pc = 0x20EF5Cu;
    {
        const bool branch_taken_0x20ef5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF5Cu;
        // 0x20ef60: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef5c) {
            ctx->pc = 0x20EF98u;
            goto label_20ef98;
        }
    }
    ctx->pc = 0x20EF64u;
label_20ef64:
    // 0x20ef64: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20ef68:
    // 0x20ef68: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_20ef6c:
    // 0x20ef6c: 0x249096e0  addiu       $s0, $a0, -0x6920
    ctx->pc = 0x20ef6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940384));
label_20ef70:
    // 0x20ef70: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x20ef70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_20ef74:
    // 0x20ef74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20ef78:
    // 0x20ef78: 0x40f809  jalr        $v0
label_20ef7c:
    if (ctx->pc == 0x20EF7Cu) {
        ctx->pc = 0x20EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF78u;
        // 0x20ef7c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF80u;
        goto label_20ef80;
    }
    ctx->pc = 0x20EF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EF80u);
        ctx->pc = 0x20EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF78u;
        // 0x20ef7c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EF78u, 0x20EF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EF80u;
label_20ef80:
    // 0x20ef80: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_20ef84:
    // 0x20ef84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ef84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ef88:
    // 0x20ef88: 0xc10ca28  jal         func_4328A0
label_20ef8c:
    if (ctx->pc == 0x20EF8Cu) {
        ctx->pc = 0x20EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF88u;
        // 0x20ef8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF90u;
        goto label_20ef90;
    }
    ctx->pc = 0x20EF88u;
    SET_GPR_U32(ctx, 31, 0x20EF90u);
    ctx->pc = 0x20EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF88u;
    // 0x20ef8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x20EF88u, 0x20EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF90u;
label_20ef90:
    // 0x20ef90: 0x1000000d  b           . + 4 + (0xD << 2)
label_20ef94:
    if (ctx->pc == 0x20EF94u) {
        ctx->pc = 0x20EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF90u;
        // 0x20ef94: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF98u;
        goto label_20ef98;
    }
    ctx->pc = 0x20EF90u;
    {
        const bool branch_taken_0x20ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF90u;
        // 0x20ef94: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef90) {
            ctx->pc = 0x20EFC8u;
            goto label_20efc8;
        }
    }
    ctx->pc = 0x20EF98u;
label_20ef98:
    // 0x20ef98: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x20ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_20ef9c:
    // 0x20ef9c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20efa0:
    // 0x20efa0: 0x24b096e0  addiu       $s0, $a1, -0x6920
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940384));
label_20efa4:
    // 0x20efa4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x20efa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_20efa8:
    // 0x20efa8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20efac:
    // 0x20efac: 0x40f809  jalr        $v0
label_20efb0:
    if (ctx->pc == 0x20EFB0u) {
        ctx->pc = 0x20EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFACu;
        // 0x20efb0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFB4u;
        goto label_20efb4;
    }
    ctx->pc = 0x20EFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EFB4u);
        ctx->pc = 0x20EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFACu;
        // 0x20efb0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EFACu, 0x20EFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EFB4u;
label_20efb4:
    // 0x20efb4: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x20efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_20efb8:
    // 0x20efb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20efb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20efbc:
    // 0x20efbc: 0xc10ca28  jal         func_4328A0
label_20efc0:
    if (ctx->pc == 0x20EFC0u) {
        ctx->pc = 0x20EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFBCu;
        // 0x20efc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFC4u;
        goto label_20efc4;
    }
    ctx->pc = 0x20EFBCu;
    SET_GPR_U32(ctx, 31, 0x20EFC4u);
    ctx->pc = 0x20EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFBCu;
    // 0x20efc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x20EFBCu, 0x20EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFC4u;
label_20efc4:
    // 0x20efc4: 0x8e900040  lw          $s0, 0x40($s4)
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20efc8:
    // 0x20efc8: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x20efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20efcc:
    // 0x20efcc: 0x24120d00  addiu       $s2, $zero, 0xD00
    ctx->pc = 0x20efccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20efd0:
    // 0x20efd0: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x20efd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20efd4:
    // 0x20efd4: 0x2128018  mult        $s0, $s0, $s2
    ctx->pc = 0x20efd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_20efd8:
    // 0x20efd8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20efd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20efdc:
    // 0x20efdc: 0x24c3f240  addiu       $v1, $a2, -0xDC0
    ctx->pc = 0x20efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963776));
label_20efe0:
    // 0x20efe0: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_20efe4:
    // 0x20efe4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x20efe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20efe8:
    // 0x20efe8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x20efe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_20efec:
    // 0x20efec: 0xc10c3ac  jal         func_430EB0
label_20eff0:
    if (ctx->pc == 0x20EFF0u) {
        ctx->pc = 0x20EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFECu;
        // 0x20eff0: 0x26100210  addiu       $s0, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFF4u;
        goto label_20eff4;
    }
    ctx->pc = 0x20EFECu;
    SET_GPR_U32(ctx, 31, 0x20EFF4u);
    ctx->pc = 0x20EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFECu;
    // 0x20eff0: 0x26100210  addiu       $s0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x20EFECu, 0x20EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFF4u;
label_20eff4:
    // 0x20eff4: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x20eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_20eff8:
    // 0x20eff8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x20eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20effc:
    // 0x20effc: 0xc10c4de  jal         func_431378
label_20f000:
    if (ctx->pc == 0x20F000u) {
        ctx->pc = 0x20F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFFCu;
        // 0x20f000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F004u;
        goto label_20f004;
    }
    ctx->pc = 0x20EFFCu;
    SET_GPR_U32(ctx, 31, 0x20F004u);
    ctx->pc = 0x20F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFFCu;
    // 0x20f000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x20EFFCu, 0x20F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F004u;
label_20f004:
    // 0x20f004: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f008:
    // 0x20f008: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x20f008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f00c:
    // 0x20f00c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20f010:
    // 0x20f010: 0x24850210  addiu       $a1, $a0, 0x210
    ctx->pc = 0x20f010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
label_20f014:
    // 0x20f014: 0xc07089c  jal         func_1C2270
label_20f018:
    if (ctx->pc == 0x20F018u) {
        ctx->pc = 0x20F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F014u;
        // 0x20f018: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F01Cu;
        goto label_20f01c;
    }
    ctx->pc = 0x20F014u;
    SET_GPR_U32(ctx, 31, 0x20F01Cu);
    ctx->pc = 0x20F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F014u;
    // 0x20f018: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2270u, 0x20F014u, 0x20F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F01Cu;
label_20f01c:
    // 0x20f01c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f020:
    // 0x20f020: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x20f020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_20f024:
    // 0x20f024: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x20f024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f028:
    // 0x20f028: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20f02c:
    // 0x20f02c: 0xc070948  jal         func_1C2520
label_20f030:
    if (ctx->pc == 0x20F030u) {
        ctx->pc = 0x20F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F02Cu;
        // 0x20f030: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F034u;
        goto label_20f034;
    }
    ctx->pc = 0x20F02Cu;
    SET_GPR_U32(ctx, 31, 0x20F034u);
    ctx->pc = 0x20F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F02Cu;
    // 0x20f030: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x20F02Cu, 0x20F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F034u;
label_20f034:
    // 0x20f034: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f038:
    // 0x20f038: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_20f03c:
    if (ctx->pc == 0x20F03Cu) {
        ctx->pc = 0x20F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F038u;
        // 0x20f03c: 0x521818  mult        $v1, $v0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F040u;
        goto label_20f040;
    }
    ctx->pc = 0x20F038u;
    {
        const bool branch_taken_0x20f038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F038u;
        // 0x20f03c: 0x521818  mult        $v1, $v0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f038) {
            ctx->pc = 0x20F054u;
            goto label_20f054;
        }
    }
    ctx->pc = 0x20F040u;
label_20f040:
    // 0x20f040: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x20f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_20f044:
    // 0x20f044: 0xc0708a4  jal         func_1C2290
label_20f048:
    if (ctx->pc == 0x20F048u) {
        ctx->pc = 0x20F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F044u;
        // 0x20f048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F04Cu;
        goto label_20f04c;
    }
    ctx->pc = 0x20F044u;
    SET_GPR_U32(ctx, 31, 0x20F04Cu);
    ctx->pc = 0x20F048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F044u;
    // 0x20f048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x20F044u, 0x20F04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F04Cu;
label_20f04c:
    // 0x20f04c: 0x10000006  b           . + 4 + (0x6 << 2)
label_20f050:
    if (ctx->pc == 0x20F050u) {
        ctx->pc = 0x20F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F04Cu;
        // 0x20f050: 0x8e860040  lw          $a2, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F054u;
        goto label_20f054;
    }
    ctx->pc = 0x20F04Cu;
    {
        const bool branch_taken_0x20f04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F04Cu;
        // 0x20f050: 0x8e860040  lw          $a2, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f04c) {
            ctx->pc = 0x20F068u;
            goto label_20f068;
        }
    }
    ctx->pc = 0x20F054u;
label_20f054:
    // 0x20f054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f058:
    // 0x20f058: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x20f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20f05c:
    // 0x20f05c: 0xc0708a4  jal         func_1C2290
label_20f060:
    if (ctx->pc == 0x20F060u) {
        ctx->pc = 0x20F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F05Cu;
        // 0x20f060: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F064u;
        goto label_20f064;
    }
    ctx->pc = 0x20F05Cu;
    SET_GPR_U32(ctx, 31, 0x20F064u);
    ctx->pc = 0x20F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F05Cu;
    // 0x20f060: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x20F05Cu, 0x20F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F064u;
label_20f064:
    // 0x20f064: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x20f064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f068:
    // 0x20f068: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x20f068u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_20f06c:
    // 0x20f06c: 0x24e7f6e0  addiu       $a3, $a3, -0x920
    ctx->pc = 0x20f06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
label_20f070:
    // 0x20f070: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x20f070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_20f074:
    // 0x20f074: 0x631c0  sll         $a2, $a2, 7
    ctx->pc = 0x20f074u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
label_20f078:
    // 0x20f078: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x20f078u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f07c:
    // 0x20f07c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20f080:
    // 0x20f080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f084:
    // 0x20f084: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x20f084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_20f088:
    // 0x20f088: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20f088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_20f08c:
    // 0x20f08c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x20f08cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_20f090:
    // 0x20f090: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20f090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20f094:
    // 0x20f094: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20f094u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_20f098:
    // 0x20f098: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20f098u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_20f09c:
    // 0x20f09c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x20f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_20f0a0:
    // 0x20f0a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20f0a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_20f0a4:
    // 0x20f0a4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x20f0a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_20f0a8:
    // 0x20f0a8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20f0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20f0ac:
    // 0x20f0ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20f0acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_20f0b0:
    // 0x20f0b0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x20f0b0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_20f0b4:
    // 0x20f0b4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x20f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_20f0b8:
    // 0x20f0b8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x20f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_20f0bc:
    // 0x20f0bc: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x20f0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_20f0c0:
    // 0x20f0c0: 0xc047e6c  jal         func_11F9B0
label_20f0c4:
    if (ctx->pc == 0x20F0C4u) {
        ctx->pc = 0x20F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0C0u;
        // 0x20f0c4: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0C8u;
        goto label_20f0c8;
    }
    ctx->pc = 0x20F0C0u;
    SET_GPR_U32(ctx, 31, 0x20F0C8u);
    ctx->pc = 0x20F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0C0u;
    // 0x20f0c4: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x20F0C0u, 0x20F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0C8u;
label_20f0c8:
    // 0x20f0c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20f0cc:
    if (ctx->pc == 0x20F0CCu) {
        ctx->pc = 0x20F0D0u;
        goto label_20f0d0;
    }
    ctx->pc = 0x20F0C8u;
    {
        const bool branch_taken_0x20f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f0c8) {
            ctx->pc = 0x20F0FCu;
            goto label_20f0fc;
        }
    }
    ctx->pc = 0x20F0D0u;
label_20f0d0:
    // 0x20f0d0: 0xc047e6c  jal         func_11F9B0
label_20f0d4:
    if (ctx->pc == 0x20F0D4u) {
        ctx->pc = 0x20F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0D0u;
        // 0x20f0d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0D8u;
        goto label_20f0d8;
    }
    ctx->pc = 0x20F0D0u;
    SET_GPR_U32(ctx, 31, 0x20F0D8u);
    ctx->pc = 0x20F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0D0u;
    // 0x20f0d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x20F0D0u, 0x20F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0D8u;
label_20f0d8:
    // 0x20f0d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f0dc:
    // 0x20f0dc: 0x846401f8  lh          $a0, 0x1F8($v1)
    ctx->pc = 0x20f0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 504)));
label_20f0e0:
    // 0x20f0e0: 0x8c6501fc  lw          $a1, 0x1FC($v1)
    ctx->pc = 0x20f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_20f0e4:
    // 0x20f0e4: 0xa0f809  jalr        $a1
label_20f0e8:
    if (ctx->pc == 0x20F0E8u) {
        ctx->pc = 0x20F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E4u;
        // 0x20f0e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0ECu;
        goto label_20f0ec;
    }
    ctx->pc = 0x20F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20F0ECu);
        ctx->pc = 0x20F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E4u;
        // 0x20f0e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F0E4u, 0x20F0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F0ECu;
label_20f0ec:
    // 0x20f0ec: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x20f0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_20f0f0:
    // 0x20f0f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f0f4:
    // 0x20f0f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_20f0f8:
    if (ctx->pc == 0x20F0F8u) {
        ctx->pc = 0x20F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0F4u;
        // 0x20f0f8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0FCu;
        goto label_20f0fc;
    }
    ctx->pc = 0x20F0F4u;
    {
        const bool branch_taken_0x20f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0F4u;
        // 0x20f0f8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0f4) {
            ctx->pc = 0x20F104u;
            goto label_20f104;
        }
    }
    ctx->pc = 0x20F0FCu;
label_20f0fc:
    // 0x20f0fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f100:
    // 0x20f100: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20f100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20f104:
    // 0x20f104: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20f104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20f108:
    // 0x20f108: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x20f108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_20f10c:
    // 0x20f10c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_20f110:
    // 0x20f110: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x20f110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_20f114:
    // 0x20f114: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x20f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_20f118:
    // 0x20f118: 0x40f809  jalr        $v0
label_20f11c:
    if (ctx->pc == 0x20F11Cu) {
        ctx->pc = 0x20F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F118u;
        // 0x20f11c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F120u;
        goto label_20f120;
    }
    ctx->pc = 0x20F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F120u);
        ctx->pc = 0x20F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F118u;
        // 0x20f11c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F118u, 0x20F120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F120u;
label_20f120:
    // 0x20f120: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_20f124:
    if (ctx->pc == 0x20F124u) {
        ctx->pc = 0x20F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F120u;
        // 0x20f124: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F128u;
        goto label_20f128;
    }
    ctx->pc = 0x20F120u;
    {
        const bool branch_taken_0x20f120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F120u;
        // 0x20f124: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f120) {
            ctx->pc = 0x20F16Cu;
            goto label_20f16c;
        }
    }
    ctx->pc = 0x20F128u;
label_20f128:
    // 0x20f128: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f12c:
    // 0x20f12c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20f12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20f130:
    // 0x20f130: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x20f130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_20f134:
    // 0x20f134: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f138:
    // 0x20f138: 0x2483f6a0  addiu       $v1, $a0, -0x960
    ctx->pc = 0x20f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964896));
label_20f13c:
    // 0x20f13c: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x20f13cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
label_20f140:
    // 0x20f140: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x20f140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_20f144:
    // 0x20f144: 0xc4a1f9e0  lwc1        $f1, -0x620($a1)
    ctx->pc = 0x20f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f148:
    // 0x20f148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f14c:
    // 0x20f14c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20f14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20f150:
    // 0x20f150: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20f150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20f154:
    // 0x20f154: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20f154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20f158:
    // 0x20f158: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x20f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f15c:
    // 0x20f15c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x20f15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_20f160:
    // 0x20f160: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20f160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20f164:
    // 0x20f164: 0x1000000e  b           . + 4 + (0xE << 2)
label_20f168:
    if (ctx->pc == 0x20F168u) {
        ctx->pc = 0x20F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F164u;
        // 0x20f168: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F16Cu;
        goto label_20f16c;
    }
    ctx->pc = 0x20F164u;
    {
        const bool branch_taken_0x20f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F164u;
        // 0x20f168: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f164) {
            ctx->pc = 0x20F1A0u;
            goto label_20f1a0;
        }
    }
    ctx->pc = 0x20F16Cu;
label_20f16c:
    // 0x20f16c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f170:
    // 0x20f170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f174:
    // 0x20f174: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f178:
    // 0x20f178: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f17c:
    // 0x20f17c: 0x24c3f6a0  addiu       $v1, $a2, -0x960
    ctx->pc = 0x20f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964896));
label_20f180:
    // 0x20f180: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x20f180u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_20f184:
    // 0x20f184: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x20f184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_20f188:
    // 0x20f188: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_20f18c:
    // 0x20f18c: 0xc4e2f9e0  lwc1        $f2, -0x620($a3)
    ctx->pc = 0x20f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f190:
    // 0x20f190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f194:
    // 0x20f194: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x20f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f198:
    // 0x20f198: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20f19c:
    // 0x20f19c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20f19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20f1a0:
    // 0x20f1a0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f1a4:
    // 0x20f1a4: 0x24110d00  addiu       $s1, $zero, 0xD00
    ctx->pc = 0x20f1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20f1a8:
    // 0x20f1a8: 0x24100680  addiu       $s0, $zero, 0x680
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20f1ac:
    // 0x20f1ac: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20f1b0:
    // 0x20f1b0: 0x3d08018  mult        $s0, $fp, $s0
    ctx->pc = 0x20f1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_20f1b4:
    // 0x20f1b4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x20f1b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f1b8:
    // 0x20f1b8: 0x2464f4d0  addiu       $a0, $v1, -0xB30
    ctx->pc = 0x20f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964432));
label_20f1bc:
    // 0x20f1bc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x20f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_20f1c0:
    // 0x20f1c0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x20f1c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f1c4:
    // 0x20f1c4: 0x2492fd70  addiu       $s2, $a0, -0x290
    ctx->pc = 0x20f1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966640));
label_20f1c8:
    // 0x20f1c8: 0xc4acf9e0  lwc1        $f12, -0x620($a1)
    ctx->pc = 0x20f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20f1cc:
    // 0x20f1cc: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x20f1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_20f1d0:
    // 0x20f1d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20f1d4:
    // 0x20f1d4: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x20f1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_20f1d8:
    // 0x20f1d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20f1dc:
    // 0x20f1dc: 0x7c4303c0  sq          $v1, 0x3C0($v0)
    ctx->pc = 0x20f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 960), GPR_VEC(ctx, 3));
label_20f1e0:
    // 0x20f1e0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x20f1e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_20f1e4:
    // 0x20f1e4: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f1e8:
    // 0x20f1e8: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x20f1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f1ec:
    // 0x20f1ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20f1f0:
    // 0x20f1f0: 0xc0708ac  jal         func_1C22B0
label_20f1f4:
    if (ctx->pc == 0x20F1F4u) {
        ctx->pc = 0x20F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F0u;
        // 0x20f1f4: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1F8u;
        goto label_20f1f8;
    }
    ctx->pc = 0x20F1F0u;
    SET_GPR_U32(ctx, 31, 0x20F1F8u);
    ctx->pc = 0x20F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1F0u;
    // 0x20f1f4: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x20F1F0u, 0x20F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1F8u;
label_20f1f8:
    // 0x20f1f8: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f1fc:
    // 0x20f1fc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f200:
    // 0x20f200: 0x24c3f6a0  addiu       $v1, $a2, -0x960
    ctx->pc = 0x20f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964896));
label_20f204:
    // 0x20f204: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x20f204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_20f208:
    // 0x20f208: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x20f208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_20f20c:
    // 0x20f20c: 0x912818  mult        $a1, $a0, $s1
    ctx->pc = 0x20f20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_20f210:
    // 0x20f210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f214:
    // 0x20f214: 0xc4e1f9e0  lwc1        $f1, -0x620($a3)
    ctx->pc = 0x20f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f218:
    // 0x20f218: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x20f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f21c:
    // 0x20f21c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f21cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f220:
    // 0x20f220: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20f224:
    // 0x20f224: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x20f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_20f228:
    // 0x20f228: 0x8cc5b8b8  lw          $a1, -0x4748($a2)
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949048)));
label_20f22c:
    // 0x20f22c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x20f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_20f230:
    // 0x20f230: 0xe48002d4  swc1        $f0, 0x2D4($a0)
    ctx->pc = 0x20f230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
label_20f234:
    // 0x20f234: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20f238:
    // 0x20f238: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20f238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20f23c:
    // 0x20f23c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20f240:
    // 0x20f240: 0x40f809  jalr        $v0
label_20f244:
    if (ctx->pc == 0x20F244u) {
        ctx->pc = 0x20F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F240u;
        // 0x20f244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F248u;
        goto label_20f248;
    }
    ctx->pc = 0x20F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F248u);
        ctx->pc = 0x20F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F240u;
        // 0x20f244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F240u, 0x20F248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F248u;
label_20f248:
    // 0x20f248: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f24c:
    // 0x20f24c: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x20f24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f250:
    // 0x20f250: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x20f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_20f254:
    // 0x20f254: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20f258:
    // 0x20f258: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20f258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20f25c:
    // 0x20f25c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f260:
    // 0x20f260: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x20f260u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_20f264:
    // 0x20f264: 0x8cc5b8b8  lw          $a1, -0x4748($a2)
    ctx->pc = 0x20f264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949048)));
label_20f268:
    // 0x20f268: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x20f268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_20f26c:
    // 0x20f26c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f270:
    // 0x20f270: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x20f270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_20f274:
    // 0x20f274: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20f274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f278:
    // 0x20f278: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20f27c:
    // 0x20f27c: 0x241e0680  addiu       $fp, $zero, 0x680
    ctx->pc = 0x20f27cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_20f280:
    // 0x20f280: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x20f280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_20f284:
    // 0x20f284: 0x24150d00  addiu       $s5, $zero, 0xD00
    ctx->pc = 0x20f284u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20f288:
    // 0x20f288: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20f288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20f28c:
    // 0x20f28c: 0xafa70160  sw          $a3, 0x160($sp)
    ctx->pc = 0x20f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 7));
label_20f290:
    // 0x20f290: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20f294:
    // 0x20f294: 0x40f809  jalr        $v0
label_20f298:
    if (ctx->pc == 0x20F298u) {
        ctx->pc = 0x20F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F294u;
        // 0x20f298: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F29Cu;
        goto label_20f29c;
    }
    ctx->pc = 0x20F294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F29Cu);
        ctx->pc = 0x20F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F294u;
        // 0x20f298: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F294u, 0x20F29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F29Cu;
label_20f29c:
    // 0x20f29c: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x20f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_20f2a0:
    // 0x20f2a0: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x20f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f2a4:
    // 0x20f2a4: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x20f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_20f2a8:
    // 0x20f2a8: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x20f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_20f2ac:
    // 0x20f2ac: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x20f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_20f2b0:
    // 0x20f2b0: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f2b4:
    // 0x20f2b4: 0x0  nop
    ctx->pc = 0x20f2b4u;
    // NOP
label_20f2b8:
    // 0x20f2b8: 0x2de1018  mult        $v0, $s6, $fp
    ctx->pc = 0x20f2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f2bc:
    // 0x20f2bc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20f2c0:
    // 0x20f2c0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x20f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_20f2c4:
    // 0x20f2c4: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x20f2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f2c8:
    // 0x20f2c8: 0x24a5f240  addiu       $a1, $a1, -0xDC0
    ctx->pc = 0x20f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
label_20f2cc:
    // 0x20f2cc: 0x8c86f9e4  lw          $a2, -0x61C($a0)
    ctx->pc = 0x20f2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965732)));
label_20f2d0:
    // 0x20f2d0: 0x8fa7015c  lw          $a3, 0x15C($sp)
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_20f2d4:
    // 0x20f2d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20f2d8:
    // 0x20f2d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20f2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20f2dc:
    // 0x20f2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f2e0:
    // 0x20f2e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20f2e4:
    // 0x20f2e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f2e8:
    // 0x20f2e8: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x20f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20f2ec:
    // 0x20f2ec: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x20f2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20f2f0:
    // 0x20f2f0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_20f2f4:
    if (ctx->pc == 0x20F2F4u) {
        ctx->pc = 0x20F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2F0u;
        // 0x20f2f4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2F8u;
        goto label_20f2f8;
    }
    ctx->pc = 0x20F2F0u;
    {
        const bool branch_taken_0x20f2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2F0u;
        // 0x20f2f4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2f0) {
            ctx->pc = 0x20F39Cu;
            goto label_20f39c;
        }
    }
    ctx->pc = 0x20F2F8u;
label_20f2f8:
    // 0x20f2f8: 0x8c62f9e8  lw          $v0, -0x618($v1)
    ctx->pc = 0x20f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965736)));
label_20f2fc:
    // 0x20f2fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x20f2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20f300:
    // 0x20f300: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x20f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_20f304:
    // 0x20f304: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20f308:
    // 0x20f308: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x20f308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20f30c:
    // 0x20f30c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_20f310:
    if (ctx->pc == 0x20F310u) {
        ctx->pc = 0x20F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F30Cu;
        // 0x20f310: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F314u;
        goto label_20f314;
    }
    ctx->pc = 0x20F30Cu;
    {
        const bool branch_taken_0x20f30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F30Cu;
        // 0x20f310: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f30c) {
            ctx->pc = 0x20F398u;
            goto label_20f398;
        }
    }
    ctx->pc = 0x20F314u;
label_20f314:
    // 0x20f314: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20f318:
    // 0x20f318: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20f31c:
    if (ctx->pc == 0x20F31Cu) {
        ctx->pc = 0x20F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F318u;
        // 0x20f31c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F320u;
        goto label_20f320;
    }
    ctx->pc = 0x20F318u;
    {
        const bool branch_taken_0x20f318 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F318u;
        // 0x20f31c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f318) {
            ctx->pc = 0x20F334u;
            goto label_20f334;
        }
    }
    ctx->pc = 0x20F320u;
label_20f320:
    // 0x20f320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f324:
    // 0x20f324: 0x0  nop
    ctx->pc = 0x20f324u;
    // NOP
label_20f328:
    // 0x20f328: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20f328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20f32c:
    // 0x20f32c: 0x10000008  b           . + 4 + (0x8 << 2)
label_20f330:
    if (ctx->pc == 0x20F330u) {
        ctx->pc = 0x20F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F32Cu;
        // 0x20f330: 0x8ce2f9e8  lw          $v0, -0x618($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294965736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F334u;
        goto label_20f334;
    }
    ctx->pc = 0x20F32Cu;
    {
        const bool branch_taken_0x20f32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F32Cu;
        // 0x20f330: 0x8ce2f9e8  lw          $v0, -0x618($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294965736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f32c) {
            ctx->pc = 0x20F350u;
            goto label_20f350;
        }
    }
    ctx->pc = 0x20F334u;
label_20f334:
    // 0x20f334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20f338:
    // 0x20f338: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20f33c:
    // 0x20f33c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f340:
    // 0x20f340: 0x0  nop
    ctx->pc = 0x20f340u;
    // NOP
label_20f344:
    // 0x20f344: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20f344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20f348:
    // 0x20f348: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20f348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20f34c:
    // 0x20f34c: 0x8ce2f9e8  lw          $v0, -0x618($a3)
    ctx->pc = 0x20f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294965736)));
label_20f350:
    // 0x20f350: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20f354:
    if (ctx->pc == 0x20F354u) {
        ctx->pc = 0x20F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F350u;
        // 0x20f354: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F358u;
        goto label_20f358;
    }
    ctx->pc = 0x20F350u;
    {
        const bool branch_taken_0x20f350 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F350u;
        // 0x20f354: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f350) {
            ctx->pc = 0x20F36Cu;
            goto label_20f36c;
        }
    }
    ctx->pc = 0x20F358u;
label_20f358:
    // 0x20f358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f35c:
    // 0x20f35c: 0x0  nop
    ctx->pc = 0x20f35cu;
    // NOP
label_20f360:
    // 0x20f360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20f360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20f364:
    // 0x20f364: 0x10000007  b           . + 4 + (0x7 << 2)
label_20f368:
    if (ctx->pc == 0x20F368u) {
        ctx->pc = 0x20F36Cu;
        goto label_20f36c;
    }
    ctx->pc = 0x20F364u;
    {
        const bool branch_taken_0x20f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f364) {
            ctx->pc = 0x20F384u;
            goto label_20f384;
        }
    }
    ctx->pc = 0x20F36Cu;
label_20f36c:
    // 0x20f36c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20f370:
    // 0x20f370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20f374:
    // 0x20f374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f378:
    // 0x20f378: 0x0  nop
    ctx->pc = 0x20f378u;
    // NOP
label_20f37c:
    // 0x20f37c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20f37cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20f380:
    // 0x20f380: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20f380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20f384:
    // 0x20f384: 0x0  nop
    ctx->pc = 0x20f384u;
    // NOP
label_20f388:
    // 0x20f388: 0x0  nop
    ctx->pc = 0x20f388u;
    // NOP
label_20f38c:
    // 0x20f38c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20f38cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20f390:
    // 0x20f390: 0x10000002  b           . + 4 + (0x2 << 2)
label_20f394:
    if (ctx->pc == 0x20F394u) {
        ctx->pc = 0x20F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F390u;
        // 0x20f394: 0x4600bd41  sub.s       $f21, $f23, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F398u;
        goto label_20f398;
    }
    ctx->pc = 0x20F390u;
    {
        const bool branch_taken_0x20f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F390u;
        // 0x20f394: 0x4600bd41  sub.s       $f21, $f23, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f390) {
            ctx->pc = 0x20F39Cu;
            goto label_20f39c;
        }
    }
    ctx->pc = 0x20F398u;
label_20f398:
    // 0x20f398: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x20f398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20f39c:
    // 0x20f39c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x20f39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_20f3a0:
    // 0x20f3a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20f3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20f3a4:
    // 0x20f3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f3a8:
    // 0x20f3a8: 0x0  nop
    ctx->pc = 0x20f3a8u;
    // NOP
label_20f3ac:
    // 0x20f3ac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x20f3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f3b0:
    // 0x20f3b0: 0x0  nop
    ctx->pc = 0x20f3b0u;
    // NOP
label_20f3b4:
    // 0x20f3b4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_20f3b8:
    if (ctx->pc == 0x20F3B8u) {
        ctx->pc = 0x20F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B4u;
        // 0x20f3b8: 0x2de4818  mult        $t1, $s6, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3BCu;
        goto label_20f3bc;
    }
    ctx->pc = 0x20F3B4u;
    {
        const bool branch_taken_0x20f3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B4u;
        // 0x20f3b8: 0x2de4818  mult        $t1, $s6, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3b4) {
            ctx->pc = 0x20F400u;
            goto label_20f400;
        }
    }
    ctx->pc = 0x20F3BCu;
label_20f3bc:
    // 0x20f3bc: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f3c0:
    // 0x20f3c0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20f3c4:
    // 0x20f3c4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x20f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_20f3c8:
    // 0x20f3c8: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x20f3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f3cc:
    // 0x20f3cc: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x20f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
label_20f3d0:
    // 0x20f3d0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x20f3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_20f3d4:
    // 0x20f3d4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x20f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_20f3d8:
    // 0x20f3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f3dc:
    // 0x20f3dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x20f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_20f3e0:
    // 0x20f3e0: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f3e4:
    // 0x20f3e4: 0x8ca2bd30  lw          $v0, -0x42D0($a1)
    ctx->pc = 0x20f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_20f3e8:
    // 0x20f3e8: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x20f3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f3ec:
    // 0x20f3ec: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20f3f0:
    // 0x20f3f0: 0x24a5f248  addiu       $a1, $a1, -0xDB8
    ctx->pc = 0x20f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963784));
label_20f3f4:
    // 0x20f3f4: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x20f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_20f3f8:
    // 0x20f3f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20f3fc:
    // 0x20f3fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20f400:
    // 0x20f400: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f404:
    // 0x20f404: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20f404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20f408:
    // 0x20f408: 0x24c4f248  addiu       $a0, $a2, -0xDB8
    ctx->pc = 0x20f408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963784));
label_20f40c:
    // 0x20f40c: 0x24110d00  addiu       $s1, $zero, 0xD00
    ctx->pc = 0x20f40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
label_20f410:
    // 0x20f410: 0x2de8018  mult        $s0, $s6, $fp
    ctx->pc = 0x20f410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_20f414:
    // 0x20f414: 0x513018  mult        $a2, $v0, $s1
    ctx->pc = 0x20f414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_20f418:
    // 0x20f418: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x20f418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_20f41c:
    // 0x20f41c: 0x8ce5bd30  lw          $a1, -0x42D0($a3)
    ctx->pc = 0x20f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_20f420:
    // 0x20f420: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x20f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_20f424:
    // 0x20f424: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20f424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20f428:
    // 0x20f428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f42c:
    // 0x20f42c: 0x1065002d  beq         $v1, $a1, . + 4 + (0x2D << 2)
label_20f430:
    if (ctx->pc == 0x20F430u) {
        ctx->pc = 0x20F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F42Cu;
        // 0x20f430: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F434u;
        goto label_20f434;
    }
    ctx->pc = 0x20F42Cu;
    {
        const bool branch_taken_0x20f42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x20F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F42Cu;
        // 0x20f430: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f42c) {
            ctx->pc = 0x20F4E4u;
            goto label_20f4e4;
        }
    }
    ctx->pc = 0x20F434u;
label_20f434:
    // 0x20f434: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x20f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_20f438:
    // 0x20f438: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x20f438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_20f43c:
    // 0x20f43c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x20f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_20f440:
    // 0x20f440: 0xc0e4060  jal         func_390180
label_20f444:
    if (ctx->pc == 0x20F444u) {
        ctx->pc = 0x20F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F440u;
        // 0x20f444: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F448u;
        goto label_20f448;
    }
    ctx->pc = 0x20F440u;
    SET_GPR_U32(ctx, 31, 0x20F448u);
    ctx->pc = 0x20F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F440u;
    // 0x20f444: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x20F440u, 0x20F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F448u;
label_20f448:
    // 0x20f448: 0xc08a61a  jal         func_229868
label_20f44c:
    if (ctx->pc == 0x20F44Cu) {
        ctx->pc = 0x20F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F448u;
        // 0x20f44c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F450u;
        goto label_20f450;
    }
    ctx->pc = 0x20F448u;
    SET_GPR_U32(ctx, 31, 0x20F450u);
    ctx->pc = 0x20F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F448u;
    // 0x20f44c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x20F448u, 0x20F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F450u;
label_20f450:
    // 0x20f450: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20f454:
    if (ctx->pc == 0x20F454u) {
        ctx->pc = 0x20F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F450u;
        // 0x20f454: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F458u;
        goto label_20f458;
    }
    ctx->pc = 0x20F450u;
    {
        const bool branch_taken_0x20f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f450) {
            ctx->pc = 0x20F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F450u;
            // 0x20f454: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F468u;
            goto label_20f468;
        }
    }
    ctx->pc = 0x20F458u;
label_20f458:
    // 0x20f458: 0xc089f76  jal         func_227DD8
label_20f45c:
    if (ctx->pc == 0x20F45Cu) {
        ctx->pc = 0x20F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F458u;
        // 0x20f45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F460u;
        goto label_20f460;
    }
    ctx->pc = 0x20F458u;
    SET_GPR_U32(ctx, 31, 0x20F460u);
    ctx->pc = 0x20F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F458u;
    // 0x20f45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x20F458u, 0x20F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F460u;
label_20f460:
    // 0x20f460: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_20f464:
    if (ctx->pc == 0x20F464u) {
        ctx->pc = 0x20F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F460u;
        // 0x20f464: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F468u;
        goto label_20f468;
    }
    ctx->pc = 0x20F460u;
    {
        const bool branch_taken_0x20f460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F460u;
        // 0x20f464: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f460) {
            ctx->pc = 0x20F4A0u;
            goto label_20f4a0;
        }
    }
    ctx->pc = 0x20F468u;
label_20f468:
    // 0x20f468: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20f468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_20f46c:
    // 0x20f46c: 0x2484f510  addiu       $a0, $a0, -0xAF0
    ctx->pc = 0x20f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964496));
label_20f470:
    // 0x20f470: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x20f470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_20f474:
    // 0x20f474: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x20f474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_20f478:
    // 0x20f478: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f47c:
    // 0x20f47c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x20f47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f480:
    // 0x20f480: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20f484:
    // 0x20f484: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20f488:
    // 0x20f488: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x20f488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f48c:
    // 0x20f48c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20f48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f490:
    // 0x20f490: 0x0  nop
    ctx->pc = 0x20f490u;
    // NOP
label_20f494:
    // 0x20f494: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_20f498:
    if (ctx->pc == 0x20F498u) {
        ctx->pc = 0x20F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F494u;
        // 0x20f498: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F49Cu;
        goto label_20f49c;
    }
    ctx->pc = 0x20F494u;
    {
        const bool branch_taken_0x20f494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f494) {
            ctx->pc = 0x20F498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F494u;
            // 0x20f498: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F4E8u;
            goto label_20f4e8;
        }
    }
    ctx->pc = 0x20F49Cu;
label_20f49c:
    // 0x20f49c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f4a0:
    // 0x20f4a0: 0x2de4818  mult        $t1, $s6, $fp
    ctx->pc = 0x20f4a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_20f4a4:
    // 0x20f4a4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20f4a8:
    // 0x20f4a8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x20f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_20f4ac:
    // 0x20f4ac: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x20f4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f4b0:
    // 0x20f4b0: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x20f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
label_20f4b4:
    // 0x20f4b4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x20f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_20f4b8:
    // 0x20f4b8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x20f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_20f4bc:
    // 0x20f4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f4c0:
    // 0x20f4c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x20f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_20f4c4:
    // 0x20f4c4: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f4c8:
    // 0x20f4c8: 0x8ca2bd30  lw          $v0, -0x42D0($a1)
    ctx->pc = 0x20f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_20f4cc:
    // 0x20f4cc: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x20f4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f4d0:
    // 0x20f4d0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20f4d4:
    // 0x20f4d4: 0x24a5f248  addiu       $a1, $a1, -0xDB8
    ctx->pc = 0x20f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963784));
label_20f4d8:
    // 0x20f4d8: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x20f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_20f4dc:
    // 0x20f4dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20f4e0:
    // 0x20f4e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20f4e4:
    // 0x20f4e4: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f4e8:
    // 0x20f4e8: 0x2de2018  mult        $a0, $s6, $fp
    ctx->pc = 0x20f4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f4ec:
    // 0x20f4ec: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x20f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20f4f0:
    // 0x20f4f0: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20f4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20f4f4:
    // 0x20f4f4: 0x752818  mult        $a1, $v1, $s5
    ctx->pc = 0x20f4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_20f4f8:
    // 0x20f4f8: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x20f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_20f4fc:
    // 0x20f4fc: 0x24e6f240  addiu       $a2, $a3, -0xDC0
    ctx->pc = 0x20f4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963776));
label_20f500:
    // 0x20f500: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_20f504:
    // 0x20f504: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x20f504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20f508:
    // 0x20f508: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20f50c:
    // 0x20f50c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f510:
    // 0x20f510: 0x50670198  beql        $v1, $a3, . + 4 + (0x198 << 2)
label_20f514:
    if (ctx->pc == 0x20F514u) {
        ctx->pc = 0x20F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F510u;
        // 0x20f514: 0x8fb6016c  lw          $s6, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F518u;
        goto label_20f518;
    }
    ctx->pc = 0x20F510u;
    {
        const bool branch_taken_0x20f510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x20f510) {
            ctx->pc = 0x20F514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F510u;
            // 0x20f514: 0x8fb6016c  lw          $s6, 0x16C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FB74u;
            goto label_20fb74;
        }
    }
    ctx->pc = 0x20F518u;
label_20f518:
    // 0x20f518: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20f51c:
    // 0x20f51c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x20f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20f520:
    // 0x20f520: 0xc0e4060  jal         func_390180
label_20f524:
    if (ctx->pc == 0x20F524u) {
        ctx->pc = 0x20F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F520u;
        // 0x20f524: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F528u;
        goto label_20f528;
    }
    ctx->pc = 0x20F520u;
    SET_GPR_U32(ctx, 31, 0x20F528u);
    ctx->pc = 0x20F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F520u;
    // 0x20f524: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x20F520u, 0x20F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F528u;
label_20f528:
    // 0x20f528: 0xc08a61a  jal         func_229868
label_20f52c:
    if (ctx->pc == 0x20F52Cu) {
        ctx->pc = 0x20F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F528u;
        // 0x20f52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F530u;
        goto label_20f530;
    }
    ctx->pc = 0x20F528u;
    SET_GPR_U32(ctx, 31, 0x20F530u);
    ctx->pc = 0x20F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F528u;
    // 0x20f52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x20F528u, 0x20F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F530u;
label_20f530:
    // 0x20f530: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20f530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f534:
    // 0x20f534: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f538:
    // 0x20f538: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20f53c:
    // 0x20f53c: 0x2442f6a0  addiu       $v0, $v0, -0x960
    ctx->pc = 0x20f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964896));
label_20f540:
    // 0x20f540: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20f540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20f544:
    // 0x20f544: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f548:
    // 0x20f548: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20f548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20f54c:
    // 0x20f54c: 0x6c00013  bltz        $s6, . + 4 + (0x13 << 2)
label_20f550:
    if (ctx->pc == 0x20F550u) {
        ctx->pc = 0x20F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F54Cu;
        // 0x20f550: 0x7e820020  sq          $v0, 0x20($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F554u;
        goto label_20f554;
    }
    ctx->pc = 0x20F54Cu;
    {
        const bool branch_taken_0x20f54c = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x20F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F54Cu;
        // 0x20f550: 0x7e820020  sq          $v0, 0x20($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f54c) {
            ctx->pc = 0x20F59Cu;
            goto label_20f59c;
        }
    }
    ctx->pc = 0x20F554u;
label_20f554:
    // 0x20f554: 0x44961000  mtc1        $s6, $f2
    ctx->pc = 0x20f554u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20f558:
    // 0x20f558: 0x0  nop
    ctx->pc = 0x20f558u;
    // NOP
label_20f55c:
    // 0x20f55c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20f55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_20f560:
    // 0x20f560: 0x10000016  b           . + 4 + (0x16 << 2)
label_20f564:
    if (ctx->pc == 0x20F564u) {
        ctx->pc = 0x20F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F560u;
        // 0x20f564: 0xc4810070  lwc1        $f1, 0x70($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F568u;
        goto label_20f568;
    }
    ctx->pc = 0x20F560u;
    {
        const bool branch_taken_0x20f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F560u;
        // 0x20f564: 0xc4810070  lwc1        $f1, 0x70($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f560) {
            ctx->pc = 0x20F5BCu;
            goto label_20f5bc;
        }
    }
    ctx->pc = 0x20F568u;
label_20f568:
    // 0x20f568: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20f56c:
    // 0x20f56c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f570:
    // 0x20f570: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x20f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_20f574:
    // 0x20f574: 0x400013  mtlo        $v0
    ctx->pc = 0x20f574u;
    ctx->lo = GPR_U64(ctx, 2);
label_20f578:
    // 0x20f578: 0x72de1800  madd        $v1, $s6, $fp
    ctx->pc = 0x20f578u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f57c:
    // 0x20f57c: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x20f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_20f580:
    // 0x20f580: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x20f580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_20f584:
    // 0x20f584: 0x952018  mult        $a0, $a0, $s5
    ctx->pc = 0x20f584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f588:
    // 0x20f588: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20f588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20f58c:
    // 0x20f58c: 0xc068a44  jal         func_1A2910
label_20f590:
    if (ctx->pc == 0x20F590u) {
        ctx->pc = 0x20F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F58Cu;
        // 0x20f590: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F594u;
        goto label_20f594;
    }
    ctx->pc = 0x20F58Cu;
    SET_GPR_U32(ctx, 31, 0x20F594u);
    ctx->pc = 0x20F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F58Cu;
    // 0x20f590: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x20F58Cu, 0x20F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F594u;
label_20f594:
    // 0x20f594: 0x10000025  b           . + 4 + (0x25 << 2)
label_20f598:
    if (ctx->pc == 0x20F598u) {
        ctx->pc = 0x20F59Cu;
        goto label_20f59c;
    }
    ctx->pc = 0x20F594u;
    {
        const bool branch_taken_0x20f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f594) {
            ctx->pc = 0x20F62Cu;
            goto label_20f62c;
        }
    }
    ctx->pc = 0x20F59Cu;
label_20f59c:
    // 0x20f59c: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x20f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_20f5a0:
    // 0x20f5a0: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x20f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_20f5a4:
    // 0x20f5a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20f5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20f5a8:
    // 0x20f5a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20f5ac:
    // 0x20f5ac: 0x0  nop
    ctx->pc = 0x20f5acu;
    // NOP
label_20f5b0:
    // 0x20f5b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20f5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_20f5b4:
    // 0x20f5b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x20f5b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_20f5b8:
    // 0x20f5b8: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x20f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f5bc:
    // 0x20f5bc: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x20f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20f5c0:
    // 0x20f5c0: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x20f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
label_20f5c4:
    // 0x20f5c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20f5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_20f5c8:
    // 0x20f5c8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x20f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f5cc:
    // 0x20f5cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f5d0:
    // 0x20f5d0: 0x12200167  beqz        $s1, . + 4 + (0x167 << 2)
label_20f5d4:
    if (ctx->pc == 0x20F5D4u) {
        ctx->pc = 0x20F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5D0u;
        // 0x20f5d4: 0xe6800020  swc1        $f0, 0x20($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5D8u;
        goto label_20f5d8;
    }
    ctx->pc = 0x20F5D0u;
    {
        const bool branch_taken_0x20f5d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5D0u;
        // 0x20f5d4: 0xe6800020  swc1        $f0, 0x20($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5d0) {
            ctx->pc = 0x20FB70u;
            goto label_20fb70;
        }
    }
    ctx->pc = 0x20F5D8u;
label_20f5d8:
    // 0x20f5d8: 0xc088f88  jal         func_223E20
label_20f5dc:
    if (ctx->pc == 0x20F5DCu) {
        ctx->pc = 0x20F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5D8u;
        // 0x20f5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5E0u;
        goto label_20f5e0;
    }
    ctx->pc = 0x20F5D8u;
    SET_GPR_U32(ctx, 31, 0x20F5E0u);
    ctx->pc = 0x20F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5D8u;
    // 0x20f5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x20F5D8u, 0x20F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5E0u;
label_20f5e0:
    // 0x20f5e0: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_20f5e4:
    if (ctx->pc == 0x20F5E4u) {
        ctx->pc = 0x20F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E0u;
        // 0x20f5e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5E8u;
        goto label_20f5e8;
    }
    ctx->pc = 0x20F5E0u;
    {
        const bool branch_taken_0x20f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5E0u;
        // 0x20f5e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5e0) {
            ctx->pc = 0x20F9D8u;
            goto label_20f9d8;
        }
    }
    ctx->pc = 0x20F5E8u;
label_20f5e8:
    // 0x20f5e8: 0x2ed30006  sltiu       $s3, $s6, 0x6
    ctx->pc = 0x20f5e8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_20f5ec:
    // 0x20f5ec: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_20f5f0:
    if (ctx->pc == 0x20F5F0u) {
        ctx->pc = 0x20F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5ECu;
        // 0x20f5f0: 0x27b70154  addiu       $s7, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5F4u;
        goto label_20f5f4;
    }
    ctx->pc = 0x20F5ECu;
    {
        const bool branch_taken_0x20f5ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5ECu;
        // 0x20f5f0: 0x27b70154  addiu       $s7, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5ec) {
            ctx->pc = 0x20F62Cu;
            goto label_20f62c;
        }
    }
    ctx->pc = 0x20F5F4u;
label_20f5f4:
    // 0x20f5f4: 0x26900044  addiu       $s0, $s4, 0x44
    ctx->pc = 0x20f5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
label_20f5f8:
    // 0x20f5f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20f5fc:
    // 0x20f5fc: 0x0  nop
    ctx->pc = 0x20f5fcu;
    // NOP
label_20f600:
    // 0x20f600: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x20f600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_20f604:
    // 0x20f604: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x20f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20f608:
    // 0x20f608: 0x40f809  jalr        $v0
label_20f60c:
    if (ctx->pc == 0x20F60Cu) {
        ctx->pc = 0x20F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F608u;
        // 0x20f60c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F610u;
        goto label_20f610;
    }
    ctx->pc = 0x20F608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F610u);
        ctx->pc = 0x20F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F608u;
        // 0x20f60c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F608u, 0x20F610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F610u;
label_20f610:
    // 0x20f610: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f614:
    // 0x20f614: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x20f614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_20f618:
    // 0x20f618: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x20f618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_20f61c:
    // 0x20f61c: 0x1043ffd2  beq         $v0, $v1, . + 4 + (-0x2E << 2)
label_20f620:
    if (ctx->pc == 0x20F620u) {
        ctx->pc = 0x20F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F61Cu;
        // 0x20f620: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F624u;
        goto label_20f624;
    }
    ctx->pc = 0x20F61Cu;
    {
        const bool branch_taken_0x20f61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F61Cu;
        // 0x20f620: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f61c) {
            ctx->pc = 0x20F568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f568;
        }
    }
    ctx->pc = 0x20F624u;
label_20f624:
    // 0x20f624: 0x5660fff6  bnel        $s3, $zero, . + 4 + (-0xA << 2)
label_20f628:
    if (ctx->pc == 0x20F628u) {
        ctx->pc = 0x20F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F624u;
        // 0x20f628: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F62Cu;
        goto label_20f62c;
    }
    ctx->pc = 0x20F624u;
    {
        const bool branch_taken_0x20f624 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f624) {
            ctx->pc = 0x20F628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F624u;
            // 0x20f628: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f600;
        }
    }
    ctx->pc = 0x20F62Cu;
label_20f62c:
    // 0x20f62c: 0xc088bbc  jal         func_222EF0
label_20f630:
    if (ctx->pc == 0x20F630u) {
        ctx->pc = 0x20F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F62Cu;
        // 0x20f630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F634u;
        goto label_20f634;
    }
    ctx->pc = 0x20F62Cu;
    SET_GPR_U32(ctx, 31, 0x20F634u);
    ctx->pc = 0x20F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F62Cu;
    // 0x20f630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x20F62Cu, 0x20F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F634u;
label_20f634:
    // 0x20f634: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x20f634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_20f638:
    // 0x20f638: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20f638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20f63c:
    // 0x20f63c: 0x46160028  max.s       $f0, $f0, $f22
    ctx->pc = 0x20f63cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[22]);
label_20f640:
    // 0x20f640: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x20f640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_20f644:
    // 0x20f644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20f644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f648:
    // 0x20f648: 0x0  nop
    ctx->pc = 0x20f648u;
    // NOP
label_20f64c:
    // 0x20f64c: 0x46010069  min.s       $f1, $f0, $f1
    ctx->pc = 0x20f64cu;
    ctx->f[1] = std::min(ctx->f[0], ctx->f[1]);
label_20f650:
    // 0x20f650: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x20f650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f654:
    // 0x20f654: 0x0  nop
    ctx->pc = 0x20f654u;
    // NOP
label_20f658:
    // 0x20f658: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_20f65c:
    if (ctx->pc == 0x20F65Cu) {
        ctx->pc = 0x20F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F658u;
        // 0x20f65c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F660u;
        goto label_20f660;
    }
    ctx->pc = 0x20F658u;
    {
        const bool branch_taken_0x20f658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F658u;
        // 0x20f65c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f658) {
            ctx->pc = 0x20F6FCu;
            goto label_20f6fc;
        }
    }
    ctx->pc = 0x20F660u;
label_20f660:
    // 0x20f660: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f664:
    // 0x20f664: 0xa3a40144  sb          $a0, 0x144($sp)
    ctx->pc = 0x20f664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 324), (uint8_t)GPR_U32(ctx, 4));
label_20f668:
    // 0x20f668: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x20f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_20f66c:
    // 0x20f66c: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x20f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_20f670:
    // 0x20f670: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x20f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_20f674:
    // 0x20f674: 0x2de3018  mult        $a2, $s6, $fp
    ctx->pc = 0x20f674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_20f678:
    // 0x20f678: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x20f678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f67c:
    // 0x20f67c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x20f67cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_20f680:
    // 0x20f680: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20f684:
    // 0x20f684: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x20f684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_20f688:
    // 0x20f688: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x20f688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_20f68c:
    // 0x20f68c: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x20f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_20f690:
    // 0x20f690: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x20f690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_20f694:
    // 0x20f694: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20f698:
    // 0x20f698: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x20f698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
label_20f69c:
    // 0x20f69c: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x20f69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_20f6a0:
    // 0x20f6a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f6a4:
    // 0x20f6a4: 0xa0a70003  sb          $a3, 0x3($a1)
    ctx->pc = 0x20f6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 7));
label_20f6a8:
    // 0x20f6a8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20f6ac:
    // 0x20f6ac: 0x2407ff80  addiu       $a3, $zero, -0x80
    ctx->pc = 0x20f6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_20f6b0:
    // 0x20f6b0: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x20f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_20f6b4:
    // 0x20f6b4: 0x24a5f4d0  addiu       $a1, $a1, -0xB30
    ctx->pc = 0x20f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964432));
label_20f6b8:
    // 0x20f6b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20f6bc:
    // 0x20f6bc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x20f6bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f6c0:
    // 0x20f6c0: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x20f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_20f6c4:
    // 0x20f6c4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x20f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20f6c8:
    // 0x20f6c8: 0xa3a70148  sb          $a3, 0x148($sp)
    ctx->pc = 0x20f6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 328), (uint8_t)GPR_U32(ctx, 7));
label_20f6cc:
    // 0x20f6cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20f6d0:
    // 0x20f6d0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f6d4:
    // 0x20f6d4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x20f6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_20f6d8:
    // 0x20f6d8: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x20f6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f6dc:
    // 0x20f6dc: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x20f6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_20f6e0:
    // 0x20f6e0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x20f6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_20f6e4:
    // 0x20f6e4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x20f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20f6e8:
    // 0x20f6e8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20f6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20f6ec:
    // 0x20f6ec: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x20f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_20f6f0:
    // 0x20f6f0: 0x24c6f530  addiu       $a2, $a2, -0xAD0
    ctx->pc = 0x20f6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964528));
label_20f6f4:
    // 0x20f6f4: 0x10000041  b           . + 4 + (0x41 << 2)
label_20f6f8:
    if (ctx->pc == 0x20F6F8u) {
        ctx->pc = 0x20F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F4u;
        // 0x20f6f8: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6FCu;
        goto label_20f6fc;
    }
    ctx->pc = 0x20F6F4u;
    {
        const bool branch_taken_0x20f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F4u;
        // 0x20f6f8: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6f4) {
            ctx->pc = 0x20F7FCu;
            goto label_20f7fc;
        }
    }
    ctx->pc = 0x20F6FCu;
label_20f6fc:
    // 0x20f6fc: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x20f6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_20f700:
    // 0x20f700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f704:
    // 0x20f704: 0x0  nop
    ctx->pc = 0x20f704u;
    // NOP
label_20f708:
    // 0x20f708: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20f708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f70c:
    // 0x20f70c: 0x0  nop
    ctx->pc = 0x20f70cu;
    // NOP
label_20f710:
    // 0x20f710: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_20f714:
    if (ctx->pc == 0x20F714u) {
        ctx->pc = 0x20F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F710u;
        // 0x20f714: 0x2de2818  mult        $a1, $s6, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F718u;
        goto label_20f718;
    }
    ctx->pc = 0x20F710u;
    {
        const bool branch_taken_0x20f710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F710u;
        // 0x20f714: 0x2de2818  mult        $a1, $s6, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f710) {
            ctx->pc = 0x20F790u;
            goto label_20f790;
        }
    }
    ctx->pc = 0x20F718u;
label_20f718:
    // 0x20f718: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f71c:
    // 0x20f71c: 0x2407ff80  addiu       $a3, $zero, -0x80
    ctx->pc = 0x20f71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_20f720:
    // 0x20f720: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x20f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_20f724:
    // 0x20f724: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x20f724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f728:
    // 0x20f728: 0xa3a7014c  sb          $a3, 0x14C($sp)
    ctx->pc = 0x20f728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 332), (uint8_t)GPR_U32(ctx, 7));
label_20f72c:
    // 0x20f72c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20f730:
    // 0x20f730: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x20f730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20f734:
    // 0x20f734: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x20f734u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
label_20f738:
    // 0x20f738: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20f738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20f73c:
    // 0x20f73c: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x20f73cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_20f740:
    // 0x20f740: 0x24e7f4d0  addiu       $a3, $a3, -0xB30
    ctx->pc = 0x20f740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964432));
label_20f744:
    // 0x20f744: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20f744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_20f748:
    // 0x20f748: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20f74c:
    // 0x20f74c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_20f750:
    // 0x20f750: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f750u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20f754:
    // 0x20f754: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_20f758:
    // 0x20f758: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x20f758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
label_20f75c:
    // 0x20f75c: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x20f75cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
label_20f760:
    // 0x20f760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f764:
    // 0x20f764: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x20f764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
label_20f768:
    // 0x20f768: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20f768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_20f76c:
    // 0x20f76c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x20f76cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f770:
    // 0x20f770: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f774:
    // 0x20f774: 0x8c83f220  lw          $v1, -0xDE0($a0)
    ctx->pc = 0x20f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963744)));
label_20f778:
    // 0x20f778: 0x552018  mult        $a0, $v0, $s5
    ctx->pc = 0x20f778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f77c:
    // 0x20f77c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x20f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20f780:
    // 0x20f780: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x20f780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_20f784:
    // 0x20f784: 0x24a5f530  addiu       $a1, $a1, -0xAD0
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964528));
label_20f788:
    // 0x20f788: 0x1000001c  b           . + 4 + (0x1C << 2)
label_20f78c:
    if (ctx->pc == 0x20F78Cu) {
        ctx->pc = 0x20F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F788u;
        // 0x20f78c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F790u;
        goto label_20f790;
    }
    ctx->pc = 0x20F788u;
    {
        const bool branch_taken_0x20f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F788u;
        // 0x20f78c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f788) {
            ctx->pc = 0x20F7FCu;
            goto label_20f7fc;
        }
    }
    ctx->pc = 0x20F790u;
label_20f790:
    // 0x20f790: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f794:
    // 0x20f794: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20f794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20f798:
    // 0x20f798: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20f798u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20f79c:
    // 0x20f79c: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x20f79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f7a0:
    // 0x20f7a0: 0x8cc4f220  lw          $a0, -0xDE0($a2)
    ctx->pc = 0x20f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963744)));
label_20f7a4:
    // 0x20f7a4: 0x24e7f4d0  addiu       $a3, $a3, -0xB30
    ctx->pc = 0x20f7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964432));
label_20f7a8:
    // 0x20f7a8: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x20f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_20f7ac:
    // 0x20f7ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20f7b0:
    // 0x20f7b0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x20f7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_20f7b4:
    // 0x20f7b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f7b8:
    // 0x20f7b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20f7bc:
    // 0x20f7bc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x20f7bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f7c0:
    // 0x20f7c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_20f7c4:
    // 0x20f7c4: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x20f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 4));
label_20f7c8:
    // 0x20f7c8: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20f7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20f7cc:
    // 0x20f7cc: 0xa3a30150  sb          $v1, 0x150($sp)
    ctx->pc = 0x20f7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 3));
label_20f7d0:
    // 0x20f7d0: 0x24e7f530  addiu       $a3, $a3, -0xAD0
    ctx->pc = 0x20f7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964528));
label_20f7d4:
    // 0x20f7d4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x20f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_20f7d8:
    // 0x20f7d8: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f7dc:
    // 0x20f7dc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20f7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_20f7e0:
    // 0x20f7e0: 0x552018  mult        $a0, $v0, $s5
    ctx->pc = 0x20f7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f7e4:
    // 0x20f7e4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x20f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20f7e8:
    // 0x20f7e8: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x20f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_20f7ec:
    // 0x20f7ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_20f7f0:
    // 0x20f7f0: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x20f7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_20f7f4:
    // 0x20f7f4: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x20f7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
label_20f7f8:
    // 0x20f7f8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x20f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20f7fc:
    // 0x20f7fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_20f800:
    // 0x20f800: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f804:
    // 0x20f804: 0x2de9018  mult        $s2, $s6, $fp
    ctx->pc = 0x20f804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_20f808:
    // 0x20f808: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20f808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_20f80c:
    // 0x20f80c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f810:
    // 0x20f810: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x20f810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f814:
    // 0x20f814: 0x2484f350  addiu       $a0, $a0, -0xCB0
    ctx->pc = 0x20f814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964048));
label_20f818:
    // 0x20f818: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20f818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20f81c:
    // 0x20f81c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20f81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20f820:
    // 0x20f820: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x20f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_20f824:
    // 0x20f824: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x20f824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_20f828:
    // 0x20f828: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20f828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20f82c:
    // 0x20f82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20f830:
    // 0x20f830: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x20f830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_20f834:
    // 0x20f834: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20f834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20f838:
    // 0x20f838: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f83c:
    // 0x20f83c: 0x2463f6b0  addiu       $v1, $v1, -0x950
    ctx->pc = 0x20f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964912));
label_20f840:
    // 0x20f840: 0x7a870020  lq          $a3, 0x20($s4)
    ctx->pc = 0x20f840u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_20f844:
    // 0x20f844: 0x552018  mult        $a0, $v0, $s5
    ctx->pc = 0x20f844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f848:
    // 0x20f848: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_20f84c:
    // 0x20f84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f850:
    // 0x20f850: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20f850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20f854:
    // 0x20f854: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20f854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_20f858:
    // 0x20f858: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x20f858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_20f85c:
    // 0x20f85c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x20f85cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20f860:
    // 0x20f860: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x20f860u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_20f864:
    // 0x20f864: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x20f864u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_20f868:
    // 0x20f868: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x20f868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_20f86c:
    // 0x20f86c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x20f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_20f870:
    // 0x20f870: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_20f874:
    // 0x20f874: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x20f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_20f878:
    // 0x20f878: 0xc068818  jal         func_1A2060
label_20f87c:
    if (ctx->pc == 0x20F87Cu) {
        ctx->pc = 0x20F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F878u;
        // 0x20f87c: 0x7fa70020  sq          $a3, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F880u;
        goto label_20f880;
    }
    ctx->pc = 0x20F878u;
    SET_GPR_U32(ctx, 31, 0x20F880u);
    ctx->pc = 0x20F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F878u;
    // 0x20f87c: 0x7fa70020  sq          $a3, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x20F878u, 0x20F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F880u;
label_20f880:
    // 0x20f880: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f884:
    // 0x20f884: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x20f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_20f888:
    // 0x20f888: 0xa3a20154  sb          $v0, 0x154($sp)
    ctx->pc = 0x20f888u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 340), (uint8_t)GPR_U32(ctx, 2));
label_20f88c:
    // 0x20f88c: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x20f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_20f890:
    // 0x20f890: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20f890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f894:
    // 0x20f894: 0xa2e30001  sb          $v1, 0x1($s7)
    ctx->pc = 0x20f894u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 3));
label_20f898:
    // 0x20f898: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20f898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20f89c:
    // 0x20f89c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x20f89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20f8a0:
    // 0x20f8a0: 0xa2e30003  sb          $v1, 0x3($s7)
    ctx->pc = 0x20f8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 3));
label_20f8a4:
    // 0x20f8a4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20f8a8:
    // 0x20f8a8: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x20f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_20f8ac:
    // 0x20f8ac: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_20f8b0:
    // 0x20f8b0: 0xc068992  jal         func_1A2648
label_20f8b4:
    if (ctx->pc == 0x20F8B4u) {
        ctx->pc = 0x20F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B0u;
        // 0x20f8b4: 0xa2e20002  sb          $v0, 0x2($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8B8u;
        goto label_20f8b8;
    }
    ctx->pc = 0x20F8B0u;
    SET_GPR_U32(ctx, 31, 0x20F8B8u);
    ctx->pc = 0x20F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F8B0u;
    // 0x20f8b4: 0xa2e20002  sb          $v0, 0x2($s7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x20F8B0u, 0x20F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F8B8u;
label_20f8b8:
    // 0x20f8b8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f8bc:
    // 0x20f8bc: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f8c0:
    // 0x20f8c0: 0xc4c0f9e0  lwc1        $f0, -0x620($a2)
    ctx->pc = 0x20f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f8c4:
    // 0x20f8c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f8c8:
    // 0x20f8c8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f8cc:
    // 0x20f8cc: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x20f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_20f8d0:
    // 0x20f8d0: 0x24c6f6a0  addiu       $a2, $a2, -0x960
    ctx->pc = 0x20f8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964896));
label_20f8d4:
    // 0x20f8d4: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x20f8d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f8d8:
    // 0x20f8d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20f8dc:
    // 0x20f8dc: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x20f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20f8e0:
    // 0x20f8e0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x20f8e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_20f8e4:
    // 0x20f8e4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x20f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20f8e8:
    // 0x20f8e8: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x20f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_20f8ec:
    // 0x20f8ec: 0xc068848  jal         func_1A2120
label_20f8f0:
    if (ctx->pc == 0x20F8F0u) {
        ctx->pc = 0x20F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8ECu;
        // 0x20f8f0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8F4u;
        goto label_20f8f4;
    }
    ctx->pc = 0x20F8ECu;
    SET_GPR_U32(ctx, 31, 0x20F8F4u);
    ctx->pc = 0x20F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F8ECu;
    // 0x20f8f0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x20F8ECu, 0x20F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F8F4u;
label_20f8f4:
    // 0x20f8f4: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f8f8:
    // 0x20f8f8: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20f8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20f8fc:
    // 0x20f8fc: 0x24e7f240  addiu       $a3, $a3, -0xDC0
    ctx->pc = 0x20f8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963776));
label_20f900:
    // 0x20f900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f904:
    // 0x20f904: 0x552018  mult        $a0, $v0, $s5
    ctx->pc = 0x20f904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20f908:
    // 0x20f908: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x20f908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_20f90c:
    // 0x20f90c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20f90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20f910:
    // 0x20f910: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x20f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_20f914:
    // 0x20f914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f918:
    // 0x20f918: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x20f918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_20f91c:
    // 0x20f91c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f920:
    // 0x20f920: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20f920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f924:
    // 0x20f924: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20f928:
    // 0x20f928: 0xc068818  jal         func_1A2060
label_20f92c:
    if (ctx->pc == 0x20F92Cu) {
        ctx->pc = 0x20F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F928u;
        // 0x20f92c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F930u;
        goto label_20f930;
    }
    ctx->pc = 0x20F928u;
    SET_GPR_U32(ctx, 31, 0x20F930u);
    ctx->pc = 0x20F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F928u;
    // 0x20f92c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x20F928u, 0x20F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F930u;
label_20f930:
    // 0x20f930: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f934:
    // 0x20f934: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f938:
    // 0x20f938: 0x24c6f6a0  addiu       $a2, $a2, -0x960
    ctx->pc = 0x20f938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964896));
label_20f93c:
    // 0x20f93c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20f940:
    // 0x20f940: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x20f940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_20f944:
    // 0x20f944: 0xc460f9e0  lwc1        $f0, -0x620($v1)
    ctx->pc = 0x20f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f948:
    // 0x20f948: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20f94c:
    // 0x20f94c: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x20f94cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f950:
    // 0x20f950: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x20f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20f954:
    // 0x20f954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f958:
    // 0x20f958: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x20f958u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_20f95c:
    // 0x20f95c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x20f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20f960:
    // 0x20f960: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20f960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_20f964:
    // 0x20f964: 0xc068848  jal         func_1A2120
label_20f968:
    if (ctx->pc == 0x20F968u) {
        ctx->pc = 0x20F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F964u;
        // 0x20f968: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F96Cu;
        goto label_20f96c;
    }
    ctx->pc = 0x20F964u;
    SET_GPR_U32(ctx, 31, 0x20F96Cu);
    ctx->pc = 0x20F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F964u;
    // 0x20f968: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x20F964u, 0x20F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F96Cu;
label_20f96c:
    // 0x20f96c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f970:
    // 0x20f970: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x20f970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_20f974:
    // 0x20f974: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x20f974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_20f978:
    // 0x20f978: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x20f978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_20f97c:
    // 0x20f97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20f97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f980:
    // 0x20f980: 0x24c6f700  addiu       $a2, $a2, -0x900
    ctx->pc = 0x20f980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964992));
label_20f984:
    // 0x20f984: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x20f984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f988:
    // 0x20f988: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x20f988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_20f98c:
    // 0x20f98c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20f990:
    // 0x20f990: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x20f990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_20f994:
    // 0x20f994: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_20f998:
    // 0x20f998: 0x46160028  max.s       $f0, $f0, $f22
    ctx->pc = 0x20f998u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[22]);
label_20f99c:
    // 0x20f99c: 0x24e7f510  addiu       $a3, $a3, -0xAF0
    ctx->pc = 0x20f99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964496));
label_20f9a0:
    // 0x20f9a0: 0x46170029  min.s       $f0, $f0, $f23
    ctx->pc = 0x20f9a0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[23]);
label_20f9a4:
    // 0x20f9a4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x20f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20f9a8:
    // 0x20f9a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f9ac:
    // 0x20f9ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20f9acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20f9b0:
    // 0x20f9b0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x20f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_20f9b4:
    // 0x20f9b4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x20f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_20f9b8:
    // 0x20f9b8: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x20f9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_20f9bc:
    // 0x20f9bc: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f9c0:
    // 0x20f9c0: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20f9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20f9c4:
    // 0x20f9c4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x20f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20f9c8:
    // 0x20f9c8: 0xc070904  jal         func_1C2410
label_20f9cc:
    if (ctx->pc == 0x20F9CCu) {
        ctx->pc = 0x20F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9C8u;
        // 0x20f9cc: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9D0u;
        goto label_20f9d0;
    }
    ctx->pc = 0x20F9C8u;
    SET_GPR_U32(ctx, 31, 0x20F9D0u);
    ctx->pc = 0x20F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9C8u;
    // 0x20f9cc: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2410u, 0x20F9C8u, 0x20F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9D0u;
label_20f9d0:
    // 0x20f9d0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_20f9d4:
    if (ctx->pc == 0x20F9D4u) {
        ctx->pc = 0x20F9D8u;
        goto label_20f9d8;
    }
    ctx->pc = 0x20F9D0u;
    {
        const bool branch_taken_0x20f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9d0) {
            ctx->pc = 0x20FAC4u;
            goto label_20fac4;
        }
    }
    ctx->pc = 0x20F9D8u;
label_20f9d8:
    // 0x20f9d8: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20f9dc:
    // 0x20f9dc: 0x2de9018  mult        $s2, $s6, $fp
    ctx->pc = 0x20f9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_20f9e0:
    // 0x20f9e0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20f9e4:
    // 0x20f9e4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_20f9e8:
    // 0x20f9e8: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x20f9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20f9ec:
    // 0x20f9ec: 0x24c6f350  addiu       $a2, $a2, -0xCB0
    ctx->pc = 0x20f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964048));
label_20f9f0:
    // 0x20f9f0: 0x2484f350  addiu       $a0, $a0, -0xCB0
    ctx->pc = 0x20f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964048));
label_20f9f4:
    // 0x20f9f4: 0x2485ff00  addiu       $a1, $a0, -0x100
    ctx->pc = 0x20f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
label_20f9f8:
    // 0x20f9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f9fc:
    // 0x20f9fc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20fa00:
    // 0x20fa00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20fa04:
    // 0x20fa04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20fa08:
    // 0x20fa08: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fa0c:
    // 0x20fa0c: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x20fa0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20fa10:
    // 0x20fa10: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x20fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20fa14:
    // 0x20fa14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20fa18:
    // 0x20fa18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_20fa1c:
    // 0x20fa1c: 0xc088b90  jal         func_222E40
label_20fa20:
    if (ctx->pc == 0x20FA20u) {
        ctx->pc = 0x20FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA1Cu;
        // 0x20fa20: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA24u;
        goto label_20fa24;
    }
    ctx->pc = 0x20FA1Cu;
    SET_GPR_U32(ctx, 31, 0x20FA24u);
    ctx->pc = 0x20FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA1Cu;
    // 0x20fa20: 0x8e900040  lw          $s0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x20FA1Cu, 0x20FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA24u;
label_20fa24:
    // 0x20fa24: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x20fa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20fa28:
    // 0x20fa28: 0x0  nop
    ctx->pc = 0x20fa28u;
    // NOP
label_20fa2c:
    // 0x20fa2c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20fa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_20fa30:
    // 0x20fa30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20fa34:
    // 0x20fa34: 0x4616a528  max.s       $f20, $f20, $f22
    ctx->pc = 0x20fa34u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[22]);
label_20fa38:
    // 0x20fa38: 0xc088b98  jal         func_222E60
label_20fa3c:
    if (ctx->pc == 0x20FA3Cu) {
        ctx->pc = 0x20FA40u;
        goto label_20fa40;
    }
    ctx->pc = 0x20FA38u;
    SET_GPR_U32(ctx, 31, 0x20FA40u);
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x20FA38u, 0x20FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA40u;
label_20fa40:
    // 0x20fa40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20fa44:
    // 0x20fa44: 0x0  nop
    ctx->pc = 0x20fa44u;
    // NOP
label_20fa48:
    // 0x20fa48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20fa48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20fa4c:
    // 0x20fa4c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x20fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_20fa50:
    // 0x20fa50: 0x2151018  mult        $v0, $s0, $s5
    ctx->pc = 0x20fa50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20fa54:
    // 0x20fa54: 0x46160028  max.s       $f0, $f0, $f22
    ctx->pc = 0x20fa54u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[22]);
label_20fa58:
    // 0x20fa58: 0x0  nop
    ctx->pc = 0x20fa58u;
    // NOP
label_20fa5c:
    // 0x20fa5c: 0x0  nop
    ctx->pc = 0x20fa5cu;
    // NOP
label_20fa60:
    // 0x20fa60: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x20fa60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_20fa64:
    // 0x20fa64: 0x2463f510  addiu       $v1, $v1, -0xAF0
    ctx->pc = 0x20fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964496));
label_20fa68:
    // 0x20fa68: 0x4616a528  max.s       $f20, $f20, $f22
    ctx->pc = 0x20fa68u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[22]);
label_20fa6c:
    // 0x20fa6c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20fa70:
    // 0x20fa70: 0x4617a529  min.s       $f20, $f20, $f23
    ctx->pc = 0x20fa70u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[23]);
label_20fa74:
    // 0x20fa74: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20fa78:
    // 0x20fa78: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20fa78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20fa7c:
    // 0x20fa7c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20fa80:
    // 0x20fa80: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x20fa80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_20fa84:
    // 0x20fa84: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x20fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fa88:
    // 0x20fa88: 0x8c44f200  lw          $a0, -0xE00($v0)
    ctx->pc = 0x20fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963712)));
label_20fa8c:
    // 0x20fa8c: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x20fa8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20fa90:
    // 0x20fa90: 0x8cc5f208  lw          $a1, -0xDF8($a2)
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963720)));
label_20fa94:
    // 0x20fa94: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x20fa94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_20fa98:
    // 0x20fa98: 0x24c6f350  addiu       $a2, $a2, -0xCB0
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964048));
label_20fa9c:
    // 0x20fa9c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x20fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20faa0:
    // 0x20faa0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_20faa4:
    // 0x20faa4: 0xac6401f0  sw          $a0, 0x1F0($v1)
    ctx->pc = 0x20faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 496), GPR_U32(ctx, 4));
label_20faa8:
    // 0x20faa8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x20faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_20faac:
    // 0x20faac: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x20faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fab0:
    // 0x20fab0: 0x2484f544  addiu       $a0, $a0, -0xABC
    ctx->pc = 0x20fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964548));
label_20fab4:
    // 0x20fab4: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x20fab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20fab8:
    // 0x20fab8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x20fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20fabc:
    // 0x20fabc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20fac0:
    // 0x20fac0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x20fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_20fac4:
    // 0x20fac4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x20fac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_20fac8:
    // 0x20fac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20fac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20facc:
    // 0x20facc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20faccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20fad0:
    // 0x20fad0: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x20fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_20fad4:
    // 0x20fad4: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fad8:
    // 0x20fad8: 0x400013  mtlo        $v0
    ctx->pc = 0x20fad8u;
    ctx->lo = GPR_U64(ctx, 2);
label_20fadc:
    // 0x20fadc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x20fadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_20fae0:
    // 0x20fae0: 0x72de9000  madd        $s2, $s6, $fp
    ctx->pc = 0x20fae0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_20fae4:
    // 0x20fae4: 0x952018  mult        $a0, $a0, $s5
    ctx->pc = 0x20fae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20fae8:
    // 0x20fae8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20fae8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_20faec:
    // 0x20faec: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x20faecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_20faf0:
    // 0x20faf0: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x20faf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_20faf4:
    // 0x20faf4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x20faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_20faf8:
    // 0x20faf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20faf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20fafc:
    // 0x20fafc: 0xc06898e  jal         func_1A2638
label_20fb00:
    if (ctx->pc == 0x20FB00u) {
        ctx->pc = 0x20FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAFCu;
        // 0x20fb00: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB04u;
        goto label_20fb04;
    }
    ctx->pc = 0x20FAFCu;
    SET_GPR_U32(ctx, 31, 0x20FB04u);
    ctx->pc = 0x20FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FAFCu;
    // 0x20fb00: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x20FAFCu, 0x20FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB04u;
label_20fb04:
    // 0x20fb04: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fb08:
    // 0x20fb08: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20fb08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20fb0c:
    // 0x20fb0c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20fb10:
    // 0x20fb10: 0xc06886e  jal         func_1A21B8
label_20fb14:
    if (ctx->pc == 0x20FB14u) {
        ctx->pc = 0x20FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB10u;
        // 0x20fb14: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB18u;
        goto label_20fb18;
    }
    ctx->pc = 0x20FB10u;
    SET_GPR_U32(ctx, 31, 0x20FB18u);
    ctx->pc = 0x20FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB10u;
    // 0x20fb14: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x20FB10u, 0x20FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB18u;
label_20fb18:
    // 0x20fb18: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fb1c:
    // 0x20fb1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20fb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20fb20:
    // 0x20fb20: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20fb20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20fb24:
    // 0x20fb24: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20fb28:
    // 0x20fb28: 0xc06898e  jal         func_1A2638
label_20fb2c:
    if (ctx->pc == 0x20FB2Cu) {
        ctx->pc = 0x20FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB28u;
        // 0x20fb2c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB30u;
        goto label_20fb30;
    }
    ctx->pc = 0x20FB28u;
    SET_GPR_U32(ctx, 31, 0x20FB30u);
    ctx->pc = 0x20FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB28u;
    // 0x20fb2c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x20FB28u, 0x20FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB30u;
label_20fb30:
    // 0x20fb30: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fb34:
    // 0x20fb34: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20fb34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20fb38:
    // 0x20fb38: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20fb3c:
    // 0x20fb3c: 0xc06886e  jal         func_1A21B8
label_20fb40:
    if (ctx->pc == 0x20FB40u) {
        ctx->pc = 0x20FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB3Cu;
        // 0x20fb40: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB44u;
        goto label_20fb44;
    }
    ctx->pc = 0x20FB3Cu;
    SET_GPR_U32(ctx, 31, 0x20FB44u);
    ctx->pc = 0x20FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB3Cu;
    // 0x20fb40: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x20FB3Cu, 0x20FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB44u;
label_20fb44:
    // 0x20fb44: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fb48:
    // 0x20fb48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20fb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20fb4c:
    // 0x20fb4c: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20fb4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20fb50:
    // 0x20fb50: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20fb54:
    // 0x20fb54: 0xc070962  jal         func_1C2588
label_20fb58:
    if (ctx->pc == 0x20FB58u) {
        ctx->pc = 0x20FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB54u;
        // 0x20fb58: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB5Cu;
        goto label_20fb5c;
    }
    ctx->pc = 0x20FB54u;
    SET_GPR_U32(ctx, 31, 0x20FB5Cu);
    ctx->pc = 0x20FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB54u;
    // 0x20fb58: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2588u, 0x20FB54u, 0x20FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB5Cu;
label_20fb5c:
    // 0x20fb5c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_20fb60:
    // 0x20fb60: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x20fb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20fb64:
    // 0x20fb64: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x20fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20fb68:
    // 0x20fb68: 0xc0708ba  jal         func_1C22E8
label_20fb6c:
    if (ctx->pc == 0x20FB6Cu) {
        ctx->pc = 0x20FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB68u;
        // 0x20fb6c: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB70u;
        goto label_20fb70;
    }
    ctx->pc = 0x20FB68u;
    SET_GPR_U32(ctx, 31, 0x20FB70u);
    ctx->pc = 0x20FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB68u;
    // 0x20fb6c: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22E8u, 0x20FB68u, 0x20FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB70u;
label_20fb70:
    // 0x20fb70: 0x8fb6016c  lw          $s6, 0x16C($sp)
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_20fb74:
    // 0x20fb74: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20fb78:
    // 0x20fb78: 0x5440fdcf  bnel        $v0, $zero, . + 4 + (-0x231 << 2)
label_20fb7c:
    if (ctx->pc == 0x20FB7Cu) {
        ctx->pc = 0x20FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB78u;
        // 0x20fb7c: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB80u;
        goto label_20fb80;
    }
    ctx->pc = 0x20FB78u;
    {
        const bool branch_taken_0x20fb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb78) {
            ctx->pc = 0x20FB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FB78u;
            // 0x20fb7c: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f2b8;
        }
    }
    ctx->pc = 0x20FB80u;
label_20fb80:
    // 0x20fb80: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x20fb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_20fb84:
    // 0x20fb84: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x20fb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_20fb88:
    // 0x20fb88: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x20fb88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_20fb8c:
    // 0x20fb8c: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x20fb8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_20fb90:
    // 0x20fb90: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x20fb90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_20fb94:
    // 0x20fb94: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x20fb94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_20fb98:
    // 0x20fb98: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x20fb98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_20fb9c:
    // 0x20fb9c: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x20fb9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_20fba0:
    // 0x20fba0: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x20fba0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_20fba4:
    // 0x20fba4: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x20fba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_20fba8:
    // 0x20fba8: 0xc7b70238  lwc1        $f23, 0x238($sp)
    ctx->pc = 0x20fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_20fbac:
    // 0x20fbac: 0xc7b60230  lwc1        $f22, 0x230($sp)
    ctx->pc = 0x20fbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_20fbb0:
    // 0x20fbb0: 0xc7b50228  lwc1        $f21, 0x228($sp)
    ctx->pc = 0x20fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20fbb4:
    // 0x20fbb4: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x20fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20fbb8:
    // 0x20fbb8: 0x3e00008  jr          $ra
label_20fbbc:
    if (ctx->pc == 0x20FBBCu) {
        ctx->pc = 0x20FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB8u;
        // 0x20fbbc: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBC0u;
        goto label_fallthrough_0x20fbb8;
    }
    ctx->pc = 0x20FBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB8u;
        // 0x20fbbc: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20fbb8:
    ctx->pc = 0x20FBC0u;
}
