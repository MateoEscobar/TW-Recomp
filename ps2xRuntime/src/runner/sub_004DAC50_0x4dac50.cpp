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

// Function: sub_004DAC50
// Address: 0x4dac50 - 0x4dac60
void sub_004DAC50_0x4dac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAC50_0x4dac50");
#endif

    ctx->pc = 0x4dac50u;

    // 0x4dac50: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAC50u;
        // 0x4dac54: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAC58u;
    // 0x4dac58: 0x7c820220  sq          $v0, 0x220($a0)
    ctx->pc = 0x4dac58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 544), GPR_VEC(ctx, 2));
    // 0x4dac5c: 0x0  nop
    ctx->pc = 0x4dac5cu;
    // NOP
    ctx->pc = 0x4dac60u;
}
