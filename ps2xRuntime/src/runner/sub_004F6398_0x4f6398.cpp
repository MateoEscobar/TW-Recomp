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

// Function: sub_004F6398
// Address: 0x4f6398 - 0x4f63b0
void sub_004F6398_0x4f6398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6398_0x4f6398");
#endif

    ctx->pc = 0x4f6398u;

    // 0x4f6398: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4f6398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f639c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4f639cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4f63a0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x4f63a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4f63a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F63A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F63A4u;
        // 0x4f63a8: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F63A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F63ACu;
    // 0x4f63ac: 0x0  nop
    ctx->pc = 0x4f63acu;
    // NOP
    ctx->pc = 0x4f63b0u;
}
