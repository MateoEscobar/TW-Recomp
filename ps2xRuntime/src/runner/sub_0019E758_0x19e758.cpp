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

// Function: sub_0019E758
// Address: 0x19e758 - 0x19ed28
void sub_0019E758_0x19e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E758_0x19e758");
#endif

    switch (ctx->pc) {
        case 0x19e758u: goto label_19e758;
        case 0x19e75cu: goto label_19e75c;
        case 0x19e760u: goto label_19e760;
        case 0x19e764u: goto label_19e764;
        case 0x19e768u: goto label_19e768;
        case 0x19e76cu: goto label_19e76c;
        case 0x19e770u: goto label_19e770;
        case 0x19e774u: goto label_19e774;
        case 0x19e778u: goto label_19e778;
        case 0x19e77cu: goto label_19e77c;
        case 0x19e780u: goto label_19e780;
        case 0x19e784u: goto label_19e784;
        case 0x19e788u: goto label_19e788;
        case 0x19e78cu: goto label_19e78c;
        case 0x19e790u: goto label_19e790;
        case 0x19e794u: goto label_19e794;
        case 0x19e798u: goto label_19e798;
        case 0x19e79cu: goto label_19e79c;
        case 0x19e7a0u: goto label_19e7a0;
        case 0x19e7a4u: goto label_19e7a4;
        case 0x19e7a8u: goto label_19e7a8;
        case 0x19e7acu: goto label_19e7ac;
        case 0x19e7b0u: goto label_19e7b0;
        case 0x19e7b4u: goto label_19e7b4;
        case 0x19e7b8u: goto label_19e7b8;
        case 0x19e7bcu: goto label_19e7bc;
        case 0x19e7c0u: goto label_19e7c0;
        case 0x19e7c4u: goto label_19e7c4;
        case 0x19e7c8u: goto label_19e7c8;
        case 0x19e7ccu: goto label_19e7cc;
        case 0x19e7d0u: goto label_19e7d0;
        case 0x19e7d4u: goto label_19e7d4;
        case 0x19e7d8u: goto label_19e7d8;
        case 0x19e7dcu: goto label_19e7dc;
        case 0x19e7e0u: goto label_19e7e0;
        case 0x19e7e4u: goto label_19e7e4;
        case 0x19e7e8u: goto label_19e7e8;
        case 0x19e7ecu: goto label_19e7ec;
        case 0x19e7f0u: goto label_19e7f0;
        case 0x19e7f4u: goto label_19e7f4;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e7fcu: goto label_19e7fc;
        case 0x19e800u: goto label_19e800;
        case 0x19e804u: goto label_19e804;
        case 0x19e808u: goto label_19e808;
        case 0x19e80cu: goto label_19e80c;
        case 0x19e810u: goto label_19e810;
        case 0x19e814u: goto label_19e814;
        case 0x19e818u: goto label_19e818;
        case 0x19e81cu: goto label_19e81c;
        case 0x19e820u: goto label_19e820;
        case 0x19e824u: goto label_19e824;
        case 0x19e828u: goto label_19e828;
        case 0x19e82cu: goto label_19e82c;
        case 0x19e830u: goto label_19e830;
        case 0x19e834u: goto label_19e834;
        case 0x19e838u: goto label_19e838;
        case 0x19e83cu: goto label_19e83c;
        case 0x19e840u: goto label_19e840;
        case 0x19e844u: goto label_19e844;
        case 0x19e848u: goto label_19e848;
        case 0x19e84cu: goto label_19e84c;
        case 0x19e850u: goto label_19e850;
        case 0x19e854u: goto label_19e854;
        case 0x19e858u: goto label_19e858;
        case 0x19e85cu: goto label_19e85c;
        case 0x19e860u: goto label_19e860;
        case 0x19e864u: goto label_19e864;
        case 0x19e868u: goto label_19e868;
        case 0x19e86cu: goto label_19e86c;
        case 0x19e870u: goto label_19e870;
        case 0x19e874u: goto label_19e874;
        case 0x19e878u: goto label_19e878;
        case 0x19e87cu: goto label_19e87c;
        case 0x19e880u: goto label_19e880;
        case 0x19e884u: goto label_19e884;
        case 0x19e888u: goto label_19e888;
        case 0x19e88cu: goto label_19e88c;
        case 0x19e890u: goto label_19e890;
        case 0x19e894u: goto label_19e894;
        case 0x19e898u: goto label_19e898;
        case 0x19e89cu: goto label_19e89c;
        case 0x19e8a0u: goto label_19e8a0;
        case 0x19e8a4u: goto label_19e8a4;
        case 0x19e8a8u: goto label_19e8a8;
        case 0x19e8acu: goto label_19e8ac;
        case 0x19e8b0u: goto label_19e8b0;
        case 0x19e8b4u: goto label_19e8b4;
        case 0x19e8b8u: goto label_19e8b8;
        case 0x19e8bcu: goto label_19e8bc;
        case 0x19e8c0u: goto label_19e8c0;
        case 0x19e8c4u: goto label_19e8c4;
        case 0x19e8c8u: goto label_19e8c8;
        case 0x19e8ccu: goto label_19e8cc;
        case 0x19e8d0u: goto label_19e8d0;
        case 0x19e8d4u: goto label_19e8d4;
        case 0x19e8d8u: goto label_19e8d8;
        case 0x19e8dcu: goto label_19e8dc;
        case 0x19e8e0u: goto label_19e8e0;
        case 0x19e8e4u: goto label_19e8e4;
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e8ecu: goto label_19e8ec;
        case 0x19e8f0u: goto label_19e8f0;
        case 0x19e8f4u: goto label_19e8f4;
        case 0x19e8f8u: goto label_19e8f8;
        case 0x19e8fcu: goto label_19e8fc;
        case 0x19e900u: goto label_19e900;
        case 0x19e904u: goto label_19e904;
        case 0x19e908u: goto label_19e908;
        case 0x19e90cu: goto label_19e90c;
        case 0x19e910u: goto label_19e910;
        case 0x19e914u: goto label_19e914;
        case 0x19e918u: goto label_19e918;
        case 0x19e91cu: goto label_19e91c;
        case 0x19e920u: goto label_19e920;
        case 0x19e924u: goto label_19e924;
        case 0x19e928u: goto label_19e928;
        case 0x19e92cu: goto label_19e92c;
        case 0x19e930u: goto label_19e930;
        case 0x19e934u: goto label_19e934;
        case 0x19e938u: goto label_19e938;
        case 0x19e93cu: goto label_19e93c;
        case 0x19e940u: goto label_19e940;
        case 0x19e944u: goto label_19e944;
        case 0x19e948u: goto label_19e948;
        case 0x19e94cu: goto label_19e94c;
        case 0x19e950u: goto label_19e950;
        case 0x19e954u: goto label_19e954;
        case 0x19e958u: goto label_19e958;
        case 0x19e95cu: goto label_19e95c;
        case 0x19e960u: goto label_19e960;
        case 0x19e964u: goto label_19e964;
        case 0x19e968u: goto label_19e968;
        case 0x19e96cu: goto label_19e96c;
        case 0x19e970u: goto label_19e970;
        case 0x19e974u: goto label_19e974;
        case 0x19e978u: goto label_19e978;
        case 0x19e97cu: goto label_19e97c;
        case 0x19e980u: goto label_19e980;
        case 0x19e984u: goto label_19e984;
        case 0x19e988u: goto label_19e988;
        case 0x19e98cu: goto label_19e98c;
        case 0x19e990u: goto label_19e990;
        case 0x19e994u: goto label_19e994;
        case 0x19e998u: goto label_19e998;
        case 0x19e99cu: goto label_19e99c;
        case 0x19e9a0u: goto label_19e9a0;
        case 0x19e9a4u: goto label_19e9a4;
        case 0x19e9a8u: goto label_19e9a8;
        case 0x19e9acu: goto label_19e9ac;
        case 0x19e9b0u: goto label_19e9b0;
        case 0x19e9b4u: goto label_19e9b4;
        case 0x19e9b8u: goto label_19e9b8;
        case 0x19e9bcu: goto label_19e9bc;
        case 0x19e9c0u: goto label_19e9c0;
        case 0x19e9c4u: goto label_19e9c4;
        case 0x19e9c8u: goto label_19e9c8;
        case 0x19e9ccu: goto label_19e9cc;
        case 0x19e9d0u: goto label_19e9d0;
        case 0x19e9d4u: goto label_19e9d4;
        case 0x19e9d8u: goto label_19e9d8;
        case 0x19e9dcu: goto label_19e9dc;
        case 0x19e9e0u: goto label_19e9e0;
        case 0x19e9e4u: goto label_19e9e4;
        case 0x19e9e8u: goto label_19e9e8;
        case 0x19e9ecu: goto label_19e9ec;
        case 0x19e9f0u: goto label_19e9f0;
        case 0x19e9f4u: goto label_19e9f4;
        case 0x19e9f8u: goto label_19e9f8;
        case 0x19e9fcu: goto label_19e9fc;
        case 0x19ea00u: goto label_19ea00;
        case 0x19ea04u: goto label_19ea04;
        case 0x19ea08u: goto label_19ea08;
        case 0x19ea0cu: goto label_19ea0c;
        case 0x19ea10u: goto label_19ea10;
        case 0x19ea14u: goto label_19ea14;
        case 0x19ea18u: goto label_19ea18;
        case 0x19ea1cu: goto label_19ea1c;
        case 0x19ea20u: goto label_19ea20;
        case 0x19ea24u: goto label_19ea24;
        case 0x19ea28u: goto label_19ea28;
        case 0x19ea2cu: goto label_19ea2c;
        case 0x19ea30u: goto label_19ea30;
        case 0x19ea34u: goto label_19ea34;
        case 0x19ea38u: goto label_19ea38;
        case 0x19ea3cu: goto label_19ea3c;
        case 0x19ea40u: goto label_19ea40;
        case 0x19ea44u: goto label_19ea44;
        case 0x19ea48u: goto label_19ea48;
        case 0x19ea4cu: goto label_19ea4c;
        case 0x19ea50u: goto label_19ea50;
        case 0x19ea54u: goto label_19ea54;
        case 0x19ea58u: goto label_19ea58;
        case 0x19ea5cu: goto label_19ea5c;
        case 0x19ea60u: goto label_19ea60;
        case 0x19ea64u: goto label_19ea64;
        case 0x19ea68u: goto label_19ea68;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea70u: goto label_19ea70;
        case 0x19ea74u: goto label_19ea74;
        case 0x19ea78u: goto label_19ea78;
        case 0x19ea7cu: goto label_19ea7c;
        case 0x19ea80u: goto label_19ea80;
        case 0x19ea84u: goto label_19ea84;
        case 0x19ea88u: goto label_19ea88;
        case 0x19ea8cu: goto label_19ea8c;
        case 0x19ea90u: goto label_19ea90;
        case 0x19ea94u: goto label_19ea94;
        case 0x19ea98u: goto label_19ea98;
        case 0x19ea9cu: goto label_19ea9c;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19eaa4u: goto label_19eaa4;
        case 0x19eaa8u: goto label_19eaa8;
        case 0x19eaacu: goto label_19eaac;
        case 0x19eab0u: goto label_19eab0;
        case 0x19eab4u: goto label_19eab4;
        case 0x19eab8u: goto label_19eab8;
        case 0x19eabcu: goto label_19eabc;
        case 0x19eac0u: goto label_19eac0;
        case 0x19eac4u: goto label_19eac4;
        case 0x19eac8u: goto label_19eac8;
        case 0x19eaccu: goto label_19eacc;
        case 0x19ead0u: goto label_19ead0;
        case 0x19ead4u: goto label_19ead4;
        case 0x19ead8u: goto label_19ead8;
        case 0x19eadcu: goto label_19eadc;
        case 0x19eae0u: goto label_19eae0;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eae8u: goto label_19eae8;
        case 0x19eaecu: goto label_19eaec;
        case 0x19eaf0u: goto label_19eaf0;
        case 0x19eaf4u: goto label_19eaf4;
        case 0x19eaf8u: goto label_19eaf8;
        case 0x19eafcu: goto label_19eafc;
        case 0x19eb00u: goto label_19eb00;
        case 0x19eb04u: goto label_19eb04;
        case 0x19eb08u: goto label_19eb08;
        case 0x19eb0cu: goto label_19eb0c;
        case 0x19eb10u: goto label_19eb10;
        case 0x19eb14u: goto label_19eb14;
        case 0x19eb18u: goto label_19eb18;
        case 0x19eb1cu: goto label_19eb1c;
        case 0x19eb20u: goto label_19eb20;
        case 0x19eb24u: goto label_19eb24;
        case 0x19eb28u: goto label_19eb28;
        case 0x19eb2cu: goto label_19eb2c;
        case 0x19eb30u: goto label_19eb30;
        case 0x19eb34u: goto label_19eb34;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb3cu: goto label_19eb3c;
        case 0x19eb40u: goto label_19eb40;
        case 0x19eb44u: goto label_19eb44;
        case 0x19eb48u: goto label_19eb48;
        case 0x19eb4cu: goto label_19eb4c;
        case 0x19eb50u: goto label_19eb50;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb58u: goto label_19eb58;
        case 0x19eb5cu: goto label_19eb5c;
        case 0x19eb60u: goto label_19eb60;
        case 0x19eb64u: goto label_19eb64;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb6cu: goto label_19eb6c;
        case 0x19eb70u: goto label_19eb70;
        case 0x19eb74u: goto label_19eb74;
        case 0x19eb78u: goto label_19eb78;
        case 0x19eb7cu: goto label_19eb7c;
        case 0x19eb80u: goto label_19eb80;
        case 0x19eb84u: goto label_19eb84;
        case 0x19eb88u: goto label_19eb88;
        case 0x19eb8cu: goto label_19eb8c;
        case 0x19eb90u: goto label_19eb90;
        case 0x19eb94u: goto label_19eb94;
        case 0x19eb98u: goto label_19eb98;
        case 0x19eb9cu: goto label_19eb9c;
        case 0x19eba0u: goto label_19eba0;
        case 0x19eba4u: goto label_19eba4;
        case 0x19eba8u: goto label_19eba8;
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb0u: goto label_19ebb0;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebb8u: goto label_19ebb8;
        case 0x19ebbcu: goto label_19ebbc;
        case 0x19ebc0u: goto label_19ebc0;
        case 0x19ebc4u: goto label_19ebc4;
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebd0u: goto label_19ebd0;
        case 0x19ebd4u: goto label_19ebd4;
        case 0x19ebd8u: goto label_19ebd8;
        case 0x19ebdcu: goto label_19ebdc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebe4u: goto label_19ebe4;
        case 0x19ebe8u: goto label_19ebe8;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ebf8u: goto label_19ebf8;
        case 0x19ebfcu: goto label_19ebfc;
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec04u: goto label_19ec04;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec0cu: goto label_19ec0c;
        case 0x19ec10u: goto label_19ec10;
        case 0x19ec14u: goto label_19ec14;
        case 0x19ec18u: goto label_19ec18;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec20u: goto label_19ec20;
        case 0x19ec24u: goto label_19ec24;
        case 0x19ec28u: goto label_19ec28;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec34u: goto label_19ec34;
        case 0x19ec38u: goto label_19ec38;
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec40u: goto label_19ec40;
        case 0x19ec44u: goto label_19ec44;
        case 0x19ec48u: goto label_19ec48;
        case 0x19ec4cu: goto label_19ec4c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec54u: goto label_19ec54;
        case 0x19ec58u: goto label_19ec58;
        case 0x19ec5cu: goto label_19ec5c;
        case 0x19ec60u: goto label_19ec60;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec68u: goto label_19ec68;
        case 0x19ec6cu: goto label_19ec6c;
        case 0x19ec70u: goto label_19ec70;
        case 0x19ec74u: goto label_19ec74;
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec80u: goto label_19ec80;
        case 0x19ec84u: goto label_19ec84;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec8cu: goto label_19ec8c;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ec94u: goto label_19ec94;
        case 0x19ec98u: goto label_19ec98;
        case 0x19ec9cu: goto label_19ec9c;
        case 0x19eca0u: goto label_19eca0;
        case 0x19eca4u: goto label_19eca4;
        case 0x19eca8u: goto label_19eca8;
        case 0x19ecacu: goto label_19ecac;
        case 0x19ecb0u: goto label_19ecb0;
        case 0x19ecb4u: goto label_19ecb4;
        case 0x19ecb8u: goto label_19ecb8;
        case 0x19ecbcu: goto label_19ecbc;
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ecc4u: goto label_19ecc4;
        case 0x19ecc8u: goto label_19ecc8;
        case 0x19ecccu: goto label_19eccc;
        case 0x19ecd0u: goto label_19ecd0;
        case 0x19ecd4u: goto label_19ecd4;
        case 0x19ecd8u: goto label_19ecd8;
        case 0x19ecdcu: goto label_19ecdc;
        case 0x19ece0u: goto label_19ece0;
        case 0x19ece4u: goto label_19ece4;
        case 0x19ece8u: goto label_19ece8;
        case 0x19ececu: goto label_19ecec;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ecf4u: goto label_19ecf4;
        case 0x19ecf8u: goto label_19ecf8;
        case 0x19ecfcu: goto label_19ecfc;
        case 0x19ed00u: goto label_19ed00;
        case 0x19ed04u: goto label_19ed04;
        case 0x19ed08u: goto label_19ed08;
        case 0x19ed0cu: goto label_19ed0c;
        case 0x19ed10u: goto label_19ed10;
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed18u: goto label_19ed18;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed20u: goto label_19ed20;
        case 0x19ed24u: goto label_19ed24;
        default: break;
    }

    ctx->pc = 0x19e758u;

