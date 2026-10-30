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

// Function: sub_00120A98
// Address: 0x120a98 - 0x120c50
void sub_00120A98_0x120a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120A98_0x120a98");
#endif

    switch (ctx->pc) {
        case 0x120a98u: goto label_120a98;
        case 0x120a9cu: goto label_120a9c;
        case 0x120aa0u: goto label_120aa0;
        case 0x120aa4u: goto label_120aa4;
        case 0x120aa8u: goto label_120aa8;
        case 0x120aacu: goto label_120aac;
        case 0x120ab0u: goto label_120ab0;
        case 0x120ab4u: goto label_120ab4;
        case 0x120ab8u: goto label_120ab8;
        case 0x120abcu: goto label_120abc;
        case 0x120ac0u: goto label_120ac0;
        case 0x120ac4u: goto label_120ac4;
        case 0x120ac8u: goto label_120ac8;
        case 0x120accu: goto label_120acc;
        case 0x120ad0u: goto label_120ad0;
        case 0x120ad4u: goto label_120ad4;
        case 0x120ad8u: goto label_120ad8;
        case 0x120adcu: goto label_120adc;
        case 0x120ae0u: goto label_120ae0;
        case 0x120ae4u: goto label_120ae4;
        case 0x120ae8u: goto label_120ae8;
        case 0x120aecu: goto label_120aec;
        case 0x120af0u: goto label_120af0;
        case 0x120af4u: goto label_120af4;
        case 0x120af8u: goto label_120af8;
        case 0x120afcu: goto label_120afc;
        case 0x120b00u: goto label_120b00;
        case 0x120b04u: goto label_120b04;
        case 0x120b08u: goto label_120b08;
        case 0x120b0cu: goto label_120b0c;
        case 0x120b10u: goto label_120b10;
        case 0x120b14u: goto label_120b14;
        case 0x120b18u: goto label_120b18;
        case 0x120b1cu: goto label_120b1c;
        case 0x120b20u: goto label_120b20;
        case 0x120b24u: goto label_120b24;
        case 0x120b28u: goto label_120b28;
        case 0x120b2cu: goto label_120b2c;
        case 0x120b30u: goto label_120b30;
        case 0x120b34u: goto label_120b34;
        case 0x120b38u: goto label_120b38;
        case 0x120b3cu: goto label_120b3c;
        case 0x120b40u: goto label_120b40;
        case 0x120b44u: goto label_120b44;
        case 0x120b48u: goto label_120b48;
        case 0x120b4cu: goto label_120b4c;
        case 0x120b50u: goto label_120b50;
        case 0x120b54u: goto label_120b54;
        case 0x120b58u: goto label_120b58;
        case 0x120b5cu: goto label_120b5c;
        case 0x120b60u: goto label_120b60;
        case 0x120b64u: goto label_120b64;
        case 0x120b68u: goto label_120b68;
        case 0x120b6cu: goto label_120b6c;
        case 0x120b70u: goto label_120b70;
        case 0x120b74u: goto label_120b74;
        case 0x120b78u: goto label_120b78;
        case 0x120b7cu: goto label_120b7c;
        case 0x120b80u: goto label_120b80;
        case 0x120b84u: goto label_120b84;
        case 0x120b88u: goto label_120b88;
        case 0x120b8cu: goto label_120b8c;
        case 0x120b90u: goto label_120b90;
        case 0x120b94u: goto label_120b94;
        case 0x120b98u: goto label_120b98;
        case 0x120b9cu: goto label_120b9c;
        case 0x120ba0u: goto label_120ba0;
        case 0x120ba4u: goto label_120ba4;
        case 0x120ba8u: goto label_120ba8;
        case 0x120bacu: goto label_120bac;
        case 0x120bb0u: goto label_120bb0;
        case 0x120bb4u: goto label_120bb4;
        case 0x120bb8u: goto label_120bb8;
        case 0x120bbcu: goto label_120bbc;
        case 0x120bc0u: goto label_120bc0;
        case 0x120bc4u: goto label_120bc4;
        case 0x120bc8u: goto label_120bc8;
        case 0x120bccu: goto label_120bcc;
        case 0x120bd0u: goto label_120bd0;
        case 0x120bd4u: goto label_120bd4;
        case 0x120bd8u: goto label_120bd8;
        case 0x120bdcu: goto label_120bdc;
        case 0x120be0u: goto label_120be0;
        case 0x120be4u: goto label_120be4;
        case 0x120be8u: goto label_120be8;
        case 0x120becu: goto label_120bec;
        case 0x120bf0u: goto label_120bf0;
        case 0x120bf4u: goto label_120bf4;
        case 0x120bf8u: goto label_120bf8;
        case 0x120bfcu: goto label_120bfc;
        case 0x120c00u: goto label_120c00;
        case 0x120c04u: goto label_120c04;
        case 0x120c08u: goto label_120c08;
        case 0x120c0cu: goto label_120c0c;
        case 0x120c10u: goto label_120c10;
        case 0x120c14u: goto label_120c14;
        case 0x120c18u: goto label_120c18;
        case 0x120c1cu: goto label_120c1c;
        case 0x120c20u: goto label_120c20;
        case 0x120c24u: goto label_120c24;
        case 0x120c28u: goto label_120c28;
        case 0x120c2cu: goto label_120c2c;
        case 0x120c30u: goto label_120c30;
        case 0x120c34u: goto label_120c34;
        case 0x120c38u: goto label_120c38;
        case 0x120c3cu: goto label_120c3c;
        case 0x120c40u: goto label_120c40;
        case 0x120c44u: goto label_120c44;
        case 0x120c48u: goto label_120c48;
        case 0x120c4cu: goto label_120c4c;
        default: break;
    }

    ctx->pc = 0x120a98u;

