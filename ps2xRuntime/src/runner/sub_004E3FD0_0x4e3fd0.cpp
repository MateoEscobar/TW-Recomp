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

// Function: sub_004E3FD0
// Address: 0x4e3fd0 - 0x4e3fe0
void sub_004E3FD0_0x4e3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3FD0_0x4e3fd0");
#endif

    ctx->pc = 0x4e3fd0u;

    // 0x4e3fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3FD0u;
        // 0x4e3fd4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3FD8u;
    // 0x4e3fd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4e3fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4e3fdc: 0x0  nop
    ctx->pc = 0x4e3fdcu;
    // NOP
    ctx->pc = 0x4e3fe0u;
}
