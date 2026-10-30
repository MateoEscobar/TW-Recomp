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

// Function: sub_002F0788
// Address: 0x2f0788 - 0x2f0930
void sub_002F0788_0x2f0788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0788_0x2f0788");
#endif

    switch (ctx->pc) {
        case 0x2f0870u: goto label_2f0870;
        case 0x2f0884u: goto label_2f0884;
        case 0x2f0890u: goto label_2f0890;
        case 0x2f08a8u: goto label_2f08a8;
        case 0x2f08b4u: goto label_2f08b4;
        case 0x2f08c4u: goto label_2f08c4;
        case 0x2f08d4u: goto label_2f08d4;
        case 0x2f08dcu: goto label_2f08dc;
        case 0x2f08e4u: goto label_2f08e4;
        case 0x2f08f0u: goto label_2f08f0;
        case 0x2f08fcu: goto label_2f08fc;
        case 0x2f090cu: goto label_2f090c;
        case 0x2f0914u: goto label_2f0914;
        default: break;
    }

    ctx->pc = 0x2f0788u;

    // 0x2f0788: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f0788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f078c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f0790: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f0790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2f0794: 0x244416c0  addiu       $a0, $v0, 0x16C0
    ctx->pc = 0x2f0794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2f0798: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f0798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2f079c: 0x24a30090  addiu       $v1, $a1, 0x90
    ctx->pc = 0x2f079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x2f07a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f07a4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2f07a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f07a8: 0xc44116c0  lwc1        $f1, 0x16C0($v0)
    ctx->pc = 0x2f07a8u;
    { uint32_t bits = FAST_READ32(0x5116C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07ac: 0xc4a00090  lwc1        $f0, 0x90($a1)
    ctx->pc = 0x2f07acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f07b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f07b4: 0x0  nop
    ctx->pc = 0x2f07b4u;
    // NOP
    // 0x2f07b8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2F07B8u;
    {
        const bool branch_taken_0x2f07b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F07B8u;
        // 0x2f07bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f07b8) {
            ctx->pc = 0x2F0808u;
            goto label_2f0808;
        }
    }
    ctx->pc = 0x2F07C0u;
    // 0x2f07c0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07c4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2f07c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f07c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f07cc: 0x0  nop
    ctx->pc = 0x2f07ccu;
    // NOP
    // 0x2f07d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2F07D0u;
    {
        const bool branch_taken_0x2f07d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f07d0) {
            ctx->pc = 0x2F0808u;
            goto label_2f0808;
        }
    }
    ctx->pc = 0x2F07D8u;
    // 0x2f07d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2f07d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2f07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f07e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f07e4: 0x0  nop
    ctx->pc = 0x2f07e4u;
    // NOP
    // 0x2f07e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2F07E8u;
    {
        const bool branch_taken_0x2f07e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f07e8) {
            ctx->pc = 0x2F0808u;
            goto label_2f0808;
        }
    }
    ctx->pc = 0x2F07F0u;
    // 0x2f07f0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2f07f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07f4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2f07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f07f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f07fc: 0x0  nop
    ctx->pc = 0x2f07fcu;
    // NOP
    // 0x2f0800: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0800u;
    {
        const bool branch_taken_0x2f0800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0800) {
            ctx->pc = 0x2F0804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0800u;
            // 0x2f0804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0808u;
            goto label_2f0808;
        }
    }
    ctx->pc = 0x2F0808u;
label_2f0808:
    // 0x2f0808: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F0808u;
    {
        const bool branch_taken_0x2f0808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0808u;
        // 0x2f080c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0808) {
            ctx->pc = 0x2F0918u;
            goto label_2f0918;
        }
    }
    ctx->pc = 0x2F0810u;
    // 0x2f0810: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2f0810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2f0814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0818: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f0818u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2f081c: 0x78a300a0  lq          $v1, 0xA0($a1)
    ctx->pc = 0x2f081cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x2f0820: 0x24b100a0  addiu       $s1, $a1, 0xA0
    ctx->pc = 0x2f0820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x2f0824: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f0824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f0828: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f0828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f082c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f082cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f0830: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f0830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f0834: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f0834u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f0838: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f083c: 0x78a20090  lq          $v0, 0x90($a1)
    ctx->pc = 0x2f083cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x2f0840: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f0840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f0844: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f0844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f0848: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f0848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f084c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f084cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f0850: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f0850u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f0854: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2f0854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2f0858: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f0858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2f085c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f0860: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f0860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2f0864: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f0864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2f0868: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2F0868u;
    SET_GPR_U32(ctx, 31, 0x2F0870u);
    ctx->pc = 0x2F086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0868u;
    // 0x2f086c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F0868u, 0x2F0870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0870u;