label_19e758:
    // 0x19e758: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19e758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_19e75c:
    // 0x19e75c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x19e75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_19e760:
    // 0x19e760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19e760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e764:
    // 0x19e764: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x19e764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_19e768:
    // 0x19e768: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x19e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_19e76c:
    // 0x19e76c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x19e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_19e770:
    // 0x19e770: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x19e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_19e774:
    // 0x19e774: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_19e778:
    // 0x19e778: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x19e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_19e77c:
    // 0x19e77c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x19e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_19e780:
    // 0x19e780: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x19e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_19e784:
    // 0x19e784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19e788:
    // 0x19e788: 0xc067998  jal         func_19E660
label_19e78c:
    if (ctx->pc == 0x19E78Cu) {
        ctx->pc = 0x19E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E788u;
        // 0x19e78c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E790u;
        goto label_19e790;
    }
    ctx->pc = 0x19E788u;
    SET_GPR_U32(ctx, 31, 0x19E790u);
    ctx->pc = 0x19E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E788u;
    // 0x19e78c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E660u, 0x19E788u, 0x19E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E790u;
label_19e790:
    // 0x19e790: 0x925003d0  lbu         $s0, 0x3D0($s2)
    ctx->pc = 0x19e790u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 976)));
label_19e794:
    // 0x19e794: 0x1600003f  bnez        $s0, . + 4 + (0x3F << 2)
