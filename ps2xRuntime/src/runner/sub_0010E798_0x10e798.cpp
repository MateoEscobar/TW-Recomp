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

// Function: sub_0010E798
// Address: 0x10e798 - 0x10e7b8
void sub_0010E798_0x10e798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E798_0x10e798");
#endif

    ctx->pc = 0x10e798u;

    // 0x10e798: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E798u;
    {
        const bool branch_taken_0x10e798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E798u;
        // 0x10e79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e798) {
            ctx->pc = 0x10E7B0u;
            goto label_10e7b0;
        }
    }
    ctx->pc = 0x10E7A0u;
    // 0x10e7a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e7a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E7A4u;
    {
        const bool branch_taken_0x10e7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7A4u;
        // 0x10e7a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7a4) {
            ctx->pc = 0x10E7B0u;
            goto label_10e7b0;
        }
    }
    ctx->pc = 0x10E7ACu;
    // 0x10e7ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e7b0:
    // 0x10e7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E7B8u;
}
