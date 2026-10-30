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

// Function: sub_003D3AF0
// Address: 0x3d3af0 - 0x3d3c04
void sub_003D3AF0_0x3d3af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3AF0_0x3d3af0");
#endif

    switch (ctx->pc) {
        case 0x3d3af0u: goto label_3d3af0;
        case 0x3d3af4u: goto label_3d3af4;
        case 0x3d3af8u: goto label_3d3af8;
        case 0x3d3afcu: goto label_3d3afc;
        case 0x3d3b00u: goto label_3d3b00;
        case 0x3d3b04u: goto label_3d3b04;
        case 0x3d3b08u: goto label_3d3b08;
        case 0x3d3b0cu: goto label_3d3b0c;
        case 0x3d3b10u: goto label_3d3b10;
        case 0x3d3b14u: goto label_3d3b14;
        case 0x3d3b18u: goto label_3d3b18;
        case 0x3d3b1cu: goto label_3d3b1c;
        case 0x3d3b20u: goto label_3d3b20;
        case 0x3d3b24u: goto label_3d3b24;
        case 0x3d3b28u: goto label_3d3b28;
        case 0x3d3b2cu: goto label_3d3b2c;
        case 0x3d3b30u: goto label_3d3b30;
        case 0x3d3b34u: goto label_3d3b34;
        case 0x3d3b38u: goto label_3d3b38;
        case 0x3d3b3cu: goto label_3d3b3c;
        case 0x3d3b40u: goto label_3d3b40;
        case 0x3d3b44u: goto label_3d3b44;
        case 0x3d3b48u: goto label_3d3b48;
        case 0x3d3b4cu: goto label_3d3b4c;
        case 0x3d3b50u: goto label_3d3b50;
        case 0x3d3b54u: goto label_3d3b54;
        case 0x3d3b58u: goto label_3d3b58;
        case 0x3d3b5cu: goto label_3d3b5c;
        case 0x3d3b60u: goto label_3d3b60;
        case 0x3d3b64u: goto label_3d3b64;
        case 0x3d3b68u: goto label_3d3b68;
        case 0x3d3b6cu: goto label_3d3b6c;
        case 0x3d3b70u: goto label_3d3b70;
        case 0x3d3b74u: goto label_3d3b74;
        case 0x3d3b78u: goto label_3d3b78;
        case 0x3d3b7cu: goto label_3d3b7c;
        case 0x3d3b80u: goto label_3d3b80;
        case 0x3d3b84u: goto label_3d3b84;
        case 0x3d3b88u: goto label_3d3b88;
        case 0x3d3b8cu: goto label_3d3b8c;
        case 0x3d3b90u: goto label_3d3b90;
        case 0x3d3b94u: goto label_3d3b94;
        case 0x3d3b98u: goto label_3d3b98;
        case 0x3d3b9cu: goto label_3d3b9c;
        case 0x3d3ba0u: goto label_3d3ba0;
        case 0x3d3ba4u: goto label_3d3ba4;
        case 0x3d3ba8u: goto label_3d3ba8;
        case 0x3d3bacu: goto label_3d3bac;
        case 0x3d3bb0u: goto label_3d3bb0;
        case 0x3d3bb4u: goto label_3d3bb4;
        case 0x3d3bb8u: goto label_3d3bb8;
        case 0x3d3bbcu: goto label_3d3bbc;
        case 0x3d3bc0u: goto label_3d3bc0;
        case 0x3d3bc4u: goto label_3d3bc4;
        case 0x3d3bc8u: goto label_3d3bc8;
        case 0x3d3bccu: goto label_3d3bcc;
        case 0x3d3bd0u: goto label_3d3bd0;
        case 0x3d3bd4u: goto label_3d3bd4;
        case 0x3d3bd8u: goto label_3d3bd8;
        case 0x3d3bdcu: goto label_3d3bdc;
        case 0x3d3be0u: goto label_3d3be0;
        case 0x3d3be4u: goto label_3d3be4;
        case 0x3d3be8u: goto label_3d3be8;
        case 0x3d3becu: goto label_3d3bec;
        case 0x3d3bf0u: goto label_3d3bf0;
        case 0x3d3bf4u: goto label_3d3bf4;
        case 0x3d3bf8u: goto label_3d3bf8;
        case 0x3d3bfcu: goto label_3d3bfc;
        case 0x3d3c00u: goto label_3d3c00;
        default: break;
    }

    ctx->pc = 0x3d3af0u;

label_3d3af0:
    // 0x3d3af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d3af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d3af4:
    // 0x3d3af4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d3af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d3af8:
    // 0x3d3af8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d3af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d3afc:
    // 0x3d3afc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d3afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b00:
    // 0x3d3b00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d3b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d3b04:
    // 0x3d3b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d3b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b08:
    // 0x3d3b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d3b0c:
    // 0x3d3b0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d3b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b10:
    // 0x3d3b10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d3b14:
    // 0x3d3b14: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d3b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d3b18:
    // 0x3d3b18: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d3b1c:
    // 0x3d3b1c: 0x40f809  jalr        $v0