label_120a98:
    // 0x120a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_120a9c:
    // 0x120a9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x120a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_120aa0:
    // 0x120aa0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x120aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_120aa4:
    // 0x120aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_120aa8:
    // 0x120aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120aac:
    // 0x120aac: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x120aacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_120ab0:
    // 0x120ab0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x120ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_120ab4:
    // 0x120ab4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x120ab4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_120ab8:
    // 0x120ab8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x120ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_120abc:
    // 0x120abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_120ac0:
    // 0x120ac0: 0xc442b178  lwc1        $f2, -0x4E88($v0)
    ctx->pc = 0x120ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_120ac4:
    // 0x120ac4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x120ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120ac8:
    // 0x120ac8: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
label_120acc:
    // 0x120acc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x120accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_120ad0:
    // 0x120ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_120ad4:
    // 0x120ad4: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x120ad4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_120ad8:
    // 0x120ad8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_120adc:
    // 0x120adc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x120adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_120ae0:
    // 0x120ae0: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x120ae0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_120ae4:
    // 0x120ae4: 0xe6150048  swc1        $f21, 0x48($s0)
    ctx->pc = 0x120ae4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_120ae8:
    // 0x120ae8: 0xc12e34c  jal         func_4B8D30
label_120aec:
    if (ctx->pc == 0x120AECu) {
        ctx->pc = 0x120AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AE8u;
        // 0x120aec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120AF0u;
        goto label_120af0;
    }
    ctx->pc = 0x120AE8u;
    SET_GPR_U32(ctx, 31, 0x120AF0u);
    ctx->pc = 0x120AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120AE8u;
    // 0x120aec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x120AE8u, 0x120AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AF0u;
label_120af0:
    // 0x120af0: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x120af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_120af4:
    // 0x120af4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x120af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_120af8:
    // 0x120af8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x120af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_120afc:
    // 0x120afc: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x120afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_120b00:
    // 0x120b00: 0x846401f8  lh          $a0, 0x1F8($v1)
    ctx->pc = 0x120b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 504)));
