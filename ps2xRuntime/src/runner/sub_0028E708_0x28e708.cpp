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

// Function: sub_0028E708
// Address: 0x28e708 - 0x28ee88
void sub_0028E708_0x28e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E708_0x28e708");
#endif

    switch (ctx->pc) {
        case 0x28e708u: goto label_28e708;
        case 0x28e70cu: goto label_28e70c;
        case 0x28e710u: goto label_28e710;
        case 0x28e714u: goto label_28e714;
        case 0x28e718u: goto label_28e718;
        case 0x28e71cu: goto label_28e71c;
        case 0x28e720u: goto label_28e720;
        case 0x28e724u: goto label_28e724;
        case 0x28e728u: goto label_28e728;
        case 0x28e72cu: goto label_28e72c;
        case 0x28e730u: goto label_28e730;
        case 0x28e734u: goto label_28e734;
        case 0x28e738u: goto label_28e738;
        case 0x28e73cu: goto label_28e73c;
        case 0x28e740u: goto label_28e740;
        case 0x28e744u: goto label_28e744;
        case 0x28e748u: goto label_28e748;
        case 0x28e74cu: goto label_28e74c;
        case 0x28e750u: goto label_28e750;
        case 0x28e754u: goto label_28e754;
        case 0x28e758u: goto label_28e758;
        case 0x28e75cu: goto label_28e75c;
        case 0x28e760u: goto label_28e760;
        case 0x28e764u: goto label_28e764;
        case 0x28e768u: goto label_28e768;
        case 0x28e76cu: goto label_28e76c;
        case 0x28e770u: goto label_28e770;
        case 0x28e774u: goto label_28e774;
        case 0x28e778u: goto label_28e778;
        case 0x28e77cu: goto label_28e77c;
        case 0x28e780u: goto label_28e780;
        case 0x28e784u: goto label_28e784;
        case 0x28e788u: goto label_28e788;
        case 0x28e78cu: goto label_28e78c;
        case 0x28e790u: goto label_28e790;
        case 0x28e794u: goto label_28e794;
        case 0x28e798u: goto label_28e798;
        case 0x28e79cu: goto label_28e79c;
        case 0x28e7a0u: goto label_28e7a0;
        case 0x28e7a4u: goto label_28e7a4;
        case 0x28e7a8u: goto label_28e7a8;
        case 0x28e7acu: goto label_28e7ac;
        case 0x28e7b0u: goto label_28e7b0;
        case 0x28e7b4u: goto label_28e7b4;
        case 0x28e7b8u: goto label_28e7b8;
        case 0x28e7bcu: goto label_28e7bc;
        case 0x28e7c0u: goto label_28e7c0;
        case 0x28e7c4u: goto label_28e7c4;
        case 0x28e7c8u: goto label_28e7c8;
        case 0x28e7ccu: goto label_28e7cc;
        case 0x28e7d0u: goto label_28e7d0;
        case 0x28e7d4u: goto label_28e7d4;
        case 0x28e7d8u: goto label_28e7d8;
        case 0x28e7dcu: goto label_28e7dc;
        case 0x28e7e0u: goto label_28e7e0;
        case 0x28e7e4u: goto label_28e7e4;
        case 0x28e7e8u: goto label_28e7e8;
        case 0x28e7ecu: goto label_28e7ec;
        case 0x28e7f0u: goto label_28e7f0;
        case 0x28e7f4u: goto label_28e7f4;
        case 0x28e7f8u: goto label_28e7f8;
        case 0x28e7fcu: goto label_28e7fc;
        case 0x28e800u: goto label_28e800;
        case 0x28e804u: goto label_28e804;
        case 0x28e808u: goto label_28e808;
        case 0x28e80cu: goto label_28e80c;
        case 0x28e810u: goto label_28e810;
        case 0x28e814u: goto label_28e814;
        case 0x28e818u: goto label_28e818;
        case 0x28e81cu: goto label_28e81c;
        case 0x28e820u: goto label_28e820;
        case 0x28e824u: goto label_28e824;
        case 0x28e828u: goto label_28e828;
        case 0x28e82cu: goto label_28e82c;
        case 0x28e830u: goto label_28e830;
        case 0x28e834u: goto label_28e834;
        case 0x28e838u: goto label_28e838;
        case 0x28e83cu: goto label_28e83c;
        case 0x28e840u: goto label_28e840;
        case 0x28e844u: goto label_28e844;
        case 0x28e848u: goto label_28e848;
        case 0x28e84cu: goto label_28e84c;
        case 0x28e850u: goto label_28e850;
        case 0x28e854u: goto label_28e854;
        case 0x28e858u: goto label_28e858;
        case 0x28e85cu: goto label_28e85c;
        case 0x28e860u: goto label_28e860;
        case 0x28e864u: goto label_28e864;
        case 0x28e868u: goto label_28e868;
        case 0x28e86cu: goto label_28e86c;
        case 0x28e870u: goto label_28e870;
        case 0x28e874u: goto label_28e874;
        case 0x28e878u: goto label_28e878;
        case 0x28e87cu: goto label_28e87c;
        case 0x28e880u: goto label_28e880;
        case 0x28e884u: goto label_28e884;
        case 0x28e888u: goto label_28e888;
        case 0x28e88cu: goto label_28e88c;
        case 0x28e890u: goto label_28e890;
        case 0x28e894u: goto label_28e894;
        case 0x28e898u: goto label_28e898;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8a0u: goto label_28e8a0;
        case 0x28e8a4u: goto label_28e8a4;
        case 0x28e8a8u: goto label_28e8a8;
        case 0x28e8acu: goto label_28e8ac;
        case 0x28e8b0u: goto label_28e8b0;
        case 0x28e8b4u: goto label_28e8b4;
        case 0x28e8b8u: goto label_28e8b8;
        case 0x28e8bcu: goto label_28e8bc;
        case 0x28e8c0u: goto label_28e8c0;
        case 0x28e8c4u: goto label_28e8c4;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8ccu: goto label_28e8cc;
        case 0x28e8d0u: goto label_28e8d0;
        case 0x28e8d4u: goto label_28e8d4;
        case 0x28e8d8u: goto label_28e8d8;
        case 0x28e8dcu: goto label_28e8dc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8e4u: goto label_28e8e4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e8ecu: goto label_28e8ec;
        case 0x28e8f0u: goto label_28e8f0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e8fcu: goto label_28e8fc;
        case 0x28e900u: goto label_28e900;
        case 0x28e904u: goto label_28e904;
        case 0x28e908u: goto label_28e908;
        case 0x28e90cu: goto label_28e90c;
        case 0x28e910u: goto label_28e910;
        case 0x28e914u: goto label_28e914;
        case 0x28e918u: goto label_28e918;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e920u: goto label_28e920;
        case 0x28e924u: goto label_28e924;
        case 0x28e928u: goto label_28e928;
        case 0x28e92cu: goto label_28e92c;
        case 0x28e930u: goto label_28e930;
        case 0x28e934u: goto label_28e934;
        case 0x28e938u: goto label_28e938;
        case 0x28e93cu: goto label_28e93c;
        case 0x28e940u: goto label_28e940;
        case 0x28e944u: goto label_28e944;
        case 0x28e948u: goto label_28e948;
        case 0x28e94cu: goto label_28e94c;
        case 0x28e950u: goto label_28e950;
        case 0x28e954u: goto label_28e954;
        case 0x28e958u: goto label_28e958;
        case 0x28e95cu: goto label_28e95c;
        case 0x28e960u: goto label_28e960;
        case 0x28e964u: goto label_28e964;
        case 0x28e968u: goto label_28e968;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e970u: goto label_28e970;
        case 0x28e974u: goto label_28e974;
        case 0x28e978u: goto label_28e978;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e980u: goto label_28e980;
        case 0x28e984u: goto label_28e984;
        case 0x28e988u: goto label_28e988;
        case 0x28e98cu: goto label_28e98c;
        case 0x28e990u: goto label_28e990;
        case 0x28e994u: goto label_28e994;
        case 0x28e998u: goto label_28e998;
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9a0u: goto label_28e9a0;
        case 0x28e9a4u: goto label_28e9a4;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9acu: goto label_28e9ac;
        case 0x28e9b0u: goto label_28e9b0;
        case 0x28e9b4u: goto label_28e9b4;
        case 0x28e9b8u: goto label_28e9b8;
        case 0x28e9bcu: goto label_28e9bc;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28e9c4u: goto label_28e9c4;
        case 0x28e9c8u: goto label_28e9c8;
        case 0x28e9ccu: goto label_28e9cc;
        case 0x28e9d0u: goto label_28e9d0;
        case 0x28e9d4u: goto label_28e9d4;
        case 0x28e9d8u: goto label_28e9d8;
        case 0x28e9dcu: goto label_28e9dc;
        case 0x28e9e0u: goto label_28e9e0;
        case 0x28e9e4u: goto label_28e9e4;
        case 0x28e9e8u: goto label_28e9e8;
        case 0x28e9ecu: goto label_28e9ec;
        case 0x28e9f0u: goto label_28e9f0;
        case 0x28e9f4u: goto label_28e9f4;
        case 0x28e9f8u: goto label_28e9f8;
        case 0x28e9fcu: goto label_28e9fc;
        case 0x28ea00u: goto label_28ea00;
        case 0x28ea04u: goto label_28ea04;
        case 0x28ea08u: goto label_28ea08;
        case 0x28ea0cu: goto label_28ea0c;
        case 0x28ea10u: goto label_28ea10;
        case 0x28ea14u: goto label_28ea14;
        case 0x28ea18u: goto label_28ea18;
        case 0x28ea1cu: goto label_28ea1c;
        case 0x28ea20u: goto label_28ea20;
        case 0x28ea24u: goto label_28ea24;
        case 0x28ea28u: goto label_28ea28;
        case 0x28ea2cu: goto label_28ea2c;
        case 0x28ea30u: goto label_28ea30;
        case 0x28ea34u: goto label_28ea34;
        case 0x28ea38u: goto label_28ea38;
        case 0x28ea3cu: goto label_28ea3c;
        case 0x28ea40u: goto label_28ea40;
        case 0x28ea44u: goto label_28ea44;
        case 0x28ea48u: goto label_28ea48;
        case 0x28ea4cu: goto label_28ea4c;
        case 0x28ea50u: goto label_28ea50;
        case 0x28ea54u: goto label_28ea54;
        case 0x28ea58u: goto label_28ea58;
        case 0x28ea5cu: goto label_28ea5c;
        case 0x28ea60u: goto label_28ea60;
        case 0x28ea64u: goto label_28ea64;
        case 0x28ea68u: goto label_28ea68;
        case 0x28ea6cu: goto label_28ea6c;
        case 0x28ea70u: goto label_28ea70;
        case 0x28ea74u: goto label_28ea74;
        case 0x28ea78u: goto label_28ea78;
        case 0x28ea7cu: goto label_28ea7c;
        case 0x28ea80u: goto label_28ea80;
        case 0x28ea84u: goto label_28ea84;
        case 0x28ea88u: goto label_28ea88;
        case 0x28ea8cu: goto label_28ea8c;
        case 0x28ea90u: goto label_28ea90;
        case 0x28ea94u: goto label_28ea94;
        case 0x28ea98u: goto label_28ea98;
        case 0x28ea9cu: goto label_28ea9c;
        case 0x28eaa0u: goto label_28eaa0;
        case 0x28eaa4u: goto label_28eaa4;
        case 0x28eaa8u: goto label_28eaa8;
        case 0x28eaacu: goto label_28eaac;
        case 0x28eab0u: goto label_28eab0;
        case 0x28eab4u: goto label_28eab4;
        case 0x28eab8u: goto label_28eab8;
        case 0x28eabcu: goto label_28eabc;
        case 0x28eac0u: goto label_28eac0;
        case 0x28eac4u: goto label_28eac4;
        case 0x28eac8u: goto label_28eac8;
        case 0x28eaccu: goto label_28eacc;
        case 0x28ead0u: goto label_28ead0;
        case 0x28ead4u: goto label_28ead4;
        case 0x28ead8u: goto label_28ead8;
        case 0x28eadcu: goto label_28eadc;
        case 0x28eae0u: goto label_28eae0;
        case 0x28eae4u: goto label_28eae4;
        case 0x28eae8u: goto label_28eae8;
        case 0x28eaecu: goto label_28eaec;
        case 0x28eaf0u: goto label_28eaf0;
        case 0x28eaf4u: goto label_28eaf4;
        case 0x28eaf8u: goto label_28eaf8;
        case 0x28eafcu: goto label_28eafc;
        case 0x28eb00u: goto label_28eb00;
        case 0x28eb04u: goto label_28eb04;
        case 0x28eb08u: goto label_28eb08;
        case 0x28eb0cu: goto label_28eb0c;
        case 0x28eb10u: goto label_28eb10;
        case 0x28eb14u: goto label_28eb14;
        case 0x28eb18u: goto label_28eb18;
        case 0x28eb1cu: goto label_28eb1c;
        case 0x28eb20u: goto label_28eb20;
        case 0x28eb24u: goto label_28eb24;
        case 0x28eb28u: goto label_28eb28;
        case 0x28eb2cu: goto label_28eb2c;
        case 0x28eb30u: goto label_28eb30;
        case 0x28eb34u: goto label_28eb34;
        case 0x28eb38u: goto label_28eb38;
        case 0x28eb3cu: goto label_28eb3c;
        case 0x28eb40u: goto label_28eb40;
        case 0x28eb44u: goto label_28eb44;
        case 0x28eb48u: goto label_28eb48;
        case 0x28eb4cu: goto label_28eb4c;
        case 0x28eb50u: goto label_28eb50;
        case 0x28eb54u: goto label_28eb54;
        case 0x28eb58u: goto label_28eb58;
        case 0x28eb5cu: goto label_28eb5c;
        case 0x28eb60u: goto label_28eb60;
        case 0x28eb64u: goto label_28eb64;
        case 0x28eb68u: goto label_28eb68;
        case 0x28eb6cu: goto label_28eb6c;
        case 0x28eb70u: goto label_28eb70;
        case 0x28eb74u: goto label_28eb74;
        case 0x28eb78u: goto label_28eb78;
        case 0x28eb7cu: goto label_28eb7c;
        case 0x28eb80u: goto label_28eb80;
        case 0x28eb84u: goto label_28eb84;
        case 0x28eb88u: goto label_28eb88;
        case 0x28eb8cu: goto label_28eb8c;
        case 0x28eb90u: goto label_28eb90;
        case 0x28eb94u: goto label_28eb94;
        case 0x28eb98u: goto label_28eb98;
        case 0x28eb9cu: goto label_28eb9c;
        case 0x28eba0u: goto label_28eba0;
        case 0x28eba4u: goto label_28eba4;
        case 0x28eba8u: goto label_28eba8;
        case 0x28ebacu: goto label_28ebac;
        case 0x28ebb0u: goto label_28ebb0;
        case 0x28ebb4u: goto label_28ebb4;
        case 0x28ebb8u: goto label_28ebb8;
        case 0x28ebbcu: goto label_28ebbc;
        case 0x28ebc0u: goto label_28ebc0;
        case 0x28ebc4u: goto label_28ebc4;
        case 0x28ebc8u: goto label_28ebc8;
        case 0x28ebccu: goto label_28ebcc;
        case 0x28ebd0u: goto label_28ebd0;
        case 0x28ebd4u: goto label_28ebd4;
        case 0x28ebd8u: goto label_28ebd8;
        case 0x28ebdcu: goto label_28ebdc;
        case 0x28ebe0u: goto label_28ebe0;
        case 0x28ebe4u: goto label_28ebe4;
        case 0x28ebe8u: goto label_28ebe8;
        case 0x28ebecu: goto label_28ebec;
        case 0x28ebf0u: goto label_28ebf0;
        case 0x28ebf4u: goto label_28ebf4;
        case 0x28ebf8u: goto label_28ebf8;
        case 0x28ebfcu: goto label_28ebfc;
        case 0x28ec00u: goto label_28ec00;
        case 0x28ec04u: goto label_28ec04;
        case 0x28ec08u: goto label_28ec08;
        case 0x28ec0cu: goto label_28ec0c;
        case 0x28ec10u: goto label_28ec10;
        case 0x28ec14u: goto label_28ec14;
        case 0x28ec18u: goto label_28ec18;
        case 0x28ec1cu: goto label_28ec1c;
        case 0x28ec20u: goto label_28ec20;
        case 0x28ec24u: goto label_28ec24;
        case 0x28ec28u: goto label_28ec28;
        case 0x28ec2cu: goto label_28ec2c;
        case 0x28ec30u: goto label_28ec30;
        case 0x28ec34u: goto label_28ec34;
        case 0x28ec38u: goto label_28ec38;
        case 0x28ec3cu: goto label_28ec3c;
        case 0x28ec40u: goto label_28ec40;
        case 0x28ec44u: goto label_28ec44;
        case 0x28ec48u: goto label_28ec48;
        case 0x28ec4cu: goto label_28ec4c;
        case 0x28ec50u: goto label_28ec50;
        case 0x28ec54u: goto label_28ec54;
        case 0x28ec58u: goto label_28ec58;
        case 0x28ec5cu: goto label_28ec5c;
        case 0x28ec60u: goto label_28ec60;
        case 0x28ec64u: goto label_28ec64;
        case 0x28ec68u: goto label_28ec68;
        case 0x28ec6cu: goto label_28ec6c;
        case 0x28ec70u: goto label_28ec70;
        case 0x28ec74u: goto label_28ec74;
        case 0x28ec78u: goto label_28ec78;
        case 0x28ec7cu: goto label_28ec7c;
        case 0x28ec80u: goto label_28ec80;
        case 0x28ec84u: goto label_28ec84;
        case 0x28ec88u: goto label_28ec88;
        case 0x28ec8cu: goto label_28ec8c;
        case 0x28ec90u: goto label_28ec90;
        case 0x28ec94u: goto label_28ec94;
        case 0x28ec98u: goto label_28ec98;
        case 0x28ec9cu: goto label_28ec9c;
        case 0x28eca0u: goto label_28eca0;
        case 0x28eca4u: goto label_28eca4;
        case 0x28eca8u: goto label_28eca8;
        case 0x28ecacu: goto label_28ecac;
        case 0x28ecb0u: goto label_28ecb0;
        case 0x28ecb4u: goto label_28ecb4;
        case 0x28ecb8u: goto label_28ecb8;
        case 0x28ecbcu: goto label_28ecbc;
        case 0x28ecc0u: goto label_28ecc0;
        case 0x28ecc4u: goto label_28ecc4;
        case 0x28ecc8u: goto label_28ecc8;
        case 0x28ecccu: goto label_28eccc;
        case 0x28ecd0u: goto label_28ecd0;
        case 0x28ecd4u: goto label_28ecd4;
        case 0x28ecd8u: goto label_28ecd8;
        case 0x28ecdcu: goto label_28ecdc;
        case 0x28ece0u: goto label_28ece0;
        case 0x28ece4u: goto label_28ece4;
        case 0x28ece8u: goto label_28ece8;
        case 0x28ececu: goto label_28ecec;
        case 0x28ecf0u: goto label_28ecf0;
        case 0x28ecf4u: goto label_28ecf4;
        case 0x28ecf8u: goto label_28ecf8;
        case 0x28ecfcu: goto label_28ecfc;
        case 0x28ed00u: goto label_28ed00;
        case 0x28ed04u: goto label_28ed04;
        case 0x28ed08u: goto label_28ed08;
        case 0x28ed0cu: goto label_28ed0c;
        case 0x28ed10u: goto label_28ed10;
        case 0x28ed14u: goto label_28ed14;
        case 0x28ed18u: goto label_28ed18;
        case 0x28ed1cu: goto label_28ed1c;
        case 0x28ed20u: goto label_28ed20;
        case 0x28ed24u: goto label_28ed24;
        case 0x28ed28u: goto label_28ed28;
        case 0x28ed2cu: goto label_28ed2c;
        case 0x28ed30u: goto label_28ed30;
        case 0x28ed34u: goto label_28ed34;
        case 0x28ed38u: goto label_28ed38;
        case 0x28ed3cu: goto label_28ed3c;
        case 0x28ed40u: goto label_28ed40;
        case 0x28ed44u: goto label_28ed44;
        case 0x28ed48u: goto label_28ed48;
        case 0x28ed4cu: goto label_28ed4c;
        case 0x28ed50u: goto label_28ed50;
        case 0x28ed54u: goto label_28ed54;
        case 0x28ed58u: goto label_28ed58;
        case 0x28ed5cu: goto label_28ed5c;
        case 0x28ed60u: goto label_28ed60;
        case 0x28ed64u: goto label_28ed64;
        case 0x28ed68u: goto label_28ed68;
        case 0x28ed6cu: goto label_28ed6c;
        case 0x28ed70u: goto label_28ed70;
        case 0x28ed74u: goto label_28ed74;
        case 0x28ed78u: goto label_28ed78;
        case 0x28ed7cu: goto label_28ed7c;
        case 0x28ed80u: goto label_28ed80;
        case 0x28ed84u: goto label_28ed84;
        case 0x28ed88u: goto label_28ed88;
        case 0x28ed8cu: goto label_28ed8c;
        case 0x28ed90u: goto label_28ed90;
        case 0x28ed94u: goto label_28ed94;
        case 0x28ed98u: goto label_28ed98;
        case 0x28ed9cu: goto label_28ed9c;
        case 0x28eda0u: goto label_28eda0;
        case 0x28eda4u: goto label_28eda4;
        case 0x28eda8u: goto label_28eda8;
        case 0x28edacu: goto label_28edac;
        case 0x28edb0u: goto label_28edb0;
        case 0x28edb4u: goto label_28edb4;
        case 0x28edb8u: goto label_28edb8;
        case 0x28edbcu: goto label_28edbc;
        case 0x28edc0u: goto label_28edc0;
        case 0x28edc4u: goto label_28edc4;
        case 0x28edc8u: goto label_28edc8;
        case 0x28edccu: goto label_28edcc;
        case 0x28edd0u: goto label_28edd0;
        case 0x28edd4u: goto label_28edd4;
        case 0x28edd8u: goto label_28edd8;
        case 0x28eddcu: goto label_28eddc;
        case 0x28ede0u: goto label_28ede0;
        case 0x28ede4u: goto label_28ede4;
        case 0x28ede8u: goto label_28ede8;
        case 0x28edecu: goto label_28edec;
        case 0x28edf0u: goto label_28edf0;
        case 0x28edf4u: goto label_28edf4;
        case 0x28edf8u: goto label_28edf8;
        case 0x28edfcu: goto label_28edfc;
        case 0x28ee00u: goto label_28ee00;
        case 0x28ee04u: goto label_28ee04;
        case 0x28ee08u: goto label_28ee08;
        case 0x28ee0cu: goto label_28ee0c;
        case 0x28ee10u: goto label_28ee10;
        case 0x28ee14u: goto label_28ee14;
        case 0x28ee18u: goto label_28ee18;
        case 0x28ee1cu: goto label_28ee1c;
        case 0x28ee20u: goto label_28ee20;
        case 0x28ee24u: goto label_28ee24;
        case 0x28ee28u: goto label_28ee28;
        case 0x28ee2cu: goto label_28ee2c;
        case 0x28ee30u: goto label_28ee30;
        case 0x28ee34u: goto label_28ee34;
        case 0x28ee38u: goto label_28ee38;
        case 0x28ee3cu: goto label_28ee3c;
        case 0x28ee40u: goto label_28ee40;
        case 0x28ee44u: goto label_28ee44;
        case 0x28ee48u: goto label_28ee48;
        case 0x28ee4cu: goto label_28ee4c;
        case 0x28ee50u: goto label_28ee50;
        case 0x28ee54u: goto label_28ee54;
        case 0x28ee58u: goto label_28ee58;
        case 0x28ee5cu: goto label_28ee5c;
        case 0x28ee60u: goto label_28ee60;
        case 0x28ee64u: goto label_28ee64;
        case 0x28ee68u: goto label_28ee68;
        case 0x28ee6cu: goto label_28ee6c;
        case 0x28ee70u: goto label_28ee70;
        case 0x28ee74u: goto label_28ee74;
        case 0x28ee78u: goto label_28ee78;
        case 0x28ee7cu: goto label_28ee7c;
        case 0x28ee80u: goto label_28ee80;
        case 0x28ee84u: goto label_28ee84;
        default: break;
    }

    ctx->pc = 0x28e708u;

