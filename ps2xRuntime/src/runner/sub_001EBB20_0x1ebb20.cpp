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

// Function: sub_001EBB20
// Address: 0x1ebb20 - 0x1ebb90
void sub_001EBB20_0x1ebb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBB20_0x1ebb20");
#endif

    switch (ctx->pc) {
        case 0x1ebb20u: goto label_1ebb20;
        case 0x1ebb24u: goto label_1ebb24;
        case 0x1ebb28u: goto label_1ebb28;
        case 0x1ebb2cu: goto label_1ebb2c;
        case 0x1ebb30u: goto label_1ebb30;
        case 0x1ebb34u: goto label_1ebb34;
        case 0x1ebb38u: goto label_1ebb38;
        case 0x1ebb3cu: goto label_1ebb3c;
        case 0x1ebb40u: goto label_1ebb40;
        case 0x1ebb44u: goto label_1ebb44;
        case 0x1ebb48u: goto label_1ebb48;
        case 0x1ebb4cu: goto label_1ebb4c;
        case 0x1ebb50u: goto label_1ebb50;
        case 0x1ebb54u: goto label_1ebb54;
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebb5cu: goto label_1ebb5c;
        case 0x1ebb60u: goto label_1ebb60;
        case 0x1ebb64u: goto label_1ebb64;
        case 0x1ebb68u: goto label_1ebb68;
        case 0x1ebb6cu: goto label_1ebb6c;
        case 0x1ebb70u: goto label_1ebb70;
        case 0x1ebb74u: goto label_1ebb74;
        case 0x1ebb78u: goto label_1ebb78;
        case 0x1ebb7cu: goto label_1ebb7c;
        case 0x1ebb80u: goto label_1ebb80;
        case 0x1ebb84u: goto label_1ebb84;
        case 0x1ebb88u: goto label_1ebb88;
        case 0x1ebb8cu: goto label_1ebb8c;
        default: break;
    }

    ctx->pc = 0x1ebb20u;

label_1ebb20:
    // 0x1ebb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ebb24:
    // 0x1ebb24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ebb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ebb28:
    // 0x1ebb28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ebb2c:
    // 0x1ebb2c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1ebb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_1ebb30:
    // 0x1ebb30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebb34:
    // 0x1ebb34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebb38:
    // 0x1ebb38: 0x3610ff00  ori         $s0, $s0, 0xFF00
    ctx->pc = 0x1ebb38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65280);
label_1ebb3c:
    // 0x1ebb3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ebb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebb40:
    // 0x1ebb40: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x1ebb40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_1ebb44:
    // 0x1ebb44: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ebb44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebb48:
    // 0x1ebb48: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ebb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ebb4c:
    // 0x1ebb4c: 0x60f809  jalr        $v1
label_1ebb50:
    if (ctx->pc == 0x1EBB50u) {
        ctx->pc = 0x1EBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB4Cu;
        // 0x1ebb50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB54u;
        goto label_1ebb54;
    }
    ctx->pc = 0x1EBB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBB54u);
        ctx->pc = 0x1EBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB4Cu;
        // 0x1ebb50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB4Cu, 0x1EBB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBB54u;
label_1ebb54:
    // 0x1ebb54: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1ebb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1ebb58:
    // 0x1ebb58: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
label_1ebb5c:
    if (ctx->pc == 0x1EBB5Cu) {
        ctx->pc = 0x1EBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB58u;
        // 0x1ebb5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB60u;
        goto label_1ebb60;
    }
    ctx->pc = 0x1EBB58u;
    {
        const bool branch_taken_0x1ebb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1EBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB58u;
        // 0x1ebb5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb58) {
            ctx->pc = 0x1EBB7Cu;
            goto label_1ebb7c;
        }
    }
    ctx->pc = 0x1EBB60u;
label_1ebb60:
    // 0x1ebb60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ebb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebb64:
    // 0x1ebb64: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ebb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ebb68:
    // 0x1ebb68: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ebb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1ebb6c:
    // 0x1ebb6c: 0x60f809  jalr        $v1
label_1ebb70:
    if (ctx->pc == 0x1EBB70u) {
        ctx->pc = 0x1EBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB6Cu;
        // 0x1ebb70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB74u;
        goto label_1ebb74;
    }
    ctx->pc = 0x1EBB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBB74u);
        ctx->pc = 0x1EBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB6Cu;
        // 0x1ebb70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB6Cu, 0x1EBB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBB74u;
label_1ebb74:
    // 0x1ebb74: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1ebb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1ebb78:
    // 0x1ebb78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ebb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebb7c:
    // 0x1ebb7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebb80:
    // 0x1ebb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebb84:
    // 0x1ebb84: 0x3e00008  jr          $ra
label_1ebb88:
    if (ctx->pc == 0x1EBB88u) {
        ctx->pc = 0x1EBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB84u;
        // 0x1ebb88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB8Cu;
        goto label_1ebb8c;
    }
    ctx->pc = 0x1EBB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB84u;
        // 0x1ebb88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBB8Cu;
label_1ebb8c:
    // 0x1ebb8c: 0x0  nop
    ctx->pc = 0x1ebb8cu;
    // NOP
    ctx->pc = 0x1ebb90u;
}
