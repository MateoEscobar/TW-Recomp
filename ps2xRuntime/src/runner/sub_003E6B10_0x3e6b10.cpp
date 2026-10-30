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

// Function: sub_003E6B10
// Address: 0x3e6b10 - 0x3e6c18
void sub_003E6B10_0x3e6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6B10_0x3e6b10");
#endif

    switch (ctx->pc) {
        case 0x3e6b10u: goto label_3e6b10;
        case 0x3e6b14u: goto label_3e6b14;
        case 0x3e6b18u: goto label_3e6b18;
        case 0x3e6b1cu: goto label_3e6b1c;
        case 0x3e6b20u: goto label_3e6b20;
        case 0x3e6b24u: goto label_3e6b24;
        case 0x3e6b28u: goto label_3e6b28;
        case 0x3e6b2cu: goto label_3e6b2c;
        case 0x3e6b30u: goto label_3e6b30;
        case 0x3e6b34u: goto label_3e6b34;
        case 0x3e6b38u: goto label_3e6b38;
        case 0x3e6b3cu: goto label_3e6b3c;
        case 0x3e6b40u: goto label_3e6b40;
        case 0x3e6b44u: goto label_3e6b44;
        case 0x3e6b48u: goto label_3e6b48;
        case 0x3e6b4cu: goto label_3e6b4c;
        case 0x3e6b50u: goto label_3e6b50;
        case 0x3e6b54u: goto label_3e6b54;
        case 0x3e6b58u: goto label_3e6b58;
        case 0x3e6b5cu: goto label_3e6b5c;
        case 0x3e6b60u: goto label_3e6b60;
        case 0x3e6b64u: goto label_3e6b64;
        case 0x3e6b68u: goto label_3e6b68;
        case 0x3e6b6cu: goto label_3e6b6c;
        case 0x3e6b70u: goto label_3e6b70;
        case 0x3e6b74u: goto label_3e6b74;
        case 0x3e6b78u: goto label_3e6b78;
        case 0x3e6b7cu: goto label_3e6b7c;
        case 0x3e6b80u: goto label_3e6b80;
        case 0x3e6b84u: goto label_3e6b84;
        case 0x3e6b88u: goto label_3e6b88;
        case 0x3e6b8cu: goto label_3e6b8c;
        case 0x3e6b90u: goto label_3e6b90;
        case 0x3e6b94u: goto label_3e6b94;
        case 0x3e6b98u: goto label_3e6b98;
        case 0x3e6b9cu: goto label_3e6b9c;
        case 0x3e6ba0u: goto label_3e6ba0;
        case 0x3e6ba4u: goto label_3e6ba4;
        case 0x3e6ba8u: goto label_3e6ba8;
        case 0x3e6bacu: goto label_3e6bac;
        case 0x3e6bb0u: goto label_3e6bb0;
        case 0x3e6bb4u: goto label_3e6bb4;
        case 0x3e6bb8u: goto label_3e6bb8;
        case 0x3e6bbcu: goto label_3e6bbc;
        case 0x3e6bc0u: goto label_3e6bc0;
        case 0x3e6bc4u: goto label_3e6bc4;
        case 0x3e6bc8u: goto label_3e6bc8;
        case 0x3e6bccu: goto label_3e6bcc;
        case 0x3e6bd0u: goto label_3e6bd0;
        case 0x3e6bd4u: goto label_3e6bd4;
        case 0x3e6bd8u: goto label_3e6bd8;
        case 0x3e6bdcu: goto label_3e6bdc;
        case 0x3e6be0u: goto label_3e6be0;
        case 0x3e6be4u: goto label_3e6be4;
        case 0x3e6be8u: goto label_3e6be8;
        case 0x3e6becu: goto label_3e6bec;
        case 0x3e6bf0u: goto label_3e6bf0;
        case 0x3e6bf4u: goto label_3e6bf4;
        case 0x3e6bf8u: goto label_3e6bf8;
        case 0x3e6bfcu: goto label_3e6bfc;
        case 0x3e6c00u: goto label_3e6c00;
        case 0x3e6c04u: goto label_3e6c04;
        case 0x3e6c08u: goto label_3e6c08;
        case 0x3e6c0cu: goto label_3e6c0c;
        case 0x3e6c10u: goto label_3e6c10;
        case 0x3e6c14u: goto label_3e6c14;
        default: break;
    }

    ctx->pc = 0x3e6b10u;

