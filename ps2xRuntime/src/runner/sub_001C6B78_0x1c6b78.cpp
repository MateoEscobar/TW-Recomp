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

// Function: sub_001C6B78
// Address: 0x1c6b78 - 0x1c6b80
void sub_001C6B78_0x1c6b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B78_0x1c6b78");
#endif

    ctx->pc = 0x1c6b78u;

    // 0x1c6b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B78u;
        // 0x1c6b7c: 0xac8504f8  sw          $a1, 0x4F8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B80u;
}
