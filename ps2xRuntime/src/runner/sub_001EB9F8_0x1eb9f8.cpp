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

// Function: sub_001EB9F8
// Address: 0x1eb9f8 - 0x1ebad8
void sub_001EB9F8_0x1eb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB9F8_0x1eb9f8");
#endif

    switch (ctx->pc) {
        case 0x1eb9f8u: goto label_1eb9f8;
        case 0x1eb9fcu: goto label_1eb9fc;
        case 0x1eba00u: goto label_1eba00;
        case 0x1eba04u: goto label_1eba04;
        case 0x1eba08u: goto label_1eba08;
        case 0x1eba0cu: goto label_1eba0c;
        case 0x1eba10u: goto label_1eba10;
        case 0x1eba14u: goto label_1eba14;
        case 0x1eba18u: goto label_1eba18;
        case 0x1eba1cu: goto label_1eba1c;
        case 0x1eba20u: goto label_1eba20;
        case 0x1eba24u: goto label_1eba24;
        case 0x1eba28u: goto label_1eba28;
        case 0x1eba2cu: goto label_1eba2c;
        case 0x1eba30u: goto label_1eba30;
        case 0x1eba34u: goto label_1eba34;
        case 0x1eba38u: goto label_1eba38;
        case 0x1eba3cu: goto label_1eba3c;
        case 0x1eba40u: goto label_1eba40;
        case 0x1eba44u: goto label_1eba44;
        case 0x1eba48u: goto label_1eba48;
        case 0x1eba4cu: goto label_1eba4c;
        case 0x1eba50u: goto label_1eba50;
        case 0x1eba54u: goto label_1eba54;
        case 0x1eba58u: goto label_1eba58;
        case 0x1eba5cu: goto label_1eba5c;
        case 0x1eba60u: goto label_1eba60;
        case 0x1eba64u: goto label_1eba64;
        case 0x1eba68u: goto label_1eba68;
        case 0x1eba6cu: goto label_1eba6c;
        case 0x1eba70u: goto label_1eba70;
        case 0x1eba74u: goto label_1eba74;
        case 0x1eba78u: goto label_1eba78;
        case 0x1eba7cu: goto label_1eba7c;
        case 0x1eba80u: goto label_1eba80;
        case 0x1eba84u: goto label_1eba84;
        case 0x1eba88u: goto label_1eba88;
        case 0x1eba8cu: goto label_1eba8c;
        case 0x1eba90u: goto label_1eba90;
        case 0x1eba94u: goto label_1eba94;
        case 0x1eba98u: goto label_1eba98;
        case 0x1eba9cu: goto label_1eba9c;
        case 0x1ebaa0u: goto label_1ebaa0;
        case 0x1ebaa4u: goto label_1ebaa4;
        case 0x1ebaa8u: goto label_1ebaa8;
        case 0x1ebaacu: goto label_1ebaac;
        case 0x1ebab0u: goto label_1ebab0;
        case 0x1ebab4u: goto label_1ebab4;
        case 0x1ebab8u: goto label_1ebab8;
        case 0x1ebabcu: goto label_1ebabc;
        case 0x1ebac0u: goto label_1ebac0;
        case 0x1ebac4u: goto label_1ebac4;
        case 0x1ebac8u: goto label_1ebac8;
        case 0x1ebaccu: goto label_1ebacc;
        case 0x1ebad0u: goto label_1ebad0;
        case 0x1ebad4u: goto label_1ebad4;
        default: break;
    }

    ctx->pc = 0x1eb9f8u;

label_1eb9f8:
    // 0x1eb9f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eb9fc:
    // 0x1eb9fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1eb9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1eba00:
    // 0x1eba00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eba04:
    // 0x1eba04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eba04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eba08:
    // 0x1eba08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eba0c:
    // 0x1eba0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eba0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eba10:
    // 0x1eba10: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x1eba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1eba14:
    // 0x1eba14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1eba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eba18:
    // 0x1eba18: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x1eba18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_1eba1c:
    // 0x1eba1c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1eba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1eba20:
    // 0x1eba20: 0x40f809  jalr        $v0
label_1eba24:
    if (ctx->pc == 0x1EBA24u) {
        ctx->pc = 0x1EBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA20u;
        // 0x1eba24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA28u;
        goto label_1eba28;
    }
    ctx->pc = 0x1EBA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBA28u);
        ctx->pc = 0x1EBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA20u;
        // 0x1eba24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBA20u, 0x1EBA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBA28u;
label_1eba28:
    // 0x1eba28: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x1eba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1eba2c:
    // 0x1eba2c: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x1eba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1eba30:
    // 0x1eba30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1eba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eba34:
    // 0x1eba34: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1eba34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1eba38:
    // 0x1eba38: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1eba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1eba3c:
    // 0x1eba3c: 0x40f809  jalr        $v0
label_1eba40:
    if (ctx->pc == 0x1EBA40u) {
        ctx->pc = 0x1EBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA3Cu;
        // 0x1eba40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA44u;
        goto label_1eba44;
    }
    ctx->pc = 0x1EBA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBA44u);
        ctx->pc = 0x1EBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA3Cu;
        // 0x1eba40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBA3Cu, 0x1EBA44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBA44u;
label_1eba44:
    // 0x1eba44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eba48:
    // 0x1eba48: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1eba48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1eba4c:
    // 0x1eba4c: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x1eba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1eba50:
    // 0x1eba50: 0xa0f809  jalr        $a1
label_1eba54:
    if (ctx->pc == 0x1EBA54u) {
        ctx->pc = 0x1EBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA50u;
        // 0x1eba54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA58u;
        goto label_1eba58;
    }
    ctx->pc = 0x1EBA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EBA58u);
        ctx->pc = 0x1EBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA50u;
        // 0x1eba54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBA50u, 0x1EBA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBA58u;
