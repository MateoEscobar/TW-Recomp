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

// Function: sub_002DFEF8
// Address: 0x2dfef8 - 0x2e0088
void sub_002DFEF8_0x2dfef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFEF8_0x2dfef8");
#endif

    switch (ctx->pc) {
        case 0x2dff44u: goto label_2dff44;
        case 0x2dff54u: goto label_2dff54;
        case 0x2dffe4u: goto label_2dffe4;
        case 0x2e004cu: goto label_2e004c;
        default: break;
    }

    ctx->pc = 0x2dfef8u;

    // 0x2dfef8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dfef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dfefc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dfefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dff00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2dff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2dff04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dff04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff08: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x2dff08u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2dff0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dff0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff10: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x2dff10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2dff14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dff14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dff18: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2dff18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2dff1c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2dff1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2dff20: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2dff20u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2dff24: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2dff24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2dff28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dff2c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2dff2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2dff30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dff34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dff38: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2dff38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dff3c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2DFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFF44u);
    ctx->pc = 0x2DFF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF3Cu;
    // 0x2dff40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2DFF3Cu, 0x2DFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF44u;
label_2dff44:
    // 0x2dff44: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2dff44u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2dff48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff4c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2DFF4Cu;
    SET_GPR_U32(ctx, 31, 0x2DFF54u);
    ctx->pc = 0x2DFF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF4Cu;
    // 0x2dff50: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2DFF4Cu, 0x2DFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF54u;
label_2dff54:
    // 0x2dff54: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x2dff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dff58: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2dff58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2dff5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dff5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dff60: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x2dff60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff64: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x2dff64u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dff68: 0x4617a569  min.s       $f21, $f20, $f23
    ctx->pc = 0x2dff68u;
    ctx->f[21] = std::min(ctx->f[20], ctx->f[23]);
    // 0x2dff6c: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x2DFF6Cu;
    {
        const bool branch_taken_0x2dff6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF6Cu;
        // 0x2dff70: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff6c) {
            ctx->pc = 0x2E005Cu;
            goto label_2e005c;
        }
    }
    ctx->pc = 0x2DFF74u;
    // 0x2dff74: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2dff74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2dff78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2dff78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dff7c: 0x4602b041  sub.s       $f1, $f22, $f2
    ctx->pc = 0x2dff7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x2dff80: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2dff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2dff84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dff84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dff88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dff88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dff8c: 0x4603a834  c.lt.s      $f21, $f3
    ctx->pc = 0x2dff8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff90: 0x0  nop
    ctx->pc = 0x2dff90u;
    // NOP
    // 0x2dff94: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DFF94u;
    {
        const bool branch_taken_0x2dff94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF94u;
        // 0x2dff98: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff94) {
            ctx->pc = 0x2DFFC0u;
            goto label_2dffc0;
        }
    }
    ctx->pc = 0x2DFF9Cu;
    // 0x2dff9c: 0x4618a801  sub.s       $f0, $f21, $f24
    ctx->pc = 0x2dff9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
    // 0x2dffa0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2dffa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2dffa4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dffa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dffa8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2dffa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dffac: 0x0  nop
    ctx->pc = 0x2dffacu;
    // NOP
    // 0x2dffb0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2dffb0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2dffb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2dffb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2dffb8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2dffb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2dffbc: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x2dffbcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2dffc0:
    // 0x2dffc0: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x2dffc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dffc4: 0x0  nop
    ctx->pc = 0x2dffc4u;
    // NOP
    // 0x2dffc8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DFFC8u;
    {
        const bool branch_taken_0x2dffc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFC8u;
        // 0x2dffcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dffc8) {
            ctx->pc = 0x2DFFECu;
            goto label_2dffec;
        }
    }
    ctx->pc = 0x2DFFD0u;
    // 0x2dffd0: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DFFD0u;
    {
        const bool branch_taken_0x2dffd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dffd0) {
            ctx->pc = 0x2DFFECu;
            goto label_2dffec;
        }
    }
    ctx->pc = 0x2DFFD8u;
    // 0x2dffd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dffdc: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2DFFDCu;
    SET_GPR_U32(ctx, 31, 0x2DFFE4u);
    ctx->pc = 0x2DFFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFFDCu;
    // 0x2dffe0: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2DFFDCu, 0x2DFFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFFE4u;
label_2dffe4:
    // 0x2dffe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFFE4u;
    {
        const bool branch_taken_0x2dffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dffe4) {
            ctx->pc = 0x2DFFFCu;
            goto label_2dfffc;
        }
    }
    ctx->pc = 0x2DFFECu;
label_2dffec:
    // 0x2dffec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dffecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dfff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfff4: 0x0  nop
    ctx->pc = 0x2dfff4u;
    // NOP
    // 0x2dfff8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2dfff8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2dfffc:
    // 0x2dfffc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2dfffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2e0000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0004: 0x0  nop
    ctx->pc = 0x2e0004u;
    // NOP
    // 0x2e0008: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2e0008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e000c: 0x0  nop
    ctx->pc = 0x2e000cu;
    // NOP
    // 0x2e0010: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E0010u;
    {
        const bool branch_taken_0x2e0010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0010u;
        // 0x2e0014: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0010) {
            ctx->pc = 0x2E0044u;
            goto label_2e0044;
        }
    }
    ctx->pc = 0x2E0018u;
    // 0x2e0018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e001c: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E001Cu;
    {
        const bool branch_taken_0x2e001c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e001c) {
            ctx->pc = 0x2E0044u;
            goto label_2e0044;
        }
    }
    ctx->pc = 0x2E0024u;
    // 0x2e0024: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2e0024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2e0028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e002c: 0x0  nop
    ctx->pc = 0x2e002cu;
    // NOP
    // 0x2e0030: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2e0030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0034: 0x0  nop
    ctx->pc = 0x2e0034u;
    // NOP
    // 0x2e0038: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0038u;
    {
        const bool branch_taken_0x2e0038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0038u;
        // 0x2e003c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0038) {
            ctx->pc = 0x2E0044u;
            goto label_2e0044;
        }
    }
    ctx->pc = 0x2E0040u;
    // 0x2e0040: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e0040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e0044:
    // 0x2e0044: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2E0044u;
    SET_GPR_U32(ctx, 31, 0x2E004Cu);
    ctx->pc = 0x2E0048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0044u;
    // 0x2e0048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2E0044u, 0x2E004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E004Cu;
label_2e004c:
    // 0x2e004c: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x2e004cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
    // 0x2e0050: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e0050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e0054: 0x46180028  max.s       $f0, $f0, $f24
    ctx->pc = 0x2e0054u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[24]);
    // 0x2e0058: 0x46170029  min.s       $f0, $f0, $f23
    ctx->pc = 0x2e0058u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[23]);
label_2e005c:
    // 0x2e005c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e005cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0064: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e0064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e006c: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x2e006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e0070: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2e0070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e0074: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2e0074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e0078: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2e0078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e007c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2e007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0080: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0080u;
        // 0x2e0084: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0088u;
}
