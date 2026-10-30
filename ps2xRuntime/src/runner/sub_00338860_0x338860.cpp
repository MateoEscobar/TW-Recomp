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

// Function: sub_00338860
// Address: 0x338860 - 0x338890
void sub_00338860_0x338860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338860_0x338860");
#endif

    switch (ctx->pc) {
        case 0x338860u: goto label_338860;
        case 0x338864u: goto label_338864;
        case 0x338868u: goto label_338868;
        case 0x33886cu: goto label_33886c;
        case 0x338870u: goto label_338870;
        case 0x338874u: goto label_338874;
        case 0x338878u: goto label_338878;
        case 0x33887cu: goto label_33887c;
        case 0x338880u: goto label_338880;
        case 0x338884u: goto label_338884;
        case 0x338888u: goto label_338888;
        case 0x33888cu: goto label_33888c;
        default: break;
    }

    ctx->pc = 0x338860u;

label_338860:
    // 0x338860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_338864:
    // 0x338864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338868:
    // 0x338868: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x338868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33886c:
    // 0x33886c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_338870:
    // 0x338870: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x338870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_338874:
    // 0x338874: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x338874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_338878:
    // 0x338878: 0x40f809  jalr        $v0
label_33887c:
    if (ctx->pc == 0x33887Cu) {
        ctx->pc = 0x33887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338878u;
        // 0x33887c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338880u;
        goto label_338880;
    }
    ctx->pc = 0x338878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338880u);
        ctx->pc = 0x33887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338878u;
        // 0x33887c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338878u, 0x338880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338880u;
label_338880:
    // 0x338880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338884:
    // 0x338884: 0x3e00008  jr          $ra
label_338888:
    if (ctx->pc == 0x338888u) {
        ctx->pc = 0x338888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338884u;
        // 0x338888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33888Cu;
        goto label_33888c;
    }
    ctx->pc = 0x338884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338884u;
        // 0x338888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33888Cu;
label_33888c:
    // 0x33888c: 0x0  nop
    ctx->pc = 0x33888cu;
    // NOP
    ctx->pc = 0x338890u;
}
