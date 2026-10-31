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

// Function: sub_00321B00
// Address: 0x321b00 - 0x321c48
void sub_00321B00_0x321b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321B00_0x321b00");
#endif

    switch (ctx->pc) {
        case 0x321b00u: goto label_321b00;
        case 0x321b04u: goto label_321b04;
        case 0x321b08u: goto label_321b08;
        case 0x321b0cu: goto label_321b0c;
        case 0x321b10u: goto label_321b10;
        case 0x321b14u: goto label_321b14;
        case 0x321b18u: goto label_321b18;
        case 0x321b1cu: goto label_321b1c;
        case 0x321b20u: goto label_321b20;
        case 0x321b24u: goto label_321b24;
        case 0x321b28u: goto label_321b28;
        case 0x321b2cu: goto label_321b2c;
        case 0x321b30u: goto label_321b30;
        case 0x321b34u: goto label_321b34;
        case 0x321b38u: goto label_321b38;
        case 0x321b3cu: goto label_321b3c;
        case 0x321b40u: goto label_321b40;
        case 0x321b44u: goto label_321b44;
        case 0x321b48u: goto label_321b48;
        case 0x321b4cu: goto label_321b4c;
        case 0x321b50u: goto label_321b50;
        case 0x321b54u: goto label_321b54;
        case 0x321b58u: goto label_321b58;
        case 0x321b5cu: goto label_321b5c;
        case 0x321b60u: goto label_321b60;
        case 0x321b64u: goto label_321b64;
        case 0x321b68u: goto label_321b68;
        case 0x321b6cu: goto label_321b6c;
        case 0x321b70u: goto label_321b70;
        case 0x321b74u: goto label_321b74;
        case 0x321b78u: goto label_321b78;
        case 0x321b7cu: goto label_321b7c;
        case 0x321b80u: goto label_321b80;
        case 0x321b84u: goto label_321b84;
        case 0x321b88u: goto label_321b88;
        case 0x321b8cu: goto label_321b8c;
        case 0x321b90u: goto label_321b90;
        case 0x321b94u: goto label_321b94;
        case 0x321b98u: goto label_321b98;
        case 0x321b9cu: goto label_321b9c;
        case 0x321ba0u: goto label_321ba0;
        case 0x321ba4u: goto label_321ba4;
        case 0x321ba8u: goto label_321ba8;
        case 0x321bacu: goto label_321bac;
        case 0x321bb0u: goto label_321bb0;
        case 0x321bb4u: goto label_321bb4;
        case 0x321bb8u: goto label_321bb8;
        case 0x321bbcu: goto label_321bbc;
        case 0x321bc0u: goto label_321bc0;
        case 0x321bc4u: goto label_321bc4;
        case 0x321bc8u: goto label_321bc8;
        case 0x321bccu: goto label_321bcc;
        case 0x321bd0u: goto label_321bd0;
        case 0x321bd4u: goto label_321bd4;
        case 0x321bd8u: goto label_321bd8;
        case 0x321bdcu: goto label_321bdc;
        case 0x321be0u: goto label_321be0;
        case 0x321be4u: goto label_321be4;
        case 0x321be8u: goto label_321be8;
        case 0x321becu: goto label_321bec;
        case 0x321bf0u: goto label_321bf0;
        case 0x321bf4u: goto label_321bf4;
        case 0x321bf8u: goto label_321bf8;
        case 0x321bfcu: goto label_321bfc;
        case 0x321c00u: goto label_321c00;
        case 0x321c04u: goto label_321c04;
        case 0x321c08u: goto label_321c08;
        case 0x321c0cu: goto label_321c0c;
        case 0x321c10u: goto label_321c10;
        case 0x321c14u: goto label_321c14;
        case 0x321c18u: goto label_321c18;
        case 0x321c1cu: goto label_321c1c;
        case 0x321c20u: goto label_321c20;
        case 0x321c24u: goto label_321c24;
        case 0x321c28u: goto label_321c28;
        case 0x321c2cu: goto label_321c2c;
        case 0x321c30u: goto label_321c30;
        case 0x321c34u: goto label_321c34;
        case 0x321c38u: goto label_321c38;
        case 0x321c3cu: goto label_321c3c;
        case 0x321c40u: goto label_321c40;
        case 0x321c44u: goto label_321c44;
        default: break;
    }

    ctx->pc = 0x321b00u;

