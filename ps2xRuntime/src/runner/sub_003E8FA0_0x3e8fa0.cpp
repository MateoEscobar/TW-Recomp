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

// Function: sub_003E8FA0
// Address: 0x3e8fa0 - 0x3e92e0
void sub_003E8FA0_0x3e8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8FA0_0x3e8fa0");
#endif

    switch (ctx->pc) {
        case 0x3e8fa0u: goto label_3e8fa0;
        case 0x3e8fa4u: goto label_3e8fa4;
        case 0x3e8fa8u: goto label_3e8fa8;
        case 0x3e8facu: goto label_3e8fac;
        case 0x3e8fb0u: goto label_3e8fb0;
        case 0x3e8fb4u: goto label_3e8fb4;
        case 0x3e8fb8u: goto label_3e8fb8;
        case 0x3e8fbcu: goto label_3e8fbc;
        case 0x3e8fc0u: goto label_3e8fc0;
        case 0x3e8fc4u: goto label_3e8fc4;
        case 0x3e8fc8u: goto label_3e8fc8;
        case 0x3e8fccu: goto label_3e8fcc;
        case 0x3e8fd0u: goto label_3e8fd0;
        case 0x3e8fd4u: goto label_3e8fd4;
        case 0x3e8fd8u: goto label_3e8fd8;
        case 0x3e8fdcu: goto label_3e8fdc;
        case 0x3e8fe0u: goto label_3e8fe0;
        case 0x3e8fe4u: goto label_3e8fe4;
        case 0x3e8fe8u: goto label_3e8fe8;
        case 0x3e8fecu: goto label_3e8fec;
        case 0x3e8ff0u: goto label_3e8ff0;
        case 0x3e8ff4u: goto label_3e8ff4;
        case 0x3e8ff8u: goto label_3e8ff8;
        case 0x3e8ffcu: goto label_3e8ffc;
        case 0x3e9000u: goto label_3e9000;
        case 0x3e9004u: goto label_3e9004;
        case 0x3e9008u: goto label_3e9008;
        case 0x3e900cu: goto label_3e900c;
        case 0x3e9010u: goto label_3e9010;
        case 0x3e9014u: goto label_3e9014;
        case 0x3e9018u: goto label_3e9018;
        case 0x3e901cu: goto label_3e901c;
        case 0x3e9020u: goto label_3e9020;
        case 0x3e9024u: goto label_3e9024;
        case 0x3e9028u: goto label_3e9028;
        case 0x3e902cu: goto label_3e902c;
        case 0x3e9030u: goto label_3e9030;
        case 0x3e9034u: goto label_3e9034;
        case 0x3e9038u: goto label_3e9038;
        case 0x3e903cu: goto label_3e903c;
        case 0x3e9040u: goto label_3e9040;
        case 0x3e9044u: goto label_3e9044;
        case 0x3e9048u: goto label_3e9048;
        case 0x3e904cu: goto label_3e904c;
        case 0x3e9050u: goto label_3e9050;
        case 0x3e9054u: goto label_3e9054;
        case 0x3e9058u: goto label_3e9058;
        case 0x3e905cu: goto label_3e905c;
        case 0x3e9060u: goto label_3e9060;
        case 0x3e9064u: goto label_3e9064;
        case 0x3e9068u: goto label_3e9068;
        case 0x3e906cu: goto label_3e906c;
        case 0x3e9070u: goto label_3e9070;
        case 0x3e9074u: goto label_3e9074;
        case 0x3e9078u: goto label_3e9078;
        case 0x3e907cu: goto label_3e907c;
        case 0x3e9080u: goto label_3e9080;
        case 0x3e9084u: goto label_3e9084;
        case 0x3e9088u: goto label_3e9088;
        case 0x3e908cu: goto label_3e908c;
        case 0x3e9090u: goto label_3e9090;
        case 0x3e9094u: goto label_3e9094;
        case 0x3e9098u: goto label_3e9098;
        case 0x3e909cu: goto label_3e909c;
        case 0x3e90a0u: goto label_3e90a0;
        case 0x3e90a4u: goto label_3e90a4;
        case 0x3e90a8u: goto label_3e90a8;
        case 0x3e90acu: goto label_3e90ac;
        case 0x3e90b0u: goto label_3e90b0;
        case 0x3e90b4u: goto label_3e90b4;
        case 0x3e90b8u: goto label_3e90b8;
        case 0x3e90bcu: goto label_3e90bc;
        case 0x3e90c0u: goto label_3e90c0;
        case 0x3e90c4u: goto label_3e90c4;
        case 0x3e90c8u: goto label_3e90c8;
        case 0x3e90ccu: goto label_3e90cc;
        case 0x3e90d0u: goto label_3e90d0;
        case 0x3e90d4u: goto label_3e90d4;
        case 0x3e90d8u: goto label_3e90d8;
        case 0x3e90dcu: goto label_3e90dc;
        case 0x3e90e0u: goto label_3e90e0;
        case 0x3e90e4u: goto label_3e90e4;
        case 0x3e90e8u: goto label_3e90e8;
        case 0x3e90ecu: goto label_3e90ec;
        case 0x3e90f0u: goto label_3e90f0;
        case 0x3e90f4u: goto label_3e90f4;
        case 0x3e90f8u: goto label_3e90f8;
        case 0x3e90fcu: goto label_3e90fc;
        case 0x3e9100u: goto label_3e9100;
        case 0x3e9104u: goto label_3e9104;
        case 0x3e9108u: goto label_3e9108;
        case 0x3e910cu: goto label_3e910c;
        case 0x3e9110u: goto label_3e9110;
        case 0x3e9114u: goto label_3e9114;
        case 0x3e9118u: goto label_3e9118;
        case 0x3e911cu: goto label_3e911c;
        case 0x3e9120u: goto label_3e9120;
        case 0x3e9124u: goto label_3e9124;
        case 0x3e9128u: goto label_3e9128;
        case 0x3e912cu: goto label_3e912c;
        case 0x3e9130u: goto label_3e9130;
        case 0x3e9134u: goto label_3e9134;
        case 0x3e9138u: goto label_3e9138;
        case 0x3e913cu: goto label_3e913c;
        case 0x3e9140u: goto label_3e9140;
        case 0x3e9144u: goto label_3e9144;
        case 0x3e9148u: goto label_3e9148;
        case 0x3e914cu: goto label_3e914c;
        case 0x3e9150u: goto label_3e9150;
        case 0x3e9154u: goto label_3e9154;
        case 0x3e9158u: goto label_3e9158;
        case 0x3e915cu: goto label_3e915c;
        case 0x3e9160u: goto label_3e9160;
        case 0x3e9164u: goto label_3e9164;
        case 0x3e9168u: goto label_3e9168;
        case 0x3e916cu: goto label_3e916c;
        case 0x3e9170u: goto label_3e9170;
        case 0x3e9174u: goto label_3e9174;
        case 0x3e9178u: goto label_3e9178;
        case 0x3e917cu: goto label_3e917c;
        case 0x3e9180u: goto label_3e9180;
        case 0x3e9184u: goto label_3e9184;
        case 0x3e9188u: goto label_3e9188;
        case 0x3e918cu: goto label_3e918c;
        case 0x3e9190u: goto label_3e9190;
        case 0x3e9194u: goto label_3e9194;
        case 0x3e9198u: goto label_3e9198;
        case 0x3e919cu: goto label_3e919c;
        case 0x3e91a0u: goto label_3e91a0;
        case 0x3e91a4u: goto label_3e91a4;
        case 0x3e91a8u: goto label_3e91a8;
        case 0x3e91acu: goto label_3e91ac;
        case 0x3e91b0u: goto label_3e91b0;
        case 0x3e91b4u: goto label_3e91b4;
        case 0x3e91b8u: goto label_3e91b8;
        case 0x3e91bcu: goto label_3e91bc;
        case 0x3e91c0u: goto label_3e91c0;
        case 0x3e91c4u: goto label_3e91c4;
        case 0x3e91c8u: goto label_3e91c8;
        case 0x3e91ccu: goto label_3e91cc;
        case 0x3e91d0u: goto label_3e91d0;
        case 0x3e91d4u: goto label_3e91d4;
        case 0x3e91d8u: goto label_3e91d8;
        case 0x3e91dcu: goto label_3e91dc;
        case 0x3e91e0u: goto label_3e91e0;
        case 0x3e91e4u: goto label_3e91e4;
        case 0x3e91e8u: goto label_3e91e8;
        case 0x3e91ecu: goto label_3e91ec;
        case 0x3e91f0u: goto label_3e91f0;
        case 0x3e91f4u: goto label_3e91f4;
        case 0x3e91f8u: goto label_3e91f8;
        case 0x3e91fcu: goto label_3e91fc;
        case 0x3e9200u: goto label_3e9200;
        case 0x3e9204u: goto label_3e9204;
        case 0x3e9208u: goto label_3e9208;
        case 0x3e920cu: goto label_3e920c;
        case 0x3e9210u: goto label_3e9210;
        case 0x3e9214u: goto label_3e9214;
        case 0x3e9218u: goto label_3e9218;
        case 0x3e921cu: goto label_3e921c;
        case 0x3e9220u: goto label_3e9220;
        case 0x3e9224u: goto label_3e9224;
        case 0x3e9228u: goto label_3e9228;
        case 0x3e922cu: goto label_3e922c;
        case 0x3e9230u: goto label_3e9230;
        case 0x3e9234u: goto label_3e9234;
        case 0x3e9238u: goto label_3e9238;
        case 0x3e923cu: goto label_3e923c;
        case 0x3e9240u: goto label_3e9240;
        case 0x3e9244u: goto label_3e9244;
        case 0x3e9248u: goto label_3e9248;
        case 0x3e924cu: goto label_3e924c;
        case 0x3e9250u: goto label_3e9250;
        case 0x3e9254u: goto label_3e9254;
        case 0x3e9258u: goto label_3e9258;
        case 0x3e925cu: goto label_3e925c;
        case 0x3e9260u: goto label_3e9260;
        case 0x3e9264u: goto label_3e9264;
        case 0x3e9268u: goto label_3e9268;
        case 0x3e926cu: goto label_3e926c;
        case 0x3e9270u: goto label_3e9270;
        case 0x3e9274u: goto label_3e9274;
        case 0x3e9278u: goto label_3e9278;
        case 0x3e927cu: goto label_3e927c;
        case 0x3e9280u: goto label_3e9280;
        case 0x3e9284u: goto label_3e9284;
        case 0x3e9288u: goto label_3e9288;
        case 0x3e928cu: goto label_3e928c;
        case 0x3e9290u: goto label_3e9290;
        case 0x3e9294u: goto label_3e9294;
        case 0x3e9298u: goto label_3e9298;
        case 0x3e929cu: goto label_3e929c;
        case 0x3e92a0u: goto label_3e92a0;
        case 0x3e92a4u: goto label_3e92a4;
        case 0x3e92a8u: goto label_3e92a8;
        case 0x3e92acu: goto label_3e92ac;
        case 0x3e92b0u: goto label_3e92b0;
        case 0x3e92b4u: goto label_3e92b4;
        case 0x3e92b8u: goto label_3e92b8;
        case 0x3e92bcu: goto label_3e92bc;
        case 0x3e92c0u: goto label_3e92c0;
        case 0x3e92c4u: goto label_3e92c4;
        case 0x3e92c8u: goto label_3e92c8;
        case 0x3e92ccu: goto label_3e92cc;
        case 0x3e92d0u: goto label_3e92d0;
        case 0x3e92d4u: goto label_3e92d4;
        case 0x3e92d8u: goto label_3e92d8;
        case 0x3e92dcu: goto label_3e92dc;
        default: break;
    }

    ctx->pc = 0x3e8fa0u;

