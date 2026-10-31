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

// Function: sub_00127AC8
// Address: 0x127ac8 - 0x127c10
void sub_00127AC8_0x127ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127AC8_0x127ac8");
#endif

    switch (ctx->pc) {
        case 0x127ac8u: goto label_127ac8;
        case 0x127accu: goto label_127acc;
        case 0x127ad0u: goto label_127ad0;
        case 0x127ad4u: goto label_127ad4;
        case 0x127ad8u: goto label_127ad8;
        case 0x127adcu: goto label_127adc;
        case 0x127ae0u: goto label_127ae0;
        case 0x127ae4u: goto label_127ae4;
        case 0x127ae8u: goto label_127ae8;
        case 0x127aecu: goto label_127aec;
        case 0x127af0u: goto label_127af0;
        case 0x127af4u: goto label_127af4;
        case 0x127af8u: goto label_127af8;
        case 0x127afcu: goto label_127afc;
        case 0x127b00u: goto label_127b00;
        case 0x127b04u: goto label_127b04;
        case 0x127b08u: goto label_127b08;
        case 0x127b0cu: goto label_127b0c;
        case 0x127b10u: goto label_127b10;
        case 0x127b14u: goto label_127b14;
        case 0x127b18u: goto label_127b18;
        case 0x127b1cu: goto label_127b1c;
        case 0x127b20u: goto label_127b20;
        case 0x127b24u: goto label_127b24;
        case 0x127b28u: goto label_127b28;
        case 0x127b2cu: goto label_127b2c;
        case 0x127b30u: goto label_127b30;
        case 0x127b34u: goto label_127b34;
        case 0x127b38u: goto label_127b38;
        case 0x127b3cu: goto label_127b3c;
        case 0x127b40u: goto label_127b40;
        case 0x127b44u: goto label_127b44;
        case 0x127b48u: goto label_127b48;
        case 0x127b4cu: goto label_127b4c;
        case 0x127b50u: goto label_127b50;
        case 0x127b54u: goto label_127b54;
        case 0x127b58u: goto label_127b58;
        case 0x127b5cu: goto label_127b5c;
        case 0x127b60u: goto label_127b60;
        case 0x127b64u: goto label_127b64;
        case 0x127b68u: goto label_127b68;
        case 0x127b6cu: goto label_127b6c;
        case 0x127b70u: goto label_127b70;
        case 0x127b74u: goto label_127b74;
        case 0x127b78u: goto label_127b78;
        case 0x127b7cu: goto label_127b7c;
        case 0x127b80u: goto label_127b80;
        case 0x127b84u: goto label_127b84;
        case 0x127b88u: goto label_127b88;
        case 0x127b8cu: goto label_127b8c;
        case 0x127b90u: goto label_127b90;
        case 0x127b94u: goto label_127b94;
        case 0x127b98u: goto label_127b98;
        case 0x127b9cu: goto label_127b9c;
        case 0x127ba0u: goto label_127ba0;
        case 0x127ba4u: goto label_127ba4;
        case 0x127ba8u: goto label_127ba8;
        case 0x127bacu: goto label_127bac;
        case 0x127bb0u: goto label_127bb0;
        case 0x127bb4u: goto label_127bb4;
        case 0x127bb8u: goto label_127bb8;
        case 0x127bbcu: goto label_127bbc;
        case 0x127bc0u: goto label_127bc0;
        case 0x127bc4u: goto label_127bc4;
        case 0x127bc8u: goto label_127bc8;
        case 0x127bccu: goto label_127bcc;
        case 0x127bd0u: goto label_127bd0;
        case 0x127bd4u: goto label_127bd4;
        case 0x127bd8u: goto label_127bd8;
        case 0x127bdcu: goto label_127bdc;
        case 0x127be0u: goto label_127be0;
        case 0x127be4u: goto label_127be4;
        case 0x127be8u: goto label_127be8;
        case 0x127becu: goto label_127bec;
        case 0x127bf0u: goto label_127bf0;
        case 0x127bf4u: goto label_127bf4;
        case 0x127bf8u: goto label_127bf8;
        case 0x127bfcu: goto label_127bfc;
        case 0x127c00u: goto label_127c00;
        case 0x127c04u: goto label_127c04;
        case 0x127c08u: goto label_127c08;
        case 0x127c0cu: goto label_127c0c;
        default: break;
    }

    ctx->pc = 0x127ac8u;

