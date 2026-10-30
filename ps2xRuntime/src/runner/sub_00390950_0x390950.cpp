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

// Function: sub_00390950
// Address: 0x390950 - 0x390970
void sub_00390950_0x390950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390950_0x390950");
#endif

    ctx->pc = 0x390950u;

    // 0x390950: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x390950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x390954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390954u;
    {
        const bool branch_taken_0x390954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390954) {
            ctx->pc = 0x390968u;
            goto label_390968;
        }
    }
    ctx->pc = 0x39095Cu;
    // 0x39095c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x39095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x390960: 0x3e00008  jr          $ra
    ctx->pc = 0x390960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390960u;
        // 0x390964: 0x24420c30  addiu       $v0, $v0, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390968u;
label_390968:
    // 0x390968: 0x3e00008  jr          $ra
    ctx->pc = 0x390968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390968u;
        // 0x39096c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390970u;
}
