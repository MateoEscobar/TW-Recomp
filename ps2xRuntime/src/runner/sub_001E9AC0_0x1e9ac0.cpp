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

// Function: sub_001E9AC0
// Address: 0x1e9ac0 - 0x1e9ae8
void sub_001E9AC0_0x1e9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9AC0_0x1e9ac0");
#endif

    ctx->pc = 0x1e9ac0u;

    // 0x1e9ac0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9AC0u;
    {
        const bool branch_taken_0x1e9ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ac0) {
            ctx->pc = 0x1E9AD0u;
            goto label_1e9ad0;
        }
    }
    ctx->pc = 0x1E9AC8u;
    // 0x1e9ac8: 0xac8500b4  sw          $a1, 0xB4($a0)
    ctx->pc = 0x1e9ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
    // 0x1e9acc: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x1e9accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
label_1e9ad0:
    // 0x1e9ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9AD8u;
    // 0x1e9ad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9adc: 0x0  nop
    ctx->pc = 0x1e9adcu;
    // NOP
    // 0x1e9ae0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9ae4: 0x0  nop
    ctx->pc = 0x1e9ae4u;
    // NOP
    ctx->pc = 0x1e9ae8u;
}