label_3e8fa0:
    // 0x3e8fa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3e8fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3e8fa4:
    // 0x3e8fa4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3e8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3e8fa8:
    // 0x3e8fa8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3e8fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3e8fac:
    // 0x3e8fac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e8facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8fb0:
    // 0x3e8fb0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3e8fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3e8fb4:
    // 0x3e8fb4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3e8fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3e8fb8:
    // 0x3e8fb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e8fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8fbc:
    // 0x3e8fbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e8fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e8fc0:
    // 0x3e8fc0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3e8fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3e8fc4:
    // 0x3e8fc4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3e8fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3e8fc8:
    // 0x3e8fc8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3e8fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3e8fcc:
    // 0x3e8fcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e8fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e8fd0:
    // 0x3e8fd0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8fd4:
    // 0x3e8fd4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8fd8:
    // 0x3e8fd8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8fdc:
    // 0x3e8fdc: 0x40f809  jalr        $v0
label_3e8fe0:
    if (ctx->pc == 0x3E8FE0u) {
        ctx->pc = 0x3E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FDCu;
        // 0x3e8fe0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8FE4u;
        goto label_3e8fe4;
    }
    ctx->pc = 0x3E8FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8FE4u);
        ctx->pc = 0x3E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FDCu;
        // 0x3e8fe0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8FDCu, 0x3E8FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8FE4u;
