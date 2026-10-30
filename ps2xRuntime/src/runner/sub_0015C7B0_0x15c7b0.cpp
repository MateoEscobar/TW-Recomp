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

// Function: sub_0015C7B0
// Address: 0x15c7b0 - 0x15c858
void sub_0015C7B0_0x15c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C7B0_0x15c7b0");
#endif

    switch (ctx->pc) {
        case 0x15c7f0u: goto label_15c7f0;
        case 0x15c7fcu: goto label_15c7fc;
        case 0x15c810u: goto label_15c810;
        case 0x15c830u: goto label_15c830;
        default: break;
    }

    ctx->pc = 0x15c7b0u;

    // 0x15c7b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15c7b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15c7b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15c7bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15c7c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c7c4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15c7c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15c7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c7cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15c7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c7d4: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x15c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x15c7d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15c7dc: 0x8c5256d4  lw          $s2, 0x56D4($v0)
    ctx->pc = 0x15c7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22228)));
    // 0x15c7e0: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x15C7E0u;
    {
        const bool branch_taken_0x15c7e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7E0u;
        // 0x15c7e4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7e0) {
            ctx->pc = 0x15C824u;
            goto label_15c824;
        }
    }
    ctx->pc = 0x15C7E8u;
    // 0x15c7e8: 0x245114e8  addiu       $s1, $v0, 0x14E8
    ctx->pc = 0x15c7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5352));
    // 0x15c7ec: 0x0  nop
    ctx->pc = 0x15c7ecu;
    // NOP
label_15c7f0:
    // 0x15c7f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c7f4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x15C7F4u;
    SET_GPR_U32(ctx, 31, 0x15C7FCu);
    ctx->pc = 0x15C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7F4u;
    // 0x15c7f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x15C7F4u, 0x15C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7FCu;
label_15c7fc:
    // 0x15c7fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C7FCu;
    {
        const bool branch_taken_0x15c7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c7fc) {
            ctx->pc = 0x15C800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7FCu;
            // 0x15c800: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C818u;
            goto label_15c818;
        }
    }
    ctx->pc = 0x15C804u;
    // 0x15c804: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c808: 0xc0571ea  jal         func_15C7A8
    ctx->pc = 0x15C808u;
    SET_GPR_U32(ctx, 31, 0x15C810u);
    ctx->pc = 0x15C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C808u;
    // 0x15c80c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7A8u, 0x15C808u, 0x15C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C810u;
label_15c810:
    // 0x15c810: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C810u;
    {
        const bool branch_taken_0x15c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C810u;
        // 0x15c814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c810) {
            ctx->pc = 0x15C834u;
            goto label_15c834;
        }
    }
    ctx->pc = 0x15C818u;
label_15c818:
    // 0x15c818: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x15c818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x15c81c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x15C81Cu;
    {
        const bool branch_taken_0x15c81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C81Cu;
        // 0x15c820: 0x26310084  addiu       $s1, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c81c) {
            ctx->pc = 0x15C7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c7f0;
        }
    }
    ctx->pc = 0x15C824u;
label_15c824:
    // 0x15c824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c828: 0xc0571ea  jal         func_15C7A8
    ctx->pc = 0x15C828u;
    SET_GPR_U32(ctx, 31, 0x15C830u);
    ctx->pc = 0x15C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C828u;
    // 0x15c82c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7A8u, 0x15C828u, 0x15C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C830u;
label_15c830:
    // 0x15c830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c834:
    // 0x15c834: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15c834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c838: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15c838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c83c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15c83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c840: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15c840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c844: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15c844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c84c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C84Cu;
        // 0x15c850: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C854u;
    // 0x15c854: 0x0  nop
    ctx->pc = 0x15c854u;
    // NOP
    ctx->pc = 0x15c858u;
}
