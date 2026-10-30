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

// Function: sub_002CB520
// Address: 0x2cb520 - 0x2cb538
void sub_002CB520_0x2cb520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB520_0x2cb520");
#endif

    ctx->pc = 0x2cb520u;

    // 0x2cb520: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cb520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2cb524: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb528: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2cb528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2cb52c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB52Cu;
        // 0x2cb530: 0xa0640411  sb          $a0, 0x411($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1041), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB534u;
    // 0x2cb534: 0x0  nop
    ctx->pc = 0x2cb534u;
    // NOP
    ctx->pc = 0x2cb538u;
}
