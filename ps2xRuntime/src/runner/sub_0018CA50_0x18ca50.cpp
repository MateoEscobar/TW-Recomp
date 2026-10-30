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

// Function: sub_0018CA50
// Address: 0x18ca50 - 0x18cb78
void sub_0018CA50_0x18ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CA50_0x18ca50");
#endif

    switch (ctx->pc) {
        case 0x18ca50u: goto label_18ca50;
        case 0x18ca54u: goto label_18ca54;
        case 0x18ca58u: goto label_18ca58;
        case 0x18ca5cu: goto label_18ca5c;
        case 0x18ca60u: goto label_18ca60;
        case 0x18ca64u: goto label_18ca64;
        case 0x18ca68u: goto label_18ca68;
        case 0x18ca6cu: goto label_18ca6c;
        case 0x18ca70u: goto label_18ca70;
        case 0x18ca74u: goto label_18ca74;
        case 0x18ca78u: goto label_18ca78;
        case 0x18ca7cu: goto label_18ca7c;
        case 0x18ca80u: goto label_18ca80;
        case 0x18ca84u: goto label_18ca84;
        case 0x18ca88u: goto label_18ca88;
        case 0x18ca8cu: goto label_18ca8c;
        case 0x18ca90u: goto label_18ca90;
        case 0x18ca94u: goto label_18ca94;
        case 0x18ca98u: goto label_18ca98;
        case 0x18ca9cu: goto label_18ca9c;
        case 0x18caa0u: goto label_18caa0;
        case 0x18caa4u: goto label_18caa4;
        case 0x18caa8u: goto label_18caa8;
        case 0x18caacu: goto label_18caac;
        case 0x18cab0u: goto label_18cab0;
        case 0x18cab4u: goto label_18cab4;
        case 0x18cab8u: goto label_18cab8;
        case 0x18cabcu: goto label_18cabc;
        case 0x18cac0u: goto label_18cac0;
        case 0x18cac4u: goto label_18cac4;
        case 0x18cac8u: goto label_18cac8;
        case 0x18caccu: goto label_18cacc;
        case 0x18cad0u: goto label_18cad0;
        case 0x18cad4u: goto label_18cad4;
        case 0x18cad8u: goto label_18cad8;
        case 0x18cadcu: goto label_18cadc;
        case 0x18cae0u: goto label_18cae0;
        case 0x18cae4u: goto label_18cae4;
        case 0x18cae8u: goto label_18cae8;
        case 0x18caecu: goto label_18caec;
        case 0x18caf0u: goto label_18caf0;
        case 0x18caf4u: goto label_18caf4;
        case 0x18caf8u: goto label_18caf8;
        case 0x18cafcu: goto label_18cafc;
        case 0x18cb00u: goto label_18cb00;
        case 0x18cb04u: goto label_18cb04;
        case 0x18cb08u: goto label_18cb08;
        case 0x18cb0cu: goto label_18cb0c;
        case 0x18cb10u: goto label_18cb10;
        case 0x18cb14u: goto label_18cb14;
        case 0x18cb18u: goto label_18cb18;
        case 0x18cb1cu: goto label_18cb1c;
        case 0x18cb20u: goto label_18cb20;
        case 0x18cb24u: goto label_18cb24;
        case 0x18cb28u: goto label_18cb28;
        case 0x18cb2cu: goto label_18cb2c;
        case 0x18cb30u: goto label_18cb30;
        case 0x18cb34u: goto label_18cb34;
        case 0x18cb38u: goto label_18cb38;
        case 0x18cb3cu: goto label_18cb3c;
        case 0x18cb40u: goto label_18cb40;
        case 0x18cb44u: goto label_18cb44;
        case 0x18cb48u: goto label_18cb48;
        case 0x18cb4cu: goto label_18cb4c;
        case 0x18cb50u: goto label_18cb50;
        case 0x18cb54u: goto label_18cb54;
        case 0x18cb58u: goto label_18cb58;
        case 0x18cb5cu: goto label_18cb5c;
        case 0x18cb60u: goto label_18cb60;
        case 0x18cb64u: goto label_18cb64;
        case 0x18cb68u: goto label_18cb68;
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb70u: goto label_18cb70;
        case 0x18cb74u: goto label_18cb74;
        default: break;
    }

    ctx->pc = 0x18ca50u;

label_18ca50:
    // 0x18ca50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18ca54:
    // 0x18ca54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ca58:
    // 0x18ca58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18ca5c:
    // 0x18ca5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18ca60:
    // 0x18ca60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ca60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ca64:
    // 0x18ca64: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x18ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_18ca68:
    // 0x18ca68: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x18ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_18ca6c:
    // 0x18ca6c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_18ca70:
    if (ctx->pc == 0x18CA70u) {
        ctx->pc = 0x18CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA6Cu;
        // 0x18ca70: 0xae0401c0  sw          $a0, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA74u;
        goto label_18ca74;
    }
    ctx->pc = 0x18CA6Cu;
    {
        const bool branch_taken_0x18ca6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA6Cu;
        // 0x18ca70: 0xae0401c0  sw          $a0, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca6c) {
            ctx->pc = 0x18CA80u;
            goto label_18ca80;
        }
    }
    ctx->pc = 0x18CA74u;
