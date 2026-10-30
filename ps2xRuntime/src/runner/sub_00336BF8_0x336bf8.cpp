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

// Function: sub_00336BF8
// Address: 0x336bf8 - 0x336c98
void sub_00336BF8_0x336bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336BF8_0x336bf8");
#endif

    ctx->pc = 0x336bf8u;

    // 0x336bf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x336bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336bfc: 0x44076000  mfc1        $a3, $f12
    ctx->pc = 0x336bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x336c00: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x336c00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336c04: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x336c04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336c08: 0x48a73000  qmtc2.ni    $a3, $vf6
    ctx->pc = 0x336c08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x336c0c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x336c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c10: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x336c10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x336c14: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x336c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c18: 0x4b06216c  vsub.x      $vf5, $vf4, $vf6
    ctx->pc = 0x336c18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x336c1c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x336c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c20: 0x4b04012c  vsub.x      $vf4, $vf0, $vf4
    ctx->pc = 0x336c20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x336c24: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x336c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c28: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x336c28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x336c2c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x336c2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x336c30: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x336c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x336c34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x336c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336c38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x336c38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336c3c: 0x0  nop
    ctx->pc = 0x336c3cu;
    // NOP
    // 0x336c40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x336c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336c44: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x336c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x336c48: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x336C48u;
    {
        const bool branch_taken_0x336c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x336c48) {
            ctx->pc = 0x336C90u;
            goto label_336c90;
        }
    }
    ctx->pc = 0x336C50u;
    // 0x336c50: 0x0  nop
    ctx->pc = 0x336c50u;
    // NOP
    // 0x336c54: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x336c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336c58: 0x0  nop
    ctx->pc = 0x336c58u;
    // NOP
    // 0x336c5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x336C5Cu;
    {
        const bool branch_taken_0x336c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x336c5c) {
            ctx->pc = 0x336C68u;
            goto label_336c68;
        }
    }
    ctx->pc = 0x336C64u;
    // 0x336c64: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x336c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_336c68:
    // 0x336c68: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x336c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x336c6c: 0x4be61088  vmaddx.xyzw $vf2, $vf2, $vf6x
    ctx->pc = 0x336c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336c70: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x336c70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c74: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x336c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c78: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x336c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c7c: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x336c7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336c80: 0x4a6303be  vrsqrt      $Q, $vf0w, $vf3x
    ctx->pc = 0x336c80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x336c84: 0x4a0003bf  vwaitq
    ctx->pc = 0x336c84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x336c88: 0x4be0109c  vmulq.xyzw  $vf2, $vf2, $Q
    ctx->pc = 0x336c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x336c8c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x336c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_336c90:
    // 0x336c90: 0x3e00008  jr          $ra
    ctx->pc = 0x336C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336C98u;
}
