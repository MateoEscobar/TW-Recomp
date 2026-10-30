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

// Function: sub_002911A8
// Address: 0x2911a8 - 0x2911d8
void sub_002911A8_0x2911a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002911A8_0x2911a8");
#endif

    switch (ctx->pc) {
        case 0x2911b0u: goto label_2911b0;
        default: break;
    }

    ctx->pc = 0x2911a8u;

    // 0x2911a8: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x2911a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x2911ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2911acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2911b0:
    // 0x2911b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2911b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2911b4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2911B4u;
    {
        const bool branch_taken_0x2911b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2911B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911B4u;
        // 0x2911b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911b4) {
            ctx->pc = 0x2911C4u;
            goto label_2911c4;
        }
    }
    ctx->pc = 0x2911BCu;
    // 0x2911bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2911BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911BCu;
        // 0x2911c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911C4u;
label_2911c4:
    // 0x2911c4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2911c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2911c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2911C8u;
    {
        const bool branch_taken_0x2911c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2911CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911C8u;
        // 0x2911cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911c8) {
            ctx->pc = 0x2911B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2911b0;
        }
    }
    ctx->pc = 0x2911D0u;
    // 0x2911d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2911D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2911D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911D0u;
        // 0x2911d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911D8u;
}
