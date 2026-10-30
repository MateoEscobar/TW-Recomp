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

// Function: sub_00144120
// Address: 0x144120 - 0x144148
void sub_00144120_0x144120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144120_0x144120");
#endif

    ctx->pc = 0x144120u;

    // 0x144120: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x144120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x144124: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x144124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x144128: 0x8ca2b6d4  lw          $v0, -0x492C($a1)
    ctx->pc = 0x144128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B6D4u));
    // 0x14412c: 0x2484a5f0  addiu       $a0, $a0, -0x5A10
    ctx->pc = 0x14412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944240));
    // 0x144130: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x144130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144134: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14413c: 0xaca2b6d4  sw          $v0, -0x492C($a1)
    ctx->pc = 0x14413cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294948564), GPR_U32(ctx, 2));
    // 0x144140: 0x3e00008  jr          $ra
    ctx->pc = 0x144140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144140u;
        // 0x144144: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144148u;
}
