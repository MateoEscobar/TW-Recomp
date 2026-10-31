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

// Function: sub_0015E718
// Address: 0x15e718 - 0x15e748
void sub_0015E718_0x15e718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E718_0x15e718");
#endif

    ctx->pc = 0x15e718u;

    // 0x15e718: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15e71c: 0x8c43c784  lw          $v1, -0x387C($v0)
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C784u));
    // 0x15e720: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E720u;
    {
        const bool branch_taken_0x15e720 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x15E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E720u;
        // 0x15e724: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e720) {
            ctx->pc = 0x15E73Cu;
            goto label_15e73c;
        }
    }
    ctx->pc = 0x15E728u;
    // 0x15e728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e72c: 0x244266a0  addiu       $v0, $v0, 0x66A0
    ctx->pc = 0x15e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26272));
    // 0x15e730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15e730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e734: 0x3e00008  jr          $ra
    ctx->pc = 0x15E734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E734u;
        // 0x15e738: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E73Cu;
label_15e73c:
    // 0x15e73c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E73Cu;
        // 0x15e740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E744u;
    // 0x15e744: 0x0  nop
    ctx->pc = 0x15e744u;
    // NOP
    ctx->pc = 0x15e748u;
}
