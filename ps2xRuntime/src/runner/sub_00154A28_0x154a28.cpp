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

// Function: sub_00154A28
// Address: 0x154a28 - 0x154a68
void sub_00154A28_0x154a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154A28_0x154a28");
#endif

    switch (ctx->pc) {
        case 0x154a28u: goto label_154a28;
        case 0x154a2cu: goto label_154a2c;
        case 0x154a30u: goto label_154a30;
        case 0x154a34u: goto label_154a34;
        case 0x154a38u: goto label_154a38;
        case 0x154a3cu: goto label_154a3c;
        case 0x154a40u: goto label_154a40;
        case 0x154a44u: goto label_154a44;
        case 0x154a48u: goto label_154a48;
        case 0x154a4cu: goto label_154a4c;
        case 0x154a50u: goto label_154a50;
        case 0x154a54u: goto label_154a54;
        case 0x154a58u: goto label_154a58;
        case 0x154a5cu: goto label_154a5c;
        case 0x154a60u: goto label_154a60;
        case 0x154a64u: goto label_154a64;
        default: break;
    }

    ctx->pc = 0x154a28u;

label_154a28:
    // 0x154a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_154a2c:
    // 0x154a2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154a30:
    // 0x154a30: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154a34:
    // 0x154a34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_154a38:
    // 0x154a38: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_154a3c:
    // 0x154a3c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x154a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_154a40:
    // 0x154a40: 0x40f809  jalr        $v0
label_154a44:
    if (ctx->pc == 0x154A44u) {
        ctx->pc = 0x154A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A40u;
        // 0x154a44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A48u;
        goto label_154a48;
    }
    ctx->pc = 0x154A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154A48u);
        ctx->pc = 0x154A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A40u;
        // 0x154a44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A40u, 0x154A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154A48u;
label_154a48:
    // 0x154a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154a4c:
    // 0x154a4c: 0x3e00008  jr          $ra
label_154a50:
    if (ctx->pc == 0x154A50u) {
        ctx->pc = 0x154A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A4Cu;
        // 0x154a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A54u;
        goto label_154a54;
    }
    ctx->pc = 0x154A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A4Cu;
        // 0x154a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154A54u;
label_154a54:
    // 0x154a54: 0x0  nop
    ctx->pc = 0x154a54u;
    // NOP
label_154a58:
    // 0x154a58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x154a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_154a5c:
    // 0x154a5c: 0x0  nop
    ctx->pc = 0x154a5cu;
    // NOP
label_154a60:
    // 0x154a60: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_154a64:
    // 0x154a64: 0x0  nop
    ctx->pc = 0x154a64u;
    // NOP
    ctx->pc = 0x154a68u;
}
