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

// Function: sub_004C8FF8
// Address: 0x4c8ff8 - 0x4c94b8
void sub_004C8FF8_0x4c8ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8FF8_0x4c8ff8");
#endif

    switch (ctx->pc) {
        case 0x4c8ff8u: goto label_4c8ff8;
        case 0x4c8ffcu: goto label_4c8ffc;
        case 0x4c9000u: goto label_4c9000;
        case 0x4c9004u: goto label_4c9004;
        case 0x4c9008u: goto label_4c9008;
        case 0x4c900cu: goto label_4c900c;
        case 0x4c9010u: goto label_4c9010;
        case 0x4c9014u: goto label_4c9014;
        case 0x4c9018u: goto label_4c9018;
        case 0x4c901cu: goto label_4c901c;
        case 0x4c9020u: goto label_4c9020;
        case 0x4c9024u: goto label_4c9024;
        case 0x4c9028u: goto label_4c9028;
        case 0x4c902cu: goto label_4c902c;
        case 0x4c9030u: goto label_4c9030;
        case 0x4c9034u: goto label_4c9034;
        case 0x4c9038u: goto label_4c9038;
        case 0x4c903cu: goto label_4c903c;
        case 0x4c9040u: goto label_4c9040;
        case 0x4c9044u: goto label_4c9044;
        case 0x4c9048u: goto label_4c9048;
        case 0x4c904cu: goto label_4c904c;
        case 0x4c9050u: goto label_4c9050;
        case 0x4c9054u: goto label_4c9054;
        case 0x4c9058u: goto label_4c9058;
        case 0x4c905cu: goto label_4c905c;
        case 0x4c9060u: goto label_4c9060;
        case 0x4c9064u: goto label_4c9064;
        case 0x4c9068u: goto label_4c9068;
        case 0x4c906cu: goto label_4c906c;
        case 0x4c9070u: goto label_4c9070;
        case 0x4c9074u: goto label_4c9074;
        case 0x4c9078u: goto label_4c9078;
        case 0x4c907cu: goto label_4c907c;
        case 0x4c9080u: goto label_4c9080;
        case 0x4c9084u: goto label_4c9084;
        case 0x4c9088u: goto label_4c9088;
        case 0x4c908cu: goto label_4c908c;
        case 0x4c9090u: goto label_4c9090;
        case 0x4c9094u: goto label_4c9094;
        case 0x4c9098u: goto label_4c9098;
        case 0x4c909cu: goto label_4c909c;
        case 0x4c90a0u: goto label_4c90a0;
        case 0x4c90a4u: goto label_4c90a4;
        case 0x4c90a8u: goto label_4c90a8;
        case 0x4c90acu: goto label_4c90ac;
        case 0x4c90b0u: goto label_4c90b0;
        case 0x4c90b4u: goto label_4c90b4;
        case 0x4c90b8u: goto label_4c90b8;
        case 0x4c90bcu: goto label_4c90bc;
        case 0x4c90c0u: goto label_4c90c0;
        case 0x4c90c4u: goto label_4c90c4;
        case 0x4c90c8u: goto label_4c90c8;
        case 0x4c90ccu: goto label_4c90cc;
        case 0x4c90d0u: goto label_4c90d0;
        case 0x4c90d4u: goto label_4c90d4;
        case 0x4c90d8u: goto label_4c90d8;
        case 0x4c90dcu: goto label_4c90dc;
        case 0x4c90e0u: goto label_4c90e0;
        case 0x4c90e4u: goto label_4c90e4;
        case 0x4c90e8u: goto label_4c90e8;
        case 0x4c90ecu: goto label_4c90ec;
        case 0x4c90f0u: goto label_4c90f0;
        case 0x4c90f4u: goto label_4c90f4;
        case 0x4c90f8u: goto label_4c90f8;
        case 0x4c90fcu: goto label_4c90fc;
        case 0x4c9100u: goto label_4c9100;
        case 0x4c9104u: goto label_4c9104;
        case 0x4c9108u: goto label_4c9108;
        case 0x4c910cu: goto label_4c910c;
        case 0x4c9110u: goto label_4c9110;
        case 0x4c9114u: goto label_4c9114;
        case 0x4c9118u: goto label_4c9118;
        case 0x4c911cu: goto label_4c911c;
        case 0x4c9120u: goto label_4c9120;
        case 0x4c9124u: goto label_4c9124;
        case 0x4c9128u: goto label_4c9128;
        case 0x4c912cu: goto label_4c912c;
        case 0x4c9130u: goto label_4c9130;
        case 0x4c9134u: goto label_4c9134;
        case 0x4c9138u: goto label_4c9138;
        case 0x4c913cu: goto label_4c913c;
        case 0x4c9140u: goto label_4c9140;
        case 0x4c9144u: goto label_4c9144;
        case 0x4c9148u: goto label_4c9148;
        case 0x4c914cu: goto label_4c914c;
        case 0x4c9150u: goto label_4c9150;
        case 0x4c9154u: goto label_4c9154;
        case 0x4c9158u: goto label_4c9158;
        case 0x4c915cu: goto label_4c915c;
        case 0x4c9160u: goto label_4c9160;
        case 0x4c9164u: goto label_4c9164;
        case 0x4c9168u: goto label_4c9168;
        case 0x4c916cu: goto label_4c916c;
        case 0x4c9170u: goto label_4c9170;
        case 0x4c9174u: goto label_4c9174;
        case 0x4c9178u: goto label_4c9178;
        case 0x4c917cu: goto label_4c917c;
        case 0x4c9180u: goto label_4c9180;
        case 0x4c9184u: goto label_4c9184;
        case 0x4c9188u: goto label_4c9188;
        case 0x4c918cu: goto label_4c918c;
        case 0x4c9190u: goto label_4c9190;
        case 0x4c9194u: goto label_4c9194;
        case 0x4c9198u: goto label_4c9198;
        case 0x4c919cu: goto label_4c919c;
        case 0x4c91a0u: goto label_4c91a0;
        case 0x4c91a4u: goto label_4c91a4;
        case 0x4c91a8u: goto label_4c91a8;
        case 0x4c91acu: goto label_4c91ac;
        case 0x4c91b0u: goto label_4c91b0;
        case 0x4c91b4u: goto label_4c91b4;
        case 0x4c91b8u: goto label_4c91b8;
        case 0x4c91bcu: goto label_4c91bc;
        case 0x4c91c0u: goto label_4c91c0;
        case 0x4c91c4u: goto label_4c91c4;
        case 0x4c91c8u: goto label_4c91c8;
        case 0x4c91ccu: goto label_4c91cc;
        case 0x4c91d0u: goto label_4c91d0;
        case 0x4c91d4u: goto label_4c91d4;
        case 0x4c91d8u: goto label_4c91d8;
        case 0x4c91dcu: goto label_4c91dc;
        case 0x4c91e0u: goto label_4c91e0;
        case 0x4c91e4u: goto label_4c91e4;
        case 0x4c91e8u: goto label_4c91e8;
        case 0x4c91ecu: goto label_4c91ec;
        case 0x4c91f0u: goto label_4c91f0;
        case 0x4c91f4u: goto label_4c91f4;
        case 0x4c91f8u: goto label_4c91f8;
        case 0x4c91fcu: goto label_4c91fc;
        case 0x4c9200u: goto label_4c9200;
        case 0x4c9204u: goto label_4c9204;
        case 0x4c9208u: goto label_4c9208;
        case 0x4c920cu: goto label_4c920c;
        case 0x4c9210u: goto label_4c9210;
        case 0x4c9214u: goto label_4c9214;
        case 0x4c9218u: goto label_4c9218;
        case 0x4c921cu: goto label_4c921c;
        case 0x4c9220u: goto label_4c9220;
        case 0x4c9224u: goto label_4c9224;
        case 0x4c9228u: goto label_4c9228;
        case 0x4c922cu: goto label_4c922c;
        case 0x4c9230u: goto label_4c9230;
        case 0x4c9234u: goto label_4c9234;
        case 0x4c9238u: goto label_4c9238;
        case 0x4c923cu: goto label_4c923c;
        case 0x4c9240u: goto label_4c9240;
        case 0x4c9244u: goto label_4c9244;
        case 0x4c9248u: goto label_4c9248;
        case 0x4c924cu: goto label_4c924c;
        case 0x4c9250u: goto label_4c9250;
        case 0x4c9254u: goto label_4c9254;
        case 0x4c9258u: goto label_4c9258;
        case 0x4c925cu: goto label_4c925c;
        case 0x4c9260u: goto label_4c9260;
        case 0x4c9264u: goto label_4c9264;
        case 0x4c9268u: goto label_4c9268;
        case 0x4c926cu: goto label_4c926c;
        case 0x4c9270u: goto label_4c9270;
        case 0x4c9274u: goto label_4c9274;
        case 0x4c9278u: goto label_4c9278;
        case 0x4c927cu: goto label_4c927c;
        case 0x4c9280u: goto label_4c9280;
        case 0x4c9284u: goto label_4c9284;
        case 0x4c9288u: goto label_4c9288;
        case 0x4c928cu: goto label_4c928c;
        case 0x4c9290u: goto label_4c9290;
        case 0x4c9294u: goto label_4c9294;
        case 0x4c9298u: goto label_4c9298;
        case 0x4c929cu: goto label_4c929c;
        case 0x4c92a0u: goto label_4c92a0;
        case 0x4c92a4u: goto label_4c92a4;
        case 0x4c92a8u: goto label_4c92a8;
        case 0x4c92acu: goto label_4c92ac;
        case 0x4c92b0u: goto label_4c92b0;
        case 0x4c92b4u: goto label_4c92b4;
        case 0x4c92b8u: goto label_4c92b8;
        case 0x4c92bcu: goto label_4c92bc;
        case 0x4c92c0u: goto label_4c92c0;
        case 0x4c92c4u: goto label_4c92c4;
        case 0x4c92c8u: goto label_4c92c8;
        case 0x4c92ccu: goto label_4c92cc;
        case 0x4c92d0u: goto label_4c92d0;
        case 0x4c92d4u: goto label_4c92d4;
        case 0x4c92d8u: goto label_4c92d8;
        case 0x4c92dcu: goto label_4c92dc;
        case 0x4c92e0u: goto label_4c92e0;
        case 0x4c92e4u: goto label_4c92e4;
        case 0x4c92e8u: goto label_4c92e8;
        case 0x4c92ecu: goto label_4c92ec;
        case 0x4c92f0u: goto label_4c92f0;
        case 0x4c92f4u: goto label_4c92f4;
        case 0x4c92f8u: goto label_4c92f8;
        case 0x4c92fcu: goto label_4c92fc;
        case 0x4c9300u: goto label_4c9300;
        case 0x4c9304u: goto label_4c9304;
        case 0x4c9308u: goto label_4c9308;
        case 0x4c930cu: goto label_4c930c;
        case 0x4c9310u: goto label_4c9310;
        case 0x4c9314u: goto label_4c9314;
        case 0x4c9318u: goto label_4c9318;
        case 0x4c931cu: goto label_4c931c;
        case 0x4c9320u: goto label_4c9320;
        case 0x4c9324u: goto label_4c9324;
        case 0x4c9328u: goto label_4c9328;
        case 0x4c932cu: goto label_4c932c;
        case 0x4c9330u: goto label_4c9330;
        case 0x4c9334u: goto label_4c9334;
        case 0x4c9338u: goto label_4c9338;
        case 0x4c933cu: goto label_4c933c;
        case 0x4c9340u: goto label_4c9340;
        case 0x4c9344u: goto label_4c9344;
        case 0x4c9348u: goto label_4c9348;
        case 0x4c934cu: goto label_4c934c;
        case 0x4c9350u: goto label_4c9350;
        case 0x4c9354u: goto label_4c9354;
        case 0x4c9358u: goto label_4c9358;
        case 0x4c935cu: goto label_4c935c;
        case 0x4c9360u: goto label_4c9360;
        case 0x4c9364u: goto label_4c9364;
        case 0x4c9368u: goto label_4c9368;
        case 0x4c936cu: goto label_4c936c;
        case 0x4c9370u: goto label_4c9370;
        case 0x4c9374u: goto label_4c9374;
        case 0x4c9378u: goto label_4c9378;
        case 0x4c937cu: goto label_4c937c;
        case 0x4c9380u: goto label_4c9380;
        case 0x4c9384u: goto label_4c9384;
        case 0x4c9388u: goto label_4c9388;
        case 0x4c938cu: goto label_4c938c;
        case 0x4c9390u: goto label_4c9390;
        case 0x4c9394u: goto label_4c9394;
        case 0x4c9398u: goto label_4c9398;
        case 0x4c939cu: goto label_4c939c;
        case 0x4c93a0u: goto label_4c93a0;
        case 0x4c93a4u: goto label_4c93a4;
        case 0x4c93a8u: goto label_4c93a8;
        case 0x4c93acu: goto label_4c93ac;
        case 0x4c93b0u: goto label_4c93b0;
        case 0x4c93b4u: goto label_4c93b4;
        case 0x4c93b8u: goto label_4c93b8;
        case 0x4c93bcu: goto label_4c93bc;
        case 0x4c93c0u: goto label_4c93c0;
        case 0x4c93c4u: goto label_4c93c4;
        case 0x4c93c8u: goto label_4c93c8;
        case 0x4c93ccu: goto label_4c93cc;
        case 0x4c93d0u: goto label_4c93d0;
        case 0x4c93d4u: goto label_4c93d4;
        case 0x4c93d8u: goto label_4c93d8;
        case 0x4c93dcu: goto label_4c93dc;
        case 0x4c93e0u: goto label_4c93e0;
        case 0x4c93e4u: goto label_4c93e4;
        case 0x4c93e8u: goto label_4c93e8;
        case 0x4c93ecu: goto label_4c93ec;
        case 0x4c93f0u: goto label_4c93f0;
        case 0x4c93f4u: goto label_4c93f4;
        case 0x4c93f8u: goto label_4c93f8;
        case 0x4c93fcu: goto label_4c93fc;
        case 0x4c9400u: goto label_4c9400;
        case 0x4c9404u: goto label_4c9404;
        case 0x4c9408u: goto label_4c9408;
        case 0x4c940cu: goto label_4c940c;
        case 0x4c9410u: goto label_4c9410;
        case 0x4c9414u: goto label_4c9414;
        case 0x4c9418u: goto label_4c9418;
        case 0x4c941cu: goto label_4c941c;
        case 0x4c9420u: goto label_4c9420;
        case 0x4c9424u: goto label_4c9424;
        case 0x4c9428u: goto label_4c9428;
        case 0x4c942cu: goto label_4c942c;
        case 0x4c9430u: goto label_4c9430;
        case 0x4c9434u: goto label_4c9434;
        case 0x4c9438u: goto label_4c9438;
        case 0x4c943cu: goto label_4c943c;
        case 0x4c9440u: goto label_4c9440;
        case 0x4c9444u: goto label_4c9444;
        case 0x4c9448u: goto label_4c9448;
        case 0x4c944cu: goto label_4c944c;
        case 0x4c9450u: goto label_4c9450;
        case 0x4c9454u: goto label_4c9454;
        case 0x4c9458u: goto label_4c9458;
        case 0x4c945cu: goto label_4c945c;
        case 0x4c9460u: goto label_4c9460;
        case 0x4c9464u: goto label_4c9464;
        case 0x4c9468u: goto label_4c9468;
        case 0x4c946cu: goto label_4c946c;
        case 0x4c9470u: goto label_4c9470;
        case 0x4c9474u: goto label_4c9474;
        case 0x4c9478u: goto label_4c9478;
        case 0x4c947cu: goto label_4c947c;
        case 0x4c9480u: goto label_4c9480;
        case 0x4c9484u: goto label_4c9484;
        case 0x4c9488u: goto label_4c9488;
        case 0x4c948cu: goto label_4c948c;
        case 0x4c9490u: goto label_4c9490;
        case 0x4c9494u: goto label_4c9494;
        case 0x4c9498u: goto label_4c9498;
        case 0x4c949cu: goto label_4c949c;
        case 0x4c94a0u: goto label_4c94a0;
        case 0x4c94a4u: goto label_4c94a4;
        case 0x4c94a8u: goto label_4c94a8;
        case 0x4c94acu: goto label_4c94ac;
        case 0x4c94b0u: goto label_4c94b0;
        case 0x4c94b4u: goto label_4c94b4;
        default: break;
    }

    ctx->pc = 0x4c8ff8u;

