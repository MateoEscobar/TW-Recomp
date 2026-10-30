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

// Function: sub_004EEB08
// Address: 0x4eeb08 - 0x4eeb18
void sub_004EEB08_0x4eeb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEB08_0x4eeb08");
#endif

    ctx->pc = 0x4eeb08u;

    // 0x4eeb08: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eeb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eeb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB0Cu;
        // 0x4eeb10: 0x24426558  addiu       $v0, $v0, 0x6558 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEB14u;
    // 0x4eeb14: 0x0  nop
    ctx->pc = 0x4eeb14u;
    // NOP
    ctx->pc = 0x4eeb18u;
}
