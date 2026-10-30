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

// Function: sub_0013E708
// Address: 0x13e708 - 0x13f930
void sub_0013E708_0x13e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E708_0x13e708");
#endif

    switch (ctx->pc) {
        case 0x13e708u: goto label_13e708;
        case 0x13e70cu: goto label_13e70c;
        case 0x13e710u: goto label_13e710;
        case 0x13e714u: goto label_13e714;
        case 0x13e718u: goto label_13e718;
        case 0x13e71cu: goto label_13e71c;
        case 0x13e720u: goto label_13e720;
        case 0x13e724u: goto label_13e724;
        case 0x13e728u: goto label_13e728;
        case 0x13e72cu: goto label_13e72c;
        case 0x13e730u: goto label_13e730;
        case 0x13e734u: goto label_13e734;
        case 0x13e738u: goto label_13e738;
        case 0x13e73cu: goto label_13e73c;
        case 0x13e740u: goto label_13e740;
        case 0x13e744u: goto label_13e744;
        case 0x13e748u: goto label_13e748;
        case 0x13e74cu: goto label_13e74c;
        case 0x13e750u: goto label_13e750;
        case 0x13e754u: goto label_13e754;
        case 0x13e758u: goto label_13e758;
        case 0x13e75cu: goto label_13e75c;
        case 0x13e760u: goto label_13e760;
        case 0x13e764u: goto label_13e764;
        case 0x13e768u: goto label_13e768;
        case 0x13e76cu: goto label_13e76c;
        case 0x13e770u: goto label_13e770;
        case 0x13e774u: goto label_13e774;
        case 0x13e778u: goto label_13e778;
        case 0x13e77cu: goto label_13e77c;
        case 0x13e780u: goto label_13e780;
        case 0x13e784u: goto label_13e784;
        case 0x13e788u: goto label_13e788;
        case 0x13e78cu: goto label_13e78c;
        case 0x13e790u: goto label_13e790;
        case 0x13e794u: goto label_13e794;
        case 0x13e798u: goto label_13e798;
        case 0x13e79cu: goto label_13e79c;
        case 0x13e7a0u: goto label_13e7a0;
        case 0x13e7a4u: goto label_13e7a4;
        case 0x13e7a8u: goto label_13e7a8;
        case 0x13e7acu: goto label_13e7ac;
        case 0x13e7b0u: goto label_13e7b0;
        case 0x13e7b4u: goto label_13e7b4;
        case 0x13e7b8u: goto label_13e7b8;
        case 0x13e7bcu: goto label_13e7bc;
        case 0x13e7c0u: goto label_13e7c0;
        case 0x13e7c4u: goto label_13e7c4;
        case 0x13e7c8u: goto label_13e7c8;
        case 0x13e7ccu: goto label_13e7cc;
        case 0x13e7d0u: goto label_13e7d0;
        case 0x13e7d4u: goto label_13e7d4;
        case 0x13e7d8u: goto label_13e7d8;
        case 0x13e7dcu: goto label_13e7dc;
        case 0x13e7e0u: goto label_13e7e0;
        case 0x13e7e4u: goto label_13e7e4;
        case 0x13e7e8u: goto label_13e7e8;
        case 0x13e7ecu: goto label_13e7ec;
        case 0x13e7f0u: goto label_13e7f0;
        case 0x13e7f4u: goto label_13e7f4;
        case 0x13e7f8u: goto label_13e7f8;
        case 0x13e7fcu: goto label_13e7fc;
        case 0x13e800u: goto label_13e800;
        case 0x13e804u: goto label_13e804;
        case 0x13e808u: goto label_13e808;
        case 0x13e80cu: goto label_13e80c;
        case 0x13e810u: goto label_13e810;
        case 0x13e814u: goto label_13e814;
        case 0x13e818u: goto label_13e818;
        case 0x13e81cu: goto label_13e81c;
        case 0x13e820u: goto label_13e820;
        case 0x13e824u: goto label_13e824;
        case 0x13e828u: goto label_13e828;
        case 0x13e82cu: goto label_13e82c;
        case 0x13e830u: goto label_13e830;
        case 0x13e834u: goto label_13e834;
        case 0x13e838u: goto label_13e838;
        case 0x13e83cu: goto label_13e83c;
        case 0x13e840u: goto label_13e840;
        case 0x13e844u: goto label_13e844;
        case 0x13e848u: goto label_13e848;
        case 0x13e84cu: goto label_13e84c;
        case 0x13e850u: goto label_13e850;
        case 0x13e854u: goto label_13e854;
        case 0x13e858u: goto label_13e858;
        case 0x13e85cu: goto label_13e85c;
        case 0x13e860u: goto label_13e860;
        case 0x13e864u: goto label_13e864;
        case 0x13e868u: goto label_13e868;
        case 0x13e86cu: goto label_13e86c;
        case 0x13e870u: goto label_13e870;
        case 0x13e874u: goto label_13e874;
        case 0x13e878u: goto label_13e878;
        case 0x13e87cu: goto label_13e87c;
        case 0x13e880u: goto label_13e880;
        case 0x13e884u: goto label_13e884;
        case 0x13e888u: goto label_13e888;
        case 0x13e88cu: goto label_13e88c;
        case 0x13e890u: goto label_13e890;
        case 0x13e894u: goto label_13e894;
        case 0x13e898u: goto label_13e898;
        case 0x13e89cu: goto label_13e89c;
        case 0x13e8a0u: goto label_13e8a0;
        case 0x13e8a4u: goto label_13e8a4;
        case 0x13e8a8u: goto label_13e8a8;
        case 0x13e8acu: goto label_13e8ac;
        case 0x13e8b0u: goto label_13e8b0;
        case 0x13e8b4u: goto label_13e8b4;
        case 0x13e8b8u: goto label_13e8b8;
        case 0x13e8bcu: goto label_13e8bc;
        case 0x13e8c0u: goto label_13e8c0;
        case 0x13e8c4u: goto label_13e8c4;
        case 0x13e8c8u: goto label_13e8c8;
        case 0x13e8ccu: goto label_13e8cc;
        case 0x13e8d0u: goto label_13e8d0;
        case 0x13e8d4u: goto label_13e8d4;
        case 0x13e8d8u: goto label_13e8d8;
        case 0x13e8dcu: goto label_13e8dc;
        case 0x13e8e0u: goto label_13e8e0;
        case 0x13e8e4u: goto label_13e8e4;
        case 0x13e8e8u: goto label_13e8e8;
        case 0x13e8ecu: goto label_13e8ec;
        case 0x13e8f0u: goto label_13e8f0;
        case 0x13e8f4u: goto label_13e8f4;
        case 0x13e8f8u: goto label_13e8f8;
        case 0x13e8fcu: goto label_13e8fc;
        case 0x13e900u: goto label_13e900;
        case 0x13e904u: goto label_13e904;
        case 0x13e908u: goto label_13e908;
        case 0x13e90cu: goto label_13e90c;
        case 0x13e910u: goto label_13e910;
        case 0x13e914u: goto label_13e914;
        case 0x13e918u: goto label_13e918;
        case 0x13e91cu: goto label_13e91c;
        case 0x13e920u: goto label_13e920;
        case 0x13e924u: goto label_13e924;
        case 0x13e928u: goto label_13e928;
        case 0x13e92cu: goto label_13e92c;
        case 0x13e930u: goto label_13e930;
        case 0x13e934u: goto label_13e934;
        case 0x13e938u: goto label_13e938;
        case 0x13e93cu: goto label_13e93c;
        case 0x13e940u: goto label_13e940;
        case 0x13e944u: goto label_13e944;
        case 0x13e948u: goto label_13e948;
        case 0x13e94cu: goto label_13e94c;
        case 0x13e950u: goto label_13e950;
        case 0x13e954u: goto label_13e954;
        case 0x13e958u: goto label_13e958;
        case 0x13e95cu: goto label_13e95c;
        case 0x13e960u: goto label_13e960;
        case 0x13e964u: goto label_13e964;
        case 0x13e968u: goto label_13e968;
        case 0x13e96cu: goto label_13e96c;
        case 0x13e970u: goto label_13e970;
        case 0x13e974u: goto label_13e974;
        case 0x13e978u: goto label_13e978;
        case 0x13e97cu: goto label_13e97c;
        case 0x13e980u: goto label_13e980;
        case 0x13e984u: goto label_13e984;
        case 0x13e988u: goto label_13e988;
        case 0x13e98cu: goto label_13e98c;
        case 0x13e990u: goto label_13e990;
        case 0x13e994u: goto label_13e994;
        case 0x13e998u: goto label_13e998;
        case 0x13e99cu: goto label_13e99c;
        case 0x13e9a0u: goto label_13e9a0;
        case 0x13e9a4u: goto label_13e9a4;
        case 0x13e9a8u: goto label_13e9a8;
        case 0x13e9acu: goto label_13e9ac;
        case 0x13e9b0u: goto label_13e9b0;
        case 0x13e9b4u: goto label_13e9b4;
        case 0x13e9b8u: goto label_13e9b8;
        case 0x13e9bcu: goto label_13e9bc;
        case 0x13e9c0u: goto label_13e9c0;
        case 0x13e9c4u: goto label_13e9c4;
        case 0x13e9c8u: goto label_13e9c8;
        case 0x13e9ccu: goto label_13e9cc;
        case 0x13e9d0u: goto label_13e9d0;
        case 0x13e9d4u: goto label_13e9d4;
        case 0x13e9d8u: goto label_13e9d8;
        case 0x13e9dcu: goto label_13e9dc;
        case 0x13e9e0u: goto label_13e9e0;
        case 0x13e9e4u: goto label_13e9e4;
        case 0x13e9e8u: goto label_13e9e8;
        case 0x13e9ecu: goto label_13e9ec;
        case 0x13e9f0u: goto label_13e9f0;
        case 0x13e9f4u: goto label_13e9f4;
        case 0x13e9f8u: goto label_13e9f8;
        case 0x13e9fcu: goto label_13e9fc;
        case 0x13ea00u: goto label_13ea00;
        case 0x13ea04u: goto label_13ea04;
        case 0x13ea08u: goto label_13ea08;
        case 0x13ea0cu: goto label_13ea0c;
        case 0x13ea10u: goto label_13ea10;
        case 0x13ea14u: goto label_13ea14;
        case 0x13ea18u: goto label_13ea18;
        case 0x13ea1cu: goto label_13ea1c;
        case 0x13ea20u: goto label_13ea20;
        case 0x13ea24u: goto label_13ea24;
        case 0x13ea28u: goto label_13ea28;
        case 0x13ea2cu: goto label_13ea2c;
        case 0x13ea30u: goto label_13ea30;
        case 0x13ea34u: goto label_13ea34;
        case 0x13ea38u: goto label_13ea38;
        case 0x13ea3cu: goto label_13ea3c;
        case 0x13ea40u: goto label_13ea40;
        case 0x13ea44u: goto label_13ea44;
        case 0x13ea48u: goto label_13ea48;
        case 0x13ea4cu: goto label_13ea4c;
        case 0x13ea50u: goto label_13ea50;
        case 0x13ea54u: goto label_13ea54;
        case 0x13ea58u: goto label_13ea58;
        case 0x13ea5cu: goto label_13ea5c;
        case 0x13ea60u: goto label_13ea60;
        case 0x13ea64u: goto label_13ea64;
        case 0x13ea68u: goto label_13ea68;
        case 0x13ea6cu: goto label_13ea6c;
        case 0x13ea70u: goto label_13ea70;
        case 0x13ea74u: goto label_13ea74;
        case 0x13ea78u: goto label_13ea78;
        case 0x13ea7cu: goto label_13ea7c;
        case 0x13ea80u: goto label_13ea80;
        case 0x13ea84u: goto label_13ea84;
        case 0x13ea88u: goto label_13ea88;
        case 0x13ea8cu: goto label_13ea8c;
        case 0x13ea90u: goto label_13ea90;
        case 0x13ea94u: goto label_13ea94;
        case 0x13ea98u: goto label_13ea98;
        case 0x13ea9cu: goto label_13ea9c;
        case 0x13eaa0u: goto label_13eaa0;
        case 0x13eaa4u: goto label_13eaa4;
        case 0x13eaa8u: goto label_13eaa8;
        case 0x13eaacu: goto label_13eaac;
        case 0x13eab0u: goto label_13eab0;
        case 0x13eab4u: goto label_13eab4;
        case 0x13eab8u: goto label_13eab8;
        case 0x13eabcu: goto label_13eabc;
        case 0x13eac0u: goto label_13eac0;
        case 0x13eac4u: goto label_13eac4;
        case 0x13eac8u: goto label_13eac8;
        case 0x13eaccu: goto label_13eacc;
        case 0x13ead0u: goto label_13ead0;
        case 0x13ead4u: goto label_13ead4;
        case 0x13ead8u: goto label_13ead8;
        case 0x13eadcu: goto label_13eadc;
        case 0x13eae0u: goto label_13eae0;
        case 0x13eae4u: goto label_13eae4;
        case 0x13eae8u: goto label_13eae8;
        case 0x13eaecu: goto label_13eaec;
        case 0x13eaf0u: goto label_13eaf0;
        case 0x13eaf4u: goto label_13eaf4;
        case 0x13eaf8u: goto label_13eaf8;
        case 0x13eafcu: goto label_13eafc;
        case 0x13eb00u: goto label_13eb00;
        case 0x13eb04u: goto label_13eb04;
        case 0x13eb08u: goto label_13eb08;
        case 0x13eb0cu: goto label_13eb0c;
        case 0x13eb10u: goto label_13eb10;
        case 0x13eb14u: goto label_13eb14;
        case 0x13eb18u: goto label_13eb18;
        case 0x13eb1cu: goto label_13eb1c;
        case 0x13eb20u: goto label_13eb20;
        case 0x13eb24u: goto label_13eb24;
        case 0x13eb28u: goto label_13eb28;
        case 0x13eb2cu: goto label_13eb2c;
        case 0x13eb30u: goto label_13eb30;
        case 0x13eb34u: goto label_13eb34;
        case 0x13eb38u: goto label_13eb38;
        case 0x13eb3cu: goto label_13eb3c;
        case 0x13eb40u: goto label_13eb40;
        case 0x13eb44u: goto label_13eb44;
        case 0x13eb48u: goto label_13eb48;
        case 0x13eb4cu: goto label_13eb4c;
        case 0x13eb50u: goto label_13eb50;
        case 0x13eb54u: goto label_13eb54;
        case 0x13eb58u: goto label_13eb58;
        case 0x13eb5cu: goto label_13eb5c;
        case 0x13eb60u: goto label_13eb60;
        case 0x13eb64u: goto label_13eb64;
        case 0x13eb68u: goto label_13eb68;
        case 0x13eb6cu: goto label_13eb6c;
        case 0x13eb70u: goto label_13eb70;
        case 0x13eb74u: goto label_13eb74;
        case 0x13eb78u: goto label_13eb78;
        case 0x13eb7cu: goto label_13eb7c;
        case 0x13eb80u: goto label_13eb80;
        case 0x13eb84u: goto label_13eb84;
        case 0x13eb88u: goto label_13eb88;
        case 0x13eb8cu: goto label_13eb8c;
        case 0x13eb90u: goto label_13eb90;
        case 0x13eb94u: goto label_13eb94;
        case 0x13eb98u: goto label_13eb98;
        case 0x13eb9cu: goto label_13eb9c;
        case 0x13eba0u: goto label_13eba0;
        case 0x13eba4u: goto label_13eba4;
        case 0x13eba8u: goto label_13eba8;
        case 0x13ebacu: goto label_13ebac;
        case 0x13ebb0u: goto label_13ebb0;
        case 0x13ebb4u: goto label_13ebb4;
        case 0x13ebb8u: goto label_13ebb8;
        case 0x13ebbcu: goto label_13ebbc;
        case 0x13ebc0u: goto label_13ebc0;
        case 0x13ebc4u: goto label_13ebc4;
        case 0x13ebc8u: goto label_13ebc8;
        case 0x13ebccu: goto label_13ebcc;
        case 0x13ebd0u: goto label_13ebd0;
        case 0x13ebd4u: goto label_13ebd4;
        case 0x13ebd8u: goto label_13ebd8;
        case 0x13ebdcu: goto label_13ebdc;
        case 0x13ebe0u: goto label_13ebe0;
        case 0x13ebe4u: goto label_13ebe4;
        case 0x13ebe8u: goto label_13ebe8;
        case 0x13ebecu: goto label_13ebec;
        case 0x13ebf0u: goto label_13ebf0;
        case 0x13ebf4u: goto label_13ebf4;
        case 0x13ebf8u: goto label_13ebf8;
        case 0x13ebfcu: goto label_13ebfc;
        case 0x13ec00u: goto label_13ec00;
        case 0x13ec04u: goto label_13ec04;
        case 0x13ec08u: goto label_13ec08;
        case 0x13ec0cu: goto label_13ec0c;
        case 0x13ec10u: goto label_13ec10;
        case 0x13ec14u: goto label_13ec14;
        case 0x13ec18u: goto label_13ec18;
        case 0x13ec1cu: goto label_13ec1c;
        case 0x13ec20u: goto label_13ec20;
        case 0x13ec24u: goto label_13ec24;
        case 0x13ec28u: goto label_13ec28;
        case 0x13ec2cu: goto label_13ec2c;
        case 0x13ec30u: goto label_13ec30;
        case 0x13ec34u: goto label_13ec34;
        case 0x13ec38u: goto label_13ec38;
        case 0x13ec3cu: goto label_13ec3c;
        case 0x13ec40u: goto label_13ec40;
        case 0x13ec44u: goto label_13ec44;
        case 0x13ec48u: goto label_13ec48;
        case 0x13ec4cu: goto label_13ec4c;
        case 0x13ec50u: goto label_13ec50;
        case 0x13ec54u: goto label_13ec54;
        case 0x13ec58u: goto label_13ec58;
        case 0x13ec5cu: goto label_13ec5c;
        case 0x13ec60u: goto label_13ec60;
        case 0x13ec64u: goto label_13ec64;
        case 0x13ec68u: goto label_13ec68;
        case 0x13ec6cu: goto label_13ec6c;
        case 0x13ec70u: goto label_13ec70;
        case 0x13ec74u: goto label_13ec74;
        case 0x13ec78u: goto label_13ec78;
        case 0x13ec7cu: goto label_13ec7c;
        case 0x13ec80u: goto label_13ec80;
        case 0x13ec84u: goto label_13ec84;
        case 0x13ec88u: goto label_13ec88;
        case 0x13ec8cu: goto label_13ec8c;
        case 0x13ec90u: goto label_13ec90;
        case 0x13ec94u: goto label_13ec94;
        case 0x13ec98u: goto label_13ec98;
        case 0x13ec9cu: goto label_13ec9c;
        case 0x13eca0u: goto label_13eca0;
        case 0x13eca4u: goto label_13eca4;
        case 0x13eca8u: goto label_13eca8;
        case 0x13ecacu: goto label_13ecac;
        case 0x13ecb0u: goto label_13ecb0;
        case 0x13ecb4u: goto label_13ecb4;
        case 0x13ecb8u: goto label_13ecb8;
        case 0x13ecbcu: goto label_13ecbc;
        case 0x13ecc0u: goto label_13ecc0;
        case 0x13ecc4u: goto label_13ecc4;
        case 0x13ecc8u: goto label_13ecc8;
        case 0x13ecccu: goto label_13eccc;
        case 0x13ecd0u: goto label_13ecd0;
        case 0x13ecd4u: goto label_13ecd4;
        case 0x13ecd8u: goto label_13ecd8;
        case 0x13ecdcu: goto label_13ecdc;
        case 0x13ece0u: goto label_13ece0;
        case 0x13ece4u: goto label_13ece4;
        case 0x13ece8u: goto label_13ece8;
        case 0x13ececu: goto label_13ecec;
        case 0x13ecf0u: goto label_13ecf0;
        case 0x13ecf4u: goto label_13ecf4;
        case 0x13ecf8u: goto label_13ecf8;
        case 0x13ecfcu: goto label_13ecfc;
        case 0x13ed00u: goto label_13ed00;
        case 0x13ed04u: goto label_13ed04;
        case 0x13ed08u: goto label_13ed08;
        case 0x13ed0cu: goto label_13ed0c;
        case 0x13ed10u: goto label_13ed10;
        case 0x13ed14u: goto label_13ed14;
        case 0x13ed18u: goto label_13ed18;
        case 0x13ed1cu: goto label_13ed1c;
        case 0x13ed20u: goto label_13ed20;
        case 0x13ed24u: goto label_13ed24;
        case 0x13ed28u: goto label_13ed28;
        case 0x13ed2cu: goto label_13ed2c;
        case 0x13ed30u: goto label_13ed30;
        case 0x13ed34u: goto label_13ed34;
        case 0x13ed38u: goto label_13ed38;
        case 0x13ed3cu: goto label_13ed3c;
        case 0x13ed40u: goto label_13ed40;
        case 0x13ed44u: goto label_13ed44;
        case 0x13ed48u: goto label_13ed48;
        case 0x13ed4cu: goto label_13ed4c;
        case 0x13ed50u: goto label_13ed50;
        case 0x13ed54u: goto label_13ed54;
        case 0x13ed58u: goto label_13ed58;
        case 0x13ed5cu: goto label_13ed5c;
        case 0x13ed60u: goto label_13ed60;
        case 0x13ed64u: goto label_13ed64;
        case 0x13ed68u: goto label_13ed68;
        case 0x13ed6cu: goto label_13ed6c;
        case 0x13ed70u: goto label_13ed70;
        case 0x13ed74u: goto label_13ed74;
        case 0x13ed78u: goto label_13ed78;
        case 0x13ed7cu: goto label_13ed7c;
        case 0x13ed80u: goto label_13ed80;
        case 0x13ed84u: goto label_13ed84;
        case 0x13ed88u: goto label_13ed88;
        case 0x13ed8cu: goto label_13ed8c;
        case 0x13ed90u: goto label_13ed90;
        case 0x13ed94u: goto label_13ed94;
        case 0x13ed98u: goto label_13ed98;
        case 0x13ed9cu: goto label_13ed9c;
        case 0x13eda0u: goto label_13eda0;
        case 0x13eda4u: goto label_13eda4;
        case 0x13eda8u: goto label_13eda8;
        case 0x13edacu: goto label_13edac;
        case 0x13edb0u: goto label_13edb0;
        case 0x13edb4u: goto label_13edb4;
        case 0x13edb8u: goto label_13edb8;
        case 0x13edbcu: goto label_13edbc;
        case 0x13edc0u: goto label_13edc0;
        case 0x13edc4u: goto label_13edc4;
        case 0x13edc8u: goto label_13edc8;
        case 0x13edccu: goto label_13edcc;
        case 0x13edd0u: goto label_13edd0;
        case 0x13edd4u: goto label_13edd4;
        case 0x13edd8u: goto label_13edd8;
        case 0x13eddcu: goto label_13eddc;
        case 0x13ede0u: goto label_13ede0;
        case 0x13ede4u: goto label_13ede4;
        case 0x13ede8u: goto label_13ede8;
        case 0x13edecu: goto label_13edec;
        case 0x13edf0u: goto label_13edf0;
        case 0x13edf4u: goto label_13edf4;
        case 0x13edf8u: goto label_13edf8;
        case 0x13edfcu: goto label_13edfc;
        case 0x13ee00u: goto label_13ee00;
        case 0x13ee04u: goto label_13ee04;
        case 0x13ee08u: goto label_13ee08;
        case 0x13ee0cu: goto label_13ee0c;
        case 0x13ee10u: goto label_13ee10;
        case 0x13ee14u: goto label_13ee14;
        case 0x13ee18u: goto label_13ee18;
        case 0x13ee1cu: goto label_13ee1c;
        case 0x13ee20u: goto label_13ee20;
        case 0x13ee24u: goto label_13ee24;
        case 0x13ee28u: goto label_13ee28;
        case 0x13ee2cu: goto label_13ee2c;
        case 0x13ee30u: goto label_13ee30;
        case 0x13ee34u: goto label_13ee34;
        case 0x13ee38u: goto label_13ee38;
        case 0x13ee3cu: goto label_13ee3c;
        case 0x13ee40u: goto label_13ee40;
        case 0x13ee44u: goto label_13ee44;
        case 0x13ee48u: goto label_13ee48;
        case 0x13ee4cu: goto label_13ee4c;
        case 0x13ee50u: goto label_13ee50;
        case 0x13ee54u: goto label_13ee54;
        case 0x13ee58u: goto label_13ee58;
        case 0x13ee5cu: goto label_13ee5c;
        case 0x13ee60u: goto label_13ee60;
        case 0x13ee64u: goto label_13ee64;
        case 0x13ee68u: goto label_13ee68;
        case 0x13ee6cu: goto label_13ee6c;
        case 0x13ee70u: goto label_13ee70;
        case 0x13ee74u: goto label_13ee74;
        case 0x13ee78u: goto label_13ee78;
        case 0x13ee7cu: goto label_13ee7c;
        case 0x13ee80u: goto label_13ee80;
        case 0x13ee84u: goto label_13ee84;
        case 0x13ee88u: goto label_13ee88;
        case 0x13ee8cu: goto label_13ee8c;
        case 0x13ee90u: goto label_13ee90;
        case 0x13ee94u: goto label_13ee94;
        case 0x13ee98u: goto label_13ee98;
        case 0x13ee9cu: goto label_13ee9c;
        case 0x13eea0u: goto label_13eea0;
        case 0x13eea4u: goto label_13eea4;
        case 0x13eea8u: goto label_13eea8;
        case 0x13eeacu: goto label_13eeac;
        case 0x13eeb0u: goto label_13eeb0;
        case 0x13eeb4u: goto label_13eeb4;
        case 0x13eeb8u: goto label_13eeb8;
        case 0x13eebcu: goto label_13eebc;
        case 0x13eec0u: goto label_13eec0;
        case 0x13eec4u: goto label_13eec4;
        case 0x13eec8u: goto label_13eec8;
        case 0x13eeccu: goto label_13eecc;
        case 0x13eed0u: goto label_13eed0;
        case 0x13eed4u: goto label_13eed4;
        case 0x13eed8u: goto label_13eed8;
        case 0x13eedcu: goto label_13eedc;
        case 0x13eee0u: goto label_13eee0;
        case 0x13eee4u: goto label_13eee4;
        case 0x13eee8u: goto label_13eee8;
        case 0x13eeecu: goto label_13eeec;
        case 0x13eef0u: goto label_13eef0;
        case 0x13eef4u: goto label_13eef4;
        case 0x13eef8u: goto label_13eef8;
        case 0x13eefcu: goto label_13eefc;
        case 0x13ef00u: goto label_13ef00;
        case 0x13ef04u: goto label_13ef04;
        case 0x13ef08u: goto label_13ef08;
        case 0x13ef0cu: goto label_13ef0c;
        case 0x13ef10u: goto label_13ef10;
        case 0x13ef14u: goto label_13ef14;
        case 0x13ef18u: goto label_13ef18;
        case 0x13ef1cu: goto label_13ef1c;
        case 0x13ef20u: goto label_13ef20;
        case 0x13ef24u: goto label_13ef24;
        case 0x13ef28u: goto label_13ef28;
        case 0x13ef2cu: goto label_13ef2c;
        case 0x13ef30u: goto label_13ef30;
        case 0x13ef34u: goto label_13ef34;
        case 0x13ef38u: goto label_13ef38;
        case 0x13ef3cu: goto label_13ef3c;
        case 0x13ef40u: goto label_13ef40;
        case 0x13ef44u: goto label_13ef44;
        case 0x13ef48u: goto label_13ef48;
        case 0x13ef4cu: goto label_13ef4c;
        case 0x13ef50u: goto label_13ef50;
        case 0x13ef54u: goto label_13ef54;
        case 0x13ef58u: goto label_13ef58;
        case 0x13ef5cu: goto label_13ef5c;
        case 0x13ef60u: goto label_13ef60;
        case 0x13ef64u: goto label_13ef64;
        case 0x13ef68u: goto label_13ef68;
        case 0x13ef6cu: goto label_13ef6c;
        case 0x13ef70u: goto label_13ef70;
        case 0x13ef74u: goto label_13ef74;
        case 0x13ef78u: goto label_13ef78;
        case 0x13ef7cu: goto label_13ef7c;
        case 0x13ef80u: goto label_13ef80;
        case 0x13ef84u: goto label_13ef84;
        case 0x13ef88u: goto label_13ef88;
        case 0x13ef8cu: goto label_13ef8c;
        case 0x13ef90u: goto label_13ef90;
        case 0x13ef94u: goto label_13ef94;
        case 0x13ef98u: goto label_13ef98;
        case 0x13ef9cu: goto label_13ef9c;
        case 0x13efa0u: goto label_13efa0;
        case 0x13efa4u: goto label_13efa4;
        case 0x13efa8u: goto label_13efa8;
        case 0x13efacu: goto label_13efac;
        case 0x13efb0u: goto label_13efb0;
        case 0x13efb4u: goto label_13efb4;
        case 0x13efb8u: goto label_13efb8;
        case 0x13efbcu: goto label_13efbc;
        case 0x13efc0u: goto label_13efc0;
        case 0x13efc4u: goto label_13efc4;
        case 0x13efc8u: goto label_13efc8;
        case 0x13efccu: goto label_13efcc;
        case 0x13efd0u: goto label_13efd0;
        case 0x13efd4u: goto label_13efd4;
        case 0x13efd8u: goto label_13efd8;
        case 0x13efdcu: goto label_13efdc;
        case 0x13efe0u: goto label_13efe0;
        case 0x13efe4u: goto label_13efe4;
        case 0x13efe8u: goto label_13efe8;
        case 0x13efecu: goto label_13efec;
        case 0x13eff0u: goto label_13eff0;
        case 0x13eff4u: goto label_13eff4;
        case 0x13eff8u: goto label_13eff8;
        case 0x13effcu: goto label_13effc;
        case 0x13f000u: goto label_13f000;
        case 0x13f004u: goto label_13f004;
        case 0x13f008u: goto label_13f008;
        case 0x13f00cu: goto label_13f00c;
        case 0x13f010u: goto label_13f010;
        case 0x13f014u: goto label_13f014;
        case 0x13f018u: goto label_13f018;
        case 0x13f01cu: goto label_13f01c;
        case 0x13f020u: goto label_13f020;
        case 0x13f024u: goto label_13f024;
        case 0x13f028u: goto label_13f028;
        case 0x13f02cu: goto label_13f02c;
        case 0x13f030u: goto label_13f030;
        case 0x13f034u: goto label_13f034;
        case 0x13f038u: goto label_13f038;
        case 0x13f03cu: goto label_13f03c;
        case 0x13f040u: goto label_13f040;
        case 0x13f044u: goto label_13f044;
        case 0x13f048u: goto label_13f048;
        case 0x13f04cu: goto label_13f04c;
        case 0x13f050u: goto label_13f050;
        case 0x13f054u: goto label_13f054;
        case 0x13f058u: goto label_13f058;
        case 0x13f05cu: goto label_13f05c;
        case 0x13f060u: goto label_13f060;
        case 0x13f064u: goto label_13f064;
        case 0x13f068u: goto label_13f068;
        case 0x13f06cu: goto label_13f06c;
        case 0x13f070u: goto label_13f070;
        case 0x13f074u: goto label_13f074;
        case 0x13f078u: goto label_13f078;
        case 0x13f07cu: goto label_13f07c;
        case 0x13f080u: goto label_13f080;
        case 0x13f084u: goto label_13f084;
        case 0x13f088u: goto label_13f088;
        case 0x13f08cu: goto label_13f08c;
        case 0x13f090u: goto label_13f090;
        case 0x13f094u: goto label_13f094;
        case 0x13f098u: goto label_13f098;
        case 0x13f09cu: goto label_13f09c;
        case 0x13f0a0u: goto label_13f0a0;
        case 0x13f0a4u: goto label_13f0a4;
        case 0x13f0a8u: goto label_13f0a8;
        case 0x13f0acu: goto label_13f0ac;
        case 0x13f0b0u: goto label_13f0b0;
        case 0x13f0b4u: goto label_13f0b4;
        case 0x13f0b8u: goto label_13f0b8;
        case 0x13f0bcu: goto label_13f0bc;
        case 0x13f0c0u: goto label_13f0c0;
        case 0x13f0c4u: goto label_13f0c4;
        case 0x13f0c8u: goto label_13f0c8;
        case 0x13f0ccu: goto label_13f0cc;
        case 0x13f0d0u: goto label_13f0d0;
        case 0x13f0d4u: goto label_13f0d4;
        case 0x13f0d8u: goto label_13f0d8;
        case 0x13f0dcu: goto label_13f0dc;
        case 0x13f0e0u: goto label_13f0e0;
        case 0x13f0e4u: goto label_13f0e4;
        case 0x13f0e8u: goto label_13f0e8;
        case 0x13f0ecu: goto label_13f0ec;
        case 0x13f0f0u: goto label_13f0f0;
        case 0x13f0f4u: goto label_13f0f4;
        case 0x13f0f8u: goto label_13f0f8;
        case 0x13f0fcu: goto label_13f0fc;
        case 0x13f100u: goto label_13f100;
        case 0x13f104u: goto label_13f104;
        case 0x13f108u: goto label_13f108;
        case 0x13f10cu: goto label_13f10c;
        case 0x13f110u: goto label_13f110;
        case 0x13f114u: goto label_13f114;
        case 0x13f118u: goto label_13f118;
        case 0x13f11cu: goto label_13f11c;
        case 0x13f120u: goto label_13f120;
        case 0x13f124u: goto label_13f124;
        case 0x13f128u: goto label_13f128;
        case 0x13f12cu: goto label_13f12c;
        case 0x13f130u: goto label_13f130;
        case 0x13f134u: goto label_13f134;
        case 0x13f138u: goto label_13f138;
        case 0x13f13cu: goto label_13f13c;
        case 0x13f140u: goto label_13f140;
        case 0x13f144u: goto label_13f144;
        case 0x13f148u: goto label_13f148;
        case 0x13f14cu: goto label_13f14c;
        case 0x13f150u: goto label_13f150;
        case 0x13f154u: goto label_13f154;
        case 0x13f158u: goto label_13f158;
        case 0x13f15cu: goto label_13f15c;
        case 0x13f160u: goto label_13f160;
        case 0x13f164u: goto label_13f164;
        case 0x13f168u: goto label_13f168;
        case 0x13f16cu: goto label_13f16c;
        case 0x13f170u: goto label_13f170;
        case 0x13f174u: goto label_13f174;
        case 0x13f178u: goto label_13f178;
        case 0x13f17cu: goto label_13f17c;
        case 0x13f180u: goto label_13f180;
        case 0x13f184u: goto label_13f184;
        case 0x13f188u: goto label_13f188;
        case 0x13f18cu: goto label_13f18c;
        case 0x13f190u: goto label_13f190;
        case 0x13f194u: goto label_13f194;
        case 0x13f198u: goto label_13f198;
        case 0x13f19cu: goto label_13f19c;
        case 0x13f1a0u: goto label_13f1a0;
        case 0x13f1a4u: goto label_13f1a4;
        case 0x13f1a8u: goto label_13f1a8;
        case 0x13f1acu: goto label_13f1ac;
        case 0x13f1b0u: goto label_13f1b0;
        case 0x13f1b4u: goto label_13f1b4;
        case 0x13f1b8u: goto label_13f1b8;
        case 0x13f1bcu: goto label_13f1bc;
        case 0x13f1c0u: goto label_13f1c0;
        case 0x13f1c4u: goto label_13f1c4;
        case 0x13f1c8u: goto label_13f1c8;
        case 0x13f1ccu: goto label_13f1cc;
        case 0x13f1d0u: goto label_13f1d0;
        case 0x13f1d4u: goto label_13f1d4;
        case 0x13f1d8u: goto label_13f1d8;
        case 0x13f1dcu: goto label_13f1dc;
        case 0x13f1e0u: goto label_13f1e0;
        case 0x13f1e4u: goto label_13f1e4;
        case 0x13f1e8u: goto label_13f1e8;
        case 0x13f1ecu: goto label_13f1ec;
        case 0x13f1f0u: goto label_13f1f0;
        case 0x13f1f4u: goto label_13f1f4;
        case 0x13f1f8u: goto label_13f1f8;
        case 0x13f1fcu: goto label_13f1fc;
        case 0x13f200u: goto label_13f200;
        case 0x13f204u: goto label_13f204;
        case 0x13f208u: goto label_13f208;
        case 0x13f20cu: goto label_13f20c;
        case 0x13f210u: goto label_13f210;
        case 0x13f214u: goto label_13f214;
        case 0x13f218u: goto label_13f218;
        case 0x13f21cu: goto label_13f21c;
        case 0x13f220u: goto label_13f220;
        case 0x13f224u: goto label_13f224;
        case 0x13f228u: goto label_13f228;
        case 0x13f22cu: goto label_13f22c;
        case 0x13f230u: goto label_13f230;
        case 0x13f234u: goto label_13f234;
        case 0x13f238u: goto label_13f238;
        case 0x13f23cu: goto label_13f23c;
        case 0x13f240u: goto label_13f240;
        case 0x13f244u: goto label_13f244;
        case 0x13f248u: goto label_13f248;
        case 0x13f24cu: goto label_13f24c;
        case 0x13f250u: goto label_13f250;
        case 0x13f254u: goto label_13f254;
        case 0x13f258u: goto label_13f258;
        case 0x13f25cu: goto label_13f25c;
        case 0x13f260u: goto label_13f260;
        case 0x13f264u: goto label_13f264;
        case 0x13f268u: goto label_13f268;
        case 0x13f26cu: goto label_13f26c;
        case 0x13f270u: goto label_13f270;
        case 0x13f274u: goto label_13f274;
        case 0x13f278u: goto label_13f278;
        case 0x13f27cu: goto label_13f27c;
        case 0x13f280u: goto label_13f280;
        case 0x13f284u: goto label_13f284;
        case 0x13f288u: goto label_13f288;
        case 0x13f28cu: goto label_13f28c;
        case 0x13f290u: goto label_13f290;
        case 0x13f294u: goto label_13f294;
        case 0x13f298u: goto label_13f298;
        case 0x13f29cu: goto label_13f29c;
        case 0x13f2a0u: goto label_13f2a0;
        case 0x13f2a4u: goto label_13f2a4;
        case 0x13f2a8u: goto label_13f2a8;
        case 0x13f2acu: goto label_13f2ac;
        case 0x13f2b0u: goto label_13f2b0;
        case 0x13f2b4u: goto label_13f2b4;
        case 0x13f2b8u: goto label_13f2b8;
        case 0x13f2bcu: goto label_13f2bc;
        case 0x13f2c0u: goto label_13f2c0;
        case 0x13f2c4u: goto label_13f2c4;
        case 0x13f2c8u: goto label_13f2c8;
        case 0x13f2ccu: goto label_13f2cc;
        case 0x13f2d0u: goto label_13f2d0;
        case 0x13f2d4u: goto label_13f2d4;
        case 0x13f2d8u: goto label_13f2d8;
        case 0x13f2dcu: goto label_13f2dc;
        case 0x13f2e0u: goto label_13f2e0;
        case 0x13f2e4u: goto label_13f2e4;
        case 0x13f2e8u: goto label_13f2e8;
        case 0x13f2ecu: goto label_13f2ec;
        case 0x13f2f0u: goto label_13f2f0;
        case 0x13f2f4u: goto label_13f2f4;
        case 0x13f2f8u: goto label_13f2f8;
        case 0x13f2fcu: goto label_13f2fc;
        case 0x13f300u: goto label_13f300;
        case 0x13f304u: goto label_13f304;
        case 0x13f308u: goto label_13f308;
        case 0x13f30cu: goto label_13f30c;
        case 0x13f310u: goto label_13f310;
        case 0x13f314u: goto label_13f314;
        case 0x13f318u: goto label_13f318;
        case 0x13f31cu: goto label_13f31c;
        case 0x13f320u: goto label_13f320;
        case 0x13f324u: goto label_13f324;
        case 0x13f328u: goto label_13f328;
        case 0x13f32cu: goto label_13f32c;
        case 0x13f330u: goto label_13f330;
        case 0x13f334u: goto label_13f334;
        case 0x13f338u: goto label_13f338;
        case 0x13f33cu: goto label_13f33c;
        case 0x13f340u: goto label_13f340;
        case 0x13f344u: goto label_13f344;
        case 0x13f348u: goto label_13f348;
        case 0x13f34cu: goto label_13f34c;
        case 0x13f350u: goto label_13f350;
        case 0x13f354u: goto label_13f354;
        case 0x13f358u: goto label_13f358;
        case 0x13f35cu: goto label_13f35c;
        case 0x13f360u: goto label_13f360;
        case 0x13f364u: goto label_13f364;
        case 0x13f368u: goto label_13f368;
        case 0x13f36cu: goto label_13f36c;
        case 0x13f370u: goto label_13f370;
        case 0x13f374u: goto label_13f374;
        case 0x13f378u: goto label_13f378;
        case 0x13f37cu: goto label_13f37c;
        case 0x13f380u: goto label_13f380;
        case 0x13f384u: goto label_13f384;
        case 0x13f388u: goto label_13f388;
        case 0x13f38cu: goto label_13f38c;
        case 0x13f390u: goto label_13f390;
        case 0x13f394u: goto label_13f394;
        case 0x13f398u: goto label_13f398;
        case 0x13f39cu: goto label_13f39c;
        case 0x13f3a0u: goto label_13f3a0;
        case 0x13f3a4u: goto label_13f3a4;
        case 0x13f3a8u: goto label_13f3a8;
        case 0x13f3acu: goto label_13f3ac;
        case 0x13f3b0u: goto label_13f3b0;
        case 0x13f3b4u: goto label_13f3b4;
        case 0x13f3b8u: goto label_13f3b8;
        case 0x13f3bcu: goto label_13f3bc;
        case 0x13f3c0u: goto label_13f3c0;
        case 0x13f3c4u: goto label_13f3c4;
        case 0x13f3c8u: goto label_13f3c8;
        case 0x13f3ccu: goto label_13f3cc;
        case 0x13f3d0u: goto label_13f3d0;
        case 0x13f3d4u: goto label_13f3d4;
        case 0x13f3d8u: goto label_13f3d8;
        case 0x13f3dcu: goto label_13f3dc;
        case 0x13f3e0u: goto label_13f3e0;
        case 0x13f3e4u: goto label_13f3e4;
        case 0x13f3e8u: goto label_13f3e8;
        case 0x13f3ecu: goto label_13f3ec;
        case 0x13f3f0u: goto label_13f3f0;
        case 0x13f3f4u: goto label_13f3f4;
        case 0x13f3f8u: goto label_13f3f8;
        case 0x13f3fcu: goto label_13f3fc;
        case 0x13f400u: goto label_13f400;
        case 0x13f404u: goto label_13f404;
        case 0x13f408u: goto label_13f408;
        case 0x13f40cu: goto label_13f40c;
        case 0x13f410u: goto label_13f410;
        case 0x13f414u: goto label_13f414;
        case 0x13f418u: goto label_13f418;
        case 0x13f41cu: goto label_13f41c;
        case 0x13f420u: goto label_13f420;
        case 0x13f424u: goto label_13f424;
        case 0x13f428u: goto label_13f428;
        case 0x13f42cu: goto label_13f42c;
        case 0x13f430u: goto label_13f430;
        case 0x13f434u: goto label_13f434;
        case 0x13f438u: goto label_13f438;
        case 0x13f43cu: goto label_13f43c;
        case 0x13f440u: goto label_13f440;
        case 0x13f444u: goto label_13f444;
        case 0x13f448u: goto label_13f448;
        case 0x13f44cu: goto label_13f44c;
        case 0x13f450u: goto label_13f450;
        case 0x13f454u: goto label_13f454;
        case 0x13f458u: goto label_13f458;
        case 0x13f45cu: goto label_13f45c;
        case 0x13f460u: goto label_13f460;
        case 0x13f464u: goto label_13f464;
        case 0x13f468u: goto label_13f468;
        case 0x13f46cu: goto label_13f46c;
        case 0x13f470u: goto label_13f470;
        case 0x13f474u: goto label_13f474;
        case 0x13f478u: goto label_13f478;
        case 0x13f47cu: goto label_13f47c;
        case 0x13f480u: goto label_13f480;
        case 0x13f484u: goto label_13f484;
        case 0x13f488u: goto label_13f488;
        case 0x13f48cu: goto label_13f48c;
        case 0x13f490u: goto label_13f490;
        case 0x13f494u: goto label_13f494;
        case 0x13f498u: goto label_13f498;
        case 0x13f49cu: goto label_13f49c;
        case 0x13f4a0u: goto label_13f4a0;
        case 0x13f4a4u: goto label_13f4a4;
        case 0x13f4a8u: goto label_13f4a8;
        case 0x13f4acu: goto label_13f4ac;
        case 0x13f4b0u: goto label_13f4b0;
        case 0x13f4b4u: goto label_13f4b4;
        case 0x13f4b8u: goto label_13f4b8;
        case 0x13f4bcu: goto label_13f4bc;
        case 0x13f4c0u: goto label_13f4c0;
        case 0x13f4c4u: goto label_13f4c4;
        case 0x13f4c8u: goto label_13f4c8;
        case 0x13f4ccu: goto label_13f4cc;
        case 0x13f4d0u: goto label_13f4d0;
        case 0x13f4d4u: goto label_13f4d4;
        case 0x13f4d8u: goto label_13f4d8;
        case 0x13f4dcu: goto label_13f4dc;
        case 0x13f4e0u: goto label_13f4e0;
        case 0x13f4e4u: goto label_13f4e4;
        case 0x13f4e8u: goto label_13f4e8;
        case 0x13f4ecu: goto label_13f4ec;
        case 0x13f4f0u: goto label_13f4f0;
        case 0x13f4f4u: goto label_13f4f4;
        case 0x13f4f8u: goto label_13f4f8;
        case 0x13f4fcu: goto label_13f4fc;
        case 0x13f500u: goto label_13f500;
        case 0x13f504u: goto label_13f504;
        case 0x13f508u: goto label_13f508;
        case 0x13f50cu: goto label_13f50c;
        case 0x13f510u: goto label_13f510;
        case 0x13f514u: goto label_13f514;
        case 0x13f518u: goto label_13f518;
        case 0x13f51cu: goto label_13f51c;
        case 0x13f520u: goto label_13f520;
        case 0x13f524u: goto label_13f524;
        case 0x13f528u: goto label_13f528;
        case 0x13f52cu: goto label_13f52c;
        case 0x13f530u: goto label_13f530;
        case 0x13f534u: goto label_13f534;
        case 0x13f538u: goto label_13f538;
        case 0x13f53cu: goto label_13f53c;
        case 0x13f540u: goto label_13f540;
        case 0x13f544u: goto label_13f544;
        case 0x13f548u: goto label_13f548;
        case 0x13f54cu: goto label_13f54c;
        case 0x13f550u: goto label_13f550;
        case 0x13f554u: goto label_13f554;
        case 0x13f558u: goto label_13f558;
        case 0x13f55cu: goto label_13f55c;
        case 0x13f560u: goto label_13f560;
        case 0x13f564u: goto label_13f564;
        case 0x13f568u: goto label_13f568;
        case 0x13f56cu: goto label_13f56c;
        case 0x13f570u: goto label_13f570;
        case 0x13f574u: goto label_13f574;
        case 0x13f578u: goto label_13f578;
        case 0x13f57cu: goto label_13f57c;
        case 0x13f580u: goto label_13f580;
        case 0x13f584u: goto label_13f584;
        case 0x13f588u: goto label_13f588;
        case 0x13f58cu: goto label_13f58c;
        case 0x13f590u: goto label_13f590;
        case 0x13f594u: goto label_13f594;
        case 0x13f598u: goto label_13f598;
        case 0x13f59cu: goto label_13f59c;
        case 0x13f5a0u: goto label_13f5a0;
        case 0x13f5a4u: goto label_13f5a4;
        case 0x13f5a8u: goto label_13f5a8;
        case 0x13f5acu: goto label_13f5ac;
        case 0x13f5b0u: goto label_13f5b0;
        case 0x13f5b4u: goto label_13f5b4;
        case 0x13f5b8u: goto label_13f5b8;
        case 0x13f5bcu: goto label_13f5bc;
        case 0x13f5c0u: goto label_13f5c0;
        case 0x13f5c4u: goto label_13f5c4;
        case 0x13f5c8u: goto label_13f5c8;
        case 0x13f5ccu: goto label_13f5cc;
        case 0x13f5d0u: goto label_13f5d0;
        case 0x13f5d4u: goto label_13f5d4;
        case 0x13f5d8u: goto label_13f5d8;
        case 0x13f5dcu: goto label_13f5dc;
        case 0x13f5e0u: goto label_13f5e0;
        case 0x13f5e4u: goto label_13f5e4;
        case 0x13f5e8u: goto label_13f5e8;
        case 0x13f5ecu: goto label_13f5ec;
        case 0x13f5f0u: goto label_13f5f0;
        case 0x13f5f4u: goto label_13f5f4;
        case 0x13f5f8u: goto label_13f5f8;
        case 0x13f5fcu: goto label_13f5fc;
        case 0x13f600u: goto label_13f600;
        case 0x13f604u: goto label_13f604;
        case 0x13f608u: goto label_13f608;
        case 0x13f60cu: goto label_13f60c;
        case 0x13f610u: goto label_13f610;
        case 0x13f614u: goto label_13f614;
        case 0x13f618u: goto label_13f618;
        case 0x13f61cu: goto label_13f61c;
        case 0x13f620u: goto label_13f620;
        case 0x13f624u: goto label_13f624;
        case 0x13f628u: goto label_13f628;
        case 0x13f62cu: goto label_13f62c;
        case 0x13f630u: goto label_13f630;
        case 0x13f634u: goto label_13f634;
        case 0x13f638u: goto label_13f638;
        case 0x13f63cu: goto label_13f63c;
        case 0x13f640u: goto label_13f640;
        case 0x13f644u: goto label_13f644;
        case 0x13f648u: goto label_13f648;
        case 0x13f64cu: goto label_13f64c;
        case 0x13f650u: goto label_13f650;
        case 0x13f654u: goto label_13f654;
        case 0x13f658u: goto label_13f658;
        case 0x13f65cu: goto label_13f65c;
        case 0x13f660u: goto label_13f660;
        case 0x13f664u: goto label_13f664;
        case 0x13f668u: goto label_13f668;
        case 0x13f66cu: goto label_13f66c;
        case 0x13f670u: goto label_13f670;
        case 0x13f674u: goto label_13f674;
        case 0x13f678u: goto label_13f678;
        case 0x13f67cu: goto label_13f67c;
        case 0x13f680u: goto label_13f680;
        case 0x13f684u: goto label_13f684;
        case 0x13f688u: goto label_13f688;
        case 0x13f68cu: goto label_13f68c;
        case 0x13f690u: goto label_13f690;
        case 0x13f694u: goto label_13f694;
        case 0x13f698u: goto label_13f698;
        case 0x13f69cu: goto label_13f69c;
        case 0x13f6a0u: goto label_13f6a0;
        case 0x13f6a4u: goto label_13f6a4;
        case 0x13f6a8u: goto label_13f6a8;
        case 0x13f6acu: goto label_13f6ac;
        case 0x13f6b0u: goto label_13f6b0;
        case 0x13f6b4u: goto label_13f6b4;
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f6bcu: goto label_13f6bc;
        case 0x13f6c0u: goto label_13f6c0;
        case 0x13f6c4u: goto label_13f6c4;
        case 0x13f6c8u: goto label_13f6c8;
        case 0x13f6ccu: goto label_13f6cc;
        case 0x13f6d0u: goto label_13f6d0;
        case 0x13f6d4u: goto label_13f6d4;
        case 0x13f6d8u: goto label_13f6d8;
        case 0x13f6dcu: goto label_13f6dc;
        case 0x13f6e0u: goto label_13f6e0;
        case 0x13f6e4u: goto label_13f6e4;
        case 0x13f6e8u: goto label_13f6e8;
        case 0x13f6ecu: goto label_13f6ec;
        case 0x13f6f0u: goto label_13f6f0;
        case 0x13f6f4u: goto label_13f6f4;
        case 0x13f6f8u: goto label_13f6f8;
        case 0x13f6fcu: goto label_13f6fc;
        case 0x13f700u: goto label_13f700;
        case 0x13f704u: goto label_13f704;
        case 0x13f708u: goto label_13f708;
        case 0x13f70cu: goto label_13f70c;
        case 0x13f710u: goto label_13f710;
        case 0x13f714u: goto label_13f714;
        case 0x13f718u: goto label_13f718;
        case 0x13f71cu: goto label_13f71c;
        case 0x13f720u: goto label_13f720;
        case 0x13f724u: goto label_13f724;
        case 0x13f728u: goto label_13f728;
        case 0x13f72cu: goto label_13f72c;
        case 0x13f730u: goto label_13f730;
        case 0x13f734u: goto label_13f734;
        case 0x13f738u: goto label_13f738;
        case 0x13f73cu: goto label_13f73c;
        case 0x13f740u: goto label_13f740;
        case 0x13f744u: goto label_13f744;
        case 0x13f748u: goto label_13f748;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f750u: goto label_13f750;
        case 0x13f754u: goto label_13f754;
        case 0x13f758u: goto label_13f758;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f760u: goto label_13f760;
        case 0x13f764u: goto label_13f764;
        case 0x13f768u: goto label_13f768;
        case 0x13f76cu: goto label_13f76c;
        case 0x13f770u: goto label_13f770;
        case 0x13f774u: goto label_13f774;
        case 0x13f778u: goto label_13f778;
        case 0x13f77cu: goto label_13f77c;
        case 0x13f780u: goto label_13f780;
        case 0x13f784u: goto label_13f784;
        case 0x13f788u: goto label_13f788;
        case 0x13f78cu: goto label_13f78c;
        case 0x13f790u: goto label_13f790;
        case 0x13f794u: goto label_13f794;
        case 0x13f798u: goto label_13f798;
        case 0x13f79cu: goto label_13f79c;
        case 0x13f7a0u: goto label_13f7a0;
        case 0x13f7a4u: goto label_13f7a4;
        case 0x13f7a8u: goto label_13f7a8;
        case 0x13f7acu: goto label_13f7ac;
        case 0x13f7b0u: goto label_13f7b0;
        case 0x13f7b4u: goto label_13f7b4;
        case 0x13f7b8u: goto label_13f7b8;
        case 0x13f7bcu: goto label_13f7bc;
        case 0x13f7c0u: goto label_13f7c0;
        case 0x13f7c4u: goto label_13f7c4;
        case 0x13f7c8u: goto label_13f7c8;
        case 0x13f7ccu: goto label_13f7cc;
        case 0x13f7d0u: goto label_13f7d0;
        case 0x13f7d4u: goto label_13f7d4;
        case 0x13f7d8u: goto label_13f7d8;
        case 0x13f7dcu: goto label_13f7dc;
        case 0x13f7e0u: goto label_13f7e0;
        case 0x13f7e4u: goto label_13f7e4;
        case 0x13f7e8u: goto label_13f7e8;
        case 0x13f7ecu: goto label_13f7ec;
        case 0x13f7f0u: goto label_13f7f0;
        case 0x13f7f4u: goto label_13f7f4;
        case 0x13f7f8u: goto label_13f7f8;
        case 0x13f7fcu: goto label_13f7fc;
        case 0x13f800u: goto label_13f800;
        case 0x13f804u: goto label_13f804;
        case 0x13f808u: goto label_13f808;
        case 0x13f80cu: goto label_13f80c;
        case 0x13f810u: goto label_13f810;
        case 0x13f814u: goto label_13f814;
        case 0x13f818u: goto label_13f818;
        case 0x13f81cu: goto label_13f81c;
        case 0x13f820u: goto label_13f820;
        case 0x13f824u: goto label_13f824;
        case 0x13f828u: goto label_13f828;
        case 0x13f82cu: goto label_13f82c;
        case 0x13f830u: goto label_13f830;
        case 0x13f834u: goto label_13f834;
        case 0x13f838u: goto label_13f838;
        case 0x13f83cu: goto label_13f83c;
        case 0x13f840u: goto label_13f840;
        case 0x13f844u: goto label_13f844;
        case 0x13f848u: goto label_13f848;
        case 0x13f84cu: goto label_13f84c;
        case 0x13f850u: goto label_13f850;
        case 0x13f854u: goto label_13f854;
        case 0x13f858u: goto label_13f858;
        case 0x13f85cu: goto label_13f85c;
        case 0x13f860u: goto label_13f860;
        case 0x13f864u: goto label_13f864;
        case 0x13f868u: goto label_13f868;
        case 0x13f86cu: goto label_13f86c;
        case 0x13f870u: goto label_13f870;
        case 0x13f874u: goto label_13f874;
        case 0x13f878u: goto label_13f878;
        case 0x13f87cu: goto label_13f87c;
        case 0x13f880u: goto label_13f880;
        case 0x13f884u: goto label_13f884;
        case 0x13f888u: goto label_13f888;
        case 0x13f88cu: goto label_13f88c;
        case 0x13f890u: goto label_13f890;
        case 0x13f894u: goto label_13f894;
        case 0x13f898u: goto label_13f898;
        case 0x13f89cu: goto label_13f89c;
        case 0x13f8a0u: goto label_13f8a0;
        case 0x13f8a4u: goto label_13f8a4;
        case 0x13f8a8u: goto label_13f8a8;
        case 0x13f8acu: goto label_13f8ac;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8b4u: goto label_13f8b4;
        case 0x13f8b8u: goto label_13f8b8;
        case 0x13f8bcu: goto label_13f8bc;
        case 0x13f8c0u: goto label_13f8c0;
        case 0x13f8c4u: goto label_13f8c4;
        case 0x13f8c8u: goto label_13f8c8;
        case 0x13f8ccu: goto label_13f8cc;
        case 0x13f8d0u: goto label_13f8d0;
        case 0x13f8d4u: goto label_13f8d4;
        case 0x13f8d8u: goto label_13f8d8;
        case 0x13f8dcu: goto label_13f8dc;
        case 0x13f8e0u: goto label_13f8e0;
        case 0x13f8e4u: goto label_13f8e4;
        case 0x13f8e8u: goto label_13f8e8;
        case 0x13f8ecu: goto label_13f8ec;
        case 0x13f8f0u: goto label_13f8f0;
        case 0x13f8f4u: goto label_13f8f4;
        case 0x13f8f8u: goto label_13f8f8;
        case 0x13f8fcu: goto label_13f8fc;
        case 0x13f900u: goto label_13f900;
        case 0x13f904u: goto label_13f904;
        case 0x13f908u: goto label_13f908;
        case 0x13f90cu: goto label_13f90c;
        case 0x13f910u: goto label_13f910;
        case 0x13f914u: goto label_13f914;
        case 0x13f918u: goto label_13f918;
        case 0x13f91cu: goto label_13f91c;
        case 0x13f920u: goto label_13f920;
        case 0x13f924u: goto label_13f924;
        case 0x13f928u: goto label_13f928;
        case 0x13f92cu: goto label_13f92c;
        default: break;
    }

    ctx->pc = 0x13e708u;