label_28e708:
    // 0x28e708: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x28e708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_28e70c:
    // 0x28e70c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x28e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_28e710:
    // 0x28e710: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x28e710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
label_28e714:
    // 0x28e714: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_28e718:
    // 0x28e718: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x28e718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
label_28e71c:
    // 0x28e71c: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x28e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
label_28e720:
    // 0x28e720: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28e720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e724:
    // 0x28e724: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x28e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
label_28e728:
    // 0x28e728: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28e728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e72c:
    // 0x28e72c: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x28e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
label_28e730:
    // 0x28e730: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28e730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28e734:
    // 0x28e734: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x28e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
label_28e738:
    // 0x28e738: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x28e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
label_28e73c:
    // 0x28e73c: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x28e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
label_28e740:
    // 0x28e740: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x28e740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
label_28e744:
    // 0x28e744: 0xe7b60270  swc1        $f22, 0x270($sp)
    ctx->pc = 0x28e744u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_28e748:
    // 0x28e748: 0xe7b50268  swc1        $f21, 0x268($sp)
    ctx->pc = 0x28e748u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_28e74c:
    // 0x28e74c: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x28e74cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_28e750:
    // 0x28e750: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x28e750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_28e754:
    // 0x28e754: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x28e754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
label_28e758:
    // 0x28e758: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x28e758u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28e75c:
    // 0x28e75c: 0x86a50092  lh          $a1, 0x92($s5)
    ctx->pc = 0x28e75cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_28e760:
    // 0x28e760: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x28e760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_28e764:
    // 0x28e764: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28e764u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_28e768:
    // 0x28e768: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_28e76c:
    // 0x28e76c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_28e770:
    // 0x28e770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28e774:
    // 0x28e774: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x28e774u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_28e778:
    // 0x28e778: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28e778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28e77c:
    // 0x28e77c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28e780:
    // 0x28e780: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x28e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_28e784:
    // 0x28e784: 0xc0cdb38  jal         func_336CE0
