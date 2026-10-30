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

// Function: sub_003E8A48
// Address: 0x3e8a48 - 0x3e8bb8
void sub_003E8A48_0x3e8a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8A48_0x3e8a48");
#endif

    switch (ctx->pc) {
        case 0x3e8a48u: goto label_3e8a48;
        case 0x3e8a4cu: goto label_3e8a4c;
        case 0x3e8a50u: goto label_3e8a50;
        case 0x3e8a54u: goto label_3e8a54;
        case 0x3e8a58u: goto label_3e8a58;
        case 0x3e8a5cu: goto label_3e8a5c;
        case 0x3e8a60u: goto label_3e8a60;
        case 0x3e8a64u: goto label_3e8a64;
        case 0x3e8a68u: goto label_3e8a68;
        case 0x3e8a6cu: goto label_3e8a6c;
        case 0x3e8a70u: goto label_3e8a70;
        case 0x3e8a74u: goto label_3e8a74;
        case 0x3e8a78u: goto label_3e8a78;
        case 0x3e8a7cu: goto label_3e8a7c;
        case 0x3e8a80u: goto label_3e8a80;
        case 0x3e8a84u: goto label_3e8a84;
        case 0x3e8a88u: goto label_3e8a88;
        case 0x3e8a8cu: goto label_3e8a8c;
        case 0x3e8a90u: goto label_3e8a90;
        case 0x3e8a94u: goto label_3e8a94;
        case 0x3e8a98u: goto label_3e8a98;
        case 0x3e8a9cu: goto label_3e8a9c;
        case 0x3e8aa0u: goto label_3e8aa0;
        case 0x3e8aa4u: goto label_3e8aa4;
        case 0x3e8aa8u: goto label_3e8aa8;
        case 0x3e8aacu: goto label_3e8aac;
        case 0x3e8ab0u: goto label_3e8ab0;
        case 0x3e8ab4u: goto label_3e8ab4;
        case 0x3e8ab8u: goto label_3e8ab8;
        case 0x3e8abcu: goto label_3e8abc;
        case 0x3e8ac0u: goto label_3e8ac0;
        case 0x3e8ac4u: goto label_3e8ac4;
        case 0x3e8ac8u: goto label_3e8ac8;
        case 0x3e8accu: goto label_3e8acc;
        case 0x3e8ad0u: goto label_3e8ad0;
        case 0x3e8ad4u: goto label_3e8ad4;
        case 0x3e8ad8u: goto label_3e8ad8;
        case 0x3e8adcu: goto label_3e8adc;
        case 0x3e8ae0u: goto label_3e8ae0;
        case 0x3e8ae4u: goto label_3e8ae4;
        case 0x3e8ae8u: goto label_3e8ae8;
        case 0x3e8aecu: goto label_3e8aec;
        case 0x3e8af0u: goto label_3e8af0;
        case 0x3e8af4u: goto label_3e8af4;
        case 0x3e8af8u: goto label_3e8af8;
        case 0x3e8afcu: goto label_3e8afc;
        case 0x3e8b00u: goto label_3e8b00;
        case 0x3e8b04u: goto label_3e8b04;
        case 0x3e8b08u: goto label_3e8b08;
        case 0x3e8b0cu: goto label_3e8b0c;
        case 0x3e8b10u: goto label_3e8b10;
        case 0x3e8b14u: goto label_3e8b14;
        case 0x3e8b18u: goto label_3e8b18;
        case 0x3e8b1cu: goto label_3e8b1c;
        case 0x3e8b20u: goto label_3e8b20;
        case 0x3e8b24u: goto label_3e8b24;
        case 0x3e8b28u: goto label_3e8b28;
        case 0x3e8b2cu: goto label_3e8b2c;
        case 0x3e8b30u: goto label_3e8b30;
        case 0x3e8b34u: goto label_3e8b34;
        case 0x3e8b38u: goto label_3e8b38;
        case 0x3e8b3cu: goto label_3e8b3c;
        case 0x3e8b40u: goto label_3e8b40;
        case 0x3e8b44u: goto label_3e8b44;
        case 0x3e8b48u: goto label_3e8b48;
        case 0x3e8b4cu: goto label_3e8b4c;
        case 0x3e8b50u: goto label_3e8b50;
        case 0x3e8b54u: goto label_3e8b54;
        case 0x3e8b58u: goto label_3e8b58;
        case 0x3e8b5cu: goto label_3e8b5c;
        case 0x3e8b60u: goto label_3e8b60;
        case 0x3e8b64u: goto label_3e8b64;
        case 0x3e8b68u: goto label_3e8b68;
        case 0x3e8b6cu: goto label_3e8b6c;
        case 0x3e8b70u: goto label_3e8b70;
        case 0x3e8b74u: goto label_3e8b74;
        case 0x3e8b78u: goto label_3e8b78;
        case 0x3e8b7cu: goto label_3e8b7c;
        case 0x3e8b80u: goto label_3e8b80;
        case 0x3e8b84u: goto label_3e8b84;
        case 0x3e8b88u: goto label_3e8b88;
        case 0x3e8b8cu: goto label_3e8b8c;
        case 0x3e8b90u: goto label_3e8b90;
        case 0x3e8b94u: goto label_3e8b94;
        case 0x3e8b98u: goto label_3e8b98;
        case 0x3e8b9cu: goto label_3e8b9c;
        case 0x3e8ba0u: goto label_3e8ba0;
        case 0x3e8ba4u: goto label_3e8ba4;
        case 0x3e8ba8u: goto label_3e8ba8;
        case 0x3e8bacu: goto label_3e8bac;
        case 0x3e8bb0u: goto label_3e8bb0;
        case 0x3e8bb4u: goto label_3e8bb4;
        default: break;
    }

    ctx->pc = 0x3e8a48u;

