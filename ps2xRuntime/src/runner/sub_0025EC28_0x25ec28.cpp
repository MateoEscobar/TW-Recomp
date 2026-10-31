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

// Function: sub_0025EC28
// Address: 0x25ec28 - 0x25eee0
void sub_0025EC28_0x25ec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EC28_0x25ec28");
#endif

    switch (ctx->pc) {
        case 0x25ec6cu: goto label_25ec6c;
        case 0x25ec88u: goto label_25ec88;
        case 0x25ec94u: goto label_25ec94;
        case 0x25eca0u: goto label_25eca0;
        case 0x25ecacu: goto label_25ecac;
        case 0x25ecdcu: goto label_25ecdc;
        case 0x25ececu: goto label_25ecec;
        case 0x25ecfcu: goto label_25ecfc;
        case 0x25ed70u: goto label_25ed70;
        case 0x25ed80u: goto label_25ed80;
        case 0x25ed90u: goto label_25ed90;
        default: break;
    }

    ctx->pc = 0x25ec28u;

    // 0x25ec28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25ec28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25ec2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x25ec30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25ec34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ec34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec38: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x25ec38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25ec3c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x25ec3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25ec40: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25ec40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25ec44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x25ec48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ec4c: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x25ec4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25ec50: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x25ec50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25ec54: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x25ec54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x25ec58: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x25ec58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ec5c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25ec5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25ec60: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x25ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x25ec64: 0xc05d484  jal         func_175210
    ctx->pc = 0x25EC64u;
    SET_GPR_U32(ctx, 31, 0x25EC6Cu);
    ctx->pc = 0x25EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC64u;
    // 0x25ec68: 0x8e1200d4  lw          $s2, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25EC64u, 0x25EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC6Cu;
label_25ec6c:
    // 0x25ec6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ec6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25ec74: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x25ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25ec78: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x25EC78u;
    {
        const bool branch_taken_0x25ec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25ec78) {
            ctx->pc = 0x25EC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EC78u;
            // 0x25ec7c: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EC80u;
            goto label_25ec80;
        }
    }
    ctx->pc = 0x25EC80u;
label_25ec80:
    // 0x25ec80: 0xc0885b0  jal         func_2216C0
    ctx->pc = 0x25EC80u;
    SET_GPR_U32(ctx, 31, 0x25EC88u);
    ctx->pc = 0x25EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC80u;
    // 0x25ec84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x25EC80u, 0x25EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC88u;
label_25ec88:
    // 0x25ec88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec8c: 0xc08859c  jal         func_221670
    ctx->pc = 0x25EC8Cu;
    SET_GPR_U32(ctx, 31, 0x25EC94u);
    ctx->pc = 0x25EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC8Cu;
    // 0x25ec90: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x25EC8Cu, 0x25EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC94u;
label_25ec94:
    // 0x25ec94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec98: 0xc088588  jal         func_221620
    ctx->pc = 0x25EC98u;
    SET_GPR_U32(ctx, 31, 0x25ECA0u);
    ctx->pc = 0x25EC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC98u;
    // 0x25ec9c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x221620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221620u, 0x25EC98u, 0x25ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECA0u;
label_25eca0:
    // 0x25eca0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x25eca0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x25eca4: 0xc088574  jal         func_2215D0
    ctx->pc = 0x25ECA4u;
    SET_GPR_U32(ctx, 31, 0x25ECACu);
    ctx->pc = 0x25ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECA4u;
    // 0x25eca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x25ECA4u, 0x25ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECACu;
label_25ecac:
    // 0x25ecac: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x25ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25ecb0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x25ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x25ecb4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25ECB4u;
    {
        const bool branch_taken_0x25ecb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECB4u;
        // 0x25ecb8: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecb4) {
            ctx->pc = 0x25ECD4u;
            goto label_25ecd4;
        }
    }
    ctx->pc = 0x25ECBCu;
    // 0x25ecbc: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x25ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ecc0: 0x3c013fa2  lui         $at, 0x3FA2
    ctx->pc = 0x25ecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16290 << 16));
    // 0x25ecc4: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x25ecc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x25ecc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ecc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25eccc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x25ECCCu;
    {
        const bool branch_taken_0x25eccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECCCu;
        // 0x25ecd0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eccc) {
            ctx->pc = 0x25EEACu;
            goto label_25eeac;
        }
    }
    ctx->pc = 0x25ECD4u;
