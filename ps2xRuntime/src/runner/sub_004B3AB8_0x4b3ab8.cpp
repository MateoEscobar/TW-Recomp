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

// Function: sub_004B3AB8
// Address: 0x4b3ab8 - 0x4b3ba0
void sub_004B3AB8_0x4b3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3AB8_0x4b3ab8");
#endif

    switch (ctx->pc) {
        case 0x4b3ab8u: goto label_4b3ab8;
        case 0x4b3abcu: goto label_4b3abc;
        case 0x4b3ac0u: goto label_4b3ac0;
        case 0x4b3ac4u: goto label_4b3ac4;
        case 0x4b3ac8u: goto label_4b3ac8;
        case 0x4b3accu: goto label_4b3acc;
        case 0x4b3ad0u: goto label_4b3ad0;
        case 0x4b3ad4u: goto label_4b3ad4;
        case 0x4b3ad8u: goto label_4b3ad8;
        case 0x4b3adcu: goto label_4b3adc;
        case 0x4b3ae0u: goto label_4b3ae0;
        case 0x4b3ae4u: goto label_4b3ae4;
        case 0x4b3ae8u: goto label_4b3ae8;
        case 0x4b3aecu: goto label_4b3aec;
        case 0x4b3af0u: goto label_4b3af0;
        case 0x4b3af4u: goto label_4b3af4;
        case 0x4b3af8u: goto label_4b3af8;
        case 0x4b3afcu: goto label_4b3afc;
        case 0x4b3b00u: goto label_4b3b00;
        case 0x4b3b04u: goto label_4b3b04;
        case 0x4b3b08u: goto label_4b3b08;
        case 0x4b3b0cu: goto label_4b3b0c;
        case 0x4b3b10u: goto label_4b3b10;
        case 0x4b3b14u: goto label_4b3b14;
        case 0x4b3b18u: goto label_4b3b18;
        case 0x4b3b1cu: goto label_4b3b1c;
        case 0x4b3b20u: goto label_4b3b20;
        case 0x4b3b24u: goto label_4b3b24;
        case 0x4b3b28u: goto label_4b3b28;
        case 0x4b3b2cu: goto label_4b3b2c;
        case 0x4b3b30u: goto label_4b3b30;
        case 0x4b3b34u: goto label_4b3b34;
        case 0x4b3b38u: goto label_4b3b38;
        case 0x4b3b3cu: goto label_4b3b3c;
        case 0x4b3b40u: goto label_4b3b40;
        case 0x4b3b44u: goto label_4b3b44;
        case 0x4b3b48u: goto label_4b3b48;
        case 0x4b3b4cu: goto label_4b3b4c;
        case 0x4b3b50u: goto label_4b3b50;
        case 0x4b3b54u: goto label_4b3b54;
        case 0x4b3b58u: goto label_4b3b58;
        case 0x4b3b5cu: goto label_4b3b5c;
        case 0x4b3b60u: goto label_4b3b60;
        case 0x4b3b64u: goto label_4b3b64;
        case 0x4b3b68u: goto label_4b3b68;
        case 0x4b3b6cu: goto label_4b3b6c;
        case 0x4b3b70u: goto label_4b3b70;
        case 0x4b3b74u: goto label_4b3b74;
        case 0x4b3b78u: goto label_4b3b78;
        case 0x4b3b7cu: goto label_4b3b7c;
        case 0x4b3b80u: goto label_4b3b80;
        case 0x4b3b84u: goto label_4b3b84;
        case 0x4b3b88u: goto label_4b3b88;
        case 0x4b3b8cu: goto label_4b3b8c;
        case 0x4b3b90u: goto label_4b3b90;
        case 0x4b3b94u: goto label_4b3b94;
        case 0x4b3b98u: goto label_4b3b98;
        case 0x4b3b9cu: goto label_4b3b9c;
        default: break;
    }

    ctx->pc = 0x4b3ab8u;

label_4b3ab8:
    // 0x4b3ab8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4b3ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4b3abc:
    // 0x4b3abc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4b3ac0:
    // 0x4b3ac0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x4b3ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_4b3ac4:
    // 0x4b3ac4: 0x8c4226a8  lw          $v0, 0x26A8($v0)
    ctx->pc = 0x4b3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9896)));
