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

// Function: sub_0030DCB8
// Address: 0x30dcb8 - 0x30dce8
void sub_0030DCB8_0x30dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DCB8_0x30dcb8");
#endif

    switch (ctx->pc) {
        case 0x30dcb8u: goto label_30dcb8;
        case 0x30dcbcu: goto label_30dcbc;
        case 0x30dcc0u: goto label_30dcc0;
        case 0x30dcc4u: goto label_30dcc4;
        case 0x30dcc8u: goto label_30dcc8;
        case 0x30dcccu: goto label_30dccc;
        case 0x30dcd0u: goto label_30dcd0;
        case 0x30dcd4u: goto label_30dcd4;
        case 0x30dcd8u: goto label_30dcd8;
        case 0x30dcdcu: goto label_30dcdc;
        case 0x30dce0u: goto label_30dce0;
        case 0x30dce4u: goto label_30dce4;
        default: break;
    }

    ctx->pc = 0x30dcb8u;

label_30dcb8:
    // 0x30dcb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30dcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30dcbc:
    // 0x30dcbc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x30dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_30dcc0:
    // 0x30dcc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30dcc4:
    // 0x30dcc4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x30dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_30dcc8:
    // 0x30dcc8: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x30dcc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30dccc:
    // 0x30dccc: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x30dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30dcd0:
    // 0x30dcd0: 0xc0f809  jalr        $a2
label_30dcd4:
    if (ctx->pc == 0x30DCD4u) {
        ctx->pc = 0x30DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCD0u;
        // 0x30dcd4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DCD8u;
        goto label_30dcd8;
    }
    ctx->pc = 0x30DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x30DCD8u);
        ctx->pc = 0x30DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCD0u;
        // 0x30dcd4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DCD0u, 0x30DCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30DCD8u;
label_30dcd8:
    // 0x30dcd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30dcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30dcdc:
    // 0x30dcdc: 0x3e00008  jr          $ra
label_30dce0:
    if (ctx->pc == 0x30DCE0u) {
        ctx->pc = 0x30DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCDCu;
        // 0x30dce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DCE4u;
        goto label_30dce4;
    }
    ctx->pc = 0x30DCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCDCu;
        // 0x30dce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DCE4u;
label_30dce4:
    // 0x30dce4: 0x0  nop
    ctx->pc = 0x30dce4u;
    // NOP
    ctx->pc = 0x30dce8u;
}
