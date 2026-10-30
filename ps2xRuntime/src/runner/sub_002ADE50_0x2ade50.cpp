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

// Function: sub_002ADE50
// Address: 0x2ade50 - 0x2ade60
void sub_002ADE50_0x2ade50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADE50_0x2ade50");
#endif

    ctx->pc = 0x2ade50u;

    // 0x2ade50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ade50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ade54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ade54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ade58: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE58u;
        // 0x2ade5c: 0xa06202d3  sb          $v0, 0x2D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADE60u;
}
