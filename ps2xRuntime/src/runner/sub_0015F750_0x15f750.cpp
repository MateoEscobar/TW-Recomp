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

// Function: sub_0015F750
// Address: 0x15f750 - 0x15f760
void sub_0015F750_0x15f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F750_0x15f750");
#endif

    ctx->pc = 0x15f750u;

    // 0x15f750: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15f754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f758: 0x3e00008  jr          $ra
    ctx->pc = 0x15F758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F758u;
        // 0x15f75c: 0xac62c7a0  sw          $v0, -0x3860($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F760u;
}
