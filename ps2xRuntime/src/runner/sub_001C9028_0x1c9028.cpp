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

// Function: sub_001C9028
// Address: 0x1c9028 - 0x1c94c8
void sub_001C9028_0x1c9028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9028_0x1c9028");
#endif

    switch (ctx->pc) {
        case 0x1c9028u: goto label_1c9028;
        case 0x1c902cu: goto label_1c902c;
        case 0x1c9030u: goto label_1c9030;
        case 0x1c9034u: goto label_1c9034;
        case 0x1c9038u: goto label_1c9038;
        case 0x1c903cu: goto label_1c903c;
        case 0x1c9040u: goto label_1c9040;
        case 0x1c9044u: goto label_1c9044;
        case 0x1c9048u: goto label_1c9048;
        case 0x1c904cu: goto label_1c904c;
        case 0x1c9050u: goto label_1c9050;
        case 0x1c9054u: goto label_1c9054;
        case 0x1c9058u: goto label_1c9058;
        case 0x1c905cu: goto label_1c905c;
        case 0x1c9060u: goto label_1c9060;
        case 0x1c9064u: goto label_1c9064;
        case 0x1c9068u: goto label_1c9068;
        case 0x1c906cu: goto label_1c906c;
        case 0x1c9070u: goto label_1c9070;
        case 0x1c9074u: goto label_1c9074;
        case 0x1c9078u: goto label_1c9078;
        case 0x1c907cu: goto label_1c907c;
        case 0x1c9080u: goto label_1c9080;
        case 0x1c9084u: goto label_1c9084;
        case 0x1c9088u: goto label_1c9088;
        case 0x1c908cu: goto label_1c908c;
        case 0x1c9090u: goto label_1c9090;
        case 0x1c9094u: goto label_1c9094;
        case 0x1c9098u: goto label_1c9098;
        case 0x1c909cu: goto label_1c909c;
        case 0x1c90a0u: goto label_1c90a0;
        case 0x1c90a4u: goto label_1c90a4;
        case 0x1c90a8u: goto label_1c90a8;
        case 0x1c90acu: goto label_1c90ac;
        case 0x1c90b0u: goto label_1c90b0;
        case 0x1c90b4u: goto label_1c90b4;
        case 0x1c90b8u: goto label_1c90b8;
        case 0x1c90bcu: goto label_1c90bc;
        case 0x1c90c0u: goto label_1c90c0;
        case 0x1c90c4u: goto label_1c90c4;
        case 0x1c90c8u: goto label_1c90c8;
        case 0x1c90ccu: goto label_1c90cc;
        case 0x1c90d0u: goto label_1c90d0;
        case 0x1c90d4u: goto label_1c90d4;
        case 0x1c90d8u: goto label_1c90d8;
        case 0x1c90dcu: goto label_1c90dc;
        case 0x1c90e0u: goto label_1c90e0;
        case 0x1c90e4u: goto label_1c90e4;
        case 0x1c90e8u: goto label_1c90e8;
        case 0x1c90ecu: goto label_1c90ec;
        case 0x1c90f0u: goto label_1c90f0;
        case 0x1c90f4u: goto label_1c90f4;
        case 0x1c90f8u: goto label_1c90f8;
        case 0x1c90fcu: goto label_1c90fc;
        case 0x1c9100u: goto label_1c9100;
        case 0x1c9104u: goto label_1c9104;
        case 0x1c9108u: goto label_1c9108;
        case 0x1c910cu: goto label_1c910c;
        case 0x1c9110u: goto label_1c9110;
        case 0x1c9114u: goto label_1c9114;
        case 0x1c9118u: goto label_1c9118;
        case 0x1c911cu: goto label_1c911c;
        case 0x1c9120u: goto label_1c9120;
        case 0x1c9124u: goto label_1c9124;
        case 0x1c9128u: goto label_1c9128;
        case 0x1c912cu: goto label_1c912c;
        case 0x1c9130u: goto label_1c9130;
        case 0x1c9134u: goto label_1c9134;
        case 0x1c9138u: goto label_1c9138;
        case 0x1c913cu: goto label_1c913c;
        case 0x1c9140u: goto label_1c9140;
        case 0x1c9144u: goto label_1c9144;
        case 0x1c9148u: goto label_1c9148;
        case 0x1c914cu: goto label_1c914c;
        case 0x1c9150u: goto label_1c9150;
        case 0x1c9154u: goto label_1c9154;
        case 0x1c9158u: goto label_1c9158;
        case 0x1c915cu: goto label_1c915c;
        case 0x1c9160u: goto label_1c9160;
        case 0x1c9164u: goto label_1c9164;
        case 0x1c9168u: goto label_1c9168;
        case 0x1c916cu: goto label_1c916c;
        case 0x1c9170u: goto label_1c9170;
        case 0x1c9174u: goto label_1c9174;
        case 0x1c9178u: goto label_1c9178;
        case 0x1c917cu: goto label_1c917c;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c9184u: goto label_1c9184;
        case 0x1c9188u: goto label_1c9188;
        case 0x1c918cu: goto label_1c918c;
        case 0x1c9190u: goto label_1c9190;
        case 0x1c9194u: goto label_1c9194;
        case 0x1c9198u: goto label_1c9198;
        case 0x1c919cu: goto label_1c919c;
        case 0x1c91a0u: goto label_1c91a0;
        case 0x1c91a4u: goto label_1c91a4;
        case 0x1c91a8u: goto label_1c91a8;
        case 0x1c91acu: goto label_1c91ac;
        case 0x1c91b0u: goto label_1c91b0;
        case 0x1c91b4u: goto label_1c91b4;
        case 0x1c91b8u: goto label_1c91b8;
        case 0x1c91bcu: goto label_1c91bc;
        case 0x1c91c0u: goto label_1c91c0;
        case 0x1c91c4u: goto label_1c91c4;
        case 0x1c91c8u: goto label_1c91c8;
        case 0x1c91ccu: goto label_1c91cc;
        case 0x1c91d0u: goto label_1c91d0;
        case 0x1c91d4u: goto label_1c91d4;
        case 0x1c91d8u: goto label_1c91d8;
        case 0x1c91dcu: goto label_1c91dc;
        case 0x1c91e0u: goto label_1c91e0;
        case 0x1c91e4u: goto label_1c91e4;
        case 0x1c91e8u: goto label_1c91e8;
        case 0x1c91ecu: goto label_1c91ec;
        case 0x1c91f0u: goto label_1c91f0;
        case 0x1c91f4u: goto label_1c91f4;
        case 0x1c91f8u: goto label_1c91f8;
        case 0x1c91fcu: goto label_1c91fc;
        case 0x1c9200u: goto label_1c9200;
        case 0x1c9204u: goto label_1c9204;
        case 0x1c9208u: goto label_1c9208;
        case 0x1c920cu: goto label_1c920c;
        case 0x1c9210u: goto label_1c9210;
        case 0x1c9214u: goto label_1c9214;
        case 0x1c9218u: goto label_1c9218;
        case 0x1c921cu: goto label_1c921c;
        case 0x1c9220u: goto label_1c9220;
        case 0x1c9224u: goto label_1c9224;
        case 0x1c9228u: goto label_1c9228;
        case 0x1c922cu: goto label_1c922c;
        case 0x1c9230u: goto label_1c9230;
        case 0x1c9234u: goto label_1c9234;
        case 0x1c9238u: goto label_1c9238;
        case 0x1c923cu: goto label_1c923c;
        case 0x1c9240u: goto label_1c9240;
        case 0x1c9244u: goto label_1c9244;
        case 0x1c9248u: goto label_1c9248;
        case 0x1c924cu: goto label_1c924c;
        case 0x1c9250u: goto label_1c9250;
        case 0x1c9254u: goto label_1c9254;
        case 0x1c9258u: goto label_1c9258;
        case 0x1c925cu: goto label_1c925c;
        case 0x1c9260u: goto label_1c9260;
        case 0x1c9264u: goto label_1c9264;
        case 0x1c9268u: goto label_1c9268;
        case 0x1c926cu: goto label_1c926c;
        case 0x1c9270u: goto label_1c9270;
        case 0x1c9274u: goto label_1c9274;
        case 0x1c9278u: goto label_1c9278;
        case 0x1c927cu: goto label_1c927c;
        case 0x1c9280u: goto label_1c9280;
        case 0x1c9284u: goto label_1c9284;
        case 0x1c9288u: goto label_1c9288;
        case 0x1c928cu: goto label_1c928c;
        case 0x1c9290u: goto label_1c9290;
        case 0x1c9294u: goto label_1c9294;
        case 0x1c9298u: goto label_1c9298;
        case 0x1c929cu: goto label_1c929c;
        case 0x1c92a0u: goto label_1c92a0;
        case 0x1c92a4u: goto label_1c92a4;
        case 0x1c92a8u: goto label_1c92a8;
        case 0x1c92acu: goto label_1c92ac;
        case 0x1c92b0u: goto label_1c92b0;
        case 0x1c92b4u: goto label_1c92b4;
        case 0x1c92b8u: goto label_1c92b8;
        case 0x1c92bcu: goto label_1c92bc;
        case 0x1c92c0u: goto label_1c92c0;
        case 0x1c92c4u: goto label_1c92c4;
        case 0x1c92c8u: goto label_1c92c8;
        case 0x1c92ccu: goto label_1c92cc;
        case 0x1c92d0u: goto label_1c92d0;
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92d8u: goto label_1c92d8;
        case 0x1c92dcu: goto label_1c92dc;
        case 0x1c92e0u: goto label_1c92e0;
        case 0x1c92e4u: goto label_1c92e4;
        case 0x1c92e8u: goto label_1c92e8;
        case 0x1c92ecu: goto label_1c92ec;
        case 0x1c92f0u: goto label_1c92f0;
        case 0x1c92f4u: goto label_1c92f4;
        case 0x1c92f8u: goto label_1c92f8;
        case 0x1c92fcu: goto label_1c92fc;
        case 0x1c9300u: goto label_1c9300;
        case 0x1c9304u: goto label_1c9304;
        case 0x1c9308u: goto label_1c9308;
        case 0x1c930cu: goto label_1c930c;
        case 0x1c9310u: goto label_1c9310;
        case 0x1c9314u: goto label_1c9314;
        case 0x1c9318u: goto label_1c9318;
        case 0x1c931cu: goto label_1c931c;
        case 0x1c9320u: goto label_1c9320;
        case 0x1c9324u: goto label_1c9324;
        case 0x1c9328u: goto label_1c9328;
        case 0x1c932cu: goto label_1c932c;
        case 0x1c9330u: goto label_1c9330;
        case 0x1c9334u: goto label_1c9334;
        case 0x1c9338u: goto label_1c9338;
        case 0x1c933cu: goto label_1c933c;
        case 0x1c9340u: goto label_1c9340;
        case 0x1c9344u: goto label_1c9344;
        case 0x1c9348u: goto label_1c9348;
        case 0x1c934cu: goto label_1c934c;
        case 0x1c9350u: goto label_1c9350;
        case 0x1c9354u: goto label_1c9354;
        case 0x1c9358u: goto label_1c9358;
        case 0x1c935cu: goto label_1c935c;
        case 0x1c9360u: goto label_1c9360;
        case 0x1c9364u: goto label_1c9364;
        case 0x1c9368u: goto label_1c9368;
        case 0x1c936cu: goto label_1c936c;
        case 0x1c9370u: goto label_1c9370;
        case 0x1c9374u: goto label_1c9374;
        case 0x1c9378u: goto label_1c9378;
        case 0x1c937cu: goto label_1c937c;
        case 0x1c9380u: goto label_1c9380;
        case 0x1c9384u: goto label_1c9384;
        case 0x1c9388u: goto label_1c9388;
        case 0x1c938cu: goto label_1c938c;
        case 0x1c9390u: goto label_1c9390;
        case 0x1c9394u: goto label_1c9394;
        case 0x1c9398u: goto label_1c9398;
        case 0x1c939cu: goto label_1c939c;
        case 0x1c93a0u: goto label_1c93a0;
        case 0x1c93a4u: goto label_1c93a4;
        case 0x1c93a8u: goto label_1c93a8;
        case 0x1c93acu: goto label_1c93ac;
        case 0x1c93b0u: goto label_1c93b0;
        case 0x1c93b4u: goto label_1c93b4;
        case 0x1c93b8u: goto label_1c93b8;
        case 0x1c93bcu: goto label_1c93bc;
        case 0x1c93c0u: goto label_1c93c0;
        case 0x1c93c4u: goto label_1c93c4;
        case 0x1c93c8u: goto label_1c93c8;
        case 0x1c93ccu: goto label_1c93cc;
        case 0x1c93d0u: goto label_1c93d0;
        case 0x1c93d4u: goto label_1c93d4;
        case 0x1c93d8u: goto label_1c93d8;
        case 0x1c93dcu: goto label_1c93dc;
        case 0x1c93e0u: goto label_1c93e0;
        case 0x1c93e4u: goto label_1c93e4;
        case 0x1c93e8u: goto label_1c93e8;
        case 0x1c93ecu: goto label_1c93ec;
        case 0x1c93f0u: goto label_1c93f0;
        case 0x1c93f4u: goto label_1c93f4;
        case 0x1c93f8u: goto label_1c93f8;
        case 0x1c93fcu: goto label_1c93fc;
        case 0x1c9400u: goto label_1c9400;
        case 0x1c9404u: goto label_1c9404;
        case 0x1c9408u: goto label_1c9408;
        case 0x1c940cu: goto label_1c940c;
        case 0x1c9410u: goto label_1c9410;
        case 0x1c9414u: goto label_1c9414;
        case 0x1c9418u: goto label_1c9418;
        case 0x1c941cu: goto label_1c941c;
        case 0x1c9420u: goto label_1c9420;
        case 0x1c9424u: goto label_1c9424;
        case 0x1c9428u: goto label_1c9428;
        case 0x1c942cu: goto label_1c942c;
        case 0x1c9430u: goto label_1c9430;
        case 0x1c9434u: goto label_1c9434;
        case 0x1c9438u: goto label_1c9438;
        case 0x1c943cu: goto label_1c943c;
        case 0x1c9440u: goto label_1c9440;
        case 0x1c9444u: goto label_1c9444;
        case 0x1c9448u: goto label_1c9448;
        case 0x1c944cu: goto label_1c944c;
        case 0x1c9450u: goto label_1c9450;
        case 0x1c9454u: goto label_1c9454;
        case 0x1c9458u: goto label_1c9458;
        case 0x1c945cu: goto label_1c945c;
        case 0x1c9460u: goto label_1c9460;
        case 0x1c9464u: goto label_1c9464;
        case 0x1c9468u: goto label_1c9468;
        case 0x1c946cu: goto label_1c946c;
        case 0x1c9470u: goto label_1c9470;
        case 0x1c9474u: goto label_1c9474;
        case 0x1c9478u: goto label_1c9478;
        case 0x1c947cu: goto label_1c947c;
        case 0x1c9480u: goto label_1c9480;
        case 0x1c9484u: goto label_1c9484;
        case 0x1c9488u: goto label_1c9488;
        case 0x1c948cu: goto label_1c948c;
        case 0x1c9490u: goto label_1c9490;
        case 0x1c9494u: goto label_1c9494;
        case 0x1c9498u: goto label_1c9498;
        case 0x1c949cu: goto label_1c949c;
        case 0x1c94a0u: goto label_1c94a0;
        case 0x1c94a4u: goto label_1c94a4;
        case 0x1c94a8u: goto label_1c94a8;
        case 0x1c94acu: goto label_1c94ac;
        case 0x1c94b0u: goto label_1c94b0;
        case 0x1c94b4u: goto label_1c94b4;
        case 0x1c94b8u: goto label_1c94b8;
        case 0x1c94bcu: goto label_1c94bc;
        case 0x1c94c0u: goto label_1c94c0;
        case 0x1c94c4u: goto label_1c94c4;
        default: break;
    }

    ctx->pc = 0x1c9028u;

