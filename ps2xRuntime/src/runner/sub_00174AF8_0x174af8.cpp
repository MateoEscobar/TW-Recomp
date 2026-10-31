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

// Function: sub_00174AF8
// Address: 0x174af8 - 0x174c18
void sub_00174AF8_0x174af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174AF8_0x174af8");
#endif

    switch (ctx->pc) {
        case 0x174af8u: goto label_174af8;
        case 0x174afcu: goto label_174afc;
        case 0x174b00u: goto label_174b00;
        case 0x174b04u: goto label_174b04;
        case 0x174b08u: goto label_174b08;
        case 0x174b0cu: goto label_174b0c;
        case 0x174b10u: goto label_174b10;
        case 0x174b14u: goto label_174b14;
        case 0x174b18u: goto label_174b18;
        case 0x174b1cu: goto label_174b1c;
        case 0x174b20u: goto label_174b20;
        case 0x174b24u: goto label_174b24;
        case 0x174b28u: goto label_174b28;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b30u: goto label_174b30;
        case 0x174b34u: goto label_174b34;
        case 0x174b38u: goto label_174b38;
        case 0x174b3cu: goto label_174b3c;
        case 0x174b40u: goto label_174b40;
        case 0x174b44u: goto label_174b44;
        case 0x174b48u: goto label_174b48;
        case 0x174b4cu: goto label_174b4c;
        case 0x174b50u: goto label_174b50;
        case 0x174b54u: goto label_174b54;
        case 0x174b58u: goto label_174b58;
        case 0x174b5cu: goto label_174b5c;
        case 0x174b60u: goto label_174b60;
        case 0x174b64u: goto label_174b64;
        case 0x174b68u: goto label_174b68;
        case 0x174b6cu: goto label_174b6c;
        case 0x174b70u: goto label_174b70;
        case 0x174b74u: goto label_174b74;
        case 0x174b78u: goto label_174b78;
        case 0x174b7cu: goto label_174b7c;
        case 0x174b80u: goto label_174b80;
        case 0x174b84u: goto label_174b84;
        case 0x174b88u: goto label_174b88;
        case 0x174b8cu: goto label_174b8c;
        case 0x174b90u: goto label_174b90;
        case 0x174b94u: goto label_174b94;
        case 0x174b98u: goto label_174b98;
        case 0x174b9cu: goto label_174b9c;
        case 0x174ba0u: goto label_174ba0;
        case 0x174ba4u: goto label_174ba4;
        case 0x174ba8u: goto label_174ba8;
        case 0x174bacu: goto label_174bac;
        case 0x174bb0u: goto label_174bb0;
        case 0x174bb4u: goto label_174bb4;
        case 0x174bb8u: goto label_174bb8;
        case 0x174bbcu: goto label_174bbc;
        case 0x174bc0u: goto label_174bc0;
        case 0x174bc4u: goto label_174bc4;
        case 0x174bc8u: goto label_174bc8;
        case 0x174bccu: goto label_174bcc;
        case 0x174bd0u: goto label_174bd0;
        case 0x174bd4u: goto label_174bd4;
        case 0x174bd8u: goto label_174bd8;
        case 0x174bdcu: goto label_174bdc;
        case 0x174be0u: goto label_174be0;
        case 0x174be4u: goto label_174be4;
        case 0x174be8u: goto label_174be8;
        case 0x174becu: goto label_174bec;
        case 0x174bf0u: goto label_174bf0;
        case 0x174bf4u: goto label_174bf4;
        case 0x174bf8u: goto label_174bf8;
        case 0x174bfcu: goto label_174bfc;
        case 0x174c00u: goto label_174c00;
        case 0x174c04u: goto label_174c04;
        case 0x174c08u: goto label_174c08;
        case 0x174c0cu: goto label_174c0c;
        case 0x174c10u: goto label_174c10;
        case 0x174c14u: goto label_174c14;
        default: break;
    }

    ctx->pc = 0x174af8u;

label_174af8:
    // 0x174af8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x174af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_174afc:
    // 0x174afc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x174afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_174b00:
    // 0x174b00: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x174b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_174b04:
    // 0x174b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174b08:
    // 0x174b08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_174b0c:
    // 0x174b0c: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x174b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_174b10:
    // 0x174b10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x174b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174b14:
    // 0x174b14: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x174b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_174b18:
    // 0x174b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174b1c:
    // 0x174b1c: 0xc05fe3e  jal         func_17F8F8