label_3e6b10:
    // 0x3e6b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e6b14:
    // 0x3e6b14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e6b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e6b18:
    // 0x3e6b18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e6b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e6b1c:
    // 0x3e6b1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e6b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e6b20:
    // 0x3e6b20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e6b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e6b24:
    // 0x3e6b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e6b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6b28:
    // 0x3e6b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e6b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e6b2c:
    // 0x3e6b2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e6b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e6b30:
    // 0x3e6b30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e6b34:
    // 0x3e6b34: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e6b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e6b38:
    // 0x3e6b38: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e6b3c:
    // 0x3e6b3c: 0x40f809  jalr        $v0
label_3e6b40:
    if (ctx->pc == 0x3E6B40u) {
        ctx->pc = 0x3E6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B3Cu;
        // 0x3e6b40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6B44u;
        goto label_3e6b44;
    }
    ctx->pc = 0x3E6B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E6B44u);
        ctx->pc = 0x3E6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B3Cu;
        // 0x3e6b40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6B3Cu, 0x3E6B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6B44u;
label_3e6b44:
    // 0x3e6b44: 0x2603fff6  addiu       $v1, $s0, -0xA
    ctx->pc = 0x3e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
label_3e6b48:
    // 0x3e6b48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e6b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6b4c:
    // 0x3e6b4c: 0x2c62002a  sltiu       $v0, $v1, 0x2A
    ctx->pc = 0x3e6b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
label_3e6b50:
    // 0x3e6b50: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_3e6b54:
    if (ctx->pc == 0x3E6B54u) {
        ctx->pc = 0x3E6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B50u;
        // 0x3e6b54: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6B58u;
        goto label_3e6b58;
    }
    ctx->pc = 0x3E6B50u;
    {
        const bool branch_taken_0x3e6b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B50u;
        // 0x3e6b54: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b50) {
            ctx->pc = 0x3E6C24u;
            return;
        }
    }
    ctx->pc = 0x3E6B58u;
label_3e6b58:
    // 0x3e6b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e6b5c:
    // 0x3e6b5c: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x3e6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
label_3e6b60:
    // 0x3e6b60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e6b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e6b64:
    // 0x3e6b64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e6b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e6b68:
    // 0x3e6b68: 0x800008  jr          $a0
label_3e6b6c:
    if (ctx->pc == 0x3E6B6Cu) {
        ctx->pc = 0x3E6B70u;
        goto label_3e6b70;
    }
    ctx->pc = 0x3E6B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E6B70u: goto label_3e6b70;
            case 0x3E6B8Cu: goto label_3e6b8c;
            case 0x3E6B9Cu: goto label_3e6b9c;
            case 0x3E6BACu: goto label_3e6bac;
            case 0x3E6BC0u: goto label_3e6bc0;
            case 0x3E6BD4u: goto label_3e6bd4;
            case 0x3E6BE8u: goto label_3e6be8;
            case 0x3E6BFCu: goto label_3e6bfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6B68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E6B70u;
label_3e6b70:
    // 0x3e6b70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e6b74:
    // 0x3e6b74: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3e6b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3e6b78:
    // 0x3e6b78: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3e6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3e6b7c:
    // 0x3e6b7c: 0x60f809  jalr        $v1
label_3e6b80:
    if (ctx->pc == 0x3E6B80u) {
        ctx->pc = 0x3E6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B7Cu;
        // 0x3e6b80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6B84u;
        goto label_3e6b84;
    }
    ctx->pc = 0x3E6B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E6B84u);
        ctx->pc = 0x3E6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B7Cu;
        // 0x3e6b80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6B7Cu, 0x3E6B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6B84u;
label_3e6b84:
    // 0x3e6b84: 0x10000028  b           . + 4 + (0x28 << 2)
