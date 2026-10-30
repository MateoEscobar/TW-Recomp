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

// Function: sub_00105BA0
// Address: 0x105ba0 - 0x105d08
void sub_00105BA0_0x105ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105BA0_0x105ba0");
#endif

    switch (ctx->pc) {
        case 0x105ba0u: goto label_105ba0;
        case 0x105ba4u: goto label_105ba4;
        case 0x105ba8u: goto label_105ba8;
        case 0x105bacu: goto label_105bac;
        case 0x105bb0u: goto label_105bb0;
        case 0x105bb4u: goto label_105bb4;
        case 0x105bb8u: goto label_105bb8;
        case 0x105bbcu: goto label_105bbc;
        case 0x105bc0u: goto label_105bc0;
        case 0x105bc4u: goto label_105bc4;
        case 0x105bc8u: goto label_105bc8;
        case 0x105bccu: goto label_105bcc;
        case 0x105bd0u: goto label_105bd0;
        case 0x105bd4u: goto label_105bd4;
        case 0x105bd8u: goto label_105bd8;
        case 0x105bdcu: goto label_105bdc;
        case 0x105be0u: goto label_105be0;
        case 0x105be4u: goto label_105be4;
        case 0x105be8u: goto label_105be8;
        case 0x105becu: goto label_105bec;
        case 0x105bf0u: goto label_105bf0;
        case 0x105bf4u: goto label_105bf4;
        case 0x105bf8u: goto label_105bf8;
        case 0x105bfcu: goto label_105bfc;
        case 0x105c00u: goto label_105c00;
        case 0x105c04u: goto label_105c04;
        case 0x105c08u: goto label_105c08;
        case 0x105c0cu: goto label_105c0c;
        case 0x105c10u: goto label_105c10;
        case 0x105c14u: goto label_105c14;
        case 0x105c18u: goto label_105c18;
        case 0x105c1cu: goto label_105c1c;
        case 0x105c20u: goto label_105c20;
        case 0x105c24u: goto label_105c24;
        case 0x105c28u: goto label_105c28;
        case 0x105c2cu: goto label_105c2c;
        case 0x105c30u: goto label_105c30;
        case 0x105c34u: goto label_105c34;
        case 0x105c38u: goto label_105c38;
        case 0x105c3cu: goto label_105c3c;
        case 0x105c40u: goto label_105c40;
        case 0x105c44u: goto label_105c44;
        case 0x105c48u: goto label_105c48;
        case 0x105c4cu: goto label_105c4c;
        case 0x105c50u: goto label_105c50;
        case 0x105c54u: goto label_105c54;
        case 0x105c58u: goto label_105c58;
        case 0x105c5cu: goto label_105c5c;
        case 0x105c60u: goto label_105c60;
        case 0x105c64u: goto label_105c64;
        case 0x105c68u: goto label_105c68;
        case 0x105c6cu: goto label_105c6c;
        case 0x105c70u: goto label_105c70;
        case 0x105c74u: goto label_105c74;
        case 0x105c78u: goto label_105c78;
        case 0x105c7cu: goto label_105c7c;
        case 0x105c80u: goto label_105c80;
        case 0x105c84u: goto label_105c84;
        case 0x105c88u: goto label_105c88;
        case 0x105c8cu: goto label_105c8c;
        case 0x105c90u: goto label_105c90;
        case 0x105c94u: goto label_105c94;
        case 0x105c98u: goto label_105c98;
        case 0x105c9cu: goto label_105c9c;
        case 0x105ca0u: goto label_105ca0;
        case 0x105ca4u: goto label_105ca4;
        case 0x105ca8u: goto label_105ca8;
        case 0x105cacu: goto label_105cac;
        case 0x105cb0u: goto label_105cb0;
        case 0x105cb4u: goto label_105cb4;
        case 0x105cb8u: goto label_105cb8;
        case 0x105cbcu: goto label_105cbc;
        case 0x105cc0u: goto label_105cc0;
        case 0x105cc4u: goto label_105cc4;
        case 0x105cc8u: goto label_105cc8;
        case 0x105cccu: goto label_105ccc;
        case 0x105cd0u: goto label_105cd0;
        case 0x105cd4u: goto label_105cd4;
        case 0x105cd8u: goto label_105cd8;
        case 0x105cdcu: goto label_105cdc;
        case 0x105ce0u: goto label_105ce0;
        case 0x105ce4u: goto label_105ce4;
        case 0x105ce8u: goto label_105ce8;
        case 0x105cecu: goto label_105cec;
        case 0x105cf0u: goto label_105cf0;
        case 0x105cf4u: goto label_105cf4;
        case 0x105cf8u: goto label_105cf8;
        case 0x105cfcu: goto label_105cfc;
        case 0x105d00u: goto label_105d00;
        case 0x105d04u: goto label_105d04;
        default: break;
    }

    ctx->pc = 0x105ba0u;