label_19e798:
    if (ctx->pc == 0x19E798u) {
        ctx->pc = 0x19E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E794u;
        // 0x19e798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E79Cu;
        goto label_19e79c;
    }
    ctx->pc = 0x19E794u;
    {
        const bool branch_taken_0x19e794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E794u;
        // 0x19e798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e794) {
            ctx->pc = 0x19E894u;
            goto label_19e894;
        }
    }
    ctx->pc = 0x19E79Cu;
label_19e79c:
    // 0x19e79c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e7a0:
    // 0x19e7a0: 0xc073470  jal         func_1CD1C0
label_19e7a4:
    if (ctx->pc == 0x19E7A4u) {
        ctx->pc = 0x19E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7A0u;
        // 0x19e7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7A8u;
        goto label_19e7a8;
    }
    ctx->pc = 0x19E7A0u;
    SET_GPR_U32(ctx, 31, 0x19E7A8u);
    ctx->pc = 0x19E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7A0u;
    // 0x19e7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C0u, 0x19E7A0u, 0x19E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7A8u;
label_19e7a8:
    // 0x19e7a8: 0x924203d1  lbu         $v0, 0x3D1($s2)
    ctx->pc = 0x19e7a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 977)));
label_19e7ac:
    // 0x19e7ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19e7b0:
    if (ctx->pc == 0x19E7B0u) {
        ctx->pc = 0x19E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7ACu;
        // 0x19e7b0: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7B4u;
        goto label_19e7b4;
    }
    ctx->pc = 0x19E7ACu;
    {
        const bool branch_taken_0x19e7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7ACu;
        // 0x19e7b0: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7ac) {
            ctx->pc = 0x19E7D8u;
            goto label_19e7d8;
        }
    }
    ctx->pc = 0x19E7B4u;
label_19e7b4:
    // 0x19e7b4: 0x264600d0  addiu       $a2, $s2, 0xD0
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_19e7b8:
    // 0x19e7b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e7bc:
    // 0x19e7bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19e7bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e7c0:
    // 0x19e7c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19e7c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19e7c4:
    // 0x19e7c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19e7c8:
    // 0x19e7c8: 0x40f809  jalr        $v0
label_19e7cc:
    if (ctx->pc == 0x19E7CCu) {
        ctx->pc = 0x19E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7C8u;
        // 0x19e7cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7D0u;
        goto label_19e7d0;
    }
    ctx->pc = 0x19E7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E7D0u);
        ctx->pc = 0x19E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7C8u;
        // 0x19e7cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7C8u, 0x19E7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E7D0u;
label_19e7d0:
    // 0x19e7d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_19e7d4:
    if (ctx->pc == 0x19E7D4u) {
        ctx->pc = 0x19E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D0u;
        // 0x19e7d4: 0x8e4201d0  lw          $v0, 0x1D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7D8u;
        goto label_19e7d8;
    }
    ctx->pc = 0x19E7D0u;
    {
        const bool branch_taken_0x19e7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D0u;
        // 0x19e7d4: 0x8e4201d0  lw          $v0, 0x1D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7d0) {
            ctx->pc = 0x19E7F8u;
            goto label_19e7f8;
        }
    }
    ctx->pc = 0x19E7D8u;
label_19e7d8:
    // 0x19e7d8: 0x264600d0  addiu       $a2, $s2, 0xD0
    ctx->pc = 0x19e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_19e7dc:
    // 0x19e7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e7e0:
    // 0x19e7e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19e7e4:
    // 0x19e7e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19e7e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e7e8:
    // 0x19e7e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19e7ec:
    // 0x19e7ec: 0x40f809  jalr        $v0
label_19e7f0:
    if (ctx->pc == 0x19E7F0u) {
        ctx->pc = 0x19E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7ECu;
        // 0x19e7f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7F4u;
        goto label_19e7f4;
    }
    ctx->pc = 0x19E7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E7F4u);
        ctx->pc = 0x19E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7ECu;
        // 0x19e7f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7ECu, 0x19E7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E7F4u;
label_19e7f4:
    // 0x19e7f4: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x19e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_19e7f8:
    // 0x19e7f8: 0x264301d0  addiu       $v1, $s2, 0x1D0
    ctx->pc = 0x19e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_19e7fc:
    // 0x19e7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e800:
    // 0x19e800: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e804:
    // 0x19e804: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x19e804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e808:
    // 0x19e808: 0xc0f809  jalr        $a2
label_19e80c:
    if (ctx->pc == 0x19E80Cu) {
        ctx->pc = 0x19E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E808u;
        // 0x19e80c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E810u;
        goto label_19e810;
    }
    ctx->pc = 0x19E808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19E810u);
        ctx->pc = 0x19E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E808u;
        // 0x19e80c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E808u, 0x19E810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E810u;