label_3e8a48:
    // 0x3e8a48: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x3e8a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_3e8a4c:
    // 0x3e8a4c: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x3e8a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
label_3e8a50:
    // 0x3e8a50: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x3e8a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
label_3e8a54:
    // 0x3e8a54: 0x7fb20420  sq          $s2, 0x420($sp)
    ctx->pc = 0x3e8a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 18));
label_3e8a58:
    // 0x3e8a58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8a5c:
    // 0x3e8a5c: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3e8a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3e8a60:
    // 0x3e8a60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8a64:
    // 0x3e8a64: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8a68:
    // 0x3e8a68: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8a6c:
    // 0x3e8a6c: 0x40f809  jalr        $v0
label_3e8a70:
    if (ctx->pc == 0x3E8A70u) {
        ctx->pc = 0x3E8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A6Cu;
        // 0x3e8a70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8A74u;
        goto label_3e8a74;
    }
    ctx->pc = 0x3E8A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8A74u);
        ctx->pc = 0x3E8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A6Cu;
        // 0x3e8a70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8A6Cu, 0x3E8A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8A74u;
label_3e8a74:
    // 0x3e8a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8a78:
    // 0x3e8a78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e8a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8a7c:
    // 0x3e8a7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e8a80:
    // 0x3e8a80: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e8a84:
    // 0x3e8a84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e8a88:
    // 0x3e8a88: 0x0  nop
    ctx->pc = 0x3e8a88u;
    // NOP
label_3e8a8c:
    // 0x3e8a8c: 0x0  nop
    ctx->pc = 0x3e8a8cu;
    // NOP
label_3e8a90:
    // 0x3e8a90: 0x0  nop
    ctx->pc = 0x3e8a90u;
    // NOP
label_3e8a94:
    // 0x3e8a94: 0x0  nop
    ctx->pc = 0x3e8a94u;
    // NOP
label_3e8a98:
    // 0x3e8a98: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e8a9c:
    if (ctx->pc == 0x3E8A9Cu) {
        ctx->pc = 0x3E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A98u;
        // 0x3e8a9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8AA0u;
        goto label_3e8aa0;
    }
    ctx->pc = 0x3E8A98u;
    {
        const bool branch_taken_0x3e8a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A98u;
        // 0x3e8a9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8a98) {
            ctx->pc = 0x3E8A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8a88;
        }
    }
    ctx->pc = 0x3E8AA0u;
label_3e8aa0:
    // 0x3e8aa0: 0xc138ddc  jal         func_4E3770
label_3e8aa4:
    if (ctx->pc == 0x3E8AA4u) {
        ctx->pc = 0x3E8AA8u;
        goto label_3e8aa8;
    }
    ctx->pc = 0x3E8AA0u;
    SET_GPR_U32(ctx, 31, 0x3E8AA8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E8AA0u, 0x3E8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8AA8u;
label_3e8aa8:
    // 0x3e8aa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e8aac:
    // 0x3e8aac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3e8ab0:
    if (ctx->pc == 0x3E8AB0u) {
        ctx->pc = 0x3E8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AACu;
        // 0x3e8ab0: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8AB4u;
        goto label_3e8ab4;
    }
    ctx->pc = 0x3E8AACu;
    {
        const bool branch_taken_0x3e8aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AACu;
        // 0x3e8ab0: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8aac) {
            ctx->pc = 0x3E8AD0u;
            goto label_3e8ad0;
        }
    }
    ctx->pc = 0x3E8AB4u;
label_3e8ab4:
    // 0x3e8ab4: 0x3c02e0e0  lui         $v0, 0xE0E0
    ctx->pc = 0x3e8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57568 << 16));
label_3e8ab8:
    // 0x3e8ab8: 0x3c05e0e0  lui         $a1, 0xE0E0
    ctx->pc = 0x3e8ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57568 << 16));
