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

// Function: sub_00364070
// Address: 0x364070 - 0x3642f0
void sub_00364070_0x364070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364070_0x364070");
#endif

    switch (ctx->pc) {
        case 0x3640acu: goto label_3640ac;
        case 0x3640b4u: goto label_3640b4;
        case 0x3640c8u: goto label_3640c8;
        case 0x3640d0u: goto label_3640d0;
        case 0x3640e4u: goto label_3640e4;
        case 0x3640f8u: goto label_3640f8;
        case 0x364110u: goto label_364110;
        case 0x364118u: goto label_364118;
        case 0x364130u: goto label_364130;
        case 0x364148u: goto label_364148;
        case 0x364150u: goto label_364150;
        case 0x364168u: goto label_364168;
        case 0x364180u: goto label_364180;
        case 0x364188u: goto label_364188;
        case 0x3641b4u: goto label_3641b4;
        case 0x3641c0u: goto label_3641c0;
        case 0x3641d4u: goto label_3641d4;
        case 0x3641ecu: goto label_3641ec;
        case 0x364200u: goto label_364200;
        case 0x364218u: goto label_364218;
        case 0x36422cu: goto label_36422c;
        case 0x364244u: goto label_364244;
        case 0x364258u: goto label_364258;
        case 0x364270u: goto label_364270;
        case 0x364284u: goto label_364284;
        case 0x36429cu: goto label_36429c;
        case 0x3642b0u: goto label_3642b0;
        default: break;
    }

    ctx->pc = 0x364070u;

    // 0x364070: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x364070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x364074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364078: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x364078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x36407c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x36407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x364080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364084: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x364084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364088: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x364088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x36408c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x36408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x364090: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x364090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x364094: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x364094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x364098: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x364098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x36409c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x36409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3640a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3640a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3640a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3640A4u;
    SET_GPR_U32(ctx, 31, 0x3640ACu);
    ctx->pc = 0x3640A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3640A4u;
    // 0x3640a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3640A4u, 0x3640ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640ACu;
label_3640ac:
    // 0x3640ac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3640ACu;
    SET_GPR_U32(ctx, 31, 0x3640B4u);
    ctx->pc = 0x3640B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3640ACu;
    // 0x3640b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3640ACu, 0x3640B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640B4u;
label_3640b4:
    // 0x3640b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3640b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3640b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3640bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3640bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3640C0u;
    SET_GPR_U32(ctx, 31, 0x3640C8u);
    ctx->pc = 0x3640C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3640C0u;
    // 0x3640c4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3640C0u, 0x3640C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640C8u;
label_3640c8:
    // 0x3640c8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3640C8u;
    SET_GPR_U32(ctx, 31, 0x3640D0u);
    ctx->pc = 0x3640CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3640C8u;
    // 0x3640cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3640C8u, 0x3640D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640D0u;
label_3640d0:
    // 0x3640d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3640d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3640d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3640d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3640dc: 0xc102488  jal         func_409220
    ctx->pc = 0x3640DCu;
    SET_GPR_U32(ctx, 31, 0x3640E4u);
    ctx->pc = 0x3640E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3640DCu;
    // 0x3640e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3640DCu, 0x3640E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640E4u;
label_3640e4:
    // 0x3640e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3640e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640e8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3640e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3640ec: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3640ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3640f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3640f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640f4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3640f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3640f8:
    // 0x3640f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3640f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3640fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3640fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364100: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x364100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364108: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x364108u;
    SET_GPR_U32(ctx, 31, 0x364110u);
    ctx->pc = 0x36410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364108u;
    // 0x36410c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x364108u, 0x364110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364110u;
label_364110:
    // 0x364110: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364110u;
    SET_GPR_U32(ctx, 31, 0x364118u);
    ctx->pc = 0x364114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364110u;
    // 0x364114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364110u, 0x364118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364118u;
label_364118:
    // 0x364118: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x364118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36411c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36411cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x364120: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x364120u;
    {
        const bool branch_taken_0x364120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364120u;
        // 0x364124: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364120) {
            ctx->pc = 0x3640F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3640f8;
        }
    }
    ctx->pc = 0x364128u;
    // 0x364128: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36412c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x36412cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_364130:
    // 0x364130: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x364134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364138: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x364138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36413c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36413cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364140: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x364140u;
    SET_GPR_U32(ctx, 31, 0x364148u);
    ctx->pc = 0x364144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364140u;
    // 0x364144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x364140u, 0x364148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364148u;
label_364148:
    // 0x364148: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364148u;
    SET_GPR_U32(ctx, 31, 0x364150u);
    ctx->pc = 0x36414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364148u;
    // 0x36414c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364148u, 0x364150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364150u;
label_364150:
    // 0x364150: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x364150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x364154: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x364154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x364158: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x364158u;
    {
        const bool branch_taken_0x364158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364158u;
        // 0x36415c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364158) {
            ctx->pc = 0x364130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364130;
        }
    }
    ctx->pc = 0x364160u;
    // 0x364160: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364164: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x364164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_364168:
    // 0x364168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36416c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364170: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x364170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x364174: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364178: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x364178u;
    SET_GPR_U32(ctx, 31, 0x364180u);
    ctx->pc = 0x36417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364178u;
    // 0x36417c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x364178u, 0x364180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364180u;
label_364180:
    // 0x364180: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364180u;
    SET_GPR_U32(ctx, 31, 0x364188u);
    ctx->pc = 0x364184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364180u;
    // 0x364184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364180u, 0x364188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364188u;