label_3d3b20:
    if (ctx->pc == 0x3D3B20u) {
        ctx->pc = 0x3D3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B1Cu;
        // 0x3d3b20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B24u;
        goto label_3d3b24;
    }
    ctx->pc = 0x3D3B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3B24u);
        ctx->pc = 0x3D3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B1Cu;
        // 0x3d3b20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B1Cu, 0x3D3B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B24u;
label_3d3b24:
    // 0x3d3b24: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3d3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3d3b28:
    // 0x3d3b28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d3b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b2c:
    // 0x3d3b2c: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x3d3b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_3d3b30:
    // 0x3d3b30: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_3d3b34:
    if (ctx->pc == 0x3D3B34u) {
        ctx->pc = 0x3D3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B30u;
        // 0x3d3b34: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B38u;
        goto label_3d3b38;
    }
    ctx->pc = 0x3D3B30u;
    {
        const bool branch_taken_0x3d3b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B30u;
        // 0x3d3b34: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b30) {
            ctx->pc = 0x3D3C04u;
            return;
        }
    }
    ctx->pc = 0x3D3B38u;
label_3d3b38:
    // 0x3d3b38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d3b3c:
    // 0x3d3b3c: 0x24424cc0  addiu       $v0, $v0, 0x4CC0
    ctx->pc = 0x3d3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19648));
label_3d3b40:
    // 0x3d3b40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d3b44:
    // 0x3d3b44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d3b48:
    // 0x3d3b48: 0x800008  jr          $a0
label_3d3b4c:
    if (ctx->pc == 0x3D3B4Cu) {
        ctx->pc = 0x3D3B50u;
        goto label_3d3b50;
    }
    ctx->pc = 0x3D3B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D3B50u: goto label_3d3b50;
            case 0x3D3B5Cu: goto label_3d3b5c;
            case 0x3D3B98u: goto label_3d3b98;
            case 0x3D3BD0u: goto label_3d3bd0;
            case 0x3D3BECu: goto label_3d3bec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D3B50u;
label_3d3b50:
    // 0x3d3b50: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3d3b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_3d3b54:
    // 0x3d3b54: 0x10000012  b           . + 4 + (0x12 << 2)
label_3d3b58:
    if (ctx->pc == 0x3D3B58u) {
        ctx->pc = 0x3D3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B54u;
        // 0x3d3b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B5Cu;
        goto label_3d3b5c;
    }
    ctx->pc = 0x3D3B54u;
    {
        const bool branch_taken_0x3d3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B54u;
        // 0x3d3b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b54) {
            ctx->pc = 0x3D3BA0u;
            goto label_3d3ba0;
        }
    }
    ctx->pc = 0x3D3B5Cu;
label_3d3b5c:
    // 0x3d3b5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b60:
    // 0x3d3b60: 0xc0e90ca  jal         func_3A4328
label_3d3b64:
    if (ctx->pc == 0x3D3B64u) {
        ctx->pc = 0x3D3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B60u;
        // 0x3d3b64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B68u;
        goto label_3d3b68;
    }
    ctx->pc = 0x3D3B60u;
    SET_GPR_U32(ctx, 31, 0x3D3B68u);
    ctx->pc = 0x3D3B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3B60u;
    // 0x3d3b64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D3B60u, 0x3D3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3B68u;
label_3d3b68:
    // 0x3d3b68: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3d3b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3b6c:
    // 0x3d3b6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b70:
    // 0x3d3b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d3b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3b74:
    // 0x3d3b74: 0xc0e911e  jal         func_3A4478
label_3d3b78:
    if (ctx->pc == 0x3D3B78u) {
        ctx->pc = 0x3D3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B74u;
        // 0x3d3b78: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B7Cu;
        goto label_3d3b7c;
    }
    ctx->pc = 0x3D3B74u;
    SET_GPR_U32(ctx, 31, 0x3D3B7Cu);
    ctx->pc = 0x3D3B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3B74u;
    // 0x3d3b78: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D3B74u, 0x3D3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3B7Cu;
label_3d3b7c:
    // 0x3d3b7c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d3b80:
    // 0x3d3b80: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d3b80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3b84:
    // 0x3d3b84: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3d3b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3d3b88:
    // 0x3d3b88: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3d3b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3d3b8c:
    // 0x3d3b8c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3d3b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3d3b90:
    // 0x3d3b90: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3d3b94:
    if (ctx->pc == 0x3D3B94u) {
        ctx->pc = 0x3D3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B90u;
        // 0x3d3b94: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3B98u;
        goto label_3d3b98;
    }
    ctx->pc = 0x3D3B90u;
    {
        const bool branch_taken_0x3d3b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B90u;
        // 0x3d3b94: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b90) {
            ctx->pc = 0x3D3C04u;
            return;
        }
    }
    ctx->pc = 0x3D3B98u;
