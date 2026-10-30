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

// Function: sub_002726D8
// Address: 0x2726d8 - 0x272878
void sub_002726D8_0x2726d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002726D8_0x2726d8");
#endif

    switch (ctx->pc) {
        case 0x2726fcu: goto label_2726fc;
        case 0x272710u: goto label_272710;
        case 0x272810u: goto label_272810;
        default: break;
    }

    ctx->pc = 0x2726d8u;

    // 0x2726d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2726d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2726dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2726dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2726e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2726e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2726e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2726e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2726e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2726ec: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2726ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2726f0: 0x8e1100d4  lw          $s1, 0xD4($s0)
    ctx->pc = 0x2726f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2726f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2726F4u;
    SET_GPR_U32(ctx, 31, 0x2726FCu);
    ctx->pc = 0x2726F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2726F4u;
    // 0x2726f8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2726F4u, 0x2726FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726FCu;
label_2726fc:
    // 0x2726fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x272700: 0x50600059  beql        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x272700u;
    {
        const bool branch_taken_0x272700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272700) {
            ctx->pc = 0x272704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272700u;
            // 0x272704: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272868u;
            goto label_272868;
        }
    }
    ctx->pc = 0x272708u;
    // 0x272708: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x272708u;
    SET_GPR_U32(ctx, 31, 0x272710u);
    ctx->pc = 0x27270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272708u;
    // 0x27270c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x272708u, 0x272710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272710u;
label_272710:
    // 0x272710: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x272710u;
    {
        const bool branch_taken_0x272710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272710u;
        // 0x272714: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272710) {
            ctx->pc = 0x272864u;
            goto label_272864;
        }
    }
    ctx->pc = 0x272718u;
    // 0x272718: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x272718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x27271c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27271cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x272720: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272724: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x272724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x272728: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x272728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x27272c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x27272cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272730: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x272730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x272734: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x272734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272738: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x272738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27273c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x27273cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x272740: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x272740u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x272744: 0x4a0003bf  vwaitq
    ctx->pc = 0x272744u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x272748: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x272748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27274c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x27274cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272750: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x272750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x272754: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x272754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x272758: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x272758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27275c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x27275cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x272760: 0x4a0003bf  vwaitq
    ctx->pc = 0x272760u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x272764: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x272764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x272768: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x272768u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x27276c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x27276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x272770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272774: 0x0  nop
    ctx->pc = 0x272774u;
    // NOP
    // 0x272778: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x272778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27277c: 0x0  nop
    ctx->pc = 0x27277cu;
    // NOP
    // 0x272780: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x272780u;
    {
        const bool branch_taken_0x272780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x272784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272780u;
        // 0x272784: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272780) {
            ctx->pc = 0x272864u;
            goto label_272864;
        }
    }
    ctx->pc = 0x272788u;
    // 0x272788: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x272788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x27278c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x27278cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x272790: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x272790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x272794: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x272794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x272798: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x272798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27279c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x27279cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2727a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2727a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2727a4: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x2727a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2727a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2727a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2727ac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2727acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2727b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2727b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2727b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2727b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2727b8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2727b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2727bc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2727bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2727c0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2727c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2727c4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2727c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2727c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2727c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2727cc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2727ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2727d0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2727d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2727d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2727d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2727d8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2727d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2727dc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2727dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2727e0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2727e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2727e4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2727e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2727e8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2727e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2727ec: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2727ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2727f0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2727f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2727f4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2727f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2727f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2727f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2727fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2727fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x272800: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x272800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272804: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x272804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x272808: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x272808u;
    SET_GPR_U32(ctx, 31, 0x272810u);
    ctx->pc = 0x27280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272808u;
    // 0x27280c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x272808u, 0x272810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272810u;
label_272810:
    // 0x272810: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x272810u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x272814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272818: 0x0  nop
    ctx->pc = 0x272818u;
    // NOP
    // 0x27281c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27281cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272820: 0x0  nop
    ctx->pc = 0x272820u;
    // NOP
    // 0x272824: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x272824u;
    {
        const bool branch_taken_0x272824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272824) {
            ctx->pc = 0x272840u;
            goto label_272840;
        }
    }
    ctx->pc = 0x27282Cu;
    // 0x27282c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x27282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x272830: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x272830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x272834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272838: 0x0  nop
    ctx->pc = 0x272838u;
    // NOP
    // 0x27283c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27283cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_272840:
    // 0x272840: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x272840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x272844: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x272844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x272848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27284c: 0x0  nop
    ctx->pc = 0x27284cu;
    // NOP
    // 0x272850: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x272850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272854: 0x0  nop
    ctx->pc = 0x272854u;
    // NOP
    // 0x272858: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x272858u;
    {
        const bool branch_taken_0x272858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272858) {
            ctx->pc = 0x27285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272858u;
            // 0x27285c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272860u;
label_272860:
    // 0x272860: 0xe62100dc  swc1        $f1, 0xDC($s1)
    ctx->pc = 0x272860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
label_272864:
    // 0x272864: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x272864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_272868:
    // 0x272868: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x272868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27286c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27286cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272870: 0x3e00008  jr          $ra
    ctx->pc = 0x272870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272870u;
        // 0x272874: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272878u;
}
