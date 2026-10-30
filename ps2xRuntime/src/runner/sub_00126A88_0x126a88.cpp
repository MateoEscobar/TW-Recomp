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

// Function: sub_00126A88
// Address: 0x126a88 - 0x126c40
void sub_00126A88_0x126a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A88_0x126a88");
#endif

    switch (ctx->pc) {
        case 0x126a88u: goto label_126a88;
        case 0x126a8cu: goto label_126a8c;
        case 0x126a90u: goto label_126a90;
        case 0x126a94u: goto label_126a94;
        case 0x126a98u: goto label_126a98;
        case 0x126a9cu: goto label_126a9c;
        case 0x126aa0u: goto label_126aa0;
        case 0x126aa4u: goto label_126aa4;
        case 0x126aa8u: goto label_126aa8;
        case 0x126aacu: goto label_126aac;
        case 0x126ab0u: goto label_126ab0;
        case 0x126ab4u: goto label_126ab4;
        case 0x126ab8u: goto label_126ab8;
        case 0x126abcu: goto label_126abc;
        case 0x126ac0u: goto label_126ac0;
        case 0x126ac4u: goto label_126ac4;
        case 0x126ac8u: goto label_126ac8;
        case 0x126accu: goto label_126acc;
        case 0x126ad0u: goto label_126ad0;
        case 0x126ad4u: goto label_126ad4;
        case 0x126ad8u: goto label_126ad8;
        case 0x126adcu: goto label_126adc;
        case 0x126ae0u: goto label_126ae0;
        case 0x126ae4u: goto label_126ae4;
        case 0x126ae8u: goto label_126ae8;
        case 0x126aecu: goto label_126aec;
        case 0x126af0u: goto label_126af0;
        case 0x126af4u: goto label_126af4;
        case 0x126af8u: goto label_126af8;
        case 0x126afcu: goto label_126afc;
        case 0x126b00u: goto label_126b00;
        case 0x126b04u: goto label_126b04;
        case 0x126b08u: goto label_126b08;
        case 0x126b0cu: goto label_126b0c;
        case 0x126b10u: goto label_126b10;
        case 0x126b14u: goto label_126b14;
        case 0x126b18u: goto label_126b18;
        case 0x126b1cu: goto label_126b1c;
        case 0x126b20u: goto label_126b20;
        case 0x126b24u: goto label_126b24;
        case 0x126b28u: goto label_126b28;
        case 0x126b2cu: goto label_126b2c;
        case 0x126b30u: goto label_126b30;
        case 0x126b34u: goto label_126b34;
        case 0x126b38u: goto label_126b38;
        case 0x126b3cu: goto label_126b3c;
        case 0x126b40u: goto label_126b40;
        case 0x126b44u: goto label_126b44;
        case 0x126b48u: goto label_126b48;
        case 0x126b4cu: goto label_126b4c;
        case 0x126b50u: goto label_126b50;
        case 0x126b54u: goto label_126b54;
        case 0x126b58u: goto label_126b58;
        case 0x126b5cu: goto label_126b5c;
        case 0x126b60u: goto label_126b60;
        case 0x126b64u: goto label_126b64;
        case 0x126b68u: goto label_126b68;
        case 0x126b6cu: goto label_126b6c;
        case 0x126b70u: goto label_126b70;
        case 0x126b74u: goto label_126b74;
        case 0x126b78u: goto label_126b78;
        case 0x126b7cu: goto label_126b7c;
        case 0x126b80u: goto label_126b80;
        case 0x126b84u: goto label_126b84;
        case 0x126b88u: goto label_126b88;
        case 0x126b8cu: goto label_126b8c;
        case 0x126b90u: goto label_126b90;
        case 0x126b94u: goto label_126b94;
        case 0x126b98u: goto label_126b98;
        case 0x126b9cu: goto label_126b9c;
        case 0x126ba0u: goto label_126ba0;
        case 0x126ba4u: goto label_126ba4;
        case 0x126ba8u: goto label_126ba8;
        case 0x126bacu: goto label_126bac;
        case 0x126bb0u: goto label_126bb0;
        case 0x126bb4u: goto label_126bb4;
        case 0x126bb8u: goto label_126bb8;
        case 0x126bbcu: goto label_126bbc;
        case 0x126bc0u: goto label_126bc0;
        case 0x126bc4u: goto label_126bc4;
        case 0x126bc8u: goto label_126bc8;
        case 0x126bccu: goto label_126bcc;
        case 0x126bd0u: goto label_126bd0;
        case 0x126bd4u: goto label_126bd4;
        case 0x126bd8u: goto label_126bd8;
        case 0x126bdcu: goto label_126bdc;
        case 0x126be0u: goto label_126be0;
        case 0x126be4u: goto label_126be4;
        case 0x126be8u: goto label_126be8;
        case 0x126becu: goto label_126bec;
        case 0x126bf0u: goto label_126bf0;
        case 0x126bf4u: goto label_126bf4;
        case 0x126bf8u: goto label_126bf8;
        case 0x126bfcu: goto label_126bfc;
        case 0x126c00u: goto label_126c00;
        case 0x126c04u: goto label_126c04;
        case 0x126c08u: goto label_126c08;
        case 0x126c0cu: goto label_126c0c;
        case 0x126c10u: goto label_126c10;
        case 0x126c14u: goto label_126c14;
        case 0x126c18u: goto label_126c18;
        case 0x126c1cu: goto label_126c1c;
        case 0x126c20u: goto label_126c20;
        case 0x126c24u: goto label_126c24;
        case 0x126c28u: goto label_126c28;
        case 0x126c2cu: goto label_126c2c;
        case 0x126c30u: goto label_126c30;
        case 0x126c34u: goto label_126c34;
        case 0x126c38u: goto label_126c38;
        case 0x126c3cu: goto label_126c3c;
        default: break;
    }

    ctx->pc = 0x126a88u;

