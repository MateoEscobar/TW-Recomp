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

// Function: sub_0010ADF8
// Address: 0x10adf8 - 0x10af58
void sub_0010ADF8_0x10adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ADF8_0x10adf8");
#endif

    switch (ctx->pc) {
        case 0x10ae14u: goto label_10ae14;
        case 0x10ae74u: goto label_10ae74;
        case 0x10ae84u: goto label_10ae84;
        case 0x10aebcu: goto label_10aebc;
        case 0x10aeccu: goto label_10aecc;
        case 0x10aedcu: goto label_10aedc;
        case 0x10aeecu: goto label_10aeec;
        case 0x10af00u: goto label_10af00;
        case 0x10af20u: goto label_10af20;
        case 0x10af30u: goto label_10af30;
        default: break;
    }

    ctx->pc = 0x10adf8u;

    // 0x10adf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10adfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10ae00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ae04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ae04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae08: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10ae08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10ae0c: 0xc0428a8  jal         func_10A2A0
    ctx->pc = 0x10AE0Cu;
    SET_GPR_U32(ctx, 31, 0x10AE14u);
    ctx->pc = 0x10AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE0Cu;
    // 0x10ae10: 0xc60c0038  lwc1        $f12, 0x38($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A2A0u, 0x10AE0Cu, 0x10AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE14u;
label_10ae14:
    // 0x10ae14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AE14u;
    {
        const bool branch_taken_0x10ae14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE14u;
        // 0x10ae18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae14) {
            ctx->pc = 0x10AE30u;
            goto label_10ae30;
        }
    }
    ctx->pc = 0x10AE1Cu;
    // 0x10ae1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10ae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ae20: 0x0  nop
    ctx->pc = 0x10ae20u;
    // NOP
    // 0x10ae24: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10ae24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10ae28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10AE28u;
    {
        const bool branch_taken_0x10ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE28u;
        // 0x10ae2c: 0xc6000038  lwc1        $f0, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae28) {
            ctx->pc = 0x10AE4Cu;
            goto label_10ae4c;
        }
    }
    ctx->pc = 0x10AE30u;
label_10ae30:
    // 0x10ae30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10ae34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10ae38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10ae38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ae3c: 0x0  nop
    ctx->pc = 0x10ae3cu;
    // NOP
    // 0x10ae40: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10ae40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10ae44: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x10ae44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x10ae48: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x10ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ae4c:
    // 0x10ae4c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x10ae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x10ae50: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10ae50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x10ae54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ae54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ae58: 0x460c0501  sub.s       $f20, $f0, $f12
    ctx->pc = 0x10ae58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x10ae5c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x10ae5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ae60: 0x0  nop
    ctx->pc = 0x10ae60u;
    // NOP
    // 0x10ae64: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x10AE64u;
    {
        const bool branch_taken_0x10ae64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ae64) {
            ctx->pc = 0x10AE94u;
            goto label_10ae94;
        }
    }
    ctx->pc = 0x10AE6Cu;
    // 0x10ae6c: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10AE6Cu;
    SET_GPR_U32(ctx, 31, 0x10AE74u);
    ctx->pc = 0x10AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE6Cu;
    // 0x10ae70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10AE6Cu, 0x10AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE74u;
label_10ae74:
    // 0x10ae74: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10ae78: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10ae78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10ae7c: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10AE7Cu;
    SET_GPR_U32(ctx, 31, 0x10AE84u);
    ctx->pc = 0x10AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE7Cu;
    // 0x10ae80: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10AE7Cu, 0x10AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE84u;
label_10ae84:
    // 0x10ae84: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x10AE84u;
    {
        const bool branch_taken_0x10ae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE84u;
        // 0x10ae88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae84) {
            ctx->pc = 0x10AF40u;
            goto label_10af40;
        }
    }
    ctx->pc = 0x10AE8Cu;
    // 0x10ae8c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x10AE8Cu;
    {
        const bool branch_taken_0x10ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE8Cu;
        // 0x10ae90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae8c) {
            ctx->pc = 0x10AF40u;
            goto label_10af40;
        }
    }
    ctx->pc = 0x10AE94u;