label_1c9028:
    // 0x1c9028: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1c902c:
    // 0x1c902c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c902cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9030:
    // 0x1c9030: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c9030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1c9034:
    // 0x1c9034: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c9034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1c9038:
    // 0x1c9038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c903c:
    // 0x1c903c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1c9040:
    // 0x1c9040: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c9044:
    // 0x1c9044: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1c9044u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c9048:
    // 0x1c9048: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1c9048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1c904c:
    // 0x1c904c: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x1c904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_1c9050:
    // 0x1c9050: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_1c9054:
    if (ctx->pc == 0x1C9054u) {
        ctx->pc = 0x1C9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9050u;
        // 0x1c9054: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9058u;
        goto label_1c9058;
    }
    ctx->pc = 0x1C9050u;
    {
        const bool branch_taken_0x1c9050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9050) {
            ctx->pc = 0x1C9054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9050u;
            // 0x1c9054: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9058u;
            goto label_1c9058;
        }
    }
    ctx->pc = 0x1C9058u;
label_1c9058:
    // 0x1c9058: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1c9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1c905c:
    // 0x1c905c: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
label_1c9060:
    if (ctx->pc == 0x1C9060u) {
        ctx->pc = 0x1C9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C905Cu;
        // 0x1c9060: 0xae200578  sw          $zero, 0x578($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9064u;
        goto label_1c9064;
    }
    ctx->pc = 0x1C905Cu;
    {
        const bool branch_taken_0x1c905c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C905Cu;
        // 0x1c9060: 0xae200578  sw          $zero, 0x578($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c905c) {
            ctx->pc = 0x1C929Cu;
            goto label_1c929c;
        }
    }
    ctx->pc = 0x1C9064u;
