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

// Function: sub_0047F1E8
// Address: 0x47f1e8 - 0x47f1f8
void sub_0047F1E8_0x47f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F1E8_0x47f1e8");
#endif

    ctx->pc = 0x47f1e8u;

    // 0x47f1e8: 0xaf8485e0  sw          $a0, -0x7A20($gp)
    ctx->pc = 0x47f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936032), GPR_U32(ctx, 4));
    // 0x47f1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x47F1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F1ECu;
        // 0x47f1f0: 0xaf8585e4  sw          $a1, -0x7A1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F1F4u;
    // 0x47f1f4: 0x0  nop
    ctx->pc = 0x47f1f4u;
    // NOP
    ctx->pc = 0x47f1f8u;
}