label_1eba58:
    // 0x1eba58: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1eba58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_1eba5c:
    // 0x1eba5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1eba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1eba60:
    // 0x1eba60: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
label_1eba64:
    if (ctx->pc == 0x1EBA64u) {
        ctx->pc = 0x1EBA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA60u;
        // 0x1eba64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA68u;
        goto label_1eba68;
    }
    ctx->pc = 0x1EBA60u;
    {
        const bool branch_taken_0x1eba60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eba60) {
            ctx->pc = 0x1EBA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBA60u;
            // 0x1eba64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBA8Cu;
            goto label_1eba8c;
        }
    }
    ctx->pc = 0x1EBA68u;
label_1eba68:
    // 0x1eba68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1eba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1eba6c:
    // 0x1eba6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1eba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1eba70:
    // 0x1eba70: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1eba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1eba74:
    // 0x1eba74: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1eba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1eba78:
    // 0x1eba78: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1eba78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1eba7c:
    // 0x1eba7c: 0xc043f0c  jal         func_10FC30
label_1eba80:
    if (ctx->pc == 0x1EBA80u) {
        ctx->pc = 0x1EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA7Cu;
        // 0x1eba80: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA84u;
        goto label_1eba84;
    }
    ctx->pc = 0x1EBA7Cu;
    SET_GPR_U32(ctx, 31, 0x1EBA84u);
    ctx->pc = 0x1EBA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA7Cu;
    // 0x1eba80: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EBA7Cu, 0x1EBA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA84u;
label_1eba84:
    // 0x1eba84: 0x1000000f  b           . + 4 + (0xF << 2)
label_1eba88:
    if (ctx->pc == 0x1EBA88u) {
        ctx->pc = 0x1EBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA84u;
        // 0x1eba88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA8Cu;
        goto label_1eba8c;
    }
    ctx->pc = 0x1EBA84u;
    {
        const bool branch_taken_0x1eba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA84u;
        // 0x1eba88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba84) {
            ctx->pc = 0x1EBAC4u;
            goto label_1ebac4;
        }
    }
    ctx->pc = 0x1EBA8Cu;
label_1eba8c:
    // 0x1eba8c: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_1eba90:
    if (ctx->pc == 0x1EBA90u) {
        ctx->pc = 0x1EBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA8Cu;
        // 0x1eba90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA94u;
        goto label_1eba94;
    }
    ctx->pc = 0x1EBA8Cu;
    {
        const bool branch_taken_0x1eba8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA8Cu;
        // 0x1eba90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba8c) {
            ctx->pc = 0x1EBAC4u;
            goto label_1ebac4;
        }
    }
    ctx->pc = 0x1EBA94u;
label_1eba94:
    // 0x1eba94: 0xc043d5e  jal         func_10F578
label_1eba98:
    if (ctx->pc == 0x1EBA98u) {
        ctx->pc = 0x1EBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA94u;
        // 0x1eba98: 0x260400c8  addiu       $a0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA9Cu;
        goto label_1eba9c;
    }
    ctx->pc = 0x1EBA94u;
    SET_GPR_U32(ctx, 31, 0x1EBA9Cu);
    ctx->pc = 0x1EBA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA94u;
    // 0x1eba98: 0x260400c8  addiu       $a0, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1EBA94u, 0x1EBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA9Cu;
label_1eba9c:
    // 0x1eba9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ebaa0:
    if (ctx->pc == 0x1EBAA0u) {
        ctx->pc = 0x1EBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA9Cu;
        // 0x1ebaa0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAA4u;
        goto label_1ebaa4;
    }
    ctx->pc = 0x1EBA9Cu;
    {
        const bool branch_taken_0x1eba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA9Cu;
        // 0x1ebaa0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba9c) {
            ctx->pc = 0x1EBABCu;
            goto label_1ebabc;
        }
    }
    ctx->pc = 0x1EBAA4u;
label_1ebaa4:
    // 0x1ebaa4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ebaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ebaa8:
    // 0x1ebaa8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ebaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ebaac:
    // 0x1ebaac: 0xc043f0c  jal         func_10FC30
label_1ebab0:
    if (ctx->pc == 0x1EBAB0u) {
        ctx->pc = 0x1EBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAACu;
        // 0x1ebab0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAB4u;
        goto label_1ebab4;
    }
    ctx->pc = 0x1EBAACu;
    SET_GPR_U32(ctx, 31, 0x1EBAB4u);
    ctx->pc = 0x1EBAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBAACu;
    // 0x1ebab0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EBAACu, 0x1EBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBAB4u;
label_1ebab4:
    // 0x1ebab4: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x1ebab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
label_1ebab8:
    // 0x1ebab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ebab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebabc:
    // 0x1ebabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebac0:
    // 0x1ebac0: 0xa20300c4  sb          $v1, 0xC4($s0)
    ctx->pc = 0x1ebac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 3));
label_1ebac4:
    // 0x1ebac4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ebac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebac8:
    // 0x1ebac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebacc:
    // 0x1ebacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebad0:
    // 0x1ebad0: 0x3e00008  jr          $ra
label_1ebad4:
    if (ctx->pc == 0x1EBAD4u) {
        ctx->pc = 0x1EBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAD0u;
        // 0x1ebad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAD8u;
        goto label_fallthrough_0x1ebad0;
    }
    ctx->pc = 0x1EBAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAD0u;
        // 0x1ebad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ebad0:
    ctx->pc = 0x1EBAD8u;
}