label_3e8fe4:
    // 0x3e8fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8fe8:
    // 0x3e8fe8: 0xc0ea146  jal         func_3A8518
label_3e8fec:
    if (ctx->pc == 0x3E8FECu) {
        ctx->pc = 0x3E8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FE8u;
        // 0x3e8fec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8FF0u;
        goto label_3e8ff0;
    }
    ctx->pc = 0x3E8FE8u;
    SET_GPR_U32(ctx, 31, 0x3E8FF0u);
    ctx->pc = 0x3E8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8FE8u;
    // 0x3e8fec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E8FE8u, 0x3E8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8FF0u;
label_3e8ff0:
    // 0x3e8ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8ff4:
    // 0x3e8ff4: 0xc0ea14c  jal         func_3A8530
label_3e8ff8:
    if (ctx->pc == 0x3E8FF8u) {
        ctx->pc = 0x3E8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FF4u;
        // 0x3e8ff8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8FFCu;
        goto label_3e8ffc;
    }
    ctx->pc = 0x3E8FF4u;
    SET_GPR_U32(ctx, 31, 0x3E8FFCu);
    ctx->pc = 0x3E8FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8FF4u;
    // 0x3e8ff8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E8FF4u, 0x3E8FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8FFCu;
label_3e8ffc:
    // 0x3e8ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e8ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9000:
    // 0x3e9000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e9000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9004:
    // 0x3e9004: 0xc0e9132  jal         func_3A44C8
label_3e9008:
    if (ctx->pc == 0x3E9008u) {
        ctx->pc = 0x3E9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9004u;
        // 0x3e9008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E900Cu;
        goto label_3e900c;
    }
    ctx->pc = 0x3E9004u;
    SET_GPR_U32(ctx, 31, 0x3E900Cu);
    ctx->pc = 0x3E9008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9004u;
    // 0x3e9008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3E9004u, 0x3E900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E900Cu;
label_3e900c:
    // 0x3e900c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e900cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9010:
    // 0x3e9010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e9014:
    // 0x3e9014: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x3e9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_3e9018:
    // 0x3e9018: 0xc0e896e  jal         func_3A25B8
label_3e901c:
    if (ctx->pc == 0x3E901Cu) {
        ctx->pc = 0x3E901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9018u;
        // 0x3e901c: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9020u;
        goto label_3e9020;
    }
    ctx->pc = 0x3E9018u;
    SET_GPR_U32(ctx, 31, 0x3E9020u);
    ctx->pc = 0x3E901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9018u;
    // 0x3e901c: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3E9018u, 0x3E9020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9020u;
