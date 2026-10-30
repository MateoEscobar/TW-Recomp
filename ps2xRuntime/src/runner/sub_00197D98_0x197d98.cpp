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

// Function: sub_00197D98
// Address: 0x197d98 - 0x197dc8
void sub_00197D98_0x197d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197D98_0x197d98");
#endif

    switch (ctx->pc) {
        case 0x197d98u: goto label_197d98;
        case 0x197d9cu: goto label_197d9c;
        case 0x197da0u: goto label_197da0;
        case 0x197da4u: goto label_197da4;
        case 0x197da8u: goto label_197da8;
        case 0x197dacu: goto label_197dac;
        case 0x197db0u: goto label_197db0;
        case 0x197db4u: goto label_197db4;
        case 0x197db8u: goto label_197db8;
        case 0x197dbcu: goto label_197dbc;
        case 0x197dc0u: goto label_197dc0;
        case 0x197dc4u: goto label_197dc4;
        default: break;
    }

    ctx->pc = 0x197d98u;

label_197d98:
    // 0x197d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_197d9c:
    // 0x197d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_197da0:
    // 0x197da0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x197da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197da4:
    // 0x197da4: 0x84430058  lh          $v1, 0x58($v0)
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_197da8:
    // 0x197da8: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x197da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_197dac:
    // 0x197dac: 0xe0f809  jalr        $a3
label_197db0:
    if (ctx->pc == 0x197DB0u) {
        ctx->pc = 0x197DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DACu;
        // 0x197db0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DB4u;
        goto label_197db4;
    }
    ctx->pc = 0x197DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x197DB4u);
        ctx->pc = 0x197DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DACu;
        // 0x197db0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DACu, 0x197DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197DB4u;
label_197db4:
    // 0x197db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197db8:
    // 0x197db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197dbc:
    // 0x197dbc: 0x3e00008  jr          $ra
label_197dc0:
    if (ctx->pc == 0x197DC0u) {
        ctx->pc = 0x197DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DBCu;
        // 0x197dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DC4u;
        goto label_197dc4;
    }
    ctx->pc = 0x197DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DBCu;
        // 0x197dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197DC4u;
label_197dc4:
    // 0x197dc4: 0x0  nop
    ctx->pc = 0x197dc4u;
    // NOP
    ctx->pc = 0x197dc8u;
}
