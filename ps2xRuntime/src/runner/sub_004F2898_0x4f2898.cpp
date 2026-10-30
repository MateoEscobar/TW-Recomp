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

// Function: sub_004F2898
// Address: 0x4f2898 - 0x4f28b0
void sub_004F2898_0x4f2898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2898_0x4f2898");
#endif

    ctx->pc = 0x4f2898u;

    // 0x4f2898: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4f2898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f289c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f289cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f28a0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4f28a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x4f28a4: 0x7c820170  sq          $v0, 0x170($a0)
    ctx->pc = 0x4f28a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 368), GPR_VEC(ctx, 2));
    // 0x4f28a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F28A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F28A8u;
        // 0x4f28ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F28A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F28B0u;
}