label_4c8ff8:
    // 0x4c8ff8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4c8ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4c8ffc:
    // 0x4c8ffc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x4c8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_4c9000:
    // 0x4c9000: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4c9000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_4c9004:
    // 0x4c9004: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4c9004u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9008:
    // 0x4c9008: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4c9008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_4c900c:
    // 0x4c900c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4c900cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c9010:
    // 0x4c9010: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4c9010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_4c9014:
    // 0x4c9014: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4c9014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c9018:
    // 0x4c9018: 0x8fb50088  lw          $s5, 0x88($sp)
    ctx->pc = 0x4c9018u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_4c901c:
    // 0x4c901c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4c901cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c9020:
    // 0x4c9020: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4c9020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_4c9024:
    // 0x4c9024: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4c9024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c9028:
    // 0x4c9028: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4c9028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_4c902c:
    // 0x4c902c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x4c902cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_4c9030:
    // 0x4c9030: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4c9030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_4c9034:
    // 0x4c9034: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4c9034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c9038:
    // 0x4c9038: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4c9038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_4c903c:
    // 0x4c903c: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x4c903cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_4c9040:
    // 0x4c9040: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4c9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_4c9044:
    // 0x4c9044: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4c9044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_4c9048:
    // 0x4c9048: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x4c9048u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4c904c:
    // 0x4c904c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4c904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_4c9050:
    // 0x4c9050: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x4c9050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