label_25ecd4:
    // 0x25ecd4: 0xc088e60  jal         func_223980
    ctx->pc = 0x25ECD4u;
    SET_GPR_U32(ctx, 31, 0x25ECDCu);
    ctx->pc = 0x25ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECD4u;
    // 0x25ecd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x25ECD4u, 0x25ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECDCu;
label_25ecdc:
    // 0x25ecdc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25ECDCu;
    {
        const bool branch_taken_0x25ecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ecdc) {
            ctx->pc = 0x25ECE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ECDCu;
            // 0x25ece0: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED04u;
            goto label_25ed04;
        }
    }
    ctx->pc = 0x25ECE4u;
    // 0x25ece4: 0xc088e48  jal         func_223920
    ctx->pc = 0x25ECE4u;
    SET_GPR_U32(ctx, 31, 0x25ECECu);
    ctx->pc = 0x25ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECE4u;
    // 0x25ece8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x25ECE4u, 0x25ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECECu;
label_25ecec:
    // 0x25ecec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25ECECu;
    {
        const bool branch_taken_0x25ecec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ecec) {
            ctx->pc = 0x25ECF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ECECu;
            // 0x25ecf0: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED04u;
            goto label_25ed04;
        }
    }
    ctx->pc = 0x25ECF4u;
    // 0x25ecf4: 0xc089f66  jal         func_227D98
    ctx->pc = 0x25ECF4u;
    SET_GPR_U32(ctx, 31, 0x25ECFCu);
    ctx->pc = 0x25ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECF4u;
    // 0x25ecf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x25ECF4u, 0x25ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECFCu;
label_25ecfc:
    // 0x25ecfc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25ECFCu;
    {
        const bool branch_taken_0x25ecfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECFCu;
        // 0x25ed00: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecfc) {
            ctx->pc = 0x25ED5Cu;
            goto label_25ed5c;
        }
    }
    ctx->pc = 0x25ED04u;
label_25ed04:
    // 0x25ed04: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25ed08: 0x14620069  bne         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x25ED08u;
    {
        const bool branch_taken_0x25ed08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED08u;
        // 0x25ed0c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed08) {
            ctx->pc = 0x25EEB0u;
            goto label_25eeb0;
        }
    }
    ctx->pc = 0x25ED10u;
    // 0x25ed10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ed10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ed14: 0xc6410170  lwc1        $f1, 0x170($s2)
    ctx->pc = 0x25ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ed18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25ed18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ed1c: 0x0  nop
    ctx->pc = 0x25ed1cu;
    // NOP
    // 0x25ed20: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25ED20u;
    {
        const bool branch_taken_0x25ed20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED20u;
        // 0x25ed24: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed20) {
            ctx->pc = 0x25ED34u;
            goto label_25ed34;
        }
    }
    ctx->pc = 0x25ED28u;
    // 0x25ed28: 0x0  nop
    ctx->pc = 0x25ed28u;
    // NOP
    // 0x25ed2c: 0x0  nop
    ctx->pc = 0x25ed2cu;
    // NOP
    // 0x25ed30: 0x4601ad03  div.s       $f20, $f21, $f1
    ctx->pc = 0x25ed30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
label_25ed34:
    // 0x25ed34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25ed34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ed38: 0x0  nop
    ctx->pc = 0x25ed38u;
    // NOP
    // 0x25ed3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25ED3Cu;
    {
        const bool branch_taken_0x25ed3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ed3c) {
            ctx->pc = 0x25ED40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED3Cu;
            // 0x25ed40: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED44u;
            goto label_25ed44;
        }
    }
    ctx->pc = 0x25ED44u;
label_25ed44:
    // 0x25ed44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ed44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ed48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ed48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ed4c: 0x0  nop
    ctx->pc = 0x25ed4cu;
    // NOP
    // 0x25ed50: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25ed50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ed54: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x25ED54u;
    {
        const bool branch_taken_0x25ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed54) {
            ctx->pc = 0x25EEA0u;
            goto label_25eea0;
        }
    }
    ctx->pc = 0x25ED5Cu;
label_25ed5c:
    // 0x25ed5c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25ed60: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x25ED60u;
    {
        const bool branch_taken_0x25ed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED60u;
        // 0x25ed64: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed60) {
            ctx->pc = 0x25EEB0u;
            goto label_25eeb0;
        }
    }
    ctx->pc = 0x25ED68u;
    // 0x25ed68: 0xc088e60  jal         func_223980
    ctx->pc = 0x25ED68u;
    SET_GPR_U32(ctx, 31, 0x25ED70u);
    ctx->pc = 0x25ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED68u;
    // 0x25ed6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x25ED68u, 0x25ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED70u;