label_321b00:
    // 0x321b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x321b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_321b04:
    // 0x321b04: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x321b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_321b08:
    // 0x321b08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x321b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_321b0c:
    // 0x321b0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x321b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_321b10:
    // 0x321b10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x321b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_321b14:
    // 0x321b14: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x321b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_321b18:
    // 0x321b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_321b1c:
    // 0x321b1c: 0xc05959e  jal         func_165678
label_321b20:
    if (ctx->pc == 0x321B20u) {
        ctx->pc = 0x321B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B1Cu;
        // 0x321b20: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B24u;
        goto label_321b24;
    }
    ctx->pc = 0x321B1Cu;
    SET_GPR_U32(ctx, 31, 0x321B24u);
    ctx->pc = 0x321B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B1Cu;
    // 0x321b20: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x321B1Cu, 0x321B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B24u;
label_321b24:
    // 0x321b24: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_321b28:
    if (ctx->pc == 0x321B28u) {
        ctx->pc = 0x321B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B24u;
        // 0x321b28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B2Cu;
        goto label_321b2c;
    }
    ctx->pc = 0x321B24u;
    {
        const bool branch_taken_0x321b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B24u;
        // 0x321b28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b24) {
            ctx->pc = 0x321C20u;
            goto label_321c20;
        }
    }
    ctx->pc = 0x321B2Cu;
label_321b2c:
    // 0x321b2c: 0xc087502  jal         func_21D408
label_321b30:
    if (ctx->pc == 0x321B30u) {
        ctx->pc = 0x321B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B2Cu;
        // 0x321b30: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B34u;
        goto label_321b34;
    }
    ctx->pc = 0x321B2Cu;
    SET_GPR_U32(ctx, 31, 0x321B34u);
    ctx->pc = 0x321B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B2Cu;
    // 0x321b30: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x321B2Cu, 0x321B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B34u;
label_321b34:
    // 0x321b34: 0x241300dd  addiu       $s3, $zero, 0xDD
    ctx->pc = 0x321b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_321b38:
    // 0x321b38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321b3c:
    // 0x321b3c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x321b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_321b40:
    // 0x321b40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_321b44:
    // 0x321b44: 0x24720c80  addiu       $s2, $v1, 0xC80
    ctx->pc = 0x321b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
label_321b48:
    // 0x321b48: 0x344298c0  ori         $v0, $v0, 0x98C0
    ctx->pc = 0x321b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39104);
label_321b4c:
    // 0x321b4c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x321b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_321b50:
    // 0x321b50: 0xc089f98  jal         func_227E60
label_321b54:
    if (ctx->pc == 0x321B54u) {
        ctx->pc = 0x321B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B50u;
        // 0x321b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B58u;
        goto label_321b58;
    }
    ctx->pc = 0x321B50u;
    SET_GPR_U32(ctx, 31, 0x321B58u);
    ctx->pc = 0x321B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B50u;
    // 0x321b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x321B50u, 0x321B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B58u;
label_321b58:
    // 0x321b58: 0x5054002e  beql        $v0, $s4, . + 4 + (0x2E << 2)
label_321b5c:
    if (ctx->pc == 0x321B5Cu) {
        ctx->pc = 0x321B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B58u;
        // 0x321b5c: 0x265206d0  addiu       $s2, $s2, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B60u;
        goto label_321b60;
    }
    ctx->pc = 0x321B58u;
    {
        const bool branch_taken_0x321b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x321b58) {
            ctx->pc = 0x321B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321B58u;
            // 0x321b5c: 0x265206d0  addiu       $s2, $s2, 0x6D0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321C14u;
            goto label_321c14;
        }
    }
    ctx->pc = 0x321B60u;
label_321b60:
    // 0x321b60: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x321b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_321b64:
    // 0x321b64: 0x5453002b  bnel        $v0, $s3, . + 4 + (0x2B << 2)
label_321b68:
    if (ctx->pc == 0x321B68u) {
        ctx->pc = 0x321B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B64u;
        // 0x321b68: 0x265206d0  addiu       $s2, $s2, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B6Cu;
        goto label_321b6c;
    }
    ctx->pc = 0x321B64u;
    {
        const bool branch_taken_0x321b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x321b64) {
            ctx->pc = 0x321B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321B64u;
            // 0x321b68: 0x265206d0  addiu       $s2, $s2, 0x6D0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321C14u;
            goto label_321c14;
        }
    }
    ctx->pc = 0x321B6Cu;
