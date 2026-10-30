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

// Function: sub_00222E60
// Address: 0x222e60 - 0x222e80
void sub_00222E60_0x222e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222E60_0x222e60");
#endif

    ctx->pc = 0x222e60u;

    // 0x222e60: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x222e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x222e64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222E64u;
    {
        const bool branch_taken_0x222e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e64) {
            ctx->pc = 0x222E74u;
            goto label_222e74;
        }
    }
    ctx->pc = 0x222E6Cu;
    // 0x222e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x222E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E6Cu;
        // 0x222e70: 0x84420146  lh          $v0, 0x146($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 326)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E74u;
label_222e74:
    // 0x222e74: 0x3e00008  jr          $ra
    ctx->pc = 0x222E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E74u;
        // 0x222e78: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E7Cu;
    // 0x222e7c: 0x0  nop
    ctx->pc = 0x222e7cu;
    // NOP
    ctx->pc = 0x222e80u;
}