label_28e788:
    if (ctx->pc == 0x28E788u) {
        ctx->pc = 0x28E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E784u;
        // 0x28e788: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E78Cu;
        goto label_28e78c;
    }
    ctx->pc = 0x28E784u;
    SET_GPR_U32(ctx, 31, 0x28E78Cu);
    ctx->pc = 0x28E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E784u;
    // 0x28e788: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28E784u, 0x28E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E78Cu;
label_28e78c:
    // 0x28e78c: 0xc087502  jal         func_21D408
label_28e790:
    if (ctx->pc == 0x28E790u) {
        ctx->pc = 0x28E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E78Cu;
        // 0x28e790: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E794u;
        goto label_28e794;
    }
    ctx->pc = 0x28E78Cu;
    SET_GPR_U32(ctx, 31, 0x28E794u);
    ctx->pc = 0x28E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E78Cu;
    // 0x28e790: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28E78Cu, 0x28E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E794u;
label_28e794:
    // 0x28e794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e798:
    // 0x28e798: 0xc136b80  jal         func_4DAE00
label_28e79c:
    if (ctx->pc == 0x28E79Cu) {
        ctx->pc = 0x28E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E798u;
        // 0x28e79c: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7A0u;
        goto label_28e7a0;
    }
    ctx->pc = 0x28E798u;
    SET_GPR_U32(ctx, 31, 0x28E7A0u);
    ctx->pc = 0x28E79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E798u;
    // 0x28e79c: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28E798u, 0x28E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7A0u;
label_28e7a0:
    // 0x28e7a0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x28e7a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e7a4:
    // 0x28e7a4: 0x6e00006  bltz        $s7, . + 4 + (0x6 << 2)
label_28e7a8:
    if (ctx->pc == 0x28E7A8u) {
        ctx->pc = 0x28E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A4u;
        // 0x28e7a8: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7ACu;
        goto label_28e7ac;
    }
    ctx->pc = 0x28E7A4u;
    {
        const bool branch_taken_0x28e7a4 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x28E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A4u;
        // 0x28e7a8: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7a4) {
            ctx->pc = 0x28E7C0u;
            goto label_28e7c0;
        }
    }
    ctx->pc = 0x28E7ACu;
label_28e7ac:
    // 0x28e7ac: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28e7acu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e7b0:
    // 0x28e7b0: 0x0  nop
    ctx->pc = 0x28e7b0u;
    // NOP
label_28e7b4:
    // 0x28e7b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28e7b8:
    // 0x28e7b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_28e7bc:
    if (ctx->pc == 0x28E7BCu) {
        ctx->pc = 0x28E7C0u;
        goto label_28e7c0;
    }
    ctx->pc = 0x28E7B8u;
    {
        const bool branch_taken_0x28e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7b8) {
            ctx->pc = 0x28E7DCu;
            goto label_28e7dc;
        }
    }
    ctx->pc = 0x28E7C0u;
label_28e7c0:
    // 0x28e7c0: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x28e7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_28e7c4:
    // 0x28e7c4: 0x171842  srl         $v1, $s7, 1
    ctx->pc = 0x28e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
label_28e7c8:
    // 0x28e7c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28e7cc:
    // 0x28e7cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e7d0:
    // 0x28e7d0: 0x0  nop
    ctx->pc = 0x28e7d0u;
    // NOP
label_28e7d4:
    // 0x28e7d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28e7d8:
    // 0x28e7d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e7dc:
    // 0x28e7dc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_28e7e0:
    if (ctx->pc == 0x28E7E0u) {
        ctx->pc = 0x28E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7DCu;
        // 0x28e7e0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7E4u;
        goto label_28e7e4;
    }
    ctx->pc = 0x28E7DCu;
    {
        const bool branch_taken_0x28e7dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7DCu;
        // 0x28e7e0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7dc) {
            ctx->pc = 0x28E7F8u;
            goto label_28e7f8;
        }
    }
    ctx->pc = 0x28E7E4u;
label_28e7e4:
    // 0x28e7e4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x28e7e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28e7e8:
    // 0x28e7e8: 0x0  nop
    ctx->pc = 0x28e7e8u;
    // NOP
label_28e7ec:
    // 0x28e7ec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x28e7ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_28e7f0:
    // 0x28e7f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_28e7f4:
    if (ctx->pc == 0x28E7F4u) {
        ctx->pc = 0x28E7F8u;
        goto label_28e7f8;
    }
    ctx->pc = 0x28E7F0u;
    {
        const bool branch_taken_0x28e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7f0) {
            ctx->pc = 0x28E810u;
            goto label_28e810;
        }
    }
    ctx->pc = 0x28E7F8u;
label_28e7f8:
    // 0x28e7f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28e7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_28e7fc:
    // 0x28e7fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28e800:
    // 0x28e800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28e800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28e804:
    // 0x28e804: 0x0  nop
    ctx->pc = 0x28e804u;
    // NOP
label_28e808:
    // 0x28e808: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x28e808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_28e80c:
    // 0x28e80c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x28e80cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_28e810:
    // 0x28e810: 0x0  nop
    ctx->pc = 0x28e810u;
    // NOP
label_28e814:
    // 0x28e814: 0x0  nop
    ctx->pc = 0x28e814u;
    // NOP
label_28e818:
    // 0x28e818: 0x460c0583  div.s       $f22, $f0, $f12
    ctx->pc = 0x28e818u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_28e81c:
    // 0x28e81c: 0xc088e98  jal         func_223A60
label_28e820:
    if (ctx->pc == 0x28E820u) {
        ctx->pc = 0x28E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E81Cu;
        // 0x28e820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E824u;
        goto label_28e824;
    }
    ctx->pc = 0x28E81Cu;
    SET_GPR_U32(ctx, 31, 0x28E824u);
    ctx->pc = 0x28E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E81Cu;
    // 0x28e820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x28E81Cu, 0x28E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E824u;
label_28e824:
    // 0x28e824: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28e824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e828:
    // 0x28e828: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_28e82c:
    if (ctx->pc == 0x28E82Cu) {
        ctx->pc = 0x28E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E828u;
        // 0x28e82c: 0xafa001a0  sw          $zero, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E830u;
        goto label_28e830;
    }
    ctx->pc = 0x28E828u;
    {
        const bool branch_taken_0x28e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E828u;
        // 0x28e82c: 0xafa001a0  sw          $zero, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e828) {
            ctx->pc = 0x28E840u;
            goto label_28e840;
        }
    }
    ctx->pc = 0x28E830u;
label_28e830:
    // 0x28e830: 0xc088ea6  jal         func_223A98
label_28e834:
    if (ctx->pc == 0x28E834u) {
        ctx->pc = 0x28E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E830u;
        // 0x28e834: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E838u;
        goto label_28e838;
    }
    ctx->pc = 0x28E830u;
    SET_GPR_U32(ctx, 31, 0x28E838u);
    ctx->pc = 0x28E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E830u;
    // 0x28e834: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x28E830u, 0x28E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E838u;
label_28e838:
    // 0x28e838: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_28e83c:
    if (ctx->pc == 0x28E83Cu) {
        ctx->pc = 0x28E840u;
        goto label_28e840;
    }
    ctx->pc = 0x28E838u;
    {
        const bool branch_taken_0x28e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x28e838) {
            ctx->pc = 0x28E848u;
            goto label_28e848;
        }
    }
    ctx->pc = 0x28E840u;
label_28e840:
    // 0x28e840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e844:
    // 0x28e844: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x28e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_28e848:
    // 0x28e848: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28e848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28e84c:
    // 0x28e84c: 0xc08c68e  jal         func_231A38
label_28e850:
    if (ctx->pc == 0x28E850u) {
        ctx->pc = 0x28E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E84Cu;
        // 0x28e850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E854u;
        goto label_28e854;
    }
    ctx->pc = 0x28E84Cu;
    SET_GPR_U32(ctx, 31, 0x28E854u);
    ctx->pc = 0x28E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E84Cu;
    // 0x28e850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x28E84Cu, 0x28E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E854u;
label_28e854:
    // 0x28e854: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28e854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28e858:
    // 0x28e858: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x28e858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_28e85c:
    // 0x28e85c: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x28e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_28e860:
    // 0x28e860: 0xc088e58  jal         func_223960
label_28e864:
    if (ctx->pc == 0x28E864u) {
        ctx->pc = 0x28E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E860u;
        // 0x28e864: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E868u;
        goto label_28e868;
    }
    ctx->pc = 0x28E860u;
    SET_GPR_U32(ctx, 31, 0x28E868u);
    ctx->pc = 0x28E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E860u;
    // 0x28e864: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x28E860u, 0x28E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E868u;
label_28e868:
    // 0x28e868: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28e868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_28e86c:
    // 0x28e86c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e870:
    // 0x28e870: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28e870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28e874:
    // 0x28e874: 0xc088db2  jal         func_2236C8
label_28e878:
    if (ctx->pc == 0x28E878u) {
        ctx->pc = 0x28E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E874u;
        // 0x28e878: 0xafa201a8  sw          $v0, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E87Cu;
        goto label_28e87c;
    }
    ctx->pc = 0x28E874u;
    SET_GPR_U32(ctx, 31, 0x28E87Cu);
    ctx->pc = 0x28E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E874u;
    // 0x28e878: 0xafa201a8  sw          $v0, 0x1A8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236C8u, 0x28E874u, 0x28E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E87Cu;
label_28e87c:
    // 0x28e87c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x28e87cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_28e880:
    // 0x28e880: 0xc0874fa  jal         func_21D3E8
label_28e884:
    if (ctx->pc == 0x28E884u) {
        ctx->pc = 0x28E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E880u;
        // 0x28e884: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E888u;
        goto label_28e888;
    }
    ctx->pc = 0x28E880u;
    SET_GPR_U32(ctx, 31, 0x28E888u);
    ctx->pc = 0x28E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E880u;
    // 0x28e884: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28E880u, 0x28E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E888u;
