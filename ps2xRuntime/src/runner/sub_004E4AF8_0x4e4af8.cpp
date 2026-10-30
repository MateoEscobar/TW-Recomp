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

// Function: sub_004E4AF8
// Address: 0x4e4af8 - 0x4e4bb8
void sub_004E4AF8_0x4e4af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4AF8_0x4e4af8");
#endif

    switch (ctx->pc) {
        case 0x4e4af8u: goto label_4e4af8;
        case 0x4e4afcu: goto label_4e4afc;
        case 0x4e4b00u: goto label_4e4b00;
        case 0x4e4b04u: goto label_4e4b04;
        case 0x4e4b08u: goto label_4e4b08;
        case 0x4e4b0cu: goto label_4e4b0c;
        case 0x4e4b10u: goto label_4e4b10;
        case 0x4e4b14u: goto label_4e4b14;
        case 0x4e4b18u: goto label_4e4b18;
        case 0x4e4b1cu: goto label_4e4b1c;
        case 0x4e4b20u: goto label_4e4b20;
        case 0x4e4b24u: goto label_4e4b24;
        case 0x4e4b28u: goto label_4e4b28;
        case 0x4e4b2cu: goto label_4e4b2c;
        case 0x4e4b30u: goto label_4e4b30;
        case 0x4e4b34u: goto label_4e4b34;
        case 0x4e4b38u: goto label_4e4b38;
        case 0x4e4b3cu: goto label_4e4b3c;
        case 0x4e4b40u: goto label_4e4b40;
        case 0x4e4b44u: goto label_4e4b44;
        case 0x4e4b48u: goto label_4e4b48;
        case 0x4e4b4cu: goto label_4e4b4c;
        case 0x4e4b50u: goto label_4e4b50;
        case 0x4e4b54u: goto label_4e4b54;
        case 0x4e4b58u: goto label_4e4b58;
        case 0x4e4b5cu: goto label_4e4b5c;
        case 0x4e4b60u: goto label_4e4b60;
        case 0x4e4b64u: goto label_4e4b64;
        case 0x4e4b68u: goto label_4e4b68;
        case 0x4e4b6cu: goto label_4e4b6c;
        case 0x4e4b70u: goto label_4e4b70;
        case 0x4e4b74u: goto label_4e4b74;
        case 0x4e4b78u: goto label_4e4b78;
        case 0x4e4b7cu: goto label_4e4b7c;
        case 0x4e4b80u: goto label_4e4b80;
        case 0x4e4b84u: goto label_4e4b84;
        case 0x4e4b88u: goto label_4e4b88;
        case 0x4e4b8cu: goto label_4e4b8c;
        case 0x4e4b90u: goto label_4e4b90;
        case 0x4e4b94u: goto label_4e4b94;
        case 0x4e4b98u: goto label_4e4b98;
        case 0x4e4b9cu: goto label_4e4b9c;
        case 0x4e4ba0u: goto label_4e4ba0;
        case 0x4e4ba4u: goto label_4e4ba4;
        case 0x4e4ba8u: goto label_4e4ba8;
        case 0x4e4bacu: goto label_4e4bac;
        case 0x4e4bb0u: goto label_4e4bb0;
        case 0x4e4bb4u: goto label_4e4bb4;
        default: break;
    }

    ctx->pc = 0x4e4af8u;

label_4e4af8:
    // 0x4e4af8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e4af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e4afc:
    // 0x4e4afc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4e4b00:
    // 0x4e4b00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e4b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e4b04:
    // 0x4e4b04: 0x24429f38  addiu       $v0, $v0, -0x60C8
    ctx->pc = 0x4e4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942520));
label_4e4b08:
    // 0x4e4b08: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e4b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e4b0c:
    // 0x4e4b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e4b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4b10:
    // 0x4e4b10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e4b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e4b14:
    // 0x4e4b14: 0x26230340  addiu       $v1, $s1, 0x340
    ctx->pc = 0x4e4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_4e4b18:
    // 0x4e4b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e4b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e4b1c:
    // 0x4e4b1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e4b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4b20:
    // 0x4e4b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4b24:
    // 0x4e4b24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4e4b28:
    if (ctx->pc == 0x4E4B28u) {
        ctx->pc = 0x4E4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B24u;
        // 0x4e4b28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B2Cu;
        goto label_4e4b2c;
    }
    ctx->pc = 0x4E4B24u;
    {
        const bool branch_taken_0x4e4b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B24u;
        // 0x4e4b28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4b24) {
            ctx->pc = 0x4E4B60u;
            goto label_4e4b60;
        }
    }
    ctx->pc = 0x4E4B2Cu;
label_4e4b2c:
    // 0x4e4b2c: 0x26300c40  addiu       $s0, $s1, 0xC40
    ctx->pc = 0x4e4b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3136));
label_4e4b30:
    // 0x4e4b30: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
label_4e4b34:
    if (ctx->pc == 0x4E4B34u) {
        ctx->pc = 0x4E4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B30u;
        // 0x4e4b34: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B38u;
        goto label_4e4b38;
    }
    ctx->pc = 0x4E4B30u;
    {
        const bool branch_taken_0x4e4b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4E4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B30u;
        // 0x4e4b34: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4b30) {
            ctx->pc = 0x4E4B60u;
            goto label_4e4b60;
        }
    }
    ctx->pc = 0x4E4B38u;
