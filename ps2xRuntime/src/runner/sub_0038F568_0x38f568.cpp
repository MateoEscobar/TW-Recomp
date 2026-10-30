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

// Function: sub_0038F568
// Address: 0x38f568 - 0x38f588
void sub_0038F568_0x38f568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F568_0x38f568");
#endif

    ctx->pc = 0x38f568u;

    // 0x38f568: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x38f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x38f56c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F56Cu;
    {
        const bool branch_taken_0x38f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f56c) {
            ctx->pc = 0x38F580u;
            goto label_38f580;
        }
    }
    ctx->pc = 0x38F574u;
    // 0x38f574: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38f578: 0x3e00008  jr          $ra
    ctx->pc = 0x38F578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F578u;
        // 0x38f57c: 0x24420a90  addiu       $v0, $v0, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F580u;
label_38f580:
    // 0x38f580: 0x3e00008  jr          $ra
    ctx->pc = 0x38F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F580u;
        // 0x38f584: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F588u;
}
