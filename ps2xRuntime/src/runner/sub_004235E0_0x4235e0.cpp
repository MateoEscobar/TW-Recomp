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

// Function: sub_004235E0
// Address: 0x4235e0 - 0x4235f0
void sub_004235E0_0x4235e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004235E0_0x4235e0");
#endif

    ctx->pc = 0x4235e0u;

    // 0x4235e0: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x4235e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x4235e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4235E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4235E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235E4u;
        // 0x4235e8: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4235E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4235ECu;
    // 0x4235ec: 0x0  nop
    ctx->pc = 0x4235ecu;
    // NOP
    ctx->pc = 0x4235f0u;
}
