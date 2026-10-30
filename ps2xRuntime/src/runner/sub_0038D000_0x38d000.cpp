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

// Function: sub_0038D000
// Address: 0x38d000 - 0x38d020
void sub_0038D000_0x38d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D000_0x38d000");
#endif

    ctx->pc = 0x38d000u;

    // 0x38d000: 0x8c8311e0  lw          $v1, 0x11E0($a0)
    ctx->pc = 0x38d000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4576)));
    // 0x38d004: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38d008: 0x240405f0  addiu       $a0, $zero, 0x5F0
    ctx->pc = 0x38d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38d00c: 0x2442e4c0  addiu       $v0, $v0, -0x1B40
    ctx->pc = 0x38d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
    // 0x38d010: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x38d010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38d014: 0x3e00008  jr          $ra
    ctx->pc = 0x38D014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D014u;
        // 0x38d018: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D01Cu;
    // 0x38d01c: 0x0  nop
    ctx->pc = 0x38d01cu;
    // NOP
    ctx->pc = 0x38d020u;
}