label_13e708:
    // 0x13e708: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x13e708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_13e70c:
    // 0x13e70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e710:
    // 0x13e710: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x13e710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_13e714:
    // 0x13e714: 0xe7b90218  swc1        $f25, 0x218($sp)
    ctx->pc = 0x13e714u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_13e718:
    // 0x13e718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e71c:
    // 0x13e71c: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x13e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_13e720:
    // 0x13e720: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x13e720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_13e724:
    // 0x13e724: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x13e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_13e728:
    // 0x13e728: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x13e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_13e72c:
    // 0x13e72c: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x13e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_13e730:
    // 0x13e730: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x13e730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_13e734:
    // 0x13e734: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x13e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_13e738:
    // 0x13e738: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x13e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
label_13e73c:
    // 0x13e73c: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x13e73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_13e740:
    // 0x13e740: 0xe7ba0220  swc1        $f26, 0x220($sp)
    ctx->pc = 0x13e740u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_13e744:
    // 0x13e744: 0xe7b80210  swc1        $f24, 0x210($sp)
    ctx->pc = 0x13e744u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_13e748:
    // 0x13e748: 0xe7b70208  swc1        $f23, 0x208($sp)
    ctx->pc = 0x13e748u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_13e74c:
    // 0x13e74c: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x13e74cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_13e750:
    // 0x13e750: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x13e750u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_13e754:
    // 0x13e754: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x13e754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_13e758:
    // 0x13e758: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x13e758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