label_28e888:
    // 0x28e888: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x28e888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_28e88c:
    // 0x28e88c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_28e890:
    if (ctx->pc == 0x28E890u) {
        ctx->pc = 0x28E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E88Cu;
        // 0x28e890: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E894u;
        goto label_28e894;
    }
    ctx->pc = 0x28E88Cu;
    {
        const bool branch_taken_0x28e88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E88Cu;
        // 0x28e890: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e88c) {
            ctx->pc = 0x28E910u;
            goto label_28e910;
        }
    }
    ctx->pc = 0x28E894u;
label_28e894:
    // 0x28e894: 0xc0e409a  jal         func_390268
label_28e898:
    if (ctx->pc == 0x28E898u) {
        ctx->pc = 0x28E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E894u;
        // 0x28e898: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E89Cu;
        goto label_28e89c;
    }
    ctx->pc = 0x28E894u;
    SET_GPR_U32(ctx, 31, 0x28E89Cu);
    ctx->pc = 0x28E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E894u;
    // 0x28e898: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28E894u, 0x28E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E89Cu;
label_28e89c:
    // 0x28e89c: 0x1453001c  bne         $v0, $s3, . + 4 + (0x1C << 2)
label_28e8a0:
    if (ctx->pc == 0x28E8A0u) {
        ctx->pc = 0x28E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E89Cu;
        // 0x28e8a0: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8A4u;
        goto label_28e8a4;
    }
    ctx->pc = 0x28E89Cu;
    {
        const bool branch_taken_0x28e89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x28E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E89Cu;
        // 0x28e8a0: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e89c) {
            ctx->pc = 0x28E910u;
            goto label_28e910;
        }
    }
    ctx->pc = 0x28E8A4u;
label_28e8a4:
    // 0x28e8a4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x28e8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e8a8:
    // 0x28e8a8: 0x0  nop
    ctx->pc = 0x28e8a8u;
    // NOP
label_28e8ac:
    // 0x28e8ac: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_28e8b0:
    if (ctx->pc == 0x28E8B0u) {
        ctx->pc = 0x28E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8ACu;
        // 0x28e8b0: 0x26b005d0  addiu       $s0, $s5, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8B4u;
        goto label_28e8b4;
    }
    ctx->pc = 0x28E8ACu;
    {
        const bool branch_taken_0x28e8ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8ACu;
        // 0x28e8b0: 0x26b005d0  addiu       $s0, $s5, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8ac) {
            ctx->pc = 0x28E910u;
            goto label_28e910;
        }
    }
    ctx->pc = 0x28E8B4u;
label_28e8b4:
    // 0x28e8b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8b8:
    // 0x28e8b8: 0xc1060e6  jal         func_418398
label_28e8bc:
    if (ctx->pc == 0x28E8BCu) {
        ctx->pc = 0x28E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8B8u;
        // 0x28e8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8C0u;
        goto label_28e8c0;
    }
    ctx->pc = 0x28E8B8u;
    SET_GPR_U32(ctx, 31, 0x28E8C0u);
    ctx->pc = 0x28E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8B8u;
    // 0x28e8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x28E8B8u, 0x28E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8C0u;
label_28e8c0:
    // 0x28e8c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28e8c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28e8c4:
    // 0x28e8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e8c8:
    // 0x28e8c8: 0xc1060e6  jal         func_418398
label_28e8cc:
    if (ctx->pc == 0x28E8CCu) {
        ctx->pc = 0x28E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8C8u;
        // 0x28e8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8D0u;
        goto label_28e8d0;
    }
    ctx->pc = 0x28E8C8u;
    SET_GPR_U32(ctx, 31, 0x28E8D0u);
    ctx->pc = 0x28E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8C8u;
    // 0x28e8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x28E8C8u, 0x28E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8D0u;
label_28e8d0:
    // 0x28e8d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28e8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e8d4:
    // 0x28e8d4: 0x0  nop
    ctx->pc = 0x28e8d4u;
    // NOP
label_28e8d8:
    // 0x28e8d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28e8dc:
    if (ctx->pc == 0x28E8DCu) {
        ctx->pc = 0x28E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8D8u;
        // 0x28e8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8E0u;
        goto label_28e8e0;
    }
    ctx->pc = 0x28E8D8u;
    {
        const bool branch_taken_0x28e8d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8D8u;
        // 0x28e8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8d8) {
            ctx->pc = 0x28E8E8u;
            goto label_28e8e8;
        }
    }
    ctx->pc = 0x28E8E0u;
label_28e8e0:
    // 0x28e8e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28e8e4:
    if (ctx->pc == 0x28E8E4u) {
        ctx->pc = 0x28E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8E0u;
        // 0x28e8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8E8u;
        goto label_28e8e8;
    }
    ctx->pc = 0x28E8E0u;
    {
        const bool branch_taken_0x28e8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8E0u;
        // 0x28e8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8e0) {
            ctx->pc = 0x28E8ECu;
            goto label_28e8ec;
        }
    }
    ctx->pc = 0x28E8E8u;
label_28e8e8:
    // 0x28e8e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e8ec:
    // 0x28e8ec: 0xc1060e6  jal         func_418398
label_28e8f0:
    if (ctx->pc == 0x28E8F0u) {
        ctx->pc = 0x28E8F4u;
        goto label_28e8f4;
    }
    ctx->pc = 0x28E8ECu;
    SET_GPR_U32(ctx, 31, 0x28E8F4u);
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x28E8ECu, 0x28E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8F4u;
label_28e8f4:
    // 0x28e8f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28e8f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28e8f8:
    // 0x28e8f8: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x28e8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e8fc:
    // 0x28e8fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e900:
    // 0x28e900: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_28e904:
    if (ctx->pc == 0x28E904u) {
        ctx->pc = 0x28E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E900u;
        // 0x28e904: 0xafa301ac  sw          $v1, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E908u;
        goto label_28e908;
    }
    ctx->pc = 0x28E900u;
    {
        const bool branch_taken_0x28e900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E900u;
        // 0x28e904: 0xafa301ac  sw          $v1, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e900) {
            ctx->pc = 0x28E90Cu;
            goto label_28e90c;
        }
    }
    ctx->pc = 0x28E908u;
label_28e908:
    // 0x28e908: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x28e908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_28e90c:
    // 0x28e90c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x28e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28e910:
    // 0x28e910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e914:
    // 0x28e914: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x28e914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_28e918:
    // 0x28e918: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28e918u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e91c:
    // 0x28e91c: 0xc0a2af0  jal         func_28ABC0
label_28e920:
    if (ctx->pc == 0x28E920u) {
        ctx->pc = 0x28E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E91Cu;
        // 0x28e920: 0xafa201b4  sw          $v0, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E924u;
        goto label_28e924;
    }
    ctx->pc = 0x28E91Cu;
    SET_GPR_U32(ctx, 31, 0x28E924u);
    ctx->pc = 0x28E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E91Cu;
    // 0x28e920: 0xafa201b4  sw          $v0, 0x1B4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x28E91Cu, 0x28E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E924u;
label_28e924:
    // 0x28e924: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_28e928:
    if (ctx->pc == 0x28E928u) {
        ctx->pc = 0x28E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E924u;
        // 0x28e928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E92Cu;
        goto label_28e92c;
    }
    ctx->pc = 0x28E924u;
    {
        const bool branch_taken_0x28e924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E924u;
        // 0x28e928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e924) {
            ctx->pc = 0x28E938u;
            goto label_28e938;
        }
    }
    ctx->pc = 0x28E92Cu;
label_28e92c:
    // 0x28e92c: 0x928202d3  lbu         $v0, 0x2D3($s4)
    ctx->pc = 0x28e92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 723)));
label_28e930:
    // 0x28e930: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_28e934:
    if (ctx->pc == 0x28E934u) {
        ctx->pc = 0x28E938u;
        goto label_28e938;
    }
    ctx->pc = 0x28E930u;
    {
        const bool branch_taken_0x28e930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e930) {
            ctx->pc = 0x28E964u;
            goto label_28e964;
        }
    }
    ctx->pc = 0x28E938u;
label_28e938:
    // 0x28e938: 0xc088fa8  jal         func_223EA0
label_28e93c:
    if (ctx->pc == 0x28E93Cu) {
        ctx->pc = 0x28E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E938u;
        // 0x28e93c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E940u;
        goto label_28e940;
    }
    ctx->pc = 0x28E938u;
    SET_GPR_U32(ctx, 31, 0x28E940u);
    ctx->pc = 0x28E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E938u;
    // 0x28e93c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x28E938u, 0x28E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E940u;
label_28e940:
    // 0x28e940: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_28e944:
    if (ctx->pc == 0x28E944u) {
        ctx->pc = 0x28E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E940u;
        // 0x28e944: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E948u;
        goto label_28e948;
    }
    ctx->pc = 0x28E940u;
    {
        const bool branch_taken_0x28e940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E940u;
        // 0x28e944: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e940) {
            ctx->pc = 0x28E95Cu;
            goto label_28e95c;
        }
    }
    ctx->pc = 0x28E948u;
label_28e948:
    // 0x28e948: 0xc089000  jal         func_224000
label_28e94c:
    if (ctx->pc == 0x28E94Cu) {
        ctx->pc = 0x28E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E948u;
        // 0x28e94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E950u;
        goto label_28e950;
    }
    ctx->pc = 0x28E948u;
    SET_GPR_U32(ctx, 31, 0x28E950u);
    ctx->pc = 0x28E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E948u;
    // 0x28e94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x28E948u, 0x28E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E950u;
label_28e950:
    // 0x28e950: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_28e954:
    if (ctx->pc == 0x28E954u) {
        ctx->pc = 0x28E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E950u;
        // 0x28e954: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E958u;
        goto label_28e958;
    }
    ctx->pc = 0x28E950u;
    {
        const bool branch_taken_0x28e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E950u;
        // 0x28e954: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e950) {
            ctx->pc = 0x28E95Cu;
            goto label_28e95c;
        }
    }
    ctx->pc = 0x28E958u;
label_28e958:
    // 0x28e958: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28e958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e95c:
    // 0x28e95c: 0x1000013a  b           . + 4 + (0x13A << 2)
label_28e960:
    if (ctx->pc == 0x28E960u) {
        ctx->pc = 0x28E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E95Cu;
        // 0x28e960: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E964u;
        goto label_28e964;
    }
    ctx->pc = 0x28E95Cu;
    {
        const bool branch_taken_0x28e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E95Cu;
        // 0x28e960: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e95c) {
            ctx->pc = 0x28EE48u;
            goto label_28ee48;
        }
    }
    ctx->pc = 0x28E964u;
label_28e964:
    // 0x28e964: 0xc08a200  jal         func_228800
label_28e968:
    if (ctx->pc == 0x28E968u) {
        ctx->pc = 0x28E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E964u;
        // 0x28e968: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E96Cu;
        goto label_28e96c;
    }
    ctx->pc = 0x28E964u;
    SET_GPR_U32(ctx, 31, 0x28E96Cu);
    ctx->pc = 0x28E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E964u;
    // 0x28e968: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28E964u, 0x28E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E96Cu;
label_28e96c:
    // 0x28e96c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x28e96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_28e970:
    // 0x28e970: 0x2462fff7  addiu       $v0, $v1, -0x9
    ctx->pc = 0x28e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
label_28e974:
    // 0x28e974: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28e974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28e978:
    // 0x28e978: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_28e97c:
    if (ctx->pc == 0x28E97Cu) {
        ctx->pc = 0x28E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E978u;
        // 0x28e97c: 0xafa001b4  sw          $zero, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E980u;
        goto label_28e980;
    }
    ctx->pc = 0x28E978u;
    {
        const bool branch_taken_0x28e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e978) {
            ctx->pc = 0x28E97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E978u;
            // 0x28e97c: 0xafa001b4  sw          $zero, 0x1B4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E990u;
            goto label_28e990;
        }
    }
    ctx->pc = 0x28E980u;
label_28e980:
    // 0x28e980: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x28e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_28e984:
    // 0x28e984: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_28e988:
    if (ctx->pc == 0x28E988u) {
        ctx->pc = 0x28E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E984u;
        // 0x28e988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E98Cu;
        goto label_28e98c;
    }
    ctx->pc = 0x28E984u;
    {
        const bool branch_taken_0x28e984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E984u;
        // 0x28e988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e984) {
            ctx->pc = 0x28E998u;
            goto label_28e998;
        }
    }
    ctx->pc = 0x28E98Cu;
