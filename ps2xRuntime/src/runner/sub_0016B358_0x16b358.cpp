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

// Function: sub_0016B358
// Address: 0x16b358 - 0x16b3d0
void sub_0016B358_0x16b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B358_0x16b358");
#endif

    switch (ctx->pc) {
        case 0x16b380u: goto label_16b380;
        case 0x16b388u: goto label_16b388;
        case 0x16b390u: goto label_16b390;
        case 0x16b398u: goto label_16b398;
        case 0x16b3a8u: goto label_16b3a8;
        default: break;
    }

    ctx->pc = 0x16b358u;

    // 0x16b358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b35c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b360: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16b364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b36c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b36cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b370: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B370u;
    {
        const bool branch_taken_0x16b370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B370u;
        // 0x16b374: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b370) {
            ctx->pc = 0x16B3B8u;
            goto label_16b3b8;
        }
    }
    ctx->pc = 0x16B378u;
    // 0x16b378: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B378u;
    SET_GPR_U32(ctx, 31, 0x16B380u);
    ctx->pc = 0x16B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B378u;
    // 0x16b37c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B378u, 0x16B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B380u;
label_16b380:
    // 0x16b380: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16b380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x16b384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b388:
    // 0x16b388: 0xc137866  jal         func_4DE198
    ctx->pc = 0x16B388u;
    SET_GPR_U32(ctx, 31, 0x16B390u);
    ctx->pc = 0x16B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B388u;
    // 0x16b38c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16B388u, 0x16B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B390u;
label_16b390:
    // 0x16b390: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B390u;
    SET_GPR_U32(ctx, 31, 0x16B398u);
    ctx->pc = 0x16B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B390u;
    // 0x16b394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B390u, 0x16B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B398u;
label_16b398:
    // 0x16b398: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B398u;
    {
        const bool branch_taken_0x16b398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b398) {
            ctx->pc = 0x16B39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B398u;
            // 0x16b39c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B3ACu;
            goto label_16b3ac;
        }
    }
    ctx->pc = 0x16B3A0u;
    // 0x16b3a0: 0xc089ce2  jal         func_227388
    ctx->pc = 0x16B3A0u;
    SET_GPR_U32(ctx, 31, 0x16B3A8u);
    ctx->pc = 0x16B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3A0u;
    // 0x16b3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x16B3A0u, 0x16B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3A8u;
label_16b3a8:
    // 0x16b3a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16b3ac:
    // 0x16b3ac: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16b3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b3b0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x16B3B0u;
    {
        const bool branch_taken_0x16b3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b3b0) {
            ctx->pc = 0x16B3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B3B0u;
            // 0x16b3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b388;
        }
    }
    ctx->pc = 0x16B3B8u;
label_16b3b8:
    // 0x16b3b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16b3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b3bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3C4u;
        // 0x16b3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B3CCu;
    // 0x16b3cc: 0x0  nop
    ctx->pc = 0x16b3ccu;
    // NOP
    ctx->pc = 0x16b3d0u;
}