label_13e75c:
    // 0x13e75c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13e75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_13e760:
    // 0x13e760: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x13e760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_13e764:
    // 0x13e764: 0x922303ed  lbu         $v1, 0x3ED($s1)
    ctx->pc = 0x13e764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
label_13e768:
    // 0x13e768: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x13e768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
label_13e76c:
    // 0x13e76c: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x13e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
label_13e770:
    // 0x13e770: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_13e774:
    if (ctx->pc == 0x13E774u) {
        ctx->pc = 0x13E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E770u;
        // 0x13e774: 0xafa8013c  sw          $t0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E778u;
        goto label_13e778;
    }
    ctx->pc = 0x13E770u;
    {
        const bool branch_taken_0x13e770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E770u;
        // 0x13e774: 0xafa8013c  sw          $t0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e770) {
            ctx->pc = 0x13E780u;
            goto label_13e780;
        }
    }
    ctx->pc = 0x13E778u;
label_13e778:
    // 0x13e778: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13e77c:
    // 0x13e77c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x13e77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_13e780:
    // 0x13e780: 0x26250180  addiu       $a1, $s1, 0x180
    ctx->pc = 0x13e780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_13e784:
    // 0x13e784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e788:
    // 0x13e788: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13e788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13e78c:
    // 0x13e78c: 0xc04fee8  jal         func_13FBA0
label_13e790:
    if (ctx->pc == 0x13E790u) {
        ctx->pc = 0x13E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E78Cu;
        // 0x13e790: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E794u;
        goto label_13e794;
    }
    ctx->pc = 0x13E78Cu;
    SET_GPR_U32(ctx, 31, 0x13E794u);
    ctx->pc = 0x13E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E78Cu;
    // 0x13e790: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FBA0u, 0x13E78Cu, 0x13E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E794u;
label_13e794:
    // 0x13e794: 0x86330352  lh          $s3, 0x352($s1)
    ctx->pc = 0x13e794u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e798:
    // 0x13e798: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13e798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13e79c:
    // 0x13e79c: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_13e7a0:
    // 0x13e7a0: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13e7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13e7a4:
    // 0x13e7a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13e7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13e7a8:
    // 0x13e7a8: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13e7ac:
    // 0x13e7ac: 0xc136afa  jal         func_4DABE8
label_13e7b0:
    if (ctx->pc == 0x13E7B0u) {
        ctx->pc = 0x13E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7ACu;
        // 0x13e7b0: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E7B4u;
        goto label_13e7b4;
    }
    ctx->pc = 0x13E7ACu;
    SET_GPR_U32(ctx, 31, 0x13E7B4u);
    ctx->pc = 0x13E7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7ACu;
    // 0x13e7b0: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E7ACu, 0x13E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7B4u;
label_13e7b4:
    // 0x13e7b4: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x13e7b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e7b8:
    // 0x13e7b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e7bc:
    // 0x13e7bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13e7bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e7c0:
    // 0x13e7c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13e7c4:
    // 0x13e7c4: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13e7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13e7c8:
    // 0x13e7c8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13e7cc:
    // 0x13e7cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13e7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13e7d0:
    // 0x13e7d0: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13e7d4:
    // 0x13e7d4: 0xc136afa  jal         func_4DABE8
label_13e7d8:
    if (ctx->pc == 0x13E7D8u) {
        ctx->pc = 0x13E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7D4u;
        // 0x13e7d8: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E7DCu;
        goto label_13e7dc;
    }
    ctx->pc = 0x13E7D4u;
    SET_GPR_U32(ctx, 31, 0x13E7DCu);
    ctx->pc = 0x13E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7D4u;
    // 0x13e7d8: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E7D4u, 0x13E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7DCu;
label_13e7dc:
    // 0x13e7dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13e7dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e7e0:
    // 0x13e7e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e7e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e7e4:
    // 0x13e7e4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13e7e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e7e8:
    // 0x13e7e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e7ec:
    // 0x13e7ec: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e7ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13e7f0:
    // 0x13e7f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e7f0u;
    // VWAITQ (Q already resolved in this runtime)
label_13e7f4:
    // 0x13e7f4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13e7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e7f8:
    // 0x13e7f8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13e7f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e7fc:
    // 0x13e7fc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x13e7fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13e800:
    // 0x13e800: 0x0  nop
    ctx->pc = 0x13e800u;
    // NOP
label_13e804:
    // 0x13e804: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x13e804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e808:
    // 0x13e808: 0x0  nop
    ctx->pc = 0x13e808u;
    // NOP
label_13e80c:
    // 0x13e80c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_13e810:
    if (ctx->pc == 0x13E810u) {
        ctx->pc = 0x13E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E80Cu;
        // 0x13e810: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E814u;
        goto label_13e814;
    }
    ctx->pc = 0x13E80Cu;
    {
        const bool branch_taken_0x13e80c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E80Cu;
        // 0x13e810: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e80c) {
            ctx->pc = 0x13E864u;
            goto label_13e864;
        }
    }
    ctx->pc = 0x13E814u;
label_13e814:
    // 0x13e814: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13e814u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e818:
    // 0x13e818: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e81c:
    // 0x13e81c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13e81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e820:
    // 0x13e820: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13e820u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13e824:
    // 0x13e824: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13e824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13e828:
    // 0x13e828: 0xc136afa  jal         func_4DABE8
label_13e82c:
    if (ctx->pc == 0x13E82Cu) {
        ctx->pc = 0x13E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E828u;
        // 0x13e82c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E830u;
        goto label_13e830;
    }
    ctx->pc = 0x13E828u;
    SET_GPR_U32(ctx, 31, 0x13E830u);
    ctx->pc = 0x13E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E828u;
    // 0x13e82c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E828u, 0x13E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E830u;
label_13e830:
    // 0x13e830: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13e830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e834:
    // 0x13e834: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e838:
    // 0x13e838: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13e838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e83c:
    // 0x13e83c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e83cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e840:
    // 0x13e840: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e840u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13e844:
    // 0x13e844: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e844u;
    // VWAITQ (Q already resolved in this runtime)
label_13e848:
    // 0x13e848: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13e848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e84c:
    // 0x13e84c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13e84cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e850:
    // 0x13e850: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13e850u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e854:
    // 0x13e854: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13e854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13e858:
    // 0x13e858: 0x0  nop
    ctx->pc = 0x13e858u;
    // NOP
label_13e85c:
    // 0x13e85c: 0x0  nop
    ctx->pc = 0x13e85cu;
    // NOP
label_13e860:
    // 0x13e860: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x13e860u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_13e864:
    // 0x13e864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13e868:
    // 0x13e868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e86c:
    // 0x13e86c: 0x262502f0  addiu       $a1, $s1, 0x2F0
    ctx->pc = 0x13e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_13e870:
    // 0x13e870: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13e874:
    // 0x13e874: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x13e874u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13e878:
    // 0x13e878: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x13e878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e87c:
    // 0x13e87c: 0x27b700f0  addiu       $s7, $sp, 0xF0
    ctx->pc = 0x13e87cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_13e880:
    // 0x13e880: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_13e884:
    if (ctx->pc == 0x13E884u) {
        ctx->pc = 0x13E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E880u;
        // 0x13e884: 0xafa50140  sw          $a1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E888u;
        goto label_13e888;
    }
    ctx->pc = 0x13E880u;
    {
        const bool branch_taken_0x13e880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E880u;
        // 0x13e884: 0xafa50140  sw          $a1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e880) {
            ctx->pc = 0x13E958u;
            goto label_13e958;
        }
    }
    ctx->pc = 0x13E888u;
label_13e888:
    // 0x13e888: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x13e888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13e88c:
    // 0x13e88c: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x13e88cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e890:
    // 0x13e890: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x13e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_13e894:
    // 0x13e894: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x13e894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13e898:
    // 0x13e898: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_13e89c:
    if (ctx->pc == 0x13E89Cu) {
        ctx->pc = 0x13E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E898u;
        // 0x13e89c: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8A0u;
        goto label_13e8a0;
    }
    ctx->pc = 0x13E898u;
    {
        const bool branch_taken_0x13e898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E898u;
        // 0x13e89c: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e898) {
            ctx->pc = 0x13E958u;
            goto label_13e958;
        }
    }
    ctx->pc = 0x13E8A0u;
