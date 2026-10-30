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

// Function: sub_0041C2A0
// Address: 0x41c2a0 - 0x41c2b0
void sub_0041C2A0_0x41c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C2A0_0x41c2a0");
#endif

    ctx->pc = 0x41c2a0u;

    // 0x41c2a0: 0x94820322  lhu         $v0, 0x322($a0)
    ctx->pc = 0x41c2a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 802)));
    // 0x41c2a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x41c2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x41C2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2A8u;
        // 0x41c2ac: 0xa4820322  sh          $v0, 0x322($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 802), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C2B0u;
}