label_364188:
    // 0x364188: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x364188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36418c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36418cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x364190: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x364190u;
    {
        const bool branch_taken_0x364190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364190u;
        // 0x364194: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364190) {
            ctx->pc = 0x364168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364168;
        }
    }
    ctx->pc = 0x364198u;
    // 0x364198: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x364198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36419c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x36419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3641a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641a4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3641a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3641a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641ac: 0xc0ba06e  jal         func_2E81B8
    ctx->pc = 0x3641ACu;
    SET_GPR_U32(ctx, 31, 0x3641B4u);
    ctx->pc = 0x3641B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641ACu;
    // 0x3641b0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81B8u, 0x3641ACu, 0x3641B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641B4u;
label_3641b4:
    // 0x3641b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3641b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641b8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3641b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3641bc: 0x0  nop
    ctx->pc = 0x3641bcu;
    // NOP
label_3641c0:
    // 0x3641c0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3641c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3641c4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3641c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3641c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3641c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3641cc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3641CCu;
    SET_GPR_U32(ctx, 31, 0x3641D4u);
    ctx->pc = 0x3641D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641CCu;
    // 0x3641d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3641CCu, 0x3641D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641D4u;
label_3641d4:
    // 0x3641d4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3641D4u;
    {
        const bool branch_taken_0x3641d4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3641D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641D4u;
        // 0x3641d8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641d4) {
            ctx->pc = 0x3641F0u;
            goto label_3641f0;
        }
    }
    ctx->pc = 0x3641DCu;
    // 0x3641dc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3641dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3641e0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3641e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3641e4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3641E4u;
    SET_GPR_U32(ctx, 31, 0x3641ECu);
    ctx->pc = 0x3641E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641E4u;
    // 0x3641e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3641E4u, 0x3641ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641ECu;
label_3641ec:
    // 0x3641ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3641ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3641f0:
    // 0x3641f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3641f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3641f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641f8: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3641F8u;
    SET_GPR_U32(ctx, 31, 0x364200u);
    ctx->pc = 0x3641FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641F8u;
    // 0x3641fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3641F8u, 0x364200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364200u;
label_364200:
    // 0x364200: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364204: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x364204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x364208: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x364208u;
    {
        const bool branch_taken_0x364208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364208u;
        // 0x36420c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364208) {
            ctx->pc = 0x3641C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3641c0;
        }
    }
    ctx->pc = 0x364210u;
    // 0x364210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364214: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x364214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_364218:
    // 0x364218: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x364218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36421c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x36421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x364220: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x364220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364224: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x364224u;
    SET_GPR_U32(ctx, 31, 0x36422Cu);
    ctx->pc = 0x364228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364224u;
    // 0x364228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x364224u, 0x36422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36422Cu;
label_36422c:
    // 0x36422c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36422Cu;
    {
        const bool branch_taken_0x36422c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x364230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36422Cu;
        // 0x364230: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36422c) {
            ctx->pc = 0x364248u;
            goto label_364248;
        }
    }
    ctx->pc = 0x364234u;
    // 0x364234: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x364234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x364238: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x364238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36423c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36423Cu;
    SET_GPR_U32(ctx, 31, 0x364244u);
    ctx->pc = 0x364240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36423Cu;
    // 0x364240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36423Cu, 0x364244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364244u;
label_364244:
    // 0x364244: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x364244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364248:
    // 0x364248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36424c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364250: 0xc102576  jal         func_4095D8
    ctx->pc = 0x364250u;
    SET_GPR_U32(ctx, 31, 0x364258u);
    ctx->pc = 0x364254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364250u;
    // 0x364254: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x364250u, 0x364258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364258u;
label_364258:
    // 0x364258: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36425c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x36425cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x364260: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x364260u;
    {
        const bool branch_taken_0x364260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364260u;
        // 0x364264: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364260) {
            ctx->pc = 0x364218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364218;
        }
    }
    ctx->pc = 0x364268u;
    // 0x364268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36426c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36426cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_364270:
    // 0x364270: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x364270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x364274: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x364274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x364278: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x364278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36427c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36427Cu;
    SET_GPR_U32(ctx, 31, 0x364284u);
    ctx->pc = 0x364280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36427Cu;
    // 0x364280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36427Cu, 0x364284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364284u;
label_364284:
    // 0x364284: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x364284u;
    {
        const bool branch_taken_0x364284 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x364288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364284u;
        // 0x364288: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364284) {
            ctx->pc = 0x3642A0u;
            goto label_3642a0;
        }
    }
    ctx->pc = 0x36428Cu;
    // 0x36428c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36428cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x364290: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x364290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x364294: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x364294u;
    SET_GPR_U32(ctx, 31, 0x36429Cu);
    ctx->pc = 0x364298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364294u;
    // 0x364298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x364294u, 0x36429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36429Cu;
label_36429c:
    // 0x36429c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36429cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3642a0:
    // 0x3642a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3642a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3642a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3642a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3642a8: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3642A8u;
    SET_GPR_U32(ctx, 31, 0x3642B0u);
    ctx->pc = 0x3642ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3642A8u;
    // 0x3642ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3642A8u, 0x3642B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3642B0u;
label_3642b0:
    // 0x3642b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3642b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3642b4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3642b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3642b8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3642B8u;
    {
        const bool branch_taken_0x3642b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3642BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642B8u;
        // 0x3642bc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3642b8) {
            ctx->pc = 0x364270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364270;
        }
    }
    ctx->pc = 0x3642C0u;
    // 0x3642c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3642c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3642c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3642c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3642c8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3642c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3642cc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3642ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3642d0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3642d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3642d4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3642d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3642d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3642d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3642dc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3642dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3642e0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3642e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3642e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3642e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3642e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3642E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3642ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642E8u;
        // 0x3642ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3642E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3642F0u;
}
