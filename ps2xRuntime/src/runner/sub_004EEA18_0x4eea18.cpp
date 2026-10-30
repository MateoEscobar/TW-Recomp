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

// Function: sub_004EEA18
// Address: 0x4eea18 - 0x4eea28
void sub_004EEA18_0x4eea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEA18_0x4eea18");
#endif

    ctx->pc = 0x4eea18u;

    // 0x4eea18: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eea18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEA1Cu;
        // 0x4eea20: 0x24425c58  addiu       $v0, $v0, 0x5C58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEA24u;
    // 0x4eea24: 0x0  nop
    ctx->pc = 0x4eea24u;
    // NOP
    ctx->pc = 0x4eea28u;
}