label_126a88:
    // 0x126a88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x126a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_126a8c:
    // 0x126a8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x126a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_126a90:
    // 0x126a90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x126a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_126a94:
    // 0x126a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126a98:
    // 0x126a98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_126a9c:
    // 0x126a9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x126a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_126aa0:
    // 0x126aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126aa4:
    // 0x126aa4: 0x92220476  lbu         $v0, 0x476($s1)
    ctx->pc = 0x126aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1142)));
label_126aa8:
    // 0x126aa8: 0x82240477  lb          $a0, 0x477($s1)
    ctx->pc = 0x126aa8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1143)));
label_126aac:
    // 0x126aac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x126aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_126ab0:
    // 0x126ab0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x126ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_126ab4:
    // 0x126ab4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x126ab4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_126ab8:
    // 0x126ab8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x126ab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_126abc:
    // 0x126abc: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
label_126ac0:
    if (ctx->pc == 0x126AC0u) {
        ctx->pc = 0x126AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ABCu;
        // 0x126ac0: 0xa2220476  sb          $v0, 0x476($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1142), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AC4u;
        goto label_126ac4;
    }
    ctx->pc = 0x126ABCu;
    {
        const bool branch_taken_0x126abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ABCu;
        // 0x126ac0: 0xa2220476  sb          $v0, 0x476($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1142), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126abc) {
            ctx->pc = 0x126C24u;
            goto label_126c24;
        }
    }
    ctx->pc = 0x126AC4u;
label_126ac4:
    // 0x126ac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x126ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126ac8:
    // 0x126ac8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x126ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126acc:
    // 0x126acc: 0xa2220476  sb          $v0, 0x476($s1)
    ctx->pc = 0x126accu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1142), (uint8_t)GPR_U32(ctx, 2));
label_126ad0:
    // 0x126ad0: 0xc047e6c  jal         func_11F9B0
