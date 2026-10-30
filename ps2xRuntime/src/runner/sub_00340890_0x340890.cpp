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

// Function: sub_00340890
// Address: 0x340890 - 0x3408d8
void sub_00340890_0x340890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340890_0x340890");
#endif

    switch (ctx->pc) {
        case 0x3408a8u: goto label_3408a8;
        default: break;
    }

    ctx->pc = 0x340890u;

    // 0x340890: 0x3402f4e0  ori         $v0, $zero, 0xF4E0
    ctx->pc = 0x340890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62688);
    // 0x340894: 0x3403f4e4  ori         $v1, $zero, 0xF4E4
    ctx->pc = 0x340894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62692);
    // 0x340898: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x340898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34089c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x34089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3408a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3408a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408a4: 0x0  nop
    ctx->pc = 0x3408a4u;
    // NOP
label_3408a8:
    // 0x3408a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3408a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3408ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3408ACu;
    {
        const bool branch_taken_0x3408ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3408B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408ACu;
        // 0x3408b0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3408ac) {
            ctx->pc = 0x3408BCu;
            goto label_3408bc;
        }
    }
    ctx->pc = 0x3408B4u;
    // 0x3408b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3408B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3408B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408B4u;
        // 0x3408b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3408B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3408BCu;
label_3408bc:
    // 0x3408bc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3408bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3408c0: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x3408c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x3408c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3408C4u;
    {
        const bool branch_taken_0x3408c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3408C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408C4u;
        // 0x3408c8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3408c4) {
            ctx->pc = 0x3408A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3408a8;
        }
    }
    ctx->pc = 0x3408CCu;
    // 0x3408cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3408CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3408D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408CCu;
        // 0x3408d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3408CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3408D4u;
    // 0x3408d4: 0x0  nop
    ctx->pc = 0x3408d4u;
    // NOP
    ctx->pc = 0x3408d8u;
}