label_1c9064:
    // 0x1c9064: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c9068:
    // 0x1c9068: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1c9068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1c906c:
    // 0x1c906c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1c9070:
    // 0x1c9070: 0x40f809  jalr        $v0
label_1c9074:
    if (ctx->pc == 0x1C9074u) {
        ctx->pc = 0x1C9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9070u;
        // 0x1c9074: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9078u;
        goto label_1c9078;
    }
    ctx->pc = 0x1C9070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9078u);
        ctx->pc = 0x1C9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9070u;
        // 0x1c9074: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9070u, 0x1C9078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9078u;
label_1c9078:
    // 0x1c9078: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_1c907c:
    if (ctx->pc == 0x1C907Cu) {
        ctx->pc = 0x1C907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9078u;
        // 0x1c907c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9080u;
        goto label_1c9080;
    }
    ctx->pc = 0x1C9078u;
    {
        const bool branch_taken_0x1c9078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9078) {
            ctx->pc = 0x1C907Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9078u;
            // 0x1c907c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9294u;
            goto label_1c9294;
        }
    }
    ctx->pc = 0x1C9080u;
label_1c9080:
    // 0x1c9080: 0x8e220544  lw          $v0, 0x544($s1)
    ctx->pc = 0x1c9080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
label_1c9084:
    // 0x1c9084: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1c9084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1c9088:
    // 0x1c9088: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c9088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c908c:
    // 0x1c908c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9090:
    // 0x1c9090: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1c9094:
    if (ctx->pc == 0x1C9094u) {
        ctx->pc = 0x1C9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9090u;
        // 0x1c9094: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9098u;
        goto label_1c9098;
    }
    ctx->pc = 0x1C9090u;
    {
        const bool branch_taken_0x1c9090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9090u;
        // 0x1c9094: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9090) {
            ctx->pc = 0x1C90B8u;
            goto label_1c90b8;
        }
    }
    ctx->pc = 0x1C9098u;
label_1c9098:
    // 0x1c9098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c909c:
    // 0x1c909c: 0x0  nop
    ctx->pc = 0x1c909cu;
    // NOP
label_1c90a0:
    // 0x1c90a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c90a4:
    // 0x1c90a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c90a8:
    // 0x1c90a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c90ac:
    // 0x1c90ac: 0x0  nop
    ctx->pc = 0x1c90acu;
    // NOP
label_1c90b0:
    // 0x1c90b0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_1c90b4:
    if (ctx->pc == 0x1C90B4u) {
        ctx->pc = 0x1C90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90B0u;
        // 0x1c90b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C90B8u;
        goto label_1c90b8;
    }
    ctx->pc = 0x1C90B0u;
    {
        const bool branch_taken_0x1c90b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90B0u;
        // 0x1c90b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90b0) {
            ctx->pc = 0x1C90A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c90a0;
        }
    }
    ctx->pc = 0x1C90B8u;
label_1c90b8:
    // 0x1c90b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c90bc:
    // 0x1c90bc: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
label_1c90c0:
    if (ctx->pc == 0x1C90C0u) {
        ctx->pc = 0x1C90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90BCu;
        // 0x1c90c0: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C90C4u;
        goto label_1c90c4;
    }
    ctx->pc = 0x1C90BCu;
    {
        const bool branch_taken_0x1c90bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90bc) {
            ctx->pc = 0x1C90C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C90BCu;
            // 0x1c90c0: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9294u;
            goto label_1c9294;
        }
    }
    ctx->pc = 0x1C90C4u;
label_1c90c4:
    // 0x1c90c4: 0x8e220544  lw          $v0, 0x544($s1)
    ctx->pc = 0x1c90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
label_1c90c8:
    // 0x1c90c8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1c90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1c90cc:
    // 0x1c90cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c90d0:
    // 0x1c90d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c90d4:
    // 0x1c90d4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1c90d8:
    if (ctx->pc == 0x1C90D8u) {
        ctx->pc = 0x1C90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90D4u;
        // 0x1c90d8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C90DCu;
        goto label_1c90dc;
    }
    ctx->pc = 0x1C90D4u;
    {
        const bool branch_taken_0x1c90d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90D4u;
        // 0x1c90d8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90d4) {
            ctx->pc = 0x1C90F8u;
            goto label_1c90f8;
        }
    }
    ctx->pc = 0x1C90DCu;