label_25ed70:
    // 0x25ed70: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25ED70u;
    {
        const bool branch_taken_0x25ed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed70) {
            ctx->pc = 0x25ED74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED70u;
            // 0x25ed74: 0xc6400170  lwc1        $f0, 0x170($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED9Cu;
            goto label_25ed9c;
        }
    }
    ctx->pc = 0x25ED78u;
    // 0x25ed78: 0xc088e48  jal         func_223920
    ctx->pc = 0x25ED78u;
    SET_GPR_U32(ctx, 31, 0x25ED80u);
    ctx->pc = 0x25ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED78u;
    // 0x25ed7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x25ED78u, 0x25ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED80u;
label_25ed80:
    // 0x25ed80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25ED80u;
    {
        const bool branch_taken_0x25ed80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed80) {
            ctx->pc = 0x25ED84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED80u;
            // 0x25ed84: 0xc6400170  lwc1        $f0, 0x170($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED9Cu;
            goto label_25ed9c;
        }
    }
    ctx->pc = 0x25ED88u;
    // 0x25ed88: 0xc089f66  jal         func_227D98
    ctx->pc = 0x25ED88u;
    SET_GPR_U32(ctx, 31, 0x25ED90u);
    ctx->pc = 0x25ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED88u;
    // 0x25ed8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x25ED88u, 0x25ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED90u;
label_25ed90:
    // 0x25ed90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25ED90u;
    {
        const bool branch_taken_0x25ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed90) {
            ctx->pc = 0x25EDB0u;
            goto label_25edb0;
        }
    }
    ctx->pc = 0x25ED98u;
    // 0x25ed98: 0xc6400170  lwc1        $f0, 0x170($s2)
    ctx->pc = 0x25ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ed9c:
    // 0x25ed9c: 0x0  nop
    ctx->pc = 0x25ed9cu;
    // NOP
    // 0x25eda0: 0x0  nop
    ctx->pc = 0x25eda0u;
    // NOP
    // 0x25eda4: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x25eda4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x25eda8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x25EDA8u;
    {
        const bool branch_taken_0x25eda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eda8) {
            ctx->pc = 0x25EE78u;
            goto label_25ee78;
        }
    }
    ctx->pc = 0x25EDB0u;
label_25edb0:
    // 0x25edb0: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x25edb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25edb4: 0x0  nop
    ctx->pc = 0x25edb4u;
    // NOP
    // 0x25edb8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x25EDB8u;
    {
        const bool branch_taken_0x25edb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25edb8) {
            ctx->pc = 0x25EDF4u;
            goto label_25edf4;
        }
    }
    ctx->pc = 0x25EDC0u;
    // 0x25edc0: 0x4617cb01  sub.s       $f12, $f25, $f23
    ctx->pc = 0x25edc0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x25edc4: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x25edc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25edc8: 0x0  nop
    ctx->pc = 0x25edc8u;
    // NOP
    // 0x25edcc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25EDCCu;
    {
        const bool branch_taken_0x25edcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25edcc) {
            ctx->pc = 0x25EDE4u;
            goto label_25ede4;
        }
    }
    ctx->pc = 0x25EDD4u;
    // 0x25edd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25edd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x25edd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25edd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25eddc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25EDDCu;
    {
        const bool branch_taken_0x25eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDDCu;
        // 0x25ede0: 0x4617a801  sub.s       $f0, $f21, $f23 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eddc) {
            ctx->pc = 0x25EE24u;
            goto label_25ee24;
        }
    }
    ctx->pc = 0x25EDE4u;
label_25ede4:
    // 0x25ede4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x25ede8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ede8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25edec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x25EDECu;
    {
        const bool branch_taken_0x25edec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25edec) {
            ctx->pc = 0x25EE78u;
            goto label_25ee78;
        }
    }
    ctx->pc = 0x25EDF4u;