label_10ae94:
    // 0x10ae94: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x10ae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x10ae98: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x10ae98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x10ae9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ae9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10aea0: 0x0  nop
    ctx->pc = 0x10aea0u;
    // NOP
    // 0x10aea4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x10aea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10aea8: 0x0  nop
    ctx->pc = 0x10aea8u;
    // NOP
    // 0x10aeac: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x10AEACu;
    {
        const bool branch_taken_0x10aeac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10aeac) {
            ctx->pc = 0x10AF08u;
            goto label_10af08;
        }
    }
    ctx->pc = 0x10AEB4u;
    // 0x10aeb4: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10AEB4u;
    SET_GPR_U32(ctx, 31, 0x10AEBCu);
    ctx->pc = 0x10AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEB4u;
    // 0x10aeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10AEB4u, 0x10AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEBCu;
label_10aebc:
    // 0x10aebc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10aec0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10aec0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10aec4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10AEC4u;
    SET_GPR_U32(ctx, 31, 0x10AECCu);
    ctx->pc = 0x10AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEC4u;
    // 0x10aec8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10AEC4u, 0x10AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AECCu;
label_10aecc:
    // 0x10aecc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10AECCu;
    {
        const bool branch_taken_0x10aecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AECCu;
        // 0x10aed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aecc) {
            ctx->pc = 0x10AF40u;
            goto label_10af40;
        }
    }
    ctx->pc = 0x10AED4u;
    // 0x10aed4: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10AED4u;
    SET_GPR_U32(ctx, 31, 0x10AEDCu);
    ctx->pc = 0x10AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AED4u;
    // 0x10aed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10AED4u, 0x10AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEDCu;
label_10aedc:
    // 0x10aedc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10aee0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10aee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10aee4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10AEE4u;
    SET_GPR_U32(ctx, 31, 0x10AEECu);
    ctx->pc = 0x10AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEE4u;
    // 0x10aee8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10AEE4u, 0x10AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEECu;
label_10aeec:
    // 0x10aeec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10AEECu;
    {
        const bool branch_taken_0x10aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEECu;
        // 0x10aef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aeec) {
            ctx->pc = 0x10AF40u;
            goto label_10af40;
        }
    }
    ctx->pc = 0x10AEF4u;
    // 0x10aef4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10aef8: 0xc04152a  jal         func_1054A8
    ctx->pc = 0x10AEF8u;
    SET_GPR_U32(ctx, 31, 0x10AF00u);
    ctx->pc = 0x10AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEF8u;
    // 0x10aefc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x10AEF8u, 0x10AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF00u;
label_10af00:
    // 0x10af00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10AF00u;
    {
        const bool branch_taken_0x10af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF00u;
        // 0x10af04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af00) {
            ctx->pc = 0x10AF40u;
            goto label_10af40;
        }
    }
    ctx->pc = 0x10AF08u;
label_10af08:
    // 0x10af08: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10af08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10af0c: 0x0  nop
    ctx->pc = 0x10af0cu;
    // NOP
    // 0x10af10: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x10AF10u;
    {
        const bool branch_taken_0x10af10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10af10) {
            ctx->pc = 0x10AF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AF10u;
            // 0x10af14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AF40u;
            goto label_10af40;
        }
    }
    ctx->pc = 0x10AF18u;
    // 0x10af18: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10AF18u;
    SET_GPR_U32(ctx, 31, 0x10AF20u);
    ctx->pc = 0x10AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF18u;
    // 0x10af1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10AF18u, 0x10AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF20u;
label_10af20:
    // 0x10af20: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10af20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10af24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10af24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10af28: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10AF28u;
    SET_GPR_U32(ctx, 31, 0x10AF30u);
    ctx->pc = 0x10AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF28u;
    // 0x10af2c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10AF28u, 0x10AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF30u;
label_10af30:
    // 0x10af30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10af30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af34: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10AF34u;
    {
        const bool branch_taken_0x10af34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF34u;
        // 0x10af38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af34) {
            ctx->pc = 0x10AF40u;
            goto label_10af40;
        }
    }
    ctx->pc = 0x10AF3Cu;
    // 0x10af3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10af3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10af40:
    // 0x10af40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10af40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10af44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af48: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10af4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF4Cu;
        // 0x10af50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF54u;
    // 0x10af54: 0x0  nop
    ctx->pc = 0x10af54u;
    // NOP
    ctx->pc = 0x10af58u;
}
