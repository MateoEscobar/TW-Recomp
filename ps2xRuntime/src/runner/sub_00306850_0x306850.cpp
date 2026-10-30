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

// Function: sub_00306850
// Address: 0x306850 - 0x3068f8
void sub_00306850_0x306850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306850_0x306850");
#endif

    switch (ctx->pc) {
        case 0x306850u: goto label_306850;
        case 0x306854u: goto label_306854;
        case 0x306858u: goto label_306858;
        case 0x30685cu: goto label_30685c;
        case 0x306860u: goto label_306860;
        case 0x306864u: goto label_306864;
        case 0x306868u: goto label_306868;
        case 0x30686cu: goto label_30686c;
        case 0x306870u: goto label_306870;
        case 0x306874u: goto label_306874;
        case 0x306878u: goto label_306878;
        case 0x30687cu: goto label_30687c;
        case 0x306880u: goto label_306880;
        case 0x306884u: goto label_306884;
        case 0x306888u: goto label_306888;
        case 0x30688cu: goto label_30688c;
        case 0x306890u: goto label_306890;
        case 0x306894u: goto label_306894;
        case 0x306898u: goto label_306898;
        case 0x30689cu: goto label_30689c;
        case 0x3068a0u: goto label_3068a0;
        case 0x3068a4u: goto label_3068a4;
        case 0x3068a8u: goto label_3068a8;
        case 0x3068acu: goto label_3068ac;
        case 0x3068b0u: goto label_3068b0;
        case 0x3068b4u: goto label_3068b4;
        case 0x3068b8u: goto label_3068b8;
        case 0x3068bcu: goto label_3068bc;
        case 0x3068c0u: goto label_3068c0;
        case 0x3068c4u: goto label_3068c4;
        case 0x3068c8u: goto label_3068c8;
        case 0x3068ccu: goto label_3068cc;
        case 0x3068d0u: goto label_3068d0;
        case 0x3068d4u: goto label_3068d4;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068dcu: goto label_3068dc;
        case 0x3068e0u: goto label_3068e0;
        case 0x3068e4u: goto label_3068e4;
        case 0x3068e8u: goto label_3068e8;
        case 0x3068ecu: goto label_3068ec;
        case 0x3068f0u: goto label_3068f0;
        case 0x3068f4u: goto label_3068f4;
        default: break;
    }

    ctx->pc = 0x306850u;

label_306850:
    // 0x306850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x306850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_306854:
    // 0x306854: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x306854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_306858:
    // 0x306858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30685c:
    // 0x30685c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_306860:
    // 0x306860: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x306860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_306864:
    // 0x306864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306868:
    // 0x306868: 0xc0c1af4  jal         func_306BD0
label_30686c:
    if (ctx->pc == 0x30686Cu) {
        ctx->pc = 0x30686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306868u;
        // 0x30686c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306870u;
        goto label_306870;
    }
    ctx->pc = 0x306868u;
    SET_GPR_U32(ctx, 31, 0x306870u);
    ctx->pc = 0x30686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306868u;
    // 0x30686c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306BD0u, 0x306868u, 0x306870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306870u;
label_306870:
    // 0x306870: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x306870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_306874:
    // 0x306874: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x306874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_306878:
    // 0x306878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30687c:
    // 0x30687c: 0x0  nop
    ctx->pc = 0x30687cu;
    // NOP
label_306880:
    // 0x306880: 0xc137826  jal         func_4DE098
label_306884:
    if (ctx->pc == 0x306884u) {
        ctx->pc = 0x306884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306880u;
        // 0x306884: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306888u;
        goto label_306888;
    }
    ctx->pc = 0x306880u;
    SET_GPR_U32(ctx, 31, 0x306888u);
    ctx->pc = 0x306884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306880u;
    // 0x306884: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x306880u, 0x306888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306888u;
label_306888:
    // 0x306888: 0xc0e409a  jal         func_390268
label_30688c:
    if (ctx->pc == 0x30688Cu) {
        ctx->pc = 0x30688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306888u;
        // 0x30688c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306890u;
        goto label_306890;
    }
    ctx->pc = 0x306888u;
    SET_GPR_U32(ctx, 31, 0x306890u);
    ctx->pc = 0x30688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306888u;
    // 0x30688c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x306888u, 0x306890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306890u;
