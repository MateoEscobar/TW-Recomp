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

// Function: sub_003A1540
// Address: 0x3a1540 - 0x3a1558
void sub_003A1540_0x3a1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1540_0x3a1540");
#endif

    ctx->pc = 0x3a1540u;

    // 0x3a1540: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a1540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a1544: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3a1544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a1548: 0x8c640850  lw          $a0, 0x850($v1)
    ctx->pc = 0x3a1548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
    // 0x3a154c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A154Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A154Cu;
        // 0x3a1550: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A154Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1554u;
    // 0x3a1554: 0x0  nop
    ctx->pc = 0x3a1554u;
    // NOP
    ctx->pc = 0x3a1558u;
}
