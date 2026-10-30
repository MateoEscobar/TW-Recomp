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

// Function: sub_00418AA8
// Address: 0x418aa8 - 0x418ac8
void sub_00418AA8_0x418aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418AA8_0x418aa8");
#endif

    ctx->pc = 0x418aa8u;

    // 0x418aa8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x418aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x418aac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418ab0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x418ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x418ab4: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x418ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x418ab8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x418ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x418abc: 0xac860448  sw          $a2, 0x448($a0)
    ctx->pc = 0x418abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1096), GPR_U32(ctx, 6));
    // 0x418ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x418AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AC0u;
        // 0x418ac4: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418AC8u;
}
