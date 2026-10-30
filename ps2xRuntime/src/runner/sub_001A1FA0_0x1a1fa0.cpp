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

// Function: sub_001A1FA0
// Address: 0x1a1fa0 - 0x1a1fc8
void sub_001A1FA0_0x1a1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1FA0_0x1a1fa0");
#endif

    ctx->pc = 0x1a1fa0u;

    // 0x1a1fa0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1a1fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1fa4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x1a1fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x1a1fa8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1a1fa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a1fac: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x1a1facu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
    // 0x1a1fb0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1a1fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a1fb4: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x1a1fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x1a1fb8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1a1fb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a1fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FBCu;
        // 0x1a1fc0: 0x7c830070  sq          $v1, 0x70($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1FC4u;
    // 0x1a1fc4: 0x0  nop
    ctx->pc = 0x1a1fc4u;
    // NOP
    ctx->pc = 0x1a1fc8u;
}
