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

// Function: sub_00338240
// Address: 0x338240 - 0x338300
void sub_00338240_0x338240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338240_0x338240");
#endif

    ctx->pc = 0x338240u;

    // 0x338240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338244: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x338244u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338248: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x338248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x33824c: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x33824cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338250: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x338250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x338254: 0x27ab0004  addiu       $t3, $sp, 0x4
    ctx->pc = 0x338254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x338258: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x338258u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x33825c: 0x27aa0008  addiu       $t2, $sp, 0x8
    ctx->pc = 0x33825cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x338260: 0xe7ad0010  swc1        $f13, 0x10($sp)
    ctx->pc = 0x338260u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x338264: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x338264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x338268: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x338268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33826c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x33826cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x338270: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x338270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338274: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x338274u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x338278: 0x48a63000  qmtc2.ni    $a2, $vf6
    ctx->pc = 0x338278u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x33827c: 0x9d630000  lwu         $v1, 0x0($t3)
    ctx->pc = 0x33827cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x338280: 0x4a062bbc  vdiv        $Q, $vf5x, $vf6x
    ctx->pc = 0x338280u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x338284: 0x9d440000  lwu         $a0, 0x0($t2)
    ctx->pc = 0x338284u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x338288: 0x70033e88  pextlb      $a3, $zero, $v1
    ctx->pc = 0x338288u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x33828c: 0x70073ec9  prevh       $a3, $a3
    ctx->pc = 0x33828cu;
    { __m128i mask = _mm_setr_epi8(14,15, 12,13, 10,11, 8,9, 6,7, 4,5, 2,3, 0,1); SET_GPR_VEC(ctx, 7, PS2_SHUFFLE_EPI8(GPR_VEC(ctx, 7), mask)); }
    // 0x338290: 0x70073d88  pextlh      $a3, $zero, $a3
    ctx->pc = 0x338290u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x338294: 0x70044688  pextlb      $t0, $zero, $a0
    ctx->pc = 0x338294u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x338298: 0x700846c9  prevh       $t0, $t0
    ctx->pc = 0x338298u;
    { __m128i mask = _mm_setr_epi8(14,15, 12,13, 10,11, 8,9, 6,7, 4,5, 2,3, 0,1); SET_GPR_VEC(ctx, 8, PS2_SHUFFLE_EPI8(GPR_VEC(ctx, 8), mask)); }
    // 0x33829c: 0x70084588  pextlh      $t0, $zero, $t0
    ctx->pc = 0x33829cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x3382a0: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x3382a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3382a4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x3382a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3382a8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3382a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3382ac: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x3382acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3382b0: 0x4be2113c  vitof0.xyzw $vf2, $vf2
    ctx->pc = 0x3382b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3382b4: 0x4be1093c  vitof0.xyzw $vf1, $vf1
    ctx->pc = 0x3382b4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3382b8: 0x4b05212c  vsub.x      $vf4, $vf4, $vf5
    ctx->pc = 0x3382b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3382bc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3382BCu;
    {
        const bool branch_taken_0x3382bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3382bc) {
            ctx->pc = 0x3382D4u;
            goto label_3382d4;
        }
    }
    ctx->pc = 0x3382C4u;
    // 0x3382c4: 0x4be511bc  vmulax.xyzw $ACC, $vf2, $vf5x
    ctx->pc = 0x3382c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3382c8: 0x4be40848  vmaddx.xyzw $vf1, $vf1, $vf4x
    ctx->pc = 0x3382c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3382cc: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x3382ccu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3382d0: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x3382d0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_3382d4:
    // 0x3382d4: 0x70073dc8  ppach       $a3, $zero, $a3
    ctx->pc = 0x3382d4u;
    SET_GPR_VEC(ctx, 7, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x3382d8: 0x70073ec8  ppacb       $a3, $zero, $a3
    ctx->pc = 0x3382d8u;
    SET_GPR_VEC(ctx, 7, PS2_PPACB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x3382dc: 0x48242000  qmfc2.ni    $a0, $vf4
    ctx->pc = 0x3382dcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3382e0: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x3382e0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3382e4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x3382e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x3382e8: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x3382e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x3382ec: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x3382ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x3382f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3382f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3382f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3382F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3382F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382F4u;
        // 0x3382f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3382F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3382FCu;
    // 0x3382fc: 0x0  nop
    ctx->pc = 0x3382fcu;
    // NOP
    ctx->pc = 0x338300u;
}
