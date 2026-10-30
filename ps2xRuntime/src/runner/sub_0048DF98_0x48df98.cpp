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

// Function: sub_0048DF98
// Address: 0x48df98 - 0x48dfa8
void sub_0048DF98_0x48df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DF98_0x48df98");
#endif

    ctx->pc = 0x48df98u;

    // 0x48df98: 0x3e00008  jr          $ra
    ctx->pc = 0x48DF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DF98u;
        // 0x48df9c: 0xa3848680  sb          $a0, -0x7980($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936192), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DFA0u;
    // 0x48dfa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x48dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48dfa4: 0x0  nop
    ctx->pc = 0x48dfa4u;
    // NOP
    ctx->pc = 0x48dfa8u;
}
