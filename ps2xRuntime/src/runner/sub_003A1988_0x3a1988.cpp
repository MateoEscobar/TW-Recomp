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

// Function: sub_003A1988
// Address: 0x3a1988 - 0x3a19a0
void sub_003A1988_0x3a1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1988_0x3a1988");
#endif

    ctx->pc = 0x3a1988u;

    // 0x3a1988: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a1988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a198c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3a198cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x3a1990: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x3a1990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3a1994: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1994u;
        // 0x3a1998: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A199Cu;
    // 0x3a199c: 0x0  nop
    ctx->pc = 0x3a199cu;
    // NOP
    ctx->pc = 0x3a19a0u;
}