label_3e6b88:
    if (ctx->pc == 0x3E6B88u) {
        ctx->pc = 0x3E6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B84u;
        // 0x3e6b88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6B8Cu;
        goto label_3e6b8c;
    }
    ctx->pc = 0x3E6B84u;
    {
        const bool branch_taken_0x3e6b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B84u;
        // 0x3e6b88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b84) {
            ctx->pc = 0x3E6C28u;
            return;
        }
    }
    ctx->pc = 0x3E6B8Cu;
label_3e6b8c:
    // 0x3e6b8c: 0xc0ea146  jal         func_3A8518
label_3e6b90:
    if (ctx->pc == 0x3E6B90u) {
        ctx->pc = 0x3E6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B8Cu;
        // 0x3e6b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6B94u;
        goto label_3e6b94;
    }
    ctx->pc = 0x3E6B8Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B94u);
    ctx->pc = 0x3E6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B8Cu;
    // 0x3e6b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6B8Cu, 0x3E6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B94u;
label_3e6b94:
    // 0x3e6b94: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e6b98:
    if (ctx->pc == 0x3E6B98u) {
        ctx->pc = 0x3E6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B94u;
        // 0x3e6b98: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6B9Cu;
        goto label_3e6b9c;
    }
    ctx->pc = 0x3E6B94u;
    {
        const bool branch_taken_0x3e6b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6b94) {
            ctx->pc = 0x3E6B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6B94u;
            // 0x3e6b98: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6BB0u;
            goto label_3e6bb0;
        }
    }
    ctx->pc = 0x3E6B9Cu;
label_3e6b9c:
    // 0x3e6b9c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e6ba0:
    // 0x3e6ba0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3e6ba4:
    // 0x3e6ba4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3e6ba8:
    if (ctx->pc == 0x3E6BA8u) {
        ctx->pc = 0x3E6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BA4u;
        // 0x3e6ba8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BACu;
        goto label_3e6bac;
    }
    ctx->pc = 0x3E6BA4u;
    {
        const bool branch_taken_0x3e6ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BA4u;
        // 0x3e6ba8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ba4) {
            ctx->pc = 0x3E6C24u;
            return;
        }
    }
    ctx->pc = 0x3E6BACu;
label_3e6bac:
    // 0x3e6bac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e6bb0:
    // 0x3e6bb0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e6bb4:
    // 0x3e6bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e6bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e6bb8:
    // 0x3e6bb8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3e6bbc:
    if (ctx->pc == 0x3E6BBCu) {
        ctx->pc = 0x3E6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BB8u;
        // 0x3e6bbc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BC0u;
        goto label_3e6bc0;
    }
    ctx->pc = 0x3E6BB8u;
    {
        const bool branch_taken_0x3e6bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BB8u;
        // 0x3e6bbc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6bb8) {
            ctx->pc = 0x3E6C24u;
            return;
        }
    }
    ctx->pc = 0x3E6BC0u;
label_3e6bc0:
    // 0x3e6bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6bc4:
    // 0x3e6bc4: 0xc0f99fa  jal         func_3E67E8
label_3e6bc8:
    if (ctx->pc == 0x3E6BC8u) {
        ctx->pc = 0x3E6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BC4u;
        // 0x3e6bc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BCCu;
        goto label_3e6bcc;
    }
    ctx->pc = 0x3E6BC4u;
    SET_GPR_U32(ctx, 31, 0x3E6BCCu);
    ctx->pc = 0x3E6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BC4u;
    // 0x3e6bc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E67E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E67E8u, 0x3E6BC4u, 0x3E6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BCCu;
label_3e6bcc:
    // 0x3e6bcc: 0x10000016  b           . + 4 + (0x16 << 2)
label_3e6bd0:
    if (ctx->pc == 0x3E6BD0u) {
        ctx->pc = 0x3E6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BCCu;
        // 0x3e6bd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BD4u;
        goto label_3e6bd4;
    }
    ctx->pc = 0x3E6BCCu;
    {
        const bool branch_taken_0x3e6bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BCCu;
        // 0x3e6bd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6bcc) {
            ctx->pc = 0x3E6C28u;
            return;
        }
    }
    ctx->pc = 0x3E6BD4u;
