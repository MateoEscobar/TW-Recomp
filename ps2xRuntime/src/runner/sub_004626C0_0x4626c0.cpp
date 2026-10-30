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

// Function: sub_004626C0
// Address: 0x4626c0 - 0x4626d0
void sub_004626C0_0x4626c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004626C0_0x4626c0");
#endif

    ctx->pc = 0x4626c0u;

    // 0x4626c0: 0xaf84846c  sw          $a0, -0x7B94($gp)
    ctx->pc = 0x4626c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935660), GPR_U32(ctx, 4));
    // 0x4626c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4626C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4626C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4626C4u;
        // 0x4626c8: 0xaf858470  sw          $a1, -0x7B90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4626C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4626CCu;
    // 0x4626cc: 0x0  nop
    ctx->pc = 0x4626ccu;
    // NOP
    ctx->pc = 0x4626d0u;
}
