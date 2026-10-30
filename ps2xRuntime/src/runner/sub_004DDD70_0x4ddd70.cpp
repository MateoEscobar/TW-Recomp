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

// Function: sub_004DDD70
// Address: 0x4ddd70 - 0x4ddd80
void sub_004DDD70_0x4ddd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDD70_0x4ddd70");
#endif

    ctx->pc = 0x4ddd70u;

    // 0x4ddd70: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDD70u;
        // 0x4ddd74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDD78u;
    // 0x4ddd78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ddd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ddd7c: 0x0  nop
    ctx->pc = 0x4ddd7cu;
    // NOP
    ctx->pc = 0x4ddd80u;
}
