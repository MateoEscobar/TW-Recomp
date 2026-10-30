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

// Function: sub_001CD1C8
// Address: 0x1cd1c8 - 0x1cd1d8
void sub_001CD1C8_0x1cd1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD1C8_0x1cd1c8");
#endif

    ctx->pc = 0x1cd1c8u;

    // 0x1cd1c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1CCu;
        // 0x1cd1d0: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD1D4u;
    // 0x1cd1d4: 0x0  nop
    ctx->pc = 0x1cd1d4u;
    // NOP
    ctx->pc = 0x1cd1d8u;
}
