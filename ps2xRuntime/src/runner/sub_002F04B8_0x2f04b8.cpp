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

// Function: sub_002F04B8
// Address: 0x2f04b8 - 0x2f0690
void sub_002F04B8_0x2f04b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F04B8_0x2f04b8");
#endif

    switch (ctx->pc) {
        case 0x2f04e8u: goto label_2f04e8;
        case 0x2f05f8u: goto label_2f05f8;
        case 0x2f062cu: goto label_2f062c;
        case 0x2f0668u: goto label_2f0668;
        default: break;
    }

    ctx->pc = 0x2f04b8u;

    // 0x2f04b8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2f04b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2f04bc: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2f04bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x2f04c0: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2f04c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x2f04c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f04c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f04c8: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2f04c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x2f04cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f04ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f04d0: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2f04d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2f04d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f04d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f04d8: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2f04d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x2f04dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2f04dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2f04e0: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x2F04E0u;
    SET_GPR_U32(ctx, 31, 0x2F04E8u);
    ctx->pc = 0x2F04E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F04E0u;
    // 0x2f04e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2F04E0u, 0x2F04E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F04E8u;
label_2f04e8:
    // 0x2f04e8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F04E8u;
    {
        const bool branch_taken_0x2f04e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f04e8) {
            ctx->pc = 0x2F04ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F04E8u;
            // 0x2f04ec: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0564u;
            goto label_2f0564;
        }
    }
    ctx->pc = 0x2F04F0u;
    // 0x2f04f0: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2f04f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2f04f4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f04f8: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2f04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2f04fc: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2f04fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2f0500: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f0500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2f0504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0508: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f0508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2f050c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f050cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2f0510: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f0510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f0514: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x2f0514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x2f0518: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2f0518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f051c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f051cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f0520: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f0520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f0524: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f0524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f0528: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f0528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f052c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f052cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f0530: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2f0530u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0534: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f0534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f0538: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f0538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f053c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f053cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f0540: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f0540u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f0544: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f0544u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f0548: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f0548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2f054c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f054cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2f0550: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f0550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2f0554: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2f0554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2f0558: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2f0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2f055c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F055Cu;
    {
        const bool branch_taken_0x2f055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F055Cu;
        // 0x2f0560: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f055c) {
            ctx->pc = 0x2F057Cu;
            goto label_2f057c;
        }
    }
    ctx->pc = 0x2F0564u;
label_2f0564:
    // 0x2f0564: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f0564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f0568: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2f0568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2f056c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f056cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f0570: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f0570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f0574: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2f0574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0578: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f0578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2f057c:
    // 0x2f057c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2f057cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0580: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x2f0580u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x2f0584: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2f0584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0588: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f058c: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x2f058cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f0590: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f0590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f0594: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f0594u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f0598: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f0598u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f059c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f059cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f05a0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f05a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f05a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f05a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f05a8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2f05a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f05ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f05acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f05b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f05b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f05b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f05b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f05b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f05b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f05bc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2f05bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f05c0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2f05c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f05c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f05c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2f05c8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2f05c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2f05cc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2f05ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f05d0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f05d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2f05d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f05d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f05d8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f05d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2f05dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2f05dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2f05e0: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2f05e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x2f05e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f05e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f05e8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x2f05e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x2f05ec: 0x8d047198  lw          $a0, 0x7198($t0)
    ctx->pc = 0x2f05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 29080)));
    // 0x2f05f0: 0xc0cfbb8  jal         func_33EEE0
    ctx->pc = 0x2F05F0u;
    SET_GPR_U32(ctx, 31, 0x2F05F8u);
    ctx->pc = 0x2F05F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F05F0u;
    // 0x2f05f4: 0x8d280000  lw          $t0, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EEE0u, 0x2F05F0u, 0x2F05F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F05F8u;
label_2f05f8:
    // 0x2f05f8: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x2f05f8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f05fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2f05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2f0600: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2f0600u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f0604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0608: 0x8ca447c4  lw          $a0, 0x47C4($a1)
    ctx->pc = 0x2f0608u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2f060c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2f060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2f0610: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x2f0610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
    // 0x2f0614: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2f0614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2f0618: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2f0618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x2f061c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f061cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0620: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2f0620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2f0624: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2F0624u;
    SET_GPR_U32(ctx, 31, 0x2F062Cu);
    ctx->pc = 0x2F0628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0624u;
    // 0x2f0628: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2F0624u, 0x2F062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F062Cu;
label_2f062c:
    // 0x2f062c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F062Cu;
    {
        const bool branch_taken_0x2f062c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F062Cu;
        // 0x2f0630: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f062c) {
            ctx->pc = 0x2F0654u;
            goto label_2f0654;
        }
    }
    ctx->pc = 0x2F0634u;
    // 0x2f0634: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0634u;
    {
        const bool branch_taken_0x2f0634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0634u;
        // 0x2f0638: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0634) {
            ctx->pc = 0x2F0654u;
            goto label_2f0654;
        }
    }
    ctx->pc = 0x2F063Cu;
    // 0x2f063c: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2f063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0640: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f0640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f0644: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f0644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0648: 0x0  nop
    ctx->pc = 0x2f0648u;
    // NOP
    // 0x2f064c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F064Cu;
    {
        const bool branch_taken_0x2f064c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f064c) {
            ctx->pc = 0x2F0650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F064Cu;
            // 0x2f0650: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0654u;
            goto label_2f0654;
        }
    }
    ctx->pc = 0x2F0654u;
label_2f0654:
    // 0x2f0654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0658: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0658u;
    {
        const bool branch_taken_0x2f0658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f0658) {
            ctx->pc = 0x2F065Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0658u;
            // 0x2f065c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0674u;
            goto label_2f0674;
        }
    }
    ctx->pc = 0x2F0660u;
    // 0x2f0660: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2F0660u;
    SET_GPR_U32(ctx, 31, 0x2F0668u);
    ctx->pc = 0x2F0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0660u;
    // 0x2f0664: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2F0660u, 0x2F0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0668u;
label_2f0668:
    // 0x2f0668: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2f0668u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2f066c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f066cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0670: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2f0670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f0674:
    // 0x2f0674: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2f0674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2f0678: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2f0678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2f067c: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2f067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2f0680: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2f0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f0684: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0684u;
        // 0x2f0688: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F068Cu;
    // 0x2f068c: 0x0  nop
    ctx->pc = 0x2f068cu;
    // NOP
    ctx->pc = 0x2f0690u;
}
