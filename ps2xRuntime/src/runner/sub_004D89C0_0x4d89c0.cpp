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

// Function: sub_004D89C0
// Address: 0x4d89c0 - 0x4d89d0
void sub_004D89C0_0x4d89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D89C0_0x4d89c0");
#endif

    ctx->pc = 0x4d89c0u;

    // 0x4d89c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4d89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4d89c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D89C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D89C4u;
        // 0x4d89c8: 0x8c6269ec  lw          $v0, 0x69EC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D89C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D89CCu;
    // 0x4d89cc: 0x0  nop
    ctx->pc = 0x4d89ccu;
    // NOP
    ctx->pc = 0x4d89d0u;
}
