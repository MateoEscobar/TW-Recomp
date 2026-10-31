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

// Function: sub_00417C48
// Address: 0x417c48 - 0x417c58
void sub_00417C48_0x417c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417C48_0x417c48");
#endif

    ctx->pc = 0x417c48u;

    // 0x417c48: 0x8c821c18  lw          $v0, 0x1C18($a0)
    ctx->pc = 0x417c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7192)));
    // 0x417c4c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x417c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x417c50: 0x3e00008  jr          $ra
    ctx->pc = 0x417C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417C50u;
        // 0x417c54: 0xac831c18  sw          $v1, 0x1C18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417C58u;
}
