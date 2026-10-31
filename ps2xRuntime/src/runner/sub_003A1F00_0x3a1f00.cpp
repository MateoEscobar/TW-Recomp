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

// Function: sub_003A1F00
// Address: 0x3a1f00 - 0x3a1f20
void sub_003A1F00_0x3a1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1F00_0x3a1f00");
#endif

    ctx->pc = 0x3a1f00u;

    // 0x3a1f00: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x3a1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3a1f04: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x3a1f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
    // 0x3a1f08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1F08u;
    {
        const bool branch_taken_0x3a1f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F08u;
        // 0x3a1f0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f08) {
            ctx->pc = 0x3A1F18u;
            goto label_3a1f18;
        }
    }
    ctx->pc = 0x3A1F10u;
    // 0x3a1f10: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F10u;
        // 0x3a1f14: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1F18u;
label_3a1f18:
    // 0x3a1f18: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F18u;
        // 0x3a1f1c: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1F20u;
}
