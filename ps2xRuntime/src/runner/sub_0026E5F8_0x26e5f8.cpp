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

// Function: sub_0026E5F8
// Address: 0x26e5f8 - 0x26eba0
void sub_0026E5F8_0x26e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E5F8_0x26e5f8");
#endif

    switch (ctx->pc) {
        case 0x26e5f8u: goto label_26e5f8;
        case 0x26e5fcu: goto label_26e5fc;
        case 0x26e600u: goto label_26e600;
        case 0x26e604u: goto label_26e604;
        case 0x26e608u: goto label_26e608;
        case 0x26e60cu: goto label_26e60c;
        case 0x26e610u: goto label_26e610;
        case 0x26e614u: goto label_26e614;
        case 0x26e618u: goto label_26e618;
        case 0x26e61cu: goto label_26e61c;
        case 0x26e620u: goto label_26e620;
        case 0x26e624u: goto label_26e624;
        case 0x26e628u: goto label_26e628;
        case 0x26e62cu: goto label_26e62c;
        case 0x26e630u: goto label_26e630;
        case 0x26e634u: goto label_26e634;
        case 0x26e638u: goto label_26e638;
        case 0x26e63cu: goto label_26e63c;
        case 0x26e640u: goto label_26e640;
        case 0x26e644u: goto label_26e644;
        case 0x26e648u: goto label_26e648;
        case 0x26e64cu: goto label_26e64c;
        case 0x26e650u: goto label_26e650;
        case 0x26e654u: goto label_26e654;
        case 0x26e658u: goto label_26e658;
        case 0x26e65cu: goto label_26e65c;
        case 0x26e660u: goto label_26e660;
        case 0x26e664u: goto label_26e664;
        case 0x26e668u: goto label_26e668;
        case 0x26e66cu: goto label_26e66c;
        case 0x26e670u: goto label_26e670;
        case 0x26e674u: goto label_26e674;
        case 0x26e678u: goto label_26e678;
        case 0x26e67cu: goto label_26e67c;
        case 0x26e680u: goto label_26e680;
        case 0x26e684u: goto label_26e684;
        case 0x26e688u: goto label_26e688;
        case 0x26e68cu: goto label_26e68c;
        case 0x26e690u: goto label_26e690;
        case 0x26e694u: goto label_26e694;
        case 0x26e698u: goto label_26e698;
        case 0x26e69cu: goto label_26e69c;
        case 0x26e6a0u: goto label_26e6a0;
        case 0x26e6a4u: goto label_26e6a4;
        case 0x26e6a8u: goto label_26e6a8;
        case 0x26e6acu: goto label_26e6ac;
        case 0x26e6b0u: goto label_26e6b0;
        case 0x26e6b4u: goto label_26e6b4;
        case 0x26e6b8u: goto label_26e6b8;
        case 0x26e6bcu: goto label_26e6bc;
        case 0x26e6c0u: goto label_26e6c0;
        case 0x26e6c4u: goto label_26e6c4;
        case 0x26e6c8u: goto label_26e6c8;
        case 0x26e6ccu: goto label_26e6cc;
        case 0x26e6d0u: goto label_26e6d0;
        case 0x26e6d4u: goto label_26e6d4;
        case 0x26e6d8u: goto label_26e6d8;
        case 0x26e6dcu: goto label_26e6dc;
        case 0x26e6e0u: goto label_26e6e0;
        case 0x26e6e4u: goto label_26e6e4;
        case 0x26e6e8u: goto label_26e6e8;
        case 0x26e6ecu: goto label_26e6ec;
        case 0x26e6f0u: goto label_26e6f0;
        case 0x26e6f4u: goto label_26e6f4;
        case 0x26e6f8u: goto label_26e6f8;
        case 0x26e6fcu: goto label_26e6fc;
        case 0x26e700u: goto label_26e700;
        case 0x26e704u: goto label_26e704;
        case 0x26e708u: goto label_26e708;
        case 0x26e70cu: goto label_26e70c;
        case 0x26e710u: goto label_26e710;
        case 0x26e714u: goto label_26e714;
        case 0x26e718u: goto label_26e718;
        case 0x26e71cu: goto label_26e71c;
        case 0x26e720u: goto label_26e720;
        case 0x26e724u: goto label_26e724;
        case 0x26e728u: goto label_26e728;
        case 0x26e72cu: goto label_26e72c;
        case 0x26e730u: goto label_26e730;
        case 0x26e734u: goto label_26e734;
        case 0x26e738u: goto label_26e738;
        case 0x26e73cu: goto label_26e73c;
        case 0x26e740u: goto label_26e740;
        case 0x26e744u: goto label_26e744;
        case 0x26e748u: goto label_26e748;
        case 0x26e74cu: goto label_26e74c;
        case 0x26e750u: goto label_26e750;
        case 0x26e754u: goto label_26e754;
        case 0x26e758u: goto label_26e758;
        case 0x26e75cu: goto label_26e75c;
        case 0x26e760u: goto label_26e760;
        case 0x26e764u: goto label_26e764;
        case 0x26e768u: goto label_26e768;
        case 0x26e76cu: goto label_26e76c;
        case 0x26e770u: goto label_26e770;
        case 0x26e774u: goto label_26e774;
        case 0x26e778u: goto label_26e778;
        case 0x26e77cu: goto label_26e77c;
        case 0x26e780u: goto label_26e780;
        case 0x26e784u: goto label_26e784;
        case 0x26e788u: goto label_26e788;
        case 0x26e78cu: goto label_26e78c;
        case 0x26e790u: goto label_26e790;
        case 0x26e794u: goto label_26e794;
        case 0x26e798u: goto label_26e798;
        case 0x26e79cu: goto label_26e79c;
        case 0x26e7a0u: goto label_26e7a0;
        case 0x26e7a4u: goto label_26e7a4;
        case 0x26e7a8u: goto label_26e7a8;
        case 0x26e7acu: goto label_26e7ac;
        case 0x26e7b0u: goto label_26e7b0;
        case 0x26e7b4u: goto label_26e7b4;
        case 0x26e7b8u: goto label_26e7b8;
        case 0x26e7bcu: goto label_26e7bc;
        case 0x26e7c0u: goto label_26e7c0;
        case 0x26e7c4u: goto label_26e7c4;
        case 0x26e7c8u: goto label_26e7c8;
        case 0x26e7ccu: goto label_26e7cc;
        case 0x26e7d0u: goto label_26e7d0;
        case 0x26e7d4u: goto label_26e7d4;
        case 0x26e7d8u: goto label_26e7d8;
        case 0x26e7dcu: goto label_26e7dc;
        case 0x26e7e0u: goto label_26e7e0;
        case 0x26e7e4u: goto label_26e7e4;
        case 0x26e7e8u: goto label_26e7e8;
        case 0x26e7ecu: goto label_26e7ec;
        case 0x26e7f0u: goto label_26e7f0;
        case 0x26e7f4u: goto label_26e7f4;
        case 0x26e7f8u: goto label_26e7f8;
        case 0x26e7fcu: goto label_26e7fc;
        case 0x26e800u: goto label_26e800;
        case 0x26e804u: goto label_26e804;
        case 0x26e808u: goto label_26e808;
        case 0x26e80cu: goto label_26e80c;
        case 0x26e810u: goto label_26e810;
        case 0x26e814u: goto label_26e814;
        case 0x26e818u: goto label_26e818;
        case 0x26e81cu: goto label_26e81c;
        case 0x26e820u: goto label_26e820;
        case 0x26e824u: goto label_26e824;
        case 0x26e828u: goto label_26e828;
        case 0x26e82cu: goto label_26e82c;
        case 0x26e830u: goto label_26e830;
        case 0x26e834u: goto label_26e834;
        case 0x26e838u: goto label_26e838;
        case 0x26e83cu: goto label_26e83c;
        case 0x26e840u: goto label_26e840;
        case 0x26e844u: goto label_26e844;
        case 0x26e848u: goto label_26e848;
        case 0x26e84cu: goto label_26e84c;
        case 0x26e850u: goto label_26e850;
        case 0x26e854u: goto label_26e854;
        case 0x26e858u: goto label_26e858;
        case 0x26e85cu: goto label_26e85c;
        case 0x26e860u: goto label_26e860;
        case 0x26e864u: goto label_26e864;
        case 0x26e868u: goto label_26e868;
        case 0x26e86cu: goto label_26e86c;
        case 0x26e870u: goto label_26e870;
        case 0x26e874u: goto label_26e874;
        case 0x26e878u: goto label_26e878;
        case 0x26e87cu: goto label_26e87c;
        case 0x26e880u: goto label_26e880;
        case 0x26e884u: goto label_26e884;
        case 0x26e888u: goto label_26e888;
        case 0x26e88cu: goto label_26e88c;
        case 0x26e890u: goto label_26e890;
        case 0x26e894u: goto label_26e894;
        case 0x26e898u: goto label_26e898;
        case 0x26e89cu: goto label_26e89c;
        case 0x26e8a0u: goto label_26e8a0;
        case 0x26e8a4u: goto label_26e8a4;
        case 0x26e8a8u: goto label_26e8a8;
        case 0x26e8acu: goto label_26e8ac;
        case 0x26e8b0u: goto label_26e8b0;
        case 0x26e8b4u: goto label_26e8b4;
        case 0x26e8b8u: goto label_26e8b8;
        case 0x26e8bcu: goto label_26e8bc;
        case 0x26e8c0u: goto label_26e8c0;
        case 0x26e8c4u: goto label_26e8c4;
        case 0x26e8c8u: goto label_26e8c8;
        case 0x26e8ccu: goto label_26e8cc;
        case 0x26e8d0u: goto label_26e8d0;
        case 0x26e8d4u: goto label_26e8d4;
        case 0x26e8d8u: goto label_26e8d8;
        case 0x26e8dcu: goto label_26e8dc;
        case 0x26e8e0u: goto label_26e8e0;
        case 0x26e8e4u: goto label_26e8e4;
        case 0x26e8e8u: goto label_26e8e8;
        case 0x26e8ecu: goto label_26e8ec;
        case 0x26e8f0u: goto label_26e8f0;
        case 0x26e8f4u: goto label_26e8f4;
        case 0x26e8f8u: goto label_26e8f8;
        case 0x26e8fcu: goto label_26e8fc;
        case 0x26e900u: goto label_26e900;
        case 0x26e904u: goto label_26e904;
        case 0x26e908u: goto label_26e908;
        case 0x26e90cu: goto label_26e90c;
        case 0x26e910u: goto label_26e910;
        case 0x26e914u: goto label_26e914;
        case 0x26e918u: goto label_26e918;
        case 0x26e91cu: goto label_26e91c;
        case 0x26e920u: goto label_26e920;
        case 0x26e924u: goto label_26e924;
        case 0x26e928u: goto label_26e928;
        case 0x26e92cu: goto label_26e92c;
        case 0x26e930u: goto label_26e930;
        case 0x26e934u: goto label_26e934;
        case 0x26e938u: goto label_26e938;
        case 0x26e93cu: goto label_26e93c;
        case 0x26e940u: goto label_26e940;
        case 0x26e944u: goto label_26e944;
        case 0x26e948u: goto label_26e948;
        case 0x26e94cu: goto label_26e94c;
        case 0x26e950u: goto label_26e950;
        case 0x26e954u: goto label_26e954;
        case 0x26e958u: goto label_26e958;
        case 0x26e95cu: goto label_26e95c;
        case 0x26e960u: goto label_26e960;
        case 0x26e964u: goto label_26e964;
        case 0x26e968u: goto label_26e968;
        case 0x26e96cu: goto label_26e96c;
        case 0x26e970u: goto label_26e970;
        case 0x26e974u: goto label_26e974;
        case 0x26e978u: goto label_26e978;
        case 0x26e97cu: goto label_26e97c;
        case 0x26e980u: goto label_26e980;
        case 0x26e984u: goto label_26e984;
        case 0x26e988u: goto label_26e988;
        case 0x26e98cu: goto label_26e98c;
        case 0x26e990u: goto label_26e990;
        case 0x26e994u: goto label_26e994;
        case 0x26e998u: goto label_26e998;
        case 0x26e99cu: goto label_26e99c;
        case 0x26e9a0u: goto label_26e9a0;
        case 0x26e9a4u: goto label_26e9a4;
        case 0x26e9a8u: goto label_26e9a8;
        case 0x26e9acu: goto label_26e9ac;
        case 0x26e9b0u: goto label_26e9b0;
        case 0x26e9b4u: goto label_26e9b4;
        case 0x26e9b8u: goto label_26e9b8;
        case 0x26e9bcu: goto label_26e9bc;
        case 0x26e9c0u: goto label_26e9c0;
        case 0x26e9c4u: goto label_26e9c4;
        case 0x26e9c8u: goto label_26e9c8;
        case 0x26e9ccu: goto label_26e9cc;
        case 0x26e9d0u: goto label_26e9d0;
        case 0x26e9d4u: goto label_26e9d4;
        case 0x26e9d8u: goto label_26e9d8;
        case 0x26e9dcu: goto label_26e9dc;
        case 0x26e9e0u: goto label_26e9e0;
        case 0x26e9e4u: goto label_26e9e4;
        case 0x26e9e8u: goto label_26e9e8;
        case 0x26e9ecu: goto label_26e9ec;
        case 0x26e9f0u: goto label_26e9f0;
        case 0x26e9f4u: goto label_26e9f4;
        case 0x26e9f8u: goto label_26e9f8;
        case 0x26e9fcu: goto label_26e9fc;
        case 0x26ea00u: goto label_26ea00;
        case 0x26ea04u: goto label_26ea04;
        case 0x26ea08u: goto label_26ea08;
        case 0x26ea0cu: goto label_26ea0c;
        case 0x26ea10u: goto label_26ea10;
        case 0x26ea14u: goto label_26ea14;
        case 0x26ea18u: goto label_26ea18;
        case 0x26ea1cu: goto label_26ea1c;
        case 0x26ea20u: goto label_26ea20;
        case 0x26ea24u: goto label_26ea24;
        case 0x26ea28u: goto label_26ea28;
        case 0x26ea2cu: goto label_26ea2c;
        case 0x26ea30u: goto label_26ea30;
        case 0x26ea34u: goto label_26ea34;
        case 0x26ea38u: goto label_26ea38;
        case 0x26ea3cu: goto label_26ea3c;
        case 0x26ea40u: goto label_26ea40;
        case 0x26ea44u: goto label_26ea44;
        case 0x26ea48u: goto label_26ea48;
        case 0x26ea4cu: goto label_26ea4c;
        case 0x26ea50u: goto label_26ea50;
        case 0x26ea54u: goto label_26ea54;
        case 0x26ea58u: goto label_26ea58;
        case 0x26ea5cu: goto label_26ea5c;
        case 0x26ea60u: goto label_26ea60;
        case 0x26ea64u: goto label_26ea64;
        case 0x26ea68u: goto label_26ea68;
        case 0x26ea6cu: goto label_26ea6c;
        case 0x26ea70u: goto label_26ea70;
        case 0x26ea74u: goto label_26ea74;
        case 0x26ea78u: goto label_26ea78;
        case 0x26ea7cu: goto label_26ea7c;
        case 0x26ea80u: goto label_26ea80;
        case 0x26ea84u: goto label_26ea84;
        case 0x26ea88u: goto label_26ea88;
        case 0x26ea8cu: goto label_26ea8c;
        case 0x26ea90u: goto label_26ea90;
        case 0x26ea94u: goto label_26ea94;
        case 0x26ea98u: goto label_26ea98;
        case 0x26ea9cu: goto label_26ea9c;
        case 0x26eaa0u: goto label_26eaa0;
        case 0x26eaa4u: goto label_26eaa4;
        case 0x26eaa8u: goto label_26eaa8;
        case 0x26eaacu: goto label_26eaac;
        case 0x26eab0u: goto label_26eab0;
        case 0x26eab4u: goto label_26eab4;
        case 0x26eab8u: goto label_26eab8;
        case 0x26eabcu: goto label_26eabc;
        case 0x26eac0u: goto label_26eac0;
        case 0x26eac4u: goto label_26eac4;
        case 0x26eac8u: goto label_26eac8;
        case 0x26eaccu: goto label_26eacc;
        case 0x26ead0u: goto label_26ead0;
        case 0x26ead4u: goto label_26ead4;
        case 0x26ead8u: goto label_26ead8;
        case 0x26eadcu: goto label_26eadc;
        case 0x26eae0u: goto label_26eae0;
        case 0x26eae4u: goto label_26eae4;
        case 0x26eae8u: goto label_26eae8;
        case 0x26eaecu: goto label_26eaec;
        case 0x26eaf0u: goto label_26eaf0;
        case 0x26eaf4u: goto label_26eaf4;
        case 0x26eaf8u: goto label_26eaf8;
        case 0x26eafcu: goto label_26eafc;
        case 0x26eb00u: goto label_26eb00;
        case 0x26eb04u: goto label_26eb04;
        case 0x26eb08u: goto label_26eb08;
        case 0x26eb0cu: goto label_26eb0c;
        case 0x26eb10u: goto label_26eb10;
        case 0x26eb14u: goto label_26eb14;
        case 0x26eb18u: goto label_26eb18;
        case 0x26eb1cu: goto label_26eb1c;
        case 0x26eb20u: goto label_26eb20;
        case 0x26eb24u: goto label_26eb24;
        case 0x26eb28u: goto label_26eb28;
        case 0x26eb2cu: goto label_26eb2c;
        case 0x26eb30u: goto label_26eb30;
        case 0x26eb34u: goto label_26eb34;
        case 0x26eb38u: goto label_26eb38;
        case 0x26eb3cu: goto label_26eb3c;
        case 0x26eb40u: goto label_26eb40;
        case 0x26eb44u: goto label_26eb44;
        case 0x26eb48u: goto label_26eb48;
        case 0x26eb4cu: goto label_26eb4c;
        case 0x26eb50u: goto label_26eb50;
        case 0x26eb54u: goto label_26eb54;
        case 0x26eb58u: goto label_26eb58;
        case 0x26eb5cu: goto label_26eb5c;
        case 0x26eb60u: goto label_26eb60;
        case 0x26eb64u: goto label_26eb64;
        case 0x26eb68u: goto label_26eb68;
        case 0x26eb6cu: goto label_26eb6c;
        case 0x26eb70u: goto label_26eb70;
        case 0x26eb74u: goto label_26eb74;
        case 0x26eb78u: goto label_26eb78;
        case 0x26eb7cu: goto label_26eb7c;
        case 0x26eb80u: goto label_26eb80;
        case 0x26eb84u: goto label_26eb84;
        case 0x26eb88u: goto label_26eb88;
        case 0x26eb8cu: goto label_26eb8c;
        case 0x26eb90u: goto label_26eb90;
        case 0x26eb94u: goto label_26eb94;
        case 0x26eb98u: goto label_26eb98;
        case 0x26eb9cu: goto label_26eb9c;
        default: break;
    }

    ctx->pc = 0x26e5f8u;

