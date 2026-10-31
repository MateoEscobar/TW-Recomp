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

// Function: sub_003A8500
// Address: 0x3a8500 - 0x3a8518
void sub_003A8500_0x3a8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8500_0x3a8500");
#endif

    ctx->pc = 0x3a8500u;

    // 0x3a8500: 0x8c830400  lw          $v1, 0x400($a0)
    ctx->pc = 0x3a8500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x3a8504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a8504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a8508: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3a8508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3a850c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A850Cu;
        // 0x3a8510: 0xac830400  sw          $v1, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A850Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8514u;
    // 0x3a8514: 0x0  nop
    ctx->pc = 0x3a8514u;
    // NOP
    ctx->pc = 0x3a8518u;
}