label_19e810:
    // 0x19e810: 0x8e4302d0  lw          $v1, 0x2D0($s2)
    ctx->pc = 0x19e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
label_19e814:
    // 0x19e814: 0x264602d0  addiu       $a2, $s2, 0x2D0
    ctx->pc = 0x19e814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_19e818:
    // 0x19e818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e81c:
    // 0x19e81c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19e81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19e820:
    // 0x19e820: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19e824:
    // 0x19e824: 0x40f809  jalr        $v0
label_19e828:
    if (ctx->pc == 0x19E828u) {
        ctx->pc = 0x19E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E824u;
        // 0x19e828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E82Cu;
        goto label_19e82c;
    }
    ctx->pc = 0x19E824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E82Cu);
        ctx->pc = 0x19E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E824u;
        // 0x19e828: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E824u, 0x19E82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E82Cu;
label_19e82c:
    // 0x19e82c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19e830:
    // 0x19e830: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e834:
    // 0x19e834: 0xc462cf6c  lwc1        $f2, -0x3094($v1)
    ctx->pc = 0x19e834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e838:
    // 0x19e838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19e838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e83c:
    // 0x19e83c: 0xc441cf70  lwc1        $f1, -0x3090($v0)
    ctx->pc = 0x19e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e840:
    // 0x19e840: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e844:
    // 0x19e844: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19e848:
    // 0x19e848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e84c:
    // 0x19e84c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19e84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19e850:
    // 0x19e850: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19e850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19e854:
    // 0x19e854: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x19e854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19e858:
    // 0x19e858: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19e858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19e85c:
    // 0x19e85c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x19e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_19e860:
    // 0x19e860: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_19e864:
    // 0x19e864: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19e868:
    // 0x19e868: 0x60f809  jalr        $v1
label_19e86c:
    if (ctx->pc == 0x19E86Cu) {
        ctx->pc = 0x19E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E868u;
        // 0x19e86c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E870u;
        goto label_19e870;
    }
    ctx->pc = 0x19E868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E870u);
        ctx->pc = 0x19E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E868u;
        // 0x19e86c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E868u, 0x19E870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E870u;
label_19e870:
    // 0x19e870: 0x8e4500d0  lw          $a1, 0xD0($s2)
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_19e874:
    // 0x19e874: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e878:
    // 0x19e878: 0xc44ccf74  lwc1        $f12, -0x308C($v0)
    ctx->pc = 0x19e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19e87c:
    // 0x19e87c: 0x84a40090  lh          $a0, 0x90($a1)
    ctx->pc = 0x19e87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 144)));
label_19e880:
    // 0x19e880: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x19e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_19e884:
    // 0x19e884: 0x40f809  jalr        $v0
label_19e888:
    if (ctx->pc == 0x19E888u) {
        ctx->pc = 0x19E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E884u;
        // 0x19e888: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E88Cu;
        goto label_19e88c;
    }
    ctx->pc = 0x19E884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E88Cu);
        ctx->pc = 0x19E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E884u;
        // 0x19e888: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E884u, 0x19E88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E88Cu;
label_19e88c:
    // 0x19e88c: 0x100000bb  b           . + 4 + (0xBB << 2)
label_19e890:
    if (ctx->pc == 0x19E890u) {
        ctx->pc = 0x19E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E88Cu;
        // 0x19e890: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E894u;
        goto label_19e894;
    }
    ctx->pc = 0x19E88Cu;
    {
        const bool branch_taken_0x19e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E88Cu;
        // 0x19e890: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e88c) {
            ctx->pc = 0x19EB7Cu;
            goto label_19eb7c;
        }
    }
    ctx->pc = 0x19E894u;
label_19e894:
    // 0x19e894: 0x160200a8  bne         $s0, $v0, . + 4 + (0xA8 << 2)
label_19e898:
    if (ctx->pc == 0x19E898u) {
        ctx->pc = 0x19E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E894u;
        // 0x19e898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E89Cu;
        goto label_19e89c;
    }
    ctx->pc = 0x19E894u;
    {
        const bool branch_taken_0x19e894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E894u;
        // 0x19e898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e894) {
            ctx->pc = 0x19EB38u;
            goto label_19eb38;
        }
    }
    ctx->pc = 0x19E89Cu;
label_19e89c:
    // 0x19e89c: 0xc073470  jal         func_1CD1C0
label_19e8a0:
    if (ctx->pc == 0x19E8A0u) {
        ctx->pc = 0x19E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E89Cu;
        // 0x19e8a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8A4u;
        goto label_19e8a4;
    }
    ctx->pc = 0x19E89Cu;
    SET_GPR_U32(ctx, 31, 0x19E8A4u);
    ctx->pc = 0x19E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E89Cu;
    // 0x19e8a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C0u, 0x19E89Cu, 0x19E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8A4u;
label_19e8a4:
    // 0x19e8a4: 0x924303d1  lbu         $v1, 0x3D1($s2)
    ctx->pc = 0x19e8a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 977)));
label_19e8a8:
    // 0x19e8a8: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_19e8ac:
    if (ctx->pc == 0x19E8ACu) {
        ctx->pc = 0x19E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A8u;
        // 0x19e8ac: 0x264600d0  addiu       $a2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8B0u;
        goto label_19e8b0;
    }
    ctx->pc = 0x19E8A8u;
    {
        const bool branch_taken_0x19e8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A8u;
        // 0x19e8ac: 0x264600d0  addiu       $a2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8a8) {
            ctx->pc = 0x19E904u;
            goto label_19e904;
        }
    }
    ctx->pc = 0x19E8B0u;
label_19e8b0:
    // 0x19e8b0: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x19e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_19e8b4:
    // 0x19e8b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19e8b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e8b8:
    // 0x19e8b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e8bc:
    // 0x19e8bc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e8c0:
    // 0x19e8c0: 0x265001d0  addiu       $s0, $s2, 0x1D0
    ctx->pc = 0x19e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_19e8c4:
    // 0x19e8c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e8c8:
    // 0x19e8c8: 0x265102d0  addiu       $s1, $s2, 0x2D0
    ctx->pc = 0x19e8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_19e8cc:
    // 0x19e8cc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_19e8d0:
    // 0x19e8d0: 0x60f809  jalr        $v1
label_19e8d4:
    if (ctx->pc == 0x19E8D4u) {
        ctx->pc = 0x19E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D0u;
        // 0x19e8d4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8D8u;
        goto label_19e8d8;
    }
    ctx->pc = 0x19E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E8D8u);
        ctx->pc = 0x19E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D0u;
        // 0x19e8d4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E8D0u, 0x19E8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E8D8u;
label_19e8d8:
    // 0x19e8d8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x19e8d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e8dc:
    // 0x19e8dc: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x19e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_19e8e0:
    // 0x19e8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e8e4:
    // 0x19e8e4: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x19e8e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_19e8e8:
    // 0x19e8e8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e8e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e8ec:
    // 0x19e8ec: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e8f0:
    // 0x19e8f0: 0x60f809  jalr        $v1
label_19e8f4:
    if (ctx->pc == 0x19E8F4u) {
        ctx->pc = 0x19E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8F0u;
        // 0x19e8f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8F8u;
        goto label_19e8f8;
    }
    ctx->pc = 0x19E8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E8F8u);
        ctx->pc = 0x19E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8F0u;
        // 0x19e8f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E8F0u, 0x19E8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E8F8u;
label_19e8f8:
    // 0x19e8f8: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x19e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
label_19e8fc:
    // 0x19e8fc: 0x10000030  b           . + 4 + (0x30 << 2)
label_19e900:
    if (ctx->pc == 0x19E900u) {
        ctx->pc = 0x19E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8FCu;
        // 0x19e900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E904u;
        goto label_19e904;
    }
    ctx->pc = 0x19E8FCu;
    {
        const bool branch_taken_0x19e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8FCu;
        // 0x19e900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8fc) {
            ctx->pc = 0x19E9C0u;
            goto label_19e9c0;
        }
    }
    ctx->pc = 0x19E904u;