label_126ad4:
    if (ctx->pc == 0x126AD4u) {
        ctx->pc = 0x126AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AD0u;
        // 0x126ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AD8u;
        goto label_126ad8;
    }
    ctx->pc = 0x126AD0u;
    SET_GPR_U32(ctx, 31, 0x126AD8u);
    ctx->pc = 0x126AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AD0u;
    // 0x126ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x126AD0u, 0x126AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AD8u;
label_126ad8:
    // 0x126ad8: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
label_126adc:
    if (ctx->pc == 0x126ADCu) {
        ctx->pc = 0x126ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AD8u;
        // 0x126adc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AE0u;
        goto label_126ae0;
    }
    ctx->pc = 0x126AD8u;
    {
        const bool branch_taken_0x126ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x126ad8) {
            ctx->pc = 0x126ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126AD8u;
            // 0x126adc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126AF0u;
            goto label_126af0;
        }
    }
    ctx->pc = 0x126AE0u;
label_126ae0:
    // 0x126ae0: 0xc047e6c  jal         func_11F9B0
label_126ae4:
    if (ctx->pc == 0x126AE4u) {
        ctx->pc = 0x126AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AE0u;
        // 0x126ae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AE8u;
        goto label_126ae8;
    }
    ctx->pc = 0x126AE0u;
    SET_GPR_U32(ctx, 31, 0x126AE8u);
    ctx->pc = 0x126AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AE0u;
    // 0x126ae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x126AE0u, 0x126AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AE8u;
label_126ae8:
    // 0x126ae8: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
label_126aec:
    if (ctx->pc == 0x126AECu) {
        ctx->pc = 0x126AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AE8u;
        // 0x126aec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AF0u;
        goto label_126af0;
    }
    ctx->pc = 0x126AE8u;
    {
        const bool branch_taken_0x126ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x126ae8) {
            ctx->pc = 0x126AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126AE8u;
            // 0x126aec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126AF0u;
            goto label_126af0;
        }
    }
    ctx->pc = 0x126AF0u;
label_126af0:
    // 0x126af0: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_126af4:
    if (ctx->pc == 0x126AF4u) {
        ctx->pc = 0x126AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF0u;
        // 0x126af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126AF8u;
        goto label_126af8;
    }
    ctx->pc = 0x126AF0u;
    {
        const bool branch_taken_0x126af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF0u;
        // 0x126af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126af0) {
            ctx->pc = 0x126C24u;
            goto label_126c24;
        }
    }
    ctx->pc = 0x126AF8u;
label_126af8:
    // 0x126af8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126afc:
    // 0x126afc: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_126b00:
    // 0x126b00: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x126b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_126b04:
    // 0x126b04: 0x40f809  jalr        $v0
label_126b08:
    if (ctx->pc == 0x126B08u) {
        ctx->pc = 0x126B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B04u;
        // 0x126b08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B0Cu;
        goto label_126b0c;
    }
    ctx->pc = 0x126B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126B0Cu);
        ctx->pc = 0x126B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B04u;
        // 0x126b08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B04u, 0x126B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126B0Cu;
label_126b0c:
    // 0x126b0c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_126b10:
    if (ctx->pc == 0x126B10u) {
        ctx->pc = 0x126B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B0Cu;
        // 0x126b10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B14u;
        goto label_126b14;
    }
    ctx->pc = 0x126B0Cu;
    {
        const bool branch_taken_0x126b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B0Cu;
        // 0x126b10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b0c) {
            ctx->pc = 0x126C24u;
            goto label_126c24;
        }
    }
    ctx->pc = 0x126B14u;
label_126b14:
    // 0x126b14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126b18:
    // 0x126b18: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x126b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_126b1c:
    // 0x126b1c: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_126b20:
    // 0x126b20: 0x40f809  jalr        $v0
label_126b24:
    if (ctx->pc == 0x126B24u) {
        ctx->pc = 0x126B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B20u;
        // 0x126b24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B28u;
        goto label_126b28;
    }
    ctx->pc = 0x126B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126B28u);
        ctx->pc = 0x126B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B20u;
        // 0x126b24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B20u, 0x126B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126B28u;