label_3e8abc:
    // 0x3e8abc: 0x3442ffe4  ori         $v0, $v0, 0xFFE4
    ctx->pc = 0x3e8abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65508);
label_3e8ac0:
    // 0x3e8ac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e8ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8ac4:
    // 0x3e8ac4: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3e8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3e8ac8:
    // 0x3e8ac8: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e8acc:
    if (ctx->pc == 0x3E8ACCu) {
        ctx->pc = 0x3E8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AC8u;
        // 0x3e8acc: 0x34a5ffe4  ori         $a1, $a1, 0xFFE4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65508);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8AD0u;
        goto label_3e8ad0;
    }
    ctx->pc = 0x3E8AC8u;
    {
        const bool branch_taken_0x3e8ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AC8u;
        // 0x3e8acc: 0x34a5ffe4  ori         $a1, $a1, 0xFFE4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65508);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ac8) {
            ctx->pc = 0x3E8AF4u;
            goto label_3e8af4;
        }
    }
    ctx->pc = 0x3E8AD0u;
label_3e8ad0:
    // 0x3e8ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8ad4:
    // 0x3e8ad4: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_3e8ad8:
    if (ctx->pc == 0x3E8AD8u) {
        ctx->pc = 0x3E8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AD4u;
        // 0x3e8ad8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8ADCu;
        goto label_3e8adc;
    }
    ctx->pc = 0x3E8AD4u;
    {
        const bool branch_taken_0x3e8ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8ad4) {
            ctx->pc = 0x3E8AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8AD4u;
            // 0x3e8ad8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8B30u;
            goto label_3e8b30;
        }
    }
    ctx->pc = 0x3E8ADCu;
label_3e8adc:
    // 0x3e8adc: 0x3c02ffe0  lui         $v0, 0xFFE0
    ctx->pc = 0x3e8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
label_3e8ae0:
    // 0x3e8ae0: 0x3c05ffe0  lui         $a1, 0xFFE0
    ctx->pc = 0x3e8ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65504 << 16));
label_3e8ae4:
    // 0x3e8ae4: 0x3442e0e4  ori         $v0, $v0, 0xE0E4
    ctx->pc = 0x3e8ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57572);
label_3e8ae8:
    // 0x3e8ae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e8ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8aec:
    // 0x3e8aec: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3e8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3e8af0:
    // 0x3e8af0: 0x34a5e0e4  ori         $a1, $a1, 0xE0E4
    ctx->pc = 0x3e8af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57572);
label_3e8af4:
    // 0x3e8af4: 0xc0ea16a  jal         func_3A85A8
label_3e8af8:
    if (ctx->pc == 0x3E8AF8u) {
        ctx->pc = 0x3E8AFCu;
        goto label_3e8afc;
    }
    ctx->pc = 0x3E8AF4u;
    SET_GPR_U32(ctx, 31, 0x3E8AFCu);
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E8AF4u, 0x3E8AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8AFCu;
label_3e8afc:
    // 0x3e8afc: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3e8afcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e8b00:
    // 0x3e8b00: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3e8b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3e8b04:
    // 0x3e8b04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e8b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8b08:
    // 0x3e8b08: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e8b0c:
    // 0x3e8b0c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e8b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e8b10:
    // 0x3e8b10: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e8b14:
    // 0x3e8b14: 0x60f809  jalr        $v1
label_3e8b18:
    if (ctx->pc == 0x3E8B18u) {
        ctx->pc = 0x3E8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B14u;
        // 0x3e8b18: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B1Cu;
        goto label_3e8b1c;
    }
    ctx->pc = 0x3E8B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E8B1Cu);
        ctx->pc = 0x3E8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B14u;
        // 0x3e8b18: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8B14u, 0x3E8B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8B1Cu;
label_3e8b1c:
    // 0x3e8b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3e8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e8b20:
    // 0x3e8b20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8b24:
    // 0x3e8b24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e8b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e8b28:
    // 0x3e8b28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3e8b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3e8b2c:
    // 0x3e8b2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e8b30:
    // 0x3e8b30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e8b34:
    // 0x3e8b34: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_3e8b38:
    if (ctx->pc == 0x3E8B38u) {
        ctx->pc = 0x3E8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B34u;
        // 0x3e8b38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B3Cu;
        goto label_3e8b3c;
    }
    ctx->pc = 0x3E8B34u;
    {
        const bool branch_taken_0x3e8b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8b34) {
            ctx->pc = 0x3E8B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8B34u;
            // 0x3e8b38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8B70u;
            goto label_3e8b70;
        }
    }
    ctx->pc = 0x3E8B3Cu;
label_3e8b3c:
    // 0x3e8b3c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3e8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3e8b40:
    // 0x3e8b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e8b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e8b44:
    // 0x3e8b44: 0xc0ea16a  jal         func_3A85A8