label_26e5f8:
    // 0x26e5f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26e5fc:
    // 0x26e5fc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_26e600:
    // 0x26e600: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26e600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26e604:
    // 0x26e604: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_26e608:
    // 0x26e608: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_26e60c:
    // 0x26e60c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x26e60cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26e610:
    // 0x26e610: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_26e614:
    // 0x26e614: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26e614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_26e618:
    // 0x26e618: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_26e61c:
    // 0x26e61c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26e620:
    // 0x26e620: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_26e624:
    // 0x26e624: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_26e628:
    // 0x26e628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26e62c:
    // 0x26e62c: 0xc0e409a  jal         func_390268
label_26e630:
    if (ctx->pc == 0x26E630u) {
        ctx->pc = 0x26E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E62Cu;
        // 0x26e630: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E634u;
        goto label_26e634;
    }
    ctx->pc = 0x26E62Cu;
    SET_GPR_U32(ctx, 31, 0x26E634u);
    ctx->pc = 0x26E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E62Cu;
    // 0x26e630: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26E62Cu, 0x26E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E634u;
label_26e634:
    // 0x26e634: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26e634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e638:
    // 0x26e638: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26e638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26e63c:
    // 0x26e63c: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x26e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26e640:
    // 0x26e640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26e644:
    // 0x26e644: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26e644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_26e648:
    // 0x26e648: 0x8e8300d8  lw          $v1, 0xD8($s4)
    ctx->pc = 0x26e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_26e64c:
    // 0x26e64c: 0xc0950ba  jal         func_2542E8
