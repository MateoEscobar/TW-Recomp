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

// Function: sub_004EE7D8
// Address: 0x4ee7d8 - 0x4ee7e8
void sub_004EE7D8_0x4ee7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE7D8_0x4ee7d8");
#endif

    ctx->pc = 0x4ee7d8u;

    // 0x4ee7d8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE7DCu;
        // 0x4ee7e0: 0x24425b00  addiu       $v0, $v0, 0x5B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE7E4u;
    // 0x4ee7e4: 0x0  nop
    ctx->pc = 0x4ee7e4u;
    // NOP
    ctx->pc = 0x4ee7e8u;
}
