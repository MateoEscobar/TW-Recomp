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

// Function: sub_003637B8
// Address: 0x3637b8 - 0x3638b8
void sub_003637B8_0x3637b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003637B8_0x3637b8");
#endif

    switch (ctx->pc) {
        case 0x3637e8u: goto label_3637e8;
        case 0x3637f0u: goto label_3637f0;
        case 0x363804u: goto label_363804;
        case 0x36380cu: goto label_36380c;
        case 0x363818u: goto label_363818;
        case 0x363830u: goto label_363830;
        case 0x363838u: goto label_363838;
        case 0x363858u: goto label_363858;
        case 0x363860u: goto label_363860;
        case 0x363870u: goto label_363870;
        case 0x363884u: goto label_363884;
        default: break;
    }

    ctx->pc = 0x3637b8u;

    // 0x3637b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3637b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3637bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3637bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3637c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3637c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3637c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3637c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3637c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3637c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3637ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3637d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3637d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3637d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3637d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3637d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3637dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3637dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3637e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3637E0u;
    SET_GPR_U32(ctx, 31, 0x3637E8u);
    ctx->pc = 0x3637E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3637E0u;
    // 0x3637e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3637E0u, 0x3637E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3637E8u;
label_3637e8:
    // 0x3637e8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3637E8u;
    SET_GPR_U32(ctx, 31, 0x3637F0u);
    ctx->pc = 0x3637ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3637E8u;
    // 0x3637ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3637E8u, 0x3637F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3637F0u;
label_3637f0:
    // 0x3637f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3637f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3637f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3637f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3637fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3637FCu;
    SET_GPR_U32(ctx, 31, 0x363804u);
    ctx->pc = 0x363800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3637FCu;
    // 0x363800: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3637FCu, 0x363804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363804u;
label_363804:
    // 0x363804: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363804u;
    SET_GPR_U32(ctx, 31, 0x36380Cu);
    ctx->pc = 0x363808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363804u;
    // 0x363808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363804u, 0x36380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36380Cu;
label_36380c:
    // 0x36380c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36380cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363810: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363814: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x363814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_363818:
    // 0x363818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x363818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36381c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363820: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363824: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363828: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x363828u;
    SET_GPR_U32(ctx, 31, 0x363830u);
    ctx->pc = 0x36382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363828u;
    // 0x36382c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x363828u, 0x363830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363830u;
label_363830:
    // 0x363830: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x363830u;
    SET_GPR_U32(ctx, 31, 0x363838u);
    ctx->pc = 0x363834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363830u;
    // 0x363834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x363830u, 0x363838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363838u;
label_363838:
    // 0x363838: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x363838u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x36383c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x36383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x363840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x363840u;
    {
        const bool branch_taken_0x363840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363840u;
        // 0x363844: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363840) {
            ctx->pc = 0x363818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363818;
        }
    }
    ctx->pc = 0x363848u;
    // 0x363848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x363848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36384c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363850: 0xc0bbb94  jal         func_2EEE50
    ctx->pc = 0x363850u;
    SET_GPR_U32(ctx, 31, 0x363858u);
    ctx->pc = 0x363854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363850u;
    // 0x363854: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEE50u, 0x363850u, 0x363858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363858u;
label_363858:
    // 0x363858: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36385c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x36385cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_363860:
    // 0x363860: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x363860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x363864: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x363864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x363868: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x363868u;
    SET_GPR_U32(ctx, 31, 0x363870u);
    ctx->pc = 0x36386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363868u;
    // 0x36386c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x363868u, 0x363870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363870u;
label_363870:
    // 0x363870: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x363870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363878: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36387c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36387Cu;
    SET_GPR_U32(ctx, 31, 0x363884u);
    ctx->pc = 0x363880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36387Cu;
    // 0x363880: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36387Cu, 0x363884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363884u;
label_363884:
    // 0x363884: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x363884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x363888: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x363888u;
    {
        const bool branch_taken_0x363888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363888u;
        // 0x36388c: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363888) {
            ctx->pc = 0x363860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363860;
        }
    }
    ctx->pc = 0x363890u;
    // 0x363890: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x363890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x363894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363898: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x363898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36389c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36389cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3638a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3638a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3638a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3638a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3638a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3638a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3638ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3638ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3638B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3638ACu;
        // 0x3638b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3638ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3638B4u;
    // 0x3638b4: 0x0  nop
    ctx->pc = 0x3638b4u;
    // NOP
    ctx->pc = 0x3638b8u;
}