label_120b04:
    // 0x120b04: 0x8c6201fc  lw          $v0, 0x1FC($v1)
    ctx->pc = 0x120b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_120b08:
    // 0x120b08: 0x40f809  jalr        $v0
label_120b0c:
    if (ctx->pc == 0x120B0Cu) {
        ctx->pc = 0x120B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B08u;
        // 0x120b0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B10u;
        goto label_120b10;
    }
    ctx->pc = 0x120B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x120B10u);
        ctx->pc = 0x120B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B08u;
        // 0x120b0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120B08u, 0x120B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120B10u;
label_120b10:
    // 0x120b10: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x120b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120b14:
    // 0x120b14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x120b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_120b18:
    // 0x120b18: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x120b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_120b1c:
    // 0x120b1c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x120b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_120b20:
    // 0x120b20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x120b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_120b24:
    // 0x120b24: 0xc107444  jal         func_41D110
label_120b28:
    if (ctx->pc == 0x120B28u) {
        ctx->pc = 0x120B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B24u;
        // 0x120b28: 0xe601005c  swc1        $f1, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B2Cu;
        goto label_120b2c;
    }
    ctx->pc = 0x120B24u;
    SET_GPR_U32(ctx, 31, 0x120B2Cu);
    ctx->pc = 0x120B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B24u;
    // 0x120b28: 0xe601005c  swc1        $f1, 0x5C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x120B24u, 0x120B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B2Cu;
label_120b2c:
    // 0x120b2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_120b30:
    if (ctx->pc == 0x120B30u) {
        ctx->pc = 0x120B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B2Cu;
        // 0x120b30: 0x8e23b198  lw          $v1, -0x4E68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B34u;
        goto label_120b34;
    }
    ctx->pc = 0x120B2Cu;
    {
        const bool branch_taken_0x120b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B2Cu;
        // 0x120b30: 0x8e23b198  lw          $v1, -0x4E68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b2c) {
            ctx->pc = 0x120B70u;
            goto label_120b70;
        }
    }
    ctx->pc = 0x120B34u;
label_120b34:
    // 0x120b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120b38:
    // 0x120b38: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_120b3c:
    if (ctx->pc == 0x120B3Cu) {
        ctx->pc = 0x120B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B38u;
        // 0x120b3c: 0x8e22b198  lw          $v0, -0x4E68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B40u;
        goto label_120b40;
    }
    ctx->pc = 0x120B38u;
    {
        const bool branch_taken_0x120b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B38u;
        // 0x120b3c: 0x8e22b198  lw          $v0, -0x4E68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b38) {
            ctx->pc = 0x120B74u;
            goto label_120b74;
        }
    }
    ctx->pc = 0x120B40u;
label_120b40:
    // 0x120b40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x120b40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_120b44:
    // 0x120b44: 0xe6150048  swc1        $f21, 0x48($s0)
    ctx->pc = 0x120b44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_120b48:
    // 0x120b48: 0xc12e34c  jal         func_4B8D30
label_120b4c:
    if (ctx->pc == 0x120B4Cu) {
        ctx->pc = 0x120B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B48u;
        // 0x120b4c: 0xc614005c  lwc1        $f20, 0x5C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B50u;
        goto label_120b50;
    }
    ctx->pc = 0x120B48u;
    SET_GPR_U32(ctx, 31, 0x120B50u);
    ctx->pc = 0x120B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B48u;
    // 0x120b4c: 0xc614005c  lwc1        $f20, 0x5C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x120B48u, 0x120B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B50u;
label_120b50:
    // 0x120b50: 0x0  nop
    ctx->pc = 0x120b50u;
    // NOP
label_120b54:
    // 0x120b54: 0x0  nop
    ctx->pc = 0x120b54u;
    // NOP
