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

// Function: sub_0010A1E0
// Address: 0x10a1e0 - 0x10a1f0
void sub_0010A1E0_0x10a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A1E0_0x10a1e0");
#endif

    ctx->pc = 0x10a1e0u;

    // 0x10a1e0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1E4u;
        // 0x10a1e8: 0x24426a98  addiu       $v0, $v0, 0x6A98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A1ECu;
    // 0x10a1ec: 0x0  nop
    ctx->pc = 0x10a1ecu;
    // NOP
    ctx->pc = 0x10a1f0u;
}
