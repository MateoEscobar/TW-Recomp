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

// Function: sub_00276FF0
// Address: 0x276ff0 - 0x277248
void sub_00276FF0_0x276ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276FF0_0x276ff0");
#endif

    switch (ctx->pc) {
        case 0x277060u: goto label_277060;
        case 0x277074u: goto label_277074;
        case 0x277108u: goto label_277108;
        case 0x27711cu: goto label_27711c;
        case 0x277128u: goto label_277128;
        case 0x277130u: goto label_277130;
        case 0x277148u: goto label_277148;
        case 0x277158u: goto label_277158;
        case 0x277198u: goto label_277198;
        case 0x2771e8u: goto label_2771e8;
        case 0x277208u: goto label_277208;
        case 0x277220u: goto label_277220;
        default: break;
    }

    ctx->pc = 0x276ff0u;

    // 0x276ff0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x276ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x276ff4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x276ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x276ff8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x276ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x276ffc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x276ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x277000: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x277000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x277004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277008: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x277008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x27700c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27700cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277010: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x277010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x277014: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277018: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x277018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x27701c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27701cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277020: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x277020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x277024: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x277024u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x277028: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x277028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27702c: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x27702cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x277030: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x277030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x277034: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x277034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x277038: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x277038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27703c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x27703cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x277040: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x277040u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277048: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x277048u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27704c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277050: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x277050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x277054: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x277054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x277058: 0xc095128  jal         func_2544A0
    ctx->pc = 0x277058u;
    SET_GPR_U32(ctx, 31, 0x277060u);
    ctx->pc = 0x27705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277058u;
    // 0x27705c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x277058u, 0x277060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277060u;
label_277060:
    // 0x277060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x277060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277064: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277068: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x277068u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27706c: 0xc095106  jal         func_254418
    ctx->pc = 0x27706Cu;
    SET_GPR_U32(ctx, 31, 0x277074u);
    ctx->pc = 0x277070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27706Cu;
    // 0x277070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x27706Cu, 0x277074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277074u;
label_277074:
    // 0x277074: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x277074u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277078: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x277078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27707c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x27707cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x277080: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277080u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x277084: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x277084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x277088: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277088u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x27708c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x27708cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x277090: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x277090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x277094: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x277094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x277098: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x277098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27709c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x27709cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2770a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2770a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2770a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2770a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2770a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2770a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2770ac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2770acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2770b0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2770b0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2770b4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2770b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2770b8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2770b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2770bc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2770bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2770c0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2770c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2770c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2770c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2770c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2770c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2770cc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2770ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2770d0: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x2770d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x2770d4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2770d4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2770d8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2770d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2770dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2770dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2770e0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2770e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2770e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2770e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2770e8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x2770e8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2770ec: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2770ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2770f0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2770f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2770f4: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x2770f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x2770f8: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x2770f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x2770fc: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x2770fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x277100: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x277100u;
    SET_GPR_U32(ctx, 31, 0x277108u);
    ctx->pc = 0x277104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277100u;
    // 0x277104: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x277100u, 0x277108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277108u;
label_277108:
    // 0x277108: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x277108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27710c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27710cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x277110: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x277110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x277114: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x277114u;
    SET_GPR_U32(ctx, 31, 0x27711Cu);
    ctx->pc = 0x277118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277114u;
    // 0x277118: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x277114u, 0x27711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27711Cu;
label_27711c:
    // 0x27711c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x27711cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x277120: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x277120u;
    SET_GPR_U32(ctx, 31, 0x277128u);
    ctx->pc = 0x277124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277120u;
    // 0x277124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x277120u, 0x277128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277128u;
label_277128:
    // 0x277128: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x277128u;
    SET_GPR_U32(ctx, 31, 0x277130u);
    ctx->pc = 0x27712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277128u;
    // 0x27712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x277128u, 0x277130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277130u;
label_277130:
    // 0x277130: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x277130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x277134: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x277134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x277138: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x277138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27713c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277140: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x277140u;
    SET_GPR_U32(ctx, 31, 0x277148u);
    ctx->pc = 0x277144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277140u;
    // 0x277144: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x277140u, 0x277148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277148u;
