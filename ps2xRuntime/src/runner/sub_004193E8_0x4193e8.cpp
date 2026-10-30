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

// Function: sub_004193E8
// Address: 0x4193e8 - 0x4193f8
void sub_004193E8_0x4193e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004193E8_0x4193e8");
#endif

    ctx->pc = 0x4193e8u;

    // 0x4193e8: 0xac870258  sw          $a3, 0x258($a0)
    ctx->pc = 0x4193e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 7));
    // 0x4193ec: 0xac850250  sw          $a1, 0x250($a0)
    ctx->pc = 0x4193ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 5));
    // 0x4193f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4193F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4193F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193F0u;
        // 0x4193f4: 0xac860254  sw          $a2, 0x254($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4193F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4193F8u;
}
