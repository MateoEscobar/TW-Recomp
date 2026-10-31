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

// Function: sub_0041A410
// Address: 0x41a410 - 0x41a420
void sub_0041A410_0x41a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A410_0x41a410");
#endif

    ctx->pc = 0x41a410u;

    // 0x41a410: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x41A410u;
    {
        const bool branch_taken_0x41a410 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x41a410) {
            ctx->pc = 0x41A414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A410u;
            // 0x41a414: 0xa08556df  sb          $a1, 0x56DF($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 22239), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A424u;
            return;
        }
    }
    ctx->pc = 0x41A418u;
    // 0x41a418: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x41a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x41a41c: 0x3e00008  jr          $ra
    ctx->pc = 0x41A41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A424u;
}