label_13e8a0:
    // 0x13e8a0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13e8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13e8a4:
    // 0x13e8a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13e8a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13e8a8:
    // 0x13e8a8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x13e8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_13e8ac:
    // 0x13e8ac: 0x0  nop
    ctx->pc = 0x13e8acu;
    // NOP
label_13e8b0:
    // 0x13e8b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e8b4:
    // 0x13e8b4: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x13e8b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
label_13e8b8:
    // 0x13e8b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e8bc:
    // 0x13e8bc: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13e8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13e8c0:
    // 0x13e8c0: 0xc136afa  jal         func_4DABE8
label_13e8c4:
    if (ctx->pc == 0x13E8C4u) {
        ctx->pc = 0x13E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8C0u;
        // 0x13e8c4: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8C8u;
        goto label_13e8c8;
    }
    ctx->pc = 0x13E8C0u;
    SET_GPR_U32(ctx, 31, 0x13E8C8u);
    ctx->pc = 0x13E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8C0u;
    // 0x13e8c4: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E8C0u, 0x13E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8C8u;
label_13e8c8:
    // 0x13e8c8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x13e8c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e8cc:
    // 0x13e8cc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13e8ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e8d0:
    // 0x13e8d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e8d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e8d4:
    // 0x13e8d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13e8d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13e8d8:
    // 0x13e8d8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13e8d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e8dc:
    // 0x13e8dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e8dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e8e0:
    // 0x13e8e0: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x13e8e0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e8e4:
    // 0x13e8e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x13e8e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e8e8:
    // 0x13e8e8: 0x0  nop
    ctx->pc = 0x13e8e8u;
    // NOP
label_13e8ec:
    // 0x13e8ec: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x13e8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e8f0:
    // 0x13e8f0: 0x0  nop
    ctx->pc = 0x13e8f0u;
    // NOP
label_13e8f4:
    // 0x13e8f4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_13e8f8:
    if (ctx->pc == 0x13E8F8u) {
        ctx->pc = 0x13E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8F4u;
        // 0x13e8f8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8FCu;
        goto label_13e8fc;
    }
    ctx->pc = 0x13E8F4u;
    {
        const bool branch_taken_0x13e8f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8F4u;
        // 0x13e8f8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8f4) {
            ctx->pc = 0x13E958u;
            goto label_13e958;
        }
    }
    ctx->pc = 0x13E8FCu;
label_13e8fc:
    // 0x13e8fc: 0x96220352  lhu         $v0, 0x352($s1)
    ctx->pc = 0x13e8fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e900:
    // 0x13e900: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e904:
    // 0x13e904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13e908:
    // 0x13e908: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_13e90c:
    // 0x13e90c: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x13e90cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
label_13e910:
    // 0x13e910: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x13e910u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
label_13e914:
    // 0x13e914: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13e914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13e918:
    // 0x13e918: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13e918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13e91c:
    // 0x13e91c: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x13e91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_13e920:
    // 0x13e920: 0xc136afa  jal         func_4DABE8
label_13e924:
    if (ctx->pc == 0x13E924u) {
        ctx->pc = 0x13E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E920u;
        // 0x13e924: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E928u;
        goto label_13e928;
    }
    ctx->pc = 0x13E920u;
    SET_GPR_U32(ctx, 31, 0x13E928u);
    ctx->pc = 0x13E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E920u;
    // 0x13e924: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E920u, 0x13E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E928u;
label_13e928:
    // 0x13e928: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13e928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e92c:
    // 0x13e92c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x13e92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e930:
    // 0x13e930: 0x96260352  lhu         $a2, 0x352($s1)
    ctx->pc = 0x13e930u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e934:
    // 0x13e934: 0x86330352  lh          $s3, 0x352($s1)
    ctx->pc = 0x13e934u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e938:
    // 0x13e938: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13e93c:
    // 0x13e93c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_13e940:
    if (ctx->pc == 0x13E940u) {
        ctx->pc = 0x13E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E93Cu;
        // 0x13e940: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E944u;
        goto label_13e944;
    }
    ctx->pc = 0x13E93Cu;
    {
        const bool branch_taken_0x13e93c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E93Cu;
        // 0x13e940: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e93c) {
            ctx->pc = 0x13E958u;
            goto label_13e958;
        }
    }
    ctx->pc = 0x13E944u;
label_13e944:
    // 0x13e944: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13e948:
    // 0x13e948: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x13e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_13e94c:
    // 0x13e94c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x13e94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13e950:
    // 0x13e950: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
label_13e954:
    if (ctx->pc == 0x13E954u) {
        ctx->pc = 0x13E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E950u;
        // 0x13e954: 0x63400  sll         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E958u;
        goto label_13e958;
    }
    ctx->pc = 0x13E950u;
    {
        const bool branch_taken_0x13e950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e950) {
            ctx->pc = 0x13E954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E950u;
            // 0x13e954: 0x63400  sll         $a2, $a2, 16 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e8b0;
        }
    }
    ctx->pc = 0x13E958u;
label_13e958:
    // 0x13e958: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x13e958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e95c:
    // 0x13e95c: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_13e960:
    if (ctx->pc == 0x13E960u) {
        ctx->pc = 0x13E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E95Cu;
        // 0x13e960: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E964u;
        goto label_13e964;
    }
    ctx->pc = 0x13E95Cu;
    {
        const bool branch_taken_0x13e95c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E95Cu;
        // 0x13e960: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e95c) {
            ctx->pc = 0x13E9FCu;
            goto label_13e9fc;
        }
    }
    ctx->pc = 0x13E964u;
label_13e964:
    // 0x13e964: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13e964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13e968:
    // 0x13e968: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x13e968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_13e96c:
    // 0x13e96c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e970:
    // 0x13e970: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
label_13e974:
    // 0x13e974: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13e974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e978:
    // 0x13e978: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13e978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13e97c:
    // 0x13e97c: 0xc136afa  jal         func_4DABE8
label_13e980:
    if (ctx->pc == 0x13E980u) {
        ctx->pc = 0x13E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E97Cu;
        // 0x13e980: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E984u;
        goto label_13e984;
    }
    ctx->pc = 0x13E97Cu;
    SET_GPR_U32(ctx, 31, 0x13E984u);
    ctx->pc = 0x13E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E97Cu;
    // 0x13e980: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E97Cu, 0x13E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E984u;
label_13e984:
    // 0x13e984: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x13e984u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e988:
    // 0x13e988: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13e988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e98c:
    // 0x13e98c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13e98cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13e990:
    // 0x13e990: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13e990u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13e994:
    // 0x13e994: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13e994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e998:
    // 0x13e998: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13e998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13e99c:
    // 0x13e99c: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x13e99cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_13e9a0:
    // 0x13e9a0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x13e9a0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e9a4:
    // 0x13e9a4: 0x0  nop
    ctx->pc = 0x13e9a4u;
    // NOP
label_13e9a8:
    // 0x13e9a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x13e9a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13e9ac:
    // 0x13e9ac: 0x0  nop
    ctx->pc = 0x13e9acu;
    // NOP
label_13e9b0:
    // 0x13e9b0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_13e9b4:
    if (ctx->pc == 0x13E9B4u) {
        ctx->pc = 0x13E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9B0u;
        // 0x13e9b4: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E9B8u;
        goto label_13e9b8;
    }
    ctx->pc = 0x13E9B0u;
    {
        const bool branch_taken_0x13e9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9B0u;
        // 0x13e9b4: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9b0) {
            ctx->pc = 0x13E9FCu;
            goto label_13e9fc;
        }
    }
    ctx->pc = 0x13E9B8u;
label_13e9b8:
    // 0x13e9b8: 0x96220352  lhu         $v0, 0x352($s1)
    ctx->pc = 0x13e9b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e9bc:
    // 0x13e9bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e9c0:
    // 0x13e9c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13e9c4:
    // 0x13e9c4: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x13e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_13e9c8:
    // 0x13e9c8: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x13e9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
label_13e9cc:
    // 0x13e9cc: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x13e9ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
label_13e9d0:
    // 0x13e9d0: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13e9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13e9d4:
    // 0x13e9d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13e9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13e9d8:
    // 0x13e9d8: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x13e9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_13e9dc:
    // 0x13e9dc: 0xc136afa  jal         func_4DABE8
label_13e9e0:
    if (ctx->pc == 0x13E9E0u) {
        ctx->pc = 0x13E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9DCu;
        // 0x13e9e0: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E9E4u;
        goto label_13e9e4;
    }
    ctx->pc = 0x13E9DCu;
    SET_GPR_U32(ctx, 31, 0x13E9E4u);
    ctx->pc = 0x13E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9DCu;
    // 0x13e9e0: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13E9DCu, 0x13E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9E4u;
label_13e9e4:
    // 0x13e9e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13e9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e9e8:
    // 0x13e9e8: 0x86330352  lh          $s3, 0x352($s1)
    ctx->pc = 0x13e9e8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13e9ec:
    // 0x13e9ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13e9f0:
    // 0x13e9f0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13e9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13e9f4:
    // 0x13e9f4: 0x1e60ffdc  bgtz        $s3, . + 4 + (-0x24 << 2)
label_13e9f8:
    if (ctx->pc == 0x13E9F8u) {
        ctx->pc = 0x13E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9F4u;
        // 0x13e9f8: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E9FCu;
        goto label_13e9fc;
    }
    ctx->pc = 0x13E9F4u;
    {
        const bool branch_taken_0x13e9f4 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x13E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9F4u;
        // 0x13e9f8: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9f4) {
            ctx->pc = 0x13E968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e968;
        }
    }
    ctx->pc = 0x13E9FCu;
label_13e9fc:
    // 0x13e9fc: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13e9fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ea00:
    // 0x13ea00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13ea04:
    // 0x13ea04: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13ea04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ea08:
    // 0x13ea08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13ea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13ea0c:
    // 0x13ea0c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13ea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13ea10:
    // 0x13ea10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ea10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ea14:
    // 0x13ea14: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13ea14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13ea18:
    // 0x13ea18: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13ea18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13ea1c:
    // 0x13ea1c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13ea1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13ea20:
    // 0x13ea20: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13ea20u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13ea24:
    // 0x13ea24: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ea24u;
    // VWAITQ (Q already resolved in this runtime)
label_13ea28:
    // 0x13ea28: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13ea28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13ea2c:
    // 0x13ea2c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13ea2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13ea30:
    // 0x13ea30: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13ea34:
    // 0x13ea34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13ea34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13ea38:
    // 0x13ea38: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13ea3c:
    // 0x13ea3c: 0xc136afa  jal         func_4DABE8
label_13ea40:
    if (ctx->pc == 0x13EA40u) {
        ctx->pc = 0x13EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA3Cu;
        // 0x13ea40: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EA44u;
        goto label_13ea44;
    }
    ctx->pc = 0x13EA3Cu;
    SET_GPR_U32(ctx, 31, 0x13EA44u);
    ctx->pc = 0x13EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA3Cu;
    // 0x13ea40: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EA3Cu, 0x13EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA44u;
label_13ea44:
    // 0x13ea44: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x13ea44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_13ea48:
    // 0x13ea48: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x13ea48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ea4c:
    // 0x13ea4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13ea50:
    // 0x13ea50: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13ea50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13ea54:
    // 0x13ea54: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13ea54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13ea58:
    // 0x13ea58: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13ea58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13ea5c:
    // 0x13ea5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13ea5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13ea60:
    // 0x13ea60: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13ea60u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13ea64:
    // 0x13ea64: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ea64u;
    // VWAITQ (Q already resolved in this runtime)
label_13ea68:
    // 0x13ea68: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13ea68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13ea6c:
    // 0x13ea6c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x13ea6cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_13ea70:
    // 0x13ea70: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13ea70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ea74:
    // 0x13ea74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ea74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ea78:
    // 0x13ea78: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x13ea78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_13ea7c:
    // 0x13ea7c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13ea7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ea80:
    // 0x13ea80: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ea80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ea84:
    // 0x13ea84: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x13ea84u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ea88:
    // 0x13ea88: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x13ea88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_13ea8c:
    // 0x13ea8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13ea8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13ea90:
    // 0x13ea90: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13ea90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ea94:
    // 0x13ea94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ea94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ea98:
    // 0x13ea98: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ea98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ea9c:
    // 0x13ea9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ea9cu;
    // VWAITQ (Q already resolved in this runtime)
label_13eaa0:
    // 0x13eaa0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13eaa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13eaa4:
    // 0x13eaa4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x13eaa4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_13eaa8:
    // 0x13eaa8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x13eaa8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13eaac:
    // 0x13eaac: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x13eaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13eab0:
    // 0x13eab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13eab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13eab4:
    // 0x13eab4: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x13eab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_13eab8:
    // 0x13eab8: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x13eab8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_13eabc:
    // 0x13eabc: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x13eabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_13eac0:
    // 0x13eac0: 0x86300352  lh          $s0, 0x352($s1)
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13eac4:
    // 0x13eac4: 0xc136b24  jal         func_4DAC90
label_13eac8:
    if (ctx->pc == 0x13EAC8u) {
        ctx->pc = 0x13EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAC4u;
        // 0x13eac8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EACCu;
        goto label_13eacc;
    }
    ctx->pc = 0x13EAC4u;
    SET_GPR_U32(ctx, 31, 0x13EACCu);
    ctx->pc = 0x13EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EAC4u;
    // 0x13eac8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13EAC4u, 0x13EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EACCu;
label_13eacc:
    // 0x13eacc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13eaccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13ead0:
    // 0x13ead0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x13ead0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_13ead4:
    // 0x13ead4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x13ead4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_13ead8:
    // 0x13ead8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13eadc:
    // 0x13eadc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13eae0:
    // 0x13eae0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13eae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13eae4:
    // 0x13eae4: 0xc136b18  jal         func_4DAC60
label_13eae8:
    if (ctx->pc == 0x13EAE8u) {
        ctx->pc = 0x13EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAE4u;
        // 0x13eae8: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EAECu;
        goto label_13eaec;
    }
    ctx->pc = 0x13EAE4u;
    SET_GPR_U32(ctx, 31, 0x13EAECu);
    ctx->pc = 0x13EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EAE4u;
    // 0x13eae8: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13EAE4u, 0x13EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EAECu;
label_13eaec:
    // 0x13eaec: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13eaecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13eaf0:
    // 0x13eaf0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13eaf4:
    // 0x13eaf4: 0xc62c035c  lwc1        $f12, 0x35C($s1)
    ctx->pc = 0x13eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13eaf8:
    // 0x13eaf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13eaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13eafc:
    // 0x13eafc: 0xc136b24  jal         func_4DAC90
label_13eb00:
    if (ctx->pc == 0x13EB00u) {
        ctx->pc = 0x13EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAFCu;
        // 0x13eb00: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB04u;
        goto label_13eb04;
    }
    ctx->pc = 0x13EAFCu;
    SET_GPR_U32(ctx, 31, 0x13EB04u);
    ctx->pc = 0x13EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EAFCu;
    // 0x13eb00: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13EAFCu, 0x13EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB04u;
label_13eb04:
    // 0x13eb04: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13eb04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13eb08:
    // 0x13eb08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13eb0c:
    // 0x13eb0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13eb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13eb10:
    // 0x13eb10: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x13eb10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_13eb14:
    // 0x13eb14: 0xc136b24  jal         func_4DAC90
label_13eb18:
    if (ctx->pc == 0x13EB18u) {
        ctx->pc = 0x13EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB14u;
        // 0x13eb18: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB1Cu;
        goto label_13eb1c;
    }
    ctx->pc = 0x13EB14u;
    SET_GPR_U32(ctx, 31, 0x13EB1Cu);
    ctx->pc = 0x13EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB14u;
    // 0x13eb18: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13EB14u, 0x13EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB1Cu;
label_13eb1c:
    // 0x13eb1c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13eb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13eb20:
    // 0x13eb20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13eb24:
    // 0x13eb24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13eb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13eb28:
    // 0x13eb28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13eb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13eb2c:
    // 0x13eb2c: 0xc136b18  jal         func_4DAC60
label_13eb30:
    if (ctx->pc == 0x13EB30u) {
        ctx->pc = 0x13EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB2Cu;
        // 0x13eb30: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB34u;
        goto label_13eb34;
    }
    ctx->pc = 0x13EB2Cu;
    SET_GPR_U32(ctx, 31, 0x13EB34u);
    ctx->pc = 0x13EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB2Cu;
    // 0x13eb30: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13EB2Cu, 0x13EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB34u;
label_13eb34:
    // 0x13eb34: 0x8e250348  lw          $a1, 0x348($s1)
    ctx->pc = 0x13eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_13eb38:
    // 0x13eb38: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13eb38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13eb3c:
    // 0x13eb3c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x13eb3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13eb40:
    // 0x13eb40: 0x2ca40002  sltiu       $a0, $a1, 0x2
    ctx->pc = 0x13eb40u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13eb44:
    // 0x13eb44: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13eb48:
    // 0x13eb48: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
label_13eb4c:
    if (ctx->pc == 0x13EB4Cu) {
        ctx->pc = 0x13EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB48u;
        // 0x13eb4c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB50u;
        goto label_13eb50;
    }
    ctx->pc = 0x13EB48u;
    {
        const bool branch_taken_0x13eb48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB48u;
        // 0x13eb4c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb48) {
            ctx->pc = 0x13EC54u;
            goto label_13ec54;
        }
    }
    ctx->pc = 0x13EB50u;
label_13eb50:
    // 0x13eb50: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
label_13eb54:
    if (ctx->pc == 0x13EB54u) {
        ctx->pc = 0x13EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB50u;
        // 0x13eb54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB58u;
        goto label_13eb58;
    }
    ctx->pc = 0x13EB50u;
    {
        const bool branch_taken_0x13eb50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB50u;
        // 0x13eb54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb50) {
            ctx->pc = 0x13EC14u;
            goto label_13ec14;
        }
    }
    ctx->pc = 0x13EB58u;
label_13eb58:
    // 0x13eb58: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x13eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_13eb5c:
    // 0x13eb5c: 0x4600bd06  mov.s       $f20, $f23
    ctx->pc = 0x13eb5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[23]);
label_13eb60:
    // 0x13eb60: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x13eb60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_13eb64:
    // 0x13eb64: 0x26300340  addiu       $s0, $s1, 0x340
    ctx->pc = 0x13eb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_13eb68:
    // 0x13eb68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13eb6c:
    // 0x13eb6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13eb70:
    // 0x13eb70: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13eb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13eb74:
    // 0x13eb74: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x13eb74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_13eb78:
    // 0x13eb78: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_13eb7c:
    // 0x13eb7c: 0xc136afa  jal         func_4DABE8
label_13eb80:
    if (ctx->pc == 0x13EB80u) {
        ctx->pc = 0x13EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB7Cu;
        // 0x13eb80: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EB84u;
        goto label_13eb84;
    }
    ctx->pc = 0x13EB7Cu;
    SET_GPR_U32(ctx, 31, 0x13EB84u);
    ctx->pc = 0x13EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB7Cu;
    // 0x13eb80: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EB7Cu, 0x13EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB84u;
label_13eb84:
    // 0x13eb84: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x13eb84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13eb88:
    // 0x13eb88: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13eb88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13eb8c:
    // 0x13eb8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13eb8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13eb90:
    // 0x13eb90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13eb90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13eb94:
    // 0x13eb94: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13eb94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13eb98:
    // 0x13eb98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13eb98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13eb9c:
    // 0x13eb9c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13eb9cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13eba0:
    // 0x13eba0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x13eba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_13eba4:
    // 0x13eba4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13eba4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13eba8:
    // 0x13eba8: 0x0  nop
    ctx->pc = 0x13eba8u;
    // NOP
label_13ebac:
    // 0x13ebac: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13ebacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ebb0:
    // 0x13ebb0: 0x0  nop
    ctx->pc = 0x13ebb0u;
    // NOP
label_13ebb4:
    // 0x13ebb4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_13ebb8:
    if (ctx->pc == 0x13EBB8u) {
        ctx->pc = 0x13EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBB4u;
        // 0x13ebb8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EBBCu;
        goto label_13ebbc;
    }
    ctx->pc = 0x13EBB4u;
    {
        const bool branch_taken_0x13ebb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBB4u;
        // 0x13ebb8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebb4) {
            ctx->pc = 0x13EC00u;
            goto label_13ec00;
        }
    }
    ctx->pc = 0x13EBBCu;
label_13ebbc:
    // 0x13ebbc: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x13ebbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ebc0:
    // 0x13ebc0: 0x0  nop
    ctx->pc = 0x13ebc0u;
    // NOP
label_13ebc4:
    // 0x13ebc4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_13ebc8:
    if (ctx->pc == 0x13EBC8u) {
        ctx->pc = 0x13EBCCu;
        goto label_13ebcc;
    }
    ctx->pc = 0x13EBC4u;
    {
        const bool branch_taken_0x13ebc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ebc4) {
            ctx->pc = 0x13EBDCu;
            goto label_13ebdc;
        }
    }
    ctx->pc = 0x13EBCCu;
label_13ebcc:
    // 0x13ebcc: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x13ebccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ebd0:
    // 0x13ebd0: 0x0  nop
    ctx->pc = 0x13ebd0u;
    // NOP
label_13ebd4:
    // 0x13ebd4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_13ebd8:
    if (ctx->pc == 0x13EBD8u) {
        ctx->pc = 0x13EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBD4u;
        // 0x13ebd8: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EBDCu;
        goto label_13ebdc;
    }
    ctx->pc = 0x13EBD4u;
    {
        const bool branch_taken_0x13ebd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ebd4) {
            ctx->pc = 0x13EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EBD4u;
            // 0x13ebd8: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC00u;
            goto label_13ec00;
        }
    }
    ctx->pc = 0x13EBDCu;
label_13ebdc:
    // 0x13ebdc: 0x4614c834  c.lt.s      $f25, $f20
    ctx->pc = 0x13ebdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ebe0:
    // 0x13ebe0: 0x0  nop
    ctx->pc = 0x13ebe0u;
    // NOP
label_13ebe4:
    // 0x13ebe4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_13ebe8:
    if (ctx->pc == 0x13EBE8u) {
        ctx->pc = 0x13EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBE4u;
        // 0x13ebe8: 0x8e220348  lw          $v0, 0x348($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EBECu;
        goto label_13ebec;
    }
    ctx->pc = 0x13EBE4u;
    {
        const bool branch_taken_0x13ebe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ebe4) {
            ctx->pc = 0x13EBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EBE4u;
            // 0x13ebe8: 0x8e220348  lw          $v0, 0x348($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC04u;
            goto label_13ec04;
        }
    }
    ctx->pc = 0x13EBECu;
label_13ebec:
    // 0x13ebec: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x13ebecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ebf0:
    // 0x13ebf0: 0x0  nop
    ctx->pc = 0x13ebf0u;
    // NOP
label_13ebf4:
    // 0x13ebf4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_13ebf8:
    if (ctx->pc == 0x13EBF8u) {
        ctx->pc = 0x13EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBF4u;
        // 0x13ebf8: 0x8e220348  lw          $v0, 0x348($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EBFCu;
        goto label_13ebfc;
    }
    ctx->pc = 0x13EBF4u;
    {
        const bool branch_taken_0x13ebf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ebf4) {
            ctx->pc = 0x13EBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EBF4u;
            // 0x13ebf8: 0x8e220348  lw          $v0, 0x348($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC04u;
            goto label_13ec04;
        }
    }
    ctx->pc = 0x13EBFCu;
