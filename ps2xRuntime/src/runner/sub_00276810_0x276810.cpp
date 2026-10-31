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

// Function: sub_00276810
// Address: 0x276810 - 0x276998
void sub_00276810_0x276810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276810_0x276810");
#endif

    switch (ctx->pc) {
        case 0x276868u: goto label_276868;
        case 0x276878u: goto label_276878;
        case 0x27688cu: goto label_27688c;
        case 0x276938u: goto label_276938;
        case 0x27694cu: goto label_27694c;
        case 0x276958u: goto label_276958;
        case 0x276968u: goto label_276968;
        case 0x276978u: goto label_276978;
        default: break;
    }

    ctx->pc = 0x276810u;

    // 0x276810: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x276810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x276814: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x276814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x276818: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x276818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x27681c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x27681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x276820: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x276820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x276824: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x276824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276828: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x276828u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27682c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27682cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276830: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x276830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x276834: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x276834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x276838: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x276838u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x27683c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x276840: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x276840u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x276844: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x276844u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x276848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27684c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x27684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x276850: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x276854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27685c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27685cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276860: 0xc040596  jal         func_101658
    ctx->pc = 0x276860u;
    SET_GPR_U32(ctx, 31, 0x276868u);
    ctx->pc = 0x276864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276860u;
    // 0x276864: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x276860u, 0x276868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276868u;
label_276868:
    // 0x276868: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276868u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27686c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276870: 0xc095128  jal         func_2544A0
    ctx->pc = 0x276870u;
    SET_GPR_U32(ctx, 31, 0x276878u);
    ctx->pc = 0x276874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276870u;
    // 0x276874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x276870u, 0x276878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276878u;
label_276878:
    // 0x276878: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x276878u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27687c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276884: 0xc095106  jal         func_254418
    ctx->pc = 0x276884u;
    SET_GPR_U32(ctx, 31, 0x27688Cu);
    ctx->pc = 0x276888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276884u;
    // 0x276888: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x276884u, 0x27688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27688Cu;
label_27688c:
    // 0x27688c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x27688cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276890: 0x0  nop
    ctx->pc = 0x276890u;
    // NOP
    // 0x276894: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x276894u;
    {
        const bool branch_taken_0x276894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276894) {
            ctx->pc = 0x276898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276894u;
            // 0x276898: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27689Cu;
            goto label_27689c;
        }
    }
    ctx->pc = 0x27689Cu;
label_27689c:
    // 0x27689c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x27689cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2768a0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2768a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2768a4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2768a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2768a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2768a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2768ac: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x2768acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2768b0: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x2768b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2768b4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2768b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2768b8: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x2768b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2768bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2768bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2768c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2768c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2768c4: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x2768c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2768c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2768c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2768cc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2768ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2768d0: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x2768d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2768d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2768d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2768d8: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x2768d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2768dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2768dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2768e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2768e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2768e4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2768e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2768e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2768e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2768ec: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2768ecu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2768f0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2768f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2768f4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2768f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2768f8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2768f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2768fc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2768fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x276900: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x276900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x276904: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x276904u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x276908: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x276908u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x27690c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x27690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x276910: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x276910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276914: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x276914u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x276918: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x276918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x27691c: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x27691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x276920: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x276920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276924: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x276924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x276928: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x276928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x27692c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27692cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x276930: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x276930u;
    SET_GPR_U32(ctx, 31, 0x276938u);
    ctx->pc = 0x276934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276930u;
    // 0x276934: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x276930u, 0x276938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276938u;
label_276938:
    // 0x276938: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x276938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27693c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27693cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x276940: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x276940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x276944: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x276944u;
    SET_GPR_U32(ctx, 31, 0x27694Cu);
    ctx->pc = 0x276948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276944u;
    // 0x276948: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x276944u, 0x27694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27694Cu;
label_27694c:
    // 0x27694c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x27694cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x276950: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x276950u;
    SET_GPR_U32(ctx, 31, 0x276958u);
    ctx->pc = 0x276954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276950u;
    // 0x276954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x276950u, 0x276958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276958u;
label_276958:
    // 0x276958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27695c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27695cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x276960: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x276960u;
    SET_GPR_U32(ctx, 31, 0x276968u);
    ctx->pc = 0x276964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276960u;
    // 0x276964: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x276960u, 0x276968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276968u;
label_276968:
    // 0x276968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27696c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27696cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x276970: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x276970u;
    SET_GPR_U32(ctx, 31, 0x276978u);
    ctx->pc = 0x276974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276970u;
    // 0x276974: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x276970u, 0x276978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276978u;
label_276978:
    // 0x276978: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x276978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27697c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x27697cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276980: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x276980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276984: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x276984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x276988: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x276988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27698c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x27698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276990: 0x3e00008  jr          $ra
    ctx->pc = 0x276990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276990u;
        // 0x276994: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276998u;
}
