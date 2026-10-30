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

// Function: sub_00251070
// Address: 0x251070 - 0x2510a8
void sub_00251070_0x251070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251070_0x251070");
#endif

    switch (ctx->pc) {
        case 0x251080u: goto label_251080;
        default: break;
    }

    ctx->pc = 0x251070u;

    // 0x251070: 0x84a60014  lh          $a2, 0x14($a1)
    ctx->pc = 0x251070u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x251074: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x251074u;
    {
        const bool branch_taken_0x251074 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x251078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251074u;
        // 0x251078: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251074) {
            ctx->pc = 0x2510A0u;
            goto label_2510a0;
        }
    }
    ctx->pc = 0x25107Cu;
    // 0x25107c: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x25107cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_251080:
    // 0x251080: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x251080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251084: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251084u;
    {
        const bool branch_taken_0x251084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x251088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251084u;
        // 0x251088: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251084) {
            ctx->pc = 0x251094u;
            goto label_251094;
        }
    }
    ctx->pc = 0x25108Cu;
    // 0x25108c: 0x3e00008  jr          $ra
    ctx->pc = 0x25108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25108Cu;
        // 0x251090: 0x94a20004  lhu         $v0, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25108Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251094u;
label_251094:
    // 0x251094: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x251094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x251098: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x251098u;
    {
        const bool branch_taken_0x251098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251098u;
        // 0x25109c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251098) {
            ctx->pc = 0x251080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251080;
        }
    }
    ctx->pc = 0x2510A0u;
label_2510a0:
    // 0x2510a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2510A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510A0u;
        // 0x2510a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2510A8u;
}