label_18ca74:
    // 0x18ca74: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x18ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_18ca78:
    // 0x18ca78: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_18ca7c:
    if (ctx->pc == 0x18CA7Cu) {
        ctx->pc = 0x18CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA78u;
        // 0x18ca7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA80u;
        goto label_18ca80;
    }
    ctx->pc = 0x18CA78u;
    {
        const bool branch_taken_0x18ca78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca78) {
            ctx->pc = 0x18CA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CA78u;
            // 0x18ca7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CB68u;
            goto label_18cb68;
        }
    }
    ctx->pc = 0x18CA80u;
label_18ca80:
    // 0x18ca80: 0xc60101cc  lwc1        $f1, 0x1CC($s0)
    ctx->pc = 0x18ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ca84:
    // 0x18ca84: 0xc60001c8  lwc1        $f0, 0x1C8($s0)
    ctx->pc = 0x18ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ca88:
    // 0x18ca88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ca88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ca8c:
    // 0x18ca8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18ca8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ca90:
    // 0x18ca90: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_18ca94:
    if (ctx->pc == 0x18CA94u) {
        ctx->pc = 0x18CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA90u;
        // 0x18ca94: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA98u;
        goto label_18ca98;
    }
    ctx->pc = 0x18CA90u;
    {
        const bool branch_taken_0x18ca90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA90u;
        // 0x18ca94: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca90) {
            ctx->pc = 0x18CB0Cu;
            goto label_18cb0c;
        }
    }
    ctx->pc = 0x18CA98u;
label_18ca98:
    // 0x18ca98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18ca9c:
    // 0x18ca9c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18caa0:
    // 0x18caa0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18caa4:
    // 0x18caa4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18caa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18caa8:
    // 0x18caa8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18caac:
    // 0x18caac: 0x40f809  jalr        $v0
label_18cab0:
    if (ctx->pc == 0x18CAB0u) {
        ctx->pc = 0x18CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAACu;
        // 0x18cab0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAB4u;
        goto label_18cab4;
    }
    ctx->pc = 0x18CAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CAB4u);
        ctx->pc = 0x18CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAACu;
        // 0x18cab0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CAACu, 0x18CAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CAB4u;
label_18cab4:
    // 0x18cab4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18cab8:
    if (ctx->pc == 0x18CAB8u) {
        ctx->pc = 0x18CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAB4u;
        // 0x18cab8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CABCu;
        goto label_18cabc;
    }
    ctx->pc = 0x18CAB4u;
    {
        const bool branch_taken_0x18cab4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAB4u;
        // 0x18cab8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cab4) {
            ctx->pc = 0x18CAD0u;
            goto label_18cad0;
        }
    }
    ctx->pc = 0x18CABCu;
label_18cabc:
    // 0x18cabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cac0:
    // 0x18cac0: 0x0  nop
    ctx->pc = 0x18cac0u;
    // NOP
label_18cac4:
    // 0x18cac4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18cac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18cac8:
    // 0x18cac8: 0x10000007  b           . + 4 + (0x7 << 2)
label_18cacc:
    if (ctx->pc == 0x18CACCu) {
        ctx->pc = 0x18CAD0u;
        goto label_18cad0;
    }
    ctx->pc = 0x18CAC8u;
    {
        const bool branch_taken_0x18cac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cac8) {
            ctx->pc = 0x18CAE8u;
            goto label_18cae8;
        }
    }
    ctx->pc = 0x18CAD0u;
label_18cad0:
    // 0x18cad0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18cad4:
    // 0x18cad4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18cad8:
    // 0x18cad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cadc:
    // 0x18cadc: 0x0  nop
    ctx->pc = 0x18cadcu;
    // NOP
label_18cae0:
    // 0x18cae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18cae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18cae4:
    // 0x18cae4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18cae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18cae8:
    // 0x18cae8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18caec:
    // 0x18caec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18caecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18caf0:
    // 0x18caf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18caf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18caf4:
    // 0x18caf4: 0xc60101cc  lwc1        $f1, 0x1CC($s0)
    ctx->pc = 0x18caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18caf8:
    // 0x18caf8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x18caf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18cafc:
    // 0x18cafc: 0xc60001c8  lwc1        $f0, 0x1C8($s0)
    ctx->pc = 0x18cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cb00:
    // 0x18cb00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18cb00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18cb04:
    // 0x18cb04: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18cb04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_18cb08:
    // 0x18cb08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18cb08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18cb0c:
    // 0x18cb0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18cb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cb10:
    // 0x18cb10: 0x0  nop
    ctx->pc = 0x18cb10u;
    // NOP
