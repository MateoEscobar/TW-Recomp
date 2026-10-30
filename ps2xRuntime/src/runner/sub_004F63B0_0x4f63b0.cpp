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

// Function: sub_004F63B0
// Address: 0x4f63b0 - 0x4f63c8
void sub_004F63B0_0x4f63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F63B0_0x4f63b0");
#endif

    ctx->pc = 0x4f63b0u;

    // 0x4f63b0: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x4f63b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f63b4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4f63b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4f63b8: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x4f63b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4f63bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F63BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F63BCu;
        // 0x4f63c0: 0x7ca30010  sq          $v1, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F63BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F63C4u;
    // 0x4f63c4: 0x0  nop
    ctx->pc = 0x4f63c4u;
    // NOP
    ctx->pc = 0x4f63c8u;
}