label_126b28:
    // 0x126b28: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x126b28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_126b2c:
    // 0x126b2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126b30:
    // 0x126b30: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_126b34:
    if (ctx->pc == 0x126B34u) {
        ctx->pc = 0x126B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B30u;
        // 0x126b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B38u;
        goto label_126b38;
    }
    ctx->pc = 0x126B30u;
    {
        const bool branch_taken_0x126b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x126B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B30u;
        // 0x126b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b30) {
            ctx->pc = 0x126C24u;
            goto label_126c24;
        }
    }
    ctx->pc = 0x126B38u;
label_126b38:
    // 0x126b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126b3c:
    // 0x126b3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x126b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126b40:
    // 0x126b40: 0xc04843e  jal         func_1210F8
label_126b44:
    if (ctx->pc == 0x126B44u) {
        ctx->pc = 0x126B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B40u;
        // 0x126b44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B48u;
        goto label_126b48;
    }
    ctx->pc = 0x126B40u;
    SET_GPR_U32(ctx, 31, 0x126B48u);
    ctx->pc = 0x126B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B40u;
    // 0x126b44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210F8u, 0x126B40u, 0x126B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B48u;
label_126b48:
    // 0x126b48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126b4c:
    // 0x126b4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126b50:
    // 0x126b50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x126b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_126b54:
    // 0x126b54: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x126b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_126b58:
    // 0x126b58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x126b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b5c:
    // 0x126b5c: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x126b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_126b60:
    // 0x126b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126b64:
    // 0x126b64: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x126b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_126b68:
    // 0x126b68: 0x40f809  jalr        $v0
label_126b6c:
    if (ctx->pc == 0x126B6Cu) {
        ctx->pc = 0x126B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B68u;
        // 0x126b6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B70u;
        goto label_126b70;
    }
    ctx->pc = 0x126B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126B70u);
        ctx->pc = 0x126B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B68u;
        // 0x126b6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B68u, 0x126B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126B70u;
label_126b70:
    // 0x126b70: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x126b70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_126b74:
    // 0x126b74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x126b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_126b78:
    // 0x126b78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_126b7c:
    // 0x126b7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126b80:
    // 0x126b80: 0x8c4401d4  lw          $a0, 0x1D4($v0)
    ctx->pc = 0x126b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_126b84:
    // 0x126b84: 0x54800012  bnel        $a0, $zero, . + 4 + (0x12 << 2)
label_126b88:
    if (ctx->pc == 0x126B88u) {
        ctx->pc = 0x126B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B84u;
        // 0x126b88: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B8Cu;
        goto label_126b8c;
    }
    ctx->pc = 0x126B84u;
    {
        const bool branch_taken_0x126b84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b84) {
            ctx->pc = 0x126B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B84u;
            // 0x126b88: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126BD0u;
            goto label_126bd0;
        }
    }
    ctx->pc = 0x126B8Cu;
label_126b8c:
    // 0x126b8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126b90:
    // 0x126b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126b94:
    // 0x126b94: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x126b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_126b98:
    // 0x126b98: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_126b9c:
    // 0x126b9c: 0x40f809  jalr        $v0
label_126ba0:
    if (ctx->pc == 0x126BA0u) {
        ctx->pc = 0x126BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B9Cu;
        // 0x126ba0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126BA4u;
        goto label_126ba4;
    }
    ctx->pc = 0x126B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126BA4u);
        ctx->pc = 0x126BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B9Cu;
        // 0x126ba0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B9Cu, 0x126BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126BA4u;
label_126ba4:
    // 0x126ba4: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x126ba4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_126ba8:
    // 0x126ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_126bac:
    // 0x126bac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126bb0:
    // 0x126bb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x126bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_126bb4:
    // 0x126bb4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x126bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_126bb8:
    // 0x126bb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126bbc:
    // 0x126bbc: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x126bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126bc0:
    // 0x126bc0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x126bc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126bc4:
    // 0x126bc4: 0x0  nop
    ctx->pc = 0x126bc4u;
    // NOP
