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

// Function: sub_00337028
// Address: 0x337028 - 0x337168
void sub_00337028_0x337028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337028_0x337028");
#endif

    switch (ctx->pc) {
        case 0x33715cu: goto label_33715c;
        default: break;
    }

    ctx->pc = 0x337028u;

    // 0x337028: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x337028u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33702c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33702cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337030: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x337030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x337034: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337038: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x337038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33703c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33703cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337040: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337040u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337044: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x337044u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337048: 0x3c0137d1  lui         $at, 0x37D1
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14289 << 16));
    // 0x33704c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x33704cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x337050: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x337050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337054: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337058: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x337058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33705c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33705cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337060: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x337060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337064: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x337064u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337068: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x337068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33706c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33706cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337070: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x337070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x337074: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x337074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337078: 0x0  nop
    ctx->pc = 0x337078u;
    // NOP
    // 0x33707c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33707Cu;
    {
        const bool branch_taken_0x33707c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x337080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33707Cu;
        // 0x337080: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33707c) {
            ctx->pc = 0x33708Cu;
            goto label_33708c;
        }
    }
    ctx->pc = 0x337084u;
    // 0x337084: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x337084u;
    {
        const bool branch_taken_0x337084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337084u;
        // 0x337088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337084) {
            ctx->pc = 0x33715Cu;
            goto label_33715c;
        }
    }
    ctx->pc = 0x33708Cu;
label_33708c:
    // 0x33708c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33708cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337090: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x337090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337094: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x337094u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337098: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x337098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33709c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x33709cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3370a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3370a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3370a4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3370a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3370a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3370a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3370ac: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x3370acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x3370b0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x3370b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x3370b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3370b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3370b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3370b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3370bc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3370bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3370c0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3370c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3370c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3370c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3370c8: 0x0  nop
    ctx->pc = 0x3370c8u;
    // NOP
    // 0x3370cc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x3370CCu;
    {
        const bool branch_taken_0x3370cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3370cc) {
            ctx->pc = 0x3370F4u;
            goto label_3370f4;
        }
    }
    ctx->pc = 0x3370D4u;
    // 0x3370d4: 0x3c01bf7a  lui         $at, 0xBF7A
    ctx->pc = 0x3370d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49018 << 16));
    // 0x3370d8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x3370d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x3370dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3370dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3370e0: 0x0  nop
    ctx->pc = 0x3370e0u;
    // NOP
    // 0x3370e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3370e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3370e8: 0x0  nop
    ctx->pc = 0x3370e8u;
    // NOP
    // 0x3370ec: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x3370ECu;
    {
        const bool branch_taken_0x3370ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3370F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370ECu;
        // 0x3370f0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370ec) {
            ctx->pc = 0x337144u;
            goto label_337144;
        }
    }
    ctx->pc = 0x3370F4u;
label_3370f4:
    // 0x3370f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3370f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3370f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3370f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3370fc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3370fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x337100: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x337100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337104: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x337104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x337108: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x337108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x33710c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x33710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x337110: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x337110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x337114: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x337114u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337118: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33711c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x33711cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337120: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x337120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337124: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x337124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337128: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x337128u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33712c: 0x4a0003bf  vwaitq
    ctx->pc = 0x33712cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x337130: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x337130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x337134: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x337134u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x337138: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x337138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x33713c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33713Cu;
    {
        const bool branch_taken_0x33713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33713Cu;
        // 0x337140: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33713c) {
            ctx->pc = 0x337154u;
            goto label_337154;
        }
    }
    ctx->pc = 0x337144u;
label_337144:
    // 0x337144: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x337144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x337148: 0x24631700  addiu       $v1, $v1, 0x1700
    ctx->pc = 0x337148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5888));
    // 0x33714c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33714cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337150: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x337150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_337154:
    // 0x337154: 0xc0cdc5a  jal         func_337168
    ctx->pc = 0x337154u;
    SET_GPR_U32(ctx, 31, 0x33715Cu);
    ctx->pc = 0x337168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337168u, 0x337154u, 0x33715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33715Cu;
label_33715c:
    // 0x33715c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337160: 0x3e00008  jr          $ra
    ctx->pc = 0x337160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337160u;
        // 0x337164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337168u;
}
