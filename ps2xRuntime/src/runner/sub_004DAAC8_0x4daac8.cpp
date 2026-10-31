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

// Function: sub_004DAAC8
// Address: 0x4daac8 - 0x4daaf8
void sub_004DAAC8_0x4daac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAAC8_0x4daac8");
#endif

    switch (ctx->pc) {
        case 0x4daac8u: goto label_4daac8;
        case 0x4daaccu: goto label_4daacc;
        case 0x4daad0u: goto label_4daad0;
        case 0x4daad4u: goto label_4daad4;
        case 0x4daad8u: goto label_4daad8;
        case 0x4daadcu: goto label_4daadc;
        case 0x4daae0u: goto label_4daae0;
        case 0x4daae4u: goto label_4daae4;
        case 0x4daae8u: goto label_4daae8;
        case 0x4daaecu: goto label_4daaec;
        case 0x4daaf0u: goto label_4daaf0;
        case 0x4daaf4u: goto label_4daaf4;
        default: break;
    }

    ctx->pc = 0x4daac8u;

label_4daac8:
    // 0x4daac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4daac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4daacc:
    // 0x4daacc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4daad0:
    // 0x4daad0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4daad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4daad4:
    // 0x4daad4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4daad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4daad8:
    // 0x4daad8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x4daad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_4daadc:
    // 0x4daadc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4daadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4daae0:
    // 0x4daae0: 0x40f809  jalr        $v0
label_4daae4:
    if (ctx->pc == 0x4DAAE4u) {
        ctx->pc = 0x4DAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAAE0u;
        // 0x4daae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DAAE8u;
        goto label_4daae8;
    }
    ctx->pc = 0x4DAAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DAAE8u);
        ctx->pc = 0x4DAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAAE0u;
        // 0x4daae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAAE0u, 0x4DAAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DAAE8u;
label_4daae8:
    // 0x4daae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4daae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4daaec:
    // 0x4daaec: 0x3e00008  jr          $ra
label_4daaf0:
    if (ctx->pc == 0x4DAAF0u) {
        ctx->pc = 0x4DAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAAECu;
        // 0x4daaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DAAF4u;
        goto label_4daaf4;
    }
    ctx->pc = 0x4DAAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAAECu;
        // 0x4daaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAAF4u;
label_4daaf4:
    // 0x4daaf4: 0x0  nop
    ctx->pc = 0x4daaf4u;
    // NOP
    ctx->pc = 0x4daaf8u;
}