label_1c90dc:
    // 0x1c90dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c90dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c90e0:
    // 0x1c90e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c90e4:
    // 0x1c90e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c90e8:
    // 0x1c90e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c90ec:
    // 0x1c90ec: 0x0  nop
    ctx->pc = 0x1c90ecu;
    // NOP
label_1c90f0:
    // 0x1c90f0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_1c90f4:
    if (ctx->pc == 0x1C90F4u) {
        ctx->pc = 0x1C90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F0u;
        // 0x1c90f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C90F8u;
        goto label_1c90f8;
    }
    ctx->pc = 0x1C90F0u;
    {
        const bool branch_taken_0x1c90f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F0u;
        // 0x1c90f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f0) {
            ctx->pc = 0x1C90E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c90e0;
        }
    }
    ctx->pc = 0x1C90F8u;
label_1c90f8:
    // 0x1c90f8: 0x8e250544  lw          $a1, 0x544($s1)
    ctx->pc = 0x1c90f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
label_1c90fc:
    // 0x1c90fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c90fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9100:
    // 0x1c9100: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c9104:
    // 0x1c9104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c9104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9108:
    // 0x1c9108: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c9108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c910c:
    // 0x1c910c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c9110:
    // 0x1c9110: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1c9114:
    // 0x1c9114: 0xc615001c  lwc1        $f21, 0x1C($s0)
    ctx->pc = 0x1c9114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c9118:
    // 0x1c9118: 0xc0723a8  jal         func_1C8EA0
label_1c911c:
    if (ctx->pc == 0x1C911Cu) {
        ctx->pc = 0x1C911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9118u;
        // 0x1c911c: 0xc6140020  lwc1        $f20, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9120u;
        goto label_1c9120;
    }
    ctx->pc = 0x1C9118u;
    SET_GPR_U32(ctx, 31, 0x1C9120u);
    ctx->pc = 0x1C911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9118u;
    // 0x1c911c: 0xc6140020  lwc1        $f20, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8EA0u, 0x1C9118u, 0x1C9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9120u;
label_1c9120:
    // 0x1c9120: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1c9124:
    // 0x1c9124: 0xae220554  sw          $v0, 0x554($s1)
    ctx->pc = 0x1c9124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
label_1c9128:
    // 0x1c9128: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c912c:
    // 0x1c912c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1c9130:
    if (ctx->pc == 0x1C9130u) {
        ctx->pc = 0x1C9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C912Cu;
        // 0x1c9130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9134u;
        goto label_1c9134;
    }
    ctx->pc = 0x1C912Cu;
    {
        const bool branch_taken_0x1c912c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C912Cu;
        // 0x1c9130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c912c) {
            ctx->pc = 0x1C9160u;
            goto label_1c9160;
        }
    }
    ctx->pc = 0x1C9134u;
label_1c9134:
    // 0x1c9134: 0x7a2201f0  lq          $v0, 0x1F0($s1)
    ctx->pc = 0x1c9134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
label_1c9138:
    // 0x1c9138: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c9138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1c913c:
    // 0x1c913c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c913cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9140:
    // 0x1c9140: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c9144:
    // 0x1c9144: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1c9144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c9148:
    // 0x1c9148: 0xc072382  jal         func_1C8E08
label_1c914c:
    if (ctx->pc == 0x1C914Cu) {
        ctx->pc = 0x1C914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9148u;
        // 0x1c914c: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9150u;
        goto label_1c9150;
    }
    ctx->pc = 0x1C9148u;
    SET_GPR_U32(ctx, 31, 0x1C9150u);
    ctx->pc = 0x1C914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9148u;
    // 0x1c914c: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8E08u, 0x1C9148u, 0x1C9150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9150u;
label_1c9150:
    // 0x1c9150: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1c9150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c9154:
    // 0x1c9154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9158:
    // 0x1c9158: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c915c:
    if (ctx->pc == 0x1C915Cu) {
        ctx->pc = 0x1C915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9158u;
        // 0x1c915c: 0xe7b50010  swc1        $f21, 0x10($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9160u;
        goto label_1c9160;
    }
    ctx->pc = 0x1C9158u;
    {
        const bool branch_taken_0x1c9158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9158u;
        // 0x1c915c: 0xe7b50010  swc1        $f21, 0x10($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9158) {
            ctx->pc = 0x1C919Cu;
            goto label_1c919c;
        }
    }
    ctx->pc = 0x1C9160u;
label_1c9160:
    // 0x1c9160: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c9164:
    // 0x1c9164: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_1c9168:
    if (ctx->pc == 0x1C9168u) {
        ctx->pc = 0x1C9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9164u;
        // 0x1c9168: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C916Cu;
        goto label_1c916c;
    }
    ctx->pc = 0x1C9164u;
    {
        const bool branch_taken_0x1c9164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9164) {
            ctx->pc = 0x1C9168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9164u;
            // 0x1c9168: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91D8u;
            goto label_1c91d8;
        }
    }
    ctx->pc = 0x1C916Cu;
label_1c916c:
    // 0x1c916c: 0x7a2201f0  lq          $v0, 0x1F0($s1)
    ctx->pc = 0x1c916cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
label_1c9170:
    // 0x1c9170: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c9170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1c9174:
    // 0x1c9174: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c9174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c9178:
    // 0x1c9178: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1c9178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c917c:
    // 0x1c917c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1c917cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c9180:
    // 0x1c9180: 0xc072382  jal         func_1C8E08
label_1c9184:
    if (ctx->pc == 0x1C9184u) {
        ctx->pc = 0x1C9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9180u;
        // 0x1c9184: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9188u;
        goto label_1c9188;
    }
    ctx->pc = 0x1C9180u;
    SET_GPR_U32(ctx, 31, 0x1C9188u);
    ctx->pc = 0x1C9184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9180u;
    // 0x1c9184: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8E08u, 0x1C9180u, 0x1C9188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9188u;
label_1c9188:
    // 0x1c9188: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1c9188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c918c:
    // 0x1c918c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9190:
    // 0x1c9190: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1c9190u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1c9194:
    // 0x1c9194: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c9194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c9198:
    // 0x1c9198: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x1c9198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_1c919c:
    // 0x1c919c: 0xc06e4a2  jal         func_1B9288
label_1c91a0:
    if (ctx->pc == 0x1C91A0u) {
        ctx->pc = 0x1C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C919Cu;
        // 0x1c91a0: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91A4u;
        goto label_1c91a4;
    }
    ctx->pc = 0x1C919Cu;
    SET_GPR_U32(ctx, 31, 0x1C91A4u);
    ctx->pc = 0x1C91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C919Cu;
    // 0x1c91a0: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1C919Cu, 0x1C91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91A4u;
label_1c91a4:
    // 0x1c91a4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1c91a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c91a8:
    // 0x1c91a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c91a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c91ac:
    // 0x1c91ac: 0x7e220560  sq          $v0, 0x560($s1)
    ctx->pc = 0x1c91acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 2));
label_1c91b0:
    // 0x1c91b0: 0xc079ccc  jal         func_1E7330
