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

// Function: sub_00339D10
// Address: 0x339d10 - 0x339d48
void sub_00339D10_0x339d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339D10_0x339d10");
#endif

    switch (ctx->pc) {
        case 0x339d10u: goto label_339d10;
        case 0x339d14u: goto label_339d14;
        case 0x339d18u: goto label_339d18;
        case 0x339d1cu: goto label_339d1c;
        case 0x339d20u: goto label_339d20;
        case 0x339d24u: goto label_339d24;
        case 0x339d28u: goto label_339d28;
        case 0x339d2cu: goto label_339d2c;
        case 0x339d30u: goto label_339d30;
        case 0x339d34u: goto label_339d34;
        case 0x339d38u: goto label_339d38;
        case 0x339d3cu: goto label_339d3c;
        case 0x339d40u: goto label_339d40;
        case 0x339d44u: goto label_339d44;
        default: break;
    }

    ctx->pc = 0x339d10u;

label_339d10:
    // 0x339d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339d14:
    // 0x339d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339d18:
    // 0x339d18: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x339d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_339d1c:
    // 0x339d1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339d20:
    // 0x339d20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x339d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339d24:
    // 0x339d24: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x339d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339d28:
    // 0x339d28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x339d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_339d2c:
    // 0x339d2c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x339d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_339d30:
    // 0x339d30: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x339d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_339d34:
    // 0x339d34: 0x60f809  jalr        $v1
label_339d38:
    if (ctx->pc == 0x339D38u) {
        ctx->pc = 0x339D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D34u;
        // 0x339d38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D3Cu;
        goto label_339d3c;
    }
    ctx->pc = 0x339D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x339D3Cu);
        ctx->pc = 0x339D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D34u;
        // 0x339d38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D34u, 0x339D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339D3Cu;
label_339d3c:
    // 0x339d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339d40:
    // 0x339d40: 0x3e00008  jr          $ra
label_339d44:
    if (ctx->pc == 0x339D44u) {
        ctx->pc = 0x339D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D40u;
        // 0x339d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D48u;
        goto label_fallthrough_0x339d40;
    }
    ctx->pc = 0x339D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D40u;
        // 0x339d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339d40:
    ctx->pc = 0x339D48u;
}