label_26e650:
    if (ctx->pc == 0x26E650u) {
        ctx->pc = 0x26E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E64Cu;
        // 0x26e650: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E654u;
        goto label_26e654;
    }
    ctx->pc = 0x26E64Cu;
    SET_GPR_U32(ctx, 31, 0x26E654u);
    ctx->pc = 0x26E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E64Cu;
    // 0x26e650: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x26E64Cu, 0x26E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E654u;
label_26e654:
    // 0x26e654: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26e654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26e658:
    // 0x26e658: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x26e658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_26e65c:
    // 0x26e65c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26e65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26e660:
    // 0x26e660: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x26e660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_26e664:
    // 0x26e664: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x26e664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_26e668:
    // 0x26e668: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x26e668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_26e66c:
    // 0x26e66c: 0xc09970a  jal         func_265C28
label_26e670:
    if (ctx->pc == 0x26E670u) {
        ctx->pc = 0x26E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E66Cu;
        // 0x26e670: 0x202280a  movz        $a1, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E674u;
        goto label_26e674;
    }
    ctx->pc = 0x26E66Cu;
    SET_GPR_U32(ctx, 31, 0x26E674u);
    ctx->pc = 0x26E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E66Cu;
    // 0x26e670: 0x202280a  movz        $a1, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x26E66Cu, 0x26E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E674u;
label_26e674:
    // 0x26e674: 0x144000ae  bnez        $v0, . + 4 + (0xAE << 2)
label_26e678:
    if (ctx->pc == 0x26E678u) {
        ctx->pc = 0x26E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E674u;
        // 0x26e678: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E67Cu;
        goto label_26e67c;
    }
    ctx->pc = 0x26E674u;
    {
        const bool branch_taken_0x26e674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E674u;
        // 0x26e678: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e674) {
            ctx->pc = 0x26E930u;
            goto label_26e930;
        }
    }
    ctx->pc = 0x26E67Cu;
label_26e67c:
    // 0x26e67c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e680:
    // 0x26e680: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26e680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26e684:
    // 0x26e684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e688:
    // 0x26e688: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26e688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e68c:
    // 0x26e68c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e68cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e690:
    // 0x26e690: 0xc0875a0  jal         func_21D680
label_26e694:
    if (ctx->pc == 0x26E694u) {
        ctx->pc = 0x26E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E690u;
        // 0x26e694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E698u;
        goto label_26e698;
    }
    ctx->pc = 0x26E690u;
    SET_GPR_U32(ctx, 31, 0x26E698u);
    ctx->pc = 0x26E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E690u;
    // 0x26e694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x26E690u, 0x26E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E698u;
label_26e698:
    // 0x26e698: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26e69c:
    // 0x26e69c: 0x245ee160  addiu       $fp, $v0, -0x1EA0
    ctx->pc = 0x26e69cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26e6a0:
    // 0x26e6a0: 0xc041532  jal         func_1054C8
label_26e6a4:
    if (ctx->pc == 0x26E6A4u) {
        ctx->pc = 0x26E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6A0u;
        // 0x26e6a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E6A8u;
        goto label_26e6a8;
    }
    ctx->pc = 0x26E6A0u;
    SET_GPR_U32(ctx, 31, 0x26E6A8u);
    ctx->pc = 0x26E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6A0u;
    // 0x26e6a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E6A0u, 0x26E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6A8u;
label_26e6a8:
    // 0x26e6a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26e6ac:
    // 0x26e6ac: 0xc041532  jal         func_1054C8
label_26e6b0:
    if (ctx->pc == 0x26E6B0u) {
        ctx->pc = 0x26E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6ACu;
        // 0x26e6b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E6B4u;
        goto label_26e6b4;
    }
    ctx->pc = 0x26E6ACu;
    SET_GPR_U32(ctx, 31, 0x26E6B4u);
    ctx->pc = 0x26E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6ACu;
    // 0x26e6b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E6ACu, 0x26E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6B4u;
label_26e6b4:
    // 0x26e6b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e6b8:
    // 0x26e6b8: 0xc041532  jal         func_1054C8
label_26e6bc:
    if (ctx->pc == 0x26E6BCu) {
        ctx->pc = 0x26E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6B8u;
        // 0x26e6bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E6C0u;
        goto label_26e6c0;
    }
    ctx->pc = 0x26E6B8u;
    SET_GPR_U32(ctx, 31, 0x26E6C0u);
    ctx->pc = 0x26E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6B8u;
    // 0x26e6bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E6B8u, 0x26E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6C0u;
label_26e6c0:
    // 0x26e6c0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_26e6c4:
    if (ctx->pc == 0x26E6C4u) {
        ctx->pc = 0x26E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6C0u;
        // 0x26e6c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E6C8u;
        goto label_26e6c8;
    }
    ctx->pc = 0x26E6C0u;
    {
        const bool branch_taken_0x26e6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6C0u;
        // 0x26e6c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6c0) {
            ctx->pc = 0x26E700u;
            goto label_26e700;
        }
    }
    ctx->pc = 0x26E6C8u;