label_1c91b4:
    if (ctx->pc == 0x1C91B4u) {
        ctx->pc = 0x1C91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91B0u;
        // 0x1c91b4: 0xc60c002c  lwc1        $f12, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91B8u;
        goto label_1c91b8;
    }
    ctx->pc = 0x1C91B0u;
    SET_GPR_U32(ctx, 31, 0x1C91B8u);
    ctx->pc = 0x1C91B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91B0u;
    // 0x1c91b4: 0xc60c002c  lwc1        $f12, 0x2C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7330u, 0x1C91B0u, 0x1C91B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91B8u;
label_1c91b8:
    // 0x1c91b8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1c91b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1c91bc:
    // 0x1c91bc: 0xc079cce  jal         func_1E7338
label_1c91c0:
    if (ctx->pc == 0x1C91C0u) {
        ctx->pc = 0x1C91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91BCu;
        // 0x1c91c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91C4u;
        goto label_1c91c4;
    }
    ctx->pc = 0x1C91BCu;
    SET_GPR_U32(ctx, 31, 0x1C91C4u);
    ctx->pc = 0x1C91C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91BCu;
    // 0x1c91c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7338u, 0x1C91BCu, 0x1C91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91C4u;
label_1c91c4:
    // 0x1c91c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c91c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c91c8:
    // 0x1c91c8: 0xc079cc0  jal         func_1E7300
label_1c91cc:
    if (ctx->pc == 0x1C91CCu) {
        ctx->pc = 0x1C91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91C8u;
        // 0x1c91cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91D0u;
        goto label_1c91d0;
    }
    ctx->pc = 0x1C91C8u;
    SET_GPR_U32(ctx, 31, 0x1C91D0u);
    ctx->pc = 0x1C91CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91C8u;
    // 0x1c91cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1C91C8u, 0x1C91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91D0u;
label_1c91d0:
    // 0x1c91d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c91d4:
    if (ctx->pc == 0x1C91D4u) {
        ctx->pc = 0x1C91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91D0u;
        // 0x1c91d4: 0x8e230544  lw          $v1, 0x544($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91D8u;
        goto label_1c91d8;
    }
    ctx->pc = 0x1C91D0u;
    {
        const bool branch_taken_0x1c91d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91D0u;
        // 0x1c91d4: 0x8e230544  lw          $v1, 0x544($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91d0) {
            ctx->pc = 0x1C91F0u;
            goto label_1c91f0;
        }
    }
    ctx->pc = 0x1C91D8u;
label_1c91d8:
    // 0x1c91d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c91d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c91dc:
    // 0x1c91dc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1c91dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c91e0:
    // 0x1c91e0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c91e4:
    // 0x1c91e4: 0xc072372  jal         func_1C8DC8
label_1c91e8:
    if (ctx->pc == 0x1C91E8u) {
        ctx->pc = 0x1C91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91E4u;
        // 0x1c91e8: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C91ECu;
        goto label_1c91ec;
    }
    ctx->pc = 0x1C91E4u;
    SET_GPR_U32(ctx, 31, 0x1C91ECu);
    ctx->pc = 0x1C91E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91E4u;
    // 0x1c91e8: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DC8u, 0x1C91E4u, 0x1C91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91ECu;
label_1c91ec:
    // 0x1c91ec: 0x8e230544  lw          $v1, 0x544($s1)
    ctx->pc = 0x1c91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
label_1c91f0:
    // 0x1c91f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c91f4:
    // 0x1c91f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c91f8:
    // 0x1c91f8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1c91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1c91fc:
    // 0x1c91fc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1c91fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9200:
    // 0x1c9200: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c9204:
    // 0x1c9204: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1c9204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1c9208:
    // 0x1c9208: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1c9208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1c920c:
    // 0x1c920c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c920cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c9210:
    // 0x1c9210: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1c9214:
    if (ctx->pc == 0x1C9214u) {
        ctx->pc = 0x1C9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9210u;
        // 0x1c9214: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9218u;
        goto label_1c9218;
    }
    ctx->pc = 0x1C9210u;
    {
        const bool branch_taken_0x1c9210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9210u;
        // 0x1c9214: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9210) {
            ctx->pc = 0x1C923Cu;
            goto label_1c923c;
        }
    }
    ctx->pc = 0x1C9218u;
label_1c9218:
    // 0x1c9218: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1c921c:
    // 0x1c921c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1c921cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1c9220:
    // 0x1c9220: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x1c9220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
label_1c9224:
    // 0x1c9224: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1c9224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1c9228:
    // 0x1c9228: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1c922c:
    // 0x1c922c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1c922cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1c9230:
    // 0x1c9230: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1c9234:
    // 0x1c9234: 0x60f809  jalr        $v1
label_1c9238:
    if (ctx->pc == 0x1C9238u) {
        ctx->pc = 0x1C9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9234u;
        // 0x1c9238: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C923Cu;
        goto label_1c923c;
    }
    ctx->pc = 0x1C9234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C923Cu);
        ctx->pc = 0x1C9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9234u;
        // 0x1c9238: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9234u, 0x1C923Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C923Cu;
label_1c923c:
    // 0x1c923c: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1c923cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
label_1c9240:
    // 0x1c9240: 0x8e260548  lw          $a2, 0x548($s1)
    ctx->pc = 0x1c9240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1352)));
label_1c9244:
    // 0x1c9244: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1c9244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1c9248:
    // 0x1c9248: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c924c:
    // 0x1c924c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c9250:
    // 0x1c9250: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c9254:
    // 0x1c9254: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c9254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c9258:
    // 0x1c9258: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c9258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1c925c:
    // 0x1c925c: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x1c925cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_1c9260:
    // 0x1c9260: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1c9260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c9264:
    // 0x1c9264: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1c9264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1c9268:
    // 0x1c9268: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1c926c:
    if (ctx->pc == 0x1C926Cu) {
        ctx->pc = 0x1C926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9268u;
        // 0x1c926c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9270u;
        goto label_1c9270;
    }
    ctx->pc = 0x1C9268u;
    {
        const bool branch_taken_0x1c9268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9268) {
            ctx->pc = 0x1C926Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9268u;
            // 0x1c926c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C9270u;
label_1c9270:
    // 0x1c9270: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x1c9270u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c9274:
    // 0x1c9274: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_1c9278:
    if (ctx->pc == 0x1C9278u) {
        ctx->pc = 0x1C9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9274u;
        // 0x1c9278: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C927Cu;
        goto label_1c927c;
    }
    ctx->pc = 0x1C9274u;
    {
        const bool branch_taken_0x1c9274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9274) {
            ctx->pc = 0x1C9278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9274u;
            // 0x1c9278: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C927Cu;
            goto label_1c927c;
        }
    }
    ctx->pc = 0x1C927Cu;
label_1c927c:
    // 0x1c927c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c927cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c9280:
    // 0x1c9280: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1c9280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1c9284:
    // 0x1c9284: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c9288:
    // 0x1c9288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c928c:
    // 0x1c928c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c928cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1c9290:
    // 0x1c9290: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1c9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1c9294:
    // 0x1c9294: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_1c9298:
    if (ctx->pc == 0x1C9298u) {
        ctx->pc = 0x1C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9294u;
        // 0x1c9298: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C929Cu;
        goto label_1c929c;
    }
    ctx->pc = 0x1C9294u;
    {
        const bool branch_taken_0x1c9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9294u;
        // 0x1c9298: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9294) {
            ctx->pc = 0x1C94A8u;
            goto label_1c94a8;
        }
    }
    ctx->pc = 0x1C929Cu;