label_13ebfc:
    // 0x13ebfc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x13ebfcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_13ec00:
    // 0x13ec00: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_13ec04:
    // 0x13ec04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13ec08:
    // 0x13ec08: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x13ec08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13ec0c:
    // 0x13ec0c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_13ec10:
    if (ctx->pc == 0x13EC10u) {
        ctx->pc = 0x13EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC0Cu;
        // 0x13ec10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC14u;
        goto label_13ec14;
    }
    ctx->pc = 0x13EC0Cu;
    {
        const bool branch_taken_0x13ec0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC0Cu;
        // 0x13ec10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec0c) {
            ctx->pc = 0x13EB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13eb68;
        }
    }
    ctx->pc = 0x13EC14u;
label_13ec14:
    // 0x13ec14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13ec18:
    // 0x13ec18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13ec1c:
    // 0x13ec1c: 0xc136b24  jal         func_4DAC90
label_13ec20:
    if (ctx->pc == 0x13EC20u) {
        ctx->pc = 0x13EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC1Cu;
        // 0x13ec20: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC24u;
        goto label_13ec24;
    }
    ctx->pc = 0x13EC1Cu;
    SET_GPR_U32(ctx, 31, 0x13EC24u);
    ctx->pc = 0x13EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC1Cu;
    // 0x13ec20: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13EC1Cu, 0x13EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC24u;
label_13ec24:
    // 0x13ec24: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13ec24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13ec28:
    // 0x13ec28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13ec2c:
    // 0x13ec2c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x13ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13ec30:
    // 0x13ec30: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x13ec30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_13ec34:
    // 0x13ec34: 0xc136b24  jal         func_4DAC90
label_13ec38:
    if (ctx->pc == 0x13EC38u) {
        ctx->pc = 0x13EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC34u;
        // 0x13ec38: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC3Cu;
        goto label_13ec3c;
    }
    ctx->pc = 0x13EC34u;
    SET_GPR_U32(ctx, 31, 0x13EC3Cu);
    ctx->pc = 0x13EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC34u;
    // 0x13ec38: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13EC34u, 0x13EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC3Cu;
label_13ec3c:
    // 0x13ec3c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13ec3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13ec40:
    // 0x13ec40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ec44:
    // 0x13ec44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13ec44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ec48:
    // 0x13ec48: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x13ec48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13ec4c:
    // 0x13ec4c: 0xc136b18  jal         func_4DAC60
label_13ec50:
    if (ctx->pc == 0x13EC50u) {
        ctx->pc = 0x13EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC4Cu;
        // 0x13ec50: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC54u;
        goto label_13ec54;
    }
    ctx->pc = 0x13EC4Cu;
    SET_GPR_U32(ctx, 31, 0x13EC54u);
    ctx->pc = 0x13EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC4Cu;
    // 0x13ec50: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13EC4Cu, 0x13EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC54u;
label_13ec54:
    // 0x13ec54: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x13ec54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ec58:
    // 0x13ec58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13ec5c:
    // 0x13ec5c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13ec5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13ec60:
    // 0x13ec60: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13ec64:
    // 0x13ec64: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13ec68:
    // 0x13ec68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13ec68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13ec6c:
    // 0x13ec6c: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13ec70:
    // 0x13ec70: 0xc136afa  jal         func_4DABE8
label_13ec74:
    if (ctx->pc == 0x13EC74u) {
        ctx->pc = 0x13EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC70u;
        // 0x13ec74: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC78u;
        goto label_13ec78;
    }
    ctx->pc = 0x13EC70u;
    SET_GPR_U32(ctx, 31, 0x13EC78u);
    ctx->pc = 0x13EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC70u;
    // 0x13ec74: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EC70u, 0x13EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC78u;
label_13ec78:
    // 0x13ec78: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13ec78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13ec7c:
    // 0x13ec7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ec7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ec80:
    // 0x13ec80: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13ec80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ec84:
    // 0x13ec84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ec84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ec88:
    // 0x13ec88: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ec88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ec8c:
    // 0x13ec8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ec8cu;
    // VWAITQ (Q already resolved in this runtime)
label_13ec90:
    // 0x13ec90: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ec90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ec94:
    // 0x13ec94: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x13ec94u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ec98:
    // 0x13ec98: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x13ec98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13ec9c:
    // 0x13ec9c: 0x0  nop
    ctx->pc = 0x13ec9cu;
    // NOP
label_13eca0:
    // 0x13eca0: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x13eca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13eca4:
    // 0x13eca4: 0x0  nop
    ctx->pc = 0x13eca4u;
    // NOP
label_13eca8:
    // 0x13eca8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_13ecac:
    if (ctx->pc == 0x13ECACu) {
        ctx->pc = 0x13ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECA8u;
        // 0x13ecac: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ECB0u;
        goto label_13ecb0;
    }
    ctx->pc = 0x13ECA8u;
    {
        const bool branch_taken_0x13eca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECA8u;
        // 0x13ecac: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eca8) {
            ctx->pc = 0x13ED00u;
            goto label_13ed00;
        }
    }
    ctx->pc = 0x13ECB0u;
label_13ecb0:
    // 0x13ecb0: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13ecb0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ecb4:
    // 0x13ecb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13ecb8:
    // 0x13ecb8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ecbc:
    // 0x13ecbc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13ecc0:
    // 0x13ecc0: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13ecc4:
    // 0x13ecc4: 0xc136afa  jal         func_4DABE8
label_13ecc8:
    if (ctx->pc == 0x13ECC8u) {
        ctx->pc = 0x13ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECC4u;
        // 0x13ecc8: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ECCCu;
        goto label_13eccc;
    }
    ctx->pc = 0x13ECC4u;
    SET_GPR_U32(ctx, 31, 0x13ECCCu);
    ctx->pc = 0x13ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECC4u;
    // 0x13ecc8: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13ECC4u, 0x13ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECCCu;
label_13eccc:
    // 0x13eccc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13ecccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13ecd0:
    // 0x13ecd0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ecd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ecd4:
    // 0x13ecd4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13ecd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ecd8:
    // 0x13ecd8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ecd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ecdc:
    // 0x13ecdc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ecdcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ece0:
    // 0x13ece0: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ece0u;
    // VWAITQ (Q already resolved in this runtime)
label_13ece4:
    // 0x13ece4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ece4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ece8:
    // 0x13ece8: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x13ece8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ecec:
    // 0x13ecec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x13ececu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ecf0:
    // 0x13ecf0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13ecf4:
    // 0x13ecf4: 0x0  nop
    ctx->pc = 0x13ecf4u;
    // NOP
label_13ecf8:
    // 0x13ecf8: 0x0  nop
    ctx->pc = 0x13ecf8u;
    // NOP
label_13ecfc:
    // 0x13ecfc: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x13ecfcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_13ed00:
    // 0x13ed00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ed00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13ed04:
    // 0x13ed04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ed04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ed08:
    // 0x13ed08: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13ed08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13ed0c:
    // 0x13ed0c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x13ed0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ed10:
    // 0x13ed10: 0x0  nop
    ctx->pc = 0x13ed10u;
    // NOP
label_13ed14:
    // 0x13ed14: 0x45000056  bc1f        . + 4 + (0x56 << 2)
label_13ed18:
    if (ctx->pc == 0x13ED18u) {
        ctx->pc = 0x13ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED14u;
        // 0x13ed18: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED1Cu;
        goto label_13ed1c;
    }
    ctx->pc = 0x13ED14u;
    {
        const bool branch_taken_0x13ed14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED14u;
        // 0x13ed18: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed14) {
            ctx->pc = 0x13EE70u;
            goto label_13ee70;
        }
    }
    ctx->pc = 0x13ED1Cu;
label_13ed1c:
    // 0x13ed1c: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x13ed1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13ed20:
    // 0x13ed20: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x13ed20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ed24:
    // 0x13ed24: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x13ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_13ed28:
    // 0x13ed28: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x13ed28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13ed2c:
    // 0x13ed2c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_13ed30:
    if (ctx->pc == 0x13ED30u) {
        ctx->pc = 0x13ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED2Cu;
        // 0x13ed30: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED34u;
        goto label_13ed34;
    }
    ctx->pc = 0x13ED2Cu;
    {
        const bool branch_taken_0x13ed2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED2Cu;
        // 0x13ed30: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed2c) {
            ctx->pc = 0x13EE70u;
            goto label_13ee70;
        }
    }
    ctx->pc = 0x13ED34u;
label_13ed34:
    // 0x13ed34: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x13ed34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_13ed38:
    // 0x13ed38: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x13ed38u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_13ed3c:
    // 0x13ed3c: 0x0  nop
    ctx->pc = 0x13ed3cu;
    // NOP
label_13ed40:
    // 0x13ed40: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_13ed44:
    // 0x13ed44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13ed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13ed48:
    // 0x13ed48: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
label_13ed4c:
    // 0x13ed4c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ed50:
    // 0x13ed50: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13ed50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13ed54:
    // 0x13ed54: 0xc136afa  jal         func_4DABE8
label_13ed58:
    if (ctx->pc == 0x13ED58u) {
        ctx->pc = 0x13ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED54u;
        // 0x13ed58: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED5Cu;
        goto label_13ed5c;
    }
    ctx->pc = 0x13ED54u;
    SET_GPR_U32(ctx, 31, 0x13ED5Cu);
    ctx->pc = 0x13ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED54u;
    // 0x13ed58: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13ED54u, 0x13ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED5Cu;
label_13ed5c:
    // 0x13ed5c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x13ed5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13ed60:
    // 0x13ed60: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13ed60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ed64:
    // 0x13ed64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ed64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ed68:
    // 0x13ed68: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13ed68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13ed6c:
    // 0x13ed6c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13ed6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ed70:
    // 0x13ed70: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ed70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ed74:
    // 0x13ed74: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x13ed74u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ed78:
    // 0x13ed78: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x13ed78u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ed7c:
    // 0x13ed7c: 0x0  nop
    ctx->pc = 0x13ed7cu;
    // NOP
label_13ed80:
    // 0x13ed80: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x13ed80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ed84:
    // 0x13ed84: 0x0  nop
    ctx->pc = 0x13ed84u;
    // NOP
label_13ed88:
    // 0x13ed88: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_13ed8c:
    if (ctx->pc == 0x13ED8Cu) {
        ctx->pc = 0x13ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED88u;
        // 0x13ed8c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ED90u;
        goto label_13ed90;
    }
    ctx->pc = 0x13ED88u;
    {
        const bool branch_taken_0x13ed88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED88u;
        // 0x13ed8c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed88) {
            ctx->pc = 0x13EE70u;
            goto label_13ee70;
        }
    }
    ctx->pc = 0x13ED90u;
label_13ed90:
    // 0x13ed90: 0x96220352  lhu         $v0, 0x352($s1)
    ctx->pc = 0x13ed90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ed94:
    // 0x13ed94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13ed98:
    // 0x13ed98: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13ed98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13ed9c:
    // 0x13ed9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13eda0:
    // 0x13eda0: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x13eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_13eda4:
    // 0x13eda4: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x13eda4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
label_13eda8:
    // 0x13eda8: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x13eda8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
label_13edac:
    // 0x13edac: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13edacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13edb0:
    // 0x13edb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13edb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13edb4:
    // 0x13edb4: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13edb8:
    // 0x13edb8: 0xc136afa  jal         func_4DABE8
label_13edbc:
    if (ctx->pc == 0x13EDBCu) {
        ctx->pc = 0x13EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDB8u;
        // 0x13edbc: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EDC0u;
        goto label_13edc0;
    }
    ctx->pc = 0x13EDB8u;
    SET_GPR_U32(ctx, 31, 0x13EDC0u);
    ctx->pc = 0x13EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDB8u;
    // 0x13edbc: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EDB8u, 0x13EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDC0u;
label_13edc0:
    // 0x13edc0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13edc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13edc4:
    // 0x13edc4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13edc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13edc8:
    // 0x13edc8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13edc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13edcc:
    // 0x13edcc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13edccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13edd0:
    // 0x13edd0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13edd0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13edd4:
    // 0x13edd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x13edd4u;
    // VWAITQ (Q already resolved in this runtime)
label_13edd8:
    // 0x13edd8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13edd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13eddc:
    // 0x13eddc: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x13eddcu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ede0:
    // 0x13ede0: 0x448aa000  mtc1        $t2, $f20
    ctx->pc = 0x13ede0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13ede4:
    // 0x13ede4: 0x0  nop
    ctx->pc = 0x13ede4u;
    // NOP
label_13ede8:
    // 0x13ede8: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x13ede8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13edec:
    // 0x13edec: 0x0  nop
    ctx->pc = 0x13edecu;
    // NOP
label_13edf0:
    // 0x13edf0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_13edf4:
    if (ctx->pc == 0x13EDF4u) {
        ctx->pc = 0x13EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDF0u;
        // 0x13edf4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EDF8u;
        goto label_13edf8;
    }
    ctx->pc = 0x13EDF0u;
    {
        const bool branch_taken_0x13edf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDF0u;
        // 0x13edf4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edf0) {
            ctx->pc = 0x13EE48u;
            goto label_13ee48;
        }
    }
    ctx->pc = 0x13EDF8u;
label_13edf8:
    // 0x13edf8: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13edf8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13edfc:
    // 0x13edfc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13ee00:
    // 0x13ee00: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ee04:
    // 0x13ee04: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13ee08:
    // 0x13ee08: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13ee08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13ee0c:
    // 0x13ee0c: 0xc136afa  jal         func_4DABE8
label_13ee10:
    if (ctx->pc == 0x13EE10u) {
        ctx->pc = 0x13EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE0Cu;
        // 0x13ee10: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE14u;
        goto label_13ee14;
    }
    ctx->pc = 0x13EE0Cu;
    SET_GPR_U32(ctx, 31, 0x13EE14u);
    ctx->pc = 0x13EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE0Cu;
    // 0x13ee10: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EE0Cu, 0x13EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE14u;
label_13ee14:
    // 0x13ee14: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13ee14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13ee18:
    // 0x13ee18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ee18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ee1c:
    // 0x13ee1c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13ee1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ee20:
    // 0x13ee20: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ee20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ee24:
    // 0x13ee24: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ee24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ee28:
    // 0x13ee28: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ee28u;
    // VWAITQ (Q already resolved in this runtime)
label_13ee2c:
    // 0x13ee2c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ee2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ee30:
    // 0x13ee30: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13ee30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ee34:
    // 0x13ee34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13ee34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ee38:
    // 0x13ee38: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13ee3c:
    // 0x13ee3c: 0x0  nop
    ctx->pc = 0x13ee3cu;
    // NOP
label_13ee40:
    // 0x13ee40: 0x0  nop
    ctx->pc = 0x13ee40u;
    // NOP
label_13ee44:
    // 0x13ee44: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x13ee44u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_13ee48:
    // 0x13ee48: 0x4615c034  c.lt.s      $f24, $f21
    ctx->pc = 0x13ee48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ee4c:
    // 0x13ee4c: 0x0  nop
    ctx->pc = 0x13ee4cu;
    // NOP
label_13ee50:
    // 0x13ee50: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_13ee54:
    if (ctx->pc == 0x13EE54u) {
        ctx->pc = 0x13EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE50u;
        // 0x13ee54: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE58u;
        goto label_13ee58;
    }
    ctx->pc = 0x13EE50u;
    {
        const bool branch_taken_0x13ee50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ee50) {
            ctx->pc = 0x13EE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EE50u;
            // 0x13ee54: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EE74u;
            goto label_13ee74;
        }
    }
    ctx->pc = 0x13EE58u;
label_13ee58:
    // 0x13ee58: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x13ee58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13ee5c:
    // 0x13ee5c: 0x86230352  lh          $v1, 0x352($s1)
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ee60:
    // 0x13ee60: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x13ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_13ee64:
    // 0x13ee64: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x13ee64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13ee68:
    // 0x13ee68: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_13ee6c:
    if (ctx->pc == 0x13EE6Cu) {
        ctx->pc = 0x13EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE68u;
        // 0x13ee6c: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE70u;
        goto label_13ee70;
    }
    ctx->pc = 0x13EE68u;
    {
        const bool branch_taken_0x13ee68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE68u;
        // 0x13ee6c: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee68) {
            ctx->pc = 0x13ED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ed40;
        }
    }
    ctx->pc = 0x13EE70u;
label_13ee70:
    // 0x13ee70: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x13ee70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ee74:
    // 0x13ee74: 0x18400047  blez        $v0, . + 4 + (0x47 << 2)
label_13ee78:
    if (ctx->pc == 0x13EE78u) {
        ctx->pc = 0x13EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE74u;
        // 0x13ee78: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE7Cu;
        goto label_13ee7c;
    }
    ctx->pc = 0x13EE74u;
    {
        const bool branch_taken_0x13ee74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE74u;
        // 0x13ee78: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee74) {
            ctx->pc = 0x13EF94u;
            goto label_13ef94;
        }
    }
    ctx->pc = 0x13EE7Cu;
label_13ee7c:
    // 0x13ee7c: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x13ee7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_13ee80:
    // 0x13ee80: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x13ee80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_13ee84:
    // 0x13ee84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13ee88:
    // 0x13ee88: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x13ee88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
label_13ee8c:
    // 0x13ee8c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ee90:
    // 0x13ee90: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13ee90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13ee94:
    // 0x13ee94: 0xc136afa  jal         func_4DABE8
label_13ee98:
    if (ctx->pc == 0x13EE98u) {
        ctx->pc = 0x13EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE94u;
        // 0x13ee98: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE9Cu;
        goto label_13ee9c;
    }
    ctx->pc = 0x13EE94u;
    SET_GPR_U32(ctx, 31, 0x13EE9Cu);
    ctx->pc = 0x13EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE94u;
    // 0x13ee98: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EE94u, 0x13EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE9Cu;
label_13ee9c:
    // 0x13ee9c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x13ee9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13eea0:
    // 0x13eea0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13eea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13eea4:
    // 0x13eea4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13eea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13eea8:
    // 0x13eea8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13eea8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13eeac:
    // 0x13eeac: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13eeacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13eeb0:
    // 0x13eeb0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13eeb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13eeb4:
    // 0x13eeb4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13eeb4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13eeb8:
    // 0x13eeb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13eeb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13eebc:
    // 0x13eebc: 0x0  nop
    ctx->pc = 0x13eebcu;
    // NOP
label_13eec0:
    // 0x13eec0: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x13eec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13eec4:
    // 0x13eec4: 0x0  nop
    ctx->pc = 0x13eec4u;
    // NOP
label_13eec8:
    // 0x13eec8: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_13eecc:
    if (ctx->pc == 0x13EECCu) {
        ctx->pc = 0x13EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEC8u;
        // 0x13eecc: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EED0u;
        goto label_13eed0;
    }
    ctx->pc = 0x13EEC8u;
    {
        const bool branch_taken_0x13eec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEC8u;
        // 0x13eecc: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eec8) {
            ctx->pc = 0x13EF94u;
            goto label_13ef94;
        }
    }
    ctx->pc = 0x13EED0u;
label_13eed0:
    // 0x13eed0: 0x96220352  lhu         $v0, 0x352($s1)
    ctx->pc = 0x13eed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13eed4:
    // 0x13eed4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13eed8:
    // 0x13eed8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13eed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13eedc:
    // 0x13eedc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13eee0:
    // 0x13eee0: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x13eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_13eee4:
    // 0x13eee4: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x13eee4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
label_13eee8:
    // 0x13eee8: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
label_13eeec:
    // 0x13eeec: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13eef0:
    // 0x13eef0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13eef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13eef4:
    // 0x13eef4: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13eef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13eef8:
    // 0x13eef8: 0xc136afa  jal         func_4DABE8
label_13eefc:
    if (ctx->pc == 0x13EEFCu) {
        ctx->pc = 0x13EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEF8u;
        // 0x13eefc: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EF00u;
        goto label_13ef00;
    }
    ctx->pc = 0x13EEF8u;
    SET_GPR_U32(ctx, 31, 0x13EF00u);
    ctx->pc = 0x13EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEF8u;
    // 0x13eefc: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EEF8u, 0x13EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF00u;
label_13ef00:
    // 0x13ef00: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13ef00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13ef04:
    // 0x13ef04: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ef04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ef08:
    // 0x13ef08: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13ef08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ef0c:
    // 0x13ef0c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ef0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ef10:
    // 0x13ef10: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ef10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ef14:
    // 0x13ef14: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ef14u;
    // VWAITQ (Q already resolved in this runtime)
label_13ef18:
    // 0x13ef18: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ef18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ef1c:
    // 0x13ef1c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x13ef1cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ef20:
    // 0x13ef20: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x13ef20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13ef24:
    // 0x13ef24: 0x0  nop
    ctx->pc = 0x13ef24u;
    // NOP
label_13ef28:
    // 0x13ef28: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x13ef28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ef2c:
    // 0x13ef2c: 0x0  nop
    ctx->pc = 0x13ef2cu;
    // NOP
label_13ef30:
    // 0x13ef30: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_13ef34:
    if (ctx->pc == 0x13EF34u) {
        ctx->pc = 0x13EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF30u;
        // 0x13ef34: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EF38u;
        goto label_13ef38;
    }
    ctx->pc = 0x13EF30u;
    {
        const bool branch_taken_0x13ef30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF30u;
        // 0x13ef34: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef30) {
            ctx->pc = 0x13EF88u;
            goto label_13ef88;
        }
    }
    ctx->pc = 0x13EF38u;
label_13ef38:
    // 0x13ef38: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13ef38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ef3c:
    // 0x13ef3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13ef40:
    // 0x13ef40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ef44:
    // 0x13ef44: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13ef44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13ef48:
    // 0x13ef48: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13ef4c:
    // 0x13ef4c: 0xc136afa  jal         func_4DABE8
label_13ef50:
    if (ctx->pc == 0x13EF50u) {
        ctx->pc = 0x13EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF4Cu;
        // 0x13ef50: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EF54u;
        goto label_13ef54;
    }
    ctx->pc = 0x13EF4Cu;
    SET_GPR_U32(ctx, 31, 0x13EF54u);
    ctx->pc = 0x13EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF4Cu;
    // 0x13ef50: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EF4Cu, 0x13EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF54u;
label_13ef54:
    // 0x13ef54: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13ef54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13ef58:
    // 0x13ef58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ef58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ef5c:
    // 0x13ef5c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13ef5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ef60:
    // 0x13ef60: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ef60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ef64:
    // 0x13ef64: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ef64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ef68:
    // 0x13ef68: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ef68u;
    // VWAITQ (Q already resolved in this runtime)
label_13ef6c:
    // 0x13ef6c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ef6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ef70:
    // 0x13ef70: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x13ef70u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_13ef74:
    // 0x13ef74: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x13ef74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ef78:
    // 0x13ef78: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13ef7c:
    // 0x13ef7c: 0x0  nop
    ctx->pc = 0x13ef7cu;
    // NOP