label_26e6c8:
    // 0x26e6c8: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26e6cc:
    // 0x26e6cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26e6d0:
    // 0x26e6d0: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26e6d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26e6d4:
    // 0x26e6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e6d8:
    // 0x26e6d8: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26e6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26e6dc:
    // 0x26e6dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26e6dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e6e0:
    // 0x26e6e0: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26e6e4:
    // 0x26e6e4: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26e6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26e6e8:
    // 0x26e6e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26e6e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26e6ec:
    // 0x26e6ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26e6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e6f0:
    // 0x26e6f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26e6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26e6f4:
    // 0x26e6f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26e6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26e6f8:
    // 0x26e6f8: 0xc041bd4  jal         func_106F50
label_26e6fc:
    if (ctx->pc == 0x26E6FCu) {
        ctx->pc = 0x26E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6F8u;
        // 0x26e6fc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E700u;
        goto label_26e700;
    }
    ctx->pc = 0x26E6F8u;
    SET_GPR_U32(ctx, 31, 0x26E700u);
    ctx->pc = 0x26E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6F8u;
    // 0x26e6fc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26E6F8u, 0x26E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E700u;
label_26e700:
    // 0x26e700: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26e704:
    // 0x26e704: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26e708:
    // 0x26e708: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26e708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26e70c:
    // 0x26e70c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26e710:
    // 0x26e710: 0x60f809  jalr        $v1
label_26e714:
    if (ctx->pc == 0x26E714u) {
        ctx->pc = 0x26E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E710u;
        // 0x26e714: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E718u;
        goto label_26e718;
    }
    ctx->pc = 0x26E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26E718u);
        ctx->pc = 0x26E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E710u;
        // 0x26e714: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E710u, 0x26E718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E718u;
label_26e718:
    // 0x26e718: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26e718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26e71c:
    // 0x26e71c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26e720:
    // 0x26e720: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_26e724:
    if (ctx->pc == 0x26E724u) {
        ctx->pc = 0x26E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E720u;
        // 0x26e724: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E728u;
        goto label_26e728;
    }
    ctx->pc = 0x26E720u;
    {
        const bool branch_taken_0x26e720 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E720u;
        // 0x26e724: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e720) {
            ctx->pc = 0x26E760u;
            goto label_26e760;
        }
    }
    ctx->pc = 0x26E728u;
label_26e728:
    // 0x26e728: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26e72c:
    // 0x26e72c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26e72cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26e730:
    // 0x26e730: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26e734:
    // 0x26e734: 0x40f809  jalr        $v0
label_26e738:
    if (ctx->pc == 0x26E738u) {
        ctx->pc = 0x26E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E734u;
        // 0x26e738: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E73Cu;
        goto label_26e73c;
    }
    ctx->pc = 0x26E734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26E73Cu);
        ctx->pc = 0x26E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E734u;
        // 0x26e738: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E734u, 0x26E73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E73Cu;
label_26e73c:
    // 0x26e73c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26e73cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e740:
    // 0x26e740: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26e740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e744:
    // 0x26e744: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x26e744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26e748:
    // 0x26e748: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26e748u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e74c:
    // 0x26e74c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26e750:
    // 0x26e750: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x26e750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26e754:
    // 0x26e754: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26e754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e758:
    // 0x26e758: 0xc041664  jal         func_105990
label_26e75c:
    if (ctx->pc == 0x26E75Cu) {
        ctx->pc = 0x26E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E758u;
        // 0x26e75c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E760u;
        goto label_26e760;
    }
    ctx->pc = 0x26E758u;
    SET_GPR_U32(ctx, 31, 0x26E760u);
    ctx->pc = 0x26E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E758u;
    // 0x26e75c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26E758u, 0x26E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E760u;
label_26e760:
    // 0x26e760: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_26e764:
    if (ctx->pc == 0x26E764u) {
        ctx->pc = 0x26E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E760u;
        // 0x26e764: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E768u;
        goto label_26e768;
    }
    ctx->pc = 0x26E760u;
    {
        const bool branch_taken_0x26e760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E760u;
        // 0x26e764: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e760) {
            ctx->pc = 0x26E788u;
            goto label_26e788;
        }
    }
    ctx->pc = 0x26E768u;
label_26e768:
    // 0x26e768: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26e768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26e76c:
    // 0x26e76c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26e76cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26e770:
    // 0x26e770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e774:
    // 0x26e774: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26e774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26e778:
    // 0x26e778: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26e778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26e77c:
    // 0x26e77c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e780:
    // 0x26e780: 0xc041b20  jal         func_106C80
label_26e784:
    if (ctx->pc == 0x26E784u) {
        ctx->pc = 0x26E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E780u;
        // 0x26e784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E788u;
        goto label_26e788;
    }
    ctx->pc = 0x26E780u;
    SET_GPR_U32(ctx, 31, 0x26E788u);
    ctx->pc = 0x26E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E780u;
    // 0x26e784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26E780u, 0x26E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E788u;
label_26e788:
    // 0x26e788: 0xc05d484  jal         func_175210
label_26e78c:
    if (ctx->pc == 0x26E78Cu) {
        ctx->pc = 0x26E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E788u;
        // 0x26e78c: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E790u;
        goto label_26e790;
    }
    ctx->pc = 0x26E788u;
    SET_GPR_U32(ctx, 31, 0x26E790u);
    ctx->pc = 0x26E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E788u;
    // 0x26e78c: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26E788u, 0x26E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E790u;
label_26e790:
    // 0x26e790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e794:
    // 0x26e794: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26e794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26e798:
    // 0x26e798: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26e79c:
    // 0x26e79c: 0xa0f809  jalr        $a1
label_26e7a0:
    if (ctx->pc == 0x26E7A0u) {
        ctx->pc = 0x26E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E79Cu;
        // 0x26e7a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7A4u;
        goto label_26e7a4;
    }
    ctx->pc = 0x26E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26E7A4u);
        ctx->pc = 0x26E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E79Cu;
        // 0x26e7a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E79Cu, 0x26E7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E7A4u;
label_26e7a4:
    // 0x26e7a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26e7a8:
    // 0x26e7a8: 0xc087016  jal         func_21C058
label_26e7ac:
    if (ctx->pc == 0x26E7ACu) {
        ctx->pc = 0x26E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7A8u;
        // 0x26e7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7B0u;
        goto label_26e7b0;
    }
    ctx->pc = 0x26E7A8u;
    SET_GPR_U32(ctx, 31, 0x26E7B0u);
    ctx->pc = 0x26E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7A8u;
    // 0x26e7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26E7A8u, 0x26E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7B0u;
label_26e7b0:
    // 0x26e7b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26e7b4:
    // 0x26e7b4: 0xc089990  jal         func_226640
label_26e7b8:
    if (ctx->pc == 0x26E7B8u) {
        ctx->pc = 0x26E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7B4u;
        // 0x26e7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7BCu;
        goto label_26e7bc;
    }
    ctx->pc = 0x26E7B4u;
    SET_GPR_U32(ctx, 31, 0x26E7BCu);
    ctx->pc = 0x26E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7B4u;
    // 0x26e7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26E7B4u, 0x26E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7BCu;
label_26e7bc:
    // 0x26e7bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x26e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26e7c0:
    // 0x26e7c0: 0xc05d4f6  jal         func_1753D8
label_26e7c4:
    if (ctx->pc == 0x26E7C4u) {
        ctx->pc = 0x26E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7C0u;
        // 0x26e7c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7C8u;
        goto label_26e7c8;
    }
    ctx->pc = 0x26E7C0u;
    SET_GPR_U32(ctx, 31, 0x26E7C8u);
    ctx->pc = 0x26E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7C0u;
    // 0x26e7c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26E7C0u, 0x26E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7C8u;
label_26e7c8:
    // 0x26e7c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x26e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26e7cc:
    // 0x26e7cc: 0xc05d53a  jal         func_1754E8
label_26e7d0:
    if (ctx->pc == 0x26E7D0u) {
        ctx->pc = 0x26E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7CCu;
        // 0x26e7d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7D4u;
        goto label_26e7d4;
    }
    ctx->pc = 0x26E7CCu;
    SET_GPR_U32(ctx, 31, 0x26E7D4u);
    ctx->pc = 0x26E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7CCu;
    // 0x26e7d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26E7CCu, 0x26E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7D4u;
label_26e7d4:
    // 0x26e7d4: 0xc041532  jal         func_1054C8