label_1c929c:
    // 0x1c929c: 0xc079cd6  jal         func_1E7358
label_1c92a0:
    if (ctx->pc == 0x1C92A0u) {
        ctx->pc = 0x1C92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C929Cu;
        // 0x1c92a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92A4u;
        goto label_1c92a4;
    }
    ctx->pc = 0x1C929Cu;
    SET_GPR_U32(ctx, 31, 0x1C92A4u);
    ctx->pc = 0x1C92A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C929Cu;
    // 0x1c92a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7358u, 0x1C929Cu, 0x1C92A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92A4u;
label_1c92a4:
    // 0x1c92a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c92a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c92a8:
    // 0x1c92a8: 0xc0723a8  jal         func_1C8EA0
label_1c92ac:
    if (ctx->pc == 0x1C92ACu) {
        ctx->pc = 0x1C92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92A8u;
        // 0x1c92ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92B0u;
        goto label_1c92b0;
    }
    ctx->pc = 0x1C92A8u;
    SET_GPR_U32(ctx, 31, 0x1C92B0u);
    ctx->pc = 0x1C92ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92A8u;
    // 0x1c92ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8EA0u, 0x1C92A8u, 0x1C92B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92B0u;
label_1c92b0:
    // 0x1c92b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c92b4:
    // 0x1c92b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1c92b8:
    // 0x1c92b8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1c92bc:
    // 0x1c92bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c92bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c92c0:
    // 0x1c92c0: 0x8e250554  lw          $a1, 0x554($s1)
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
label_1c92c4:
    // 0x1c92c4: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_1c92c8:
    if (ctx->pc == 0x1C92C8u) {
        ctx->pc = 0x1C92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92C4u;
        // 0x1c92c8: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92CCu;
        goto label_1c92cc;
    }
    ctx->pc = 0x1C92C4u;
    {
        const bool branch_taken_0x1c92c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92C4u;
        // 0x1c92c8: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92c4) {
            ctx->pc = 0x1C9308u;
            goto label_1c9308;
        }
    }
    ctx->pc = 0x1C92CCu;
label_1c92cc:
    // 0x1c92cc: 0x8e22054c  lw          $v0, 0x54C($s1)
    ctx->pc = 0x1c92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1356)));
label_1c92d0:
    // 0x1c92d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1c92d4:
    // 0x1c92d4: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x1c92d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1c92d8:
    // 0x1c92d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1c92dc:
    if (ctx->pc == 0x1C92DCu) {
        ctx->pc = 0x1C92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92D8u;
        // 0x1c92dc: 0x244201f4  addiu       $v0, $v0, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92E0u;
        goto label_1c92e0;
    }
    ctx->pc = 0x1C92D8u;
    {
        const bool branch_taken_0x1c92d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92D8u;
        // 0x1c92dc: 0x244201f4  addiu       $v0, $v0, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92d8) {
            ctx->pc = 0x1C9308u;
            goto label_1c9308;
        }
    }
    ctx->pc = 0x1C92E0u;
label_1c92e0:
    // 0x1c92e0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1c92e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1c92e4:
    // 0x1c92e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c92e8:
    if (ctx->pc == 0x1C92E8u) {
        ctx->pc = 0x1C92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92E4u;
        // 0x1c92e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92ECu;
        goto label_1c92ec;
    }
    ctx->pc = 0x1C92E4u;
    {
        const bool branch_taken_0x1c92e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92E4u;
        // 0x1c92e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92e4) {
            ctx->pc = 0x1C930Cu;
            goto label_1c930c;
        }
    }
    ctx->pc = 0x1C92ECu;
label_1c92ec:
    // 0x1c92ec: 0xc079cb0  jal         func_1E72C0
label_1c92f0:
    if (ctx->pc == 0x1C92F0u) {
        ctx->pc = 0x1C92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92ECu;
        // 0x1c92f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92F4u;
        goto label_1c92f4;
    }
    ctx->pc = 0x1C92ECu;
    SET_GPR_U32(ctx, 31, 0x1C92F4u);
    ctx->pc = 0x1C92F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92ECu;
    // 0x1c92f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1C92ECu, 0x1C92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92F4u;
label_1c92f4:
    // 0x1c92f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c92f8:
    // 0x1c92f8: 0xc079cc0  jal         func_1E7300
label_1c92fc:
    if (ctx->pc == 0x1C92FCu) {
        ctx->pc = 0x1C92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92F8u;
        // 0x1c92fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9300u;
        goto label_1c9300;
    }
    ctx->pc = 0x1C92F8u;
    SET_GPR_U32(ctx, 31, 0x1C9300u);
    ctx->pc = 0x1C92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92F8u;
    // 0x1c92fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1C92F8u, 0x1C9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9300u;
label_1c9300:
    // 0x1c9300: 0x10000068  b           . + 4 + (0x68 << 2)
label_1c9304:
    if (ctx->pc == 0x1C9304u) {
        ctx->pc = 0x1C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9300u;
        // 0x1c9304: 0xae200558  sw          $zero, 0x558($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9308u;
        goto label_1c9308;
    }
    ctx->pc = 0x1C9300u;
    {
        const bool branch_taken_0x1c9300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9300u;
        // 0x1c9304: 0xae200558  sw          $zero, 0x558($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9300) {
            ctx->pc = 0x1C94A4u;
            goto label_1c94a4;
        }
    }
    ctx->pc = 0x1C9308u;
label_1c9308:
    // 0x1c9308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c930c:
    // 0x1c930c: 0xc079cc0  jal         func_1E7300
label_1c9310:
    if (ctx->pc == 0x1C9310u) {
        ctx->pc = 0x1C9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C930Cu;
        // 0x1c9310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9314u;
        goto label_1c9314;
    }
    ctx->pc = 0x1C930Cu;
    SET_GPR_U32(ctx, 31, 0x1C9314u);
    ctx->pc = 0x1C9310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C930Cu;
    // 0x1c9310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1C930Cu, 0x1C9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9314u;
label_1c9314:
    // 0x1c9314: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1c9318:
    // 0x1c9318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c931c:
    // 0x1c931c: 0xc06c590  jal         func_1B1640
label_1c9320:
    if (ctx->pc == 0x1C9320u) {
        ctx->pc = 0x1C9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C931Cu;
        // 0x1c9320: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9324u;
        goto label_1c9324;
    }
    ctx->pc = 0x1C931Cu;
    SET_GPR_U32(ctx, 31, 0x1C9324u);
    ctx->pc = 0x1C9320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C931Cu;
    // 0x1c9320: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1C931Cu, 0x1C9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9324u;
label_1c9324:
    // 0x1c9324: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c9328:
    if (ctx->pc == 0x1C9328u) {
        ctx->pc = 0x1C9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9324u;
        // 0x1c9328: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C932Cu;
        goto label_1c932c;
    }
    ctx->pc = 0x1C9324u;
    {
        const bool branch_taken_0x1c9324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9324u;
        // 0x1c9328: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9324) {
            ctx->pc = 0x1C9344u;
            goto label_1c9344;
        }
    }
    ctx->pc = 0x1C932Cu;
label_1c932c:
    // 0x1c932c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9330:
    // 0x1c9330: 0xc44cea4c  lwc1        $f12, -0x15B4($v0)
    ctx->pc = 0x1c9330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9334:
    // 0x1c9334: 0xc06ece4  jal         func_1BB390