label_127ac8:
    // 0x127ac8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x127ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_127acc:
    // 0x127acc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x127accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_127ad0:
    // 0x127ad0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x127ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_127ad4:
    // 0x127ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127ad8:
    // 0x127ad8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x127ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_127adc:
    // 0x127adc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x127adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_127ae0:
    // 0x127ae0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x127ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_127ae4:
    // 0x127ae4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x127ae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_127ae8:
    // 0x127ae8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x127ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_127aec:
    // 0x127aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_127af0:
    // 0x127af0: 0xa2000472  sb          $zero, 0x472($s0)
    ctx->pc = 0x127af0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1138), (uint8_t)GPR_U32(ctx, 0));
label_127af4:
    // 0x127af4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x127af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_127af8:
    // 0x127af8: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x127af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_127afc:
    // 0x127afc: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_127b00:
    // 0x127b00: 0x40f809  jalr        $v0
label_127b04:
    if (ctx->pc == 0x127B04u) {
        ctx->pc = 0x127B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B00u;
        // 0x127b04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B08u;
        goto label_127b08;
    }
    ctx->pc = 0x127B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127B08u);
        ctx->pc = 0x127B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B00u;
        // 0x127b04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B00u, 0x127B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127B08u;
label_127b08:
    // 0x127b08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x127b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_127b0c:
    // 0x127b0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x127b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_127b10:
    // 0x127b10: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x127b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_127b14:
    // 0x127b14: 0x54440036  bnel        $v0, $a0, . + 4 + (0x36 << 2)
label_127b18:
    if (ctx->pc == 0x127B18u) {
        ctx->pc = 0x127B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B14u;
        // 0x127b18: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B1Cu;
        goto label_127b1c;
    }
    ctx->pc = 0x127B14u;
    {
        const bool branch_taken_0x127b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x127b14) {
            ctx->pc = 0x127B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127B14u;
            // 0x127b18: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127BF0u;
            goto label_127bf0;
        }
    }
    ctx->pc = 0x127B1Cu;
label_127b1c:
    // 0x127b1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x127b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_127b20:
    // 0x127b20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x127b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_127b24:
    // 0x127b24: 0x8c53b198  lw          $s3, -0x4E68($v0)
    ctx->pc = 0x127b24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_127b28:
    // 0x127b28: 0x96030444  lhu         $v1, 0x444($s0)
    ctx->pc = 0x127b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1092)));
label_127b2c:
    // 0x127b2c: 0x8c82b194  lw          $v0, -0x4E6C($a0)
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947220)));
label_127b30:
    // 0x127b30: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_127b34:
    if (ctx->pc == 0x127B34u) {
        ctx->pc = 0x127B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B30u;
        // 0x127b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B38u;
        goto label_127b38;
    }
    ctx->pc = 0x127B30u;
    {
        const bool branch_taken_0x127b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x127B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B30u;
        // 0x127b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b30) {
            ctx->pc = 0x127B3Cu;
            goto label_127b3c;
        }
    }
    ctx->pc = 0x127B38u;
label_127b38:
    // 0x127b38: 0xa2020472  sb          $v0, 0x472($s0)
    ctx->pc = 0x127b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1138), (uint8_t)GPR_U32(ctx, 2));
label_127b3c:
    // 0x127b3c: 0x8c91b194  lw          $s1, -0x4E6C($a0)
    ctx->pc = 0x127b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947220)));
label_127b40:
    // 0x127b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127b44:
    // 0x127b44: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
