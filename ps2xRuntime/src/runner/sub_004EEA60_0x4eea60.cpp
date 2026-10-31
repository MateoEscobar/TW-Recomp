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

// Function: sub_004EEA60
// Address: 0x4eea60 - 0x4eea70
void sub_004EEA60_0x4eea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEA60_0x4eea60");
#endif

    ctx->pc = 0x4eea60u;

    // 0x4eea60: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eea60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eea64: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEA64u;
        // 0x4eea68: 0x24425c80  addiu       $v0, $v0, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEA6Cu;
    // 0x4eea6c: 0x0  nop
    ctx->pc = 0x4eea6cu;
    // NOP
    ctx->pc = 0x4eea70u;
}
