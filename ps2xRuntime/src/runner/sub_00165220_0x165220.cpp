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

// Function: sub_00165220
// Address: 0x165220 - 0x165260
void sub_00165220_0x165220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165220_0x165220");
#endif

    switch (ctx->pc) {
        case 0x165228u: goto label_165228;
        default: break;
    }

    ctx->pc = 0x165220u;

    // 0x165220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165224: 0x2483015c  addiu       $v1, $a0, 0x15C
    ctx->pc = 0x165224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
label_165228:
    // 0x165228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16522c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16522Cu;
    {
        const bool branch_taken_0x16522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16522Cu;
        // 0x165230: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16522c) {
            ctx->pc = 0x165248u;
            goto label_165248;
        }
    }
    ctx->pc = 0x165234u;
    // 0x165234: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x165234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x165238: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x165238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x16523c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165240: 0x3e00008  jr          $ra
    ctx->pc = 0x165240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165240u;
        // 0x165244: 0xac82017c  sw          $v0, 0x17C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165248u;
label_165248:
    // 0x165248: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x165248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x16524c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16524Cu;
    {
        const bool branch_taken_0x16524c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16524Cu;
        // 0x165250: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16524c) {
            ctx->pc = 0x165228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165228;
        }
    }
    ctx->pc = 0x165254u;
    // 0x165254: 0x3e00008  jr          $ra
    ctx->pc = 0x165254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16525Cu;
    // 0x16525c: 0x0  nop
    ctx->pc = 0x16525cu;
    // NOP
    ctx->pc = 0x165260u;
}
