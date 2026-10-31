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

// Function: sub_001DB8E8
// Address: 0x1db8e8 - 0x1db918
void sub_001DB8E8_0x1db8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB8E8_0x1db8e8");
#endif

    switch (ctx->pc) {
        case 0x1db8f0u: goto label_1db8f0;
        default: break;
    }

    ctx->pc = 0x1db8e8u;

    // 0x1db8e8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB8E8u;
    {
        const bool branch_taken_0x1db8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8E8u;
        // 0x1db8ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8e8) {
            ctx->pc = 0x1DB910u;
            goto label_1db910;
        }
    }
    ctx->pc = 0x1DB8F0u;
label_1db8f0:
    // 0x1db8f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1db8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db8f4: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB8F4u;
    {
        const bool branch_taken_0x1db8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8F4u;
        // 0x1db8f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8f4) {
            ctx->pc = 0x1DB904u;
            goto label_1db904;
        }
    }
    ctx->pc = 0x1DB8FCu;
    // 0x1db8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8FCu;
        // 0x1db900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB904u;
label_1db904:
    // 0x1db904: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1db904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1db908: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DB908u;
    {
        const bool branch_taken_0x1db908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB908u;
        // 0x1db90c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db908) {
            ctx->pc = 0x1DB8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db8f0;
        }
    }
    ctx->pc = 0x1DB910u;
label_1db910:
    // 0x1db910: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB910u;
        // 0x1db914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB918u;
}