label_4c9054:
    // 0x4c9054: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4c9054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_4c9058:
    // 0x4c9058: 0x8fb30070  lw          $s3, 0x70($sp)
    ctx->pc = 0x4c9058u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4c905c:
    // 0x4c905c: 0x8fb60078  lw          $s6, 0x78($sp)
    ctx->pc = 0x4c905cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_4c9060:
    // 0x4c9060: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x4c9060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4c9064:
    // 0x4c9064: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_4c9068:
    if (ctx->pc == 0x4C9068u) {
        ctx->pc = 0x4C9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9064u;
        // 0x4c9068: 0x8fa80098  lw          $t0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C906Cu;
        goto label_4c906c;
    }
    ctx->pc = 0x4C9064u;
    {
        const bool branch_taken_0x4c9064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9064u;
        // 0x4c9068: 0x8fa80098  lw          $t0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9064) {
            ctx->pc = 0x4C9084u;
            goto label_4c9084;
        }
    }
    ctx->pc = 0x4C906Cu;
label_4c906c:
    // 0x4c906c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4c906cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4c9070:
    // 0x4c9070: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x4c9070u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_4c9074:
    // 0x4c9074: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4c9074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4c9078:
    // 0x4c9078: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x4c9078u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_4c907c:
    // 0x4c907c: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x4c907cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_4c9080:
    // 0x4c9080: 0x16b040  sll         $s6, $s6, 1
    ctx->pc = 0x4c9080u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_4c9084:
    // 0x4c9084: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c9084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c9088:
    // 0x4c9088: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c9088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c908c:
    // 0x4c908c: 0x24422860  addiu       $v0, $v0, 0x2860
    ctx->pc = 0x4c908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10336));
label_4c9090:
    // 0x4c9090: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c9090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c9094:
    // 0x4c9094: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_4c9098:
    if (ctx->pc == 0x4C9098u) {
        ctx->pc = 0x4C9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9094u;
        // 0x4c9098: 0xac4c0024  sw          $t4, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C909Cu;
        goto label_4c909c;
    }
    ctx->pc = 0x4C9094u;
    {
        const bool branch_taken_0x4c9094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9094u;
        // 0x4c9098: 0xac4c0024  sw          $t4, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9094) {
            ctx->pc = 0x4C90BCu;
            goto label_4c90bc;
        }
    }
    ctx->pc = 0x4C909Cu;