label_105ba0:
    // 0x105ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x105ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_105ba4:
    // 0x105ba4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x105ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_105ba8:
    // 0x105ba8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x105ba8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_105bac:
    // 0x105bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105bb0:
    // 0x105bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_105bb4:
    // 0x105bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_105bb8:
    // 0x105bb8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x105bb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_105bbc:
    // 0x105bbc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x105bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_105bc0:
    // 0x105bc0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x105bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_105bc4:
    // 0x105bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105bc8:
    // 0x105bc8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x105bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_105bcc:
    // 0x105bcc: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x105bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_105bd0:
    // 0x105bd0: 0x60f809  jalr        $v1
label_105bd4:
    if (ctx->pc == 0x105BD4u) {
        ctx->pc = 0x105BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BD0u;
        // 0x105bd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105BD8u;
        goto label_105bd8;
    }
    ctx->pc = 0x105BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105BD8u);
        ctx->pc = 0x105BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BD0u;
        // 0x105bd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105BD0u, 0x105BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105BD8u;
label_105bd8:
    // 0x105bd8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x105bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_105bdc:
    // 0x105bdc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x105bdcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_105be0:
    // 0x105be0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x105be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_105be4:
    // 0x105be4: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x105be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_105be8:
    // 0x105be8: 0x0  nop
    ctx->pc = 0x105be8u;
    // NOP
label_105bec:
    // 0x105bec: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_105bf0:
    if (ctx->pc == 0x105BF0u) {
        ctx->pc = 0x105BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BECu;
        // 0x105bf0: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x105BF4u;
        goto label_105bf4;
    }
    ctx->pc = 0x105BECu;
    {
        const bool branch_taken_0x105bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BECu;
        // 0x105bf0: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bec) {
            ctx->pc = 0x105CC8u;
            goto label_105cc8;
        }
    }
    ctx->pc = 0x105BF4u;
label_105bf4:
    // 0x105bf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x105bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_105bf8:
    // 0x105bf8: 0x460c0540  add.s       $f21, $f0, $f12
    ctx->pc = 0x105bf8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_105bfc:
    // 0x105bfc: 0x0  nop
    ctx->pc = 0x105bfcu;
    // NOP
label_105c00:
    // 0x105c00: 0x0  nop
    ctx->pc = 0x105c00u;
    // NOP
label_105c04:
    // 0x105c04: 0x460cad03  div.s       $f20, $f21, $f12
    ctx->pc = 0x105c04u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
label_105c08:
    // 0x105c08: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x105c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_105c0c:
    // 0x105c0c: 0x0  nop
    ctx->pc = 0x105c0cu;
    // NOP
label_105c10:
    // 0x105c10: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_105c14:
    if (ctx->pc == 0x105C14u) {
        ctx->pc = 0x105C18u;
        goto label_105c18;
    }
    ctx->pc = 0x105C10u;
    {
        const bool branch_taken_0x105c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105c10) {
            ctx->pc = 0x105CC8u;
            goto label_105cc8;
        }
    }
    ctx->pc = 0x105C18u;
label_105c18:
    // 0x105c18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x105c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_105c1c:
    // 0x105c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x105c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_105c20:
    // 0x105c20: 0x0  nop
    ctx->pc = 0x105c20u;
    // NOP
label_105c24:
    // 0x105c24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x105c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_105c28:
    // 0x105c28: 0x0  nop
    ctx->pc = 0x105c28u;
    // NOP
