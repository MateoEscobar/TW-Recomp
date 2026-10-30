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

// Function: sub_001D80A8
// Address: 0x1d80a8 - 0x1d80e0
void sub_001D80A8_0x1d80a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D80A8_0x1d80a8");
#endif

    ctx->pc = 0x1d80a8u;

    // 0x1d80a8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1d80ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d80b0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D80B0u;
    {
        const bool branch_taken_0x1d80b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80B0u;
        // 0x1d80b4: 0xac440840  sw          $a0, 0x840($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80b0) {
            ctx->pc = 0x1D80C8u;
            goto label_1d80c8;
        }
    }
    ctx->pc = 0x1D80B8u;
    // 0x1d80b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d80bc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d80c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D80C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80C0u;
        // 0x1d80c4: 0xac640438  sw          $a0, 0x438($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1080), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D80C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80C8u;
label_1d80c8:
    // 0x1d80c8: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D80C8u;
    {
        const bool branch_taken_0x1d80c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80C8u;
        // 0x1d80cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80c8) {
            ctx->pc = 0x1D80D8u;
            goto label_1d80d8;
        }
    }
    ctx->pc = 0x1D80D0u;
    // 0x1d80d0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x1d80d4: 0xac600438  sw          $zero, 0x438($v1)
    ctx->pc = 0x1d80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1080), GPR_U32(ctx, 0));
label_1d80d8:
    // 0x1d80d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D80D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D80D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80E0u;
}