label_13ef80:
    // 0x13ef80: 0x0  nop
    ctx->pc = 0x13ef80u;
    // NOP
label_13ef84:
    // 0x13ef84: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x13ef84u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_13ef88:
    // 0x13ef88: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x13ef88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ef8c:
    // 0x13ef8c: 0x1c40ffbc  bgtz        $v0, . + 4 + (-0x44 << 2)
label_13ef90:
    if (ctx->pc == 0x13EF90u) {
        ctx->pc = 0x13EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF8Cu;
        // 0x13ef90: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EF94u;
        goto label_13ef94;
    }
    ctx->pc = 0x13EF8Cu;
    {
        const bool branch_taken_0x13ef8c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x13EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF8Cu;
        // 0x13ef90: 0x96260352  lhu         $a2, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef8c) {
            ctx->pc = 0x13EE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ee80;
        }
    }
    ctx->pc = 0x13EF94u;
label_13ef94:
    // 0x13ef94: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x13ef94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ef98:
    // 0x13ef98: 0x126500cc  beq         $s3, $a1, . + 4 + (0xCC << 2)
label_13ef9c:
    if (ctx->pc == 0x13EF9Cu) {
        ctx->pc = 0x13EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF98u;
        // 0x13ef9c: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EFA0u;
        goto label_13efa0;
    }
    ctx->pc = 0x13EF98u;
    {
        const bool branch_taken_0x13ef98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x13EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF98u;
        // 0x13ef9c: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef98) {
            ctx->pc = 0x13F2CCu;
            goto label_13f2cc;
        }
    }
    ctx->pc = 0x13EFA0u;
label_13efa0:
    // 0x13efa0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13efa4:
    // 0x13efa4: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13efa8:
    // 0x13efa8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13efa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13efac:
    // 0x13efac: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x13efacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_13efb0:
    // 0x13efb0: 0xc136afa  jal         func_4DABE8
label_13efb4:
    if (ctx->pc == 0x13EFB4u) {
        ctx->pc = 0x13EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFB0u;
        // 0x13efb4: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EFB8u;
        goto label_13efb8;
    }
    ctx->pc = 0x13EFB0u;
    SET_GPR_U32(ctx, 31, 0x13EFB8u);
    ctx->pc = 0x13EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFB0u;
    // 0x13efb4: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13EFB0u, 0x13EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFB8u;
label_13efb8:
    // 0x13efb8: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13efb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13efbc:
    // 0x13efbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13efc0:
    // 0x13efc0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13efc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13efc4:
    // 0x13efc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13efc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13efc8:
    // 0x13efc8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13efc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13efcc:
    // 0x13efcc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13efccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13efd0:
    // 0x13efd0: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13efd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13efd4:
    // 0x13efd4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13efd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13efd8:
    // 0x13efd8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13efd8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13efdc:
    // 0x13efdc: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13efdcu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13efe0:
    // 0x13efe0: 0x4a0003bf  vwaitq
    ctx->pc = 0x13efe0u;
    // VWAITQ (Q already resolved in this runtime)
label_13efe4:
    // 0x13efe4: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13efe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13efe8:
    // 0x13efe8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13efe8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_13efec:
    // 0x13efec: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13eff0:
    // 0x13eff0: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13eff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13eff4:
    // 0x13eff4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13eff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13eff8:
    // 0x13eff8: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x13eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_13effc:
    // 0x13effc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x13effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_13f000:
    // 0x13f000: 0xc136afa  jal         func_4DABE8
label_13f004:
    if (ctx->pc == 0x13F004u) {
        ctx->pc = 0x13F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F000u;
        // 0x13f004: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F008u;
        goto label_13f008;
    }
    ctx->pc = 0x13F000u;
    SET_GPR_U32(ctx, 31, 0x13F008u);
    ctx->pc = 0x13F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F000u;
    // 0x13f004: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F000u, 0x13F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F008u;
label_13f008:
    // 0x13f008: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x13f008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f00c:
    // 0x13f00c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f010:
    // 0x13f010: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13f010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13f014:
    // 0x13f014: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13f014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13f018:
    // 0x13f018: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13f018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13f01c:
    // 0x13f01c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13f01cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13f020:
    // 0x13f020: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13f020u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13f024:
    // 0x13f024: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f024u;
    // VWAITQ (Q already resolved in this runtime)
label_13f028:
    // 0x13f028: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13f028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13f02c:
    // 0x13f02c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x13f02cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_13f030:
    // 0x13f030: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13f030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f034:
    // 0x13f034: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f038:
    // 0x13f038: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x13f038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_13f03c:
    // 0x13f03c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13f03cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f040:
    // 0x13f040: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f044:
    // 0x13f044: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x13f044u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f048:
    // 0x13f048: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13f048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13f04c:
    // 0x13f04c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13f04cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f050:
    // 0x13f050: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f054:
    // 0x13f054: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f054u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13f058:
    // 0x13f058: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f058u;
    // VWAITQ (Q already resolved in this runtime)
label_13f05c:
    // 0x13f05c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13f05cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f060:
    // 0x13f060: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x13f060u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f064:
    // 0x13f064: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x13f064u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f068:
    // 0x13f068: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13f068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13f06c:
    // 0x13f06c: 0x448ab000  mtc1        $t2, $f22
    ctx->pc = 0x13f06cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13f070:
    // 0x13f070: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x13f070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_13f074:
    // 0x13f074: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x13f074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_13f078:
    // 0x13f078: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x13f078u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_13f07c:
    // 0x13f07c: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x13f07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_13f080:
    // 0x13f080: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x13f080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_13f084:
    // 0x13f084: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x13f084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_13f088:
    // 0x13f088: 0xc136b24  jal         func_4DAC90
label_13f08c:
    if (ctx->pc == 0x13F08Cu) {
        ctx->pc = 0x13F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F088u;
        // 0x13f08c: 0x86300352  lh          $s0, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F090u;
        goto label_13f090;
    }
    ctx->pc = 0x13F088u;
    SET_GPR_U32(ctx, 31, 0x13F090u);
    ctx->pc = 0x13F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F088u;
    // 0x13f08c: 0x86300352  lh          $s0, 0x352($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F088u, 0x13F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F090u;
label_13f090:
    // 0x13f090: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13f090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13f094:
    // 0x13f094: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x13f094u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_13f098:
    // 0x13f098: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x13f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_13f09c:
    // 0x13f09c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f0a0:
    // 0x13f0a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x13f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_13f0a4:
    // 0x13f0a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13f0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f0a8:
    // 0x13f0a8: 0xc136b18  jal         func_4DAC60
label_13f0ac:
    if (ctx->pc == 0x13F0ACu) {
        ctx->pc = 0x13F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0A8u;
        // 0x13f0ac: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0B0u;
        goto label_13f0b0;
    }
    ctx->pc = 0x13F0A8u;
    SET_GPR_U32(ctx, 31, 0x13F0B0u);
    ctx->pc = 0x13F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0A8u;
    // 0x13f0ac: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13F0A8u, 0x13F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0B0u;
label_13f0b0:
    // 0x13f0b0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13f0b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13f0b4:
    // 0x13f0b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f0b8:
    // 0x13f0b8: 0xc62c035c  lwc1        $f12, 0x35C($s1)
    ctx->pc = 0x13f0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f0bc:
    // 0x13f0bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13f0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13f0c0:
    // 0x13f0c0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_13f0c4:
    // 0x13f0c4: 0xc136b24  jal         func_4DAC90
label_13f0c8:
    if (ctx->pc == 0x13F0C8u) {
        ctx->pc = 0x13F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0C4u;
        // 0x13f0c8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0CCu;
        goto label_13f0cc;
    }
    ctx->pc = 0x13F0C4u;
    SET_GPR_U32(ctx, 31, 0x13F0CCu);
    ctx->pc = 0x13F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0C4u;
    // 0x13f0c8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F0C4u, 0x13F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0CCu;
label_13f0cc:
    // 0x13f0cc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f0ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f0d0:
    // 0x13f0d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f0d4:
    // 0x13f0d4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f0d8:
    // 0x13f0d8: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x13f0d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_13f0dc:
    // 0x13f0dc: 0xc136b24  jal         func_4DAC90
label_13f0e0:
    if (ctx->pc == 0x13F0E0u) {
        ctx->pc = 0x13F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0DCu;
        // 0x13f0e0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0E4u;
        goto label_13f0e4;
    }
    ctx->pc = 0x13F0DCu;
    SET_GPR_U32(ctx, 31, 0x13F0E4u);
    ctx->pc = 0x13F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0DCu;
    // 0x13f0e0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F0DCu, 0x13F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0E4u;
label_13f0e4:
    // 0x13f0e4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f0e8:
    // 0x13f0e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f0ec:
    // 0x13f0ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13f0f0:
    // 0x13f0f0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13f0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f0f4:
    // 0x13f0f4: 0xc136b18  jal         func_4DAC60
label_13f0f8:
    if (ctx->pc == 0x13F0F8u) {
        ctx->pc = 0x13F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0F4u;
        // 0x13f0f8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0FCu;
        goto label_13f0fc;
    }
    ctx->pc = 0x13F0F4u;
    SET_GPR_U32(ctx, 31, 0x13F0FCu);
    ctx->pc = 0x13F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0F4u;
    // 0x13f0f8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13F0F4u, 0x13F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0FCu;
label_13f0fc:
    // 0x13f0fc: 0x8e240348  lw          $a0, 0x348($s1)
    ctx->pc = 0x13f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_13f100:
    // 0x13f100: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f104:
    // 0x13f104: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x13f104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13f108:
    // 0x13f108: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13f10c:
    // 0x13f10c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_13f110:
    if (ctx->pc == 0x13F110u) {
        ctx->pc = 0x13F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F10Cu;
        // 0x13f110: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F114u;
        goto label_13f114;
    }
    ctx->pc = 0x13F10Cu;
    {
        const bool branch_taken_0x13f10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F10Cu;
        // 0x13f110: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f10c) {
            ctx->pc = 0x13F1E8u;
            goto label_13f1e8;
        }
    }
    ctx->pc = 0x13F114u;
label_13f114:
    // 0x13f114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f118:
    // 0x13f118: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_13f11c:
    if (ctx->pc == 0x13F11Cu) {
        ctx->pc = 0x13F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F118u;
        // 0x13f11c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F120u;
        goto label_13f120;
    }
    ctx->pc = 0x13F118u;
    {
        const bool branch_taken_0x13f118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F118u;
        // 0x13f11c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f118) {
            ctx->pc = 0x13F1A8u;
            goto label_13f1a8;
        }
    }
    ctx->pc = 0x13F120u;
label_13f120:
    // 0x13f120: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_13f124:
    // 0x13f124: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13f124u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13f128:
    // 0x13f128: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x13f128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_13f12c:
    // 0x13f12c: 0x26300340  addiu       $s0, $s1, 0x340
    ctx->pc = 0x13f12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_13f130:
    // 0x13f130: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13f134:
    // 0x13f134: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f138:
    // 0x13f138: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13f138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f13c:
    // 0x13f13c: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_13f140:
    // 0x13f140: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13f140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_13f144:
    // 0x13f144: 0xc136afa  jal         func_4DABE8
label_13f148:
    if (ctx->pc == 0x13F148u) {
        ctx->pc = 0x13F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F144u;
        // 0x13f148: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F14Cu;
        goto label_13f14c;
    }
    ctx->pc = 0x13F144u;
    SET_GPR_U32(ctx, 31, 0x13F14Cu);
    ctx->pc = 0x13F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F144u;
    // 0x13f148: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F144u, 0x13F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F14Cu;
label_13f14c:
    // 0x13f14c: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x13f14cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13f150:
    // 0x13f150: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13f150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f154:
    // 0x13f154: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f158:
    // 0x13f158: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13f158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13f15c:
    // 0x13f15c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13f15cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f160:
    // 0x13f160: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f164:
    // 0x13f164: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13f164u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f168:
    // 0x13f168: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x13f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_13f16c:
    // 0x13f16c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f16cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f170:
    // 0x13f170: 0x0  nop
    ctx->pc = 0x13f170u;
    // NOP
label_13f174:
    // 0x13f174: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13f174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f178:
    // 0x13f178: 0x0  nop
    ctx->pc = 0x13f178u;
    // NOP
label_13f17c:
    // 0x13f17c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_13f180:
    if (ctx->pc == 0x13F180u) {
        ctx->pc = 0x13F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F17Cu;
        // 0x13f180: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F184u;
        goto label_13f184;
    }
    ctx->pc = 0x13F17Cu;
    {
        const bool branch_taken_0x13f17c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F17Cu;
        // 0x13f180: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f17c) {
            ctx->pc = 0x13F194u;
            goto label_13f194;
        }
    }
    ctx->pc = 0x13F184u;
label_13f184:
    // 0x13f184: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x13f184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f188:
    // 0x13f188: 0x0  nop
    ctx->pc = 0x13f188u;
    // NOP
label_13f18c:
    // 0x13f18c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_13f190:
    if (ctx->pc == 0x13F190u) {
        ctx->pc = 0x13F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F18Cu;
        // 0x13f190: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F194u;
        goto label_13f194;
    }
    ctx->pc = 0x13F18Cu;
    {
        const bool branch_taken_0x13f18c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f18c) {
            ctx->pc = 0x13F190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F18Cu;
            // 0x13f190: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F194u;
            goto label_13f194;
        }
    }
    ctx->pc = 0x13F194u;
label_13f194:
    // 0x13f194: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x13f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_13f198:
    // 0x13f198: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13f19c:
    // 0x13f19c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x13f19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13f1a0:
    // 0x13f1a0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_13f1a4:
    if (ctx->pc == 0x13F1A4u) {
        ctx->pc = 0x13F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1A0u;
        // 0x13f1a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1A8u;
        goto label_13f1a8;
    }
    ctx->pc = 0x13F1A0u;
    {
        const bool branch_taken_0x13f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1A0u;
        // 0x13f1a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1a0) {
            ctx->pc = 0x13F130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f130;
        }
    }
    ctx->pc = 0x13F1A8u;
label_13f1a8:
    // 0x13f1a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f1ac:
    // 0x13f1ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13f1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13f1b0:
    // 0x13f1b0: 0xc136b24  jal         func_4DAC90
label_13f1b4:
    if (ctx->pc == 0x13F1B4u) {
        ctx->pc = 0x13F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1B0u;
        // 0x13f1b4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1B8u;
        goto label_13f1b8;
    }
    ctx->pc = 0x13F1B0u;
    SET_GPR_U32(ctx, 31, 0x13F1B8u);
    ctx->pc = 0x13F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1B0u;
    // 0x13f1b4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F1B0u, 0x13F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1B8u;
label_13f1b8:
    // 0x13f1b8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f1b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f1bc:
    // 0x13f1bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f1c0:
    // 0x13f1c0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f1c4:
    // 0x13f1c4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x13f1c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_13f1c8:
    // 0x13f1c8: 0xc136b24  jal         func_4DAC90
label_13f1cc:
    if (ctx->pc == 0x13F1CCu) {
        ctx->pc = 0x13F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1C8u;
        // 0x13f1cc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1D0u;
        goto label_13f1d0;
    }
    ctx->pc = 0x13F1C8u;
    SET_GPR_U32(ctx, 31, 0x13F1D0u);
    ctx->pc = 0x13F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1C8u;
    // 0x13f1cc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F1C8u, 0x13F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1D0u;
label_13f1d0:
    // 0x13f1d0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f1d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f1d4:
    // 0x13f1d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13f1d8:
    // 0x13f1d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13f1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f1dc:
    // 0x13f1dc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f1e0:
    // 0x13f1e0: 0xc136b18  jal         func_4DAC60
label_13f1e4:
    if (ctx->pc == 0x13F1E4u) {
        ctx->pc = 0x13F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1E0u;
        // 0x13f1e4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1E8u;
        goto label_13f1e8;
    }
    ctx->pc = 0x13F1E0u;
    SET_GPR_U32(ctx, 31, 0x13F1E8u);
    ctx->pc = 0x13F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1E0u;
    // 0x13f1e4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13F1E0u, 0x13F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1E8u;
label_13f1e8:
    // 0x13f1e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13f1ec:
    // 0x13f1ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f1f0:
    // 0x13f1f0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13f1f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13f1f4:
    // 0x13f1f4: 0xc136b18  jal         func_4DAC60
label_13f1f8:
    if (ctx->pc == 0x13F1F8u) {
        ctx->pc = 0x13F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1F4u;
        // 0x13f1f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1FCu;
        goto label_13f1fc;
    }
    ctx->pc = 0x13F1F4u;
    SET_GPR_U32(ctx, 31, 0x13F1FCu);
    ctx->pc = 0x13F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1F4u;
    // 0x13f1f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13F1F4u, 0x13F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1FCu;
label_13f1fc:
    // 0x13f1fc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13f1fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13f200:
    // 0x13f200: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f204:
    // 0x13f204: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13f204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13f208:
    // 0x13f208: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13f208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13f20c:
    // 0x13f20c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f210:
    // 0x13f210: 0xc136b24  jal         func_4DAC90
label_13f214:
    if (ctx->pc == 0x13F214u) {
        ctx->pc = 0x13F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F210u;
        // 0x13f214: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F218u;
        goto label_13f218;
    }
    ctx->pc = 0x13F210u;
    SET_GPR_U32(ctx, 31, 0x13F218u);
    ctx->pc = 0x13F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F210u;
    // 0x13f214: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F210u, 0x13F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F218u;
label_13f218:
    // 0x13f218: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x13f218u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13f21c:
    // 0x13f21c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f220:
    // 0x13f220: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13f220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13f224:
    // 0x13f224: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13f224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13f228:
    // 0x13f228: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_13f22c:
    // 0x13f22c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13f230:
    // 0x13f230: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f234:
    // 0x13f234: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13f238:
    // 0x13f238: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13f23c:
    // 0x13f23c: 0xc136afa  jal         func_4DABE8
label_13f240:
    if (ctx->pc == 0x13F240u) {
        ctx->pc = 0x13F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F23Cu;
        // 0x13f240: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F244u;
        goto label_13f244;
    }
    ctx->pc = 0x13F23Cu;
    SET_GPR_U32(ctx, 31, 0x13F244u);
    ctx->pc = 0x13F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F23Cu;
    // 0x13f240: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F23Cu, 0x13F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F244u;
label_13f244:
    // 0x13f244: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13f244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f248:
    // 0x13f248: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f24c:
    // 0x13f24c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13f24cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f250:
    // 0x13f250: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f254:
    // 0x13f254: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f254u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13f258:
    // 0x13f258: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f258u;
    // VWAITQ (Q already resolved in this runtime)
label_13f25c:
    // 0x13f25c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13f25cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f260:
    // 0x13f260: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x13f260u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f264:
    // 0x13f264: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x13f264u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13f268:
    // 0x13f268: 0x0  nop
    ctx->pc = 0x13f268u;
    // NOP
label_13f26c:
    // 0x13f26c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x13f26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f270:
    // 0x13f270: 0x0  nop
    ctx->pc = 0x13f270u;
    // NOP
label_13f274:
    // 0x13f274: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_13f278:
    if (ctx->pc == 0x13F278u) {
        ctx->pc = 0x13F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F274u;
        // 0x13f278: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F27Cu;
        goto label_13f27c;
    }
    ctx->pc = 0x13F274u;
    {
        const bool branch_taken_0x13f274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F274u;
        // 0x13f278: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f274) {
            ctx->pc = 0x13F2CCu;
            goto label_13f2cc;
        }
    }
    ctx->pc = 0x13F27Cu;
label_13f27c:
    // 0x13f27c: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13f27cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13f280:
    // 0x13f280: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13f280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f284:
    // 0x13f284: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13f284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13f288:
    // 0x13f288: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13f28c:
    // 0x13f28c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13f290:
    // 0x13f290: 0xc136afa  jal         func_4DABE8
label_13f294:
    if (ctx->pc == 0x13F294u) {
        ctx->pc = 0x13F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F290u;
        // 0x13f294: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F298u;
        goto label_13f298;
    }
    ctx->pc = 0x13F290u;
    SET_GPR_U32(ctx, 31, 0x13F298u);
    ctx->pc = 0x13F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F290u;
    // 0x13f294: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F290u, 0x13F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F298u;
label_13f298:
    // 0x13f298: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13f298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f29c:
    // 0x13f29c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f29cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f2a0:
    // 0x13f2a0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13f2a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f2a4:
    // 0x13f2a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f2a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f2a8:
    // 0x13f2a8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f2a8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13f2ac:
    // 0x13f2ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f2acu;
    // VWAITQ (Q already resolved in this runtime)
label_13f2b0:
    // 0x13f2b0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13f2b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f2b4:
    // 0x13f2b4: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x13f2b4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f2b8:
    // 0x13f2b8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x13f2b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f2bc:
    // 0x13f2bc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13f2c0:
    // 0x13f2c0: 0x0  nop
    ctx->pc = 0x13f2c0u;
    // NOP
label_13f2c4:
    // 0x13f2c4: 0x0  nop
    ctx->pc = 0x13f2c4u;
    // NOP
label_13f2c8:
    // 0x13f2c8: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x13f2c8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_13f2cc:
    // 0x13f2cc: 0x86260350  lh          $a2, 0x350($s1)
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13f2d0:
    // 0x13f2d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f2d4:
    // 0x13f2d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13f2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f2d8:
    // 0x13f2d8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13f2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13f2dc:
    // 0x13f2dc: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13f2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13f2e0:
    // 0x13f2e0: 0xc136afa  jal         func_4DABE8
label_13f2e4:
    if (ctx->pc == 0x13F2E4u) {
        ctx->pc = 0x13F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2E0u;
        // 0x13f2e4: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F2E8u;
        goto label_13f2e8;
    }
    ctx->pc = 0x13F2E0u;
    SET_GPR_U32(ctx, 31, 0x13F2E8u);
    ctx->pc = 0x13F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2E0u;
    // 0x13f2e4: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F2E0u, 0x13F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2E8u;
label_13f2e8:
    // 0x13f2e8: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x13f2e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f2ec:
    // 0x13f2ec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13f2ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f2f0:
    // 0x13f2f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f2f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f2f4:
    // 0x13f2f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x13f2f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13f2f8:
    // 0x13f2f8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13f2f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f2fc:
    // 0x13f2fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f300:
    // 0x13f300: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x13f300u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f304:
    // 0x13f304: 0x86240352  lh          $a0, 0x352($s1)
    ctx->pc = 0x13f304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13f308:
    // 0x13f308: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x13f308u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13f30c:
    // 0x13f30c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_13f310:
    if (ctx->pc == 0x13F310u) {
        ctx->pc = 0x13F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F30Cu;
        // 0x13f310: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F314u;
        goto label_13f314;
    }
    ctx->pc = 0x13F30Cu;
    {
        const bool branch_taken_0x13f30c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F30Cu;
        // 0x13f310: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f30c) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F314u;
label_13f314:
    // 0x13f314: 0xc620035c  lwc1        $f0, 0x35C($s1)
    ctx->pc = 0x13f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f318:
    // 0x13f318: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13f318u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_13f31c:
    // 0x13f31c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x13f31cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f320:
    // 0x13f320: 0x0  nop
    ctx->pc = 0x13f320u;
    // NOP
label_13f324:
    // 0x13f324: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_13f328:
    if (ctx->pc == 0x13F328u) {
        ctx->pc = 0x13F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F324u;
        // 0x13f328: 0x86260350  lh          $a2, 0x350($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F32Cu;
        goto label_13f32c;
    }
    ctx->pc = 0x13F324u;
    {
        const bool branch_taken_0x13f324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f324) {
            ctx->pc = 0x13F328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F324u;
            // 0x13f328: 0x86260350  lh          $a2, 0x350($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F33Cu;
            goto label_13f33c;
        }
    }
    ctx->pc = 0x13F32Cu;
