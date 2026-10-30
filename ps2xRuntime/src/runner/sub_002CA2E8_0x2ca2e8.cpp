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

// Function: sub_002CA2E8
// Address: 0x2ca2e8 - 0x2ca310
void sub_002CA2E8_0x2ca2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA2E8_0x2ca2e8");
#endif

    switch (ctx->pc) {
        case 0x2ca2e8u: goto label_2ca2e8;
        case 0x2ca2ecu: goto label_2ca2ec;
        case 0x2ca2f0u: goto label_2ca2f0;
        case 0x2ca2f4u: goto label_2ca2f4;
        case 0x2ca2f8u: goto label_2ca2f8;
        case 0x2ca2fcu: goto label_2ca2fc;
        case 0x2ca300u: goto label_2ca300;
        case 0x2ca304u: goto label_2ca304;
        case 0x2ca308u: goto label_2ca308;
        case 0x2ca30cu: goto label_2ca30c;
        default: break;
    }

    ctx->pc = 0x2ca2e8u;

label_2ca2e8:
    // 0x2ca2e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ca2ec:
    // 0x2ca2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ca2f0:
    // 0x2ca2f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ca2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ca2f4:
    // 0x2ca2f4: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2ca2f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2ca2f8:
    // 0x2ca2f8: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ca2fc:
    // 0x2ca2fc: 0xa0f809  jalr        $a1
label_2ca300:
    if (ctx->pc == 0x2CA300u) {
        ctx->pc = 0x2CA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2FCu;
        // 0x2ca300: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA304u;
        goto label_2ca304;
    }
    ctx->pc = 0x2CA2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2CA304u);
        ctx->pc = 0x2CA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2FCu;
        // 0x2ca300: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA2FCu, 0x2CA304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA304u;
label_2ca304:
    // 0x2ca304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca308:
    // 0x2ca308: 0x3e00008  jr          $ra
label_2ca30c:
    if (ctx->pc == 0x2CA30Cu) {
        ctx->pc = 0x2CA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA308u;
        // 0x2ca30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA310u;
        goto label_fallthrough_0x2ca308;
    }
    ctx->pc = 0x2CA308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA308u;
        // 0x2ca30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ca308:
    ctx->pc = 0x2CA310u;
}
