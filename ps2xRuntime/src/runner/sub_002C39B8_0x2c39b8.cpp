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

// Function: sub_002C39B8
// Address: 0x2c39b8 - 0x2c39d0
void sub_002C39B8_0x2c39b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C39B8_0x2c39b8");
#endif

    ctx->pc = 0x2c39b8u;

    // 0x2c39b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2c39bc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2c39c0: 0x94830322  lhu         $v1, 0x322($a0)
    ctx->pc = 0x2c39c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 802)));
    // 0x2c39c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c39c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C39C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39C8u;
        // 0x2c39cc: 0xa4830322  sh          $v1, 0x322($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 802), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C39C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C39D0u;
}