label_13f32c:
    // 0x13f32c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13f32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13f330:
    // 0x13f330: 0x1000002f  b           . + 4 + (0x2F << 2)
label_13f334:
    if (ctx->pc == 0x13F334u) {
        ctx->pc = 0x13F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F330u;
        // 0x13f334: 0x86250352  lh          $a1, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F338u;
        goto label_13f338;
    }
    ctx->pc = 0x13F330u;
    {
        const bool branch_taken_0x13f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F330u;
        // 0x13f334: 0x86250352  lh          $a1, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f330) {
            ctx->pc = 0x13F3F0u;
            goto label_13f3f0;
        }
    }
    ctx->pc = 0x13F338u;
label_13f338:
    // 0x13f338: 0x86260350  lh          $a2, 0x350($s1)
    ctx->pc = 0x13f338u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13f33c:
    // 0x13f33c: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x13f33cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13f340:
    // 0x13f340: 0x24c3fffe  addiu       $v1, $a2, -0x2
    ctx->pc = 0x13f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_13f344:
    // 0x13f344: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13f344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13f348:
    // 0x13f348: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_13f34c:
    if (ctx->pc == 0x13F34Cu) {
        ctx->pc = 0x13F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F348u;
        // 0x13f34c: 0x86250352  lh          $a1, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F350u;
        goto label_13f350;
    }
    ctx->pc = 0x13F348u;
    {
        const bool branch_taken_0x13f348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f348) {
            ctx->pc = 0x13F34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F348u;
            // 0x13f34c: 0x86250352  lh          $a1, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F3F0u;
            goto label_13f3f0;
        }
    }
    ctx->pc = 0x13F350u;
label_13f350:
    // 0x13f350: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13f350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13f354:
    // 0x13f354: 0x0  nop
    ctx->pc = 0x13f354u;
    // NOP
label_13f358:
    // 0x13f358: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x13f358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f35c:
    // 0x13f35c: 0x0  nop
    ctx->pc = 0x13f35cu;
    // NOP
label_13f360:
    // 0x13f360: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_13f364:
    if (ctx->pc == 0x13F364u) {
        ctx->pc = 0x13F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F360u;
        // 0x13f364: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F368u;
        goto label_13f368;
    }
    ctx->pc = 0x13F360u;
    {
        const bool branch_taken_0x13f360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F360u;
        // 0x13f364: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f360) {
            ctx->pc = 0x13F3BCu;
            goto label_13f3bc;
        }
    }
    ctx->pc = 0x13F368u;
label_13f368:
    // 0x13f368: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13f36c:
    // 0x13f36c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f370:
    // 0x13f370: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13f370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13f374:
    // 0x13f374: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13f378:
    // 0x13f378: 0xc136afa  jal         func_4DABE8
label_13f37c:
    if (ctx->pc == 0x13F37Cu) {
        ctx->pc = 0x13F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F378u;
        // 0x13f37c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F380u;
        goto label_13f380;
    }
    ctx->pc = 0x13F378u;
    SET_GPR_U32(ctx, 31, 0x13F380u);
    ctx->pc = 0x13F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F378u;
    // 0x13f37c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F378u, 0x13F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F380u;
label_13f380:
    // 0x13f380: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13f380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f384:
    // 0x13f384: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f388:
    // 0x13f388: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13f388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f38c:
    // 0x13f38c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f38cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f390:
    // 0x13f390: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f390u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13f394:
    // 0x13f394: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f394u;
    // VWAITQ (Q already resolved in this runtime)
label_13f398:
    // 0x13f398: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13f398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f39c:
    // 0x13f39c: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x13f39cu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f3a0:
    // 0x13f3a0: 0xc621035c  lwc1        $f1, 0x35C($s1)
    ctx->pc = 0x13f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f3a4:
    // 0x13f3a4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x13f3a4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f3a8:
    // 0x13f3a8: 0x0  nop
    ctx->pc = 0x13f3a8u;
    // NOP
label_13f3ac:
    // 0x13f3ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13f3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f3b0:
    // 0x13f3b0: 0x0  nop
    ctx->pc = 0x13f3b0u;
    // NOP
label_13f3b4:
    // 0x13f3b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_13f3b8:
    if (ctx->pc == 0x13F3B8u) {
        ctx->pc = 0x13F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3B4u;
        // 0x13f3b8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F3BCu;
        goto label_13f3bc;
    }
    ctx->pc = 0x13F3B4u;
    {
        const bool branch_taken_0x13f3b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3B4u;
        // 0x13f3b8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3b4) {
            ctx->pc = 0x13F3CCu;
            goto label_13f3cc;
        }
    }
    ctx->pc = 0x13F3BCu;
label_13f3bc:
    // 0x13f3bc: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x13f3bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f3c0:
    // 0x13f3c0: 0x0  nop
    ctx->pc = 0x13f3c0u;
    // NOP
label_13f3c4:
    // 0x13f3c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13f3c8:
    if (ctx->pc == 0x13F3C8u) {
        ctx->pc = 0x13F3CCu;
        goto label_13f3cc;
    }
    ctx->pc = 0x13F3C4u;
    {
        const bool branch_taken_0x13f3c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f3c4) {
            ctx->pc = 0x13F3D0u;
            goto label_13f3d0;
        }
    }
    ctx->pc = 0x13F3CCu;
label_13f3cc:
    // 0x13f3cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f3d0:
    // 0x13f3d0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_13f3d4:
    if (ctx->pc == 0x13F3D4u) {
        ctx->pc = 0x13F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3D0u;
        // 0x13f3d4: 0x86250352  lh          $a1, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F3D8u;
        goto label_13f3d8;
    }
    ctx->pc = 0x13F3D0u;
    {
        const bool branch_taken_0x13f3d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f3d0) {
            ctx->pc = 0x13F3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F3D0u;
            // 0x13f3d4: 0x86250352  lh          $a1, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F3F0u;
            goto label_13f3f0;
        }
    }
    ctx->pc = 0x13F3D8u;
label_13f3d8:
    // 0x13f3d8: 0x96220350  lhu         $v0, 0x350($s1)
    ctx->pc = 0x13f3d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13f3dc:
    // 0x13f3dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13f3e0:
    // 0x13f3e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x13f3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13f3e4:
    // 0x13f3e4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x13f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_13f3e8:
    // 0x13f3e8: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x13f3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
label_13f3ec:
    // 0x13f3ec: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13f3f0:
    // 0x13f3f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x13f3f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_13f3f4:
    // 0x13f3f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13f3f8:
    // 0x13f3f8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13f3fc:
    // 0x13f3fc: 0x24a601f0  addiu       $a2, $a1, 0x1F0
    ctx->pc = 0x13f3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_13f400:
    // 0x13f400: 0x24a501e0  addiu       $a1, $a1, 0x1E0
    ctx->pc = 0x13f400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
label_13f404:
    // 0x13f404: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x13f404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_13f408:
    // 0x13f408: 0xc0cdaee  jal         func_336BB8
label_13f40c:
    if (ctx->pc == 0x13F40Cu) {
        ctx->pc = 0x13F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F408u;
        // 0x13f40c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F410u;
        goto label_13f410;
    }
    ctx->pc = 0x13F408u;
    SET_GPR_U32(ctx, 31, 0x13F410u);
    ctx->pc = 0x13F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F408u;
    // 0x13f40c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x13F408u, 0x13F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F410u;
label_13f410:
    // 0x13f410: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f414:
    // 0x13f414: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13f414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13f418:
    // 0x13f418: 0xc136afa  jal         func_4DABE8
label_13f41c:
    if (ctx->pc == 0x13F41Cu) {
        ctx->pc = 0x13F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F418u;
        // 0x13f41c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F420u;
        goto label_13f420;
    }
    ctx->pc = 0x13F418u;
    SET_GPR_U32(ctx, 31, 0x13F420u);
    ctx->pc = 0x13F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F418u;
    // 0x13f41c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F418u, 0x13F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F420u;
label_13f420:
    // 0x13f420: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13f420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f424:
    // 0x13f424: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x13f424u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f428:
    // 0x13f428: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f42c:
    // 0x13f42c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13f42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13f430:
    // 0x13f430: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13f430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13f434:
    // 0x13f434: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13f434u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13f438:
    // 0x13f438: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13f438u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13f43c:
    // 0x13f43c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f43cu;
    // VWAITQ (Q already resolved in this runtime)
label_13f440:
    // 0x13f440: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13f440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_13f444:
    // 0x13f444: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13f444u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_13f448:
    // 0x13f448: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13f44c:
    // 0x13f44c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x13f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_13f450:
    // 0x13f450: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x13f450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_13f454:
    // 0x13f454: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13f454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_13f458:
    // 0x13f458: 0x8c62b2ac  lw          $v0, -0x4D54($v1)
    ctx->pc = 0x13f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947500)));
label_13f45c:
    // 0x13f45c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_13f460:
    if (ctx->pc == 0x13F460u) {
        ctx->pc = 0x13F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F45Cu;
        // 0x13f460: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F464u;
        goto label_13f464;
    }
    ctx->pc = 0x13F45Cu;
    {
        const bool branch_taken_0x13f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F45Cu;
        // 0x13f460: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f45c) {
            ctx->pc = 0x13F4A0u;
            goto label_13f4a0;
        }
    }
    ctx->pc = 0x13F464u;
label_13f464:
    // 0x13f464: 0xc62c035c  lwc1        $f12, 0x35C($s1)
    ctx->pc = 0x13f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13f468:
    // 0x13f468: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13f468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13f46c:
    // 0x13f46c: 0xc136b24  jal         func_4DAC90
label_13f470:
    if (ctx->pc == 0x13F470u) {
        ctx->pc = 0x13F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F46Cu;
        // 0x13f470: 0x46176300  add.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F474u;
        goto label_13f474;
    }
    ctx->pc = 0x13F46Cu;
    SET_GPR_U32(ctx, 31, 0x13F474u);
    ctx->pc = 0x13F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F46Cu;
    // 0x13f470: 0x46176300  add.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F46Cu, 0x13F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F474u;
label_13f474:
    // 0x13f474: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x13f474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13f478:
    // 0x13f478: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13f478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13f47c:
    // 0x13f47c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f480:
    // 0x13f480: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x13f480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f484:
    // 0x13f484: 0xc136b18  jal         func_4DAC60
label_13f488:
    if (ctx->pc == 0x13F488u) {
        ctx->pc = 0x13F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F484u;
        // 0x13f488: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F48Cu;
        goto label_13f48c;
    }
    ctx->pc = 0x13F484u;
    SET_GPR_U32(ctx, 31, 0x13F48Cu);
    ctx->pc = 0x13F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F484u;
    // 0x13f488: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13F484u, 0x13F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F48Cu;
label_13f48c:
    // 0x13f48c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x13f48cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13f490:
    // 0x13f490: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x13f490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f494:
    // 0x13f494: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x13f494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_13f498:
    // 0x13f498: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x13f498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_13f49c:
    // 0x13f49c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x13f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_13f4a0:
    // 0x13f4a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x13f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_13f4a4:
    // 0x13f4a4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x13f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13f4a8:
    // 0x13f4a8: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x13f4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_13f4ac:
    // 0x13f4ac: 0xc136afa  jal         func_4DABE8
label_13f4b0:
    if (ctx->pc == 0x13F4B0u) {
        ctx->pc = 0x13F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4ACu;
        // 0x13f4b0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F4B4u;
        goto label_13f4b4;
    }
    ctx->pc = 0x13F4ACu;
    SET_GPR_U32(ctx, 31, 0x13F4B4u);
    ctx->pc = 0x13F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4ACu;
    // 0x13f4b0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13F4ACu, 0x13F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4B4u;
label_13f4b4:
    // 0x13f4b4: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x13f4b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_13f4b8:
    // 0x13f4b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f4b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f4bc:
    // 0x13f4bc: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13f4bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f4c0:
    // 0x13f4c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f4c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f4c4:
    // 0x13f4c4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f4c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13f4c8:
    // 0x13f4c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f4c8u;
    // VWAITQ (Q already resolved in this runtime)
label_13f4cc:
    // 0x13f4cc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13f4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f4d0:
    // 0x13f4d0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13f4d0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f4d4:
    // 0x13f4d4: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x13f4d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13f4d8:
    // 0x13f4d8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x13f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_13f4dc:
    // 0x13f4dc: 0x4618a832  c.eq.s      $f21, $f24
    ctx->pc = 0x13f4dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f4e0:
    // 0x13f4e0: 0x0  nop
    ctx->pc = 0x13f4e0u;
    // NOP
label_13f4e4:
    // 0x13f4e4: 0x45010095  bc1t        . + 4 + (0x95 << 2)
label_13f4e8:
    if (ctx->pc == 0x13F4E8u) {
        ctx->pc = 0x13F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4E4u;
        // 0x13f4e8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F4ECu;
        goto label_13f4ec;
    }
    ctx->pc = 0x13F4E4u;
    {
        const bool branch_taken_0x13f4e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4E4u;
        // 0x13f4e8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4e4) {
            ctx->pc = 0x13F73Cu;
            goto label_13f73c;
        }
    }
    ctx->pc = 0x13F4ECu;
label_13f4ec:
    // 0x13f4ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f4f0:
    // 0x13f4f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13f4f4:
    // 0x13f4f4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13f4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13f4f8:
    // 0x13f4f8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_13f4fc:
    // 0x13f4fc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13f500:
    // 0x13f500: 0x60f809  jalr        $v1
label_13f504:
    if (ctx->pc == 0x13F504u) {
        ctx->pc = 0x13F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F500u;
        // 0x13f504: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F508u;
        goto label_13f508;
    }
    ctx->pc = 0x13F500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13F508u);
        ctx->pc = 0x13F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F500u;
        // 0x13f504: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F500u, 0x13F508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F508u;
label_13f508:
    // 0x13f508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f50c:
    // 0x13f50c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13f50cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13f510:
    // 0x13f510: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x13f510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_13f514:
    // 0x13f514: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x13f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13f518:
    // 0x13f518: 0x60f809  jalr        $v1
label_13f51c:
    if (ctx->pc == 0x13F51Cu) {
        ctx->pc = 0x13F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F518u;
        // 0x13f51c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F520u;
        goto label_13f520;
    }
    ctx->pc = 0x13F518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13F520u);
        ctx->pc = 0x13F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F518u;
        // 0x13f51c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F518u, 0x13F520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F520u;
label_13f520:
    // 0x13f520: 0x0  nop
    ctx->pc = 0x13f520u;
    // NOP
label_13f524:
    // 0x13f524: 0x0  nop
    ctx->pc = 0x13f524u;
    // NOP
label_13f528:
    // 0x13f528: 0x4615b303  div.s       $f12, $f22, $f21
    ctx->pc = 0x13f528u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
label_13f52c:
    // 0x13f52c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f530:
    // 0x13f530: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13f530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13f534:
    // 0x13f534: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13f538:
    // 0x13f538: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13f538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13f53c:
    // 0x13f53c: 0x46001028  max.s       $f0, $f2, $f0
    ctx->pc = 0x13f53cu;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
label_13f540:
    // 0x13f540: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13f540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_13f544:
    // 0x13f544: 0x34219aea  ori         $at, $at, 0x9AEA
    ctx->pc = 0x13f544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39658);
label_13f548:
    // 0x13f548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13f54c:
    // 0x13f54c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_13f550:
    // 0x13f550: 0x4600a5c0  add.s       $f23, $f20, $f0
    ctx->pc = 0x13f550u;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_13f554:
    // 0x13f554: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x13f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_13f558:
    // 0x13f558: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_13f55c:
    // 0x13f55c: 0x46011668  max.s       $f25, $f2, $f1
    ctx->pc = 0x13f55cu;
    ctx->f[25] = std::max(ctx->f[2], ctx->f[1]);
label_13f560:
    // 0x13f560: 0xc136b24  jal         func_4DAC90
label_13f564:
    if (ctx->pc == 0x13F564u) {
        ctx->pc = 0x13F568u;
        goto label_13f568;
    }
    ctx->pc = 0x13F560u;
    SET_GPR_U32(ctx, 31, 0x13F568u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F560u, 0x13F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F568u;
label_13f568:
    // 0x13f568: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f56c:
    // 0x13f56c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f570:
    // 0x13f570: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13f570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f574:
    // 0x13f574: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13f574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f578:
    // 0x13f578: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f57c:
    // 0x13f57c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13f57cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f580:
    // 0x13f580: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f580u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13f584:
    // 0x13f584: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f584u;
    // VWAITQ (Q already resolved in this runtime)
label_13f588:
    // 0x13f588: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13f588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f58c:
    // 0x13f58c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x13f58cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f590:
    // 0x13f590: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x13f590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_13f594:
    // 0x13f594: 0x4485a800  mtc1        $a1, $f21
    ctx->pc = 0x13f594u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13f598:
    // 0x13f598: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13f598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f59c:
    // 0x13f59c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13f59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f5a0:
    // 0x13f5a0: 0x0  nop
    ctx->pc = 0x13f5a0u;
    // NOP
label_13f5a4:
    // 0x13f5a4: 0x4615b303  div.s       $f12, $f22, $f21
    ctx->pc = 0x13f5a4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
label_13f5a8:
    // 0x13f5a8: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x13f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_13f5ac:
    // 0x13f5ac: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x13f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_13f5b0:
    // 0x13f5b0: 0xc136b24  jal         func_4DAC90
label_13f5b4:
    if (ctx->pc == 0x13F5B4u) {
        ctx->pc = 0x13F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5B0u;
        // 0x13f5b4: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F5B8u;
        goto label_13f5b8;
    }
    ctx->pc = 0x13F5B0u;
    SET_GPR_U32(ctx, 31, 0x13F5B8u);
    ctx->pc = 0x13F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5B0u;
    // 0x13f5b4: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F5B0u, 0x13F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5B8u;
label_13f5b8:
    // 0x13f5b8: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x13f5b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_13f5bc:
    // 0x13f5bc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13f5bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13f5c0:
    // 0x13f5c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13f5c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13f5c4:
    // 0x13f5c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13f5c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13f5c8:
    // 0x13f5c8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x13f5c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f5cc:
    // 0x13f5cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13f5ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f5d0:
    // 0x13f5d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13f5d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13f5d4:
    // 0x13f5d4: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x13f5d4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_13f5d8:
    // 0x13f5d8: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x13f5d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13f5dc:
    // 0x13f5dc: 0x0  nop
    ctx->pc = 0x13f5dcu;
    // NOP
label_13f5e0:
    // 0x13f5e0: 0x4618a032  c.eq.s      $f20, $f24
    ctx->pc = 0x13f5e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f5e4:
    // 0x13f5e4: 0x0  nop
    ctx->pc = 0x13f5e4u;
    // NOP
label_13f5e8:
    // 0x13f5e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_13f5ec:
    if (ctx->pc == 0x13F5ECu) {
        ctx->pc = 0x13F5F0u;
        goto label_13f5f0;
    }
    ctx->pc = 0x13F5E8u;
    {
        const bool branch_taken_0x13f5e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f5e8) {
            ctx->pc = 0x13F5FCu;
            goto label_13f5fc;
        }
    }
    ctx->pc = 0x13F5F0u;
label_13f5f0:
    // 0x13f5f0: 0x0  nop
    ctx->pc = 0x13f5f0u;
    // NOP
label_13f5f4:
    // 0x13f5f4: 0x0  nop
    ctx->pc = 0x13f5f4u;
    // NOP
label_13f5f8:
    // 0x13f5f8: 0x4614b503  div.s       $f20, $f22, $f20
    ctx->pc = 0x13f5f8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
label_13f5fc:
    // 0x13f5fc: 0x4619b828  max.s       $f0, $f23, $f25
    ctx->pc = 0x13f5fcu;
    ctx->f[0] = std::max(ctx->f[23], ctx->f[25]);
label_13f600:
    // 0x13f600: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x13f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_13f604:
    // 0x13f604: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13f604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_13f608:
    // 0x13f608: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13f608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_13f60c:
    // 0x13f60c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13f60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f610:
    // 0x13f610: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x13f610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13f614:
    // 0x13f614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13f614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f618:
    // 0x13f618: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_13f61c:
    // 0x13f61c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x13f61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_13f620:
    // 0x13f620: 0xc0d4336  jal         func_350CD8
label_13f624:
    if (ctx->pc == 0x13F624u) {
        ctx->pc = 0x13F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F620u;
        // 0x13f624: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F628u;
        goto label_13f628;
    }
    ctx->pc = 0x13F620u;
    SET_GPR_U32(ctx, 31, 0x13F628u);
    ctx->pc = 0x13F624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F620u;
    // 0x13f624: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x13F620u, 0x13F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F628u;
label_13f628:
    // 0x13f628: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_13f62c:
    // 0x13f62c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_13f630:
    if (ctx->pc == 0x13F630u) {
        ctx->pc = 0x13F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F62Cu;
        // 0x13f630: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F634u;
        goto label_13f634;
    }
    ctx->pc = 0x13F62Cu;
    {
        const bool branch_taken_0x13f62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F62Cu;
        // 0x13f630: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f62c) {
            ctx->pc = 0x13F6F4u;
            goto label_13f6f4;
        }
    }
    ctx->pc = 0x13F634u;
label_13f634:
    // 0x13f634: 0x4614b842  mul.s       $f1, $f23, $f20
    ctx->pc = 0x13f634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
label_13f638:
    // 0x13f638: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13f638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f63c:
    // 0x13f63c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f640:
    // 0x13f640: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13f640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_13f644:
    // 0x13f644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13f644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13f648:
    // 0x13f648: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13f648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f64c:
    // 0x13f64c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13f64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13f650:
    // 0x13f650: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x13f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_13f654:
    // 0x13f654: 0x46180028  max.s       $f0, $f0, $f24
    ctx->pc = 0x13f654u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[24]);
label_13f658:
    // 0x13f658: 0x4600ad29  min.s       $f20, $f21, $f0
    ctx->pc = 0x13f658u;
    ctx->f[20] = std::min(ctx->f[21], ctx->f[0]);
label_13f65c:
    // 0x13f65c: 0xc136b24  jal         func_4DAC90