label_321b6c:
    // 0x321b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321b70:
    // 0x321b70: 0xc0a3658  jal         func_28D960
label_321b74:
    if (ctx->pc == 0x321B74u) {
        ctx->pc = 0x321B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B70u;
        // 0x321b74: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B78u;
        goto label_321b78;
    }
    ctx->pc = 0x321B70u;
    SET_GPR_U32(ctx, 31, 0x321B78u);
    ctx->pc = 0x321B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B70u;
    // 0x321b74: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x321B70u, 0x321B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B78u;
label_321b78:
    // 0x321b78: 0x4430026  bgezl       $v0, . + 4 + (0x26 << 2)
label_321b7c:
    if (ctx->pc == 0x321B7Cu) {
        ctx->pc = 0x321B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B78u;
        // 0x321b7c: 0x265206d0  addiu       $s2, $s2, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B80u;
        goto label_321b80;
    }
    ctx->pc = 0x321B78u;
    {
        const bool branch_taken_0x321b78 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x321b78) {
            ctx->pc = 0x321B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321B78u;
            // 0x321b7c: 0x265206d0  addiu       $s2, $s2, 0x6D0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321C14u;
            goto label_321c14;
        }
    }
    ctx->pc = 0x321B80u;
label_321b80:
    // 0x321b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321b84:
    // 0x321b84: 0xc0a3658  jal         func_28D960
label_321b88:
    if (ctx->pc == 0x321B88u) {
        ctx->pc = 0x321B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B84u;
        // 0x321b88: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B8Cu;
        goto label_321b8c;
    }
    ctx->pc = 0x321B84u;
    SET_GPR_U32(ctx, 31, 0x321B8Cu);
    ctx->pc = 0x321B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B84u;
    // 0x321b88: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x321B84u, 0x321B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B8Cu;
label_321b8c:
    // 0x321b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321b90:
    // 0x321b90: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_321b94:
    if (ctx->pc == 0x321B94u) {
        ctx->pc = 0x321B98u;
        goto label_321b98;
    }
    ctx->pc = 0x321B90u;
    {
        const bool branch_taken_0x321b90 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x321b90) {
            ctx->pc = 0x321BC0u;
            goto label_321bc0;
        }
    }
    ctx->pc = 0x321B98u;
label_321b98:
    // 0x321b98: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x321b98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_321b9c:
    // 0x321b9c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x321b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_321ba0:
    // 0x321ba0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_321ba4:
    if (ctx->pc == 0x321BA4u) {
        ctx->pc = 0x321BA8u;
        goto label_321ba8;
    }
    ctx->pc = 0x321BA0u;
    {
        const bool branch_taken_0x321ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321ba0) {
            ctx->pc = 0x321BC0u;
            goto label_321bc0;
        }
    }
    ctx->pc = 0x321BA8u;
label_321ba8:
    // 0x321ba8: 0xc0a35f6  jal         func_28D7D8
label_321bac:
    if (ctx->pc == 0x321BACu) {
        ctx->pc = 0x321BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BA8u;
        // 0x321bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321BB0u;
        goto label_321bb0;
    }
    ctx->pc = 0x321BA8u;
    SET_GPR_U32(ctx, 31, 0x321BB0u);
    ctx->pc = 0x321BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321BA8u;
    // 0x321bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x321BA8u, 0x321BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321BB0u;
label_321bb0:
    // 0x321bb0: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x321bb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_321bb4:
    // 0x321bb4: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x321bb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_321bb8:
    // 0x321bb8: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_321bbc:
    if (ctx->pc == 0x321BBCu) {
        ctx->pc = 0x321BC0u;
        goto label_321bc0;
    }
    ctx->pc = 0x321BB8u;
    {
        const bool branch_taken_0x321bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321bb8) {
            ctx->pc = 0x321BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321ba8;
        }
    }
    ctx->pc = 0x321BC0u;
label_321bc0:
    // 0x321bc0: 0xc0a4e54  jal         func_293950