label_26e7d8:
    if (ctx->pc == 0x26E7D8u) {
        ctx->pc = 0x26E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7D4u;
        // 0x26e7d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7DCu;
        goto label_26e7dc;
    }
    ctx->pc = 0x26E7D4u;
    SET_GPR_U32(ctx, 31, 0x26E7DCu);
    ctx->pc = 0x26E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7D4u;
    // 0x26e7d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E7D4u, 0x26E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7DCu;
label_26e7dc:
    // 0x26e7dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26e7e0:
    // 0x26e7e0: 0xc041532  jal         func_1054C8
label_26e7e4:
    if (ctx->pc == 0x26E7E4u) {
        ctx->pc = 0x26E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7E0u;
        // 0x26e7e4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7E8u;
        goto label_26e7e8;
    }
    ctx->pc = 0x26E7E0u;
    SET_GPR_U32(ctx, 31, 0x26E7E8u);
    ctx->pc = 0x26E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7E0u;
    // 0x26e7e4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E7E0u, 0x26E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7E8u;
label_26e7e8:
    // 0x26e7e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26e7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e7ec:
    // 0x26e7ec: 0xc041532  jal         func_1054C8
label_26e7f0:
    if (ctx->pc == 0x26E7F0u) {
        ctx->pc = 0x26E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7ECu;
        // 0x26e7f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7F4u;
        goto label_26e7f4;
    }
    ctx->pc = 0x26E7ECu;
    SET_GPR_U32(ctx, 31, 0x26E7F4u);
    ctx->pc = 0x26E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7ECu;
    // 0x26e7f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E7ECu, 0x26E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7F4u;
label_26e7f4:
    // 0x26e7f4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_26e7f8:
    if (ctx->pc == 0x26E7F8u) {
        ctx->pc = 0x26E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7F4u;
        // 0x26e7f8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E7FCu;
        goto label_26e7fc;
    }
    ctx->pc = 0x26E7F4u;
    {
        const bool branch_taken_0x26e7f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7F4u;
        // 0x26e7f8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7f4) {
            ctx->pc = 0x26E834u;
            goto label_26e834;
        }
    }
    ctx->pc = 0x26E7FCu;
label_26e7fc:
    // 0x26e7fc: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x26e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_26e800:
    // 0x26e800: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26e800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26e804:
    // 0x26e804: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26e804u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26e808:
    // 0x26e808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e80c:
    // 0x26e80c: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26e80cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26e810:
    // 0x26e810: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26e810u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e814:
    // 0x26e814: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x26e814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_26e818:
    // 0x26e818: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26e818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26e81c:
    // 0x26e81c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26e81cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26e820:
    // 0x26e820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26e820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e824:
    // 0x26e824: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26e824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26e828:
    // 0x26e828: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26e828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26e82c:
    // 0x26e82c: 0xc041bd4  jal         func_106F50
label_26e830:
    if (ctx->pc == 0x26E830u) {
        ctx->pc = 0x26E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E82Cu;
        // 0x26e830: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E834u;
        goto label_26e834;
    }
    ctx->pc = 0x26E82Cu;
    SET_GPR_U32(ctx, 31, 0x26E834u);
    ctx->pc = 0x26E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E82Cu;
    // 0x26e830: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26E82Cu, 0x26E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E834u;
label_26e834:
    // 0x26e834: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26e838:
    // 0x26e838: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26e838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26e83c:
    // 0x26e83c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26e83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26e840:
    // 0x26e840: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26e840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26e844:
    // 0x26e844: 0x60f809  jalr        $v1
label_26e848:
    if (ctx->pc == 0x26E848u) {
        ctx->pc = 0x26E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E844u;
        // 0x26e848: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E84Cu;
        goto label_26e84c;
    }
    ctx->pc = 0x26E844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26E84Cu);
        ctx->pc = 0x26E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E844u;
        // 0x26e848: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E844u, 0x26E84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E84Cu;
label_26e84c:
    // 0x26e84c: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x26e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_26e850:
    // 0x26e850: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26e854:
    // 0x26e854: 0x12a00017  beqz        $s5, . + 4 + (0x17 << 2)
label_26e858:
    if (ctx->pc == 0x26E858u) {
        ctx->pc = 0x26E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E854u;
        // 0x26e858: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E85Cu;
        goto label_26e85c;
    }
    ctx->pc = 0x26E854u;
    {
        const bool branch_taken_0x26e854 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E854u;
        // 0x26e858: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e854) {
            ctx->pc = 0x26E8B4u;
            goto label_26e8b4;
        }
    }
    ctx->pc = 0x26E85Cu;
label_26e85c:
    // 0x26e85c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26e860:
    // 0x26e860: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_26e864:
    // 0x26e864: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26e864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26e868:
    // 0x26e868: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26e86c:
    // 0x26e86c: 0x40f809  jalr        $v0
label_26e870:
    if (ctx->pc == 0x26E870u) {
        ctx->pc = 0x26E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E86Cu;
        // 0x26e870: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E874u;
        goto label_26e874;
    }
    ctx->pc = 0x26E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26E874u);
        ctx->pc = 0x26E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E86Cu;
        // 0x26e870: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E86Cu, 0x26E874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E874u;
label_26e874:
    // 0x26e874: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x26e874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26e878:
    // 0x26e878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e87c:
    // 0x26e87c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26e87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26e880:
    // 0x26e880: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26e884:
    // 0x26e884: 0x40f809  jalr        $v0
label_26e888:
    if (ctx->pc == 0x26E888u) {
        ctx->pc = 0x26E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E884u;
        // 0x26e888: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E88Cu;
        goto label_26e88c;
    }
    ctx->pc = 0x26E884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26E88Cu);
        ctx->pc = 0x26E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E884u;
        // 0x26e888: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E884u, 0x26E88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E88Cu;
label_26e88c:
    // 0x26e88c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26e88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e890:
    // 0x26e890: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26e890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e894:
    // 0x26e894: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x26e894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26e898:
    // 0x26e898: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26e898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e89c:
    // 0x26e89c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x26e89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e8a0:
    // 0x26e8a0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26e8a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e8a4:
    // 0x26e8a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26e8a8:
    // 0x26e8a8: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x26e8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_26e8ac:
    // 0x26e8ac: 0xc04229e  jal         func_108A78
label_26e8b0:
    if (ctx->pc == 0x26E8B0u) {
        ctx->pc = 0x26E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8ACu;
        // 0x26e8b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E8B4u;
        goto label_26e8b4;
    }
    ctx->pc = 0x26E8ACu;
    SET_GPR_U32(ctx, 31, 0x26E8B4u);
    ctx->pc = 0x26E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8ACu;
    // 0x26e8b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26E8ACu, 0x26E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8B4u;
label_26e8b4:
    // 0x26e8b4: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_26e8b8:
    if (ctx->pc == 0x26E8B8u) {
        ctx->pc = 0x26E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8B4u;
        // 0x26e8b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E8BCu;
        goto label_26e8bc;
    }
    ctx->pc = 0x26E8B4u;
    {
        const bool branch_taken_0x26e8b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8B4u;
        // 0x26e8b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8b4) {
            ctx->pc = 0x26E8DCu;
            goto label_26e8dc;
        }
    }
    ctx->pc = 0x26E8BCu;
label_26e8bc:
    // 0x26e8bc: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x26e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_26e8c0:
    // 0x26e8c0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26e8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26e8c4:
    // 0x26e8c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26e8c8:
    // 0x26e8c8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26e8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26e8cc:
    // 0x26e8cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26e8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26e8d0:
    // 0x26e8d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e8d4:
    // 0x26e8d4: 0xc041b20  jal         func_106C80
label_26e8d8:
    if (ctx->pc == 0x26E8D8u) {
        ctx->pc = 0x26E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8D4u;
        // 0x26e8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E8DCu;
        goto label_26e8dc;
    }
    ctx->pc = 0x26E8D4u;
    SET_GPR_U32(ctx, 31, 0x26E8DCu);
    ctx->pc = 0x26E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8D4u;
    // 0x26e8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26E8D4u, 0x26E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8DCu;
label_26e8dc:
    // 0x26e8dc: 0xc05d484  jal         func_175210
label_26e8e0:
    if (ctx->pc == 0x26E8E0u) {
        ctx->pc = 0x26E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8DCu;
        // 0x26e8e0: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E8E4u;
        goto label_26e8e4;
    }
    ctx->pc = 0x26E8DCu;
    SET_GPR_U32(ctx, 31, 0x26E8E4u);
    ctx->pc = 0x26E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8DCu;
    // 0x26e8e0: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26E8DCu, 0x26E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8E4u;