label_28e98c:
    // 0x28e98c: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x28e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
label_28e990:
    // 0x28e990: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28e990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e994:
    // 0x28e994: 0x0  nop
    ctx->pc = 0x28e994u;
    // NOP
label_28e998:
    // 0x28e998: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x28e998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_28e99c:
    // 0x28e99c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28e9a0:
    // 0x28e9a0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x28e9a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_28e9a4:
    // 0x28e9a4: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
label_28e9a8:
    if (ctx->pc == 0x28E9A8u) {
        ctx->pc = 0x28E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9A4u;
        // 0x28e9a8: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9ACu;
        goto label_28e9ac;
    }
    ctx->pc = 0x28E9A4u;
    {
        const bool branch_taken_0x28e9a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x28E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9A4u;
        // 0x28e9a8: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9a4) {
            ctx->pc = 0x28E9D4u;
            goto label_28e9d4;
        }
    }
    ctx->pc = 0x28E9ACu;
label_28e9ac:
    // 0x28e9ac: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_28e9b0:
    // 0x28e9b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28e9b4:
    // 0x28e9b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28e9b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28e9b8:
    // 0x28e9b8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28e9bc:
    // 0x28e9bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28e9c0:
    // 0x28e9c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28e9c4:
    // 0x28e9c4: 0xdc9efff8  ld          $fp, -0x8($a0)
    ctx->pc = 0x28e9c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_28e9c8:
    // 0x28e9c8: 0x1e383f  dsra32      $a3, $fp, 0
    ctx->pc = 0x28e9c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 30) >> (32 + 0));
label_28e9cc:
    // 0x28e9cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e9d0:
    if (ctx->pc == 0x28E9D0u) {
        ctx->pc = 0x28E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9CCu;
        // 0x28e9d0: 0x87a30000  lh          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9D4u;
        goto label_28e9d4;
    }
    ctx->pc = 0x28E9CCu;
    {
        const bool branch_taken_0x28e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9CCu;
        // 0x28e9d0: 0x87a30000  lh          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9cc) {
            ctx->pc = 0x28E9DCu;
            goto label_28e9dc;
        }
    }
    ctx->pc = 0x28E9D4u;
label_28e9d4:
    // 0x28e9d4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x28e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28e9d8:
    // 0x28e9d8: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x28e9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_28e9dc:
    // 0x28e9dc: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_28e9e0:
    if (ctx->pc == 0x28E9E0u) {
        ctx->pc = 0x28E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9DCu;
        // 0x28e9e0: 0x33c2ffff  andi        $v0, $fp, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9E4u;
        goto label_28e9e4;
    }
    ctx->pc = 0x28E9DCu;
    {
        const bool branch_taken_0x28e9dc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x28E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9DCu;
        // 0x28e9e0: 0x33c2ffff  andi        $v0, $fp, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9dc) {
            ctx->pc = 0x28E9F4u;
            goto label_28e9f4;
        }
    }
    ctx->pc = 0x28E9E4u;
label_28e9e4:
    // 0x28e9e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28e9e8:
    // 0x28e9e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28e9e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28e9ec:
    // 0x28e9ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_28e9f0:
    if (ctx->pc == 0x28E9F0u) {
        ctx->pc = 0x28E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9ECu;
        // 0x28e9f0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9F4u;
        goto label_28e9f4;
    }
    ctx->pc = 0x28E9ECu;
    {
        const bool branch_taken_0x28e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9ECu;
        // 0x28e9f0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9ec) {
            ctx->pc = 0x28E9F8u;
            goto label_28e9f8;
        }
    }
    ctx->pc = 0x28E9F4u;
label_28e9f4:
    // 0x28e9f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28e9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e9f8:
    // 0x28e9f8: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x28e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28e9fc:
    // 0x28e9fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28e9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28ea00:
    // 0x28ea00: 0xe0f809  jalr        $a3
label_28ea04:
    if (ctx->pc == 0x28EA04u) {
        ctx->pc = 0x28EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA00u;
        // 0x28ea04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA08u;
        goto label_28ea08;
    }
    ctx->pc = 0x28EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x28EA08u);
        ctx->pc = 0x28EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA00u;
        // 0x28ea04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA00u, 0x28EA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EA08u;
label_28ea08:
    // 0x28ea08: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
label_28ea0c:
    if (ctx->pc == 0x28EA0Cu) {
        ctx->pc = 0x28EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA08u;
        // 0x28ea0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA10u;
        goto label_28ea10;
    }
    ctx->pc = 0x28EA08u;
    {
        const bool branch_taken_0x28ea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA08u;
        // 0x28ea0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea08) {
            ctx->pc = 0x28EDCCu;
            goto label_28edcc;
        }
    }
    ctx->pc = 0x28EA10u;
label_28ea10:
    // 0x28ea10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ea14:
    // 0x28ea14: 0xc08a6d8  jal         func_229B60
label_28ea18:
    if (ctx->pc == 0x28EA18u) {
        ctx->pc = 0x28EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA14u;
        // 0x28ea18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA1Cu;
        goto label_28ea1c;
    }
    ctx->pc = 0x28EA14u;
    SET_GPR_U32(ctx, 31, 0x28EA1Cu);
    ctx->pc = 0x28EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA14u;
    // 0x28ea18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B60u, 0x28EA14u, 0x28EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA1Cu;
label_28ea1c:
    // 0x28ea1c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x28ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_28ea20:
    // 0x28ea20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_28ea24:
    if (ctx->pc == 0x28EA24u) {
        ctx->pc = 0x28EA28u;
        goto label_28ea28;
    }
    ctx->pc = 0x28EA20u;
    {
        const bool branch_taken_0x28ea20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ea20) {
            ctx->pc = 0x28EA34u;
            goto label_28ea34;
        }
    }
    ctx->pc = 0x28EA28u;
label_28ea28:
    // 0x28ea28: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_28ea2c:
    if (ctx->pc == 0x28EA2Cu) {
        ctx->pc = 0x28EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA28u;
        // 0x28ea2c: 0x3a420015  xori        $v0, $s2, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA30u;
        goto label_28ea30;
    }
    ctx->pc = 0x28EA28u;
    {
        const bool branch_taken_0x28ea28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA28u;
        // 0x28ea2c: 0x3a420015  xori        $v0, $s2, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea28) {
            ctx->pc = 0x28EA34u;
            goto label_28ea34;
        }
    }
    ctx->pc = 0x28EA30u;
label_28ea30:
    // 0x28ea30: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x28ea30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_28ea34:
    // 0x28ea34: 0x560000e6  bnel        $s0, $zero, . + 4 + (0xE6 << 2)
label_28ea38:
    if (ctx->pc == 0x28EA38u) {
        ctx->pc = 0x28EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA34u;
        // 0x28ea38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA3Cu;
        goto label_28ea3c;
    }
    ctx->pc = 0x28EA34u;
    {
        const bool branch_taken_0x28ea34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ea34) {
            ctx->pc = 0x28EA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EA34u;
            // 0x28ea38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EDD0u;
            goto label_28edd0;
        }
    }
    ctx->pc = 0x28EA3Cu;
label_28ea3c:
    // 0x28ea3c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x28ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_28ea40:
    // 0x28ea40: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_28ea44:
    if (ctx->pc == 0x28EA44u) {
        ctx->pc = 0x28EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA40u;
        // 0x28ea44: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA48u;
        goto label_28ea48;
    }
    ctx->pc = 0x28EA40u;
    {
        const bool branch_taken_0x28ea40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA40u;
        // 0x28ea44: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea40) {
            ctx->pc = 0x28EA78u;
            goto label_28ea78;
        }
    }
    ctx->pc = 0x28EA48u;
label_28ea48:
    // 0x28ea48: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
label_28ea4c:
    if (ctx->pc == 0x28EA4Cu) {
        ctx->pc = 0x28EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA48u;
        // 0x28ea4c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA50u;
        goto label_28ea50;
    }
    ctx->pc = 0x28EA48u;
    {
        const bool branch_taken_0x28ea48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA48u;
        // 0x28ea4c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea48) {
            ctx->pc = 0x28EA78u;
            goto label_28ea78;
        }
    }
    ctx->pc = 0x28EA50u;
label_28ea50:
    // 0x28ea50: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
label_28ea54:
    if (ctx->pc == 0x28EA54u) {
        ctx->pc = 0x28EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA50u;
        // 0x28ea54: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA58u;
        goto label_28ea58;
    }
    ctx->pc = 0x28EA50u;
    {
        const bool branch_taken_0x28ea50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA50u;
        // 0x28ea54: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea50) {
            ctx->pc = 0x28EA78u;
            goto label_28ea78;
        }
    }
    ctx->pc = 0x28EA58u;
label_28ea58:
    // 0x28ea58: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
label_28ea5c:
    if (ctx->pc == 0x28EA5Cu) {
        ctx->pc = 0x28EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA58u;
        // 0x28ea5c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA60u;
        goto label_28ea60;
    }
    ctx->pc = 0x28EA58u;
    {
        const bool branch_taken_0x28ea58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA58u;
        // 0x28ea5c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea58) {
            ctx->pc = 0x28EA78u;
            goto label_28ea78;
        }
    }
    ctx->pc = 0x28EA60u;
label_28ea60:
    // 0x28ea60: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_28ea64:
    if (ctx->pc == 0x28EA64u) {
        ctx->pc = 0x28EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA60u;
        // 0x28ea64: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA68u;
        goto label_28ea68;
    }
    ctx->pc = 0x28EA60u;
    {
        const bool branch_taken_0x28ea60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA60u;
        // 0x28ea64: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea60) {
            ctx->pc = 0x28EA78u;
            goto label_28ea78;
        }
    }
    ctx->pc = 0x28EA68u;
label_28ea68:
    // 0x28ea68: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_28ea6c:
    if (ctx->pc == 0x28EA6Cu) {
        ctx->pc = 0x28EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA68u;
        // 0x28ea6c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA70u;
        goto label_28ea70;
    }
    ctx->pc = 0x28EA68u;
    {
        const bool branch_taken_0x28ea68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA68u;
        // 0x28ea6c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea68) {
            ctx->pc = 0x28EA78u;
            goto label_28ea78;
        }
    }
    ctx->pc = 0x28EA70u;
label_28ea70:
    // 0x28ea70: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_28ea74:
    if (ctx->pc == 0x28EA74u) {
        ctx->pc = 0x28EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA70u;
        // 0x28ea74: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA78u;
        goto label_28ea78;
    }
    ctx->pc = 0x28EA70u;
    {
        const bool branch_taken_0x28ea70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA70u;
        // 0x28ea74: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea70) {
            ctx->pc = 0x28EAA4u;
            goto label_28eaa4;
        }
    }
    ctx->pc = 0x28EA78u;
label_28ea78:
    // 0x28ea78: 0xc088bfe  jal         func_222FF8
label_28ea7c:
    if (ctx->pc == 0x28EA7Cu) {
        ctx->pc = 0x28EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA78u;
        // 0x28ea7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA80u;
        goto label_28ea80;
    }
    ctx->pc = 0x28EA78u;
    SET_GPR_U32(ctx, 31, 0x28EA80u);
    ctx->pc = 0x28EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA78u;
    // 0x28ea7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x28EA78u, 0x28EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA80u;
label_28ea80:
    // 0x28ea80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ea80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ea84:
    // 0x28ea84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ea88:
    // 0x28ea88: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_28ea8c:
    if (ctx->pc == 0x28EA8Cu) {
        ctx->pc = 0x28EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA88u;
        // 0x28ea8c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA90u;
        goto label_28ea90;
    }
    ctx->pc = 0x28EA88u;
    {
        const bool branch_taken_0x28ea88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA88u;
        // 0x28ea8c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea88) {
            ctx->pc = 0x28EAA4u;
            goto label_28eaa4;
        }
    }
    ctx->pc = 0x28EA90u;
label_28ea90:
    // 0x28ea90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ea94:
    // 0x28ea94: 0xc0a43aa  jal         func_290EA8
