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

// Function: sub_0030A680
// Address: 0x30a680 - 0x30a6c0
void sub_0030A680_0x30a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A680_0x30a680");
#endif

    switch (ctx->pc) {
        case 0x30a690u: goto label_30a690;
        default: break;
    }

    ctx->pc = 0x30a680u;

    // 0x30a680: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x30a684: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x30a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x30a688: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x30a688u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x30a68c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30a68cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a690:
    // 0x30a690: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a694: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A694u;
    {
        const bool branch_taken_0x30a694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x30A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A694u;
        // 0x30a698: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a694) {
            ctx->pc = 0x30A6A4u;
            goto label_30a6a4;
        }
    }
    ctx->pc = 0x30A69Cu;
    // 0x30a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A69Cu;
        // 0x30a6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A6A4u;
label_30a6a4:
    // 0x30a6a4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x30a6a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30a6a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30A6A8u;
    {
        const bool branch_taken_0x30a6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6A8u;
        // 0x30a6ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6a8) {
            ctx->pc = 0x30A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a690;
        }
    }
    ctx->pc = 0x30A6B0u;
    // 0x30a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6B0u;
        // 0x30a6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A6B8u;
    // 0x30a6b8: 0x0  nop
    ctx->pc = 0x30a6b8u;
    // NOP
    // 0x30a6bc: 0x0  nop
    ctx->pc = 0x30a6bcu;
    // NOP
    ctx->pc = 0x30a6c0u;
}
