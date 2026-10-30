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

// Function: sub_0039CA10
// Address: 0x39ca10 - 0x39ca48
void sub_0039CA10_0x39ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CA10_0x39ca10");
#endif

    switch (ctx->pc) {
        case 0x39ca10u: goto label_39ca10;
        case 0x39ca14u: goto label_39ca14;
        case 0x39ca18u: goto label_39ca18;
        case 0x39ca1cu: goto label_39ca1c;
        case 0x39ca20u: goto label_39ca20;
        case 0x39ca24u: goto label_39ca24;
        case 0x39ca28u: goto label_39ca28;
        case 0x39ca2cu: goto label_39ca2c;
        case 0x39ca30u: goto label_39ca30;
        case 0x39ca34u: goto label_39ca34;
        case 0x39ca38u: goto label_39ca38;
        case 0x39ca3cu: goto label_39ca3c;
        case 0x39ca40u: goto label_39ca40;
        case 0x39ca44u: goto label_39ca44;
        default: break;
    }

    ctx->pc = 0x39ca10u;

label_39ca10:
    // 0x39ca10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39ca14:
    // 0x39ca14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39ca18:
    // 0x39ca18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39ca1c:
    // 0x39ca1c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x39ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_39ca20:
    // 0x39ca20: 0x8c660834  lw          $a2, 0x834($v1)
    ctx->pc = 0x39ca20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2100)));
label_39ca24:
    // 0x39ca24: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x39ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39ca28:
    // 0x39ca28: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x39ca28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_39ca2c:
    // 0x39ca2c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x39ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_39ca30:
    // 0x39ca30: 0x40f809  jalr        $v0
label_39ca34:
    if (ctx->pc == 0x39CA34u) {
        ctx->pc = 0x39CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA30u;
        // 0x39ca34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CA38u;
        goto label_39ca38;
    }
    ctx->pc = 0x39CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39CA38u);
        ctx->pc = 0x39CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA30u;
        // 0x39ca34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CA30u, 0x39CA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39CA38u;
label_39ca38:
    // 0x39ca38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ca38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39ca3c:
    // 0x39ca3c: 0x3e00008  jr          $ra
label_39ca40:
    if (ctx->pc == 0x39CA40u) {
        ctx->pc = 0x39CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA3Cu;
        // 0x39ca40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CA44u;
        goto label_39ca44;
    }
    ctx->pc = 0x39CA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA3Cu;
        // 0x39ca40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CA44u;
label_39ca44:
    // 0x39ca44: 0x0  nop
    ctx->pc = 0x39ca44u;
    // NOP
    ctx->pc = 0x39ca48u;
}
