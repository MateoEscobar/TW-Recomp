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

// Function: sub_002911D8
// Address: 0x2911d8 - 0x2911e0
void sub_002911D8_0x2911d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002911D8_0x2911d8");
#endif

    ctx->pc = 0x2911d8u;

    // 0x2911d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2911D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2911DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911D8u;
        // 0x2911dc: 0xa085014a  sb          $a1, 0x14A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 330), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911E0u;
}