label_3e9020:
    // 0x3e9020: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e9020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9024:
    // 0x3e9024: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e9024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9028:
    // 0x3e9028: 0xc0e8604  jal         func_3A1810
label_3e902c:
    if (ctx->pc == 0x3E902Cu) {
        ctx->pc = 0x3E902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9028u;
        // 0x3e902c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9030u;
        goto label_3e9030;
    }
    ctx->pc = 0x3E9028u;
    SET_GPR_U32(ctx, 31, 0x3E9030u);
    ctx->pc = 0x3E902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9028u;
    // 0x3e902c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3E9028u, 0x3E9030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9030u;
label_3e9030:
    // 0x3e9030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e9030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9034:
    // 0x3e9034: 0xc0e858c  jal         func_3A1630
label_3e9038:
    if (ctx->pc == 0x3E9038u) {
        ctx->pc = 0x3E9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9034u;
        // 0x3e9038: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E903Cu;
        goto label_3e903c;
    }
    ctx->pc = 0x3E9034u;
    SET_GPR_U32(ctx, 31, 0x3E903Cu);
    ctx->pc = 0x3E9038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9034u;
    // 0x3e9038: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E9034u, 0x3E903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E903Cu;
label_3e903c:
    // 0x3e903c: 0x3c02464a  lui         $v0, 0x464A
    ctx->pc = 0x3e903cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17994 << 16));
label_3e9040:
    // 0x3e9040: 0x3442c521  ori         $v0, $v0, 0xC521
    ctx->pc = 0x3e9040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50465);
label_3e9044:
    // 0x3e9044: 0x1682002b  bne         $s4, $v0, . + 4 + (0x2B << 2)
label_3e9048:
    if (ctx->pc == 0x3E9048u) {
        ctx->pc = 0x3E9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9044u;
        // 0x3e9048: 0xae7400c4  sw          $s4, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E904Cu;
        goto label_3e904c;
    }
    ctx->pc = 0x3E9044u;
    {
        const bool branch_taken_0x3e9044 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9044u;
        // 0x3e9048: 0xae7400c4  sw          $s4, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9044) {
            ctx->pc = 0x3E90F4u;
            goto label_3e90f4;
        }
    }
    ctx->pc = 0x3E904Cu;
label_3e904c:
    // 0x3e904c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e9050:
    // 0x3e9050: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e9050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9054:
    // 0x3e9054: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3e9054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3e9058:
    // 0x3e9058: 0xc0e8e5e  jal         func_3A3978
label_3e905c:
    if (ctx->pc == 0x3E905Cu) {
        ctx->pc = 0x3E905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9058u;
        // 0x3e905c: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9060u;
        goto label_3e9060;
    }
    ctx->pc = 0x3E9058u;
    SET_GPR_U32(ctx, 31, 0x3E9060u);
    ctx->pc = 0x3E905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9058u;
    // 0x3e905c: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3E9058u, 0x3E9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9060u;
label_3e9060:
    // 0x3e9060: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e9060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e9064:
    // 0x3e9064: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e9064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9068:
    // 0x3e9068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e9068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e906c:
    // 0x3e906c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3e906cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3e9070:
    // 0x3e9070: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e9070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9074:
    // 0x3e9074: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3e9074u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3e9078:
    // 0x3e9078: 0xc0e8e5e  jal         func_3A3978
label_3e907c:
    if (ctx->pc == 0x3E907Cu) {
        ctx->pc = 0x3E907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9078u;
        // 0x3e907c: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9080u;
        goto label_3e9080;
    }
    ctx->pc = 0x3E9078u;
    SET_GPR_U32(ctx, 31, 0x3E9080u);
    ctx->pc = 0x3E907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9078u;
    // 0x3e907c: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3E9078u, 0x3E9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9080u;
label_3e9080:
    // 0x3e9080: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e9080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9084:
    // 0x3e9084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e9084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9088:
    // 0x3e9088: 0xc0e8616  jal         func_3A1858
label_3e908c:
    if (ctx->pc == 0x3E908Cu) {
        ctx->pc = 0x3E908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9088u;
        // 0x3e908c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9090u;
        goto label_3e9090;
    }
    ctx->pc = 0x3E9088u;
    SET_GPR_U32(ctx, 31, 0x3E9090u);
    ctx->pc = 0x3E908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9088u;
    // 0x3e908c: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E9088u, 0x3E9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9090u;
label_3e9090:
    // 0x3e9090: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e9090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9094:
    // 0x3e9094: 0x260516c0  addiu       $a1, $s0, 0x16C0
    ctx->pc = 0x3e9094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3e9098:
    // 0x3e9098: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e9098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e909c:
    // 0x3e909c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e90a0:
    // 0x3e90a0: 0x60f809  jalr        $v1
label_3e90a4:
    if (ctx->pc == 0x3E90A4u) {
        ctx->pc = 0x3E90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90A0u;
        // 0x3e90a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E90A8u;
        goto label_3e90a8;
    }
    ctx->pc = 0x3E90A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E90A8u);
        ctx->pc = 0x3E90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90A0u;
        // 0x3e90a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E90A0u, 0x3E90A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E90A8u;