label_28ea98:
    if (ctx->pc == 0x28EA98u) {
        ctx->pc = 0x28EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA94u;
        // 0x28ea98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA9Cu;
        goto label_28ea9c;
    }
    ctx->pc = 0x28EA94u;
    SET_GPR_U32(ctx, 31, 0x28EA9Cu);
    ctx->pc = 0x28EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA94u;
    // 0x28ea98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EA8u, 0x28EA94u, 0x28EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA9Cu;
label_28ea9c:
    // 0x28ea9c: 0x105000cb  beq         $v0, $s0, . + 4 + (0xCB << 2)
label_28eaa0:
    if (ctx->pc == 0x28EAA0u) {
        ctx->pc = 0x28EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA9Cu;
        // 0x28eaa0: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAA4u;
        goto label_28eaa4;
    }
    ctx->pc = 0x28EA9Cu;
    {
        const bool branch_taken_0x28ea9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA9Cu;
        // 0x28eaa0: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea9c) {
            ctx->pc = 0x28EDCCu;
            goto label_28edcc;
        }
    }
    ctx->pc = 0x28EAA4u;
label_28eaa4:
    // 0x28eaa4: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x28eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_28eaa8:
    // 0x28eaa8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x28eaa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28eaac:
    // 0x28eaac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28eaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28eab0:
    // 0x28eab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28eab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28eab4:
    // 0x28eab4: 0xc0a447e  jal         func_2911F8
label_28eab8:
    if (ctx->pc == 0x28EAB8u) {
        ctx->pc = 0x28EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAB4u;
        // 0x28eab8: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EABCu;
        goto label_28eabc;
    }
    ctx->pc = 0x28EAB4u;
    SET_GPR_U32(ctx, 31, 0x28EABCu);
    ctx->pc = 0x28EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EAB4u;
    // 0x28eab8: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911F8u, 0x28EAB4u, 0x28EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EABCu;
label_28eabc:
    // 0x28eabc: 0x269001a4  addiu       $s0, $s4, 0x1A4
    ctx->pc = 0x28eabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 420));
label_28eac0:
    // 0x28eac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28eac4:
    // 0x28eac4: 0xc136b80  jal         func_4DAE00
label_28eac8:
    if (ctx->pc == 0x28EAC8u) {
        ctx->pc = 0x28EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAC4u;
        // 0x28eac8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EACCu;
        goto label_28eacc;
    }
    ctx->pc = 0x28EAC4u;
    SET_GPR_U32(ctx, 31, 0x28EACCu);
    ctx->pc = 0x28EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EAC4u;
    // 0x28eac8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28EAC4u, 0x28EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EACCu;
label_28eacc:
    // 0x28eacc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28eaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28ead0:
    // 0x28ead0: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_28ead4:
    if (ctx->pc == 0x28EAD4u) {
        ctx->pc = 0x28EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAD0u;
        // 0x28ead4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAD8u;
        goto label_28ead8;
    }
    ctx->pc = 0x28EAD0u;
    {
        const bool branch_taken_0x28ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAD0u;
        // 0x28ead4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ead0) {
            ctx->pc = 0x28EC9Cu;
            goto label_28ec9c;
        }
    }
    ctx->pc = 0x28EAD8u;
label_28ead8:
    // 0x28ead8: 0x2643fff6  addiu       $v1, $s2, -0xA
    ctx->pc = 0x28ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967286));
label_28eadc:
    // 0x28eadc: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x28eadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
label_28eae0:
    // 0x28eae0: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_28eae4:
    if (ctx->pc == 0x28EAE4u) {
        ctx->pc = 0x28EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAE0u;
        // 0x28eae4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAE8u;
        goto label_28eae8;
    }
    ctx->pc = 0x28EAE0u;
    {
        const bool branch_taken_0x28eae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAE0u;
        // 0x28eae4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eae0) {
            ctx->pc = 0x28EC9Cu;
            goto label_28ec9c;
        }
    }
    ctx->pc = 0x28EAE8u;
label_28eae8:
    // 0x28eae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28eaec:
    // 0x28eaec: 0x2442ff70  addiu       $v0, $v0, -0x90
    ctx->pc = 0x28eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967152));
label_28eaf0:
    // 0x28eaf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28eaf4:
    // 0x28eaf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28eaf8:
    // 0x28eaf8: 0x800008  jr          $a0
label_28eafc:
    if (ctx->pc == 0x28EAFCu) {
        ctx->pc = 0x28EB00u;
        goto label_28eb00;
    }
    ctx->pc = 0x28EAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28EB00u: goto label_28eb00;
            case 0x28EBD0u: goto label_28ebd0;
            case 0x28EC9Cu: goto label_28ec9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28EB00u;
label_28eb00:
    // 0x28eb00: 0xc136b80  jal         func_4DAE00
label_28eb04:
    if (ctx->pc == 0x28EB04u) {
        ctx->pc = 0x28EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB00u;
        // 0x28eb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB08u;
        goto label_28eb08;
    }
    ctx->pc = 0x28EB00u;
    SET_GPR_U32(ctx, 31, 0x28EB08u);
    ctx->pc = 0x28EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB00u;
    // 0x28eb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28EB00u, 0x28EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB08u;
label_28eb08:
    // 0x28eb08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28eb0c:
    if (ctx->pc == 0x28EB0Cu) {
        ctx->pc = 0x28EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB08u;
        // 0x28eb0c: 0x8e8401e4  lw          $a0, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB10u;
        goto label_28eb10;
    }
    ctx->pc = 0x28EB08u;
    {
        const bool branch_taken_0x28eb08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB08u;
        // 0x28eb0c: 0x8e8401e4  lw          $a0, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb08) {
            ctx->pc = 0x28EB24u;
            goto label_28eb24;
        }
    }
    ctx->pc = 0x28EB10u;
label_28eb10:
    // 0x28eb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28eb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28eb14:
    // 0x28eb14: 0x0  nop
    ctx->pc = 0x28eb14u;
    // NOP
label_28eb18:
    // 0x28eb18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28eb18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28eb1c:
    // 0x28eb1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_28eb20:
    if (ctx->pc == 0x28EB20u) {
        ctx->pc = 0x28EB24u;
        goto label_28eb24;
    }
    ctx->pc = 0x28EB1Cu;
    {
        const bool branch_taken_0x28eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb1c) {
            ctx->pc = 0x28EB40u;
            goto label_28eb40;
        }
    }
    ctx->pc = 0x28EB24u;
label_28eb24:
    // 0x28eb24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28eb28:
    // 0x28eb28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28eb2c:
    // 0x28eb2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28eb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28eb30:
    // 0x28eb30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28eb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28eb34:
    // 0x28eb34: 0x0  nop
    ctx->pc = 0x28eb34u;
    // NOP
label_28eb38:
    // 0x28eb38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28eb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28eb3c:
    // 0x28eb3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28eb3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28eb40:
    // 0x28eb40: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_28eb44:
    if (ctx->pc == 0x28EB44u) {
        ctx->pc = 0x28EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB40u;
        // 0x28eb44: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB48u;
        goto label_28eb48;
    }
    ctx->pc = 0x28EB40u;
    {
        const bool branch_taken_0x28eb40 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB40u;
        // 0x28eb44: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb40) {
            ctx->pc = 0x28EB5Cu;
            goto label_28eb5c;
        }
    }
    ctx->pc = 0x28EB48u;
label_28eb48:
    // 0x28eb48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28eb48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28eb4c:
    // 0x28eb4c: 0x0  nop
    ctx->pc = 0x28eb4cu;
    // NOP
label_28eb50:
    // 0x28eb50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28eb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28eb54:
    // 0x28eb54: 0x10000008  b           . + 4 + (0x8 << 2)
label_28eb58:
    if (ctx->pc == 0x28EB58u) {
        ctx->pc = 0x28EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB54u;
        // 0x28eb58: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB5Cu;
        goto label_28eb5c;
    }
    ctx->pc = 0x28EB54u;
    {
        const bool branch_taken_0x28eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB54u;
        // 0x28eb58: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb54) {
            ctx->pc = 0x28EB78u;
            goto label_28eb78;
        }
    }
    ctx->pc = 0x28EB5Cu;
label_28eb5c:
    // 0x28eb5c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_28eb60:
    // 0x28eb60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28eb64:
    // 0x28eb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28eb68:
    // 0x28eb68: 0x0  nop
    ctx->pc = 0x28eb68u;
    // NOP
label_28eb6c:
    // 0x28eb6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28eb6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28eb70:
    // 0x28eb70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28eb70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28eb74:
    // 0x28eb74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28eb78:
    // 0x28eb78: 0x0  nop
    ctx->pc = 0x28eb78u;
    // NOP
label_28eb7c:
    // 0x28eb7c: 0x0  nop
    ctx->pc = 0x28eb7cu;
    // NOP
label_28eb80:
    // 0x28eb80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x28eb80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_28eb84:
    // 0x28eb84: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28eb88:
    if (ctx->pc == 0x28EB88u) {
        ctx->pc = 0x28EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB84u;
        // 0x28eb88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB8Cu;
        goto label_28eb8c;
    }
    ctx->pc = 0x28EB84u;
    {
        const bool branch_taken_0x28eb84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB84u;
        // 0x28eb88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb84) {
            ctx->pc = 0x28EBA0u;
            goto label_28eba0;
        }
    }
    ctx->pc = 0x28EB8Cu;
label_28eb8c:
    // 0x28eb8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28eb90:
    // 0x28eb90: 0x0  nop
    ctx->pc = 0x28eb90u;
    // NOP
label_28eb94:
    // 0x28eb94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28eb94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28eb98:
    // 0x28eb98: 0x10000007  b           . + 4 + (0x7 << 2)
label_28eb9c:
    if (ctx->pc == 0x28EB9Cu) {
        ctx->pc = 0x28EBA0u;
        goto label_28eba0;
    }
    ctx->pc = 0x28EB98u;
    {
        const bool branch_taken_0x28eb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb98) {
            ctx->pc = 0x28EBB8u;
            goto label_28ebb8;
        }
    }
    ctx->pc = 0x28EBA0u;
label_28eba0:
    // 0x28eba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28eba4:
    // 0x28eba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28eba8:
    // 0x28eba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ebac:
    // 0x28ebac: 0x0  nop
    ctx->pc = 0x28ebacu;
    // NOP
label_28ebb0:
    // 0x28ebb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ebb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ebb4:
    // 0x28ebb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ebb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ebb8:
    // 0x28ebb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ebb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28ebbc:
    // 0x28ebbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28ebbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28ebc0:
    // 0x28ebc0: 0x0  nop
    ctx->pc = 0x28ebc0u;
    // NOP
label_28ebc4:
    // 0x28ebc4: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x28ebc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_28ebc8:
    // 0x28ebc8: 0x10000031  b           . + 4 + (0x31 << 2)
label_28ebcc:
    if (ctx->pc == 0x28EBCCu) {
        ctx->pc = 0x28EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBC8u;
        // 0x28ebcc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBD0u;
        goto label_28ebd0;
    }
    ctx->pc = 0x28EBC8u;
    {
        const bool branch_taken_0x28ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBC8u;
        // 0x28ebcc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebc8) {
            ctx->pc = 0x28EC90u;
            goto label_28ec90;
        }
    }
    ctx->pc = 0x28EBD0u;
label_28ebd0:
    // 0x28ebd0: 0xc136b80  jal         func_4DAE00
label_28ebd4:
    if (ctx->pc == 0x28EBD4u) {
        ctx->pc = 0x28EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBD0u;
        // 0x28ebd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBD8u;
        goto label_28ebd8;
    }
    ctx->pc = 0x28EBD0u;
    SET_GPR_U32(ctx, 31, 0x28EBD8u);
    ctx->pc = 0x28EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBD0u;
    // 0x28ebd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28EBD0u, 0x28EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBD8u;
label_28ebd8:
    // 0x28ebd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28ebdc:
    if (ctx->pc == 0x28EBDCu) {
        ctx->pc = 0x28EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBD8u;
        // 0x28ebdc: 0x8e8401e4  lw          $a0, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBE0u;
        goto label_28ebe0;
    }
    ctx->pc = 0x28EBD8u;
    {
        const bool branch_taken_0x28ebd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBD8u;
        // 0x28ebdc: 0x8e8401e4  lw          $a0, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebd8) {
            ctx->pc = 0x28EBF4u;
            goto label_28ebf4;
        }
    }
    ctx->pc = 0x28EBE0u;
