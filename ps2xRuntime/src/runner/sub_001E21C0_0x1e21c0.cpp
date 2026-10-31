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

// Function: sub_001E21C0
// Address: 0x1e21c0 - 0x1e21d0
void sub_001E21C0_0x1e21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E21C0_0x1e21c0");
#endif

    ctx->pc = 0x1e21c0u;

    // 0x1e21c0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1e21c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e21c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E21C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21C4u;
        // 0x1e21c8: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E21C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E21CCu;
    // 0x1e21cc: 0x0  nop
    ctx->pc = 0x1e21ccu;
    // NOP
    ctx->pc = 0x1e21d0u;
}
