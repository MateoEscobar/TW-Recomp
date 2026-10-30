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

// Function: sub_001FE1C8
// Address: 0x1fe1c8 - 0x1fe1d8
void sub_001FE1C8_0x1fe1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE1C8_0x1fe1c8");
#endif

    ctx->pc = 0x1fe1c8u;

    // 0x1fe1c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fe1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fe1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1CCu;
        // 0x1fe1d0: 0x8c62f4e8  lw          $v0, -0xB18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964456)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1D4u;
    // 0x1fe1d4: 0x0  nop
    ctx->pc = 0x1fe1d4u;
    // NOP
    ctx->pc = 0x1fe1d8u;
}
