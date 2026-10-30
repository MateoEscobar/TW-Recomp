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

// Function: sub_0023A9A0
// Address: 0x23a9a0 - 0x23a9b8
void sub_0023A9A0_0x23a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A9A0_0x23a9a0");
#endif

    ctx->pc = 0x23a9a0u;

    // 0x23a9a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9A4u;
        // 0x23a9a8: 0xac440220  sw          $a0, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A9ACu;
    // 0x23a9ac: 0x0  nop
    ctx->pc = 0x23a9acu;
    // NOP
    // 0x23a9b0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23a9b4: 0x0  nop
    ctx->pc = 0x23a9b4u;
    // NOP
    ctx->pc = 0x23a9b8u;
}
