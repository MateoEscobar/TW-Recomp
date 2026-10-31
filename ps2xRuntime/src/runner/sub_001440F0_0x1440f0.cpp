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

// Function: sub_001440F0
// Address: 0x1440f0 - 0x144120
void sub_001440F0_0x1440f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001440F0_0x1440f0");
#endif

    ctx->pc = 0x1440f0u;

    // 0x1440f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1440f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1440f4: 0x8c43b6d4  lw          $v1, -0x492C($v0)
    ctx->pc = 0x1440f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B6D4u));
    // 0x1440f8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1440F8u;
    {
        const bool branch_taken_0x1440f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1440FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440F8u;
        // 0x1440fc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440f8) {
            ctx->pc = 0x144114u;
            goto label_144114;
        }
    }
    ctx->pc = 0x144100u;
    // 0x144100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144104: 0x2442c5f0  addiu       $v0, $v0, -0x3A10
    ctx->pc = 0x144104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x144108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x144108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14410c: 0x3e00008  jr          $ra
    ctx->pc = 0x14410Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14410Cu;
        // 0x144110: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14410Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144114u;
label_144114:
    // 0x144114: 0x3e00008  jr          $ra
    ctx->pc = 0x144114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144114u;
        // 0x144118: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14411Cu;
    // 0x14411c: 0x0  nop
    ctx->pc = 0x14411cu;
    // NOP
    ctx->pc = 0x144120u;
}