label_3e90a8:
    // 0x3e90a8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x3e90a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e90ac:
    // 0x3e90ac: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3e90acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3e90b0:
    // 0x3e90b0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3e90b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_3e90b4:
    // 0x3e90b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e90b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e90b8:
    // 0x3e90b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e90b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e90bc:
    // 0x3e90bc: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x3e90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_3e90c0:
    // 0x3e90c0: 0x86300078  lh          $s0, 0x78($s1)
    ctx->pc = 0x3e90c0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3e90c4:
    // 0x3e90c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e90c8:
    // 0x3e90c8: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x3e90c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e90cc:
    // 0x3e90cc: 0xc136b24  jal         func_4DAC90
label_3e90d0:
    if (ctx->pc == 0x3E90D0u) {
        ctx->pc = 0x3E90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90CCu;
        // 0x3e90d0: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E90D4u;
        goto label_3e90d4;
    }
    ctx->pc = 0x3E90CCu;
    SET_GPR_U32(ctx, 31, 0x3E90D4u);
    ctx->pc = 0x3E90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E90CCu;
    // 0x3e90d0: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E90CCu, 0x3E90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E90D4u;
label_3e90d4:
    // 0x3e90d4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e90d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e90d8:
    // 0x3e90d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e90d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e90dc:
    // 0x3e90dc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3e90dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3e90e0:
    // 0x3e90e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e90e4:
    // 0x3e90e4: 0x40f809  jalr        $v0
label_3e90e8:
    if (ctx->pc == 0x3E90E8u) {
        ctx->pc = 0x3E90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90E4u;
        // 0x3e90e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E90ECu;
        goto label_3e90ec;
    }
    ctx->pc = 0x3E90E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E90ECu);
        ctx->pc = 0x3E90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90E4u;
        // 0x3e90e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E90E4u, 0x3E90ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E90ECu;
label_3e90ec:
    // 0x3e90ec: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3e90f0:
    if (ctx->pc == 0x3E90F0u) {
        ctx->pc = 0x3E90F4u;
        goto label_3e90f4;
    }
    ctx->pc = 0x3E90ECu;
    {
        const bool branch_taken_0x3e90ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e90ec) {
            ctx->pc = 0x3E922Cu;
            goto label_3e922c;
        }
    }
    ctx->pc = 0x3E90F4u;
label_3e90f4:
    // 0x3e90f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e90f8:
    // 0x3e90f8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3e90f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e90fc:
    // 0x3e90fc: 0x24421700  addiu       $v0, $v0, 0x1700
    ctx->pc = 0x3e90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5888));
label_3e9100:
    // 0x3e9100: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3e9100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3e9104:
    // 0x3e9104: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e9104u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9108:
    // 0x3e9108: 0x248516c0  addiu       $a1, $a0, 0x16C0
    ctx->pc = 0x3e9108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3e910c:
    // 0x3e910c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3e910cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9110:
    // 0x3e9110: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3e9110u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3e9114:
    // 0x3e9114: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x3e9114u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
label_3e9118:
    // 0x3e9118: 0x26561740  addiu       $s6, $s2, 0x1740
    ctx->pc = 0x3e9118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
label_3e911c:
    // 0x3e911c: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3e911cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3e9120:
    // 0x3e9120: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3e9124:
    // 0x3e9124: 0x40f809  jalr        $v0
label_3e9128:
    if (ctx->pc == 0x3E9128u) {
        ctx->pc = 0x3E9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9124u;
        // 0x3e9128: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E912Cu;
        goto label_3e912c;
    }
    ctx->pc = 0x3E9124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E912Cu);
        ctx->pc = 0x3E9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9124u;
        // 0x3e9128: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9124u, 0x3E912Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E912Cu;
label_3e912c:
    // 0x3e912c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x3e912cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9130:
    // 0x3e9130: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e9130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e9134:
    // 0x3e9134: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3e9134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3e9138:
    // 0x3e9138: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e9138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e913c:
    // 0x3e913c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e913cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e9140:
    // 0x3e9140: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3e9140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e9144:
    // 0x3e9144: 0x86300078  lh          $s0, 0x78($s1)
    ctx->pc = 0x3e9144u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3e9148:
    // 0x3e9148: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x3e9148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e914c:
    // 0x3e914c: 0xc136b24  jal         func_4DAC90
label_3e9150:
    if (ctx->pc == 0x3E9150u) {
        ctx->pc = 0x3E9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E914Cu;
        // 0x3e9150: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9154u;
        goto label_3e9154;
    }
    ctx->pc = 0x3E914Cu;
    SET_GPR_U32(ctx, 31, 0x3E9154u);
    ctx->pc = 0x3E9150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E914Cu;
    // 0x3e9150: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E914Cu, 0x3E9154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9154u;
label_3e9154:
    // 0x3e9154: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e9154u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9158:
    // 0x3e9158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e915c:
    // 0x3e915c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3e915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3e9160:
    // 0x3e9160: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9164:
    // 0x3e9164: 0x40f809  jalr        $v0