label_1c9338:
    if (ctx->pc == 0x1C9338u) {
        ctx->pc = 0x1C9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9334u;
        // 0x1c9338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C933Cu;
        goto label_1c933c;
    }
    ctx->pc = 0x1C9334u;
    SET_GPR_U32(ctx, 31, 0x1C933Cu);
    ctx->pc = 0x1C9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9334u;
    // 0x1c9338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1C9334u, 0x1C933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C933Cu;
label_1c933c:
    // 0x1c933c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c9340:
    if (ctx->pc == 0x1C9340u) {
        ctx->pc = 0x1C9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C933Cu;
        // 0x1c9340: 0x8e220570  lw          $v0, 0x570($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9344u;
        goto label_1c9344;
    }
    ctx->pc = 0x1C933Cu;
    {
        const bool branch_taken_0x1c933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C933Cu;
        // 0x1c9340: 0x8e220570  lw          $v0, 0x570($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c933c) {
            ctx->pc = 0x1C935Cu;
            goto label_1c935c;
        }
    }
    ctx->pc = 0x1C9344u;
label_1c9344:
    // 0x1c9344: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c9348:
    // 0x1c9348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c934c:
    // 0x1c934c: 0xc44cea50  lwc1        $f12, -0x15B0($v0)
    ctx->pc = 0x1c934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9350:
    // 0x1c9350: 0xc06ece4  jal         func_1BB390
label_1c9354:
    if (ctx->pc == 0x1C9354u) {
        ctx->pc = 0x1C9354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9350u;
        // 0x1c9354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9358u;
        goto label_1c9358;
    }
    ctx->pc = 0x1C9350u;
    SET_GPR_U32(ctx, 31, 0x1C9358u);
    ctx->pc = 0x1C9354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9350u;
    // 0x1c9354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1C9350u, 0x1C9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9358u;
label_1c9358:
    // 0x1c9358: 0x8e220570  lw          $v0, 0x570($s1)
    ctx->pc = 0x1c9358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
label_1c935c:
    // 0x1c935c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_1c9360:
    if (ctx->pc == 0x1C9360u) {
        ctx->pc = 0x1C9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C935Cu;
        // 0x1c9360: 0x7a220560  lq          $v0, 0x560($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9364u;
        goto label_1c9364;
    }
    ctx->pc = 0x1C935Cu;
    {
        const bool branch_taken_0x1c935c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c935c) {
            ctx->pc = 0x1C9360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C935Cu;
            // 0x1c9360: 0x7a220560  lq          $v0, 0x560($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9424u;
            goto label_1c9424;
        }
    }
    ctx->pc = 0x1C9364u;
label_1c9364:
    // 0x1c9364: 0xc06c590  jal         func_1B1640
label_1c9368:
    if (ctx->pc == 0x1C9368u) {
        ctx->pc = 0x1C9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9364u;
        // 0x1c9368: 0x26040840  addiu       $a0, $s0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C936Cu;
        goto label_1c936c;
    }
    ctx->pc = 0x1C9364u;
    SET_GPR_U32(ctx, 31, 0x1C936Cu);
    ctx->pc = 0x1C9368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9364u;
    // 0x1c9368: 0x26040840  addiu       $a0, $s0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1C9364u, 0x1C936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C936Cu;
label_1c936c:
    // 0x1c936c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1c9370:
    if (ctx->pc == 0x1C9370u) {
        ctx->pc = 0x1C9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C936Cu;
        // 0x1c9370: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9374u;
        goto label_1c9374;
    }
    ctx->pc = 0x1C936Cu;
    {
        const bool branch_taken_0x1c936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C936Cu;
        // 0x1c9370: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c936c) {
            ctx->pc = 0x1C9420u;
            goto label_1c9420;
        }
    }
    ctx->pc = 0x1C9374u;
label_1c9374:
    // 0x1c9374: 0xc6210560  lwc1        $f1, 0x560($s1)
    ctx->pc = 0x1c9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9378:
    // 0x1c9378: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x1c9378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
label_1c937c:
    // 0x1c937c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1c937cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1c9380:
    // 0x1c9380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9384:
    // 0x1c9384: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c9384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1c9388:
    // 0x1c9388: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c938c:
    // 0x1c938c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c938cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c9390:
    // 0x1c9390: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c9390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c9394:
    // 0x1c9394: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c9394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c9398:
    // 0x1c9398: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1c939c:
    if (ctx->pc == 0x1C939Cu) {
        ctx->pc = 0x1C939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9398u;
        // 0x1c939c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93A0u;
        goto label_1c93a0;
    }
    ctx->pc = 0x1C9398u;
    {
        const bool branch_taken_0x1c9398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9398u;
        // 0x1c939c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9398) {
            ctx->pc = 0x1C93E0u;
            goto label_1c93e0;
        }
    }
    ctx->pc = 0x1C93A0u;
label_1c93a0:
    // 0x1c93a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c93a4:
    if (ctx->pc == 0x1C93A4u) {
        ctx->pc = 0x1C93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93A0u;
        // 0x1c93a4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93A8u;
        goto label_1c93a8;
    }
    ctx->pc = 0x1C93A0u;
    {
        const bool branch_taken_0x1c93a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93A0u;
        // 0x1c93a4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93a0) {
            ctx->pc = 0x1C93C4u;
            goto label_1c93c4;
        }
    }
    ctx->pc = 0x1C93A8u;
label_1c93a8:
    // 0x1c93a8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1c93ac:
    if (ctx->pc == 0x1C93ACu) {
        ctx->pc = 0x1C93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93A8u;
        // 0x1c93ac: 0xc6200568  lwc1        $f0, 0x568($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93B0u;
        goto label_1c93b0;
    }
    ctx->pc = 0x1C93A8u;
    {
        const bool branch_taken_0x1c93a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93a8) {
            ctx->pc = 0x1C93ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93A8u;
            // 0x1c93ac: 0xc6200568  lwc1        $f0, 0x568($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9414u;
            goto label_1c9414;
        }
    }
    ctx->pc = 0x1C93B0u;
label_1c93b0:
    // 0x1c93b0: 0x3c013e57  lui         $at, 0x3E57
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15959 << 16));
label_1c93b4:
    // 0x1c93b4: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1c93b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1c93b8:
    // 0x1c93b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c93b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c93bc:
    // 0x1c93bc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1c93c0:
    if (ctx->pc == 0x1C93C0u) {
        ctx->pc = 0x1C93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93BCu;
        // 0x1c93c0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93C4u;
        goto label_1c93c4;
    }
    ctx->pc = 0x1C93BCu;
    {
        const bool branch_taken_0x1c93bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93BCu;
        // 0x1c93c0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93bc) {
            ctx->pc = 0x1C940Cu;
            goto label_1c940c;
        }
    }
    ctx->pc = 0x1C93C4u;
label_1c93c4:
    // 0x1c93c4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1c93c8:
    if (ctx->pc == 0x1C93C8u) {
        ctx->pc = 0x1C93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93C4u;
        // 0x1c93c8: 0xc6200568  lwc1        $f0, 0x568($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93CCu;
        goto label_1c93cc;
    }
    ctx->pc = 0x1C93C4u;
    {
        const bool branch_taken_0x1c93c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93c4) {
            ctx->pc = 0x1C93C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93C4u;
            // 0x1c93c8: 0xc6200568  lwc1        $f0, 0x568($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9414u;
            goto label_1c9414;
        }
    }
    ctx->pc = 0x1C93CCu;