label_4b3ac8:
    // 0x4b3ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b3ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b3acc:
    // 0x4b3acc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4b3accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4b3ad0:
    // 0x4b3ad0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x4b3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_4b3ad4:
    // 0x4b3ad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b3ad8:
    if (ctx->pc == 0x4B3AD8u) {
        ctx->pc = 0x4B3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AD4u;
        // 0x4b3ad8: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3ADCu;
        goto label_4b3adc;
    }
    ctx->pc = 0x4B3AD4u;
    {
        const bool branch_taken_0x4b3ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AD4u;
        // 0x4b3ad8: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ad4) {
            ctx->pc = 0x4B3AE4u;
            goto label_4b3ae4;
        }
    }
    ctx->pc = 0x4B3ADCu;
label_4b3adc:
    // 0x4b3adc: 0x40f809  jalr        $v0
label_4b3ae0:
    if (ctx->pc == 0x4B3AE0u) {
        ctx->pc = 0x4B3AE4u;
        goto label_4b3ae4;
    }
    ctx->pc = 0x4B3ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B3AE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3ADCu, 0x4B3AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B3AE4u;
label_4b3ae4:
    // 0x4b3ae4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x4b3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_4b3ae8:
    // 0x4b3ae8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_4b3aec:
    if (ctx->pc == 0x4B3AECu) {
        ctx->pc = 0x4B3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AE8u;
        // 0x4b3aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3AF0u;
        goto label_4b3af0;
    }
    ctx->pc = 0x4B3AE8u;
    {
        const bool branch_taken_0x4b3ae8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AE8u;
        // 0x4b3aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ae8) {
            ctx->pc = 0x4B3B08u;
            goto label_4b3b08;
        }
    }
    ctx->pc = 0x4B3AF0u;
label_4b3af0:
    // 0x4b3af0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b3af4:
    // 0x4b3af4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x4b3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4b3af8:
    // 0x4b3af8: 0x40f809  jalr        $v0
label_4b3afc:
    if (ctx->pc == 0x4B3AFCu) {
        ctx->pc = 0x4B3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AF8u;
        // 0x4b3afc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B00u;
        goto label_4b3b00;
    }
    ctx->pc = 0x4B3AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B3B00u);
        ctx->pc = 0x4B3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AF8u;
        // 0x4b3afc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3AF8u, 0x4B3B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B3B00u;
label_4b3b00:
    // 0x4b3b00: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_4b3b04:
    if (ctx->pc == 0x4B3B04u) {
        ctx->pc = 0x4B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B00u;
        // 0x4b3b04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B08u;
        goto label_4b3b08;
    }
    ctx->pc = 0x4B3B00u;
    {
        const bool branch_taken_0x4b3b00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B00u;
        // 0x4b3b04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b00) {
            ctx->pc = 0x4B3B14u;
            goto label_4b3b14;
        }
    }
    ctx->pc = 0x4B3B08u;
label_4b3b08:
    // 0x4b3b08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b3b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3b0c:
    // 0x4b3b0c: 0x1000000a  b           . + 4 + (0xA << 2)
label_4b3b10:
    if (ctx->pc == 0x4B3B10u) {
        ctx->pc = 0x4B3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B0Cu;
        // 0x4b3b10: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B14u;
        goto label_4b3b14;
    }
    ctx->pc = 0x4B3B0Cu;
    {
        const bool branch_taken_0x4b3b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B0Cu;
        // 0x4b3b10: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b0c) {
            ctx->pc = 0x4B3B38u;
            goto label_4b3b38;
        }
    }
    ctx->pc = 0x4B3B14u;
label_4b3b14:
    // 0x4b3b14: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x4b3b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_4b3b18:
    // 0x4b3b18: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x4b3b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4b3b1c:
    // 0x4b3b1c: 0x3071f000  andi        $s1, $v1, 0xF000
    ctx->pc = 0x4b3b1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_4b3b20:
    // 0x4b3b20: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x4b3b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_4b3b24:
    // 0x4b3b24: 0x3a242000  xori        $a0, $s1, 0x2000
    ctx->pc = 0x4b3b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
label_4b3b28:
    // 0x4b3b28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b3b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4b3b2c:
    // 0x4b3b2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b3b2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4b3b30:
    // 0x4b3b30: 0x2c910001  sltiu       $s1, $a0, 0x1
    ctx->pc = 0x4b3b30u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4b3b34:
    // 0x4b3b34: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x4b3b34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_4b3b38:
    // 0x4b3b38: 0xc10ced8  jal         func_433B60
label_4b3b3c:
    if (ctx->pc == 0x4B3B3Cu) {
        ctx->pc = 0x4B3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B38u;
        // 0x4b3b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B40u;
        goto label_4b3b40;
    }
    ctx->pc = 0x4B3B38u;
    SET_GPR_U32(ctx, 31, 0x4B3B40u);
    ctx->pc = 0x4B3B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B38u;
    // 0x4b3b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4B3B38u, 0x4B3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B40u;