label_26e8e4:
    // 0x26e8e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e8e8:
    // 0x26e8e8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26e8e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26e8ec:
    // 0x26e8ec: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26e8f0:
    // 0x26e8f0: 0xa0f809  jalr        $a1
label_26e8f4:
    if (ctx->pc == 0x26E8F4u) {
        ctx->pc = 0x26E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8F0u;
        // 0x26e8f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E8F8u;
        goto label_26e8f8;
    }
    ctx->pc = 0x26E8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26E8F8u);
        ctx->pc = 0x26E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8F0u;
        // 0x26e8f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E8F0u, 0x26E8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E8F8u;
label_26e8f8:
    // 0x26e8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26e8fc:
    // 0x26e8fc: 0xc087016  jal         func_21C058
label_26e900:
    if (ctx->pc == 0x26E900u) {
        ctx->pc = 0x26E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8FCu;
        // 0x26e900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E904u;
        goto label_26e904;
    }
    ctx->pc = 0x26E8FCu;
    SET_GPR_U32(ctx, 31, 0x26E904u);
    ctx->pc = 0x26E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8FCu;
    // 0x26e900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26E8FCu, 0x26E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E904u;
label_26e904:
    // 0x26e904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26e908:
    // 0x26e908: 0xc089990  jal         func_226640
label_26e90c:
    if (ctx->pc == 0x26E90Cu) {
        ctx->pc = 0x26E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E908u;
        // 0x26e90c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E910u;
        goto label_26e910;
    }
    ctx->pc = 0x26E908u;
    SET_GPR_U32(ctx, 31, 0x26E910u);
    ctx->pc = 0x26E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E908u;
    // 0x26e90c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26E908u, 0x26E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E910u;
label_26e910:
    // 0x26e910: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26e910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26e914:
    // 0x26e914: 0xc05d4f6  jal         func_1753D8
label_26e918:
    if (ctx->pc == 0x26E918u) {
        ctx->pc = 0x26E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E914u;
        // 0x26e918: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E91Cu;
        goto label_26e91c;
    }
    ctx->pc = 0x26E914u;
    SET_GPR_U32(ctx, 31, 0x26E91Cu);
    ctx->pc = 0x26E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E914u;
    // 0x26e918: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26E914u, 0x26E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E91Cu;
label_26e91c:
    // 0x26e91c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26e920:
    // 0x26e920: 0xc05d53a  jal         func_1754E8
label_26e924:
    if (ctx->pc == 0x26E924u) {
        ctx->pc = 0x26E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E920u;
        // 0x26e924: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E928u;
        goto label_26e928;
    }
    ctx->pc = 0x26E920u;
    SET_GPR_U32(ctx, 31, 0x26E928u);
    ctx->pc = 0x26E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E920u;
    // 0x26e924: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26E920u, 0x26E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E928u;
label_26e928:
    // 0x26e928: 0x10000092  b           . + 4 + (0x92 << 2)
label_26e92c:
    if (ctx->pc == 0x26E92Cu) {
        ctx->pc = 0x26E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E928u;
        // 0x26e92c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E930u;
        goto label_26e930;
    }
    ctx->pc = 0x26E928u;
    {
        const bool branch_taken_0x26e928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E928u;
        // 0x26e92c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e928) {
            ctx->pc = 0x26EB74u;
            goto label_26eb74;
        }
    }
    ctx->pc = 0x26E930u;
label_26e930:
    // 0x26e930: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x26e930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26e934:
    // 0x26e934: 0xc08ae58  jal         func_22B960
label_26e938:
    if (ctx->pc == 0x26E938u) {
        ctx->pc = 0x26E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E934u;
        // 0x26e938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E93Cu;
        goto label_26e93c;
    }
    ctx->pc = 0x26E934u;
    SET_GPR_U32(ctx, 31, 0x26E93Cu);
    ctx->pc = 0x26E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E934u;
    // 0x26e938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x26E934u, 0x26E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E93Cu;
label_26e93c:
    // 0x26e93c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26e940:
    // 0x26e940: 0x245ee160  addiu       $fp, $v0, -0x1EA0
    ctx->pc = 0x26e940u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26e944:
    // 0x26e944: 0xc041532  jal         func_1054C8
label_26e948:
    if (ctx->pc == 0x26E948u) {
        ctx->pc = 0x26E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E944u;
        // 0x26e948: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E94Cu;
        goto label_26e94c;
    }
    ctx->pc = 0x26E944u;
    SET_GPR_U32(ctx, 31, 0x26E94Cu);
    ctx->pc = 0x26E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E944u;
    // 0x26e948: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E944u, 0x26E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E94Cu;
label_26e94c:
    // 0x26e94c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26e94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26e950:
    // 0x26e950: 0xc041532  jal         func_1054C8
label_26e954:
    if (ctx->pc == 0x26E954u) {
        ctx->pc = 0x26E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E950u;
        // 0x26e954: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E958u;
        goto label_26e958;
    }
    ctx->pc = 0x26E950u;
    SET_GPR_U32(ctx, 31, 0x26E958u);
    ctx->pc = 0x26E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E950u;
    // 0x26e954: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E950u, 0x26E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E958u;
label_26e958:
    // 0x26e958: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26e958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e95c:
    // 0x26e95c: 0xc041532  jal         func_1054C8
label_26e960:
    if (ctx->pc == 0x26E960u) {
        ctx->pc = 0x26E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E95Cu;
        // 0x26e960: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E964u;
        goto label_26e964;
    }
    ctx->pc = 0x26E95Cu;
    SET_GPR_U32(ctx, 31, 0x26E964u);
    ctx->pc = 0x26E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E95Cu;
    // 0x26e960: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26E95Cu, 0x26E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E964u;
label_26e964:
    // 0x26e964: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_26e968:
    if (ctx->pc == 0x26E968u) {
        ctx->pc = 0x26E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E964u;
        // 0x26e968: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E96Cu;
        goto label_26e96c;
    }
    ctx->pc = 0x26E964u;
    {
        const bool branch_taken_0x26e964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E964u;
        // 0x26e968: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e964) {
            ctx->pc = 0x26E990u;
            goto label_26e990;
        }
    }
    ctx->pc = 0x26E96Cu;
label_26e96c:
    // 0x26e96c: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26e970:
    // 0x26e970: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26e970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26e974:
    // 0x26e974: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26e974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26e978:
    // 0x26e978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e97c:
    // 0x26e97c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26e97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26e980:
    // 0x26e980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26e980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e984:
    // 0x26e984: 0xc04159e  jal         func_105678
label_26e988:
    if (ctx->pc == 0x26E988u) {
        ctx->pc = 0x26E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E984u;
        // 0x26e988: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E98Cu;
        goto label_26e98c;
    }
    ctx->pc = 0x26E984u;
    SET_GPR_U32(ctx, 31, 0x26E98Cu);
    ctx->pc = 0x26E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E984u;
    // 0x26e988: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26E984u, 0x26E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E98Cu;
label_26e98c:
    // 0x26e98c: 0x0  nop
    ctx->pc = 0x26e98cu;
    // NOP
label_26e990:
    // 0x26e990: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26e990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26e994:
    // 0x26e994: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26e998:
    // 0x26e998: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
label_26e99c:
    if (ctx->pc == 0x26E99Cu) {
        ctx->pc = 0x26E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E998u;
        // 0x26e99c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E9A0u;
        goto label_26e9a0;
    }
    ctx->pc = 0x26E998u;
    {
        const bool branch_taken_0x26e998 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E998u;
        // 0x26e99c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e998) {
            ctx->pc = 0x26E9F8u;
            goto label_26e9f8;
        }
    }
    ctx->pc = 0x26E9A0u;
label_26e9a0:
    // 0x26e9a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26e9a4:
    // 0x26e9a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26e9a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26e9a8:
    // 0x26e9a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26e9ac:
    // 0x26e9ac: 0x40f809  jalr        $v0
label_26e9b0:
    if (ctx->pc == 0x26E9B0u) {
        ctx->pc = 0x26E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9ACu;
        // 0x26e9b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E9B4u;
        goto label_26e9b4;
    }
    ctx->pc = 0x26E9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26E9B4u);
        ctx->pc = 0x26E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9ACu;
        // 0x26e9b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E9ACu, 0x26E9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E9B4u;
label_26e9b4:
    // 0x26e9b4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x26e9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