label_3e9168:
    if (ctx->pc == 0x3E9168u) {
        ctx->pc = 0x3E9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9164u;
        // 0x3e9168: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E916Cu;
        goto label_3e916c;
    }
    ctx->pc = 0x3E9164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E916Cu);
        ctx->pc = 0x3E9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9164u;
        // 0x3e9168: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9164u, 0x3E916Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E916Cu;
label_3e916c:
    // 0x3e916c: 0x3c0230f0  lui         $v0, 0x30F0
    ctx->pc = 0x3e916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12528 << 16));
label_3e9170:
    // 0x3e9170: 0x34429efb  ori         $v0, $v0, 0x9EFB
    ctx->pc = 0x3e9170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40699);
label_3e9174:
    // 0x3e9174: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_3e9178:
    if (ctx->pc == 0x3E9178u) {
        ctx->pc = 0x3E9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9174u;
        // 0x3e9178: 0x3c0251d2  lui         $v0, 0x51D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20946 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E917Cu;
        goto label_3e917c;
    }
    ctx->pc = 0x3E9174u;
    {
        const bool branch_taken_0x3e9174 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9174u;
        // 0x3e9178: 0x3c0251d2  lui         $v0, 0x51D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20946 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9174) {
            ctx->pc = 0x3E9198u;
            goto label_3e9198;
        }
    }
    ctx->pc = 0x3E917Cu;
label_3e917c:
    // 0x3e917c: 0x34427ab6  ori         $v0, $v0, 0x7AB6
    ctx->pc = 0x3e917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31414);
label_3e9180:
    // 0x3e9180: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
label_3e9184:
    if (ctx->pc == 0x3E9184u) {
        ctx->pc = 0x3E9188u;
        goto label_3e9188;
    }
    ctx->pc = 0x3E9180u;
    {
        const bool branch_taken_0x3e9180 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e9180) {
            ctx->pc = 0x3E9198u;
            goto label_3e9198;
        }
    }
    ctx->pc = 0x3E9188u;
label_3e9188:
    // 0x3e9188: 0x3c02d939  lui         $v0, 0xD939
    ctx->pc = 0x3e9188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55609 << 16));
label_3e918c:
    // 0x3e918c: 0x3442c21d  ori         $v0, $v0, 0xC21D
    ctx->pc = 0x3e918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49693);
label_3e9190:
    // 0x3e9190: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
label_3e9194:
    if (ctx->pc == 0x3E9194u) {
        ctx->pc = 0x3E9198u;
        goto label_3e9198;
    }
    ctx->pc = 0x3E9190u;
    {
        const bool branch_taken_0x3e9190 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9190) {
            ctx->pc = 0x3E91CCu;
            goto label_3e91cc;
        }
    }
    ctx->pc = 0x3E9198u;
label_3e9198:
    // 0x3e9198: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3e9198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3e919c:
    // 0x3e919c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e919cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e91a0:
    // 0x3e91a0: 0x26451740  addiu       $a1, $s2, 0x1740
    ctx->pc = 0x3e91a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
label_3e91a4:
    // 0x3e91a4: 0xc136b24  jal         func_4DAC90
label_3e91a8:
    if (ctx->pc == 0x3E91A8u) {
        ctx->pc = 0x3E91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91A4u;
        // 0x3e91a8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E91ACu;
        goto label_3e91ac;
    }
    ctx->pc = 0x3E91A4u;
    SET_GPR_U32(ctx, 31, 0x3E91ACu);
    ctx->pc = 0x3E91A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E91A4u;
    // 0x3e91a8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E91A4u, 0x3E91ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E91ACu;
label_3e91ac:
    // 0x3e91ac: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e91acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e91b0:
    // 0x3e91b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e91b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e91b4:
    // 0x3e91b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e91b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e91b8:
    // 0x3e91b8: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3e91b8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3e91bc:
    // 0x3e91bc: 0xc0e858c  jal         func_3A1630
label_3e91c0:
    if (ctx->pc == 0x3E91C0u) {
        ctx->pc = 0x3E91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91BCu;
        // 0x3e91c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E91C4u;
        goto label_3e91c4;
    }
    ctx->pc = 0x3E91BCu;
    SET_GPR_U32(ctx, 31, 0x3E91C4u);
    ctx->pc = 0x3E91C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E91BCu;
    // 0x3e91c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E91BCu, 0x3E91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E91C4u;
label_3e91c4:
    // 0x3e91c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_3e91c8:
    if (ctx->pc == 0x3E91C8u) {
        ctx->pc = 0x3E91CCu;
        goto label_3e91cc;
    }
    ctx->pc = 0x3E91C4u;
    {
        const bool branch_taken_0x3e91c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e91c4) {
            ctx->pc = 0x3E922Cu;
            goto label_3e922c;
        }
    }
    ctx->pc = 0x3E91CCu;
label_3e91cc:
    // 0x3e91cc: 0x3c02e3f9  lui         $v0, 0xE3F9
    ctx->pc = 0x3e91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58361 << 16));
label_3e91d0:
    // 0x3e91d0: 0x34422003  ori         $v0, $v0, 0x2003
    ctx->pc = 0x3e91d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8195);
label_3e91d4:
    // 0x3e91d4: 0x16820008  bne         $s4, $v0, . + 4 + (0x8 << 2)