label_105c2c:
    // 0x105c2c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_105c30:
    if (ctx->pc == 0x105C30u) {
        ctx->pc = 0x105C34u;
        goto label_105c34;
    }
    ctx->pc = 0x105C2Cu;
    {
        const bool branch_taken_0x105c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105c2c) {
            ctx->pc = 0x105CC8u;
            goto label_105cc8;
        }
    }
    ctx->pc = 0x105C34u;
label_105c34:
    // 0x105c34: 0xc0420dc  jal         func_108370
label_105c38:
    if (ctx->pc == 0x105C38u) {
        ctx->pc = 0x105C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C34u;
        // 0x105c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C3Cu;
        goto label_105c3c;
    }
    ctx->pc = 0x105C34u;
    SET_GPR_U32(ctx, 31, 0x105C3Cu);
    ctx->pc = 0x105C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C34u;
    // 0x105c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x105C34u, 0x105C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C3Cu;
label_105c3c:
    // 0x105c3c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x105c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_105c40:
    // 0x105c40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x105c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_105c44:
    // 0x105c44: 0xc041338  jal         func_104CE0
label_105c48:
    if (ctx->pc == 0x105C48u) {
        ctx->pc = 0x105C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C44u;
        // 0x105c48: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C4Cu;
        goto label_105c4c;
    }
    ctx->pc = 0x105C44u;
    SET_GPR_U32(ctx, 31, 0x105C4Cu);
    ctx->pc = 0x105C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C44u;
    // 0x105c48: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x105C44u, 0x105C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C4Cu;
label_105c4c:
    // 0x105c4c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_105c50:
    if (ctx->pc == 0x105C50u) {
        ctx->pc = 0x105C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C4Cu;
        // 0x105c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C54u;
        goto label_105c54;
    }
    ctx->pc = 0x105C4Cu;
    {
        const bool branch_taken_0x105c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C4Cu;
        // 0x105c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c4c) {
            ctx->pc = 0x105CE4u;
            goto label_105ce4;
        }
    }
    ctx->pc = 0x105C54u;
label_105c54:
    // 0x105c54: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x105c54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_105c58:
    // 0x105c58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x105c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_105c5c:
    // 0x105c5c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x105c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_105c60:
    // 0x105c60: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x105c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_105c64:
    // 0x105c64: 0x60f809  jalr        $v1
label_105c68:
    if (ctx->pc == 0x105C68u) {
        ctx->pc = 0x105C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C64u;
        // 0x105c68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C6Cu;
        goto label_105c6c;
    }
    ctx->pc = 0x105C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105C6Cu);
        ctx->pc = 0x105C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C64u;
        // 0x105c68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105C64u, 0x105C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105C6Cu;
label_105c6c:
    // 0x105c6c: 0x4600ab01  sub.s       $f12, $f21, $f0
    ctx->pc = 0x105c6cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_105c70:
    // 0x105c70: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x105c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_105c74:
    // 0x105c74: 0x0  nop
    ctx->pc = 0x105c74u;
    // NOP
label_105c78:
    // 0x105c78: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_105c7c:
    if (ctx->pc == 0x105C7Cu) {
        ctx->pc = 0x105C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C78u;
        // 0x105c7c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C80u;
        goto label_105c80;
    }
    ctx->pc = 0x105C78u;
    {
        const bool branch_taken_0x105c78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105c78) {
            ctx->pc = 0x105C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105C78u;
            // 0x105c7c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105C98u;
            goto label_105c98;
        }
    }
    ctx->pc = 0x105C80u;
label_105c80:
    // 0x105c80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x105c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_105c84:
    // 0x105c84: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x105c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_105c88:
    // 0x105c88: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x105c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_105c8c:
    // 0x105c8c: 0x60f809  jalr        $v1
label_105c90:
    if (ctx->pc == 0x105C90u) {
        ctx->pc = 0x105C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C8Cu;
        // 0x105c90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105C94u;
        goto label_105c94;
    }
    ctx->pc = 0x105C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105C94u);
        ctx->pc = 0x105C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C8Cu;
        // 0x105c90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105C8Cu, 0x105C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105C94u;