label_4c909c:
    // 0x4c909c: 0x31820003  andi        $v0, $t4, 0x3
    ctx->pc = 0x4c909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
label_4c90a0:
    // 0x4c90a0: 0x5444001c  bnel        $v0, $a0, . + 4 + (0x1C << 2)
label_4c90a4:
    if (ctx->pc == 0x4C90A4u) {
        ctx->pc = 0x4C90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90A0u;
        // 0x4c90a4: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C90A8u;
        goto label_4c90a8;
    }
    ctx->pc = 0x4C90A0u;
    {
        const bool branch_taken_0x4c90a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4c90a0) {
            ctx->pc = 0x4C90A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C90A0u;
            // 0x4c90a4: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9114u;
            goto label_4c9114;
        }
    }
    ctx->pc = 0x4C90A8u;
label_4c90a8:
    // 0x4c90a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4c90ac:
    // 0x4c90ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4c90acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4c90b0:
    // 0x4c90b0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4c90b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_4c90b4:
    // 0x4c90b4: 0x10000016  b           . + 4 + (0x16 << 2)
label_4c90b8:
    if (ctx->pc == 0x4C90B8u) {
        ctx->pc = 0x4C90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90B4u;
        // 0x4c90b8: 0x1826024  and         $t4, $t4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C90BCu;
        goto label_4c90bc;
    }
    ctx->pc = 0x4C90B4u;
    {
        const bool branch_taken_0x4c90b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90B4u;
        // 0x4c90b8: 0x1826024  and         $t4, $t4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c90b4) {
            ctx->pc = 0x4C9110u;
            goto label_4c9110;
        }
    }
    ctx->pc = 0x4C90BCu;
label_4c90bc:
    // 0x4c90bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c90c0:
    // 0x4c90c0: 0x54820014  bnel        $a0, $v0, . + 4 + (0x14 << 2)
label_4c90c4:
    if (ctx->pc == 0x4C90C4u) {
        ctx->pc = 0x4C90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90C0u;
        // 0x4c90c4: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C90C8u;
        goto label_4c90c8;
    }
    ctx->pc = 0x4C90C0u;
    {
        const bool branch_taken_0x4c90c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4c90c0) {
            ctx->pc = 0x4C90C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C90C0u;
            // 0x4c90c4: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9114u;
            goto label_4c9114;
        }
    }
    ctx->pc = 0x4C90C8u;
label_4c90c8:
    // 0x4c90c8: 0x2583fffd  addiu       $v1, $t4, -0x3
    ctx->pc = 0x4c90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967293));
label_4c90cc:
    // 0x4c90cc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x4c90ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4c90d0:
    // 0x4c90d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4c90d4:
    if (ctx->pc == 0x4C90D4u) {
        ctx->pc = 0x4C90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90D0u;
        // 0x4c90d4: 0x2583fffa  addiu       $v1, $t4, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C90D8u;
        goto label_4c90d8;
    }
    ctx->pc = 0x4C90D0u;
    {
        const bool branch_taken_0x4c90d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c90d0) {
            ctx->pc = 0x4C90D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C90D0u;
            // 0x4c90d4: 0x2583fffa  addiu       $v1, $t4, -0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967290));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C90E4u;
            goto label_4c90e4;
        }
    }
    ctx->pc = 0x4C90D8u;
label_4c90d8:
    // 0x4c90d8: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c90d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c90dc:
    // 0x4c90dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4c90e0:
    if (ctx->pc == 0x4C90E0u) {
        ctx->pc = 0x4C90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90DCu;
        // 0x4c90e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C90E4u;
        goto label_4c90e4;
    }
    ctx->pc = 0x4C90DCu;
    {
        const bool branch_taken_0x4c90dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90DCu;
        // 0x4c90e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c90dc) {
            ctx->pc = 0x4C9110u;
            goto label_4c9110;
        }
    }
    ctx->pc = 0x4C90E4u;
label_4c90e4:
    // 0x4c90e4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x4c90e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4c90e8:
    // 0x4c90e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4c90ec:
    if (ctx->pc == 0x4C90ECu) {
        ctx->pc = 0x4C90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90E8u;
        // 0x4c90ec: 0x2583fff7  addiu       $v1, $t4, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C90F0u;
        goto label_4c90f0;
    }
    ctx->pc = 0x4C90E8u;
    {
        const bool branch_taken_0x4c90e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c90e8) {
            ctx->pc = 0x4C90ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C90E8u;
            // 0x4c90ec: 0x2583fff7  addiu       $v1, $t4, -0x9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967287));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C90FCu;
            goto label_4c90fc;
        }
    }
    ctx->pc = 0x4C90F0u;
label_4c90f0:
    // 0x4c90f0: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c90f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c90f4:
    // 0x4c90f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c90f8:
    if (ctx->pc == 0x4C90F8u) {
        ctx->pc = 0x4C90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90F4u;
        // 0x4c90f8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C90FCu;
        goto label_4c90fc;
    }
    ctx->pc = 0x4C90F4u;
    {
        const bool branch_taken_0x4c90f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C90F4u;
        // 0x4c90f8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c90f4) {
            ctx->pc = 0x4C9110u;
            goto label_4c9110;
        }
    }
    ctx->pc = 0x4C90FCu;
label_4c90fc:
    // 0x4c90fc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x4c90fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4c9100:
    // 0x4c9100: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4c9104:
    if (ctx->pc == 0x4C9104u) {
        ctx->pc = 0x4C9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9100u;
        // 0x4c9104: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9108u;
        goto label_4c9108;
    }
    ctx->pc = 0x4C9100u;
    {
        const bool branch_taken_0x4c9100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c9100) {
            ctx->pc = 0x4C9104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9100u;
            // 0x4c9104: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9114u;
            goto label_4c9114;
        }
    }
    ctx->pc = 0x4C9108u;
label_4c9108:
    // 0x4c9108: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x4c9108u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c910c:
    // 0x4c910c: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x4c910cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_4c9110:
    // 0x4c9110: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c9114:
    // 0x4c9114: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x4c9114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c9118:
    // 0x4c9118: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4c9118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_4c911c:
    // 0x4c911c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x4c911cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_4c9120:
    // 0x4c9120: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x4c9120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c9124:
    // 0x4c9124: 0x2a42024  and         $a0, $s5, $a0
    ctx->pc = 0x4c9124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
label_4c9128:
    // 0x4c9128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c912c:
    // 0x4c912c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x4c912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_4c9130:
    // 0x4c9130: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c9130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4c9134:
    // 0x4c9134: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
