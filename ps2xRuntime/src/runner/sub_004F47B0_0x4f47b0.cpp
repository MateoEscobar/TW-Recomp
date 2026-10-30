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

// Function: sub_004F47B0
// Address: 0x4f47b0 - 0x4f47c8
void sub_004F47B0_0x4f47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F47B0_0x4f47b0");
#endif

    ctx->pc = 0x4f47b0u;

    // 0x4f47b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4f47b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f47b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f47b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f47b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4f47b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x4f47bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F47BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F47BCu;
        // 0x4f47c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F47BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F47C4u;
    // 0x4f47c4: 0x0  nop
    ctx->pc = 0x4f47c4u;
    // NOP
    ctx->pc = 0x4f47c8u;
}
