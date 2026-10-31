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

// Function: sub_001FBA98
// Address: 0x1fba98 - 0x1fbac0
void sub_001FBA98_0x1fba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBA98_0x1fba98");
#endif

    switch (ctx->pc) {
        case 0x1fba98u: goto label_1fba98;
        case 0x1fba9cu: goto label_1fba9c;
        case 0x1fbaa0u: goto label_1fbaa0;
        case 0x1fbaa4u: goto label_1fbaa4;
        case 0x1fbaa8u: goto label_1fbaa8;
        case 0x1fbaacu: goto label_1fbaac;
        case 0x1fbab0u: goto label_1fbab0;
        case 0x1fbab4u: goto label_1fbab4;
        case 0x1fbab8u: goto label_1fbab8;
        case 0x1fbabcu: goto label_1fbabc;
        default: break;
    }

    ctx->pc = 0x1fba98u;

label_1fba98:
    // 0x1fba98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fba98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fba9c:
    // 0x1fba9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbaa0:
    // 0x1fbaa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fbaa4:
    // 0x1fbaa4: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1fbaa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fbaa8:
    // 0x1fbaa8: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1fbaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fbaac:
    // 0x1fbaac: 0xa0f809  jalr        $a1
label_1fbab0:
    if (ctx->pc == 0x1FBAB0u) {
        ctx->pc = 0x1FBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAACu;
        // 0x1fbab0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBAB4u;
        goto label_1fbab4;
    }
    ctx->pc = 0x1FBAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1FBAB4u);
        ctx->pc = 0x1FBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAACu;
        // 0x1fbab0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBAACu, 0x1FBAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBAB4u;
label_1fbab4:
    // 0x1fbab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbab8:
    // 0x1fbab8: 0x3e00008  jr          $ra
label_1fbabc:
    if (ctx->pc == 0x1FBABCu) {
        ctx->pc = 0x1FBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAB8u;
        // 0x1fbabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBAC0u;
        goto label_fallthrough_0x1fbab8;
    }
    ctx->pc = 0x1FBAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAB8u;
        // 0x1fbabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fbab8:
    ctx->pc = 0x1FBAC0u;
}
