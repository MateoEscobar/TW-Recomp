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

// Function: sub_004F1F60
// Address: 0x4f1f60 - 0x4f1f88
void sub_004F1F60_0x4f1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1F60_0x4f1f60");
#endif

    switch (ctx->pc) {
        case 0x4f1f68u: goto label_4f1f68;
        default: break;
    }

    ctx->pc = 0x4f1f60u;

    // 0x4f1f60: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F1F60u;
    {
        const bool branch_taken_0x4f1f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1f60) {
            ctx->pc = 0x4F1F80u;
            goto label_4f1f80;
        }
    }
    ctx->pc = 0x4F1F68u;
label_4f1f68:
    // 0x4f1f68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1f6c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4f1f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4f1f70: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f1f74: 0x0  nop
    ctx->pc = 0x4f1f74u;
    // NOP
    // 0x4f1f78: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F1F78u;
    {
        const bool branch_taken_0x4f1f78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1F78u;
        // 0x4f1f7c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1f78) {
            ctx->pc = 0x4F1F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1f68;
        }
    }
    ctx->pc = 0x4F1F80u;
label_4f1f80:
    // 0x4f1f80: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1F80u;
        // 0x4f1f84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1F88u;
}