label_126bc8:
    // 0x126bc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_126bcc:
    if (ctx->pc == 0x126BCCu) {
        ctx->pc = 0x126BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BC8u;
        // 0x126bcc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126BD0u;
        goto label_126bd0;
    }
    ctx->pc = 0x126BC8u;
    {
        const bool branch_taken_0x126bc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126bc8) {
            ctx->pc = 0x126BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126BC8u;
            // 0x126bcc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126BD0u;
            goto label_126bd0;
        }
    }
    ctx->pc = 0x126BD0u;
label_126bd0:
    // 0x126bd0: 0x16400015  bnez        $s2, . + 4 + (0x15 << 2)
label_126bd4:
    if (ctx->pc == 0x126BD4u) {
        ctx->pc = 0x126BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BD0u;
        // 0x126bd4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126BD8u;
        goto label_126bd8;
    }
    ctx->pc = 0x126BD0u;
    {
        const bool branch_taken_0x126bd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BD0u;
        // 0x126bd4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bd0) {
            ctx->pc = 0x126C28u;
            goto label_126c28;
        }
    }
    ctx->pc = 0x126BD8u;
label_126bd8:
    // 0x126bd8: 0x240200e1  addiu       $v0, $zero, 0xE1
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_126bdc:
    // 0x126bdc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126be0:
    // 0x126be0: 0xa2220478  sb          $v0, 0x478($s1)
    ctx->pc = 0x126be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1144), (uint8_t)GPR_U32(ctx, 2));
label_126be4:
    // 0x126be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126be8:
    // 0x126be8: 0x2670deb8  addiu       $s0, $s3, -0x2148
    ctx->pc = 0x126be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958776));
label_126bec:
    // 0x126bec: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x126becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_126bf0:
    // 0x126bf0: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x126bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_126bf4:
    // 0x126bf4: 0x40f809  jalr        $v0
label_126bf8:
    if (ctx->pc == 0x126BF8u) {
        ctx->pc = 0x126BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BF4u;
        // 0x126bf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126BFCu;
        goto label_126bfc;
    }
    ctx->pc = 0x126BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126BFCu);
        ctx->pc = 0x126BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BF4u;
        // 0x126bf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126BF4u, 0x126BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126BFCu;
label_126bfc:
    // 0x126bfc: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x126bfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_126c00:
    // 0x126c00: 0x92240478  lbu         $a0, 0x478($s1)
    ctx->pc = 0x126c00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1144)));
label_126c04:
    // 0x126c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x126c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_126c08:
    // 0x126c08: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x126c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_126c0c:
    // 0x126c0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x126c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_126c10:
    // 0x126c10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126c14:
    // 0x126c14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x126c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_126c18:
    // 0x126c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126c1c:
    // 0x126c1c: 0xa04401b4  sb          $a0, 0x1B4($v0)
    ctx->pc = 0x126c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 436), (uint8_t)GPR_U32(ctx, 4));
label_126c20:
    // 0x126c20: 0xe6200424  swc1        $f0, 0x424($s1)
    ctx->pc = 0x126c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1060), bits); }
label_126c24:
    // 0x126c24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x126c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_126c28:
    // 0x126c28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x126c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126c2c:
    // 0x126c2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126c30:
    // 0x126c30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x126c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126c34:
    // 0x126c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126c38:
    // 0x126c38: 0x3e00008  jr          $ra
label_126c3c:
    if (ctx->pc == 0x126C3Cu) {
        ctx->pc = 0x126C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C38u;
        // 0x126c3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C40u;
        goto label_fallthrough_0x126c38;
    }
    ctx->pc = 0x126C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C38u;
        // 0x126c3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126c38:
    ctx->pc = 0x126C40u;
}
