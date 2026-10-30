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

// Function: sub_00106088
// Address: 0x106088 - 0x106098
void sub_00106088_0x106088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106088_0x106088");
#endif

    ctx->pc = 0x106088u;

    // 0x106088: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x106088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10608c: 0x3e00008  jr          $ra
    ctx->pc = 0x10608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10608Cu;
        // 0x106090: 0x244269b0  addiu       $v0, $v0, 0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106094u;
    // 0x106094: 0x0  nop
    ctx->pc = 0x106094u;
    // NOP
    ctx->pc = 0x106098u;
}