label_2f0870:
    // 0x2f0870: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2f0870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2f0874: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f0874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f0878: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f087c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F087Cu;
    SET_GPR_U32(ctx, 31, 0x2F0884u);
    ctx->pc = 0x2F0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F087Cu;
    // 0x2f0880: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F087Cu, 0x2F0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0884u;
label_2f0884:
    // 0x2f0884: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f0888: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F0888u;
    SET_GPR_U32(ctx, 31, 0x2F0890u);
    ctx->pc = 0x2F088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0888u;
    // 0x2f088c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F0888u, 0x2F0890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0890u;
label_2f0890:
    // 0x2f0890: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f0890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f0894: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f0894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f0898: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f0898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2f089c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f089cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2f08a0: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2F08A0u;
    SET_GPR_U32(ctx, 31, 0x2F08A8u);
    ctx->pc = 0x2F08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08A0u;
    // 0x2f08a4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2F08A0u, 0x2F08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08A8u;
label_2f08a8:
    // 0x2f08a8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f08a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f08ac: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x2F08ACu;
    SET_GPR_U32(ctx, 31, 0x2F08B4u);
    ctx->pc = 0x2F08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08ACu;
    // 0x2f08b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x2F08ACu, 0x2F08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08B4u;
label_2f08b4:
    // 0x2f08b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f08b8: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x2f08b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x2f08bc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2F08BCu;
    SET_GPR_U32(ctx, 31, 0x2F08C4u);
    ctx->pc = 0x2F08C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08BCu;
    // 0x2f08c0: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F08BCu, 0x2F08C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08C4u;
label_2f08c4:
    // 0x2f08c4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f08c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f08c8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f08cc: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x2F08CCu;
    SET_GPR_U32(ctx, 31, 0x2F08D4u);
    ctx->pc = 0x2F08D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08CCu;
    // 0x2f08d0: 0x24a57b48  addiu       $a1, $a1, 0x7B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x2F08CCu, 0x2F08D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08D4u;
label_2f08d4:
    // 0x2f08d4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2F08D4u;
    SET_GPR_U32(ctx, 31, 0x2F08DCu);
    ctx->pc = 0x2F08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08D4u;
    // 0x2f08d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F08D4u, 0x2F08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08DCu;
label_2f08dc:
    // 0x2f08dc: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2F08DCu;
    SET_GPR_U32(ctx, 31, 0x2F08E4u);
    ctx->pc = 0x2F08E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08DCu;
    // 0x2f08e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F08DCu, 0x2F08E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08E4u;
label_2f08e4:
    // 0x2f08e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f08e8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F08E8u;
    SET_GPR_U32(ctx, 31, 0x2F08F0u);
    ctx->pc = 0x2F08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08E8u;
    // 0x2f08ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F08E8u, 0x2F08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08F0u;
label_2f08f0:
    // 0x2f08f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f08f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f08f4: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x2F08F4u;
    SET_GPR_U32(ctx, 31, 0x2F08FCu);
    ctx->pc = 0x2F08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08F4u;
    // 0x2f08f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x2F08F4u, 0x2F08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08FCu;
label_2f08fc:
    // 0x2f08fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f08fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f0900: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f0900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f0904: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x2F0904u;
    SET_GPR_U32(ctx, 31, 0x2F090Cu);
    ctx->pc = 0x2F0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0904u;
    // 0x2f0908: 0x24a57b60  addiu       $a1, $a1, 0x7B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x2F0904u, 0x2F090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F090Cu;
label_2f090c:
    // 0x2f090c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2F090Cu;
    SET_GPR_U32(ctx, 31, 0x2F0914u);
    ctx->pc = 0x2F0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F090Cu;
    // 0x2f0910: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F090Cu, 0x2F0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0914u;
label_2f0914:
    // 0x2f0914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0918:
    // 0x2f0918: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f0918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f091c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f091cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0920: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f0920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0924: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2f0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f0928: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0928u;
        // 0x2f092c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0930u;
}
