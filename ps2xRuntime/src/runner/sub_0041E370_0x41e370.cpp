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

// Function: sub_0041E370
// Address: 0x41e370 - 0x41e398
void sub_0041E370_0x41e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E370_0x41e370");
#endif

    ctx->pc = 0x41e370u;

    // 0x41e370: 0x2ca20017  sltiu       $v0, $a1, 0x17
    ctx->pc = 0x41e370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x41e374: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41E374u;
    {
        const bool branch_taken_0x41e374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E374u;
        // 0x41e378: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e374) {
            ctx->pc = 0x41E384u;
            goto label_41e384;
        }
    }
    ctx->pc = 0x41E37Cu;
    // 0x41e37c: 0x3e00008  jr          $ra
    ctx->pc = 0x41E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E37Cu;
        // 0x41e380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E384u;
label_41e384:
    // 0x41e384: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x41e384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41e388: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x41e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41e38c: 0x3e00008  jr          $ra
    ctx->pc = 0x41E38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E38Cu;
        // 0x41e390: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E394u;
    // 0x41e394: 0x0  nop
    ctx->pc = 0x41e394u;
    // NOP
    ctx->pc = 0x41e398u;
}