label_306890:
    // 0x306890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306894:
    // 0x306894: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_306898:
    if (ctx->pc == 0x306898u) {
        ctx->pc = 0x306898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306894u;
        // 0x306898: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30689Cu;
        goto label_30689c;
    }
    ctx->pc = 0x306894u;
    {
        const bool branch_taken_0x306894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306894) {
            ctx->pc = 0x306898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306894u;
            // 0x306898: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3068BCu;
            goto label_3068bc;
        }
    }
    ctx->pc = 0x30689Cu;
label_30689c:
    // 0x30689c: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x30689cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_3068a0:
    // 0x3068a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3068a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3068a4:
    // 0x3068a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3068a8:
    if (ctx->pc == 0x3068A8u) {
        ctx->pc = 0x3068A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068A4u;
        // 0x3068a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068ACu;
        goto label_3068ac;
    }
    ctx->pc = 0x3068A4u;
    {
        const bool branch_taken_0x3068a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3068A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068A4u;
        // 0x3068a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068a4) {
            ctx->pc = 0x3068BCu;
            goto label_3068bc;
        }
    }
    ctx->pc = 0x3068ACu;
label_3068ac:
    // 0x3068ac: 0xc087502  jal         func_21D408
label_3068b0:
    if (ctx->pc == 0x3068B0u) {
        ctx->pc = 0x3068B4u;
        goto label_3068b4;
    }
    ctx->pc = 0x3068ACu;
    SET_GPR_U32(ctx, 31, 0x3068B4u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3068ACu, 0x3068B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068B4u;
label_3068b4:
    // 0x3068b4: 0xc0a3630  jal         func_28D8C0
label_3068b8:
    if (ctx->pc == 0x3068B8u) {
        ctx->pc = 0x3068B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068B4u;
        // 0x3068b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068BCu;
        goto label_3068bc;
    }
    ctx->pc = 0x3068B4u;
    SET_GPR_U32(ctx, 31, 0x3068BCu);
    ctx->pc = 0x3068B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068B4u;
    // 0x3068b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x3068B4u, 0x3068BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068BCu;
label_3068bc:
    // 0x3068bc: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x3068bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3068c0:
    // 0x3068c0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_3068c4:
    if (ctx->pc == 0x3068C4u) {
        ctx->pc = 0x3068C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068C0u;
        // 0x3068c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068C8u;
        goto label_3068c8;
    }
    ctx->pc = 0x3068C0u;
    {
        const bool branch_taken_0x3068c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3068c0) {
            ctx->pc = 0x3068C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3068C0u;
            // 0x3068c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306880;
        }
    }
    ctx->pc = 0x3068C8u;
label_3068c8:
    // 0x3068c8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3068c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3068cc:
    // 0x3068cc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x3068ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_3068d0:
    // 0x3068d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3068d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3068d4:
    // 0x3068d4: 0x60f809  jalr        $v1
label_3068d8:
    if (ctx->pc == 0x3068D8u) {
        ctx->pc = 0x3068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068D4u;
        // 0x3068d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068DCu;
        goto label_3068dc;
    }
    ctx->pc = 0x3068D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3068DCu);
        ctx->pc = 0x3068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068D4u;
        // 0x3068d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3068D4u, 0x3068DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3068DCu;
label_3068dc:
    // 0x3068dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3068dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3068e0:
    // 0x3068e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3068e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3068e4:
    // 0x3068e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3068e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3068e8:
    // 0x3068e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3068e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3068ec:
    // 0x3068ec: 0x3e00008  jr          $ra
label_3068f0:
    if (ctx->pc == 0x3068F0u) {
        ctx->pc = 0x3068F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068ECu;
        // 0x3068f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068F4u;
        goto label_3068f4;
    }
    ctx->pc = 0x3068ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3068F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068ECu;
        // 0x3068f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3068ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3068F4u;
label_3068f4:
    // 0x3068f4: 0x0  nop
    ctx->pc = 0x3068f4u;
    // NOP
    ctx->pc = 0x3068f8u;
}
