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

// Function: sub_002C2F98
// Address: 0x2c2f98 - 0x2c2fb0
void sub_002C2F98_0x2c2f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2F98_0x2c2f98");
#endif

    ctx->pc = 0x2c2f98u;

    // 0x2c2f98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2f9c: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x2c2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x2c2fa0: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x2c2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x2c2fa4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2c2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c2fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FA8u;
        // 0x2c2fac: 0xac620144  sw          $v0, 0x144($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2FB0u;
}