label_18cb14:
    // 0x18cb14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18cb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cb18:
    // 0x18cb18: 0x0  nop
    ctx->pc = 0x18cb18u;
    // NOP
label_18cb1c:
    // 0x18cb1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18cb20:
    if (ctx->pc == 0x18CB20u) {
        ctx->pc = 0x18CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB1Cu;
        // 0x18cb20: 0x8e0501c4  lw          $a1, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB24u;
        goto label_18cb24;
    }
    ctx->pc = 0x18CB1Cu;
    {
        const bool branch_taken_0x18cb1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB1Cu;
        // 0x18cb20: 0x8e0501c4  lw          $a1, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb1c) {
            ctx->pc = 0x18CB48u;
            goto label_18cb48;
        }
    }
    ctx->pc = 0x18CB24u;
label_18cb24:
    // 0x18cb24: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x18cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_18cb28:
    // 0x18cb28: 0x50850008  beql        $a0, $a1, . + 4 + (0x8 << 2)
label_18cb2c:
    if (ctx->pc == 0x18CB2Cu) {
        ctx->pc = 0x18CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB28u;
        // 0x18cb2c: 0xae0501bc  sw          $a1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB30u;
        goto label_18cb30;
    }
    ctx->pc = 0x18CB28u;
    {
        const bool branch_taken_0x18cb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x18cb28) {
            ctx->pc = 0x18CB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CB28u;
            // 0x18cb2c: 0xae0501bc  sw          $a1, 0x1BC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CB4Cu;
            goto label_18cb4c;
        }
    }
    ctx->pc = 0x18CB30u;
label_18cb30:
    // 0x18cb30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18cb34:
    // 0x18cb34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18cb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18cb38:
    // 0x18cb38: 0xc05e896  jal         func_17A258
label_18cb3c:
    if (ctx->pc == 0x18CB3Cu) {
        ctx->pc = 0x18CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB38u;
        // 0x18cb3c: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB40u;
        goto label_18cb40;
    }
    ctx->pc = 0x18CB38u;
    SET_GPR_U32(ctx, 31, 0x18CB40u);
    ctx->pc = 0x18CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB38u;
    // 0x18cb3c: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x18CB38u, 0x18CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB40u;
label_18cb40:
    // 0x18cb40: 0x10000002  b           . + 4 + (0x2 << 2)
label_18cb44:
    if (ctx->pc == 0x18CB44u) {
        ctx->pc = 0x18CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB40u;
        // 0x18cb44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB48u;
        goto label_18cb48;
    }
    ctx->pc = 0x18CB40u;
    {
        const bool branch_taken_0x18cb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB40u;
        // 0x18cb44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb40) {
            ctx->pc = 0x18CB4Cu;
            goto label_18cb4c;
        }
    }
    ctx->pc = 0x18CB48u;
label_18cb48:
    // 0x18cb48: 0xae0501bc  sw          $a1, 0x1BC($s0)
    ctx->pc = 0x18cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 5));
label_18cb4c:
    // 0x18cb4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18cb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18cb50:
    // 0x18cb50: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x18cb50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_18cb54:
    // 0x18cb54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18cb58:
    if (ctx->pc == 0x18CB58u) {
        ctx->pc = 0x18CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB54u;
        // 0x18cb58: 0xae0501c0  sw          $a1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB5Cu;
        goto label_18cb5c;
    }
    ctx->pc = 0x18CB54u;
    {
        const bool branch_taken_0x18cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB54u;
        // 0x18cb58: 0xae0501c0  sw          $a1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb54) {
            ctx->pc = 0x18CB64u;
            goto label_18cb64;
        }
    }
    ctx->pc = 0x18CB5Cu;
label_18cb5c:
    // 0x18cb5c: 0xc063308  jal         func_18CC20
label_18cb60:
    if (ctx->pc == 0x18CB60u) {
        ctx->pc = 0x18CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB5Cu;
        // 0x18cb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB64u;
        goto label_18cb64;
    }
    ctx->pc = 0x18CB5Cu;
    SET_GPR_U32(ctx, 31, 0x18CB64u);
    ctx->pc = 0x18CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB5Cu;
    // 0x18cb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC20u, 0x18CB5Cu, 0x18CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB64u;
label_18cb64:
    // 0x18cb64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18cb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18cb68:
    // 0x18cb68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18cb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18cb6c:
    // 0x18cb6c: 0x3e00008  jr          $ra
label_18cb70:
    if (ctx->pc == 0x18CB70u) {
        ctx->pc = 0x18CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB6Cu;
        // 0x18cb70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB74u;
        goto label_18cb74;
    }
    ctx->pc = 0x18CB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB6Cu;
        // 0x18cb70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CB74u;
label_18cb74:
    // 0x18cb74: 0x0  nop
    ctx->pc = 0x18cb74u;
    // NOP
    ctx->pc = 0x18cb78u;
}
