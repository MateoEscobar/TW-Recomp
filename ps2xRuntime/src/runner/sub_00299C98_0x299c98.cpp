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

// Function: sub_00299C98
// Address: 0x299c98 - 0x299cc0
void sub_00299C98_0x299c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299C98_0x299c98");
#endif

    ctx->pc = 0x299c98u;

    // 0x299c98: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x299c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x299c9c: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299C9Cu;
    {
        const bool branch_taken_0x299c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x299c9c) {
            ctx->pc = 0x299CB0u;
            goto label_299cb0;
        }
    }
    ctx->pc = 0x299CA4u;
    // 0x299ca4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x299ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x299ca8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299CA8u;
    {
        const bool branch_taken_0x299ca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x299ca8) {
            ctx->pc = 0x299CB8u;
            goto label_299cb8;
        }
    }
    ctx->pc = 0x299CB0u;
label_299cb0:
    // 0x299cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x299CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CB0u;
        // 0x299cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299CB8u;
label_299cb8:
    // 0x299cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x299CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CB8u;
        // 0x299cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299CC0u;
}