label_19e904:
    // 0x19e904: 0x14700017  bne         $v1, $s0, . + 4 + (0x17 << 2)
label_19e908:
    if (ctx->pc == 0x19E908u) {
        ctx->pc = 0x19E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E904u;
        // 0x19e908: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E90Cu;
        goto label_19e90c;
    }
    ctx->pc = 0x19E904u;
    {
        const bool branch_taken_0x19e904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x19E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E904u;
        // 0x19e908: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e904) {
            ctx->pc = 0x19E964u;
            goto label_19e964;
        }
    }
    ctx->pc = 0x19E90Cu;
label_19e90c:
    // 0x19e90c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x19e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_19e910:
    // 0x19e910: 0x264600d0  addiu       $a2, $s2, 0xD0
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_19e914:
    // 0x19e914: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19e914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e918:
    // 0x19e918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e91c:
    // 0x19e91c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e920:
    // 0x19e920: 0x265001d0  addiu       $s0, $s2, 0x1D0
    ctx->pc = 0x19e920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_19e924:
    // 0x19e924: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e928:
    // 0x19e928: 0x265102d0  addiu       $s1, $s2, 0x2D0
    ctx->pc = 0x19e928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_19e92c:
    // 0x19e92c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_19e930:
    // 0x19e930: 0x60f809  jalr        $v1
label_19e934:
    if (ctx->pc == 0x19E934u) {
        ctx->pc = 0x19E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E930u;
        // 0x19e934: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E938u;
        goto label_19e938;
    }
    ctx->pc = 0x19E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E938u);
        ctx->pc = 0x19E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E930u;
        // 0x19e934: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E930u, 0x19E938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E938u;
label_19e938:
    // 0x19e938: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x19e938u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e93c:
    // 0x19e93c: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x19e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_19e940:
    // 0x19e940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e944:
    // 0x19e944: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_19e948:
    // 0x19e948: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e94c:
    // 0x19e94c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e950:
    // 0x19e950: 0x60f809  jalr        $v1
label_19e954:
    if (ctx->pc == 0x19E954u) {
        ctx->pc = 0x19E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E950u;
        // 0x19e954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E958u;
        goto label_19e958;
    }
    ctx->pc = 0x19E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E958u);
        ctx->pc = 0x19E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E950u;
        // 0x19e954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E950u, 0x19E958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E958u;
label_19e958:
    // 0x19e958: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x19e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
label_19e95c:
    // 0x19e95c: 0x10000018  b           . + 4 + (0x18 << 2)
label_19e960:
    if (ctx->pc == 0x19E960u) {
        ctx->pc = 0x19E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E95Cu;
        // 0x19e960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E964u;
        goto label_19e964;
    }
    ctx->pc = 0x19E95Cu;
    {
        const bool branch_taken_0x19e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E95Cu;
        // 0x19e960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e95c) {
            ctx->pc = 0x19E9C0u;
            goto label_19e9c0;
        }
    }
    ctx->pc = 0x19E964u;
label_19e964:
    // 0x19e964: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
label_19e968:
    if (ctx->pc == 0x19E968u) {
        ctx->pc = 0x19E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E964u;
        // 0x19e968: 0x265400d0  addiu       $s4, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E96Cu;
        goto label_19e96c;
    }
    ctx->pc = 0x19E964u;
    {
        const bool branch_taken_0x19e964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e964) {
            ctx->pc = 0x19E968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E964u;
            // 0x19e968: 0x265400d0  addiu       $s4, $s2, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E9D8u;
            goto label_19e9d8;
        }
    }
    ctx->pc = 0x19E96Cu;
label_19e96c:
    // 0x19e96c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x19e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_19e970:
    // 0x19e970: 0x264600d0  addiu       $a2, $s2, 0xD0
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_19e974:
    // 0x19e974: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19e974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e978:
    // 0x19e978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e97c:
    // 0x19e97c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e980:
    // 0x19e980: 0x265001d0  addiu       $s0, $s2, 0x1D0
    ctx->pc = 0x19e980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_19e984:
    // 0x19e984: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e988:
    // 0x19e988: 0x265102d0  addiu       $s1, $s2, 0x2D0
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_19e98c:
    // 0x19e98c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_19e990:
    // 0x19e990: 0x60f809  jalr        $v1
label_19e994:
    if (ctx->pc == 0x19E994u) {
        ctx->pc = 0x19E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E990u;
        // 0x19e994: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E998u;
        goto label_19e998;
    }
    ctx->pc = 0x19E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E998u);
        ctx->pc = 0x19E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E990u;
        // 0x19e994: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E990u, 0x19E998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E998u;
label_19e998:
    // 0x19e998: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x19e998u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e99c:
    // 0x19e99c: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x19e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_19e9a0:
    // 0x19e9a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e9a4:
    // 0x19e9a4: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x19e9a4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_19e9a8:
    // 0x19e9a8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e9a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e9ac:
    // 0x19e9ac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e9b0:
    // 0x19e9b0: 0x60f809  jalr        $v1
label_19e9b4:
    if (ctx->pc == 0x19E9B4u) {
        ctx->pc = 0x19E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9B0u;
        // 0x19e9b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9B8u;
        goto label_19e9b8;
    }
    ctx->pc = 0x19E9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E9B8u);
        ctx->pc = 0x19E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9B0u;
        // 0x19e9b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E9B0u, 0x19E9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E9B8u;
label_19e9b8:
    // 0x19e9b8: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x19e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
label_19e9bc:
    // 0x19e9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e9c0:
    // 0x19e9c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x19e9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19e9c4:
    // 0x19e9c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_19e9c8:
    // 0x19e9c8: 0x60f809  jalr        $v1
label_19e9cc:
    if (ctx->pc == 0x19E9CCu) {
        ctx->pc = 0x19E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9C8u;
        // 0x19e9cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9D0u;
        goto label_19e9d0;
    }
    ctx->pc = 0x19E9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E9D0u);
        ctx->pc = 0x19E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9C8u;
        // 0x19e9cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E9C8u, 0x19E9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E9D0u;
label_19e9d0:
    // 0x19e9d0: 0x10000014  b           . + 4 + (0x14 << 2)
label_19e9d4:
    if (ctx->pc == 0x19E9D4u) {
        ctx->pc = 0x19E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9D0u;
        // 0x19e9d4: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9D8u;
        goto label_19e9d8;
    }
    ctx->pc = 0x19E9D0u;
    {
        const bool branch_taken_0x19e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9D0u;
        // 0x19e9d4: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9d0) {
            ctx->pc = 0x19EA24u;
            goto label_19ea24;
        }
    }
    ctx->pc = 0x19E9D8u;
label_19e9d8:
    // 0x19e9d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19e9d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e9dc:
    // 0x19e9dc: 0x265601d0  addiu       $s6, $s2, 0x1D0
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_19e9e0:
    // 0x19e9e0: 0x265702d0  addiu       $s7, $s2, 0x2D0
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_19e9e4:
    // 0x19e9e4: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x19e9e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_19e9e8:
    // 0x19e9e8: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x19e9e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19e9ec:
    // 0x19e9ec: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x19e9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19e9f0:
    // 0x19e9f0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x19e9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19e9f4:
    // 0x19e9f4: 0x0  nop
    ctx->pc = 0x19e9f4u;
    // NOP
label_19e9f8:
    // 0x19e9f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e9fc:
    // 0x19e9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ea00:
    // 0x19ea00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19ea00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19ea04:
    // 0x19ea04: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_19ea08:
    // 0x19ea08: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19ea08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19ea0c:
    // 0x19ea0c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19ea10:
    // 0x19ea10: 0x40f809  jalr        $v0
label_19ea14:
    if (ctx->pc == 0x19EA14u) {
        ctx->pc = 0x19EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA10u;
        // 0x19ea14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA18u;
        goto label_19ea18;
    }
    ctx->pc = 0x19EA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EA18u);
        ctx->pc = 0x19EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA10u;
        // 0x19ea14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA10u, 0x19EA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EA18u;
