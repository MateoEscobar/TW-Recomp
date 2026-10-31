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

// Function: sub_0010BD90
// Address: 0x10bd90 - 0x10bdb0
void sub_0010BD90_0x10bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BD90_0x10bd90");
#endif

    ctx->pc = 0x10bd90u;

    // 0x10bd90: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x10bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x10bd94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BD94u;
    {
        const bool branch_taken_0x10bd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bd94) {
            ctx->pc = 0x10BDA4u;
            goto label_10bda4;
        }
    }
    ctx->pc = 0x10BD9Cu;
    // 0x10bd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD9Cu;
        // 0x10bda0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BDA4u;
label_10bda4:
    // 0x10bda4: 0x3e00008  jr          $ra
    ctx->pc = 0x10BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDA4u;
        // 0x10bda8: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BDACu;
    // 0x10bdac: 0x0  nop
    ctx->pc = 0x10bdacu;
    // NOP
    ctx->pc = 0x10bdb0u;
}
