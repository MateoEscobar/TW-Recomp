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

// Function: sub_004EEE40
// Address: 0x4eee40 - 0x4eee50
void sub_004EEE40_0x4eee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEE40_0x4eee40");
#endif

    ctx->pc = 0x4eee40u;

    // 0x4eee40: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eee44: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEE44u;
        // 0x4eee48: 0x24427340  addiu       $v0, $v0, 0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEE4Cu;
    // 0x4eee4c: 0x0  nop
    ctx->pc = 0x4eee4cu;
    // NOP
    ctx->pc = 0x4eee50u;
}