label_19ea18:
    // 0x19ea18: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19ea1c:
    // 0x19ea1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_19ea20:
    if (ctx->pc == 0x19EA20u) {
        ctx->pc = 0x19EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA1Cu;
        // 0x19ea20: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA24u;
        goto label_19ea24;
    }
    ctx->pc = 0x19EA1Cu;
    {
        const bool branch_taken_0x19ea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA1Cu;
        // 0x19ea20: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea1c) {
            ctx->pc = 0x19E9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e9f8;
        }
    }
    ctx->pc = 0x19EA24u;
label_19ea24:
    // 0x19ea24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19ea28:
    // 0x19ea28: 0xc7c0cf80  lwc1        $f0, -0x3080($fp)
    ctx->pc = 0x19ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ea2c:
    // 0x19ea2c: 0xc441cf7c  lwc1        $f1, -0x3084($v0)
    ctx->pc = 0x19ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ea30:
    // 0x19ea30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ea30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19ea34:
    // 0x19ea34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19ea38:
    // 0x19ea38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ea38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19ea3c:
    // 0x19ea3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ea40:
    // 0x19ea40: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x19ea40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19ea44:
    // 0x19ea44: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19ea44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19ea48:
    // 0x19ea48: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19ea4c:
    // 0x19ea4c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19ea4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19ea50:
    // 0x19ea50: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x19ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_19ea54:
    // 0x19ea54: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x19ea54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_19ea58:
    // 0x19ea58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19ea5c:
    // 0x19ea5c: 0x60f809  jalr        $v1
label_19ea60:
    if (ctx->pc == 0x19EA60u) {
        ctx->pc = 0x19EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA5Cu;
        // 0x19ea60: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA64u;
        goto label_19ea64;
    }
    ctx->pc = 0x19EA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EA64u);
        ctx->pc = 0x19EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA5Cu;
        // 0x19ea60: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA5Cu, 0x19EA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EA64u;
label_19ea64:
    // 0x19ea64: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x19ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_19ea68:
    // 0x19ea68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19ea6c:
    // 0x19ea6c: 0xc46ccf78  lwc1        $f12, -0x3088($v1)
    ctx->pc = 0x19ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19ea70:
    // 0x19ea70: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x19ea70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_19ea74:
    // 0x19ea74: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x19ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_19ea78:
    // 0x19ea78: 0x60f809  jalr        $v1
label_19ea7c:
    if (ctx->pc == 0x19EA7Cu) {
        ctx->pc = 0x19EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA78u;
        // 0x19ea7c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA80u;
        goto label_19ea80;
    }
    ctx->pc = 0x19EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EA80u);
        ctx->pc = 0x19EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA78u;
        // 0x19ea7c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA78u, 0x19EA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EA80u;
label_19ea80:
    // 0x19ea80: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x19ea80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_19ea84:
    // 0x19ea84: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_19ea88:
    // 0x19ea88: 0xc4c1cf84  lwc1        $f1, -0x307C($a2)
    ctx->pc = 0x19ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294954884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ea8c:
    // 0x19ea8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ea8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19ea90:
    // 0x19ea90: 0xc4e0cf88  lwc1        $f0, -0x3078($a3)
    ctx->pc = 0x19ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294954888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ea94:
    // 0x19ea94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ea98:
    // 0x19ea98: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x19ea98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19ea9c:
    // 0x19ea9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19eaa0:
    // 0x19eaa0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19eaa4:
    // 0x19eaa4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19eaa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19eaa8:
    // 0x19eaa8: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x19eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_19eaac:
    // 0x19eaac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x19eaacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_19eab0:
    // 0x19eab0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19eab4:
    // 0x19eab4: 0x60f809  jalr        $v1
label_19eab8:
    if (ctx->pc == 0x19EAB8u) {
        ctx->pc = 0x19EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB4u;
        // 0x19eab8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EABCu;
        goto label_19eabc;
    }
    ctx->pc = 0x19EAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EABCu);
        ctx->pc = 0x19EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB4u;
        // 0x19eab8: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EAB4u, 0x19EABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EABCu;
label_19eabc:
    // 0x19eabc: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x19eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_19eac0:
    // 0x19eac0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19eac4:
    // 0x19eac4: 0xc46ccf78  lwc1        $f12, -0x3088($v1)
    ctx->pc = 0x19eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19eac8:
    // 0x19eac8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_19eacc:
    // 0x19eacc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x19eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_19ead0:
    // 0x19ead0: 0x60f809  jalr        $v1
label_19ead4:
    if (ctx->pc == 0x19EAD4u) {
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAD8u;
        goto label_19ead8;
    }
    ctx->pc = 0x19EAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EAD8u);
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EAD0u, 0x19EAD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EAD8u;
label_19ead8:
    // 0x19ead8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x19ead8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_19eadc:
    // 0x19eadc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x19eadcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_19eae0:
    // 0x19eae0: 0xc4c1cf8c  lwc1        $f1, -0x3074($a2)
    ctx->pc = 0x19eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294954892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19eae4:
    // 0x19eae4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19eae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19eae8:
    // 0x19eae8: 0xc4e0cf90  lwc1        $f0, -0x3070($a3)
    ctx->pc = 0x19eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19eaec:
    // 0x19eaec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19eaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eaf0:
    // 0x19eaf0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x19eaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19eaf4:
    // 0x19eaf4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19eaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19eaf8:
    // 0x19eaf8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19eaf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19eafc:
    // 0x19eafc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19eb00:
    // 0x19eb00: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x19eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
label_19eb04:
    // 0x19eb04: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_19eb08:
    // 0x19eb08: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19eb0c:
    // 0x19eb0c: 0x60f809  jalr        $v1
label_19eb10:
    if (ctx->pc == 0x19EB10u) {
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB14u;
        goto label_19eb14;
    }
    ctx->pc = 0x19EB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EB14u);
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB0Cu, 0x19EB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EB14u;
label_19eb14:
    // 0x19eb14: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x19eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
label_19eb18:
    // 0x19eb18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19eb1c:
    // 0x19eb1c: 0xc46ccf78  lwc1        $f12, -0x3088($v1)
    ctx->pc = 0x19eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19eb20:
    // 0x19eb20: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_19eb24:
    // 0x19eb24: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x19eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_19eb28:
    // 0x19eb28: 0x60f809  jalr        $v1
label_19eb2c:
    if (ctx->pc == 0x19EB2Cu) {
        ctx->pc = 0x19EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB28u;
        // 0x19eb2c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB30u;
        goto label_19eb30;
    }
    ctx->pc = 0x19EB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EB30u);
        ctx->pc = 0x19EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB28u;
        // 0x19eb2c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB28u, 0x19EB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EB30u;
label_19eb30:
    // 0x19eb30: 0x10000013  b           . + 4 + (0x13 << 2)
label_19eb34:
    if (ctx->pc == 0x19EB34u) {
        ctx->pc = 0x19EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB30u;
        // 0x19eb34: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB38u;
        goto label_19eb38;
    }
    ctx->pc = 0x19EB30u;
    {
        const bool branch_taken_0x19eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB30u;
        // 0x19eb34: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb30) {
            ctx->pc = 0x19EB80u;
            goto label_19eb80;
        }
    }
    ctx->pc = 0x19EB38u;
label_19eb38:
    // 0x19eb38: 0xc073470  jal         func_1CD1C0
label_19eb3c:
    if (ctx->pc == 0x19EB3Cu) {
        ctx->pc = 0x19EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB38u;
        // 0x19eb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB40u;
        goto label_19eb40;
    }
    ctx->pc = 0x19EB38u;
    SET_GPR_U32(ctx, 31, 0x19EB40u);
    ctx->pc = 0x19EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB38u;
    // 0x19eb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C0u, 0x19EB38u, 0x19EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB40u;