label_4c9138:
    if (ctx->pc == 0x4C9138u) {
        ctx->pc = 0x4C9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9134u;
        // 0x4c9138: 0xac622860  sw          $v0, 0x2860($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C913Cu;
        goto label_4c913c;
    }
    ctx->pc = 0x4C9134u;
    {
        const bool branch_taken_0x4c9134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x4C9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9134u;
        // 0x4c9138: 0xac622860  sw          $v0, 0x2860($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9134) {
            ctx->pc = 0x4C9148u;
            goto label_4c9148;
        }
    }
    ctx->pc = 0x4C913Cu;
label_4c913c:
    // 0x4c913c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x4c913cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_4c9140:
    // 0x4c9140: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_4c9144:
    if (ctx->pc == 0x4C9144u) {
        ctx->pc = 0x4C9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9140u;
        // 0x4c9144: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9148u;
        goto label_4c9148;
    }
    ctx->pc = 0x4C9140u;
    {
        const bool branch_taken_0x4c9140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9140u;
        // 0x4c9144: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9140) {
            ctx->pc = 0x4C9158u;
            goto label_4c9158;
        }
    }
    ctx->pc = 0x4C9148u;
label_4c9148:
    // 0x4c9148: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4c9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c914c:
    // 0x4c914c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c9150:
    // 0x4c9150: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4c9150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4c9154:
    // 0x4c9154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4c9154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c9158:
    // 0x4c9158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4c9158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4c915c:
    // 0x4c915c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4c915cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4c9160:
    // 0x4c9160: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4c9160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c9164:
    // 0x4c9164: 0xc13238a  jal         func_4C8E28
label_4c9168:
    if (ctx->pc == 0x4C9168u) {
        ctx->pc = 0x4C9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9164u;
        // 0x4c9168: 0x37a90004  ori         $t1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C916Cu;
        goto label_4c916c;
    }
    ctx->pc = 0x4C9164u;
    SET_GPR_U32(ctx, 31, 0x4C916Cu);
    ctx->pc = 0x4C9168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9164u;
    // 0x4c9168: 0x37a90004  ori         $t1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E28u, 0x4C9164u, 0x4C916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C916Cu;
label_4c916c:
    // 0x4c916c: 0x2562818  mult        $a1, $s2, $s6
    ctx->pc = 0x4c916cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4c9170:
    // 0x4c9170: 0x2de3023  subu        $a2, $s6, $fp
    ctx->pc = 0x4c9170u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_4c9174:
    // 0x4c9174: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4c9174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4c9178:
    // 0x4c9178: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4c9178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4c917c:
    // 0x4c917c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x4c917cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
label_4c9180:
    // 0x4c9180: 0x24892860  addiu       $t1, $a0, 0x2860
    ctx->pc = 0x4c9180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 10336));
label_4c9184:
    // 0x4c9184: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4c9184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c9188:
    // 0x4c9188: 0x30eb0001  andi        $t3, $a3, 0x1
    ctx->pc = 0x4c9188u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_4c918c:
    // 0x4c918c: 0x8c832860  lw          $v1, 0x2860($a0)
    ctx->pc = 0x4c918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10336)));
label_4c9190:
    // 0x4c9190: 0x1e4042  srl         $t0, $fp, 1
    ctx->pc = 0x4c9190u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_4c9194:
    // 0x4c9194: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4c9194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9198:
    // 0x4c9198: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4c919c:
    // 0x4c919c: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x4c919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_4c91a0:
    // 0x4c91a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c91a4:
    // 0x4c91a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4c91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4c91a8:
    // 0x4c91a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c91a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c91ac:
    // 0x4c91ac: 0x163842  srl         $a3, $s6, 1
    ctx->pc = 0x4c91acu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_4c91b0:
    // 0x4c91b0: 0x962821  addu        $a1, $a0, $s6
    ctx->pc = 0x4c91b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_4c91b4:
    // 0x4c91b4: 0x563021  addu        $a2, $v0, $s6
    ctx->pc = 0x4c91b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4c91b8:
    // 0x4c91b8: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x4c91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_4c91bc:
    // 0x4c91bc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4c91bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c91c0:
    // 0x4c91c0: 0xe8b823  subu        $s7, $a3, $t0
    ctx->pc = 0x4c91c0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4c91c4:
    // 0x4c91c4: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x4c91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
label_4c91c8:
    // 0x4c91c8: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x4c91c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_4c91cc:
    // 0x4c91cc: 0xad26001c  sw          $a2, 0x1C($t1)
    ctx->pc = 0x4c91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 6));
label_4c91d0:
    // 0x4c91d0: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x4c91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
label_4c91d4:
    // 0x4c91d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_4c91d8:
    if (ctx->pc == 0x4C91D8u) {
        ctx->pc = 0x4C91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C91D4u;
        // 0x4c91d8: 0xad220018  sw          $v0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C91DCu;
        goto label_4c91dc;
    }
    ctx->pc = 0x4C91D4u;
    {
        const bool branch_taken_0x4c91d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C91D4u;
        // 0x4c91d8: 0xad220018  sw          $v0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c91d4) {
            ctx->pc = 0x4C91E0u;
            goto label_4c91e0;
        }
    }
    ctx->pc = 0x4C91DCu;
label_4c91dc:
    // 0x4c91dc: 0x2ebb823  subu        $s7, $s7, $t3
    ctx->pc = 0x4c91dcu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 11)));
label_4c91e0:
    // 0x4c91e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4c91e4:
    // 0x4c91e4: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x4c91e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_4c91e8:
    // 0x4c91e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c91ec:
    if (ctx->pc == 0x4C91ECu) {
        ctx->pc = 0x4C91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C91E8u;
        // 0x4c91ec: 0x2d01018  mult        $v0, $s6, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C91F0u;
        goto label_4c91f0;
    }
    ctx->pc = 0x4C91E8u;
    {
        const bool branch_taken_0x4c91e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C91E8u;
        // 0x4c91ec: 0x2d01018  mult        $v0, $s6, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c91e8) {
            ctx->pc = 0x4C920Cu;
            goto label_4c920c;
        }
    }
    ctx->pc = 0x4C91F0u;
label_4c91f0:
    // 0x4c91f0: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x4c91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4c91f4:
    // 0x4c91f4: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x4c91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_4c91f8:
    // 0x4c91f8: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x4c91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
label_4c91fc:
    // 0x4c91fc: 0x1421818  mult        $v1, $t2, $v0
    ctx->pc = 0x4c91fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c9200:
    // 0x4c9200: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4c9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c9204:
    // 0x4c9204: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c9208:
    if (ctx->pc == 0x4C9208u) {
        ctx->pc = 0x4C9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9204u;
        // 0x4c9208: 0xad220014  sw          $v0, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C920Cu;
        goto label_4c920c;
    }
    ctx->pc = 0x4C9204u;
    {
        const bool branch_taken_0x4c9204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9204u;
        // 0x4c9208: 0xad220014  sw          $v0, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9204) {
            ctx->pc = 0x4C9224u;
            goto label_4c9224;
        }
    }
    ctx->pc = 0x4C920Cu;