label_277148:
    // 0x277148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27714c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27714cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x277150: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x277150u;
    SET_GPR_U32(ctx, 31, 0x277158u);
    ctx->pc = 0x277154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277150u;
    // 0x277154: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x277150u, 0x277158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277158u;
label_277158:
    // 0x277158: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x277158u;
    {
        const bool branch_taken_0x277158 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x277158) {
            ctx->pc = 0x277200u;
            goto label_277200;
        }
    }
    ctx->pc = 0x277160u;
    // 0x277160: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x277160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x277164: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x277164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x277168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27716c: 0x0  nop
    ctx->pc = 0x27716cu;
    // NOP
    // 0x277170: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x277170u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x277174: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x277174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277178: 0x0  nop
    ctx->pc = 0x277178u;
    // NOP
    // 0x27717c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x27717Cu;
    {
        const bool branch_taken_0x27717c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27717c) {
            ctx->pc = 0x2771B0u;
            goto label_2771b0;
        }
    }
    ctx->pc = 0x277184u;
    // 0x277184: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x277184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x277188: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x277188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27718c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27718cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277190: 0x0  nop
    ctx->pc = 0x277190u;
    // NOP
    // 0x277194: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x277194u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_277198:
    // 0x277198: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x277198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27719c: 0x0  nop
    ctx->pc = 0x27719cu;
    // NOP
    // 0x2771a0: 0x0  nop
    ctx->pc = 0x2771a0u;
    // NOP
    // 0x2771a4: 0x0  nop
    ctx->pc = 0x2771a4u;
    // NOP
    // 0x2771a8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x2771A8u;
    {
        const bool branch_taken_0x2771a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2771a8) {
            ctx->pc = 0x2771ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2771A8u;
            // 0x2771ac: 0x4601a501  sub.s       $f20, $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277198;
        }
    }
    ctx->pc = 0x2771B0u;
label_2771b0:
    // 0x2771b0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2771b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2771b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2771b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2771b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2771b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2771bc: 0x0  nop
    ctx->pc = 0x2771bcu;
    // NOP
    // 0x2771c0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2771c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2771c4: 0x0  nop
    ctx->pc = 0x2771c4u;
    // NOP
    // 0x2771c8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2771C8u;
    {
        const bool branch_taken_0x2771c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2771c8) {
            ctx->pc = 0x277200u;
            goto label_277200;
        }
    }
    ctx->pc = 0x2771D0u;
    // 0x2771d0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2771d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2771d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2771d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2771d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2771d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2771dc: 0x0  nop
    ctx->pc = 0x2771dcu;
    // NOP
    // 0x2771e0: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2771e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2771e4: 0x0  nop
    ctx->pc = 0x2771e4u;
    // NOP
label_2771e8:
    // 0x2771e8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2771e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2771ec: 0x0  nop
    ctx->pc = 0x2771ecu;
    // NOP
    // 0x2771f0: 0x0  nop
    ctx->pc = 0x2771f0u;
    // NOP
    // 0x2771f4: 0x0  nop
    ctx->pc = 0x2771f4u;
    // NOP
    // 0x2771f8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x2771F8u;
    {
        const bool branch_taken_0x2771f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2771f8) {
            ctx->pc = 0x2771FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2771F8u;
            // 0x2771fc: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2771E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2771e8;
        }
    }
    ctx->pc = 0x277200u;
label_277200:
    // 0x277200: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x277200u;
    SET_GPR_U32(ctx, 31, 0x277208u);
    ctx->pc = 0x277204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277200u;
    // 0x277204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x277200u, 0x277208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277208u;
label_277208:
    // 0x277208: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x277208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x27720c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27720cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x277210: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x277210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x277214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x277214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277218: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x277218u;
    SET_GPR_U32(ctx, 31, 0x277220u);
    ctx->pc = 0x27721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277218u;
    // 0x27721c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x277218u, 0x277220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277220u;
label_277220:
    // 0x277220: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x277220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x277224: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x277224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x277228: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x277228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27722c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x27722cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x277230: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x277230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277234: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x277234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x277238: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x277238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27723c: 0x3e00008  jr          $ra
    ctx->pc = 0x27723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27723Cu;
        // 0x277240: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277244u;
    // 0x277244: 0x0  nop
    ctx->pc = 0x277244u;
    // NOP
    ctx->pc = 0x277248u;
}
