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

// Function: sub_0010BD70
// Address: 0x10bd70 - 0x10bd80
void sub_0010BD70_0x10bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BD70_0x10bd70");
#endif

    ctx->pc = 0x10bd70u;

    // 0x10bd70: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x10bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x10bd74: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD74u;
        // 0x10bd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD7Cu;
    // 0x10bd7c: 0x0  nop
    ctx->pc = 0x10bd7cu;
    // NOP
    ctx->pc = 0x10bd80u;
}
