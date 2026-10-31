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

// Function: sub_004F1200
// Address: 0x4f1200 - 0x4f1210
void sub_004F1200_0x4f1200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1200_0x4f1200");
#endif

    ctx->pc = 0x4f1200u;

    // 0x4f1200: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4f1200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f1204: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1204u;
        // 0x4f1208: 0x7c820050  sq          $v0, 0x50($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F120Cu;
    // 0x4f120c: 0x0  nop
    ctx->pc = 0x4f120cu;
    // NOP
    ctx->pc = 0x4f1210u;
}
