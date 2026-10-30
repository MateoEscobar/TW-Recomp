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

// Function: sub_0015D5B0
// Address: 0x15d5b0 - 0x15d5e0
void sub_0015D5B0_0x15d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D5B0_0x15d5b0");
#endif

    ctx->pc = 0x15d5b0u;

    // 0x15d5b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15d5b4: 0x8c62c760  lw          $v0, -0x38A0($v1)
    ctx->pc = 0x15d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C760u));
    // 0x15d5b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D5B8u;
    {
        const bool branch_taken_0x15d5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5B8u;
        // 0x15d5bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5b8) {
            ctx->pc = 0x15D5D0u;
            goto label_15d5d0;
        }
    }
    ctx->pc = 0x15D5C0u;
    // 0x15d5c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15d5c4: 0x8c43c75c  lw          $v1, -0x38A4($v0)
    ctx->pc = 0x15d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C75Cu));
    // 0x15d5c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15D5C8u;
    {
        const bool branch_taken_0x15d5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5c8) {
            ctx->pc = 0x15D5D4u;
            goto label_15d5d4;
        }
    }
    ctx->pc = 0x15D5D0u;
label_15d5d0:
    // 0x15d5d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d5d4:
    // 0x15d5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5D4u;
        // 0x15d5d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D5DCu;
    // 0x15d5dc: 0x0  nop
    ctx->pc = 0x15d5dcu;
    // NOP
    ctx->pc = 0x15d5e0u;
}
