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

// Function: sub_002FCD90
// Address: 0x2fcd90 - 0x2fceb8
void sub_002FCD90_0x2fcd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCD90_0x2fcd90");
#endif

    switch (ctx->pc) {
        case 0x2fcddcu: goto label_2fcddc;
        case 0x2fcdf4u: goto label_2fcdf4;
        case 0x2fce04u: goto label_2fce04;
        case 0x2fce0cu: goto label_2fce0c;
        case 0x2fce38u: goto label_2fce38;
        case 0x2fce4cu: goto label_2fce4c;
        case 0x2fce54u: goto label_2fce54;
        case 0x2fce70u: goto label_2fce70;
        default: break;
    }

    ctx->pc = 0x2fcd90u;

    // 0x2fcd90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fcd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fcd94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2fcd94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fcd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fcd9c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2fcd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcda0: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2fcda0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fcda4: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2fcda4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2fcda8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2fcda8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fcdac: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2fcdacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2fcdb0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2fcdb0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2fcdb4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2fcdb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fcdb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fcdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fcdbc: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2fcdbcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fcdc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fcdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fcdc4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2fcdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fcdc8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2fcdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fcdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fcdd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fcdd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fcdd4: 0xc0cdd74  jal         func_3375D0
    ctx->pc = 0x2FCDD4u;
    SET_GPR_U32(ctx, 31, 0x2FCDDCu);
    ctx->pc = 0x2FCDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDD4u;
    // 0x2fcdd8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375D0u, 0x2FCDD4u, 0x2FCDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCDDCu;
label_2fcddc:
    // 0x2fcddc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fcddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2fcde0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2fcde0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2fcde4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2fcde4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2fcde8: 0xc45702cc  lwc1        $f23, 0x2CC($v0)
    ctx->pc = 0x2fcde8u;
    { uint32_t bits = FAST_READ32(0x5102CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fcdec: 0xc08abac  jal         func_22AEB0
    ctx->pc = 0x2FCDECu;
    SET_GPR_U32(ctx, 31, 0x2FCDF4u);
    ctx->pc = 0x2FCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDECu;
    // 0x2fcdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AEB0u, 0x2FCDECu, 0x2FCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCDF4u;
label_2fcdf4:
    // 0x2fcdf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fcdf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdfc: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x2FCDFCu;
    SET_GPR_U32(ctx, 31, 0x2FCE04u);
    ctx->pc = 0x2FCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDFCu;
    // 0x2fce00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x2FCDFCu, 0x2FCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE04u;
label_2fce04:
    // 0x2fce04: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x2FCE04u;
    SET_GPR_U32(ctx, 31, 0x2FCE0Cu);
    ctx->pc = 0x2FCE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE04u;
    // 0x2fce08: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x2FCE04u, 0x2FCE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE0Cu;
label_2fce0c:
    // 0x2fce0c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2fce0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2fce10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2fce10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2fce14: 0x46170543  div.s       $f21, $f0, $f23
    ctx->pc = 0x2fce14u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x2fce18: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x2fce18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fce1c: 0x0  nop
    ctx->pc = 0x2fce1cu;
    // NOP
    // 0x2fce20: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2FCE20u;
    {
        const bool branch_taken_0x2fce20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE20u;
        // 0x2fce24: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce20) {
            ctx->pc = 0x2FCE88u;
            goto label_2fce88;
        }
    }
    ctx->pc = 0x2FCE28u;
    // 0x2fce28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2fce28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fce2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCE2Cu;
    {
        const bool branch_taken_0x2fce2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE2Cu;
        // 0x2fce30: 0x4600a646  mov.s       $f25, $f20 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce2c) {
            ctx->pc = 0x2FCE3Cu;
            goto label_2fce3c;
        }
    }
    ctx->pc = 0x2FCE34u;
    // 0x2fce34: 0x0  nop
    ctx->pc = 0x2fce34u;
    // NOP
label_2fce38:
    // 0x2fce38: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2fce38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2fce3c:
    // 0x2fce3c: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FCE3Cu;
    {
        const bool branch_taken_0x2fce3c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE3Cu;
        // 0x2fce40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce3c) {
            ctx->pc = 0x2FCE84u;
            goto label_2fce84;
        }
    }
    ctx->pc = 0x2FCE44u;
    // 0x2fce44: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x2FCE44u;
    SET_GPR_U32(ctx, 31, 0x2FCE4Cu);
    ctx->pc = 0x2FCE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE44u;
    // 0x2fce48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x2FCE44u, 0x2FCE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE4Cu;
label_2fce4c:
    // 0x2fce4c: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x2FCE4Cu;
    SET_GPR_U32(ctx, 31, 0x2FCE54u);
    ctx->pc = 0x2FCE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE4Cu;
    // 0x2fce50: 0x46190302  mul.s       $f12, $f0, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x2FCE4Cu, 0x2FCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE54u;
label_2fce54:
    // 0x2fce54: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2fce54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2fce58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2fce5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2fce60: 0x0  nop
    ctx->pc = 0x2fce60u;
    // NOP
    // 0x2fce64: 0x46170503  div.s       $f20, $f0, $f23
    ctx->pc = 0x2fce64u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x2fce68: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2FCE68u;
    SET_GPR_U32(ctx, 31, 0x2FCE70u);
    ctx->pc = 0x2FCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE68u;
    // 0x2fce6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2FCE68u, 0x2FCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE70u;
label_2fce70:
    // 0x2fce70: 0x46140529  min.s       $f20, $f0, $f20
    ctx->pc = 0x2fce70u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[20]);
    // 0x2fce74: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2fce74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fce78: 0x0  nop
    ctx->pc = 0x2fce78u;
    // NOP
    // 0x2fce7c: 0x4502ffee  bc1fl       . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCE7Cu;
    {
        const bool branch_taken_0x2fce7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fce7c) {
            ctx->pc = 0x2FCE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCE7Cu;
            // 0x2fce80: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fce38;
        }
    }
    ctx->pc = 0x2FCE84u;
label_2fce84:
    // 0x2fce84: 0x4615b029  min.s       $f0, $f22, $f21
    ctx->pc = 0x2fce84u;
    ctx->f[0] = std::min(ctx->f[22], ctx->f[21]);
label_2fce88:
    // 0x2fce88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fce88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fce8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fce8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fce90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fce90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fce94: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x2fce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2fce98: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2fce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2fce9c: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2fce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fcea0: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2fcea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fcea4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2fcea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fcea8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2fcea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fceac: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEACu;
        // 0x2fceb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCEB4u;
    // 0x2fceb4: 0x0  nop
    ctx->pc = 0x2fceb4u;
    // NOP
    ctx->pc = 0x2fceb8u;
}