label_174b20:
    if (ctx->pc == 0x174B20u) {
        ctx->pc = 0x174B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B1Cu;
        // 0x174b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B24u;
        goto label_174b24;
    }
    ctx->pc = 0x174B1Cu;
    SET_GPR_U32(ctx, 31, 0x174B24u);
    ctx->pc = 0x174B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B1Cu;
    // 0x174b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8F8u, 0x174B1Cu, 0x174B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B24u;
label_174b24:
    // 0x174b24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_174b28:
    // 0x174b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174b2c:
    // 0x174b2c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_174b30:
    // 0x174b30: 0xc10c1fa  jal         func_4307E8
label_174b34:
    if (ctx->pc == 0x174B34u) {
        ctx->pc = 0x174B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B30u;
        // 0x174b34: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B38u;
        goto label_174b38;
    }
    ctx->pc = 0x174B30u;
    SET_GPR_U32(ctx, 31, 0x174B38u);
    ctx->pc = 0x174B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B30u;
    // 0x174b34: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x174B30u, 0x174B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B38u;
label_174b38:
    // 0x174b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x174b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_174b3c:
    // 0x174b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174b40:
    // 0x174b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174b44:
    // 0x174b44: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x174b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_174b48:
    // 0x174b48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x174b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_174b4c:
    // 0x174b4c: 0xc05fdee  jal         func_17F7B8
label_174b50:
    if (ctx->pc == 0x174B50u) {
        ctx->pc = 0x174B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B4Cu;
        // 0x174b50: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B54u;
        goto label_174b54;
    }
    ctx->pc = 0x174B4Cu;
    SET_GPR_U32(ctx, 31, 0x174B54u);
    ctx->pc = 0x174B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B4Cu;
    // 0x174b50: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x174B4Cu, 0x174B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B54u;
label_174b54:
    // 0x174b54: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x174b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
label_174b58:
    // 0x174b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174b5c:
    // 0x174b5c: 0x24a525d0  addiu       $a1, $a1, 0x25D0
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
label_174b60:
    // 0x174b60: 0xc11a7d2  jal         func_469F48
label_174b64:
    if (ctx->pc == 0x174B64u) {
        ctx->pc = 0x174B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B60u;
        // 0x174b64: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B68u;
        goto label_174b68;
    }
    ctx->pc = 0x174B60u;
    SET_GPR_U32(ctx, 31, 0x174B68u);
    ctx->pc = 0x174B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B60u;
    // 0x174b64: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x174B60u, 0x174B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B68u;
label_174b68:
    // 0x174b68: 0x8e0302b8  lw          $v1, 0x2B8($s0)
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_174b6c:
    // 0x174b6c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_174b70:
    if (ctx->pc == 0x174B70u) {
        ctx->pc = 0x174B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B6Cu;
        // 0x174b70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B74u;
        goto label_174b74;
    }
    ctx->pc = 0x174B6Cu;
    {
        const bool branch_taken_0x174b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B6Cu;
        // 0x174b70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b6c) {
            ctx->pc = 0x174B88u;
            goto label_174b88;
        }
    }
    ctx->pc = 0x174B74u;
label_174b74:
    // 0x174b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174b78:
    // 0x174b78: 0xc05fe7a  jal         func_17F9E8
label_174b7c:
    if (ctx->pc == 0x174B7Cu) {
        ctx->pc = 0x174B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B78u;
        // 0x174b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B80u;
        goto label_174b80;
    }
    ctx->pc = 0x174B78u;
    SET_GPR_U32(ctx, 31, 0x174B80u);
    ctx->pc = 0x174B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B78u;
    // 0x174b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9E8u, 0x174B78u, 0x174B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B80u;
label_174b80:
    // 0x174b80: 0x1000001e  b           . + 4 + (0x1E << 2)
label_174b84:
    if (ctx->pc == 0x174B84u) {
        ctx->pc = 0x174B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B80u;
        // 0x174b84: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B88u;
        goto label_174b88;
    }
    ctx->pc = 0x174B80u;
    {
        const bool branch_taken_0x174b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B80u;
        // 0x174b84: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b80) {
            ctx->pc = 0x174BFCu;
            goto label_174bfc;
        }
    }
    ctx->pc = 0x174B88u;
