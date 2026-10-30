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

// Function: sub_0047E210
// Address: 0x47e210 - 0x47e218
void sub_0047E210_0x47e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E210_0x47e210");
#endif

    ctx->pc = 0x47e210u;

    // 0x47e210: 0x3e00008  jr          $ra
    ctx->pc = 0x47E210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E210u;
        // 0x47e214: 0xaf8485d4  sw          $a0, -0x7A2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936020), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E218u;
}
