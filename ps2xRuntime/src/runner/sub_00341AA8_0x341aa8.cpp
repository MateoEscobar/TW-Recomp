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

// Function: sub_00341AA8
// Address: 0x341aa8 - 0x341ae0
void sub_00341AA8_0x341aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341AA8_0x341aa8");
#endif

    switch (ctx->pc) {
        case 0x341ac0u: goto label_341ac0;
        default: break;
    }

    ctx->pc = 0x341aa8u;

    // 0x341aa8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x341aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x341aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341AACu;
    {
        const bool branch_taken_0x341aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AACu;
        // 0x341ab0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341aac) {
            ctx->pc = 0x341AC0u;
            goto label_341ac0;
        }
    }
    ctx->pc = 0x341AB4u;
    // 0x341ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x341AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AB4u;
        // 0x341ab8: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341ABCu;
    // 0x341abc: 0x0  nop
    ctx->pc = 0x341abcu;
    // NOP
label_341ac0:
    // 0x341ac0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x341ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341ac4: 0x0  nop
    ctx->pc = 0x341ac4u;
    // NOP
    // 0x341ac8: 0x0  nop
    ctx->pc = 0x341ac8u;
    // NOP
    // 0x341acc: 0x0  nop
    ctx->pc = 0x341accu;
    // NOP
    // 0x341ad0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x341AD0u;
    {
        const bool branch_taken_0x341ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341ad0) {
            ctx->pc = 0x341AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341AD0u;
            // 0x341ad4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341ac0;
        }
    }
    ctx->pc = 0x341AD8u;
    // 0x341ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x341AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AD8u;
        // 0x341adc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341AE0u;
}
