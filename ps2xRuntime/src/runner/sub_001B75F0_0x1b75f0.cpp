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

// Function: sub_001B75F0
// Address: 0x1b75f0 - 0x1b7608
void sub_001B75F0_0x1b75f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B75F0_0x1b75f0");
#endif

    ctx->pc = 0x1b75f0u;

    // 0x1b75f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b75f4: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x1b75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
    // 0x1b75f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b75f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x50D640u));
    // 0x1b75fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B75FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75FCu;
        // 0x1b7600: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7604u;
    // 0x1b7604: 0x0  nop
    ctx->pc = 0x1b7604u;
    // NOP
    ctx->pc = 0x1b7608u;
}
