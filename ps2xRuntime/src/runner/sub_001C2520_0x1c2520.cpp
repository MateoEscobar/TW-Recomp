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

// Function: sub_001C2520
// Address: 0x1c2520 - 0x1c2530
void sub_001C2520_0x1c2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2520_0x1c2520");
#endif

    ctx->pc = 0x1c2520u;

    // 0x1c2520: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1c2520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c2524: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2524u;
        // 0x1c2528: 0x7c8203b0  sq          $v0, 0x3B0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 944), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C252Cu;
    // 0x1c252c: 0x0  nop
    ctx->pc = 0x1c252cu;
    // NOP
    ctx->pc = 0x1c2530u;
}
