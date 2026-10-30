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

// Function: sub_002265D0
// Address: 0x2265d0 - 0x2265f0
void sub_002265D0_0x2265d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002265D0_0x2265d0");
#endif

    ctx->pc = 0x2265d0u;

    // 0x2265d0: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2265d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2265d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2265D4u;
    {
        const bool branch_taken_0x2265d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2265d4) {
            ctx->pc = 0x2265E8u;
            goto label_2265e8;
        }
    }
    ctx->pc = 0x2265DCu;
    // 0x2265dc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2265dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2265e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2265e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2265e4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2265e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2265e8:
    // 0x2265e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2265E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2265F0u;
}