label_25edf4:
    // 0x25edf4: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x25edf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25edf8: 0x0  nop
    ctx->pc = 0x25edf8u;
    // NOP
    // 0x25edfc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x25EDFCu;
    {
        const bool branch_taken_0x25edfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25edfc) {
            ctx->pc = 0x25EE48u;
            goto label_25ee48;
        }
    }
    ctx->pc = 0x25EE04u;
    // 0x25ee04: 0x4616bb01  sub.s       $f12, $f23, $f22
    ctx->pc = 0x25ee04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x25ee08: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x25ee08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ee0c: 0x0  nop
    ctx->pc = 0x25ee0cu;
    // NOP
    // 0x25ee10: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x25EE10u;
    {
        const bool branch_taken_0x25ee10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ee10) {
            ctx->pc = 0x25EE38u;
            goto label_25ee38;
        }
    }
    ctx->pc = 0x25EE18u;
    // 0x25ee18: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x25ee18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x25ee1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ee20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ee20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25ee24:
    // 0x25ee24: 0x0  nop
    ctx->pc = 0x25ee24u;
    // NOP
    // 0x25ee28: 0x0  nop
    ctx->pc = 0x25ee28u;
    // NOP
    // 0x25ee2c: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x25ee2cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x25ee30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25EE30u;
    {
        const bool branch_taken_0x25ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE30u;
        // 0x25ee34: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee30) {
            ctx->pc = 0x25EE78u;
            goto label_25ee78;
        }
    }
    ctx->pc = 0x25EE38u;
label_25ee38:
    // 0x25ee38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ee38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ee3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ee3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25ee40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25EE40u;
    {
        const bool branch_taken_0x25ee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ee40) {
            ctx->pc = 0x25EE78u;
            goto label_25ee78;
        }
    }
    ctx->pc = 0x25EE48u;
label_25ee48:
    // 0x25ee48: 0x4615c034  c.lt.s      $f24, $f21
    ctx->pc = 0x25ee48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ee4c: 0x0  nop
    ctx->pc = 0x25ee4cu;
    // NOP
    // 0x25ee50: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x25EE50u;
    {
        const bool branch_taken_0x25ee50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ee50) {
            ctx->pc = 0x25EE78u;
            goto label_25ee78;
        }
    }
    ctx->pc = 0x25EE58u;
    // 0x25ee58: 0x4618b301  sub.s       $f12, $f22, $f24
    ctx->pc = 0x25ee58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x25ee5c: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x25ee5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ee60: 0x0  nop
    ctx->pc = 0x25ee60u;
    // NOP
    // 0x25ee64: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE64u;
    {
        const bool branch_taken_0x25ee64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ee64) {
            ctx->pc = 0x25EE78u;
            goto label_25ee78;
        }
    }
    ctx->pc = 0x25EE6Cu;
    // 0x25ee6c: 0x4618a801  sub.s       $f0, $f21, $f24
    ctx->pc = 0x25ee6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
    // 0x25ee70: 0x0  nop
    ctx->pc = 0x25ee70u;
    // NOP
    // 0x25ee74: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x25ee74u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_25ee78:
    // 0x25ee78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25ee78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25ee7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ee7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ee80: 0x0  nop
    ctx->pc = 0x25ee80u;
    // NOP
    // 0x25ee84: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25ee84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ee88: 0x0  nop
    ctx->pc = 0x25ee88u;
    // NOP
    // 0x25ee8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25EE8Cu;
    {
        const bool branch_taken_0x25ee8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ee8c) {
            ctx->pc = 0x25EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EE8Cu;
            // 0x25ee90: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EE94u;
            goto label_25ee94;
        }
    }
    ctx->pc = 0x25EE94u;
label_25ee94:
    // 0x25ee94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ee94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ee98: 0x0  nop
    ctx->pc = 0x25ee98u;
    // NOP
    // 0x25ee9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25ee9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25eea0:
    // 0x25eea0: 0x0  nop
    ctx->pc = 0x25eea0u;
    // NOP
    // 0x25eea4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25EEA4u;
    {
        const bool branch_taken_0x25eea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25eea4) {
            ctx->pc = 0x25EEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EEA4u;
            // 0x25eea8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EEACu;
            goto label_25eeac;
        }
    }
    ctx->pc = 0x25EEACu;
label_25eeac:
    // 0x25eeac: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x25eeacu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_25eeb0:
    // 0x25eeb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25eeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25eeb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25eeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25eeb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25eeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eec0: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x25eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25eec4: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x25eec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25eec8: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x25eec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25eecc: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x25eeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25eed0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x25eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25eed4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x25eed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25eed8: 0x3e00008  jr          $ra
    ctx->pc = 0x25EED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EED8u;
        // 0x25eedc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EEE0u;
}