label_4b3b40:
    // 0x4b3b40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4b3b44:
    if (ctx->pc == 0x4B3B44u) {
        ctx->pc = 0x4B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B40u;
        // 0x4b3b44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B48u;
        goto label_4b3b48;
    }
    ctx->pc = 0x4B3B40u;
    {
        const bool branch_taken_0x4b3b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B40u;
        // 0x4b3b44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b40) {
            ctx->pc = 0x4B3B50u;
            goto label_4b3b50;
        }
    }
    ctx->pc = 0x4B3B48u;
label_4b3b48:
    // 0x4b3b48: 0x1000000f  b           . + 4 + (0xF << 2)
label_4b3b4c:
    if (ctx->pc == 0x4B3B4Cu) {
        ctx->pc = 0x4B3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B48u;
        // 0x4b3b4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B50u;
        goto label_4b3b50;
    }
    ctx->pc = 0x4B3B48u;
    {
        const bool branch_taken_0x4b3b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B48u;
        // 0x4b3b4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b48) {
            ctx->pc = 0x4B3B88u;
            goto label_4b3b88;
        }
    }
    ctx->pc = 0x4B3B50u;
label_4b3b50:
    // 0x4b3b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b3b54:
    // 0x4b3b54: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x4b3b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4b3b58:
    // 0x4b3b58: 0xc12c392  jal         func_4B0E48
label_4b3b5c:
    if (ctx->pc == 0x4B3B5Cu) {
        ctx->pc = 0x4B3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B58u;
        // 0x4b3b5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B60u;
        goto label_4b3b60;
    }
    ctx->pc = 0x4B3B58u;
    SET_GPR_U32(ctx, 31, 0x4B3B60u);
    ctx->pc = 0x4B3B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B58u;
    // 0x4b3b5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E48u, 0x4B3B58u, 0x4B3B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B60u;
label_4b3b60:
    // 0x4b3b60: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_4b3b64:
    if (ctx->pc == 0x4B3B64u) {
        ctx->pc = 0x4B3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B60u;
        // 0x4b3b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B68u;
        goto label_4b3b68;
    }
    ctx->pc = 0x4B3B60u;
    {
        const bool branch_taken_0x4b3b60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B60u;
        // 0x4b3b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b60) {
            ctx->pc = 0x4B3B88u;
            goto label_4b3b88;
        }
    }
    ctx->pc = 0x4B3B68u;
label_4b3b68:
    // 0x4b3b68: 0xc10f612  jal         func_43D848
label_4b3b6c:
    if (ctx->pc == 0x4B3B6Cu) {
        ctx->pc = 0x4B3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B68u;
        // 0x4b3b6c: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B70u;
        goto label_4b3b70;
    }
    ctx->pc = 0x4B3B68u;
    SET_GPR_U32(ctx, 31, 0x4B3B70u);
    ctx->pc = 0x4B3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B68u;
    // 0x4b3b6c: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D848u, 0x4B3B68u, 0x4B3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B70u;
label_4b3b70:
    // 0x4b3b70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b3b74:
    if (ctx->pc == 0x4B3B74u) {
        ctx->pc = 0x4B3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B70u;
        // 0x4b3b74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3B78u;
        goto label_4b3b78;
    }
    ctx->pc = 0x4B3B70u;
    {
        const bool branch_taken_0x4b3b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B70u;
        // 0x4b3b74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b70) {
            ctx->pc = 0x4B3B88u;
            goto label_4b3b88;
        }
    }
    ctx->pc = 0x4B3B78u;
label_4b3b78:
    // 0x4b3b78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b3b7c:
    // 0x4b3b7c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x4b3b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_4b3b80:
    // 0x4b3b80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b3b84:
    // 0x4b3b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b3b88:
    // 0x4b3b88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4b3b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4b3b8c:
    // 0x4b3b8c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x4b3b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b3b90:
    // 0x4b3b90: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x4b3b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4b3b94:
    // 0x4b3b94: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x4b3b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4b3b98:
    // 0x4b3b98: 0x3e00008  jr          $ra
label_4b3b9c:
    if (ctx->pc == 0x4B3B9Cu) {
        ctx->pc = 0x4B3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B98u;
        // 0x4b3b9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3BA0u;
        goto label_fallthrough_0x4b3b98;
    }
    ctx->pc = 0x4B3B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B98u;
        // 0x4b3b9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b3b98:
    ctx->pc = 0x4B3BA0u;
}
