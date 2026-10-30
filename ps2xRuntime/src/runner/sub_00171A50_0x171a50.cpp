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

// Function: sub_00171A50
// Address: 0x171a50 - 0x171a68
void sub_00171A50_0x171a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171A50_0x171a50");
#endif

    ctx->pc = 0x171a50u;

    // 0x171a50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x171a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x171a54: 0x3e00008  jr          $ra
    ctx->pc = 0x171A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A54u;
        // 0x171a58: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171A5Cu;
    // 0x171a5c: 0x0  nop
    ctx->pc = 0x171a5cu;
    // NOP
    // 0x171a60: 0x0  nop
    ctx->pc = 0x171a60u;
    // NOP
    // 0x171a64: 0x0  nop
    ctx->pc = 0x171a64u;
    // NOP
    ctx->pc = 0x171a68u;
}