label_120b58:
    // 0x120b58: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x120b58u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_120b5c:
    // 0x120b5c: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x120b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_120b60:
    // 0x120b60: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x120b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_120b64:
    // 0x120b64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x120b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_120b68:
    // 0x120b68: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x120b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_120b6c:
    // 0x120b6c: 0xe454b210  swc1        $f20, -0x4DF0($v0)
    ctx->pc = 0x120b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947344), bits); }
label_120b70:
    // 0x120b70: 0x8e22b198  lw          $v0, -0x4E68($s1)
    ctx->pc = 0x120b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
label_120b74:
    // 0x120b74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x120b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_120b78:
    // 0x120b78: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x120b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120b7c:
    // 0x120b7c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x120b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_120b80:
    // 0x120b80: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x120b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120b84:
    // 0x120b84: 0x2463b1a4  addiu       $v1, $v1, -0x4E5C
    ctx->pc = 0x120b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947236));
label_120b88:
    // 0x120b88: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x120b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_120b8c:
    // 0x120b8c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x120b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_120b90:
    // 0x120b90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_120b94:
    if (ctx->pc == 0x120B94u) {
        ctx->pc = 0x120B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B90u;
        // 0x120b94: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B98u;
        goto label_120b98;
    }
    ctx->pc = 0x120B90u;
    {
        const bool branch_taken_0x120b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B90u;
        // 0x120b94: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b90) {
            ctx->pc = 0x120BA4u;
            goto label_120ba4;
        }
    }
    ctx->pc = 0x120B98u;
label_120b98:
    // 0x120b98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x120b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_120b9c:
    // 0x120b9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_120ba0:
    if (ctx->pc == 0x120BA0u) {
        ctx->pc = 0x120BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B9Cu;
        // 0x120ba0: 0x8c44b1a0  lw          $a0, -0x4E60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BA4u;
        goto label_120ba4;
    }
    ctx->pc = 0x120B9Cu;
    {
        const bool branch_taken_0x120b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B9Cu;
        // 0x120ba0: 0x8c44b1a0  lw          $a0, -0x4E60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b9c) {
            ctx->pc = 0x120BA8u;
            goto label_120ba8;
        }
    }
    ctx->pc = 0x120BA4u;
label_120ba4:
    // 0x120ba4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x120ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120ba8:
    // 0x120ba8: 0x8e22b198  lw          $v0, -0x4E68($s1)
    ctx->pc = 0x120ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
label_120bac:
    // 0x120bac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x120bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_120bb0:
    // 0x120bb0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_120bb4:
    if (ctx->pc == 0x120BB4u) {
        ctx->pc = 0x120BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BB0u;
        // 0x120bb4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BB8u;
        goto label_120bb8;
    }
    ctx->pc = 0x120BB0u;
    {
        const bool branch_taken_0x120bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BB0u;
        // 0x120bb4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bb0) {
            ctx->pc = 0x120C2Cu;
            goto label_120c2c;
        }
    }
    ctx->pc = 0x120BB8u;
label_120bb8:
    // 0x120bb8: 0x8ca3b1a4  lw          $v1, -0x4E5C($a1)
    ctx->pc = 0x120bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947236)));
label_120bbc:
    // 0x120bbc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_120bc0:
    if (ctx->pc == 0x120BC0u) {
        ctx->pc = 0x120BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BBCu;
        // 0x120bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BC4u;
        goto label_120bc4;
    }
    ctx->pc = 0x120BBCu;
    {
        const bool branch_taken_0x120bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BBCu;
        // 0x120bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bbc) {
            ctx->pc = 0x120BE4u;
            goto label_120be4;
        }
    }
    ctx->pc = 0x120BC4u;
label_120bc4:
    // 0x120bc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x120bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_120bc8:
    // 0x120bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_120bcc:
    // 0x120bcc: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x120bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120bd0:
    // 0x120bd0: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x120bd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_120bd4:
    // 0x120bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x120bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_120bd8:
    // 0x120bd8: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x120bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_120bdc:
    // 0x120bdc: 0x10000013  b           . + 4 + (0x13 << 2)
