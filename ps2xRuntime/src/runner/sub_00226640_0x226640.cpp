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

// Function: sub_00226640
// Address: 0x226640 - 0x226660
void sub_00226640_0x226640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226640_0x226640");
#endif

    ctx->pc = 0x226640u;

    // 0x226640: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x226640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x226644: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x226644u;
    {
        const bool branch_taken_0x226644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226644) {
            ctx->pc = 0x226658u;
            goto label_226658;
        }
    }
    ctx->pc = 0x22664Cu;
    // 0x22664c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x22664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x226650: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x226650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x226654: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x226654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_226658:
    // 0x226658: 0x3e00008  jr          $ra
    ctx->pc = 0x226658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226660u;
}