label_4c920c:
    // 0x4c920c: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x4c920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4c9210:
    // 0x4c9210: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x4c9210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_4c9214:
    // 0x4c9214: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x4c9214u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
label_4c9218:
    // 0x4c9218: 0x1421818  mult        $v1, $t2, $v0
    ctx->pc = 0x4c9218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c921c:
    // 0x4c921c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4c921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c9220:
    // 0x4c9220: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x4c9220u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
label_4c9224:
    // 0x4c9224: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4c9224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_4c9228:
    // 0x4c9228: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x4c9228u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_4c922c:
    // 0x4c922c: 0x24d02860  addiu       $s0, $a2, 0x2860
    ctx->pc = 0x4c922cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 10336));
label_4c9230:
    // 0x4c9230: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4c9230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4c9234:
    // 0x4c9234: 0x8a2018  mult        $a0, $a0, $t2
    ctx->pc = 0x4c9234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c9238:
    // 0x4c9238: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4c9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4c923c:
    // 0x4c923c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4c923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c9240:
    // 0x4c9240: 0x72842  srl         $a1, $a3, 1
    ctx->pc = 0x4c9240u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_4c9244:
    // 0x4c9244: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c9244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c9248:
    // 0x4c9248: 0x32a60800  andi        $a2, $s5, 0x800
    ctx->pc = 0x4c9248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2048);
label_4c924c:
    // 0x4c924c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c9250:
    // 0x4c9250: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c9250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c9254:
    // 0x4c9254: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c9254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c9258:
    // 0x4c9258: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4c9258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4c925c:
    // 0x4c925c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_4c9260:
    if (ctx->pc == 0x4C9260u) {
        ctx->pc = 0x4C9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C925Cu;
        // 0x4c9260: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9264u;
        goto label_4c9264;
    }
    ctx->pc = 0x4C925Cu;
    {
        const bool branch_taken_0x4c925c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C925Cu;
        // 0x4c9260: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c925c) {
            ctx->pc = 0x4C9284u;
            goto label_4c9284;
        }
    }
    ctx->pc = 0x4C9264u;
label_4c9264:
    // 0x4c9264: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4c9264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4c9268:
    // 0x4c9268: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4c9268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4c926c:
    // 0x4c926c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4c926cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_4c9270:
    // 0x4c9270: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x4c9270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c9274:
    // 0x4c9274: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4c9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4c9278:
    // 0x4c9278: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4c9278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_4c927c:
    // 0x4c927c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4c927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4c9280:
    // 0x4c9280: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x4c9280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_4c9284:
    // 0x4c9284: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x4c9284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c9288:
    // 0x4c9288: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x4c9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_4c928c:
    // 0x4c928c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x4c928cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_4c9290:
    // 0x4c9290: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c9294:
    // 0x4c9294: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_4c9298:
    if (ctx->pc == 0x4C9298u) {
        ctx->pc = 0x4C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9294u;
        // 0x4c9298: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C929Cu;
        goto label_4c929c;
    }
    ctx->pc = 0x4C9294u;
    {
        const bool branch_taken_0x4c9294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9294u;
        // 0x4c9298: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9294) {
            ctx->pc = 0x4C9328u;
            goto label_4c9328;
        }
    }
    ctx->pc = 0x4C929Cu;
label_4c929c:
    // 0x4c929c: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x4c929cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_4c92a0:
    // 0x4c92a0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_4c92a4:
    if (ctx->pc == 0x4C92A4u) {
        ctx->pc = 0x4C92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C92A0u;
        // 0x4c92a4: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C92A8u;
        goto label_4c92a8;
    }
    ctx->pc = 0x4C92A0u;
    {
        const bool branch_taken_0x4c92a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C92A0u;
        // 0x4c92a4: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c92a0) {
            ctx->pc = 0x4C932Cu;
            goto label_4c932c;
        }
    }
    ctx->pc = 0x4C92A8u;
label_4c92a8:
    // 0x4c92a8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4c92ac:
    // 0x4c92ac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4c92acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4c92b0:
    // 0x4c92b0: 0x8c434460  lw          $v1, 0x4460($v0)
    ctx->pc = 0x4c92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17504)));
label_4c92b4:
    // 0x4c92b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4c92b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4c92b8:
    // 0x4c92b8: 0x60f809  jalr        $v1
label_4c92bc:
    if (ctx->pc == 0x4C92BCu) {
        ctx->pc = 0x4C92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C92B8u;
        // 0x4c92bc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C92C0u;
        goto label_4c92c0;
    }
    ctx->pc = 0x4C92B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4C92C0u);
        ctx->pc = 0x4C92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C92B8u;
        // 0x4c92bc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C92B8u, 0x4C92C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C92C0u;
label_4c92c0:
    // 0x4c92c0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4c92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4c92c4:
    // 0x4c92c4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c92c8:
    // 0x4c92c8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4c92c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4c92cc:
    // 0x4c92cc: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x4c92ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4c92d0:
    // 0x4c92d0: 0x8c452860  lw          $a1, 0x2860($v0)
    ctx->pc = 0x4c92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10336)));
label_4c92d4:
    // 0x4c92d4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4c92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4c92d8:
    // 0x4c92d8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x4c92d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c92dc:
    // 0x4c92dc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4c92dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4c92e0:
    // 0x4c92e0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4c92e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4c92e4:
    // 0x4c92e4: 0xd64821  addu        $t1, $a2, $s6
    ctx->pc = 0x4c92e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_4c92e8:
    // 0x4c92e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4c92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c92ec:
    // 0x4c92ec: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x4c92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4c92f0:
    // 0x4c92f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4c92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c92f4:
    // 0x4c92f4: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x4c92f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_4c92f8:
    // 0x4c92f8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4c92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4c92fc:
    // 0x4c92fc: 0xf64021  addu        $t0, $a3, $s6
    ctx->pc = 0x4c92fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
label_4c9300:
    // 0x4c9300: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x4c9300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_4c9304:
    // 0x4c9304: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4c9304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4c9308:
    // 0x4c9308: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x4c9308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_4c930c:
    // 0x4c930c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4c930cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4c9310:
    // 0x4c9310: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c9310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c9314:
    // 0x4c9314: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x4c9314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
label_4c9318:
    // 0x4c9318: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4c9318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_4c931c:
    // 0x4c931c: 0xac852860  sw          $a1, 0x2860($a0)
    ctx->pc = 0x4c931cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10336), GPR_U32(ctx, 5));
