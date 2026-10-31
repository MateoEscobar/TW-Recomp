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

// Function: sub_00290E30
// Address: 0x290e30 - 0x290e48
void sub_00290E30_0x290e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290E30_0x290e30");
#endif

    ctx->pc = 0x290e30u;

    // 0x290e30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x290e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x290e34: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290E34u;
    {
        const bool branch_taken_0x290e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e34) {
            ctx->pc = 0x290E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E34u;
            // 0x290e38: 0xac8501e8  sw          $a1, 0x1E8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E3Cu;
            goto label_290e3c;
        }
    }
    ctx->pc = 0x290E3Cu;
label_290e3c:
    // 0x290e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x290E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290E44u;
    // 0x290e44: 0x0  nop
    ctx->pc = 0x290e44u;
    // NOP
    ctx->pc = 0x290e48u;
}
