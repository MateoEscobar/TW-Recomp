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

// Function: sub_004F2850
// Address: 0x4f2850 - 0x4f2860
void sub_004F2850_0x4f2850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2850_0x4f2850");
#endif

    ctx->pc = 0x4f2850u;

    // 0x4f2850: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x4f2850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x4f2854: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2854u;
        // 0x4f2858: 0x2442e498  addiu       $v0, $v0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F285Cu;
    // 0x4f285c: 0x0  nop
    ctx->pc = 0x4f285cu;
    // NOP
    ctx->pc = 0x4f2860u;
}