label_321bc4:
    if (ctx->pc == 0x321BC4u) {
        ctx->pc = 0x321BC8u;
        goto label_321bc8;
    }
    ctx->pc = 0x321BC0u;
    SET_GPR_U32(ctx, 31, 0x321BC8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x321BC0u, 0x321BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321BC8u;
label_321bc8:
    // 0x321bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321bcc:
    // 0x321bcc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_321bd0:
    if (ctx->pc == 0x321BD0u) {
        ctx->pc = 0x321BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BCCu;
        // 0x321bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321BD4u;
        goto label_321bd4;
    }
    ctx->pc = 0x321BCCu;
    {
        const bool branch_taken_0x321bcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BCCu;
        // 0x321bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bcc) {
            ctx->pc = 0x321C04u;
            goto label_321c04;
        }
    }
    ctx->pc = 0x321BD4u;
label_321bd4:
    // 0x321bd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x321bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_321bd8:
    // 0x321bd8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x321bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_321bdc:
    // 0x321bdc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x321bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_321be0:
    // 0x321be0: 0x40f809  jalr        $v0
label_321be4:
    if (ctx->pc == 0x321BE4u) {
        ctx->pc = 0x321BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BE0u;
        // 0x321be4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321BE8u;
        goto label_321be8;
    }
    ctx->pc = 0x321BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321BE8u);
        ctx->pc = 0x321BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BE0u;
        // 0x321be4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321BE0u, 0x321BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321BE8u;
label_321be8:
    // 0x321be8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x321be8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_321bec:
    // 0x321bec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321bf0:
    // 0x321bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321bf4:
    // 0x321bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x321bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321bf8:
    // 0x321bf8: 0xc0aed16  jal         func_2BB458
label_321bfc:
    if (ctx->pc == 0x321BFCu) {
        ctx->pc = 0x321BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BF8u;
        // 0x321bfc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C00u;
        goto label_321c00;
    }
    ctx->pc = 0x321BF8u;
    SET_GPR_U32(ctx, 31, 0x321C00u);
    ctx->pc = 0x321BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321BF8u;
    // 0x321bfc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB458u, 0x321BF8u, 0x321C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C00u;
label_321c00:
    // 0x321c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321c04:
    // 0x321c04: 0xc0a35d6  jal         func_28D758
label_321c08:
    if (ctx->pc == 0x321C08u) {
        ctx->pc = 0x321C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C04u;
        // 0x321c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C0Cu;
        goto label_321c0c;
    }
    ctx->pc = 0x321C04u;
    SET_GPR_U32(ctx, 31, 0x321C0Cu);
    ctx->pc = 0x321C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C04u;
    // 0x321c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x321C04u, 0x321C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C0Cu;
label_321c0c:
    // 0x321c0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_321c10:
    if (ctx->pc == 0x321C10u) {
        ctx->pc = 0x321C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C0Cu;
        // 0x321c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C14u;
        goto label_321c14;
    }
    ctx->pc = 0x321C0Cu;
    {
        const bool branch_taken_0x321c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C0Cu;
        // 0x321c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c0c) {
            ctx->pc = 0x321C24u;
            goto label_321c24;
        }
    }
    ctx->pc = 0x321C14u;
label_321c14:
    // 0x321c14: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x321c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_321c18:
    // 0x321c18: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_321c1c:
    if (ctx->pc == 0x321C1Cu) {
        ctx->pc = 0x321C20u;
        goto label_321c20;
    }
    ctx->pc = 0x321C18u;
    {
        const bool branch_taken_0x321c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321c18) {
            ctx->pc = 0x321B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321b50;
        }
    }
    ctx->pc = 0x321C20u;
label_321c20:
    // 0x321c20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321c24:
    // 0x321c24: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x321c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_321c28:
    // 0x321c28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x321c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_321c2c:
    // 0x321c2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x321c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_321c30:
    // 0x321c30: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x321c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_321c34:
    // 0x321c34: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x321c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_321c38:
    // 0x321c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321c3c:
    // 0x321c3c: 0x3e00008  jr          $ra
label_321c40:
    if (ctx->pc == 0x321C40u) {
        ctx->pc = 0x321C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C3Cu;
        // 0x321c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C44u;
        goto label_321c44;
    }
    ctx->pc = 0x321C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C3Cu;
        // 0x321c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321C44u;
label_321c44:
    // 0x321c44: 0x0  nop
    ctx->pc = 0x321c44u;
    // NOP
    ctx->pc = 0x321c48u;
}
