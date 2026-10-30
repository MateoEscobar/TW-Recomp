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

// Function: sub_00207DA0
// Address: 0x207da0 - 0x207dd0
void sub_00207DA0_0x207da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207DA0_0x207da0");
#endif

    switch (ctx->pc) {
        case 0x207da0u: goto label_207da0;
        case 0x207da4u: goto label_207da4;
        case 0x207da8u: goto label_207da8;
        case 0x207dacu: goto label_207dac;
        case 0x207db0u: goto label_207db0;
        case 0x207db4u: goto label_207db4;
        case 0x207db8u: goto label_207db8;
        case 0x207dbcu: goto label_207dbc;
        case 0x207dc0u: goto label_207dc0;
        case 0x207dc4u: goto label_207dc4;
        case 0x207dc8u: goto label_207dc8;
        case 0x207dccu: goto label_207dcc;
        default: break;
    }

    ctx->pc = 0x207da0u;

label_207da0:
    // 0x207da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_207da4:
    // 0x207da4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_207da8:
    // 0x207da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207dac:
    // 0x207dac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207db0:
    // 0x207db0: 0xac40ecc0  sw          $zero, -0x1340($v0)
    ctx->pc = 0x207db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962368), GPR_U32(ctx, 0));
label_207db4:
    // 0x207db4: 0x84650068  lh          $a1, 0x68($v1)
    ctx->pc = 0x207db4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_207db8:
    // 0x207db8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_207dbc:
    // 0x207dbc: 0x40f809  jalr        $v0
label_207dc0:
    if (ctx->pc == 0x207DC0u) {
        ctx->pc = 0x207DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DBCu;
        // 0x207dc0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207DC4u;
        goto label_207dc4;
    }
    ctx->pc = 0x207DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207DC4u);
        ctx->pc = 0x207DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DBCu;
        // 0x207dc0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DBCu, 0x207DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207DC4u;
label_207dc4:
    // 0x207dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207dc8:
    // 0x207dc8: 0x3e00008  jr          $ra
label_207dcc:
    if (ctx->pc == 0x207DCCu) {
        ctx->pc = 0x207DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DC8u;
        // 0x207dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207DD0u;
        goto label_fallthrough_0x207dc8;
    }
    ctx->pc = 0x207DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DC8u;
        // 0x207dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x207dc8:
    ctx->pc = 0x207DD0u;
}
