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

// Function: sub_0015D560
// Address: 0x15d560 - 0x15d570
void sub_0015D560_0x15d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D560_0x15d560");
#endif

    ctx->pc = 0x15d560u;

    // 0x15d560: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15d564: 0x3e00008  jr          $ra
    ctx->pc = 0x15D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D564u;
        // 0x15d568: 0xac44c768  sw          $a0, -0x3898($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952808), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D56Cu;
    // 0x15d56c: 0x0  nop
    ctx->pc = 0x15d56cu;
    // NOP
    ctx->pc = 0x15d570u;
}
