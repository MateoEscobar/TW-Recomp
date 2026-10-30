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

// Function: sub_001440A0
// Address: 0x1440a0 - 0x1440c8
void sub_001440A0_0x1440a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001440A0_0x1440a0");
#endif

    ctx->pc = 0x1440a0u;

    // 0x1440a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1440a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1440a4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1440a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1440a8: 0x8ca4b6d0  lw          $a0, -0x4930($a1)
    ctx->pc = 0x1440a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B6D0u));
    // 0x1440ac: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x1440acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
    // 0x1440b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1440b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1440b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1440b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1440b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1440b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1440bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1440bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1440c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1440C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1440C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440C0u;
        // 0x1440c4: 0xaca4b6d0  sw          $a0, -0x4930($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294948560), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1440C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1440C8u;
}
