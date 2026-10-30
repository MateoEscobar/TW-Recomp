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

// Function: sub_001A8F20
// Address: 0x1a8f20 - 0x1a8f30
void sub_001A8F20_0x1a8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8F20_0x1a8f20");
#endif

    ctx->pc = 0x1a8f20u;

    // 0x1a8f20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a8f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F24u;
        // 0x1a8f28: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8F2Cu;
    // 0x1a8f2c: 0x0  nop
    ctx->pc = 0x1a8f2cu;
    // NOP
    ctx->pc = 0x1a8f30u;
}
