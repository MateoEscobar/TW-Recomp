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

// Function: sub_00391590
// Address: 0x391590 - 0x3915d0
void sub_00391590_0x391590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391590_0x391590");
#endif

    switch (ctx->pc) {
        case 0x3915a8u: goto label_3915a8;
        default: break;
    }

    ctx->pc = 0x391590u;

    // 0x391590: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x391590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x391594: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x391594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x391598: 0x8c424bc0  lw          $v0, 0x4BC0($v0)
    ctx->pc = 0x391598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19392)));
    // 0x39159c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39159Cu;
    {
        const bool branch_taken_0x39159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3915A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39159Cu;
        // 0x3915a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39159c) {
            ctx->pc = 0x3915C8u;
            goto label_3915c8;
        }
    }
    ctx->pc = 0x3915A4u;
    // 0x3915a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3915a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3915a8:
    // 0x3915a8: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x3915a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3915ac: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3915ACu;
    {
        const bool branch_taken_0x3915ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3915ac) {
            ctx->pc = 0x3915B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3915ACu;
            // 0x3915b0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3915BCu;
            goto label_3915bc;
        }
    }
    ctx->pc = 0x3915B4u;
    // 0x3915b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3915B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3915B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915B4u;
        // 0x3915b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3915B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3915BCu;
label_3915bc:
    // 0x3915bc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3915bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3915c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3915C0u;
    {
        const bool branch_taken_0x3915c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3915C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915C0u;
        // 0x3915c4: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3915c0) {
            ctx->pc = 0x3915A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3915a8;
        }
    }
    ctx->pc = 0x3915C8u;
label_3915c8:
    // 0x3915c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3915C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3915CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915C8u;
        // 0x3915cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3915C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3915D0u;
}