label_19eb40:
    // 0x19eb40: 0x265000d0  addiu       $s0, $s2, 0xD0
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_19eb44:
    // 0x19eb44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19eb44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb48:
    // 0x19eb48: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x19eb48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19eb4c:
    // 0x19eb4c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19eb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eb50:
    // 0x19eb50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19eb54:
    // 0x19eb54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19eb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb58:
    // 0x19eb58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19eb58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19eb5c:
    // 0x19eb5c: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x19eb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_19eb60:
    // 0x19eb60: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19eb60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19eb64:
    // 0x19eb64: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19eb68:
    // 0x19eb68: 0x40f809  jalr        $v0
label_19eb6c:
    if (ctx->pc == 0x19EB6Cu) {
        ctx->pc = 0x19EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB68u;
        // 0x19eb6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB70u;
        goto label_19eb70;
    }
    ctx->pc = 0x19EB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EB70u);
        ctx->pc = 0x19EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB68u;
        // 0x19eb6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB68u, 0x19EB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EB70u;
label_19eb70:
    // 0x19eb70: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x19eb70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19eb74:
    // 0x19eb74: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_19eb78:
    if (ctx->pc == 0x19EB78u) {
        ctx->pc = 0x19EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB74u;
        // 0x19eb78: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB7Cu;
        goto label_19eb7c;
    }
    ctx->pc = 0x19EB74u;
    {
        const bool branch_taken_0x19eb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB74u;
        // 0x19eb78: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb74) {
            ctx->pc = 0x19EB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19eb50;
        }
    }
    ctx->pc = 0x19EB7Cu;
label_19eb7c:
    // 0x19eb7c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x19eb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_19eb80:
    // 0x19eb80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19eb84:
    // 0x19eb84: 0xc4cccf9c  lwc1        $f12, -0x3064($a2)
    ctx->pc = 0x19eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294954908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19eb88:
    // 0x19eb88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19eb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb8c:
    // 0x19eb8c: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x19eb8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_19eb90:
    // 0x19eb90: 0xc05e602  jal         func_179808
label_19eb94:
    if (ctx->pc == 0x19EB94u) {
        ctx->pc = 0x19EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB90u;
        // 0x19eb94: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB98u;
        goto label_19eb98;
    }
    ctx->pc = 0x19EB90u;
    SET_GPR_U32(ctx, 31, 0x19EB98u);
    ctx->pc = 0x19EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB90u;
    // 0x19eb94: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x19EB90u, 0x19EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB98u;
label_19eb98:
    // 0x19eb98: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x19eb98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_19eb9c:
    // 0x19eb9c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x19eb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_19eba0:
    // 0x19eba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19eba4:
    // 0x19eba4: 0x24e50040  addiu       $a1, $a3, 0x40
    ctx->pc = 0x19eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_19eba8:
    // 0x19eba8: 0x265000d0  addiu       $s0, $s2, 0xD0
    ctx->pc = 0x19eba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_19ebac:
    // 0x19ebac: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x19ebacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19ebb0:
    // 0x19ebb0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x19ebb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19ebb4:
    // 0x19ebb4: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x19ebb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19ebb8:
    // 0x19ebb8: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x19ebb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19ebbc:
    // 0x19ebbc: 0xb242007f  sdl         $v0, 0x7F($s2)
    ctx->pc = 0x19ebbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19ebc0:
    // 0x19ebc0: 0xb6420078  sdr         $v0, 0x78($s2)
    ctx->pc = 0x19ebc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19ebc4:
    // 0x19ebc4: 0xb2430087  sdl         $v1, 0x87($s2)
    ctx->pc = 0x19ebc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19ebc8:
    // 0x19ebc8: 0xb6430080  sdr         $v1, 0x80($s2)
    ctx->pc = 0x19ebc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19ebcc:
    // 0x19ebcc: 0xc073472  jal         func_1CD1C8
label_19ebd0:
    if (ctx->pc == 0x19EBD0u) {
        ctx->pc = 0x19EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBCCu;
        // 0x19ebd0: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBD4u;
        goto label_19ebd4;
    }
    ctx->pc = 0x19EBCCu;
    SET_GPR_U32(ctx, 31, 0x19EBD4u);
    ctx->pc = 0x19EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBCCu;
    // 0x19ebd0: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x19EBCCu, 0x19EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBD4u;
label_19ebd4:
    // 0x19ebd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19ebd8:
    // 0x19ebd8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19ebdc:
    // 0x19ebdc: 0xc440cf64  lwc1        $f0, -0x309C($v0)
    ctx->pc = 0x19ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ebe0:
    // 0x19ebe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ebe4:
    // 0x19ebe4: 0xc462cf68  lwc1        $f2, -0x3098($v1)
    ctx->pc = 0x19ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19ebe8:
    // 0x19ebe8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ebe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19ebec:
    // 0x19ebec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ebecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19ebf0:
    // 0x19ebf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ebf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ebf4:
    // 0x19ebf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ebf8:
    // 0x19ebf8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19ebf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19ebfc:
    // 0x19ebfc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19ebfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19ec00:
    // 0x19ec00: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x19ec00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19ec04:
    // 0x19ec04: 0xc073464  jal         func_1CD190
label_19ec08:
    if (ctx->pc == 0x19EC08u) {
        ctx->pc = 0x19EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC04u;
        // 0x19ec08: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC0Cu;
        goto label_19ec0c;
    }
    ctx->pc = 0x19EC04u;
    SET_GPR_U32(ctx, 31, 0x19EC0Cu);
    ctx->pc = 0x19EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC04u;
    // 0x19ec08: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x19EC04u, 0x19EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC0Cu;
label_19ec0c:
    // 0x19ec0c: 0xc0734a0  jal         func_1CD280
label_19ec10:
    if (ctx->pc == 0x19EC10u) {
        ctx->pc = 0x19EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC0Cu;
        // 0x19ec10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC14u;
        goto label_19ec14;
    }
    ctx->pc = 0x19EC0Cu;
    SET_GPR_U32(ctx, 31, 0x19EC14u);
    ctx->pc = 0x19EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC0Cu;
    // 0x19ec10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x19EC0Cu, 0x19EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC14u;
label_19ec14:
    // 0x19ec14: 0x0  nop
    ctx->pc = 0x19ec14u;
    // NOP
label_19ec18:
    // 0x19ec18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ec1c:
    // 0x19ec1c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x19ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_19ec20:
    // 0x19ec20: 0x24c50040  addiu       $a1, $a2, 0x40
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19ec24:
    // 0x19ec24: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x19ec24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_19ec28:
    // 0x19ec28: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x19ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_19ec2c:
    // 0x19ec2c: 0x60f809  jalr        $v1
label_19ec30:
    if (ctx->pc == 0x19EC30u) {
        ctx->pc = 0x19EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC2Cu;
        // 0x19ec30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC34u;
        goto label_19ec34;
    }
    ctx->pc = 0x19EC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EC34u);
        ctx->pc = 0x19EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC2Cu;
        // 0x19ec30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC2Cu, 0x19EC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EC34u;
label_19ec34:
    // 0x19ec34: 0x924203d0  lbu         $v0, 0x3D0($s2)
    ctx->pc = 0x19ec34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 976)));
label_19ec38:
    // 0x19ec38: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_19ec3c:
    if (ctx->pc == 0x19EC3Cu) {
        ctx->pc = 0x19EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC38u;
        // 0x19ec3c: 0xc66ccf94  lwc1        $f12, -0x306C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294954900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC40u;
        goto label_19ec40;
    }
    ctx->pc = 0x19EC38u;
    {
        const bool branch_taken_0x19ec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC38u;
        // 0x19ec3c: 0xc66ccf94  lwc1        $f12, -0x306C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294954900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec38) {
            ctx->pc = 0x19ECBCu;
            goto label_19ecbc;
        }
    }
    ctx->pc = 0x19EC40u;
