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

// Function: sub_004F1F30
// Address: 0x4f1f30 - 0x4f1f60
void sub_004F1F30_0x4f1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1F30_0x4f1f30");
#endif

    switch (ctx->pc) {
        case 0x4f1f40u: goto label_4f1f40;
        default: break;
    }

    ctx->pc = 0x4f1f30u;

    // 0x4f1f30: 0x10850009  beq         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F1F30u;
    {
        const bool branch_taken_0x4f1f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x4f1f30) {
            ctx->pc = 0x4F1F58u;
            goto label_4f1f58;
        }
    }
    ctx->pc = 0x4F1F38u;
    // 0x4f1f38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1f3c: 0x0  nop
    ctx->pc = 0x4f1f3cu;
    // NOP
label_4f1f40:
    // 0x4f1f40: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f1f44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4f1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4f1f48: 0x0  nop
    ctx->pc = 0x4f1f48u;
    // NOP
    // 0x4f1f4c: 0x0  nop
    ctx->pc = 0x4f1f4cu;
    // NOP
    // 0x4f1f50: 0x5485fffb  bnel        $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F1F50u;
    {
        const bool branch_taken_0x4f1f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4f1f50) {
            ctx->pc = 0x4F1F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1F50u;
            // 0x4f1f54: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1f40;
        }
    }
    ctx->pc = 0x4F1F58u;
label_4f1f58:
    // 0x4f1f58: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1F60u;
}
