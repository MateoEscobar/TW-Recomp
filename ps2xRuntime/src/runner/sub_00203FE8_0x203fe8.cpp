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

// Function: sub_00203FE8
// Address: 0x203fe8 - 0x203ff8
void sub_00203FE8_0x203fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203FE8_0x203fe8");
#endif

    ctx->pc = 0x203fe8u;

    // 0x203fe8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x203fec: 0x3e00008  jr          $ra
    ctx->pc = 0x203FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FECu;
        // 0x203ff0: 0x8c62f5b0  lw          $v0, -0xA50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964656)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203FF4u;
    // 0x203ff4: 0x0  nop
    ctx->pc = 0x203ff4u;
    // NOP
    ctx->pc = 0x203ff8u;
}