label_120be0:
    if (ctx->pc == 0x120BE0u) {
        ctx->pc = 0x120BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BDCu;
        // 0x120be0: 0xe6010064  swc1        $f1, 0x64($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BE4u;
        goto label_120be4;
    }
    ctx->pc = 0x120BDCu;
    {
        const bool branch_taken_0x120bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BDCu;
        // 0x120be0: 0xe6010064  swc1        $f1, 0x64($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bdc) {
            ctx->pc = 0x120C2Cu;
            goto label_120c2c;
        }
    }
    ctx->pc = 0x120BE4u;
label_120be4:
    // 0x120be4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_120be8:
    if (ctx->pc == 0x120BE8u) {
        ctx->pc = 0x120BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE4u;
        // 0x120be8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BECu;
        goto label_120bec;
    }
    ctx->pc = 0x120BE4u;
    {
        const bool branch_taken_0x120be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE4u;
        // 0x120be8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120be4) {
            ctx->pc = 0x120BFCu;
            goto label_120bfc;
        }
    }
    ctx->pc = 0x120BECu;
label_120bec:
    // 0x120bec: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x120becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120bf0:
    // 0x120bf0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x120bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_120bf4:
    // 0x120bf4: 0x1000000d  b           . + 4 + (0xD << 2)
label_120bf8:
    if (ctx->pc == 0x120BF8u) {
        ctx->pc = 0x120BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BF4u;
        // 0x120bf8: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BFCu;
        goto label_120bfc;
    }
    ctx->pc = 0x120BF4u;
    {
        const bool branch_taken_0x120bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BF4u;
        // 0x120bf8: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bf4) {
            ctx->pc = 0x120C2Cu;
            goto label_120c2c;
        }
    }
    ctx->pc = 0x120BFCu;
label_120bfc:
    // 0x120bfc: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_120c00:
    if (ctx->pc == 0x120C00u) {
        ctx->pc = 0x120C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BFCu;
        // 0x120c00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C04u;
        goto label_120c04;
    }
    ctx->pc = 0x120BFCu;
    {
        const bool branch_taken_0x120bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120bfc) {
            ctx->pc = 0x120C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120BFCu;
            // 0x120c00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120C30u;
            goto label_120c30;
        }
    }
    ctx->pc = 0x120C04u;
label_120c04:
    // 0x120c04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x120c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_120c08:
    // 0x120c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_120c0c:
    // 0x120c0c: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x120c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120c10:
    // 0x120c10: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x120c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_120c14:
    // 0x120c14: 0x4600a8c2  mul.s       $f3, $f21, $f0
    ctx->pc = 0x120c14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_120c18:
    // 0x120c18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x120c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_120c1c:
    // 0x120c1c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x120c1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_120c20:
    // 0x120c20: 0xe6030048  swc1        $f3, 0x48($s0)
    ctx->pc = 0x120c20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_120c24:
    // 0x120c24: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x120c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_120c28:
    // 0x120c28: 0xe6020068  swc1        $f2, 0x68($s0)
    ctx->pc = 0x120c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_120c2c:
    // 0x120c2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x120c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_120c30:
    // 0x120c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120c34:
    // 0x120c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120c38:
    // 0x120c38: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x120c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_120c3c:
    // 0x120c3c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x120c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_120c40:
    // 0x120c40: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x120c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_120c44:
    // 0x120c44: 0x3e00008  jr          $ra
label_120c48:
    if (ctx->pc == 0x120C48u) {
        ctx->pc = 0x120C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C44u;
        // 0x120c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C4Cu;
        goto label_120c4c;
    }
    ctx->pc = 0x120C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C44u;
        // 0x120c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120C4Cu;
label_120c4c:
    // 0x120c4c: 0x0  nop
    ctx->pc = 0x120c4cu;
    // NOP
    ctx->pc = 0x120c50u;
}
