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

// Function: sub_00343798
// Address: 0x343798 - 0x3437b0
void sub_00343798_0x343798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343798_0x343798");
#endif

    ctx->pc = 0x343798u;

    // 0x343798: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x343798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x34379c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x34379cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x3437a0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x3437a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3437a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3437A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3437A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437A4u;
        // 0x3437a8: 0x7c830050  sq          $v1, 0x50($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3437A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3437ACu;
    // 0x3437ac: 0x0  nop
    ctx->pc = 0x3437acu;
    // NOP
    ctx->pc = 0x3437b0u;
}
