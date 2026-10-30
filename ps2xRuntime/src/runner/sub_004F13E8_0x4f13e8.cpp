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

// Function: sub_004F13E8
// Address: 0x4f13e8 - 0x4f1418
void sub_004F13E8_0x4f13e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F13E8_0x4f13e8");
#endif

    switch (ctx->pc) {
        case 0x4f13e8u: goto label_4f13e8;
        case 0x4f13ecu: goto label_4f13ec;
        case 0x4f13f0u: goto label_4f13f0;
        case 0x4f13f4u: goto label_4f13f4;
        case 0x4f13f8u: goto label_4f13f8;
        case 0x4f13fcu: goto label_4f13fc;
        case 0x4f1400u: goto label_4f1400;
        case 0x4f1404u: goto label_4f1404;
        case 0x4f1408u: goto label_4f1408;
        case 0x4f140cu: goto label_4f140c;
        case 0x4f1410u: goto label_4f1410;
        case 0x4f1414u: goto label_4f1414;
        default: break;
    }

    ctx->pc = 0x4f13e8u;

label_4f13e8:
    // 0x4f13e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f13e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f13ec:
    // 0x4f13ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f13ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f13f0:
    // 0x4f13f0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4f13f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f13f4:
    // 0x4f13f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f13f8:
    // 0x4f13f8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x4f13f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_4f13fc:
    // 0x4f13fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4f13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4f1400:
    // 0x4f1400: 0x40f809  jalr        $v0
label_4f1404:
    if (ctx->pc == 0x4F1404u) {
        ctx->pc = 0x4F1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1400u;
        // 0x4f1404: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1408u;
        goto label_4f1408;
    }
    ctx->pc = 0x4F1400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1408u);
        ctx->pc = 0x4F1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1400u;
        // 0x4f1404: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1400u, 0x4F1408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1408u;
label_4f1408:
    // 0x4f1408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f140c:
    // 0x4f140c: 0x3e00008  jr          $ra
label_4f1410:
    if (ctx->pc == 0x4F1410u) {
        ctx->pc = 0x4F1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F140Cu;
        // 0x4f1410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1414u;
        goto label_4f1414;
    }
    ctx->pc = 0x4F140Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F140Cu;
        // 0x4f1410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F140Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1414u;
label_4f1414:
    // 0x4f1414: 0x0  nop
    ctx->pc = 0x4f1414u;
    // NOP
    ctx->pc = 0x4f1418u;
}
