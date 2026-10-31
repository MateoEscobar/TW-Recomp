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

// Function: sub_00337BD8
// Address: 0x337bd8 - 0x337ed8
void sub_00337BD8_0x337bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337BD8_0x337bd8");
#endif

    ctx->pc = 0x337bd8u;

    // 0x337bd8: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x337bd8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337bdc: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x337bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x337be0: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x337be0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x337be4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x337be4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337be8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x337be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x337bec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337becu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337bf0: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x337bf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x337bf4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337bf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337bf8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337bf8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337bfc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x337bfcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337c00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337c00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337c04: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x337c04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x337c08: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337c08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337c0c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337c0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337c10: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x337c10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337c14: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x337c14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x337c18: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x337c18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x337c1c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337c1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337c20: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337c20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337c24: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x337c24u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337c28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337c2c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x337c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x337c30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x337c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x337c34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c38: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x337c38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c3c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x337c3cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337c40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337c44: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x337c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x337c48: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x337c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x337c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x337c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c54: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x337c54u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337c58: 0x44845000  mtc1        $a0, $f10
    ctx->pc = 0x337c58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x337c5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337c60: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x337c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c64: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x337c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c68: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x337c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c6c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x337c6cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337c70: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x337c70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x337c74: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x337c74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x337c78: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337c7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x337c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337c80: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x337c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x337c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x337c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c8c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x337c8cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337c90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337c94: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x337c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x337c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337c9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x337c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337ca0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x337ca0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337ca4: 0x44863800  mtc1        $a2, $f7
    ctx->pc = 0x337ca4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x337ca8: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x337ca8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x337cac: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x337cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x337cb0: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x337cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x337cb4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x337cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x337cb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x337cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x337cbc: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x337cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x337cc0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x337cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x337cc4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x337cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x337cc8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x337cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x337ccc: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x337cccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x337cd0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x337cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x337cd4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x337cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x337cd8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x337cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x337cdc: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x337cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337ce0: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x337ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x337ce4: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x337ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x337ce8: 0x46002206  mov.s       $f8, $f4
    ctx->pc = 0x337ce8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[4]);
    // 0x337cec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x337CECu;
    {
        const bool branch_taken_0x337cec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x337CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CECu;
        // 0x337cf0: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337cec) {
            ctx->pc = 0x337D0Cu;
            goto label_337d0c;
        }
    }
    ctx->pc = 0x337CF4u;
    // 0x337cf4: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x337cf4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x337cf8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x337cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x337cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x337cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x337d00: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x337d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x337d04: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x337D04u;
    {
        const bool branch_taken_0x337d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D04u;
        // 0x337d08: 0x46003106  mov.s       $f4, $f6 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d04) {
            ctx->pc = 0x337D5Cu;
            goto label_337d5c;
        }
    }
    ctx->pc = 0x337D0Cu;
label_337d0c:
    // 0x337d0c: 0x46053882  mul.s       $f2, $f7, $f5
    ctx->pc = 0x337d0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x337d10: 0x460a3042  mul.s       $f1, $f6, $f10
    ctx->pc = 0x337d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x337d14: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x337d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x337d18: 0x460548c2  mul.s       $f3, $f9, $f5
    ctx->pc = 0x337d18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x337d1c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x337d1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x337d20: 0x460a3802  mul.s       $f0, $f7, $f10
    ctx->pc = 0x337d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x337d24: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x337d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337d28: 0x0  nop
    ctx->pc = 0x337d28u;
    // NOP
    // 0x337d2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x337D2Cu;
    {
        const bool branch_taken_0x337d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x337D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D2Cu;
        // 0x337d30: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d2c) {
            ctx->pc = 0x337D40u;
            goto label_337d40;
        }
    }
    ctx->pc = 0x337D34u;
    // 0x337d34: 0x46005886  mov.s       $f2, $f11
    ctx->pc = 0x337d34u;
    ctx->f[2] = FPU_MOV_S(ctx->f[11]);
    // 0x337d38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x337D38u;
    {
        const bool branch_taken_0x337d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D38u;
        // 0x337d3c: 0x460028c6  mov.s       $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d38) {
            ctx->pc = 0x337D58u;
            goto label_337d58;
        }
    }
    ctx->pc = 0x337D40u;
label_337d40:
    // 0x337d40: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x337d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337d44: 0x0  nop
    ctx->pc = 0x337d44u;
    // NOP
    // 0x337d48: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x337D48u;
    {
        const bool branch_taken_0x337d48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337d48) {
            ctx->pc = 0x337D5Cu;
            goto label_337d5c;
        }
    }
    ctx->pc = 0x337D50u;
    // 0x337d50: 0x460728c0  add.s       $f3, $f5, $f7
    ctx->pc = 0x337d50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x337d54: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x337d54u;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
label_337d58:
    // 0x337d58: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x337d58u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