label_26e9b8:
    // 0x26e9b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26e9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e9bc:
    // 0x26e9bc: 0x261029a8  addiu       $s0, $s0, 0x29A8
    ctx->pc = 0x26e9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10664));
label_26e9c0:
    // 0x26e9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26e9c4:
    // 0x26e9c4: 0xc040680  jal         func_101A00
label_26e9c8:
    if (ctx->pc == 0x26E9C8u) {
        ctx->pc = 0x26E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9C4u;
        // 0x26e9c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E9CCu;
        goto label_26e9cc;
    }
    ctx->pc = 0x26E9C4u;
    SET_GPR_U32(ctx, 31, 0x26E9CCu);
    ctx->pc = 0x26E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9C4u;
    // 0x26e9c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x26E9C4u, 0x26E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9CCu;
label_26e9cc:
    // 0x26e9cc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_26e9d0:
    // 0x26e9d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26e9d4:
    // 0x26e9d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26e9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e9d8:
    // 0x26e9d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x26e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26e9dc:
    // 0x26e9dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x26e9dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e9e0:
    // 0x26e9e0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x26e9e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_26e9e4:
    // 0x26e9e4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x26e9e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e9e8:
    // 0x26e9e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26e9ec:
    // 0x26e9ec: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x26e9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26e9f0:
    // 0x26e9f0: 0xc041664  jal         func_105990
label_26e9f4:
    if (ctx->pc == 0x26E9F4u) {
        ctx->pc = 0x26E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9F0u;
        // 0x26e9f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E9F8u;
        goto label_26e9f8;
    }
    ctx->pc = 0x26E9F0u;
    SET_GPR_U32(ctx, 31, 0x26E9F8u);
    ctx->pc = 0x26E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9F0u;
    // 0x26e9f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26E9F0u, 0x26E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9F8u;
label_26e9f8:
    // 0x26e9f8: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26e9fc:
    if (ctx->pc == 0x26E9FCu) {
        ctx->pc = 0x26E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9F8u;
        // 0x26e9fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA00u;
        goto label_26ea00;
    }
    ctx->pc = 0x26E9F8u;
    {
        const bool branch_taken_0x26e9f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9F8u;
        // 0x26e9fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9f8) {
            ctx->pc = 0x26EA20u;
            goto label_26ea20;
        }
    }
    ctx->pc = 0x26EA00u;
label_26ea00:
    // 0x26ea00: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26ea04:
    // 0x26ea04: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ea04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ea08:
    // 0x26ea08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ea0c:
    // 0x26ea0c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26ea10:
    // 0x26ea10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26ea10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26ea14:
    // 0x26ea14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ea14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ea18:
    // 0x26ea18: 0xc041b20  jal         func_106C80
label_26ea1c:
    if (ctx->pc == 0x26EA1Cu) {
        ctx->pc = 0x26EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA18u;
        // 0x26ea1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA20u;
        goto label_26ea20;
    }
    ctx->pc = 0x26EA18u;
    SET_GPR_U32(ctx, 31, 0x26EA20u);
    ctx->pc = 0x26EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA18u;
    // 0x26ea1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26EA18u, 0x26EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA20u;
label_26ea20:
    // 0x26ea20: 0xc05d484  jal         func_175210
label_26ea24:
    if (ctx->pc == 0x26EA24u) {
        ctx->pc = 0x26EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA20u;
        // 0x26ea24: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA28u;
        goto label_26ea28;
    }
    ctx->pc = 0x26EA20u;
    SET_GPR_U32(ctx, 31, 0x26EA28u);
    ctx->pc = 0x26EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA20u;
    // 0x26ea24: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26EA20u, 0x26EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA28u;
label_26ea28:
    // 0x26ea28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ea2c:
    // 0x26ea2c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26ea2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26ea30:
    // 0x26ea30: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26ea34:
    // 0x26ea34: 0xa0f809  jalr        $a1
label_26ea38:
    if (ctx->pc == 0x26EA38u) {
        ctx->pc = 0x26EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA34u;
        // 0x26ea38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA3Cu;
        goto label_26ea3c;
    }
    ctx->pc = 0x26EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26EA3Cu);
        ctx->pc = 0x26EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA34u;
        // 0x26ea38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EA34u, 0x26EA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EA3Cu;
label_26ea3c:
    // 0x26ea3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ea40:
    // 0x26ea40: 0xc087016  jal         func_21C058
label_26ea44:
    if (ctx->pc == 0x26EA44u) {
        ctx->pc = 0x26EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA40u;
        // 0x26ea44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA48u;
        goto label_26ea48;
    }
    ctx->pc = 0x26EA40u;
    SET_GPR_U32(ctx, 31, 0x26EA48u);
    ctx->pc = 0x26EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA40u;
    // 0x26ea44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26EA40u, 0x26EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA48u;
label_26ea48:
    // 0x26ea48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ea4c:
    // 0x26ea4c: 0xc089990  jal         func_226640
label_26ea50:
    if (ctx->pc == 0x26EA50u) {
        ctx->pc = 0x26EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA4Cu;
        // 0x26ea50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA54u;
        goto label_26ea54;
    }
    ctx->pc = 0x26EA4Cu;
    SET_GPR_U32(ctx, 31, 0x26EA54u);
    ctx->pc = 0x26EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA4Cu;
    // 0x26ea50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26EA4Cu, 0x26EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA54u;
label_26ea54:
    // 0x26ea54: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x26ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26ea58:
    // 0x26ea58: 0xc05d4f6  jal         func_1753D8
label_26ea5c:
    if (ctx->pc == 0x26EA5Cu) {
        ctx->pc = 0x26EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA58u;
        // 0x26ea5c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA60u;
        goto label_26ea60;
    }
    ctx->pc = 0x26EA58u;
    SET_GPR_U32(ctx, 31, 0x26EA60u);
    ctx->pc = 0x26EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA58u;
    // 0x26ea5c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26EA58u, 0x26EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA60u;
label_26ea60:
    // 0x26ea60: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x26ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26ea64:
    // 0x26ea64: 0xc05d53a  jal         func_1754E8
label_26ea68:
    if (ctx->pc == 0x26EA68u) {
        ctx->pc = 0x26EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA64u;
        // 0x26ea68: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA6Cu;
        goto label_26ea6c;
    }
    ctx->pc = 0x26EA64u;
    SET_GPR_U32(ctx, 31, 0x26EA6Cu);
    ctx->pc = 0x26EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA64u;
    // 0x26ea68: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26EA64u, 0x26EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA6Cu;
label_26ea6c:
    // 0x26ea6c: 0xc041532  jal         func_1054C8
label_26ea70:
    if (ctx->pc == 0x26EA70u) {
        ctx->pc = 0x26EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA6Cu;
        // 0x26ea70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA74u;
        goto label_26ea74;
    }
    ctx->pc = 0x26EA6Cu;
    SET_GPR_U32(ctx, 31, 0x26EA74u);
    ctx->pc = 0x26EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA6Cu;
    // 0x26ea70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26EA6Cu, 0x26EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA74u;
label_26ea74:
    // 0x26ea74: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26ea74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ea78:
    // 0x26ea78: 0xc041532  jal         func_1054C8
label_26ea7c:
    if (ctx->pc == 0x26EA7Cu) {
        ctx->pc = 0x26EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA78u;
        // 0x26ea7c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA80u;
        goto label_26ea80;
    }
    ctx->pc = 0x26EA78u;
    SET_GPR_U32(ctx, 31, 0x26EA80u);
    ctx->pc = 0x26EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA78u;
    // 0x26ea7c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26EA78u, 0x26EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA80u;
label_26ea80:
    // 0x26ea80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26ea80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ea84:
    // 0x26ea84: 0x12c0001d  beqz        $s6, . + 4 + (0x1D << 2)
label_26ea88:
    if (ctx->pc == 0x26EA88u) {
        ctx->pc = 0x26EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA84u;
        // 0x26ea88: 0x26f20001  addiu       $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EA8Cu;
        goto label_26ea8c;
    }
    ctx->pc = 0x26EA84u;
    {
        const bool branch_taken_0x26ea84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA84u;
        // 0x26ea88: 0x26f20001  addiu       $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea84) {
            ctx->pc = 0x26EAFCu;
            goto label_26eafc;
        }
    }
    ctx->pc = 0x26EA8Cu;
label_26ea8c:
    // 0x26ea8c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26ea90:
    // 0x26ea90: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ea90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ea94:
    // 0x26ea94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ea98:
    // 0x26ea98: 0x40f809  jalr        $v0
