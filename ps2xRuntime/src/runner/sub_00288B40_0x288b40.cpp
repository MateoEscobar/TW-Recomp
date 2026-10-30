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

// Function: sub_00288B40
// Address: 0x288b40 - 0x288b58
void sub_00288B40_0x288b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B40_0x288b40");
#endif

    ctx->pc = 0x288b40u;

    // 0x288b40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x288b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x288b44: 0x8c46b734  lw          $a2, -0x48CC($v0)
    ctx->pc = 0x288b44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B734u));
    // 0x288b48: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x288b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x288b4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x288b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x288b50: 0x3e00008  jr          $ra
    ctx->pc = 0x288B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B50u;
        // 0x288b54: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B58u;
}