label_4c9320:
    // 0x4c9320: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4c9320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_4c9324:
    // 0x4c9324: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x4c9324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_4c9328:
    // 0x4c9328: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x4c9328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_4c932c:
    // 0x4c932c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x4c932cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9330:
    // 0x4c9330: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c9330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_4c9334:
    // 0x4c9334: 0x30540003  andi        $s4, $v0, 0x3
    ctx->pc = 0x4c9334u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4c9338:
    // 0x4c9338: 0x2a6202a  slt         $a0, $s5, $a2
    ctx->pc = 0x4c9338u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4c933c:
    // 0x4c933c: 0x3d4182b  sltu        $v1, $fp, $s4
    ctx->pc = 0x4c933cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4c9340:
    // 0x4c9340: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
label_4c9344:
    if (ctx->pc == 0x4C9344u) {
        ctx->pc = 0x4C9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9340u;
        // 0x4c9344: 0x3c3a00b  movn        $s4, $fp, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9348u;
        goto label_4c9348;
    }
    ctx->pc = 0x4C9340u;
    {
        const bool branch_taken_0x4c9340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9340u;
        // 0x4c9344: 0x3c3a00b  movn        $s4, $fp, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9340) {
            ctx->pc = 0x4C9464u;
            goto label_4c9464;
        }
    }
    ctx->pc = 0x4C9348u;
label_4c9348:
    // 0x4c9348: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4c9348u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
label_4c934c:
    // 0x4c934c: 0x24f32860  addiu       $s3, $a3, 0x2860
    ctx->pc = 0x4c934cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 10336));
label_4c9350:
    // 0x4c9350: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x4c9350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4c9354:
    // 0x4c9354: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_4c9358:
    if (ctx->pc == 0x4C9358u) {
        ctx->pc = 0x4C9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9354u;
        // 0x4c9358: 0x8fb20008  lw          $s2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C935Cu;
        goto label_4c935c;
    }
    ctx->pc = 0x4C9354u;
    {
        const bool branch_taken_0x4c9354 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9354u;
        // 0x4c9358: 0x8fb20008  lw          $s2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9354) {
            ctx->pc = 0x4C9378u;
            goto label_4c9378;
        }
    }
    ctx->pc = 0x4C935Cu;
label_4c935c:
    // 0x4c935c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c9360:
    // 0x4c9360: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c9360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c9364:
    // 0x4c9364: 0x8c624464  lw          $v0, 0x4464($v1)
    ctx->pc = 0x4c9364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17508)));
label_4c9368:
    // 0x4c9368: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c9368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c936c:
    // 0x4c936c: 0x40f809  jalr        $v0
label_4c9370:
    if (ctx->pc == 0x4C9370u) {
        ctx->pc = 0x4C9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C936Cu;
        // 0x4c9370: 0x3d48023  subu        $s0, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9374u;
        goto label_4c9374;
    }
    ctx->pc = 0x4C936Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C9374u);
        ctx->pc = 0x4C9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C936Cu;
        // 0x4c9370: 0x3d48023  subu        $s0, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C936Cu, 0x4C9374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C9374u;
label_4c9374:
    // 0x4c9374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c9374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9378:
    // 0x4c9378: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4c9378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4c937c:
    // 0x4c937c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4c937cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c9380:
    // 0x4c9380: 0x8c82446c  lw          $v0, 0x446C($a0)
    ctx->pc = 0x4c9380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17516)));
label_4c9384:
    // 0x4c9384: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4c9384u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_4c9388:
    // 0x4c9388: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4c9388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_4c938c:
    // 0x4c938c: 0x28082  srl         $s0, $v0, 2
    ctx->pc = 0x4c938cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4c9390:
    // 0x4c9390: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4c9390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4c9394:
    // 0x4c9394: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4c9398:
    if (ctx->pc == 0x4C9398u) {
        ctx->pc = 0x4C9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9394u;
        // 0x4c9398: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C939Cu;
        goto label_4c939c;
    }
    ctx->pc = 0x4C9394u;
    {
        const bool branch_taken_0x4c9394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9394u;
        // 0x4c9398: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9394) {
            ctx->pc = 0x4C93CCu;
            goto label_4c93cc;
        }
    }
    ctx->pc = 0x4C939Cu;
label_4c939c:
    // 0x4c939c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x4c939cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_4c93a0:
    // 0x4c93a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c93a4:
    if (ctx->pc == 0x4C93A4u) {
        ctx->pc = 0x4C93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93A0u;
        // 0x4c93a4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C93A8u;
        goto label_4c93a8;
    }
    ctx->pc = 0x4C93A0u;
    {
        const bool branch_taken_0x4c93a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93A0u;
        // 0x4c93a4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c93a0) {
            ctx->pc = 0x4C93BCu;
            goto label_4c93bc;
        }
    }
    ctx->pc = 0x4C93A8u;
label_4c93a8:
    // 0x4c93a8: 0x8c62447c  lw          $v0, 0x447C($v1)
    ctx->pc = 0x4c93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17532)));
label_4c93ac:
    // 0x4c93ac: 0x40f809  jalr        $v0
label_4c93b0:
    if (ctx->pc == 0x4C93B0u) {
        ctx->pc = 0x4C93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93ACu;
        // 0x4c93b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C93B4u;
        goto label_4c93b4;
    }
    ctx->pc = 0x4C93ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C93B4u);
        ctx->pc = 0x4C93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93ACu;
        // 0x4c93b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C93ACu, 0x4C93B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C93B4u;
label_4c93b4:
    // 0x4c93b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c93b8:
    if (ctx->pc == 0x4C93B8u) {
        ctx->pc = 0x4C93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93B4u;
        // 0x4c93b8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C93BCu;
        goto label_4c93bc;
    }
    ctx->pc = 0x4C93B4u;
    {
        const bool branch_taken_0x4c93b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93B4u;
        // 0x4c93b8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c93b4) {
            ctx->pc = 0x4C93D0u;
            goto label_4c93d0;
        }
    }
    ctx->pc = 0x4C93BCu;
label_4c93bc:
    // 0x4c93bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c93c0:
    // 0x4c93c0: 0x8c624478  lw          $v0, 0x4478($v1)
    ctx->pc = 0x4c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17528)));
label_4c93c4:
    // 0x4c93c4: 0x40f809  jalr        $v0
label_4c93c8:
    if (ctx->pc == 0x4C93C8u) {
        ctx->pc = 0x4C93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93C4u;
        // 0x4c93c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C93CCu;
        goto label_4c93cc;
    }
    ctx->pc = 0x4C93C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C93CCu);
        ctx->pc = 0x4C93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93C4u;
        // 0x4c93c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C93C4u, 0x4C93CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C93CCu;