label_3e91d8:
    if (ctx->pc == 0x3E91D8u) {
        ctx->pc = 0x3E91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91D4u;
        // 0x3e91d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E91DCu;
        goto label_3e91dc;
    }
    ctx->pc = 0x3E91D4u;
    {
        const bool branch_taken_0x3e91d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91D4u;
        // 0x3e91d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e91d4) {
            ctx->pc = 0x3E91F8u;
            goto label_3e91f8;
        }
    }
    ctx->pc = 0x3E91DCu;
label_3e91dc:
    // 0x3e91dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e91dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e91e0:
    // 0x3e91e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e91e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e91e4:
    // 0x3e91e4: 0xc0e8e5e  jal         func_3A3978
label_3e91e8:
    if (ctx->pc == 0x3E91E8u) {
        ctx->pc = 0x3E91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91E4u;
        // 0x3e91e8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E91ECu;
        goto label_3e91ec;
    }
    ctx->pc = 0x3E91E4u;
    SET_GPR_U32(ctx, 31, 0x3E91ECu);
    ctx->pc = 0x3E91E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E91E4u;
    // 0x3e91e8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3E91E4u, 0x3E91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E91ECu;
label_3e91ec:
    // 0x3e91ec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e91ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e91f0:
    // 0x3e91f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_3e91f4:
    if (ctx->pc == 0x3E91F4u) {
        ctx->pc = 0x3E91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91F0u;
        // 0x3e91f4: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E91F8u;
        goto label_3e91f8;
    }
    ctx->pc = 0x3E91F0u;
    {
        const bool branch_taken_0x3e91f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91F0u;
        // 0x3e91f4: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e91f0) {
            ctx->pc = 0x3E922Cu;
            goto label_3e922c;
        }
    }
    ctx->pc = 0x3E91F8u;
label_3e91f8:
    // 0x3e91f8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x3e91f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_3e91fc:
    // 0x3e91fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e91fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e9200:
    // 0x3e9200: 0xc136b24  jal         func_4DAC90
label_3e9204:
    if (ctx->pc == 0x3E9204u) {
        ctx->pc = 0x3E9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9200u;
        // 0x3e9204: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9208u;
        goto label_3e9208;
    }
    ctx->pc = 0x3E9200u;
    SET_GPR_U32(ctx, 31, 0x3E9208u);
    ctx->pc = 0x3E9204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9200u;
    // 0x3e9204: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E9200u, 0x3E9208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9208u;
label_3e9208:
    // 0x3e9208: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e9208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e920c:
    // 0x3e920c: 0x3c022a03  lui         $v0, 0x2A03
    ctx->pc = 0x3e920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10755 << 16));
label_3e9210:
    // 0x3e9210: 0x34423cab  ori         $v0, $v0, 0x3CAB
    ctx->pc = 0x3e9210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15531);
label_3e9214:
    // 0x3e9214: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3e9214u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_3e9218:
    // 0x3e9218: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_3e921c:
    if (ctx->pc == 0x3E921Cu) {
        ctx->pc = 0x3E921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9218u;
        // 0x3e921c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9220u;
        goto label_3e9220;
    }
    ctx->pc = 0x3E9218u;
    {
        const bool branch_taken_0x3e9218 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9218u;
        // 0x3e921c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9218) {
            ctx->pc = 0x3E922Cu;
            goto label_3e922c;
        }
    }
    ctx->pc = 0x3E9220u;
label_3e9220:
    // 0x3e9220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e9220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e9224:
    // 0x3e9224: 0xc0e858c  jal         func_3A1630
label_3e9228:
    if (ctx->pc == 0x3E9228u) {
        ctx->pc = 0x3E9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9224u;
        // 0x3e9228: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E922Cu;
        goto label_3e922c;
    }
    ctx->pc = 0x3E9224u;
    SET_GPR_U32(ctx, 31, 0x3E922Cu);
    ctx->pc = 0x3E9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9224u;
    // 0x3e9228: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E9224u, 0x3E922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E922Cu;
label_3e922c:
    // 0x3e922c: 0x3c028b7f  lui         $v0, 0x8B7F
    ctx->pc = 0x3e922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35711 << 16));
label_3e9230:
    // 0x3e9230: 0x3442e995  ori         $v0, $v0, 0xE995
    ctx->pc = 0x3e9230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59797);
label_3e9234:
    // 0x3e9234: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_3e9238:
    if (ctx->pc == 0x3E9238u) {
        ctx->pc = 0x3E9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9234u;
        // 0x3e9238: 0x3c027644  lui         $v0, 0x7644 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30276 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E923Cu;
        goto label_3e923c;
    }
    ctx->pc = 0x3E9234u;
    {
        const bool branch_taken_0x3e9234 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9234u;
        // 0x3e9238: 0x3c027644  lui         $v0, 0x7644 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30276 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9234) {
            ctx->pc = 0x3E926Cu;
            goto label_3e926c;
        }
    }
    ctx->pc = 0x3E923Cu;
label_3e923c:
    // 0x3e923c: 0x3442ee5d  ori         $v0, $v0, 0xEE5D
    ctx->pc = 0x3e923cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61021);
label_3e9240:
    // 0x3e9240: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