label_105c94:
    // 0x105c94: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x105c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_105c98:
    // 0x105c98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x105c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_105c9c:
    // 0x105c9c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x105c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_105ca0:
    // 0x105ca0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x105ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_105ca4:
    // 0x105ca4: 0x40f809  jalr        $v0
label_105ca8:
    if (ctx->pc == 0x105CA8u) {
        ctx->pc = 0x105CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CA4u;
        // 0x105ca8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105CACu;
        goto label_105cac;
    }
    ctx->pc = 0x105CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105CACu);
        ctx->pc = 0x105CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CA4u;
        // 0x105ca8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105CA4u, 0x105CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105CACu;
label_105cac:
    // 0x105cac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_105cb0:
    if (ctx->pc == 0x105CB0u) {
        ctx->pc = 0x105CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CACu;
        // 0x105cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105CB4u;
        goto label_105cb4;
    }
    ctx->pc = 0x105CACu;
    {
        const bool branch_taken_0x105cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CACu;
        // 0x105cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cac) {
            ctx->pc = 0x105CE4u;
            goto label_105ce4;
        }
    }
    ctx->pc = 0x105CB4u;
label_105cb4:
    // 0x105cb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x105cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105cb8:
    // 0x105cb8: 0xc04152a  jal         func_1054A8
label_105cbc:
    if (ctx->pc == 0x105CBCu) {
        ctx->pc = 0x105CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CB8u;
        // 0x105cbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x105CC0u;
        goto label_105cc0;
    }
    ctx->pc = 0x105CB8u;
    SET_GPR_U32(ctx, 31, 0x105CC0u);
    ctx->pc = 0x105CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CB8u;
    // 0x105cbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x105CB8u, 0x105CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CC0u;
label_105cc0:
    // 0x105cc0: 0x10000008  b           . + 4 + (0x8 << 2)
label_105cc4:
    if (ctx->pc == 0x105CC4u) {
        ctx->pc = 0x105CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CC0u;
        // 0x105cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105CC8u;
        goto label_105cc8;
    }
    ctx->pc = 0x105CC0u;
    {
        const bool branch_taken_0x105cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CC0u;
        // 0x105cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cc0) {
            ctx->pc = 0x105CE4u;
            goto label_105ce4;
        }
    }
    ctx->pc = 0x105CC8u;
label_105cc8:
    // 0x105cc8: 0xc0420dc  jal         func_108370
label_105ccc:
    if (ctx->pc == 0x105CCCu) {
        ctx->pc = 0x105CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CC8u;
        // 0x105ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105CD0u;
        goto label_105cd0;
    }
    ctx->pc = 0x105CC8u;
    SET_GPR_U32(ctx, 31, 0x105CD0u);
    ctx->pc = 0x105CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CC8u;
    // 0x105ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x105CC8u, 0x105CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CD0u;
label_105cd0:
    // 0x105cd0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x105cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105cd4:
    // 0x105cd4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x105cd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_105cd8:
    // 0x105cd8: 0xc041338  jal         func_104CE0
label_105cdc:
    if (ctx->pc == 0x105CDCu) {
        ctx->pc = 0x105CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CD8u;
        // 0x105cdc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105CE0u;
        goto label_105ce0;
    }
    ctx->pc = 0x105CD8u;
    SET_GPR_U32(ctx, 31, 0x105CE0u);
    ctx->pc = 0x105CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CD8u;
    // 0x105cdc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x105CD8u, 0x105CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CE0u;
label_105ce0:
    // 0x105ce0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x105ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_105ce4:
    // 0x105ce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x105ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_105ce8:
    // 0x105ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_105cec:
    // 0x105cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_105cf0:
    // 0x105cf0: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x105cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_105cf4:
    // 0x105cf4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x105cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_105cf8:
    // 0x105cf8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x105cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_105cfc:
    // 0x105cfc: 0x3e00008  jr          $ra
label_105d00:
    if (ctx->pc == 0x105D00u) {
        ctx->pc = 0x105D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CFCu;
        // 0x105d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105D04u;
        goto label_105d04;
    }
    ctx->pc = 0x105CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CFCu;
        // 0x105d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D04u;
label_105d04:
    // 0x105d04: 0x0  nop
    ctx->pc = 0x105d04u;
    // NOP
    ctx->pc = 0x105d08u;
}
