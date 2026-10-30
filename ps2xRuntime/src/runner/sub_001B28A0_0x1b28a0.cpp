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

// Function: sub_001B28A0
// Address: 0x1b28a0 - 0x1b28b8
void sub_001B28A0_0x1b28a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B28A0_0x1b28a0");
#endif

    ctx->pc = 0x1b28a0u;

    // 0x1b28a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b28a4: 0x344225d0  ori         $v0, $v0, 0x25D0
    ctx->pc = 0x1b28a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9680);
    // 0x1b28a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b28ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b28acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b28b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B28B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28B0u;
        // 0x1b28b4: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B28B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B28B8u;
}