label_26ea9c:
    if (ctx->pc == 0x26EA9Cu) {
        ctx->pc = 0x26EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA98u;
        // 0x26ea9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EAA0u;
        goto label_26eaa0;
    }
    ctx->pc = 0x26EA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26EAA0u);
        ctx->pc = 0x26EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA98u;
        // 0x26ea9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EA98u, 0x26EAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EAA0u;
label_26eaa0:
    // 0x26eaa0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26eaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26eaa4:
    // 0x26eaa4: 0x2406008b  addiu       $a2, $zero, 0x8B
    ctx->pc = 0x26eaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_26eaa8:
    // 0x26eaa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26eaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26eaac:
    // 0x26eaac: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x26eaacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26eab0:
    // 0x26eab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26eab4:
    // 0x26eab4: 0xc099e80  jal         func_267A00
label_26eab8:
    if (ctx->pc == 0x26EAB8u) {
        ctx->pc = 0x26EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAB4u;
        // 0x26eab8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EABCu;
        goto label_26eabc;
    }
    ctx->pc = 0x26EAB4u;
    SET_GPR_U32(ctx, 31, 0x26EABCu);
    ctx->pc = 0x26EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAB4u;
    // 0x26eab8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x26EAB4u, 0x26EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EABCu;
label_26eabc:
    // 0x26eabc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x26eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26eac0:
    // 0x26eac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26eac4:
    // 0x26eac4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26eac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26eac8:
    // 0x26eac8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26eacc:
    // 0x26eacc: 0x40f809  jalr        $v0
label_26ead0:
    if (ctx->pc == 0x26EAD0u) {
        ctx->pc = 0x26EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EACCu;
        // 0x26ead0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EAD4u;
        goto label_26ead4;
    }
    ctx->pc = 0x26EACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26EAD4u);
        ctx->pc = 0x26EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EACCu;
        // 0x26ead0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EACCu, 0x26EAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EAD4u;
label_26ead4:
    // 0x26ead4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ead4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ead8:
    // 0x26ead8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ead8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26eadc:
    // 0x26eadc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26eae0:
    // 0x26eae0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26eae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26eae4:
    // 0x26eae4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26eae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26eae8:
    // 0x26eae8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26eae8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26eaec:
    // 0x26eaec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26eaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26eaf0:
    // 0x26eaf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26eaf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26eaf4:
    // 0x26eaf4: 0xc04229e  jal         func_108A78
label_26eaf8:
    if (ctx->pc == 0x26EAF8u) {
        ctx->pc = 0x26EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAF4u;
        // 0x26eaf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EAFCu;
        goto label_26eafc;
    }
    ctx->pc = 0x26EAF4u;
    SET_GPR_U32(ctx, 31, 0x26EAFCu);
    ctx->pc = 0x26EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAF4u;
    // 0x26eaf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26EAF4u, 0x26EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EAFCu;
label_26eafc:
    // 0x26eafc: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26eb00:
    if (ctx->pc == 0x26EB00u) {
        ctx->pc = 0x26EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAFCu;
        // 0x26eb00: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB04u;
        goto label_26eb04;
    }
    ctx->pc = 0x26EAFCu;
    {
        const bool branch_taken_0x26eafc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAFCu;
        // 0x26eb00: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eafc) {
            ctx->pc = 0x26EB24u;
            goto label_26eb24;
        }
    }
    ctx->pc = 0x26EB04u;
label_26eb04:
    // 0x26eb04: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x26eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_26eb08:
    // 0x26eb08: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26eb08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26eb0c:
    // 0x26eb0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26eb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26eb10:
    // 0x26eb10: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26eb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26eb14:
    // 0x26eb14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26eb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26eb18:
    // 0x26eb18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26eb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26eb1c:
    // 0x26eb1c: 0xc041b20  jal         func_106C80
label_26eb20:
    if (ctx->pc == 0x26EB20u) {
        ctx->pc = 0x26EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB1Cu;
        // 0x26eb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB24u;
        goto label_26eb24;
    }
    ctx->pc = 0x26EB1Cu;
    SET_GPR_U32(ctx, 31, 0x26EB24u);
    ctx->pc = 0x26EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB1Cu;
    // 0x26eb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26EB1Cu, 0x26EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB24u;
label_26eb24:
    // 0x26eb24: 0xc05d484  jal         func_175210
label_26eb28:
    if (ctx->pc == 0x26EB28u) {
        ctx->pc = 0x26EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB24u;
        // 0x26eb28: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB2Cu;
        goto label_26eb2c;
    }
    ctx->pc = 0x26EB24u;
    SET_GPR_U32(ctx, 31, 0x26EB2Cu);
    ctx->pc = 0x26EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB24u;
    // 0x26eb28: 0x8e8400d8  lw          $a0, 0xD8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26EB24u, 0x26EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB2Cu;
label_26eb2c:
    // 0x26eb2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26eb30:
    // 0x26eb30: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26eb30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26eb34:
    // 0x26eb34: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26eb38:
    // 0x26eb38: 0xa0f809  jalr        $a1
label_26eb3c:
    if (ctx->pc == 0x26EB3Cu) {
        ctx->pc = 0x26EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB38u;
        // 0x26eb3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB40u;
        goto label_26eb40;
    }
    ctx->pc = 0x26EB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26EB40u);
        ctx->pc = 0x26EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB38u;
        // 0x26eb3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EB38u, 0x26EB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26EB40u;
label_26eb40:
    // 0x26eb40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26eb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26eb44:
    // 0x26eb44: 0xc087016  jal         func_21C058
label_26eb48:
    if (ctx->pc == 0x26EB48u) {
        ctx->pc = 0x26EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB44u;
        // 0x26eb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB4Cu;
        goto label_26eb4c;
    }
    ctx->pc = 0x26EB44u;
    SET_GPR_U32(ctx, 31, 0x26EB4Cu);
    ctx->pc = 0x26EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB44u;
    // 0x26eb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26EB44u, 0x26EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB4Cu;
label_26eb4c:
    // 0x26eb4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26eb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26eb50:
    // 0x26eb50: 0xc089990  jal         func_226640
label_26eb54:
    if (ctx->pc == 0x26EB54u) {
        ctx->pc = 0x26EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB50u;
        // 0x26eb54: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB58u;
        goto label_26eb58;
    }
    ctx->pc = 0x26EB50u;
    SET_GPR_U32(ctx, 31, 0x26EB58u);
    ctx->pc = 0x26EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB50u;
    // 0x26eb54: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26EB50u, 0x26EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB58u;
label_26eb58:
    // 0x26eb58: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26eb5c:
    // 0x26eb5c: 0xc05d4f6  jal         func_1753D8
label_26eb60:
    if (ctx->pc == 0x26EB60u) {
        ctx->pc = 0x26EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB5Cu;
        // 0x26eb60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB64u;
        goto label_26eb64;
    }
    ctx->pc = 0x26EB5Cu;
    SET_GPR_U32(ctx, 31, 0x26EB64u);
    ctx->pc = 0x26EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB5Cu;
    // 0x26eb60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26EB5Cu, 0x26EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB64u;
label_26eb64:
    // 0x26eb64: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26eb68:
    // 0x26eb68: 0xc05d53a  jal         func_1754E8
label_26eb6c:
    if (ctx->pc == 0x26EB6Cu) {
        ctx->pc = 0x26EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB68u;
        // 0x26eb6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB70u;
        goto label_26eb70;
    }
    ctx->pc = 0x26EB68u;
    SET_GPR_U32(ctx, 31, 0x26EB70u);
    ctx->pc = 0x26EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB68u;
    // 0x26eb6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26EB68u, 0x26EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB70u;
label_26eb70:
    // 0x26eb70: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26eb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26eb74:
    // 0x26eb74: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26eb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26eb78:
    // 0x26eb78: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26eb78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26eb7c:
    // 0x26eb7c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26eb7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26eb80:
    // 0x26eb80: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26eb80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26eb84:
    // 0x26eb84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26eb84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26eb88:
    // 0x26eb88: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26eb88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26eb8c:
    // 0x26eb8c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26eb8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26eb90:
    // 0x26eb90: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26eb90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26eb94:
    // 0x26eb94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26eb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26eb98:
    // 0x26eb98: 0x3e00008  jr          $ra
label_26eb9c:
    if (ctx->pc == 0x26EB9Cu) {
        ctx->pc = 0x26EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB98u;
        // 0x26eb9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EBA0u;
        goto label_fallthrough_0x26eb98;
    }
    ctx->pc = 0x26EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB98u;
        // 0x26eb9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26eb98:
    ctx->pc = 0x26EBA0u;
}
