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

// Function: sub_002FE720
// Address: 0x2fe720 - 0x2fe740
void sub_002FE720_0x2fe720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE720_0x2fe720");
#endif

    ctx->pc = 0x2fe720u;

    // 0x2fe720: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2fe720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x2fe724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe728: 0x8cc5b734  lw          $a1, -0x48CC($a2)
    ctx->pc = 0x2fe728u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x2fe72c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2fe72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2fe730: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x2fe730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x2fe734: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE734u;
        // 0x2fe738: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE73Cu;
    // 0x2fe73c: 0x0  nop
    ctx->pc = 0x2fe73cu;
    // NOP
    ctx->pc = 0x2fe740u;
}
