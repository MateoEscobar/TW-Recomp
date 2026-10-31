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

// Function: sub_00439A90
// Address: 0x439a90 - 0x439aa8
void sub_00439A90_0x439a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439A90_0x439a90");
#endif

    ctx->pc = 0x439a90u;

    // 0x439a90: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x439a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x439a94: 0x3e00008  jr          $ra
    ctx->pc = 0x439A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439A94u;
        // 0x439a98: 0x2442d090  addiu       $v0, $v0, -0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439A9Cu;
    // 0x439a9c: 0x0  nop
    ctx->pc = 0x439a9cu;
    // NOP
    // 0x439aa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x439aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x439aa4: 0x0  nop
    ctx->pc = 0x439aa4u;
    // NOP
    ctx->pc = 0x439aa8u;
}
