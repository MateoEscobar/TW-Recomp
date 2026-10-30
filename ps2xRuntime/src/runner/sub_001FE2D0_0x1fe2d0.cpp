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

// Function: sub_001FE2D0
// Address: 0x1fe2d0 - 0x1fe2e8
void sub_001FE2D0_0x1fe2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2D0_0x1fe2d0");
#endif

    ctx->pc = 0x1fe2d0u;

    // 0x1fe2d0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe2d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fe2d8: 0x2442ee90  addiu       $v0, $v0, -0x1170
    ctx->pc = 0x1fe2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x1fe2dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fe2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fe2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2E0u;
        // 0x1fe2e4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2E8u;
}