label_4c93cc:
    // 0x4c93cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4c93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4c93d0:
    // 0x4c93d0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4c93d4:
    if (ctx->pc == 0x4C93D4u) {
        ctx->pc = 0x4C93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93D0u;
        // 0x4c93d4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C93D8u;
        goto label_4c93d8;
    }
    ctx->pc = 0x4C93D0u;
    {
        const bool branch_taken_0x4c93d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93D0u;
        // 0x4c93d4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c93d0) {
            ctx->pc = 0x4C93ECu;
            goto label_4c93ec;
        }
    }
    ctx->pc = 0x4C93D8u;
label_4c93d8:
    // 0x4c93d8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4c93d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_4c93dc:
    // 0x4c93dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c93dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c93e0:
    // 0x4c93e0: 0x8cc24464  lw          $v0, 0x4464($a2)
    ctx->pc = 0x4c93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17508)));
label_4c93e4:
    // 0x4c93e4: 0x40f809  jalr        $v0
label_4c93e8:
    if (ctx->pc == 0x4C93E8u) {
        ctx->pc = 0x4C93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93E4u;
        // 0x4c93e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C93ECu;
        goto label_4c93ec;
    }
    ctx->pc = 0x4C93E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C93ECu);
        ctx->pc = 0x4C93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C93E4u;
        // 0x4c93e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C93E4u, 0x4C93ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C93ECu;
label_4c93ec:
    // 0x4c93ec: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4c93ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4c93f0:
    // 0x4c93f0: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x4c93f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_4c93f4:
    // 0x4c93f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4c93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4c93f8:
    // 0x4c93f8: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x4c93f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4c93fc:
    // 0x4c93fc: 0x8e67001c  lw          $a3, 0x1C($s3)
    ctx->pc = 0x4c93fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_4c9400:
    // 0x4c9400: 0x2a2502a  slt         $t2, $s5, $v0
    ctx->pc = 0x4c9400u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4c9404:
    // 0x4c9404: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4c9404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c9408:
    // 0x4c9408: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4c9408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4c940c:
    // 0x4c940c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x4c940cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4c9410:
    // 0x4c9410: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4c9410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4c9414:
    // 0x4c9414: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4c9414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4c9418:
    // 0x4c9418: 0x1164821  addu        $t1, $t0, $s6
    ctx->pc = 0x4c9418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
label_4c941c:
    // 0x4c941c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4c941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9420:
    // 0x4c9420: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x4c9420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4c9424:
    // 0x4c9424: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x4c9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4c9428:
    // 0x4c9428: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x4c9428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_4c942c:
    // 0x4c942c: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x4c942cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_4c9430:
    // 0x4c9430: 0xf62821  addu        $a1, $a3, $s6
    ctx->pc = 0x4c9430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
label_4c9434:
    // 0x4c9434: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x4c9434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_4c9438:
    // 0x4c9438: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4c9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4c943c:
    // 0x4c943c: 0xae69000c  sw          $t1, 0xC($s3)
    ctx->pc = 0x4c943cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 9));
label_4c9440:
    // 0x4c9440: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4c9440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4c9444:
    // 0x4c9444: 0xae65001c  sw          $a1, 0x1C($s3)
    ctx->pc = 0x4c9444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
label_4c9448:
    // 0x4c9448: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x4c9448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_4c944c:
    // 0x4c944c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x4c944cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_4c9450:
    // 0x4c9450: 0xae680008  sw          $t0, 0x8($s3)
    ctx->pc = 0x4c9450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 8));
label_4c9454:
    // 0x4c9454: 0xae670018  sw          $a3, 0x18($s3)
    ctx->pc = 0x4c9454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 7));
label_4c9458:
    // 0x4c9458: 0x1540ffbd  bnez        $t2, . + 4 + (-0x43 << 2)
label_4c945c:
    if (ctx->pc == 0x4C945Cu) {
        ctx->pc = 0x4C945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9458u;
        // 0x4c945c: 0xac862860  sw          $a2, 0x2860($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10336), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9460u;
        goto label_4c9460;
    }
    ctx->pc = 0x4C9458u;
    {
        const bool branch_taken_0x4c9458 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9458u;
        // 0x4c945c: 0xac862860  sw          $a2, 0x2860($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10336), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9458) {
            ctx->pc = 0x4C9350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c9350;
        }
    }
    ctx->pc = 0x4C9460u;
label_4c9460:
    // 0x4c9460: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x4c9460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9464:
    // 0x4c9464: 0xd5102a  slt         $v0, $a2, $s5
    ctx->pc = 0x4c9464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_4c9468:
    // 0x4c9468: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4c946c:
    if (ctx->pc == 0x4C946Cu) {
        ctx->pc = 0x4C946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9468u;
        // 0x4c946c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9470u;
        goto label_4c9470;
    }
    ctx->pc = 0x4C9468u;
    {
        const bool branch_taken_0x4c9468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9468u;
        // 0x4c946c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9468) {
            ctx->pc = 0x4C9488u;
            goto label_4c9488;
        }
    }
    ctx->pc = 0x4C9470u;
label_4c9470:
    // 0x4c9470: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c9470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4c9474:
    // 0x4c9474: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4c9474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4c9478:
    // 0x4c9478: 0x8c434460  lw          $v1, 0x4460($v0)
    ctx->pc = 0x4c9478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17504)));
label_4c947c:
    // 0x4c947c: 0x60f809  jalr        $v1
label_4c9480:
    if (ctx->pc == 0x4C9480u) {
        ctx->pc = 0x4C9480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C947Cu;
        // 0x4c9480: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9484u;
        goto label_4c9484;
    }
    ctx->pc = 0x4C947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4C9484u);
        ctx->pc = 0x4C9480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C947Cu;
        // 0x4c9480: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C947Cu, 0x4C9484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C9484u;
label_4c9484:
    // 0x4c9484: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4c9484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c9488:
    // 0x4c9488: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4c9488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4c948c:
    // 0x4c948c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4c948cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c9490:
    // 0x4c9490: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4c9490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4c9494:
    // 0x4c9494: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4c9494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c9498:
    // 0x4c9498: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4c9498u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4c949c:
    // 0x4c949c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4c949cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c94a0:
    // 0x4c94a0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4c94a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4c94a4:
    // 0x4c94a4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4c94a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4c94a8:
    // 0x4c94a8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4c94a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_4c94ac:
    // 0x4c94ac: 0x3e00008  jr          $ra
label_4c94b0:
    if (ctx->pc == 0x4C94B0u) {
        ctx->pc = 0x4C94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C94ACu;
        // 0x4c94b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C94B4u;
        goto label_4c94b4;
    }
    ctx->pc = 0x4C94ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C94ACu;
        // 0x4c94b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C94ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C94B4u;
label_4c94b4:
    // 0x4c94b4: 0x0  nop
    ctx->pc = 0x4c94b4u;
    // NOP
    ctx->pc = 0x4c94b8u;
}