label_3d3b98:
    // 0x3d3b98: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x3d3b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_3d3b9c:
    // 0x3d3b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ba0:
    // 0x3d3ba0: 0xc0ea16a  jal         func_3A85A8
label_3d3ba4:
    if (ctx->pc == 0x3D3BA4u) {
        ctx->pc = 0x3D3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BA0u;
        // 0x3d3ba4: 0x34a500ff  ori         $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BA8u;
        goto label_3d3ba8;
    }
    ctx->pc = 0x3D3BA0u;
    SET_GPR_U32(ctx, 31, 0x3D3BA8u);
    ctx->pc = 0x3D3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3BA0u;
    // 0x3d3ba4: 0x34a500ff  ori         $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D3BA0u, 0x3D3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3BA8u;
label_3d3ba8:
    // 0x3d3ba8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3d3ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d3bac:
    // 0x3d3bac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d3bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3bb0:
    // 0x3d3bb0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d3bb4:
    // 0x3d3bb4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d3bb8:
    // 0x3d3bb8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d3bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d3bbc:
    // 0x3d3bbc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d3bc0:
    // 0x3d3bc0: 0x60f809  jalr        $v1
label_3d3bc4:
    if (ctx->pc == 0x3D3BC4u) {
        ctx->pc = 0x3D3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BC0u;
        // 0x3d3bc4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BC8u;
        goto label_3d3bc8;
    }
    ctx->pc = 0x3D3BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3BC8u);
        ctx->pc = 0x3D3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BC0u;
        // 0x3d3bc4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3BC0u, 0x3D3BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3BC8u;
label_3d3bc8:
    // 0x3d3bc8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3d3bcc:
    if (ctx->pc == 0x3D3BCCu) {
        ctx->pc = 0x3D3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BC8u;
        // 0x3d3bcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BD0u;
        goto label_3d3bd0;
    }
    ctx->pc = 0x3D3BC8u;
    {
        const bool branch_taken_0x3d3bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BC8u;
        // 0x3d3bcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3bc8) {
            ctx->pc = 0x3D3C08u;
            return;
        }
    }
    ctx->pc = 0x3D3BD0u;
label_3d3bd0:
    // 0x3d3bd0: 0xc0ea146  jal         func_3A8518
label_3d3bd4:
    if (ctx->pc == 0x3D3BD4u) {
        ctx->pc = 0x3D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BD0u;
        // 0x3d3bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BD8u;
        goto label_3d3bd8;
    }
    ctx->pc = 0x3D3BD0u;
    SET_GPR_U32(ctx, 31, 0x3D3BD8u);
    ctx->pc = 0x3D3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3BD0u;
    // 0x3d3bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D3BD0u, 0x3D3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3BD8u;
label_3d3bd8:
    // 0x3d3bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3bdc:
    // 0x3d3bdc: 0xc0e85fa  jal         func_3A17E8
label_3d3be0:
    if (ctx->pc == 0x3D3BE0u) {
        ctx->pc = 0x3D3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BDCu;
        // 0x3d3be0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BE4u;
        goto label_3d3be4;
    }
    ctx->pc = 0x3D3BDCu;
    SET_GPR_U32(ctx, 31, 0x3D3BE4u);
    ctx->pc = 0x3D3BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3BDCu;
    // 0x3d3be0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3D3BDCu, 0x3D3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3BE4u;
label_3d3be4:
    // 0x3d3be4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d3be8:
    if (ctx->pc == 0x3D3BE8u) {
        ctx->pc = 0x3D3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BE4u;
        // 0x3d3be8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BECu;
        goto label_3d3bec;
    }
    ctx->pc = 0x3D3BE4u;
    {
        const bool branch_taken_0x3d3be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BE4u;
        // 0x3d3be8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3be4) {
            ctx->pc = 0x3D3C08u;
            return;
        }
    }
    ctx->pc = 0x3D3BECu;
label_3d3bec:
    // 0x3d3bec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d3becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d3bf0:
    // 0x3d3bf0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d3bf4:
    if (ctx->pc == 0x3D3BF4u) {
        ctx->pc = 0x3D3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BF0u;
        // 0x3d3bf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3BF8u;
        goto label_3d3bf8;
    }
    ctx->pc = 0x3D3BF0u;
    {
        const bool branch_taken_0x3d3bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3bf0) {
            ctx->pc = 0x3D3BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3BF0u;
            // 0x3d3bf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3C08u;
            return;
        }
    }
    ctx->pc = 0x3D3BF8u;
label_3d3bf8:
    // 0x3d3bf8: 0xc0e95f6  jal         func_3A57D8
label_3d3bfc:
    if (ctx->pc == 0x3D3BFCu) {
        ctx->pc = 0x3D3C00u;
        goto label_3d3c00;
    }
    ctx->pc = 0x3D3BF8u;
    SET_GPR_U32(ctx, 31, 0x3D3C00u);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D3BF8u, 0x3D3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3C00u;
label_3d3c00:
    // 0x3d3c00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3d3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x3d3c04u;
}
