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

// Function: sub_004F3BA0
// Address: 0x4f3ba0 - 0x4f3bb8
void sub_004F3BA0_0x4f3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3BA0_0x4f3ba0");
#endif

    ctx->pc = 0x4f3ba0u;

    // 0x4f3ba0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4f3ba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3ba4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f3ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f3ba8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4f3ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x4f3bac: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x4f3bacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
    // 0x4f3bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3BB0u;
        // 0x4f3bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3BB8u;
}