label_28ebe0:
    // 0x28ebe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ebe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ebe4:
    // 0x28ebe4: 0x0  nop
    ctx->pc = 0x28ebe4u;
    // NOP
label_28ebe8:
    // 0x28ebe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ebe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ebec:
    // 0x28ebec: 0x10000008  b           . + 4 + (0x8 << 2)
label_28ebf0:
    if (ctx->pc == 0x28EBF0u) {
        ctx->pc = 0x28EBF4u;
        goto label_28ebf4;
    }
    ctx->pc = 0x28EBECu;
    {
        const bool branch_taken_0x28ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ebec) {
            ctx->pc = 0x28EC10u;
            goto label_28ec10;
        }
    }
    ctx->pc = 0x28EBF4u;
label_28ebf4:
    // 0x28ebf4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28ebf8:
    // 0x28ebf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ebf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28ebfc:
    // 0x28ebfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28ec00:
    // 0x28ec00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ec04:
    // 0x28ec04: 0x0  nop
    ctx->pc = 0x28ec04u;
    // NOP
label_28ec08:
    // 0x28ec08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ec08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ec0c:
    // 0x28ec0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ec0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ec10:
    // 0x28ec10: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_28ec14:
    if (ctx->pc == 0x28EC14u) {
        ctx->pc = 0x28EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC10u;
        // 0x28ec14: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC18u;
        goto label_28ec18;
    }
    ctx->pc = 0x28EC10u;
    {
        const bool branch_taken_0x28ec10 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC10u;
        // 0x28ec14: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec10) {
            ctx->pc = 0x28EC2Cu;
            goto label_28ec2c;
        }
    }
    ctx->pc = 0x28EC18u;
label_28ec18:
    // 0x28ec18: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x28ec18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28ec1c:
    // 0x28ec1c: 0x0  nop
    ctx->pc = 0x28ec1cu;
    // NOP
label_28ec20:
    // 0x28ec20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x28ec20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_28ec24:
    // 0x28ec24: 0x10000008  b           . + 4 + (0x8 << 2)
label_28ec28:
    if (ctx->pc == 0x28EC28u) {
        ctx->pc = 0x28EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC24u;
        // 0x28ec28: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC2Cu;
        goto label_28ec2c;
    }
    ctx->pc = 0x28EC24u;
    {
        const bool branch_taken_0x28ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC24u;
        // 0x28ec28: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec24) {
            ctx->pc = 0x28EC48u;
            goto label_28ec48;
        }
    }
    ctx->pc = 0x28EC2Cu;
label_28ec2c:
    // 0x28ec2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28ec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_28ec30:
    // 0x28ec30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28ec34:
    // 0x28ec34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28ec34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28ec38:
    // 0x28ec38: 0x0  nop
    ctx->pc = 0x28ec38u;
    // NOP
label_28ec3c:
    // 0x28ec3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x28ec3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_28ec40:
    // 0x28ec40: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x28ec40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_28ec44:
    // 0x28ec44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28ec48:
    // 0x28ec48: 0x0  nop
    ctx->pc = 0x28ec48u;
    // NOP
label_28ec4c:
    // 0x28ec4c: 0x0  nop
    ctx->pc = 0x28ec4cu;
    // NOP
label_28ec50:
    // 0x28ec50: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x28ec50u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_28ec54:
    // 0x28ec54: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28ec58:
    if (ctx->pc == 0x28EC58u) {
        ctx->pc = 0x28EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC54u;
        // 0x28ec58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC5Cu;
        goto label_28ec5c;
    }
    ctx->pc = 0x28EC54u;
    {
        const bool branch_taken_0x28ec54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC54u;
        // 0x28ec58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec54) {
            ctx->pc = 0x28EC70u;
            goto label_28ec70;
        }
    }
    ctx->pc = 0x28EC5Cu;
label_28ec5c:
    // 0x28ec5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ec60:
    // 0x28ec60: 0x0  nop
    ctx->pc = 0x28ec60u;
    // NOP
label_28ec64:
    // 0x28ec64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ec64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ec68:
    // 0x28ec68: 0x10000008  b           . + 4 + (0x8 << 2)
label_28ec6c:
    if (ctx->pc == 0x28EC6Cu) {
        ctx->pc = 0x28EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC68u;
        // 0x28ec6c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC70u;
        goto label_28ec70;
    }
    ctx->pc = 0x28EC68u;
    {
        const bool branch_taken_0x28ec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC68u;
        // 0x28ec6c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec68) {
            ctx->pc = 0x28EC8Cu;
            goto label_28ec8c;
        }
    }
    ctx->pc = 0x28EC70u;
label_28ec70:
    // 0x28ec70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28ec74:
    // 0x28ec74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ec74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28ec78:
    // 0x28ec78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ec7c:
    // 0x28ec7c: 0x0  nop
    ctx->pc = 0x28ec7cu;
    // NOP
label_28ec80:
    // 0x28ec80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ec80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ec84:
    // 0x28ec84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ec84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ec88:
    // 0x28ec88: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x28ec88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_28ec8c:
    // 0x28ec8c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x28ec8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_28ec90:
    // 0x28ec90: 0xc10b1c6  jal         func_42C718
label_28ec94:
    if (ctx->pc == 0x28EC94u) {
        ctx->pc = 0x28EC98u;
        goto label_28ec98;
    }
    ctx->pc = 0x28EC90u;
    SET_GPR_U32(ctx, 31, 0x28EC98u);
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x28EC90u, 0x28EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC98u;
label_28ec98:
    // 0x28ec98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28ec9c:
    // 0x28ec9c: 0x2ee20002  sltiu       $v0, $s7, 0x2
    ctx->pc = 0x28ec9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28eca0:
    // 0x28eca0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_28eca4:
    if (ctx->pc == 0x28ECA4u) {
        ctx->pc = 0x28ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECA0u;
        // 0x28eca4: 0x8fa201a4  lw          $v0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECA8u;
        goto label_28eca8;
    }
    ctx->pc = 0x28ECA0u;
    {
        const bool branch_taken_0x28eca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECA0u;
        // 0x28eca4: 0x8fa201a4  lw          $v0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eca0) {
            ctx->pc = 0x28ED00u;
            goto label_28ed00;
        }
    }
    ctx->pc = 0x28ECA8u;
label_28eca8:
    // 0x28eca8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x28eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_28ecac:
    // 0x28ecac: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
label_28ecb0:
    if (ctx->pc == 0x28ECB0u) {
        ctx->pc = 0x28ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECACu;
        // 0x28ecb0: 0x8fa201a4  lw          $v0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECB4u;
        goto label_28ecb4;
    }
    ctx->pc = 0x28ECACu;
    {
        const bool branch_taken_0x28ecac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x28ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECACu;
        // 0x28ecb0: 0x8fa201a4  lw          $v0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecac) {
            ctx->pc = 0x28ED00u;
            goto label_28ed00;
        }
    }
    ctx->pc = 0x28ECB4u;
label_28ecb4:
    // 0x28ecb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28ecb8:
    // 0x28ecb8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28ecbc:
    if (ctx->pc == 0x28ECBCu) {
        ctx->pc = 0x28ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECB8u;
        // 0x28ecbc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECC0u;
        goto label_28ecc0;
    }
    ctx->pc = 0x28ECB8u;
    {
        const bool branch_taken_0x28ecb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECB8u;
        // 0x28ecbc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecb8) {
            ctx->pc = 0x28ECD4u;
            goto label_28ecd4;
        }
    }
    ctx->pc = 0x28ECC0u;
label_28ecc0:
    // 0x28ecc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ecc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ecc4:
    // 0x28ecc4: 0x0  nop
    ctx->pc = 0x28ecc4u;
    // NOP
label_28ecc8:
    // 0x28ecc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ecc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28eccc:
    // 0x28eccc: 0x10000008  b           . + 4 + (0x8 << 2)
label_28ecd0:
    if (ctx->pc == 0x28ECD0u) {
        ctx->pc = 0x28ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECCCu;
        // 0x28ecd0: 0x4600b302  mul.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECD4u;
        goto label_28ecd4;
    }
    ctx->pc = 0x28ECCCu;
    {
        const bool branch_taken_0x28eccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECCCu;
        // 0x28ecd0: 0x4600b302  mul.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eccc) {
            ctx->pc = 0x28ECF0u;
            goto label_28ecf0;
        }
    }
    ctx->pc = 0x28ECD4u;
label_28ecd4:
    // 0x28ecd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ecd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28ecd8:
    // 0x28ecd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ecd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28ecdc:
    // 0x28ecdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ecdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ece0:
    // 0x28ece0: 0x0  nop
    ctx->pc = 0x28ece0u;
    // NOP
label_28ece4:
    // 0x28ece4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ece4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ece8:
    // 0x28ece8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ece8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ecec:
    // 0x28ecec: 0x4600b302  mul.s       $f12, $f22, $f0
    ctx->pc = 0x28ececu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_28ecf0:
    // 0x28ecf0: 0xc10b1c6  jal         func_42C718
label_28ecf4:
    if (ctx->pc == 0x28ECF4u) {
        ctx->pc = 0x28ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECF0u;
        // 0x28ecf4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ECF8u;
        goto label_28ecf8;
    }
    ctx->pc = 0x28ECF0u;
    SET_GPR_U32(ctx, 31, 0x28ECF8u);
    ctx->pc = 0x28ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ECF0u;
    // 0x28ecf4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x28ECF0u, 0x28ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ECF8u;
label_28ecf8:
    // 0x28ecf8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28ecfc:
    // 0x28ecfc: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x28ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_28ed00:
    // 0x28ed00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_28ed04:
    if (ctx->pc == 0x28ED04u) {
        ctx->pc = 0x28ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED00u;
        // 0x28ed04: 0x8fa201a8  lw          $v0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED08u;
        goto label_28ed08;
    }
    ctx->pc = 0x28ED00u;
    {
        const bool branch_taken_0x28ed00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED00u;
        // 0x28ed04: 0x8fa201a8  lw          $v0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed00) {
            ctx->pc = 0x28ED3Cu;
            goto label_28ed3c;
        }
    }
    ctx->pc = 0x28ED08u;
label_28ed08:
    // 0x28ed08: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_28ed0c:
    if (ctx->pc == 0x28ED0Cu) {
        ctx->pc = 0x28ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED08u;
        // 0x28ed0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED10u;
        goto label_28ed10;
    }
    ctx->pc = 0x28ED08u;
    {
        const bool branch_taken_0x28ed08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x28ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED08u;
        // 0x28ed0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed08) {
            ctx->pc = 0x28ED24u;
            goto label_28ed24;
        }
    }
    ctx->pc = 0x28ED10u;
label_28ed10:
    // 0x28ed10: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x28ed10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_28ed14:
    // 0x28ed14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28ed18:
    if (ctx->pc == 0x28ED18u) {
        ctx->pc = 0x28ED1Cu;
        goto label_28ed1c;
    }
    ctx->pc = 0x28ED14u;
    {
        const bool branch_taken_0x28ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed14) {
            ctx->pc = 0x28ED24u;
            goto label_28ed24;
        }
    }
    ctx->pc = 0x28ED1Cu;
label_28ed1c:
    // 0x28ed1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28ed20:
    // 0x28ed20: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x28ed20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28ed24:
    // 0x28ed24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28ed28:
    if (ctx->pc == 0x28ED28u) {
        ctx->pc = 0x28ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED24u;
        // 0x28ed28: 0x8fa301b4  lw          $v1, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED2Cu;
        goto label_28ed2c;
    }
    ctx->pc = 0x28ED24u;
    {
        const bool branch_taken_0x28ed24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED24u;
        // 0x28ed28: 0x8fa301b4  lw          $v1, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed24) {
            ctx->pc = 0x28ED38u;
            goto label_28ed38;
        }
    }
    ctx->pc = 0x28ED2Cu;
label_28ed2c:
    // 0x28ed2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28ed30:
    // 0x28ed30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28ed34:
    // 0x28ed34: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28ed38:
    // 0x28ed38: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x28ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_28ed3c:
    // 0x28ed3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_28ed40:
    if (ctx->pc == 0x28ED40u) {
        ctx->pc = 0x28ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED3Cu;
        // 0x28ed40: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED44u;
        goto label_28ed44;
    }
    ctx->pc = 0x28ED3Cu;
    {
        const bool branch_taken_0x28ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED3Cu;
        // 0x28ed40: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed3c) {
            ctx->pc = 0x28ED5Cu;
            goto label_28ed5c;
        }
    }
    ctx->pc = 0x28ED44u;