label_3e9244:
    if (ctx->pc == 0x3E9244u) {
        ctx->pc = 0x3E9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9240u;
        // 0x3e9244: 0x3c021de2  lui         $v0, 0x1DE2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7650 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9248u;
        goto label_3e9248;
    }
    ctx->pc = 0x3E9240u;
    {
        const bool branch_taken_0x3e9240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9240u;
        // 0x3e9244: 0x3c021de2  lui         $v0, 0x1DE2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7650 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9240) {
            ctx->pc = 0x3E926Cu;
            goto label_3e926c;
        }
    }
    ctx->pc = 0x3E9248u;
label_3e9248:
    // 0x3e9248: 0x3442e2ca  ori         $v0, $v0, 0xE2CA
    ctx->pc = 0x3e9248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58058);
label_3e924c:
    // 0x3e924c: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
label_3e9250:
    if (ctx->pc == 0x3E9250u) {
        ctx->pc = 0x3E9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E924Cu;
        // 0x3e9250: 0x3c021a72  lui         $v0, 0x1A72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6770 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9254u;
        goto label_3e9254;
    }
    ctx->pc = 0x3E924Cu;
    {
        const bool branch_taken_0x3e924c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E924Cu;
        // 0x3e9250: 0x3c021a72  lui         $v0, 0x1A72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6770 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e924c) {
            ctx->pc = 0x3E926Cu;
            goto label_3e926c;
        }
    }
    ctx->pc = 0x3E9254u;
label_3e9254:
    // 0x3e9254: 0x3442a32d  ori         $v0, $v0, 0xA32D
    ctx->pc = 0x3e9254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41773);
label_3e9258:
    // 0x3e9258: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_3e925c:
    if (ctx->pc == 0x3E925Cu) {
        ctx->pc = 0x3E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9258u;
        // 0x3e925c: 0x3c02687e  lui         $v0, 0x687E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26750 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9260u;
        goto label_3e9260;
    }
    ctx->pc = 0x3E9258u;
    {
        const bool branch_taken_0x3e9258 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9258u;
        // 0x3e925c: 0x3c02687e  lui         $v0, 0x687E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26750 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9258) {
            ctx->pc = 0x3E926Cu;
            goto label_3e926c;
        }
    }
    ctx->pc = 0x3E9260u;
label_3e9260:
    // 0x3e9260: 0x3442742b  ori         $v0, $v0, 0x742B
    ctx->pc = 0x3e9260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29739);
label_3e9264:
    // 0x3e9264: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
label_3e9268:
    if (ctx->pc == 0x3E9268u) {
        ctx->pc = 0x3E926Cu;
        goto label_3e926c;
    }
    ctx->pc = 0x3E9264u;
    {
        const bool branch_taken_0x3e9264 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9264) {
            ctx->pc = 0x3E9294u;
            goto label_3e9294;
        }
    }
    ctx->pc = 0x3E926Cu;
label_3e926c:
    // 0x3e926c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3e926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3e9270:
    // 0x3e9270: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3e9270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3e9274:
    // 0x3e9274: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3e9274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9278:
    // 0x3e9278: 0x26e516c0  addiu       $a1, $s7, 0x16C0
    ctx->pc = 0x3e9278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 5824));
label_3e927c:
    // 0x3e927c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e9280:
    // 0x3e9280: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3e9280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3e9284:
    // 0x3e9284: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x3e9284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_3e9288:
    // 0x3e9288: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x3e9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_3e928c:
    // 0x3e928c: 0x40f809  jalr        $v0
label_3e9290:
    if (ctx->pc == 0x3E9290u) {
        ctx->pc = 0x3E9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E928Cu;
        // 0x3e9290: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9294u;
        goto label_3e9294;
    }
    ctx->pc = 0x3E928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9294u);
        ctx->pc = 0x3E9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E928Cu;
        // 0x3e9290: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E928Cu, 0x3E9294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9294u;
label_3e9294:
    // 0x3e9294: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e9298:
    // 0x3e9298: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x3e9298u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_3e929c:
    // 0x3e929c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e92a0:
    // 0x3e92a0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3e92a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3e92a4:
    // 0x3e92a4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3e92a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3e92a8:
    // 0x3e92a8: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x3e92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_3e92ac:
    // 0x3e92ac: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x3e92acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_3e92b0:
    // 0x3e92b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3e92b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e92b4:
    // 0x3e92b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3e92b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e92b8:
    // 0x3e92b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3e92b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e92bc:
    // 0x3e92bc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3e92bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e92c0:
    // 0x3e92c0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3e92c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e92c4:
    // 0x3e92c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e92c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e92c8:
    // 0x3e92c8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3e92c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e92cc:
    // 0x3e92cc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3e92ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e92d0:
    // 0x3e92d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e92d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e92d4:
    // 0x3e92d4: 0x3e00008  jr          $ra
label_3e92d8:
    if (ctx->pc == 0x3E92D8u) {
        ctx->pc = 0x3E92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E92D4u;
        // 0x3e92d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E92DCu;
        goto label_3e92dc;
    }
    ctx->pc = 0x3E92D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E92D4u;
        // 0x3e92d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E92D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E92DCu;
label_3e92dc:
    // 0x3e92dc: 0x0  nop
    ctx->pc = 0x3e92dcu;
    // NOP
    ctx->pc = 0x3e92e0u;
}