label_13f660:
    if (ctx->pc == 0x13F660u) {
        ctx->pc = 0x13F664u;
        goto label_13f664;
    }
    ctx->pc = 0x13F65Cu;
    SET_GPR_U32(ctx, 31, 0x13F664u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F65Cu, 0x13F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F664u;
label_13f664:
    // 0x13f664: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x13f664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_13f668:
    // 0x13f668: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13f668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f66c:
    // 0x13f66c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x13f66cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_13f670:
    // 0x13f670: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x13f670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13f674:
    // 0x13f674: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13f674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_13f678:
    // 0x13f678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13f678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f67c:
    // 0x13f67c: 0xc0d4336  jal         func_350CD8
label_13f680:
    if (ctx->pc == 0x13F680u) {
        ctx->pc = 0x13F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F67Cu;
        // 0x13f680: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F684u;
        goto label_13f684;
    }
    ctx->pc = 0x13F67Cu;
    SET_GPR_U32(ctx, 31, 0x13F684u);
    ctx->pc = 0x13F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F67Cu;
    // 0x13f680: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x13F67Cu, 0x13F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F684u;
label_13f684:
    // 0x13f684: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13f684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f688:
    // 0x13f688: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13f688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_13f68c:
    // 0x13f68c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13f68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13f690:
    // 0x13f690: 0xc136b24  jal         func_4DAC90
label_13f694:
    if (ctx->pc == 0x13F694u) {
        ctx->pc = 0x13F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F690u;
        // 0x13f694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F698u;
        goto label_13f698;
    }
    ctx->pc = 0x13F690u;
    SET_GPR_U32(ctx, 31, 0x13F698u);
    ctx->pc = 0x13F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F690u;
    // 0x13f694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F690u, 0x13F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F698u;
label_13f698:
    // 0x13f698: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_13f69c:
    // 0x13f69c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_13f6a0:
    if (ctx->pc == 0x13F6A0u) {
        ctx->pc = 0x13F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F69Cu;
        // 0x13f6a0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F6A4u;
        goto label_13f6a4;
    }
    ctx->pc = 0x13F69Cu;
    {
        const bool branch_taken_0x13f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f69c) {
            ctx->pc = 0x13F6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F69Cu;
            // 0x13f6a0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6C4u;
            goto label_13f6c4;
        }
    }
    ctx->pc = 0x13F6A4u;
label_13f6a4:
    // 0x13f6a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f6a8:
    // 0x13f6a8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x13f6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_13f6ac:
    // 0x13f6ac: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x13f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13f6b0:
    // 0x13f6b0: 0x60f809  jalr        $v1
label_13f6b4:
    if (ctx->pc == 0x13F6B4u) {
        ctx->pc = 0x13F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6B0u;
        // 0x13f6b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F6B8u;
        goto label_13f6b8;
    }
    ctx->pc = 0x13F6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13F6B8u);
        ctx->pc = 0x13F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6B0u;
        // 0x13f6b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F6B0u, 0x13F6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x13f6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f6bc:
    // 0x13f6bc: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x13f6bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13f6c0:
    // 0x13f6c0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_13f6c4:
    // 0x13f6c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13f6c8:
    // 0x13f6c8: 0xc136b24  jal         func_4DAC90
label_13f6cc:
    if (ctx->pc == 0x13F6CCu) {
        ctx->pc = 0x13F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6C8u;
        // 0x13f6cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F6D0u;
        goto label_13f6d0;
    }
    ctx->pc = 0x13F6C8u;
    SET_GPR_U32(ctx, 31, 0x13F6D0u);
    ctx->pc = 0x13F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6C8u;
    // 0x13f6cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13F6C8u, 0x13F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6D0u;
label_13f6d0:
    // 0x13f6d0: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x13f6d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_13f6d4:
    // 0x13f6d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13f6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13f6d8:
    // 0x13f6d8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_13f6dc:
    // 0x13f6dc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x13f6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_13f6e0:
    // 0x13f6e0: 0xc136b18  jal         func_4DAC60
label_13f6e4:
    if (ctx->pc == 0x13F6E4u) {
        ctx->pc = 0x13F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6E0u;
        // 0x13f6e4: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F6E8u;
        goto label_13f6e8;
    }
    ctx->pc = 0x13F6E0u;
    SET_GPR_U32(ctx, 31, 0x13F6E8u);
    ctx->pc = 0x13F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6E0u;
    // 0x13f6e4: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13F6E0u, 0x13F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6E8u;
label_13f6e8:
    // 0x13f6e8: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x13f6e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_13f6ec:
    // 0x13f6ec: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x13f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_13f6f0:
    // 0x13f6f0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x13f6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_13f6f4:
    // 0x13f6f4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_13f6f8:
    // 0x13f6f8: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_13f6fc:
    // 0x13f6fc: 0x244892a8  addiu       $t0, $v0, -0x6D58
    ctx->pc = 0x13f6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939304));
label_13f700:
    // 0x13f700: 0x69090007  ldl         $t1, 0x7($t0)
    ctx->pc = 0x13f700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_13f704:
    // 0x13f704: 0x6d090000  ldr         $t1, 0x0($t0)
    ctx->pc = 0x13f704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_13f708:
    // 0x13f708: 0x690a000f  ldl         $t2, 0xF($t0)
    ctx->pc = 0x13f708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_13f70c:
    // 0x13f70c: 0x6d0a0008  ldr         $t2, 0x8($t0)
    ctx->pc = 0x13f70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_13f710:
    // 0x13f710: 0xb3a90107  sdl         $t1, 0x107($sp)
    ctx->pc = 0x13f710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13f714:
    // 0x13f714: 0xb7a90100  sdr         $t1, 0x100($sp)
    ctx->pc = 0x13f714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13f718:
    // 0x13f718: 0xb3aa010f  sdl         $t2, 0x10F($sp)
    ctx->pc = 0x13f718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13f71c:
    // 0x13f71c: 0xb7aa0108  sdr         $t2, 0x108($sp)
    ctx->pc = 0x13f71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13f720:
    // 0x13f720: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13f720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f724:
    // 0x13f724: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x13f724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_13f728:
    // 0x13f728: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x13f728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_13f72c:
    // 0x13f72c: 0xc0d467e  jal         func_3519F8
label_13f730:
    if (ctx->pc == 0x13F730u) {
        ctx->pc = 0x13F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F72Cu;
        // 0x13f730: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F734u;
        goto label_13f734;
    }
    ctx->pc = 0x13F72Cu;
    SET_GPR_U32(ctx, 31, 0x13F734u);
    ctx->pc = 0x13F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F72Cu;
    // 0x13f730: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3519F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3519F8u, 0x13F72Cu, 0x13F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F734u;
label_13f734:
    // 0x13f734: 0x7a230180  lq          $v1, 0x180($s1)
    ctx->pc = 0x13f734u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_13f738:
    // 0x13f738: 0x7e2302f0  sq          $v1, 0x2F0($s1)
    ctx->pc = 0x13f738u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 752), GPR_VEC(ctx, 3));
label_13f73c:
    // 0x13f73c: 0xc6210358  lwc1        $f1, 0x358($s1)
    ctx->pc = 0x13f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f740:
    // 0x13f740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f744:
    // 0x13f744: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13f744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f748:
    // 0x13f748: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13f748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13f74c:
    // 0x13f74c: 0x0  nop
    ctx->pc = 0x13f74cu;
    // NOP
label_13f750:
    // 0x13f750: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_13f754:
    if (ctx->pc == 0x13F754u) {
        ctx->pc = 0x13F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F750u;
        // 0x13f754: 0x7e2202e0  sq          $v0, 0x2E0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 736), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F758u;
        goto label_13f758;
    }
    ctx->pc = 0x13F750u;
    {
        const bool branch_taken_0x13f750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F750u;
        // 0x13f754: 0x7e2202e0  sq          $v0, 0x2E0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 736), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f750) {
            ctx->pc = 0x13F77Cu;
            goto label_13f77c;
        }
    }
    ctx->pc = 0x13F758u;
label_13f758:
    // 0x13f758: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x13f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_13f75c:
    // 0x13f75c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x13f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_13f760:
    // 0x13f760: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_13f764:
    // 0x13f764: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x13f764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_13f768:
    // 0x13f768: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13f768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13f76c:
    // 0x13f76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f770:
    // 0x13f770: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f774:
    // 0x13f774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13f774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13f778:
    // 0x13f778: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x13f778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_13f77c:
    // 0x13f77c: 0x8e260340  lw          $a2, 0x340($s1)
    ctx->pc = 0x13f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_13f780:
    // 0x13f780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13f780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f784:
    // 0x13f784: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13f784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_13f788:
    // 0x13f788: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13f788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13f78c:
    // 0x13f78c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13f78cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f790:
    // 0x13f790: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13f790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f794:
    // 0x13f794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f798:
    // 0x13f798: 0xc0489ca  jal         func_122728
label_13f79c:
    if (ctx->pc == 0x13F79Cu) {
        ctx->pc = 0x13F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F798u;
        // 0x13f79c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F7A0u;
        goto label_13f7a0;
    }
    ctx->pc = 0x13F798u;
    SET_GPR_U32(ctx, 31, 0x13F7A0u);
    ctx->pc = 0x13F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F798u;
    // 0x13f79c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x13F798u, 0x13F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7A0u;
label_13f7a0:
    // 0x13f7a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f7a4:
    // 0x13f7a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x13f7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13f7a8:
    // 0x13f7a8: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x13f7a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_13f7ac:
    // 0x13f7ac: 0x8c4601bc  lw          $a2, 0x1BC($v0)
    ctx->pc = 0x13f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_13f7b0:
    // 0x13f7b0: 0xc0f809  jalr        $a2
label_13f7b4:
    if (ctx->pc == 0x13F7B4u) {
        ctx->pc = 0x13F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7B0u;
        // 0x13f7b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F7B8u;
        goto label_13f7b8;
    }
    ctx->pc = 0x13F7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13F7B8u);
        ctx->pc = 0x13F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7B0u;
        // 0x13f7b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F7B0u, 0x13F7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F7B8u;
label_13f7b8:
    // 0x13f7b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f7bc:
    // 0x13f7bc: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13f7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13f7c0:
    // 0x13f7c0: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13f7c4:
    // 0x13f7c4: 0x40f809  jalr        $v0
label_13f7c8:
    if (ctx->pc == 0x13F7C8u) {
        ctx->pc = 0x13F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7C4u;
        // 0x13f7c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F7CCu;
        goto label_13f7cc;
    }
    ctx->pc = 0x13F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F7CCu);
        ctx->pc = 0x13F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7C4u;
        // 0x13f7c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F7C4u, 0x13F7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F7CCu;
label_13f7cc:
    // 0x13f7cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13f7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13f7d0:
    // 0x13f7d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f7d4:
    // 0x13f7d4: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x13f7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_13f7d8:
    // 0x13f7d8: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x13f7d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_13f7dc:
    // 0x13f7dc: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_13f7e0:
    // 0x13f7e0: 0x40f809  jalr        $v0
label_13f7e4:
    if (ctx->pc == 0x13F7E4u) {
        ctx->pc = 0x13F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7E0u;
        // 0x13f7e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F7E8u;
        goto label_13f7e8;
    }
    ctx->pc = 0x13F7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F7E8u);
        ctx->pc = 0x13F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7E0u;
        // 0x13f7e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F7E0u, 0x13F7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F7E8u;
label_13f7e8:
    // 0x13f7e8: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x13f7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_13f7ec:
    // 0x13f7ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f7f0:
    // 0x13f7f0: 0xc0cdc0a  jal         func_337028
label_13f7f4:
    if (ctx->pc == 0x13F7F4u) {
        ctx->pc = 0x13F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7F0u;
        // 0x13f7f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F7F8u;
        goto label_13f7f8;
    }
    ctx->pc = 0x13F7F0u;
    SET_GPR_U32(ctx, 31, 0x13F7F8u);
    ctx->pc = 0x13F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7F0u;
    // 0x13f7f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x13F7F0u, 0x13F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7F8u;
label_13f7f8:
    // 0x13f7f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13f7fc:
    if (ctx->pc == 0x13F7FCu) {
        ctx->pc = 0x13F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7F8u;
        // 0x13f7fc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F800u;
        goto label_13f800;
    }
    ctx->pc = 0x13F7F8u;
    {
        const bool branch_taken_0x13f7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7F8u;
        // 0x13f7fc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7f8) {
            ctx->pc = 0x13F810u;
            goto label_13f810;
        }
    }
    ctx->pc = 0x13F800u;
label_13f800:
    // 0x13f800: 0xc0cd972  jal         func_3365C8
label_13f804:
    if (ctx->pc == 0x13F804u) {
        ctx->pc = 0x13F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F800u;
        // 0x13f804: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F808u;
        goto label_13f808;
    }
    ctx->pc = 0x13F800u;
    SET_GPR_U32(ctx, 31, 0x13F808u);
    ctx->pc = 0x13F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F800u;
    // 0x13f804: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x13F800u, 0x13F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F808u;
label_13f808:
    // 0x13f808: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x13f808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_13f80c:
    // 0x13f80c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x13f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_13f810:
    // 0x13f810: 0x922203e8  lbu         $v0, 0x3E8($s1)
    ctx->pc = 0x13f810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1000)));
label_13f814:
    // 0x13f814: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13f814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f818:
    // 0x13f818: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_13f81c:
    if (ctx->pc == 0x13F81Cu) {
        ctx->pc = 0x13F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F818u;
        // 0x13f81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F820u;
        goto label_13f820;
    }
    ctx->pc = 0x13F818u;
    {
        const bool branch_taken_0x13f818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x13F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F818u;
        // 0x13f81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f818) {
            ctx->pc = 0x13F834u;
            goto label_13f834;
        }
    }
    ctx->pc = 0x13F820u;
label_13f820:
    // 0x13f820: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x13f820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_13f824:
    // 0x13f824: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x13f824u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_13f828:
    // 0x13f828: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x13f828u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_13f82c:
    // 0x13f82c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x13f82cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_13f830:
    // 0x13f830: 0x7d230010  sq          $v1, 0x10($t1)
    ctx->pc = 0x13f830u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 3));
label_13f834:
    // 0x13f834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f838:
    // 0x13f838: 0xc048314  jal         func_120C50
label_13f83c:
    if (ctx->pc == 0x13F83Cu) {
        ctx->pc = 0x13F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F838u;
        // 0x13f83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F840u;
        goto label_13f840;
    }
    ctx->pc = 0x13F838u;
    SET_GPR_U32(ctx, 31, 0x13F840u);
    ctx->pc = 0x13F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F838u;
    // 0x13f83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x13F838u, 0x13F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F840u;
label_13f840:
    // 0x13f840: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_13f844:
    // 0x13f844: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x13f844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_13f848:
    // 0x13f848: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_13f84c:
    if (ctx->pc == 0x13F84Cu) {
        ctx->pc = 0x13F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F848u;
        // 0x13f84c: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F850u;
        goto label_13f850;
    }
    ctx->pc = 0x13F848u;
    {
        const bool branch_taken_0x13f848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F848u;
        // 0x13f84c: 0x8fa50140  lw          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f848) {
            ctx->pc = 0x13F86Cu;
            goto label_13f86c;
        }
    }
    ctx->pc = 0x13F850u;
label_13f850:
    // 0x13f850: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x13f850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_13f854:
    // 0x13f854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f858:
    // 0x13f858: 0x8fa70134  lw          $a3, 0x134($sp)
    ctx->pc = 0x13f858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_13f85c:
    // 0x13f85c: 0x26250340  addiu       $a1, $s1, 0x340
    ctx->pc = 0x13f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_13f860:
    // 0x13f860: 0xc0501c2  jal         func_140708
label_13f864:
    if (ctx->pc == 0x13F864u) {
        ctx->pc = 0x13F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F860u;
        // 0x13f864: 0x8fa80138  lw          $t0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F868u;
        goto label_13f868;
    }
    ctx->pc = 0x13F860u;
    SET_GPR_U32(ctx, 31, 0x13F868u);
    ctx->pc = 0x13F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F860u;
    // 0x13f864: 0x8fa80138  lw          $t0, 0x138($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140708u, 0x13F860u, 0x13F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F868u;
label_13f868:
    // 0x13f868: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x13f868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_13f86c:
    // 0x13f86c: 0xc0484a6  jal         func_121298
label_13f870:
    if (ctx->pc == 0x13F870u) {
        ctx->pc = 0x13F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F86Cu;
        // 0x13f870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F874u;
        goto label_13f874;
    }
    ctx->pc = 0x13F86Cu;
    SET_GPR_U32(ctx, 31, 0x13F874u);
    ctx->pc = 0x13F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F86Cu;
    // 0x13f870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x13F86Cu, 0x13F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F874u;
label_13f874:
    // 0x13f874: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_13f878:
    if (ctx->pc == 0x13F878u) {
        ctx->pc = 0x13F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F874u;
        // 0x13f878: 0x822303ec  lb          $v1, 0x3EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F87Cu;
        goto label_13f87c;
    }
    ctx->pc = 0x13F874u;
    {
        const bool branch_taken_0x13f874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f874) {
            ctx->pc = 0x13F878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F874u;
            // 0x13f878: 0x822303ec  lb          $v1, 0x3EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F8D4u;
            goto label_13f8d4;
        }
    }
    ctx->pc = 0x13F87Cu;
label_13f87c:
    // 0x13f87c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f880:
    // 0x13f880: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13f880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13f884:
    // 0x13f884: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13f888:
    // 0x13f888: 0x40f809  jalr        $v0
label_13f88c:
    if (ctx->pc == 0x13F88Cu) {
        ctx->pc = 0x13F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F888u;
        // 0x13f88c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F890u;
        goto label_13f890;
    }
    ctx->pc = 0x13F888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F890u);
        ctx->pc = 0x13F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F888u;
        // 0x13f88c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F888u, 0x13F890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F890u;
label_13f890:
    // 0x13f890: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x13f890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_13f894:
    // 0x13f894: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f898:
    // 0x13f898: 0xc0cdc0a  jal         func_337028
label_13f89c:
    if (ctx->pc == 0x13F89Cu) {
        ctx->pc = 0x13F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F898u;
        // 0x13f89c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8A0u;
        goto label_13f8a0;
    }
    ctx->pc = 0x13F898u;
    SET_GPR_U32(ctx, 31, 0x13F8A0u);
    ctx->pc = 0x13F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F898u;
    // 0x13f89c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x13F898u, 0x13F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8A0u;
label_13f8a0:
    // 0x13f8a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13f8a4:
    if (ctx->pc == 0x13F8A4u) {
        ctx->pc = 0x13F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A0u;
        // 0x13f8a4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8A8u;
        goto label_13f8a8;
    }
    ctx->pc = 0x13F8A0u;
    {
        const bool branch_taken_0x13f8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A0u;
        // 0x13f8a4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8a0) {
            ctx->pc = 0x13F8B8u;
            goto label_13f8b8;
        }
    }
    ctx->pc = 0x13F8A8u;
label_13f8a8:
    // 0x13f8a8: 0xc0cd972  jal         func_3365C8
label_13f8ac:
    if (ctx->pc == 0x13F8ACu) {
        ctx->pc = 0x13F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A8u;
        // 0x13f8ac: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8B0u;
        goto label_13f8b0;
    }
    ctx->pc = 0x13F8A8u;
    SET_GPR_U32(ctx, 31, 0x13F8B0u);
    ctx->pc = 0x13F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8A8u;
    // 0x13f8ac: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x13F8A8u, 0x13F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x13f8b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_13f8b4:
    // 0x13f8b4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x13f8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_13f8b8:
    // 0x13f8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f8bc:
    // 0x13f8bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f8c0:
    // 0x13f8c0: 0xc048314  jal         func_120C50
label_13f8c4:
    if (ctx->pc == 0x13F8C4u) {
        ctx->pc = 0x13F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8C0u;
        // 0x13f8c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8C8u;
        goto label_13f8c8;
    }
    ctx->pc = 0x13F8C0u;
    SET_GPR_U32(ctx, 31, 0x13F8C8u);
    ctx->pc = 0x13F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8C0u;
    // 0x13f8c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x13F8C0u, 0x13F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8C8u;
label_13f8c8:
    // 0x13f8c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f8cc:
    // 0x13f8cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_13f8d0:
    if (ctx->pc == 0x13F8D0u) {
        ctx->pc = 0x13F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8CCu;
        // 0x13f8d0: 0xa22203ec  sb          $v0, 0x3EC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1004), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8D4u;
        goto label_13f8d4;
    }
    ctx->pc = 0x13F8CCu;
    {
        const bool branch_taken_0x13f8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8CCu;
        // 0x13f8d0: 0xa22203ec  sb          $v0, 0x3EC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1004), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8cc) {
            ctx->pc = 0x13F8E0u;
            goto label_13f8e0;
        }
    }
    ctx->pc = 0x13F8D4u;
label_13f8d4:
    // 0x13f8d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f8d8:
    // 0x13f8d8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_13f8dc:
    if (ctx->pc == 0x13F8DCu) {
        ctx->pc = 0x13F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8D8u;
        // 0x13f8dc: 0xa23003ec  sb          $s0, 0x3EC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1004), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8E0u;
        goto label_13f8e0;
    }
    ctx->pc = 0x13F8D8u;
    {
        const bool branch_taken_0x13f8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f8d8) {
            ctx->pc = 0x13F8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F8D8u;
            // 0x13f8dc: 0xa23003ec  sb          $s0, 0x3EC($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1004), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F8E0u;
            goto label_13f8e0;
        }
    }
    ctx->pc = 0x13F8E0u;
label_13f8e0:
    // 0x13f8e0: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x13f8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_13f8e4:
    // 0x13f8e4: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x13f8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_13f8e8:
    // 0x13f8e8: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x13f8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_13f8ec:
    // 0x13f8ec: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x13f8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_13f8f0:
    // 0x13f8f0: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x13f8f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_13f8f4:
    // 0x13f8f4: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x13f8f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_13f8f8:
    // 0x13f8f8: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x13f8f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_13f8fc:
    // 0x13f8fc: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x13f8fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_13f900:
    // 0x13f900: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x13f900u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_13f904:
    // 0x13f904: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x13f904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_13f908:
    // 0x13f908: 0xc7ba0220  lwc1        $f26, 0x220($sp)
    ctx->pc = 0x13f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_13f90c:
    // 0x13f90c: 0xc7b90218  lwc1        $f25, 0x218($sp)
    ctx->pc = 0x13f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_13f910:
    // 0x13f910: 0xc7b80210  lwc1        $f24, 0x210($sp)
    ctx->pc = 0x13f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_13f914:
    // 0x13f914: 0xc7b70208  lwc1        $f23, 0x208($sp)
    ctx->pc = 0x13f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_13f918:
    // 0x13f918: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x13f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_13f91c:
    // 0x13f91c: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x13f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13f920:
    // 0x13f920: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x13f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13f924:
    // 0x13f924: 0x3e00008  jr          $ra
label_13f928:
    if (ctx->pc == 0x13F928u) {
        ctx->pc = 0x13F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F924u;
        // 0x13f928: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F92Cu;
        goto label_13f92c;
    }
    ctx->pc = 0x13F924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F924u;
        // 0x13f928: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F92Cu;
label_13f92c:
    // 0x13f92c: 0x0  nop
    ctx->pc = 0x13f92cu;
    // NOP
    ctx->pc = 0x13f930u;
}
