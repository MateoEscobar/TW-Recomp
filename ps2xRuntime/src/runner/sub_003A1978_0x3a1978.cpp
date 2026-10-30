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

// Function: sub_003A1978
// Address: 0x3a1978 - 0x3a1988
void sub_003A1978_0x3a1978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1978_0x3a1978");
#endif

    ctx->pc = 0x3a1978u;

    // 0x3a1978: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a1978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a197c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A197Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A197Cu;
        // 0x3a1980: 0x7c820040  sq          $v0, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A197Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1984u;
    // 0x3a1984: 0x0  nop
    ctx->pc = 0x3a1984u;
    // NOP
    ctx->pc = 0x3a1988u;
}
