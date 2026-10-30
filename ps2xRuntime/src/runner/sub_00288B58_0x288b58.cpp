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

// Function: sub_00288B58
// Address: 0x288b58 - 0x288b70
void sub_00288B58_0x288b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B58_0x288b58");
#endif

    ctx->pc = 0x288b58u;

    // 0x288b58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x288b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x288b5c: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x288b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x288b60: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x288b60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x288b64: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x288b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x288b68: 0x3e00008  jr          $ra
    ctx->pc = 0x288B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B68u;
        // 0x288b6c: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B70u;
}