label_337d5c:
    // 0x337d5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x337d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337d60: 0x0  nop
    ctx->pc = 0x337d60u;
    // NOP
    // 0x337d64: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x337d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337d68: 0x0  nop
    ctx->pc = 0x337d68u;
    // NOP
    // 0x337d6c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x337D6Cu;
    {
        const bool branch_taken_0x337d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337d6c) {
            ctx->pc = 0x337D90u;
            goto label_337d90;
        }
    }
    ctx->pc = 0x337D74u;
    // 0x337d74: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x337d74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
    // 0x337d78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x337d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337d7c: 0x0  nop
    ctx->pc = 0x337d7cu;
    // NOP
    // 0x337d80: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x337D80u;
    {
        const bool branch_taken_0x337d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x337D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D80u;
        // 0x337d84: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d80) {
            ctx->pc = 0x337DB4u;
            goto label_337db4;
        }
    }
    ctx->pc = 0x337D88u;
    // 0x337d88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x337D88u;
    {
        const bool branch_taken_0x337d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337d88) {
            ctx->pc = 0x337DC0u;
            goto label_337dc0;
        }
    }
    ctx->pc = 0x337D90u;
label_337d90:
    // 0x337d90: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x337d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337d94: 0x0  nop
    ctx->pc = 0x337d94u;
    // NOP
    // 0x337d98: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x337D98u;
    {
        const bool branch_taken_0x337d98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337d98) {
            ctx->pc = 0x337DD8u;
            goto label_337dd8;
        }
    }
    ctx->pc = 0x337DA0u;
    // 0x337da0: 0x460a3801  sub.s       $f0, $f7, $f10
    ctx->pc = 0x337da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[10]);
    // 0x337da4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x337da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337da8: 0x0  nop
    ctx->pc = 0x337da8u;
    // NOP
    // 0x337dac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x337DACu;
    {
        const bool branch_taken_0x337dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x337DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DACu;
        // 0x337db0: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337dac) {
            ctx->pc = 0x337DC0u;
            goto label_337dc0;
        }
    }
    ctx->pc = 0x337DB4u;
label_337db4:
    // 0x337db4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x337db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x337db8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x337DB8u;
    {
        const bool branch_taken_0x337db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337db8) {
            ctx->pc = 0x337DD8u;
            goto label_337dd8;
        }
    }
    ctx->pc = 0x337DC0u;
label_337dc0:
    // 0x337dc0: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x337dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337dc4: 0x0  nop
    ctx->pc = 0x337dc4u;
    // NOP
    // 0x337dc8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x337DC8u;
    {
        const bool branch_taken_0x337dc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x337DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DC8u;
        // 0x337dcc: 0x46004086  mov.s       $f2, $f8 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337dc8) {
            ctx->pc = 0x337DD8u;
            goto label_337dd8;
        }
    }
    ctx->pc = 0x337DD0u;
    // 0x337dd0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x337dd0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x337dd4: 0x46004a06  mov.s       $f8, $f9
    ctx->pc = 0x337dd4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[9]);
label_337dd8:
    // 0x337dd8: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x337dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x337ddc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x337ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x337de0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x337de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337de4: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x337de4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x337de8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x337de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x337dec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x337decu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337df0: 0x0  nop
    ctx->pc = 0x337df0u;
    // NOP
    // 0x337df4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x337DF4u;
    {
        const bool branch_taken_0x337df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337df4) {
            ctx->pc = 0x337E08u;
            goto label_337e08;
        }
    }
    ctx->pc = 0x337DFCu;
    // 0x337dfc: 0x0  nop
    ctx->pc = 0x337dfcu;
    // NOP
    // 0x337e00: 0x0  nop
    ctx->pc = 0x337e00u;
    // NOP
    // 0x337e04: 0x46081143  div.s       $f5, $f2, $f8
    ctx->pc = 0x337e04u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[2], ctx->f[8]); }
label_337e08:
    // 0x337e08: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x337e08u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x337e0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x337e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x337e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x337e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337e14: 0x0  nop
    ctx->pc = 0x337e14u;
    // NOP
    // 0x337e18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x337E18u;
    {
        const bool branch_taken_0x337e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337e18) {
            ctx->pc = 0x337E2Cu;
            goto label_337e2c;
        }
    }
    ctx->pc = 0x337E20u;
    // 0x337e20: 0x0  nop
    ctx->pc = 0x337e20u;
    // NOP
    // 0x337e24: 0x0  nop
    ctx->pc = 0x337e24u;
    // NOP
    // 0x337e28: 0x46041883  div.s       $f2, $f3, $f4
    ctx->pc = 0x337e28u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
label_337e2c:
    // 0x337e2c: 0x44052800  mfc1        $a1, $f5
    ctx->pc = 0x337e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x337e30: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x337e30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337e34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337e38: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x337e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x337e3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x337e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x337e40: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x337e40u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x337e44: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x337e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x337e48: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x337e48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337e4c: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x337e4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337e50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337e54: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x337e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337e58: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337e5c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337e5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337e60: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x337e60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337e64: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x337e64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x337e68: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x337e68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x337e6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x337e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x337e70: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x337e70u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x337e74: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x337e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x337e78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x337e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337e7c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x337e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x337e80: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x337e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337e84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337e84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337e88: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x337e88u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337e8c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x337e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x337e90: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x337e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x337e94: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x337e94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337e98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x337e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337e9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x337e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x337ea0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x337ea0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x337ea4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x337ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x337ea8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x337ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x337eac: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x337eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x337eb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x337eb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337eb4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x337eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x337eb8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x337eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x337ebc: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x337ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x337ec0: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x337ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x337ec4: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x337ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x337ec8: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x337ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x337ecc: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x337eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x337ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x337ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ED0u;
        // 0x337ed4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337ED8u;
}
