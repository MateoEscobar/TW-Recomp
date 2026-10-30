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

// Function: sub_001CD190
// Address: 0x1cd190 - 0x1cd1a0
void sub_001CD190_0x1cd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD190_0x1cd190");
#endif

    ctx->pc = 0x1cd190u;

    // 0x1cd190: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1cd190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd194: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD194u;
        // 0x1cd198: 0x7c820060  sq          $v0, 0x60($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD19Cu;
    // 0x1cd19c: 0x0  nop
    ctx->pc = 0x1cd19cu;
    // NOP
    ctx->pc = 0x1cd1a0u;
}
