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

// Function: sub_004E9208
// Address: 0x4e9208 - 0x4e9210
void sub_004E9208_0x4e9208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9208_0x4e9208");
#endif

    ctx->pc = 0x4e9208u;

    // 0x4e9208: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9208u;
        // 0x4e920c: 0xac8500c4  sw          $a1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9210u;
}