label_28ed44:
    // 0x28ed44: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_28ed48:
    if (ctx->pc == 0x28ED48u) {
        ctx->pc = 0x28ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED44u;
        // 0x28ed48: 0x8fa301ac  lw          $v1, 0x1AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED4Cu;
        goto label_28ed4c;
    }
    ctx->pc = 0x28ED44u;
    {
        const bool branch_taken_0x28ed44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x28ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED44u;
        // 0x28ed48: 0x8fa301ac  lw          $v1, 0x1AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed44) {
            ctx->pc = 0x28ED60u;
            goto label_28ed60;
        }
    }
    ctx->pc = 0x28ED4Cu;
label_28ed4c:
    // 0x28ed4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28ed50:
    // 0x28ed50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28ed54:
    if (ctx->pc == 0x28ED54u) {
        ctx->pc = 0x28ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED50u;
        // 0x28ed54: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED58u;
        goto label_28ed58;
    }
    ctx->pc = 0x28ED50u;
    {
        const bool branch_taken_0x28ed50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED50u;
        // 0x28ed54: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed50) {
            ctx->pc = 0x28ED60u;
            goto label_28ed60;
        }
    }
    ctx->pc = 0x28ED58u;
label_28ed58:
    // 0x28ed58: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28ed5c:
    // 0x28ed5c: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x28ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_28ed60:
    // 0x28ed60: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_28ed64:
    if (ctx->pc == 0x28ED64u) {
        ctx->pc = 0x28ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED60u;
        // 0x28ed64: 0x2a42000a  slti        $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED68u;
        goto label_28ed68;
    }
    ctx->pc = 0x28ED60u;
    {
        const bool branch_taken_0x28ed60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED60u;
        // 0x28ed64: 0x2a42000a  slti        $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed60) {
            ctx->pc = 0x28EDBCu;
            goto label_28edbc;
        }
    }
    ctx->pc = 0x28ED68u;
label_28ed68:
    // 0x28ed68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_28ed6c:
    if (ctx->pc == 0x28ED6Cu) {
        ctx->pc = 0x28ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED68u;
        // 0x28ed6c: 0x2a420006  slti        $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED70u;
        goto label_28ed70;
    }
    ctx->pc = 0x28ED68u;
    {
        const bool branch_taken_0x28ed68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED68u;
        // 0x28ed6c: 0x2a420006  slti        $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed68) {
            ctx->pc = 0x28EDBCu;
            goto label_28edbc;
        }
    }
    ctx->pc = 0x28ED70u;
label_28ed70:
    // 0x28ed70: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_28ed74:
    if (ctx->pc == 0x28ED74u) {
        ctx->pc = 0x28ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED70u;
        // 0x28ed74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED78u;
        goto label_28ed78;
    }
    ctx->pc = 0x28ED70u;
    {
        const bool branch_taken_0x28ed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED70u;
        // 0x28ed74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed70) {
            ctx->pc = 0x28EDC0u;
            goto label_28edc0;
        }
    }
    ctx->pc = 0x28ED78u;
label_28ed78:
    // 0x28ed78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28ed7c:
    if (ctx->pc == 0x28ED7Cu) {
        ctx->pc = 0x28ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED78u;
        // 0x28ed7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED80u;
        goto label_28ed80;
    }
    ctx->pc = 0x28ED78u;
    {
        const bool branch_taken_0x28ed78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED78u;
        // 0x28ed7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed78) {
            ctx->pc = 0x28ED94u;
            goto label_28ed94;
        }
    }
    ctx->pc = 0x28ED80u;
label_28ed80:
    // 0x28ed80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ed80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ed84:
    // 0x28ed84: 0x0  nop
    ctx->pc = 0x28ed84u;
    // NOP
label_28ed88:
    // 0x28ed88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ed88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ed8c:
    // 0x28ed8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_28ed90:
    if (ctx->pc == 0x28ED90u) {
        ctx->pc = 0x28ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED8Cu;
        // 0x28ed90: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ED94u;
        goto label_28ed94;
    }
    ctx->pc = 0x28ED8Cu;
    {
        const bool branch_taken_0x28ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED8Cu;
        // 0x28ed90: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed8c) {
            ctx->pc = 0x28EDB0u;
            goto label_28edb0;
        }
    }
    ctx->pc = 0x28ED94u;
label_28ed94:
    // 0x28ed94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28ed98:
    // 0x28ed98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28ed9c:
    // 0x28ed9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ed9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28eda0:
    // 0x28eda0: 0x0  nop
    ctx->pc = 0x28eda0u;
    // NOP
label_28eda4:
    // 0x28eda4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28eda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28eda8:
    // 0x28eda8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28eda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28edac:
    // 0x28edac: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x28edacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_28edb0:
    // 0x28edb0: 0xc10b1c6  jal         func_42C718
label_28edb4:
    if (ctx->pc == 0x28EDB4u) {
        ctx->pc = 0x28EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDB0u;
        // 0x28edb4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDB8u;
        goto label_28edb8;
    }
    ctx->pc = 0x28EDB0u;
    SET_GPR_U32(ctx, 31, 0x28EDB8u);
    ctx->pc = 0x28EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EDB0u;
    // 0x28edb4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x28EDB0u, 0x28EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDB8u;
label_28edb8:
    // 0x28edb8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28edbc:
    // 0x28edbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28edc0:
    // 0x28edc0: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x28edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_28edc4:
    // 0x28edc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28edc8:
    // 0x28edc8: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x28edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
label_28edcc:
    // 0x28edcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28edccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28edd0:
    // 0x28edd0: 0x2e42002d  sltiu       $v0, $s2, 0x2D
    ctx->pc = 0x28edd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
label_28edd4:
    // 0x28edd4: 0x1440fef1  bnez        $v0, . + 4 + (-0x10F << 2)
label_28edd8:
    if (ctx->pc == 0x28EDD8u) {
        ctx->pc = 0x28EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDD4u;
        // 0x28edd8: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDDCu;
        goto label_28eddc;
    }
    ctx->pc = 0x28EDD4u;
    {
        const bool branch_taken_0x28edd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDD4u;
        // 0x28edd8: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edd4) {
            ctx->pc = 0x28E99Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e99c;
        }
    }
    ctx->pc = 0x28EDDCu;
label_28eddc:
    // 0x28eddc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x28eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_28ede0:
    // 0x28ede0: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x28ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_28ede4:
    // 0x28ede4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x28ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_28ede8:
    // 0x28ede8: 0xc0cd4ee  jal         func_3353B8
label_28edec:
    if (ctx->pc == 0x28EDECu) {
        ctx->pc = 0x28EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDE8u;
        // 0x28edec: 0x2410002d  addiu       $s0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDF0u;
        goto label_28edf0;
    }
    ctx->pc = 0x28EDE8u;
    SET_GPR_U32(ctx, 31, 0x28EDF0u);
    ctx->pc = 0x28EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EDE8u;
    // 0x28edec: 0x2410002d  addiu       $s0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x28EDE8u, 0x28EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDF0u;
label_28edf0:
    // 0x28edf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28edf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28edf4:
    // 0x28edf4: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
label_28edf8:
    if (ctx->pc == 0x28EDF8u) {
        ctx->pc = 0x28EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDF4u;
        // 0x28edf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EDFCu;
        goto label_28edfc;
    }
    ctx->pc = 0x28EDF4u;
    {
        const bool branch_taken_0x28edf4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDF4u;
        // 0x28edf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edf4) {
            ctx->pc = 0x28EE44u;
            goto label_28ee44;
        }
    }
    ctx->pc = 0x28EDFCu;
label_28edfc:
    // 0x28edfc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x28edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28ee00:
    // 0x28ee00: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x28ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28ee04:
    // 0x28ee04: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x28ee04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_28ee08:
    // 0x28ee08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28ee0c:
    if (ctx->pc == 0x28EE0Cu) {
        ctx->pc = 0x28EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE08u;
        // 0x28ee0c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE10u;
        goto label_28ee10;
    }
    ctx->pc = 0x28EE08u;
    {
        const bool branch_taken_0x28ee08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE08u;
        // 0x28ee0c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee08) {
            ctx->pc = 0x28EE18u;
            goto label_28ee18;
        }
    }
    ctx->pc = 0x28EE10u;
label_28ee10:
    // 0x28ee10: 0x1000000c  b           . + 4 + (0xC << 2)
label_28ee14:
    if (ctx->pc == 0x28EE14u) {
        ctx->pc = 0x28EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE10u;
        // 0x28ee14: 0x8fb00030  lw          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE18u;
        goto label_28ee18;
    }
    ctx->pc = 0x28EE10u;
    {
        const bool branch_taken_0x28ee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE10u;
        // 0x28ee14: 0x8fb00030  lw          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee10) {
            ctx->pc = 0x28EE44u;
            goto label_28ee44;
        }
    }
    ctx->pc = 0x28EE18u;
label_28ee18:
    // 0x28ee18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28ee18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28ee1c:
    // 0x28ee1c: 0xd6102b  sltu        $v0, $a2, $s6
    ctx->pc = 0x28ee1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_28ee20:
    // 0x28ee20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28ee24:
    if (ctx->pc == 0x28EE24u) {
        ctx->pc = 0x28EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE20u;
        // 0x28ee24: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE28u;
        goto label_28ee28;
    }
    ctx->pc = 0x28EE20u;
    {
        const bool branch_taken_0x28ee20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE20u;
        // 0x28ee24: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee20) {
            ctx->pc = 0x28EE44u;
            goto label_28ee44;
        }
    }
    ctx->pc = 0x28EE28u;
label_28ee28:
    // 0x28ee28: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x28ee28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_28ee2c:
    // 0x28ee2c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x28ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_28ee30:
    // 0x28ee30: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28ee34:
    // 0x28ee34: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x28ee34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_28ee38:
    // 0x28ee38: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_28ee3c:
    if (ctx->pc == 0x28EE3Cu) {
        ctx->pc = 0x28EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE38u;
        // 0x28ee3c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE40u;
        goto label_28ee40;
    }
    ctx->pc = 0x28EE38u;
    {
        const bool branch_taken_0x28ee38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee38) {
            ctx->pc = 0x28EE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE38u;
            // 0x28ee3c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ee1c;
        }
    }
    ctx->pc = 0x28EE40u;
label_28ee40:
    // 0x28ee40: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x28ee40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28ee44:
    // 0x28ee44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28ee44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ee48:
    // 0x28ee48: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x28ee48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_28ee4c:
    // 0x28ee4c: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x28ee4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_28ee50:
    // 0x28ee50: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x28ee50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_28ee54:
    // 0x28ee54: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x28ee54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_28ee58:
    // 0x28ee58: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x28ee58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_28ee5c:
    // 0x28ee5c: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x28ee5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_28ee60:
    // 0x28ee60: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x28ee60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_28ee64:
    // 0x28ee64: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x28ee64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_28ee68:
    // 0x28ee68: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x28ee68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_28ee6c:
    // 0x28ee6c: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x28ee6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_28ee70:
    // 0x28ee70: 0xc7b60270  lwc1        $f22, 0x270($sp)
    ctx->pc = 0x28ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_28ee74:
    // 0x28ee74: 0xc7b50268  lwc1        $f21, 0x268($sp)
    ctx->pc = 0x28ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28ee78:
    // 0x28ee78: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x28ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28ee7c:
    // 0x28ee7c: 0x3e00008  jr          $ra
label_28ee80:
    if (ctx->pc == 0x28EE80u) {
        ctx->pc = 0x28EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE7Cu;
        // 0x28ee80: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EE84u;
        goto label_28ee84;
    }
    ctx->pc = 0x28EE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE7Cu;
        // 0x28ee80: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EE84u;
label_28ee84:
    // 0x28ee84: 0x0  nop
    ctx->pc = 0x28ee84u;
    // NOP
    ctx->pc = 0x28ee88u;
}
