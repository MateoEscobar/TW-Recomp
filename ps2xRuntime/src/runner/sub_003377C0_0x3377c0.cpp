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

// Function: sub_003377C0
// Address: 0x3377c0 - 0x3378b0
void sub_003377C0_0x3377c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003377C0_0x3377c0");
#endif

    switch (ctx->pc) {
        case 0x337890u: goto label_337890;
        default: break;
    }

    ctx->pc = 0x3377c0u;

    // 0x3377c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3377c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3377c4: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x3377c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x3377c8: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x3377c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x3377cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3377ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3377d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3377d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3377d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3377d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3377d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3377d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3377dc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3377dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3377e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3377e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3377e4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3377e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3377e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3377e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3377ec: 0x0  nop
    ctx->pc = 0x3377ecu;
    // NOP
    // 0x3377f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3377F0u;
    {
        const bool branch_taken_0x3377f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3377F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377F0u;
        // 0x3377f4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377f0) {
            ctx->pc = 0x337804u;
            goto label_337804;
        }
    }
    ctx->pc = 0x3377F8u;
    // 0x3377f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3377f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3377fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3377FCu;
    {
        const bool branch_taken_0x3377fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377FCu;
        // 0x337800: 0x24421720  addiu       $v0, $v0, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377fc) {
            ctx->pc = 0x33780Cu;
            goto label_33780c;
        }
    }
    ctx->pc = 0x337804u;
label_337804:
    // 0x337804: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x337804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x337808: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x337808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_33780c:
    // 0x33780c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x337810: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x337810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x337814: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x337814u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337818: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x337818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x33781c: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x33781cu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x5116C0u));
    // 0x337820: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x337820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x337824: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x337824u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337828: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x337828u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33782c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x33782cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337830: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x337830u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337834: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337838: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x337838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33783c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x33783cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337840: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x337840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337844: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x337844u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x337848: 0x4a0003bf  vwaitq
    ctx->pc = 0x337848u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33784c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x33784cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x337850: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x337850u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x337854: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x337854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x337858: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x337858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x33785c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x33785cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x337860: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x337860u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x337864: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x337864u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337868: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x337868u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x33786c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x33786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x337870: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x337870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x337874: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x337874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x337878: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x337878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x33787c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33787cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337880: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x337880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x337884: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x337884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x337888: 0xc0cd972  jal         func_3365C8
    ctx->pc = 0x337888u;
    SET_GPR_U32(ctx, 31, 0x337890u);
    ctx->pc = 0x33788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337888u;
    // 0x33788c: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x337888u, 0x337890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337890u;
label_337890:
    // 0x337890: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x337890u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x337894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x337894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337898: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x337898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33789c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x33789cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x3378a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3378a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3378a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3378A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3378A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378A4u;
        // 0x3378a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3378A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3378ACu;
    // 0x3378ac: 0x0  nop
    ctx->pc = 0x3378acu;
    // NOP
    ctx->pc = 0x3378b0u;
}