label_4e4b38:
    // 0x4e4b38: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x4e4b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_4e4b3c:
    // 0x4e4b3c: 0x0  nop
    ctx->pc = 0x4e4b3cu;
    // NOP
label_4e4b40:
    // 0x4e4b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e4b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4b44:
    // 0x4e4b44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4b48:
    // 0x4e4b48: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e4b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e4b4c:
    // 0x4e4b4c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e4b50:
    // 0x4e4b50: 0x60f809  jalr        $v1
label_4e4b54:
    if (ctx->pc == 0x4E4B54u) {
        ctx->pc = 0x4E4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B50u;
        // 0x4e4b54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B58u;
        goto label_4e4b58;
    }
    ctx->pc = 0x4E4B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4B58u);
        ctx->pc = 0x4E4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B50u;
        // 0x4e4b54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4B50u, 0x4E4B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4B58u;
label_4e4b58:
    // 0x4e4b58: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_4e4b5c:
    if (ctx->pc == 0x4E4B5Cu) {
        ctx->pc = 0x4E4B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B58u;
        // 0x4e4b5c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B60u;
        goto label_4e4b60;
    }
    ctx->pc = 0x4E4B58u;
    {
        const bool branch_taken_0x4e4b58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E4B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B58u;
        // 0x4e4b5c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4b58) {
            ctx->pc = 0x4E4B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e4b40;
        }
    }
    ctx->pc = 0x4E4B60u;
label_4e4b60:
    // 0x4e4b60: 0x26240240  addiu       $a0, $s1, 0x240
    ctx->pc = 0x4e4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
label_4e4b64:
    // 0x4e4b64: 0xc06870c  jal         func_1A1C30
label_4e4b68:
    if (ctx->pc == 0x4E4B68u) {
        ctx->pc = 0x4E4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B64u;
        // 0x4e4b68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B6Cu;
        goto label_4e4b6c;
    }
    ctx->pc = 0x4E4B64u;
    SET_GPR_U32(ctx, 31, 0x4E4B6Cu);
    ctx->pc = 0x4E4B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4B64u;
    // 0x4e4b68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E4B64u, 0x4E4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4B6Cu;
label_4e4b6c:
    // 0x4e4b6c: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x4e4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_4e4b70:
    // 0x4e4b70: 0xc06870c  jal         func_1A1C30
label_4e4b74:
    if (ctx->pc == 0x4E4B74u) {
        ctx->pc = 0x4E4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B70u;
        // 0x4e4b74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B78u;
        goto label_4e4b78;
    }
    ctx->pc = 0x4E4B70u;
    SET_GPR_U32(ctx, 31, 0x4E4B78u);
    ctx->pc = 0x4E4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4B70u;
    // 0x4e4b74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E4B70u, 0x4E4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4B78u;
label_4e4b78:
    // 0x4e4b78: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x4e4b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4e4b7c:
    // 0x4e4b7c: 0xc06870c  jal         func_1A1C30
label_4e4b80:
    if (ctx->pc == 0x4E4B80u) {
        ctx->pc = 0x4E4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B7Cu;
        // 0x4e4b80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B84u;
        goto label_4e4b84;
    }
    ctx->pc = 0x4E4B7Cu;
    SET_GPR_U32(ctx, 31, 0x4E4B84u);
    ctx->pc = 0x4E4B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4B7Cu;
    // 0x4e4b80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E4B7Cu, 0x4E4B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4B84u;
label_4e4b84:
    // 0x4e4b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e4b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e4b88:
    // 0x4e4b88: 0xc06a39e  jal         func_1A8E78
label_4e4b8c:
    if (ctx->pc == 0x4E4B8Cu) {
        ctx->pc = 0x4E4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B88u;
        // 0x4e4b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4B90u;
        goto label_4e4b90;
    }
    ctx->pc = 0x4E4B88u;
    SET_GPR_U32(ctx, 31, 0x4E4B90u);
    ctx->pc = 0x4E4B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4B88u;
    // 0x4e4b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E4B88u, 0x4E4B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4B90u;
label_4e4b90:
    // 0x4e4b90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e4b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e4b94:
    // 0x4e4b94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e4b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4b98:
    // 0x4e4b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e4b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4b9c:
    // 0x4e4b9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e4b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4ba0:
    // 0x4e4ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4ba4:
    // 0x4e4ba4: 0x3e00008  jr          $ra
label_4e4ba8:
    if (ctx->pc == 0x4E4BA8u) {
        ctx->pc = 0x4E4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4BA4u;
        // 0x4e4ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4BACu;
        goto label_4e4bac;
    }
    ctx->pc = 0x4E4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4BA4u;
        // 0x4e4ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4BACu;
label_4e4bac:
    // 0x4e4bac: 0x0  nop
    ctx->pc = 0x4e4bacu;
    // NOP
label_4e4bb0:
    // 0x4e4bb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4e4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4e4bb4:
    // 0x4e4bb4: 0x0  nop
    ctx->pc = 0x4e4bb4u;
    // NOP
    ctx->pc = 0x4e4bb8u;
}
