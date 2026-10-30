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

// Function: sub_004653D8
// Address: 0x4653d8 - 0x4653f8
void sub_004653D8_0x4653d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004653D8_0x4653d8");
#endif

    ctx->pc = 0x4653d8u;

    // 0x4653d8: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4653d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4653dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4653dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4653e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4653e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4653e4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4653E4u;
    {
        const bool branch_taken_0x4653e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4653E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4653E4u;
        // 0x4653e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4653e4) {
            ctx->pc = 0x4653F0u;
            goto label_4653f0;
        }
    }
    ctx->pc = 0x4653ECu;
    // 0x4653ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4653f0:
    // 0x4653f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4653F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4653F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4653F8u;
}