label_174b88:
    // 0x174b88: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_174b8c:
    // 0x174b8c: 0xa60202b0  sh          $v0, 0x2B0($s0)
    ctx->pc = 0x174b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 688), (uint16_t)GPR_U32(ctx, 2));
label_174b90:
    // 0x174b90: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x174b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_174b94:
    // 0x174b94: 0x24a20220  addiu       $v0, $a1, 0x220
    ctx->pc = 0x174b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
label_174b98:
    // 0x174b98: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x174b98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_174b9c:
    // 0x174b9c: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x174b9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_174ba0:
    // 0x174ba0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x174ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_174ba4:
    // 0x174ba4: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x174ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
label_174ba8:
    // 0x174ba8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x174ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_174bac:
    // 0x174bac: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
label_174bb0:
    if (ctx->pc == 0x174BB0u) {
        ctx->pc = 0x174BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BACu;
        // 0x174bb0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BB4u;
        goto label_174bb4;
    }
    ctx->pc = 0x174BACu;
    {
        const bool branch_taken_0x174bac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x174BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BACu;
        // 0x174bb0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bac) {
            ctx->pc = 0x174B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174b98;
        }
    }
    ctx->pc = 0x174BB4u;
label_174bb4:
    // 0x174bb4: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x174bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_174bb8:
    // 0x174bb8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_174bbc:
    // 0x174bbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x174bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_174bc0:
    // 0x174bc0: 0xc05d584  jal         func_175610
label_174bc4:
    if (ctx->pc == 0x174BC4u) {
        ctx->pc = 0x174BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BC0u;
        // 0x174bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BC8u;
        goto label_174bc8;
    }
    ctx->pc = 0x174BC0u;
    SET_GPR_U32(ctx, 31, 0x174BC8u);
    ctx->pc = 0x174BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BC0u;
    // 0x174bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175610u, 0x174BC0u, 0x174BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BC8u;
label_174bc8:
    // 0x174bc8: 0x8e0502b8  lw          $a1, 0x2B8($s0)
    ctx->pc = 0x174bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_174bcc:
    // 0x174bcc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x174bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_174bd0:
    // 0x174bd0: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x174bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_174bd4:
    // 0x174bd4: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x174bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_174bd8:
    // 0x174bd8: 0x40f809  jalr        $v0
label_174bdc:
    if (ctx->pc == 0x174BDCu) {
        ctx->pc = 0x174BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BD8u;
        // 0x174bdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BE0u;
        goto label_174be0;
    }
    ctx->pc = 0x174BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174BE0u);
        ctx->pc = 0x174BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BD8u;
        // 0x174bdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174BD8u, 0x174BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174BE0u;
label_174be0:
    // 0x174be0: 0x8e0502b8  lw          $a1, 0x2B8($s0)
    ctx->pc = 0x174be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_174be4:
    // 0x174be4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_174be8:
    // 0x174be8: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x174be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_174bec:
    // 0x174bec: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x174becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_174bf0:
    // 0x174bf0: 0x60f809  jalr        $v1
label_174bf4:
    if (ctx->pc == 0x174BF4u) {
        ctx->pc = 0x174BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF0u;
        // 0x174bf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BF8u;
        goto label_174bf8;
    }
    ctx->pc = 0x174BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x174BF8u);
        ctx->pc = 0x174BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF0u;
        // 0x174bf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174BF0u, 0x174BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174BF8u;
label_174bf8:
    // 0x174bf8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x174bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_174bfc:
    // 0x174bfc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x174bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_174c00:
    // 0x174c00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x174c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_174c04:
    // 0x174c04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x174c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174c08:
    // 0x174c08: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x174c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174c0c:
    // 0x174c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174c10:
    // 0x174c10: 0x3e00008  jr          $ra
label_174c14:
    if (ctx->pc == 0x174C14u) {
        ctx->pc = 0x174C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C10u;
        // 0x174c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C18u;
        goto label_fallthrough_0x174c10;
    }
    ctx->pc = 0x174C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C10u;
        // 0x174c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x174c10:
    ctx->pc = 0x174C18u;
}
