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

// Function: sub_004B04B8
// Address: 0x4b04b8 - 0x4b04d0
void sub_004B04B8_0x4b04b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B04B8_0x4b04b8");
#endif

    ctx->pc = 0x4b04b8u;

    // 0x4b04b8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4b04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4b04bc: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x4b04bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4b04c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b04c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B04C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B04C4u;
        // 0x4b04c8: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B04C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B04CCu;
    // 0x4b04cc: 0x0  nop
    ctx->pc = 0x4b04ccu;
    // NOP
    ctx->pc = 0x4b04d0u;
}