label_19ec40:
    // 0x19ec40: 0x8ec2cdb4  lw          $v0, -0x324C($s6)
    ctx->pc = 0x19ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_19ec44:
    // 0x19ec44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19ec48:
    // 0x19ec48: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x19ec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_19ec4c:
    // 0x19ec4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19ec50:
    if (ctx->pc == 0x19EC50u) {
        ctx->pc = 0x19EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC4Cu;
        // 0x19ec50: 0xc6accfa0  lwc1        $f12, -0x3060($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294954912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC54u;
        goto label_19ec54;
    }
    ctx->pc = 0x19EC4Cu;
    {
        const bool branch_taken_0x19ec4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC4Cu;
        // 0x19ec50: 0xc6accfa0  lwc1        $f12, -0x3060($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294954912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec4c) {
            ctx->pc = 0x19EC60u;
            goto label_19ec60;
        }
    }
    ctx->pc = 0x19EC54u;
label_19ec54:
    // 0x19ec54: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_19ec58:
    // 0x19ec58: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_19ec5c:
    if (ctx->pc == 0x19EC5Cu) {
        ctx->pc = 0x19EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC58u;
        // 0x19ec5c: 0xc66ccf94  lwc1        $f12, -0x306C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294954900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC60u;
        goto label_19ec60;
    }
    ctx->pc = 0x19EC58u;
    {
        const bool branch_taken_0x19ec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec58) {
            ctx->pc = 0x19EC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC58u;
            // 0x19ec5c: 0xc66ccf94  lwc1        $f12, -0x306C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294954900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC90u;
            goto label_19ec90;
        }
    }
    ctx->pc = 0x19EC60u;
label_19ec60:
    // 0x19ec60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ec64:
    // 0x19ec64: 0xc68dcfa4  lwc1        $f13, -0x305C($s4)
    ctx->pc = 0x19ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294954916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19ec68:
    // 0x19ec68: 0xc068848  jal         func_1A2120
label_19ec6c:
    if (ctx->pc == 0x19EC6Cu) {
        ctx->pc = 0x19EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC68u;
        // 0x19ec6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC70u;
        goto label_19ec70;
    }
    ctx->pc = 0x19EC68u;
    SET_GPR_U32(ctx, 31, 0x19EC70u);
    ctx->pc = 0x19EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC68u;
    // 0x19ec6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x19EC68u, 0x19EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC70u;
label_19ec70:
    // 0x19ec70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ec74:
    // 0x19ec74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ec78:
    // 0x19ec78: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_19ec7c:
    // 0x19ec7c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x19ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_19ec80:
    // 0x19ec80: 0x60f809  jalr        $v1
label_19ec84:
    if (ctx->pc == 0x19EC84u) {
        ctx->pc = 0x19EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC80u;
        // 0x19ec84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC88u;
        goto label_19ec88;
    }
    ctx->pc = 0x19EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19EC88u);
        ctx->pc = 0x19EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC80u;
        // 0x19ec84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC80u, 0x19EC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EC88u;
label_19ec88:
    // 0x19ec88: 0x10000016  b           . + 4 + (0x16 << 2)
label_19ec8c:
    if (ctx->pc == 0x19EC8Cu) {
        ctx->pc = 0x19EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC88u;
        // 0x19ec8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC90u;
        goto label_19ec90;
    }
    ctx->pc = 0x19EC88u;
    {
        const bool branch_taken_0x19ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC88u;
        // 0x19ec8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec88) {
            ctx->pc = 0x19ECE4u;
            goto label_19ece4;
        }
    }
    ctx->pc = 0x19EC90u;
label_19ec90:
    // 0x19ec90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ec94:
    // 0x19ec94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ec98:
    // 0x19ec98: 0xc068848  jal         func_1A2120
label_19ec9c:
    if (ctx->pc == 0x19EC9Cu) {
        ctx->pc = 0x19EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC98u;
        // 0x19ec9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECA0u;
        goto label_19eca0;
    }
    ctx->pc = 0x19EC98u;
    SET_GPR_U32(ctx, 31, 0x19ECA0u);
    ctx->pc = 0x19EC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC98u;
    // 0x19ec9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x19EC98u, 0x19ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECA0u;
label_19eca0:
    // 0x19eca0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19eca4:
    // 0x19eca4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19eca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_19eca8:
    // 0x19eca8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x19eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19ecac:
    // 0x19ecac: 0x60f809  jalr        $v1
label_19ecb0:
    if (ctx->pc == 0x19ECB0u) {
        ctx->pc = 0x19ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECACu;
        // 0x19ecb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECB4u;
        goto label_19ecb4;
    }
    ctx->pc = 0x19ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19ECB4u);
        ctx->pc = 0x19ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECACu;
        // 0x19ecb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ECACu, 0x19ECB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19ECB4u;
label_19ecb4:
    // 0x19ecb4: 0x1000000b  b           . + 4 + (0xB << 2)
label_19ecb8:
    if (ctx->pc == 0x19ECB8u) {
        ctx->pc = 0x19ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB4u;
        // 0x19ecb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECBCu;
        goto label_19ecbc;
    }
    ctx->pc = 0x19ECB4u;
    {
        const bool branch_taken_0x19ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB4u;
        // 0x19ecb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecb4) {
            ctx->pc = 0x19ECE4u;
            goto label_19ece4;
        }
    }
    ctx->pc = 0x19ECBCu;
label_19ecbc:
    // 0x19ecbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ecc0:
    // 0x19ecc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ecc4:
    // 0x19ecc4: 0xc068848  jal         func_1A2120
label_19ecc8:
    if (ctx->pc == 0x19ECC8u) {
        ctx->pc = 0x19ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECC4u;
        // 0x19ecc8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECCCu;
        goto label_19eccc;
    }
    ctx->pc = 0x19ECC4u;
    SET_GPR_U32(ctx, 31, 0x19ECCCu);
    ctx->pc = 0x19ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECC4u;
    // 0x19ecc8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x19ECC4u, 0x19ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECCCu;
label_19eccc:
    // 0x19eccc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ecd0:
    // 0x19ecd0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19ecd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_19ecd4:
    // 0x19ecd4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19ecd8:
    // 0x19ecd8: 0x60f809  jalr        $v1
label_19ecdc:
    if (ctx->pc == 0x19ECDCu) {
        ctx->pc = 0x19ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECD8u;
        // 0x19ecdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECE0u;
        goto label_19ece0;
    }
    ctx->pc = 0x19ECD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19ECE0u);
        ctx->pc = 0x19ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECD8u;
        // 0x19ecdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ECD8u, 0x19ECE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19ECE0u;
label_19ece0:
    // 0x19ece0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19ece0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19ece4:
    // 0x19ece4: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x19ece4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19ece8:
    // 0x19ece8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_19ecec:
    if (ctx->pc == 0x19ECECu) {
        ctx->pc = 0x19ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECE8u;
        // 0x19ecec: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECF0u;
        goto label_19ecf0;
    }
    ctx->pc = 0x19ECE8u;
    {
        const bool branch_taken_0x19ece8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECE8u;
        // 0x19ecec: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ece8) {
            ctx->pc = 0x19EC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ec18;
        }
    }
    ctx->pc = 0x19ECF0u;
label_19ecf0:
    // 0x19ecf0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x19ecf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19ecf4:
    // 0x19ecf4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x19ecf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19ecf8:
    // 0x19ecf8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x19ecf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19ecfc:
    // 0x19ecfc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x19ecfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19ed00:
    // 0x19ed00: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x19ed00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19ed04:
    // 0x19ed04: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19ed04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19ed08:
    // 0x19ed08: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x19ed08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19ed0c:
    // 0x19ed0c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x19ed0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19ed10:
    // 0x19ed10: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x19ed10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19ed14:
    // 0x19ed14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ed18:
    // 0x19ed18: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x19ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19ed1c:
    // 0x19ed1c: 0x3e00008  jr          $ra
label_19ed20:
    if (ctx->pc == 0x19ED20u) {
        ctx->pc = 0x19ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED1Cu;
        // 0x19ed20: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED24u;
        goto label_19ed24;
    }
    ctx->pc = 0x19ED1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED1Cu;
        // 0x19ed20: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ED1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ED24u;
label_19ed24:
    // 0x19ed24: 0x0  nop
    ctx->pc = 0x19ed24u;
    // NOP
    ctx->pc = 0x19ed28u;
}
