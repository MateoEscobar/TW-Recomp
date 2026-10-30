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

// Function: sub_00335B08
// Address: 0x335b08 - 0x335c08
void sub_00335B08_0x335b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335B08_0x335b08");
#endif

    ctx->pc = 0x335b08u;

    // 0x335b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335b0c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x335b0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x335b10: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x335b10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
    // 0x335b14: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x335b14u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335b18: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x335b18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x335b1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x335b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x335b20: 0x4bc22958  vmulx.xyz   $vf5, $vf5, $vf2x
    ctx->pc = 0x335b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x335b24: 0x48a92000  qmtc2.ni    $t1, $vf4
    ctx->pc = 0x335b24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x335b28: 0x4b090183  vaddw.x     $vf6, $vf0, $vf9w
    ctx->pc = 0x335b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x335b2c: 0x4b0901c6  vsubz.x     $vf7, $vf0, $vf9z
    ctx->pc = 0x335b2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x335b30: 0x4b090201  vaddy.x     $vf8, $vf0, $vf9y
    ctx->pc = 0x335b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x335b34: 0x4bc42958  vmulx.xyz   $vf5, $vf5, $vf4x
    ctx->pc = 0x335b34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x335b38: 0x4a890182  vaddz.y     $vf6, $vf0, $vf9z
    ctx->pc = 0x335b38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x335b3c: 0x4a8901c3  vaddw.y     $vf7, $vf0, $vf9w
    ctx->pc = 0x335b3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x335b40: 0x4a890204  vsubx.y     $vf8, $vf0, $vf9x
    ctx->pc = 0x335b40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x335b44: 0x4a20012c  vsub.w      $vf4, $vf0, $vf0
    ctx->pc = 0x335b44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x335b48: 0x4a490185  vsuby.z     $vf6, $vf0, $vf9y
    ctx->pc = 0x335b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x335b4c: 0x4a4901c0  vaddx.z     $vf7, $vf0, $vf9x
    ctx->pc = 0x335b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x335b50: 0x4a490203  vaddw.z     $vf8, $vf0, $vf9w
    ctx->pc = 0x335b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x335b54: 0x4a292184  vsubx.w     $vf6, $vf4, $vf9x
    ctx->pc = 0x335b54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x335b58: 0x4a2921c5  vsuby.w     $vf7, $vf4, $vf9y
    ctx->pc = 0x335b58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x335b5c: 0x4a292206  vsubz.w     $vf8, $vf4, $vf9z
    ctx->pc = 0x335b5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x335b60: 0x4be0483c  vaddax.xyzw $ACC, $vf9, $vf0x
    ctx->pc = 0x335b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335b64: 0x4be530bc  vmaddax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x335b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335b68: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x335b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335b6c: 0x4be5410a  vmaddz.xyzw $vf4, $vf8, $vf5z
    ctx->pc = 0x335b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x335b70: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x335b70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x335b74: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x335b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335b78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x335b78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x335b7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x335b7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x335b80: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x335b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335b84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x335b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335b88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x335b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335b8c: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x335b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335b90: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x335b90u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x335b94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x335b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335b98: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x335b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x335b9c: 0x0  nop
    ctx->pc = 0x335b9cu;
    // NOP
    // 0x335ba0: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x335ba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335ba4: 0x0  nop
    ctx->pc = 0x335ba4u;
    // NOP
    // 0x335ba8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x335BA8u;
    {
        const bool branch_taken_0x335ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x335ba8) {
            ctx->pc = 0x335BCCu;
            goto label_335bcc;
        }
    }
    ctx->pc = 0x335BB0u;
    // 0x335bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x335bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x335bb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335bb8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x335bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x335bbc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x335bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x335bc0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x335bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x335bc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x335BC4u;
    {
        const bool branch_taken_0x335bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BC4u;
        // 0x335bc8: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bc4) {
            ctx->pc = 0x335BFCu;
            goto label_335bfc;
        }
    }
    ctx->pc = 0x335BCCu;
label_335bcc:
    // 0x335bcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x335bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x335bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335bd4: 0x0  nop
    ctx->pc = 0x335bd4u;
    // NOP
    // 0x335bd8: 0x0  nop
    ctx->pc = 0x335bd8u;
    // NOP
    // 0x335bdc: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x335bdcu;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
    // 0x335be0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x335be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x335be4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x335be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x335be8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x335be8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x335bec: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x335becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x335bf0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x335bf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x335bf4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x335bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x335bf8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x335bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_335bfc:
    // 0x335bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x335BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BFCu;
        // 0x335c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335C04u;
    // 0x335c04: 0x0  nop
    ctx->pc = 0x335c04u;
    // NOP
    ctx->pc = 0x335c08u;
}
