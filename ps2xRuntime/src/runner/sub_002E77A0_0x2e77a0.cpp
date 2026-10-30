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

// Function: sub_002E77A0
// Address: 0x2e77a0 - 0x2e7970
void sub_002E77A0_0x2e77a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E77A0_0x2e77a0");
#endif

    switch (ctx->pc) {
        case 0x2e77d0u: goto label_2e77d0;
        case 0x2e78dcu: goto label_2e78dc;
        case 0x2e7910u: goto label_2e7910;
        case 0x2e794cu: goto label_2e794c;
        default: break;
    }

    ctx->pc = 0x2e77a0u;

    // 0x2e77a0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2e77a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2e77a4: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2e77a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x2e77a8: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2e77a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x2e77ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e77acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77b0: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2e77b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x2e77b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e77b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77b8: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2e77b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2e77bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e77bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77c0: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2e77c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x2e77c4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e77c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e77c8: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x2E77C8u;
    SET_GPR_U32(ctx, 31, 0x2E77D0u);
    ctx->pc = 0x2E77CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77C8u;
    // 0x2e77cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2E77C8u, 0x2E77D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77D0u;
label_2e77d0:
    // 0x2e77d0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E77D0u;
    {
        const bool branch_taken_0x2e77d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e77d0) {
            ctx->pc = 0x2E77D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E77D0u;
            // 0x2e77d4: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E784Cu;
            goto label_2e784c;
        }
    }
    ctx->pc = 0x2E77D8u;
    // 0x2e77d8: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2e77d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2e77dc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e77e0: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2e77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2e77e4: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2e77e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2e77e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e77e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e77ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e77ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e77f0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2e77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2e77f4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e77f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e77f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2e77f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e77fc: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x2e77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x2e7800: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2e7800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7804: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e7808: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e7808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e780c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e780cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e7810: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e7810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e7814: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2e7814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e7818: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e7818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e781c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e781cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e7820: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e7820u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e7824: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e7824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e7828: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e7828u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e782c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2e782cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e7830: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e7830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e7834: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2e7838: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2e7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2e783c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2e783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2e7840: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2e7840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2e7844: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7844u;
    {
        const bool branch_taken_0x2e7844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7844u;
        // 0x2e7848: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7844) {
            ctx->pc = 0x2E7864u;
            goto label_2e7864;
        }
    }
    ctx->pc = 0x2E784Cu;
label_2e784c:
    // 0x2e784c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e784cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e7850: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2e7850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2e7854: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e7854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e7858: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e7858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e785c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2e785cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7860: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2e7860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2e7864:
    // 0x2e7864: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2e7864u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7868: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x2e7868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x2e786c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e786cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7870: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2e7870u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7874: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e7874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e7878: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e7878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e787c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e787cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e7880: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e7880u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e7884: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e7884u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e7888: 0x8ca47198  lw          $a0, 0x7198($a1)
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29080)));
    // 0x2e788c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e788cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e7890: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2e7890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e7894: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e7894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e7898: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e7898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e789c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e789cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e78a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e78a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e78a4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2e78a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e78a8: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x2e78a8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e78ac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e78b0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2e78b4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e78b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e78b8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2e78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2e78bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e78bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e78c0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2e78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2e78c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2e78c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2e78c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e78c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78cc: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x2e78ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x2e78d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e78d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e78d4: 0xc0cfbb8  jal         func_33EEE0
    ctx->pc = 0x2E78D4u;
    SET_GPR_U32(ctx, 31, 0x2E78DCu);
    ctx->pc = 0x2E78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78D4u;
    // 0x2e78d8: 0x7fa90010  sq          $t1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EEE0u, 0x2E78D4u, 0x2E78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78DCu;
label_2e78dc:
    // 0x2e78dc: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x2e78dcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e78e0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2e78e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2e78e4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2e78e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e78e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e78e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78ec: 0x8ca447c4  lw          $a0, 0x47C4($a1)
    ctx->pc = 0x2e78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2e78f0: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2e78f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e78f4: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x2e78f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
    // 0x2e78f8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e78f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e78fc: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2e78fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x2e7900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7904: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2e7904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2e7908: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2E7908u;
    SET_GPR_U32(ctx, 31, 0x2E7910u);
    ctx->pc = 0x2E790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7908u;
    // 0x2e790c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2E7908u, 0x2E7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7910u;
label_2e7910:
    // 0x2e7910: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7910u;
    {
        const bool branch_taken_0x2e7910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7910u;
        // 0x2e7914: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7910) {
            ctx->pc = 0x2E7938u;
            goto label_2e7938;
        }
    }
    ctx->pc = 0x2E7918u;
    // 0x2e7918: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7918u;
    {
        const bool branch_taken_0x2e7918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7918u;
        // 0x2e791c: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7918) {
            ctx->pc = 0x2E7938u;
            goto label_2e7938;
        }
    }
    ctx->pc = 0x2E7920u;
    // 0x2e7920: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2e7920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7924: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e7924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e7928: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e7928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e792c: 0x0  nop
    ctx->pc = 0x2e792cu;
    // NOP
    // 0x2e7930: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7930u;
    {
        const bool branch_taken_0x2e7930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7930) {
            ctx->pc = 0x2E7934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7930u;
            // 0x2e7934: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7938u;
            goto label_2e7938;
        }
    }
    ctx->pc = 0x2E7938u;
label_2e7938:
    // 0x2e7938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e793c: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E793Cu;
    {
        const bool branch_taken_0x2e793c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e793c) {
            ctx->pc = 0x2E7940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E793Cu;
            // 0x2e7940: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7958u;
            goto label_2e7958;
        }
    }
    ctx->pc = 0x2E7944u;
    // 0x2e7944: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E7944u;
    SET_GPR_U32(ctx, 31, 0x2E794Cu);
    ctx->pc = 0x2E7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7944u;
    // 0x2e7948: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E7944u, 0x2E794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E794Cu;
label_2e794c:
    // 0x2e794c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2e794cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2e7950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e7950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7954: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2e7954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2e7958:
    // 0x2e7958: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2e7958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2e795c: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2e795cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2e7960: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2e7960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2e7964: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2e7964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e7968: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7968u;
        // 0x2e796c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7970u;
}
