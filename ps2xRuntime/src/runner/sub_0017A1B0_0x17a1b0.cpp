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

// Function: sub_0017A1B0
// Address: 0x17a1b0 - 0x17a1c8
void sub_0017A1B0_0x17a1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A1B0_0x17a1b0");
#endif

    ctx->pc = 0x17a1b0u;

    // 0x17a1b0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x17a1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a1b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a1b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x17a1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1BCu;
        // 0x17a1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A1C4u;
    // 0x17a1c4: 0x0  nop
    ctx->pc = 0x17a1c4u;
    // NOP
    ctx->pc = 0x17a1c8u;
}
