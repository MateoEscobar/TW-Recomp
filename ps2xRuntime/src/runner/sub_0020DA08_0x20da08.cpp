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

// Function: sub_0020DA08
// Address: 0x20da08 - 0x20da60
void sub_0020DA08_0x20da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA08_0x20da08");
#endif

    switch (ctx->pc) {
        case 0x20da08u: goto label_20da08;
        case 0x20da0cu: goto label_20da0c;
        case 0x20da10u: goto label_20da10;
        case 0x20da14u: goto label_20da14;
        case 0x20da18u: goto label_20da18;
        case 0x20da1cu: goto label_20da1c;
        case 0x20da20u: goto label_20da20;
        case 0x20da24u: goto label_20da24;
        case 0x20da28u: goto label_20da28;
        case 0x20da2cu: goto label_20da2c;
        case 0x20da30u: goto label_20da30;
        case 0x20da34u: goto label_20da34;
        case 0x20da38u: goto label_20da38;
        case 0x20da3cu: goto label_20da3c;
        case 0x20da40u: goto label_20da40;
        case 0x20da44u: goto label_20da44;
        case 0x20da48u: goto label_20da48;
        case 0x20da4cu: goto label_20da4c;
        case 0x20da50u: goto label_20da50;
        case 0x20da54u: goto label_20da54;
        case 0x20da58u: goto label_20da58;
        case 0x20da5cu: goto label_20da5c;
        default: break;
    }

    ctx->pc = 0x20da08u;

label_20da08:
    // 0x20da08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20da0c:
    // 0x20da0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20da10:
    // 0x20da10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20da10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20da14:
    // 0x20da14: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20da14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_20da18:
    // 0x20da18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20da1c:
    // 0x20da1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20da1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20da20:
    // 0x20da20: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20da20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20da24:
    // 0x20da24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20da28:
    // 0x20da28: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20da28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20da2c:
    // 0x20da2c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20da30:
    // 0x20da30: 0xa0f809  jalr        $a1
label_20da34:
    if (ctx->pc == 0x20DA34u) {
        ctx->pc = 0x20DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA30u;
        // 0x20da34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA38u;
        goto label_20da38;
    }
    ctx->pc = 0x20DA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20DA38u);
        ctx->pc = 0x20DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA30u;
        // 0x20da34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA30u, 0x20DA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DA38u;
label_20da38:
    // 0x20da38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20da3c:
    // 0x20da3c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20da3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20da40:
    // 0x20da40: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20da44:
    // 0x20da44: 0x60f809  jalr        $v1
label_20da48:
    if (ctx->pc == 0x20DA48u) {
        ctx->pc = 0x20DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA44u;
        // 0x20da48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA4Cu;
        goto label_20da4c;
    }
    ctx->pc = 0x20DA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DA4Cu);
        ctx->pc = 0x20DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA44u;
        // 0x20da48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA44u, 0x20DA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DA4Cu;
label_20da4c:
    // 0x20da4c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x20da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20da50:
    // 0x20da50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20da50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20da54:
    // 0x20da54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20da54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20da58:
    // 0x20da58: 0x3e00008  jr          $ra
label_20da5c:
    if (ctx->pc == 0x20DA5Cu) {
        ctx->pc = 0x20DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA58u;
        // 0x20da5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA60u;
        goto label_fallthrough_0x20da58;
    }
    ctx->pc = 0x20DA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA58u;
        // 0x20da5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20da58:
    ctx->pc = 0x20DA60u;
}