label_127b48:
    if (ctx->pc == 0x127B48u) {
        ctx->pc = 0x127B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B44u;
        // 0x127b48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B4Cu;
        goto label_127b4c;
    }
    ctx->pc = 0x127B44u;
    {
        const bool branch_taken_0x127b44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x127B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B44u;
        // 0x127b48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b44) {
            ctx->pc = 0x127BD4u;
            goto label_127bd4;
        }
    }
    ctx->pc = 0x127B4Cu;
label_127b4c:
    // 0x127b4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127b50:
    // 0x127b50: 0xc047e78  jal         func_11F9E0
label_127b54:
    if (ctx->pc == 0x127B54u) {
        ctx->pc = 0x127B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B50u;
        // 0x127b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B58u;
        goto label_127b58;
    }
    ctx->pc = 0x127B50u;
    SET_GPR_U32(ctx, 31, 0x127B58u);
    ctx->pc = 0x127B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B50u;
    // 0x127b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x127B50u, 0x127B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B58u;
label_127b58:
    // 0x127b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127b5c:
    // 0x127b5c: 0x84640280  lh          $a0, 0x280($v1)
    ctx->pc = 0x127b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 640)));
label_127b60:
    // 0x127b60: 0x8c650284  lw          $a1, 0x284($v1)
    ctx->pc = 0x127b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_127b64:
    // 0x127b64: 0xa0f809  jalr        $a1
label_127b68:
    if (ctx->pc == 0x127B68u) {
        ctx->pc = 0x127B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B64u;
        // 0x127b68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B6Cu;
        goto label_127b6c;
    }
    ctx->pc = 0x127B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x127B6Cu);
        ctx->pc = 0x127B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B64u;
        // 0x127b68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B64u, 0x127B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127B6Cu;
label_127b6c:
    // 0x127b6c: 0x5451001c  bnel        $v0, $s1, . + 4 + (0x1C << 2)
label_127b70:
    if (ctx->pc == 0x127B70u) {
        ctx->pc = 0x127B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B6Cu;
        // 0x127b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B74u;
        goto label_127b74;
    }
    ctx->pc = 0x127B6Cu;
    {
        const bool branch_taken_0x127b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x127b6c) {
            ctx->pc = 0x127B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127B6Cu;
            // 0x127b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127BE0u;
            goto label_127be0;
        }
    }
    ctx->pc = 0x127B74u;
label_127b74:
    // 0x127b74: 0xc048622  jal         func_121888
label_127b78:
    if (ctx->pc == 0x127B78u) {
        ctx->pc = 0x127B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B74u;
        // 0x127b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B7Cu;
        goto label_127b7c;
    }
    ctx->pc = 0x127B74u;
    SET_GPR_U32(ctx, 31, 0x127B7Cu);
    ctx->pc = 0x127B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B74u;
    // 0x127b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121888u, 0x127B74u, 0x127B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B7Cu;
label_127b7c:
    // 0x127b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127b80:
    // 0x127b80: 0xc047e78  jal         func_11F9E0
label_127b84:
    if (ctx->pc == 0x127B84u) {
        ctx->pc = 0x127B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B80u;
        // 0x127b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B88u;
        goto label_127b88;
    }
    ctx->pc = 0x127B80u;
    SET_GPR_U32(ctx, 31, 0x127B88u);
    ctx->pc = 0x127B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B80u;
    // 0x127b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x127B80u, 0x127B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127B88u;
label_127b88:
    // 0x127b88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127b8c:
    // 0x127b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127b90:
    // 0x127b90: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_127b94:
    // 0x127b94: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x127b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_127b98:
    // 0x127b98: 0xc0f809  jalr        $a2
label_127b9c:
    if (ctx->pc == 0x127B9Cu) {
        ctx->pc = 0x127B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B98u;
        // 0x127b9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127BA0u;
        goto label_127ba0;
    }
    ctx->pc = 0x127B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x127BA0u);
        ctx->pc = 0x127B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B98u;
        // 0x127b9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B98u, 0x127BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127BA0u;
label_127ba0:
    // 0x127ba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127ba4:
    // 0x127ba4: 0xc047e78  jal         func_11F9E0
