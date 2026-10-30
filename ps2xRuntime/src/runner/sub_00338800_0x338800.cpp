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

// Function: sub_00338800
// Address: 0x338800 - 0x338830
void sub_00338800_0x338800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338800_0x338800");
#endif

    switch (ctx->pc) {
        case 0x338800u: goto label_338800;
        case 0x338804u: goto label_338804;
        case 0x338808u: goto label_338808;
        case 0x33880cu: goto label_33880c;
        case 0x338810u: goto label_338810;
        case 0x338814u: goto label_338814;
        case 0x338818u: goto label_338818;
        case 0x33881cu: goto label_33881c;
        case 0x338820u: goto label_338820;
        case 0x338824u: goto label_338824;
        case 0x338828u: goto label_338828;
        case 0x33882cu: goto label_33882c;
        default: break;
    }

    ctx->pc = 0x338800u;

label_338800:
    // 0x338800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_338804:
    // 0x338804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338808:
    // 0x338808: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x338808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33880c:
    // 0x33880c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338810:
    // 0x338810: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x338810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_338814:
    // 0x338814: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x338814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_338818:
    // 0x338818: 0x60f809  jalr        $v1
label_33881c:
    if (ctx->pc == 0x33881Cu) {
        ctx->pc = 0x33881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338818u;
        // 0x33881c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338820u;
        goto label_338820;
    }
    ctx->pc = 0x338818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338820u);
        ctx->pc = 0x33881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338818u;
        // 0x33881c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338818u, 0x338820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338820u;
label_338820:
    // 0x338820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338824:
    // 0x338824: 0x3e00008  jr          $ra
label_338828:
    if (ctx->pc == 0x338828u) {
        ctx->pc = 0x338828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338824u;
        // 0x338828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33882Cu;
        goto label_33882c;
    }
    ctx->pc = 0x338824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338824u;
        // 0x338828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33882Cu;
label_33882c:
    // 0x33882c: 0x0  nop
    ctx->pc = 0x33882cu;
    // NOP
    ctx->pc = 0x338830u;
}