label_1c93cc:
    // 0x1c93cc: 0x3c013e57  lui         $at, 0x3E57
    ctx->pc = 0x1c93ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15959 << 16));
label_1c93d0:
    // 0x1c93d0: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1c93d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1c93d4:
    // 0x1c93d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c93d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c93d8:
    // 0x1c93d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c93dc:
    if (ctx->pc == 0x1C93DCu) {
        ctx->pc = 0x1C93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93D8u;
        // 0x1c93dc: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93E0u;
        goto label_1c93e0;
    }
    ctx->pc = 0x1C93D8u;
    {
        const bool branch_taken_0x1c93d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93D8u;
        // 0x1c93dc: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93d8) {
            ctx->pc = 0x1C940Cu;
            goto label_1c940c;
        }
    }
    ctx->pc = 0x1C93E0u;
label_1c93e0:
    // 0x1c93e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c93e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1c93e4:
    // 0x1c93e4: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1c93e8:
    // 0x1c93e8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c93e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1c93ec:
    // 0x1c93ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c93ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c93f0:
    // 0x1c93f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1c93f4:
    if (ctx->pc == 0x1C93F4u) {
        ctx->pc = 0x1C93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93F0u;
        // 0x1c93f4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93F8u;
        goto label_1c93f8;
    }
    ctx->pc = 0x1C93F0u;
    {
        const bool branch_taken_0x1c93f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93f0) {
            ctx->pc = 0x1C93F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93F0u;
            // 0x1c93f4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C940Cu;
            goto label_1c940c;
        }
    }
    ctx->pc = 0x1C93F8u;
label_1c93f8:
    // 0x1c93f8: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1c93f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1c93fc:
    // 0x1c93fc: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1c93fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1c9400:
    // 0x1c9400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9404:
    // 0x1c9404: 0x0  nop
    ctx->pc = 0x1c9404u;
    // NOP
label_1c9408:
    // 0x1c9408: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c940c:
    // 0x1c940c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c940cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c9410:
    // 0x1c9410: 0xc6200568  lwc1        $f0, 0x568($s1)
    ctx->pc = 0x1c9410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9414:
    // 0x1c9414: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c9414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c9418:
    // 0x1c9418: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c941c:
    if (ctx->pc == 0x1C941Cu) {
        ctx->pc = 0x1C941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9418u;
        // 0x1c941c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9420u;
        goto label_1c9420;
    }
    ctx->pc = 0x1C9418u;
    {
        const bool branch_taken_0x1c9418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9418u;
        // 0x1c941c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9418) {
            ctx->pc = 0x1C9428u;
            goto label_1c9428;
        }
    }
    ctx->pc = 0x1C9420u;
label_1c9420:
    // 0x1c9420: 0x7a220560  lq          $v0, 0x560($s1)
    ctx->pc = 0x1c9420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1376)));
label_1c9424:
    // 0x1c9424: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c9424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1c9428:
    // 0x1c9428: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c942c:
    // 0x1c942c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9430:
    // 0x1c9430: 0xc06e4ea  jal         func_1B93A8
label_1c9434:
    if (ctx->pc == 0x1C9434u) {
        ctx->pc = 0x1C9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9430u;
        // 0x1c9434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9438u;
        goto label_1c9438;
    }
    ctx->pc = 0x1C9430u;
    SET_GPR_U32(ctx, 31, 0x1C9438u);
    ctx->pc = 0x1C9434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9430u;
    // 0x1c9434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1C9430u, 0x1C9438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9438u;
label_1c9438:
    // 0x1c9438: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c9438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c943c:
    // 0x1c943c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c9440:
    // 0x1c9440: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c9440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c9444:
    // 0x1c9444: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c9448:
    // 0x1c9448: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c9448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c944c:
    // 0x1c944c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c944cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9450:
    // 0x1c9450: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9454:
    // 0x1c9454: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1c9454u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1c9458:
    // 0x1c9458: 0xc443ea58  lwc1        $f3, -0x15A8($v0)
    ctx->pc = 0x1c9458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c945c:
    // 0x1c945c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1c945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9460:
    // 0x1c9460: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c9464:
    // 0x1c9464: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c9464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c9468:
    // 0x1c9468: 0xe6220578  swc1        $f2, 0x578($s1)
    ctx->pc = 0x1c9468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
label_1c946c:
    // 0x1c946c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c946cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1c9470:
    // 0x1c9470: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c9470u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9474:
    // 0x1c9474: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c9474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c9478:
    // 0x1c9478: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1c9478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1c947c:
    // 0x1c947c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1c9480:
    // 0x1c9480: 0x40f809  jalr        $v0
label_1c9484:
    if (ctx->pc == 0x1C9484u) {
        ctx->pc = 0x1C9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9480u;
        // 0x1c9484: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9488u;
        goto label_1c9488;
    }
    ctx->pc = 0x1C9480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9488u);
        ctx->pc = 0x1C9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9480u;
        // 0x1c9484: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9480u, 0x1C9488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9488u;
label_1c9488:
    // 0x1c9488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c948c:
    // 0x1c948c: 0xc079cc0  jal         func_1E7300
label_1c9490:
    if (ctx->pc == 0x1C9490u) {
        ctx->pc = 0x1C9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C948Cu;
        // 0x1c9490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9494u;
        goto label_1c9494;
    }
    ctx->pc = 0x1C948Cu;
    SET_GPR_U32(ctx, 31, 0x1C9494u);
    ctx->pc = 0x1C9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C948Cu;
    // 0x1c9490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1C948Cu, 0x1C9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9494u;
label_1c9494:
    // 0x1c9494: 0xc079d1a  jal         func_1E7468
label_1c9498:
    if (ctx->pc == 0x1C9498u) {
        ctx->pc = 0x1C9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9494u;
        // 0x1c9498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C949Cu;
        goto label_1c949c;
    }
    ctx->pc = 0x1C9494u;
    SET_GPR_U32(ctx, 31, 0x1C949Cu);
    ctx->pc = 0x1C9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9494u;
    // 0x1c9498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7468u, 0x1C9494u, 0x1C949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C949Cu;
label_1c949c:
    // 0x1c949c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c94a0:
    // 0x1c94a0: 0xae22057c  sw          $v0, 0x57C($s1)
    ctx->pc = 0x1c94a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1404), GPR_U32(ctx, 2));
label_1c94a4:
    // 0x1c94a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1c94a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c94a8:
    // 0x1c94a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c94a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c94ac:
    // 0x1c94ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1c94acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c94b0:
    // 0x1c94b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c94b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c94b4:
    // 0x1c94b4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1c94b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c94b8:
    // 0x1c94b8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1c94b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c94bc:
    // 0x1c94bc: 0x3e00008  jr          $ra
label_1c94c0:
    if (ctx->pc == 0x1C94C0u) {
        ctx->pc = 0x1C94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94BCu;
        // 0x1c94c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94C4u;
        goto label_1c94c4;
    }
    ctx->pc = 0x1C94BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94BCu;
        // 0x1c94c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C94BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C94C4u;
label_1c94c4:
    // 0x1c94c4: 0x0  nop
    ctx->pc = 0x1c94c4u;
    // NOP
    ctx->pc = 0x1c94c8u;
}