label_3e6bd4:
    // 0x3e6bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6bd8:
    // 0x3e6bd8: 0xc0f9a34  jal         func_3E68D0
label_3e6bdc:
    if (ctx->pc == 0x3E6BDCu) {
        ctx->pc = 0x3E6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BD8u;
        // 0x3e6bdc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BE0u;
        goto label_3e6be0;
    }
    ctx->pc = 0x3E6BD8u;
    SET_GPR_U32(ctx, 31, 0x3E6BE0u);
    ctx->pc = 0x3E6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BD8u;
    // 0x3e6bdc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E68D0u, 0x3E6BD8u, 0x3E6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BE0u;
label_3e6be0:
    // 0x3e6be0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3e6be4:
    if (ctx->pc == 0x3E6BE4u) {
        ctx->pc = 0x3E6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BE0u;
        // 0x3e6be4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BE8u;
        goto label_3e6be8;
    }
    ctx->pc = 0x3E6BE0u;
    {
        const bool branch_taken_0x3e6be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BE0u;
        // 0x3e6be4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6be0) {
            ctx->pc = 0x3E6C28u;
            return;
        }
    }
    ctx->pc = 0x3E6BE8u;
label_3e6be8:
    // 0x3e6be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6bec:
    // 0x3e6bec: 0xc0f9a68  jal         func_3E69A0
label_3e6bf0:
    if (ctx->pc == 0x3E6BF0u) {
        ctx->pc = 0x3E6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BECu;
        // 0x3e6bf0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BF4u;
        goto label_3e6bf4;
    }
    ctx->pc = 0x3E6BECu;
    SET_GPR_U32(ctx, 31, 0x3E6BF4u);
    ctx->pc = 0x3E6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BECu;
    // 0x3e6bf0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E69A0u, 0x3E6BECu, 0x3E6BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6BF4u;
label_3e6bf4:
    // 0x3e6bf4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e6bf8:
    if (ctx->pc == 0x3E6BF8u) {
        ctx->pc = 0x3E6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BF4u;
        // 0x3e6bf8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6BFCu;
        goto label_3e6bfc;
    }
    ctx->pc = 0x3E6BF4u;
    {
        const bool branch_taken_0x3e6bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BF4u;
        // 0x3e6bf8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6bf4) {
            ctx->pc = 0x3E6C28u;
            return;
        }
    }
    ctx->pc = 0x3E6BFCu;
label_3e6bfc:
    // 0x3e6bfc: 0xc0ea146  jal         func_3A8518
label_3e6c00:
    if (ctx->pc == 0x3E6C00u) {
        ctx->pc = 0x3E6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BFCu;
        // 0x3e6c00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6C04u;
        goto label_3e6c04;
    }
    ctx->pc = 0x3E6BFCu;
    SET_GPR_U32(ctx, 31, 0x3E6C04u);
    ctx->pc = 0x3E6C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6BFCu;
    // 0x3e6c00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6BFCu, 0x3E6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C04u;
label_3e6c04:
    // 0x3e6c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6c08:
    // 0x3e6c08: 0xc0e6ec6  jal         func_39BB18
label_3e6c0c:
    if (ctx->pc == 0x3E6C0Cu) {
        ctx->pc = 0x3E6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C08u;
        // 0x3e6c0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6C10u;
        goto label_3e6c10;
    }
    ctx->pc = 0x3E6C08u;
    SET_GPR_U32(ctx, 31, 0x3E6C10u);
    ctx->pc = 0x3E6C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C08u;
    // 0x3e6c0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3E6C08u, 0x3E6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C10u;
label_3e6c10:
    // 0x3e6c10: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e6c14:
    if (ctx->pc == 0x3E6C14u) {
        ctx->pc = 0x3E6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C10u;
        // 0x3e6c14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6C18u;
        goto label_fallthrough_0x3e6c10;
    }
    ctx->pc = 0x3E6C10u;
    {
        const bool branch_taken_0x3e6c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C10u;
        // 0x3e6c14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6c10) {
            ctx->pc = 0x3E6C28u;
            return;
        }
    }
label_fallthrough_0x3e6c10:
    ctx->pc = 0x3E6C18u;
}
