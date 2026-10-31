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

// Function: sub_0041D404
// Address: 0x41d404 - 0x41d428
void sub_0041D404_0x41d404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D404_0x41d404");
#endif

    switch (ctx->pc) {
        case 0x41d410u: goto label_41d410;
        default: break;
    }

    ctx->pc = 0x41d404u;

    // 0x41d404: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x41d408: 0x3e00008  jr          $ra
    ctx->pc = 0x41D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D408u;
        // 0x41d40c: 0x2442b158  addiu       $v0, $v0, -0x4EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D410u;
label_41d410:
    // 0x41d410: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x41d414: 0x3e00008  jr          $ra
    ctx->pc = 0x41D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D414u;
        // 0x41d418: 0x2442b0d0  addiu       $v0, $v0, -0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D41Cu;
    // 0x41d41c: 0x0  nop
    ctx->pc = 0x41d41cu;
    // NOP
    // 0x41d420: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x41d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x41d424: 0x0  nop
    ctx->pc = 0x41d424u;
    // NOP
    ctx->pc = 0x41d428u;
}