label_127ba8:
    if (ctx->pc == 0x127BA8u) {
        ctx->pc = 0x127BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BA4u;
        // 0x127ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127BACu;
        goto label_127bac;
    }
    ctx->pc = 0x127BA4u;
    SET_GPR_U32(ctx, 31, 0x127BACu);
    ctx->pc = 0x127BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127BA4u;
    // 0x127ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x127BA4u, 0x127BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BACu;
label_127bac:
    // 0x127bac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127bb0:
    // 0x127bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127bb4:
    // 0x127bb4: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x127bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_127bb8:
    // 0x127bb8: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x127bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_127bbc:
    // 0x127bbc: 0xc0f809  jalr        $a2
label_127bc0:
    if (ctx->pc == 0x127BC0u) {
        ctx->pc = 0x127BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BBCu;
        // 0x127bc0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127BC4u;
        goto label_127bc4;
    }
    ctx->pc = 0x127BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x127BC4u);
        ctx->pc = 0x127BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BBCu;
        // 0x127bc0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127BBCu, 0x127BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127BC4u;
label_127bc4:
    // 0x127bc4: 0xc048bb4  jal         func_122ED0
label_127bc8:
    if (ctx->pc == 0x127BC8u) {
        ctx->pc = 0x127BCCu;
        goto label_127bcc;
    }
    ctx->pc = 0x127BC4u;
    SET_GPR_U32(ctx, 31, 0x127BCCu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x127BC4u, 0x127BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BCCu;
label_127bcc:
    // 0x127bcc: 0x10000004  b           . + 4 + (0x4 << 2)
label_127bd0:
    if (ctx->pc == 0x127BD0u) {
        ctx->pc = 0x127BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BCCu;
        // 0x127bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127BD4u;
        goto label_127bd4;
    }
    ctx->pc = 0x127BCCu;
    {
        const bool branch_taken_0x127bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BCCu;
        // 0x127bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bcc) {
            ctx->pc = 0x127BE0u;
            goto label_127be0;
        }
    }
    ctx->pc = 0x127BD4u;
label_127bd4:
    // 0x127bd4: 0xc049b10  jal         func_126C40
label_127bd8:
    if (ctx->pc == 0x127BD8u) {
        ctx->pc = 0x127BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BD4u;
        // 0x127bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127BDCu;
        goto label_127bdc;
    }
    ctx->pc = 0x127BD4u;
    SET_GPR_U32(ctx, 31, 0x127BDCu);
    ctx->pc = 0x127BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127BD4u;
    // 0x127bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C40u, 0x127BD4u, 0x127BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BDCu;
label_127bdc:
    // 0x127bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127be0:
    // 0x127be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x127be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_127be4:
    // 0x127be4: 0xc049da8  jal         func_1276A0
label_127be8:
    if (ctx->pc == 0x127BE8u) {
        ctx->pc = 0x127BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BE4u;
        // 0x127be8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127BECu;
        goto label_127bec;
    }
    ctx->pc = 0x127BE4u;
    SET_GPR_U32(ctx, 31, 0x127BECu);
    ctx->pc = 0x127BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127BE4u;
    // 0x127be8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276A0u, 0x127BE4u, 0x127BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BECu;
label_127bec:
    // 0x127bec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x127becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_127bf0:
    // 0x127bf0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x127bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_127bf4:
    // 0x127bf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x127bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127bf8:
    // 0x127bf8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x127bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127bfc:
    // 0x127bfc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x127bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127c00:
    // 0x127c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127c04:
    // 0x127c04: 0x3e00008  jr          $ra
label_127c08:
    if (ctx->pc == 0x127C08u) {
        ctx->pc = 0x127C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C04u;
        // 0x127c08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127C0Cu;
        goto label_127c0c;
    }
    ctx->pc = 0x127C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C04u;
        // 0x127c08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C0Cu;
label_127c0c:
    // 0x127c0c: 0x0  nop
    ctx->pc = 0x127c0cu;
    // NOP
    ctx->pc = 0x127c10u;
}
