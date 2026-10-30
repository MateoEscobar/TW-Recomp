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

// Function: sub_001CD1A0
// Address: 0x1cd1a0 - 0x1cd1b0
void sub_001CD1A0_0x1cd1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD1A0_0x1cd1a0");
#endif

    ctx->pc = 0x1cd1a0u;

    // 0x1cd1a0: 0x78a30060  lq          $v1, 0x60($a1)
    ctx->pc = 0x1cd1a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1cd1a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1cd1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1A8u;
        // 0x1cd1ac: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD1B0u;
}
