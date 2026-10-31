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

// Function: sub_00236C48
// Address: 0x236c48 - 0x236c58
void sub_00236C48_0x236c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C48_0x236c48");
#endif

    ctx->pc = 0x236c48u;

    // 0x236c48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x236c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x236C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C4Cu;
        // 0x236c50: 0xac440298  sw          $a0, 0x298($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C54u;
    // 0x236c54: 0x0  nop
    ctx->pc = 0x236c54u;
    // NOP
    ctx->pc = 0x236c58u;
}