label_3e8b48:
    if (ctx->pc == 0x3E8B48u) {
        ctx->pc = 0x3E8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B44u;
        // 0x3e8b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B4Cu;
        goto label_3e8b4c;
    }
    ctx->pc = 0x3E8B44u;
    SET_GPR_U32(ctx, 31, 0x3E8B4Cu);
    ctx->pc = 0x3E8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B44u;
    // 0x3e8b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3E8B44u, 0x3E8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B4Cu;
label_3e8b4c:
    // 0x3e8b4c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3e8b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e8b50:
    // 0x3e8b50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e8b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e8b54:
    // 0x3e8b54: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3e8b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3e8b58:
    // 0x3e8b58: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e8b5c:
    // 0x3e8b5c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e8b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e8b60:
    // 0x3e8b60: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e8b64:
    // 0x3e8b64: 0x60f809  jalr        $v1
label_3e8b68:
    if (ctx->pc == 0x3E8B68u) {
        ctx->pc = 0x3E8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B64u;
        // 0x3e8b68: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B6Cu;
        goto label_3e8b6c;
    }
    ctx->pc = 0x3E8B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E8B6Cu);
        ctx->pc = 0x3E8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B64u;
        // 0x3e8b68: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8B64u, 0x3E8B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8B6Cu;
label_3e8b6c:
    // 0x3e8b6c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e8b70:
    // 0x3e8b70: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x3e8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_3e8b74:
    // 0x3e8b74: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3e8b78:
    if (ctx->pc == 0x3E8B78u) {
        ctx->pc = 0x3E8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B74u;
        // 0x3e8b78: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B7Cu;
        goto label_3e8b7c;
    }
    ctx->pc = 0x3E8B74u;
    {
        const bool branch_taken_0x3e8b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B74u;
        // 0x3e8b78: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8b74) {
            ctx->pc = 0x3E8B88u;
            goto label_3e8b88;
        }
    }
    ctx->pc = 0x3E8B7Cu;
label_3e8b7c:
    // 0x3e8b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e8b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8b80:
    // 0x3e8b80: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e8b84:
    if (ctx->pc == 0x3E8B84u) {
        ctx->pc = 0x3E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B80u;
        // 0x3e8b84: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B88u;
        goto label_3e8b88;
    }
    ctx->pc = 0x3E8B80u;
    {
        const bool branch_taken_0x3e8b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B80u;
        // 0x3e8b84: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8b80) {
            ctx->pc = 0x3E8B9Cu;
            goto label_3e8b9c;
        }
    }
    ctx->pc = 0x3E8B88u;
label_3e8b88:
    // 0x3e8b88: 0xc0e95f6  jal         func_3A57D8
label_3e8b8c:
    if (ctx->pc == 0x3E8B8Cu) {
        ctx->pc = 0x3E8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B88u;
        // 0x3e8b8c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B90u;
        goto label_3e8b90;
    }
    ctx->pc = 0x3E8B88u;
    SET_GPR_U32(ctx, 31, 0x3E8B90u);
    ctx->pc = 0x3E8B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B88u;
    // 0x3e8b8c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3E8B88u, 0x3E8B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B90u;
label_3e8b90:
    // 0x3e8b90: 0xc0e93de  jal         func_3A4F78
label_3e8b94:
    if (ctx->pc == 0x3E8B94u) {
        ctx->pc = 0x3E8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B90u;
        // 0x3e8b94: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8B98u;
        goto label_3e8b98;
    }
    ctx->pc = 0x3E8B90u;
    SET_GPR_U32(ctx, 31, 0x3E8B98u);
    ctx->pc = 0x3E8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B90u;
    // 0x3e8b94: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3E8B90u, 0x3E8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B98u;
label_3e8b98:
    // 0x3e8b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8b9c:
    // 0x3e8b9c: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x3e8b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e8ba0:
    // 0x3e8ba0: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x3e8ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e8ba4:
    // 0x3e8ba4: 0x7bb20420  lq          $s2, 0x420($sp)
    ctx->pc = 0x3e8ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3e8ba8:
    // 0x3e8ba8: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3e8ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3e8bac:
    // 0x3e8bac: 0x3e00008  jr          $ra
label_3e8bb0:
    if (ctx->pc == 0x3E8BB0u) {
        ctx->pc = 0x3E8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BACu;
        // 0x3e8bb0: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8BB4u;
        goto label_3e8bb4;
    }
    ctx->pc = 0x3E8BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BACu;
        // 0x3e8bb0: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8BB4u;
label_3e8bb4:
    // 0x3e8bb4: 0x0  nop
    ctx->pc = 0x3e8bb4u;
    // NOP
    ctx->pc = 0x3e8bb8u;
}
