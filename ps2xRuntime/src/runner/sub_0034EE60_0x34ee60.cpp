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

// Function: sub_0034EE60
// Address: 0x34ee60 - 0x34f6c0
void sub_0034EE60_0x34ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EE60_0x34ee60");
#endif

    switch (ctx->pc) {
        case 0x34ef58u: goto label_34ef58;
        case 0x34f034u: goto label_34f034;
        case 0x34f09cu: goto label_34f09c;
        case 0x34f0e4u: goto label_34f0e4;
        case 0x34f14cu: goto label_34f14c;
        case 0x34f194u: goto label_34f194;
        case 0x34f1dcu: goto label_34f1dc;
        case 0x34f3c0u: goto label_34f3c0;
        case 0x34f49cu: goto label_34f49c;
        case 0x34f504u: goto label_34f504;
        case 0x34f54cu: goto label_34f54c;
        case 0x34f5b4u: goto label_34f5b4;
        case 0x34f5fcu: goto label_34f5fc;
        case 0x34f644u: goto label_34f644;
        default: break;
    }

    ctx->pc = 0x34ee60u;

    // 0x34ee60: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x34ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x34ee64: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x34ee64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee68: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x34ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x34ee6c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x34ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x34ee70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34ee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee74: 0x79ab0070  lq          $t3, 0x70($t5)
    ctx->pc = 0x34ee74u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 13), 112)));
    // 0x34ee78: 0x78ac0000  lq          $t4, 0x0($a1)
    ctx->pc = 0x34ee78u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34ee7c: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x34ee7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34ee80: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x34ee80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34ee84: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ee84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ee88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ee88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ee8c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ee8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ee90: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34ee90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ee94: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x34ee94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34ee98: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x34ee98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x34ee9c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ee9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34eea0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34eea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34eea4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34eea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34eea8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34eea8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34eeac: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x34eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34eeb0: 0xc5a30080  lwc1        $f3, 0x80($t5)
    ctx->pc = 0x34eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34eeb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34eeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34eeb8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x34eeb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34eebc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x34eebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x34eec0: 0x79a40030  lq          $a0, 0x30($t5)
    ctx->pc = 0x34eec0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x34eec4: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x34eec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x34eec8: 0x79a30040  lq          $v1, 0x40($t5)
    ctx->pc = 0x34eec8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 64)));
    // 0x34eecc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34eeccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34eed0: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x34eed0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34eed4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34eed4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34eed8: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34eed8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34eedc: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34eedcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34eee0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34eee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34eee4: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x34eee4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34eee8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34eee8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34eeec: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34eeecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34eef0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34eef0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34eef4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x34eef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x34eef8: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x34eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x34eefc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34eefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34ef00: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x34ef04: 0x79a20050  lq          $v0, 0x50($t5)
    ctx->pc = 0x34ef04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 80)));
    // 0x34ef08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34ef08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ef0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ef0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ef10: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x34ef10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34ef14: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34ef14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34ef18: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34ef18u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34ef1c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34ef1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34ef20: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34ef24: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34ef28: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x34ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x34ef2c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x34ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x34ef30: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34ef30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34ef34: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x34ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x34ef38: 0x450000ba  bc1f        . + 4 + (0xBA << 2)
    ctx->pc = 0x34EF38u;
    {
        const bool branch_taken_0x34ef38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF38u;
        // 0x34ef3c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef38) {
            ctx->pc = 0x34F224u;
            goto label_34f224;
        }
    }
    ctx->pc = 0x34EF40u;
    // 0x34ef40: 0x700c54a9  por         $t2, $zero, $t4
    ctx->pc = 0x34ef40u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 12)));
    // 0x34ef44: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x34ef44u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef48: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x34ef48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34ef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ef50: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x34ef50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_34ef58:
    // 0x34ef58: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x34ef58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34ef5c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ef5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ef60: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x34ef60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x34ef64: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ef64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ef68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ef68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ef6c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ef6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ef70: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x34ef70u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ef74: 0x79630000  lq          $v1, 0x0($t3)
    ctx->pc = 0x34ef74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34ef78: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x34ef78u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ef7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34ef7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ef80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34ef80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ef84: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ef84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ef88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ef88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ef8c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ef8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ef90: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x34ef90u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ef94: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x34ef94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ef98: 0x0  nop
    ctx->pc = 0x34ef98u;
    // NOP
    // 0x34ef9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34ef9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34efa0: 0x0  nop
    ctx->pc = 0x34efa0u;
    // NOP
    // 0x34efa4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34EFA4u;
    {
        const bool branch_taken_0x34efa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFA4u;
        // 0x34efa8: 0x1861004  sllv        $v0, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 12) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efa4) {
            ctx->pc = 0x34EFB4u;
            goto label_34efb4;
        }
    }
    ctx->pc = 0x34EFACu;
    // 0x34efac: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x34efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x34efb0: 0x304e00ff  andi        $t6, $v0, 0xFF
    ctx->pc = 0x34efb0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34efb4:
    // 0x34efb4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x34efb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x34efb8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x34efb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x34efbc: 0x29820003  slti        $v0, $t4, 0x3
    ctx->pc = 0x34efbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34efc0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x34EFC0u;
    {
        const bool branch_taken_0x34efc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFC0u;
        // 0x34efc4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efc0) {
            ctx->pc = 0x34EF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ef58;
        }
    }
    ctx->pc = 0x34EFC8u;
    // 0x34efc8: 0x25c3ffff  addiu       $v1, $t6, -0x1
    ctx->pc = 0x34efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x34efcc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x34efccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x34efd0: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x34EFD0u;
    {
        const bool branch_taken_0x34efd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFD0u;
        // 0x34efd4: 0xad0e0000  sw          $t6, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efd0) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34EFD8u;
    // 0x34efd8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x34efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x34efdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34efe0: 0x24427450  addiu       $v0, $v0, 0x7450
    ctx->pc = 0x34efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29776));
    // 0x34efe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34efe8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x34efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34efec: 0x800008  jr          $a0
    ctx->pc = 0x34EFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34EFF4u: goto label_34eff4;
            case 0x34F05Cu: goto label_34f05c;
            case 0x34F0C4u: goto label_34f0c4;
            case 0x34F10Cu: goto label_34f10c;
            case 0x34F174u: goto label_34f174;
            case 0x34F1BCu: goto label_34f1bc;
            case 0x34F204u: goto label_34f204;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EFECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34EFF4u;
label_34eff4:
    // 0x34eff4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x34eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x34eff8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x34eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34effc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34effcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34f000: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x34f000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f004: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x34f004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x34f008: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x34f008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f00c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x34f00cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f014: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34f014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f018: 0xc52c0010  lwc1        $f12, 0x10($t1)
    ctx->pc = 0x34f018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f01c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f020: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x34f020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x34f024: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x34f024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34f028: 0x24a80050  addiu       $t0, $a1, 0x50
    ctx->pc = 0x34f028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x34f02c: 0xc0d3974  jal         func_34E5D0
    ctx->pc = 0x34F02Cu;
    SET_GPR_U32(ctx, 31, 0x34F034u);
    ctx->pc = 0x34F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F02Cu;
    // 0x34f030: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E5D0u, 0x34F02Cu, 0x34F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F034u;
label_34f034:
    // 0x34f034: 0x1040019d  beqz        $v0, . + 4 + (0x19D << 2)
    ctx->pc = 0x34F034u;
    {
        const bool branch_taken_0x34f034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F034u;
        // 0x34f038: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f034) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F03Cu;
    // 0x34f03c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f040: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x34f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f044: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f050: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f054: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x34F054u;
    {
        const bool branch_taken_0x34f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F054u;
        // 0x34f058: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f054) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F05Cu;
label_34f05c:
    // 0x34f05c: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x34f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x34f060: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x34f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34f064: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34f064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34f068: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x34f068u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f06c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x34f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x34f070: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x34f070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f074: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x34f074u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f07c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34f07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f080: 0xc52c0010  lwc1        $f12, 0x10($t1)
    ctx->pc = 0x34f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f088: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x34f088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x34f08c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x34f08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f090: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x34f090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x34f094: 0xc0d3974  jal         func_34E5D0
    ctx->pc = 0x34F094u;
    SET_GPR_U32(ctx, 31, 0x34F09Cu);
    ctx->pc = 0x34F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F094u;
    // 0x34f098: 0x27ab00c8  addiu       $t3, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E5D0u, 0x34F094u, 0x34F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F09Cu;
label_34f09c:
    // 0x34f09c: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x34F09Cu;
    {
        const bool branch_taken_0x34f09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F09Cu;
        // 0x34f0a0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f09c) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F0A4u;
    // 0x34f0a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f0a8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x34f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f0ac: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f0b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f0bc: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x34F0BCu;
    {
        const bool branch_taken_0x34f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0BCu;
        // 0x34f0c0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0bc) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F0C4u;
label_34f0c4:
    // 0x34f0c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34f0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f0c8: 0x25a40020  addiu       $a0, $t5, 0x20
    ctx->pc = 0x34f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x34f0cc: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f0d0: 0x25a50050  addiu       $a1, $t5, 0x50
    ctx->pc = 0x34f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x34f0d4: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x34f0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34f0d8: 0x27a900d4  addiu       $t1, $sp, 0xD4
    ctx->pc = 0x34f0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x34f0dc: 0xc0d38ee  jal         func_34E3B8
    ctx->pc = 0x34F0DCu;
    SET_GPR_U32(ctx, 31, 0x34F0E4u);
    ctx->pc = 0x34F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F0DCu;
    // 0x34f0e0: 0x27aa0040  addiu       $t2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3B8u, 0x34F0DCu, 0x34F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F0E4u;
label_34f0e4:
    // 0x34f0e4: 0x10400171  beqz        $v0, . + 4 + (0x171 << 2)
    ctx->pc = 0x34F0E4u;
    {
        const bool branch_taken_0x34f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0E4u;
        // 0x34f0e8: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0e4) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F0ECu;
    // 0x34f0ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f0f0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x34f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f0f4: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f0f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f100: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f104: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x34F104u;
    {
        const bool branch_taken_0x34f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F104u;
        // 0x34f108: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f104) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F10Cu;
label_34f10c:
    // 0x34f10c: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x34f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x34f110: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x34f110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34f114: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34f114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34f118: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x34f118u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f11c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x34f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x34f120: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x34f120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f124: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x34f124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f128: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f12c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34f12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f130: 0xc52c0010  lwc1        $f12, 0x10($t1)
    ctx->pc = 0x34f130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34f134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f138: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x34f138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x34f13c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x34f13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34f140: 0x24a80040  addiu       $t0, $a1, 0x40
    ctx->pc = 0x34f140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x34f144: 0xc0d3974  jal         func_34E5D0
    ctx->pc = 0x34F144u;
    SET_GPR_U32(ctx, 31, 0x34F14Cu);
    ctx->pc = 0x34F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F144u;
    // 0x34f148: 0x27ab00d8  addiu       $t3, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E5D0u, 0x34F144u, 0x34F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F14Cu;
label_34f14c:
    // 0x34f14c: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x34F14Cu;
    {
        const bool branch_taken_0x34f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F14Cu;
        // 0x34f150: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f14c) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F154u;
    // 0x34f154: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f158: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x34f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f15c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f168: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f16c: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x34F16Cu;
    {
        const bool branch_taken_0x34f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F16Cu;
        // 0x34f170: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f16c) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F174u;
label_34f174:
    // 0x34f174: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f178: 0x25a40010  addiu       $a0, $t5, 0x10
    ctx->pc = 0x34f178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x34f17c: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f180: 0x25a50040  addiu       $a1, $t5, 0x40
    ctx->pc = 0x34f180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x34f184: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x34f184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34f188: 0x27a900e4  addiu       $t1, $sp, 0xE4
    ctx->pc = 0x34f188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x34f18c: 0xc0d38ee  jal         func_34E3B8
    ctx->pc = 0x34F18Cu;
    SET_GPR_U32(ctx, 31, 0x34F194u);
    ctx->pc = 0x34F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F18Cu;
    // 0x34f190: 0x27aa0040  addiu       $t2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3B8u, 0x34F18Cu, 0x34F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F194u;
label_34f194:
    // 0x34f194: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x34F194u;
    {
        const bool branch_taken_0x34f194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F194u;
        // 0x34f198: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f194) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F19Cu;
    // 0x34f19c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f1a0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x34f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f1a4: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f1a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f1b0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f1b4: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x34F1B4u;
    {
        const bool branch_taken_0x34f1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1B4u;
        // 0x34f1b8: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f1b4) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F1BCu;
label_34f1bc:
    // 0x34f1bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34f1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f1c0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x34f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f1c4: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f1c8: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x34f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x34f1cc: 0x27a800e8  addiu       $t0, $sp, 0xE8
    ctx->pc = 0x34f1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x34f1d0: 0x27a900ec  addiu       $t1, $sp, 0xEC
    ctx->pc = 0x34f1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x34f1d4: 0xc0d38ee  jal         func_34E3B8
    ctx->pc = 0x34F1D4u;
    SET_GPR_U32(ctx, 31, 0x34F1DCu);
    ctx->pc = 0x34F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F1D4u;
    // 0x34f1d8: 0x27aa0040  addiu       $t2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3B8u, 0x34F1D4u, 0x34F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1DCu;
label_34f1dc:
    // 0x34f1dc: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x34F1DCu;
    {
        const bool branch_taken_0x34f1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1DCu;
        // 0x34f1e0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f1dc) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F1E4u;
    // 0x34f1e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f1e8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x34f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f1ec: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f1f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f1f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f1fc: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x34F1FCu;
    {
        const bool branch_taken_0x34f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1FCu;
        // 0x34f200: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f1fc) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F204u;
label_34f204:
    // 0x34f204: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f208: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x34f208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x34f20c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f218: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f21c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x34F21Cu;
    {
        const bool branch_taken_0x34f21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F21Cu;
        // 0x34f220: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f21c) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F224u;
label_34f224:
    // 0x34f224: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x34f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f228: 0x0  nop
    ctx->pc = 0x34f228u;
    // NOP
    // 0x34f22c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x34F22Cu;
    {
        const bool branch_taken_0x34f22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F22Cu;
        // 0x34f230: 0x78e20000  lq          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f22c) {
            ctx->pc = 0x34F28Cu;
            goto label_34f28c;
        }
    }
    ctx->pc = 0x34F234u;
    // 0x34f234: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f238: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x34f238u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34f23c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34f23cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f240: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34f240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f244: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34f244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f248: 0x482e1800  qmfc2.ni    $t6, $vf3
    ctx->pc = 0x34f248u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34f24c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34f24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f250: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x34f250u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f254: 0x0  nop
    ctx->pc = 0x34f254u;
    // NOP
    // 0x34f258: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f25c: 0x0  nop
    ctx->pc = 0x34f25cu;
    // NOP
    // 0x34f260: 0x45010113  bc1t        . + 4 + (0x113 << 2)
    ctx->pc = 0x34F260u;
    {
        const bool branch_taken_0x34f260 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F260u;
        // 0x34f264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f260) {
            ctx->pc = 0x34F6B0u;
            goto label_34f6b0;
        }
    }
    ctx->pc = 0x34F268u;
    // 0x34f268: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x34f268u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x34f26c: 0x7fab0040  sq          $t3, 0x40($sp)
    ctx->pc = 0x34f26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 11));
    // 0x34f270: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34f270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34f274: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x34f274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34f278: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34f278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f27c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f27cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f280: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34f280u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f284: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34F284u;
    {
        const bool branch_taken_0x34f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f284) {
            ctx->pc = 0x34F2D8u;
            goto label_34f2d8;
        }
    }
    ctx->pc = 0x34F28Cu;
label_34f28c:
    // 0x34f28c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f28cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f290: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x34f290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34f294: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34f294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f298: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34f298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f29c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34f29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f2a0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34f2a0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34f2a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34f2a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f2a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34f2a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f2ac: 0x0  nop
    ctx->pc = 0x34f2acu;
    // NOP
    // 0x34f2b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34f2b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f2b4: 0x0  nop
    ctx->pc = 0x34f2b4u;
    // NOP
    // 0x34f2b8: 0x450100fd  bc1t        . + 4 + (0xFD << 2)
    ctx->pc = 0x34F2B8u;
    {
        const bool branch_taken_0x34f2b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2B8u;
        // 0x34f2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2b8) {
            ctx->pc = 0x34F6B0u;
            goto label_34f6b0;
        }
    }
    ctx->pc = 0x34F2C0u;
    // 0x34f2c0: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x34f2c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x34f2c4: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x34f2c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34f2c8: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x34f2c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34f2cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f2d0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34f2d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f2d4: 0x7fab0040  sq          $t3, 0x40($sp)
    ctx->pc = 0x34f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 11));
label_34f2d8:
    // 0x34f2d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f2d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f2dc: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x34f2dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x34f2e0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34f2e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f2e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34f2e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34f2e8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34f2e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34f2ec: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x34f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x34f2f0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34f2f4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34f2f8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34f2fc: 0x79a20070  lq          $v0, 0x70($t5)
    ctx->pc = 0x34f2fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 112)));
    // 0x34f300: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x34f300u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34f304: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f308: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34f308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34f30c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34f30cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f310: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34f310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f314: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34f314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f318: 0x482e1800  qmfc2.ni    $t6, $vf3
    ctx->pc = 0x34f318u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34f31c: 0xc5a00080  lwc1        $f0, 0x80($t5)
    ctx->pc = 0x34f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f320: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x34f320u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f324: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x34f324u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34f328: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34f328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34f32c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f32cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f330: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34f330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f334: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34f334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f338: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34f338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f33c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34f33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f340: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34f340u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34f344: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x34f344u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34f348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f34c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34f34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f350: 0x0  nop
    ctx->pc = 0x34f350u;
    // NOP
    // 0x34f354: 0x0  nop
    ctx->pc = 0x34f354u;
    // NOP
    // 0x34f358: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x34f358u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34f35c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34f35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f360: 0x0  nop
    ctx->pc = 0x34f360u;
    // NOP
    // 0x34f364: 0x450100d2  bc1t        . + 4 + (0xD2 << 2)
    ctx->pc = 0x34F364u;
    {
        const bool branch_taken_0x34f364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F364u;
        // 0x34f368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f364) {
            ctx->pc = 0x34F6B0u;
            goto label_34f6b0;
        }
    }
    ctx->pc = 0x34F36Cu;
    // 0x34f36c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x34f36cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x34f370: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x34f370u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f374: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34f374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f378: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x34f378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x34f37c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f380: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34f380u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f384: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x34f384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f388: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34f388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34f38c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34f38cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f390: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34f390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f394: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34f394u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34f398: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34f398u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34f39c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34f39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x34f3a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x34f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x34f3a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34f3a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f3a8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x34f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x34f3ac: 0x700334a9  por         $a2, $zero, $v1
    ctx->pc = 0x34f3acu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x34f3b0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x34f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x34f3b4: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x34f3b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f3b8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34f3bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_34f3c0:
    // 0x34f3c0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x34f3c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34f3c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f3c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f3c8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34f3c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34f3cc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34f3ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f3d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34f3d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f3d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34f3d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f3d8: 0x482e1800  qmfc2.ni    $t6, $vf3
    ctx->pc = 0x34f3d8u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34f3dc: 0x79630000  lq          $v1, 0x0($t3)
    ctx->pc = 0x34f3dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34f3e0: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x34f3e0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f3e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34f3e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f3e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34f3e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f3ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34f3ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f3f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34f3f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f3f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34f3f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34f3f8: 0x482e1800  qmfc2.ni    $t6, $vf3
    ctx->pc = 0x34f3f8u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34f3fc: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x34f3fcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f400: 0x0  nop
    ctx->pc = 0x34f400u;
    // NOP
    // 0x34f404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f408: 0x0  nop
    ctx->pc = 0x34f408u;
    // NOP
    // 0x34f40c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34F40Cu;
    {
        const bool branch_taken_0x34f40c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F40Cu;
        // 0x34f410: 0x18a1004  sllv        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f40c) {
            ctx->pc = 0x34F41Cu;
            goto label_34f41c;
        }
    }
    ctx->pc = 0x34F414u;
    // 0x34f414: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x34f414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x34f418: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x34f418u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34f41c:
    // 0x34f41c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x34f41cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x34f420: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x34f420u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x34f424: 0x29820003  slti        $v0, $t4, 0x3
    ctx->pc = 0x34f424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34f428: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x34F428u;
    {
        const bool branch_taken_0x34f428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F428u;
        // 0x34f42c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f428) {
            ctx->pc = 0x34F3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f3c0;
        }
    }
    ctx->pc = 0x34F430u;
    // 0x34f430: 0x2523ffff  addiu       $v1, $t1, -0x1
    ctx->pc = 0x34f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x34f434: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x34f434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x34f438: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x34F438u;
    {
        const bool branch_taken_0x34f438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F438u;
        // 0x34f43c: 0xad090000  sw          $t1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f438) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F440u;
    // 0x34f440: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x34f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x34f444: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f448: 0x24427470  addiu       $v0, $v0, 0x7470
    ctx->pc = 0x34f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x34f44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34f450: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x34f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34f454: 0x800008  jr          $a0
    ctx->pc = 0x34F454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34F45Cu: goto label_34f45c;
            case 0x34F4C4u: goto label_34f4c4;
            case 0x34F52Cu: goto label_34f52c;
            case 0x34F574u: goto label_34f574;
            case 0x34F5DCu: goto label_34f5dc;
            case 0x34F624u: goto label_34f624;
            case 0x34F66Cu: goto label_34f66c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F454u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34F45Cu;
label_34f45c:
    // 0x34f45c: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x34f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x34f460: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34f464: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34f464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34f468: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x34f468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f46c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x34f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x34f470: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x34f470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f474: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x34f474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f47c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34f47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f480: 0xc52c0010  lwc1        $f12, 0x10($t1)
    ctx->pc = 0x34f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f484: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f488: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x34f488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x34f48c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x34f48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34f490: 0x24a80050  addiu       $t0, $a1, 0x50
    ctx->pc = 0x34f490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x34f494: 0xc0d3974  jal         func_34E5D0
    ctx->pc = 0x34F494u;
    SET_GPR_U32(ctx, 31, 0x34F49Cu);
    ctx->pc = 0x34F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F494u;
    // 0x34f498: 0x27ab00f0  addiu       $t3, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E5D0u, 0x34F494u, 0x34F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F49Cu;
label_34f49c:
    // 0x34f49c: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x34F49Cu;
    {
        const bool branch_taken_0x34f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F49Cu;
        // 0x34f4a0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f49c) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F4A4u;
    // 0x34f4a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f4a8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x34f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f4ac: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f4b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f4b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f4bc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x34F4BCu;
    {
        const bool branch_taken_0x34f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F4BCu;
        // 0x34f4c0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f4bc) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F4C4u;
label_34f4c4:
    // 0x34f4c4: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x34f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x34f4c8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x34f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34f4cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34f4d0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x34f4d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4d4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x34f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x34f4d8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x34f4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4dc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x34f4dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f4e4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34f4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f4e8: 0xc52c0010  lwc1        $f12, 0x10($t1)
    ctx->pc = 0x34f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f4ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4f0: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x34f4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x34f4f4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x34f4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f4f8: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x34f4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x34f4fc: 0xc0d3974  jal         func_34E5D0
    ctx->pc = 0x34F4FCu;
    SET_GPR_U32(ctx, 31, 0x34F504u);
    ctx->pc = 0x34F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F4FCu;
    // 0x34f500: 0x27ab00f8  addiu       $t3, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E5D0u, 0x34F4FCu, 0x34F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F504u;
label_34f504:
    // 0x34f504: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x34F504u;
    {
        const bool branch_taken_0x34f504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F504u;
        // 0x34f508: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f504) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F50Cu;
    // 0x34f50c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f510: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x34f510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f514: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f520: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f524: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x34F524u;
    {
        const bool branch_taken_0x34f524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F524u;
        // 0x34f528: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f524) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F52Cu;
label_34f52c:
    // 0x34f52c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34f52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f530: 0x25a40020  addiu       $a0, $t5, 0x20
    ctx->pc = 0x34f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x34f534: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f538: 0x25a50050  addiu       $a1, $t5, 0x50
    ctx->pc = 0x34f538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x34f53c: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x34f53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34f540: 0x27a90104  addiu       $t1, $sp, 0x104
    ctx->pc = 0x34f540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x34f544: 0xc0d38ee  jal         func_34E3B8
    ctx->pc = 0x34F544u;
    SET_GPR_U32(ctx, 31, 0x34F54Cu);
    ctx->pc = 0x34F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F544u;
    // 0x34f548: 0x27aa0050  addiu       $t2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3B8u, 0x34F544u, 0x34F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F54Cu;
label_34f54c:
    // 0x34f54c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x34F54Cu;
    {
        const bool branch_taken_0x34f54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F54Cu;
        // 0x34f550: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f54c) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F554u;
    // 0x34f554: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f558: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x34f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f55c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f568: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f56c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x34F56Cu;
    {
        const bool branch_taken_0x34f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F56Cu;
        // 0x34f570: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f56c) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F574u;
label_34f574:
    // 0x34f574: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x34f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x34f578: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x34f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34f57c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34f580: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x34f580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f584: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x34f584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x34f588: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x34f588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f58c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x34f58cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f594: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34f594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f598: 0xc52c0010  lwc1        $f12, 0x10($t1)
    ctx->pc = 0x34f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f59c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f5a0: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x34f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x34f5a4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x34f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34f5a8: 0x24a80040  addiu       $t0, $a1, 0x40
    ctx->pc = 0x34f5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x34f5ac: 0xc0d3974  jal         func_34E5D0
    ctx->pc = 0x34F5ACu;
    SET_GPR_U32(ctx, 31, 0x34F5B4u);
    ctx->pc = 0x34F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F5ACu;
    // 0x34f5b0: 0x27ab0108  addiu       $t3, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E5D0u, 0x34F5ACu, 0x34F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5B4u;
label_34f5b4:
    // 0x34f5b4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x34F5B4u;
    {
        const bool branch_taken_0x34f5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5B4u;
        // 0x34f5b8: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5b4) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F5BCu;
    // 0x34f5bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f5c0: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x34f5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f5c4: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f5c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f5d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f5d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x34F5D4u;
    {
        const bool branch_taken_0x34f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5D4u;
        // 0x34f5d8: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5d4) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F5DCu;
label_34f5dc:
    // 0x34f5dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34f5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f5e0: 0x25a40010  addiu       $a0, $t5, 0x10
    ctx->pc = 0x34f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x34f5e4: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f5e8: 0x25a50040  addiu       $a1, $t5, 0x40
    ctx->pc = 0x34f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x34f5ec: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x34f5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x34f5f0: 0x27a90114  addiu       $t1, $sp, 0x114
    ctx->pc = 0x34f5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x34f5f4: 0xc0d38ee  jal         func_34E3B8
    ctx->pc = 0x34F5F4u;
    SET_GPR_U32(ctx, 31, 0x34F5FCu);
    ctx->pc = 0x34F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F5F4u;
    // 0x34f5f8: 0x27aa0050  addiu       $t2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3B8u, 0x34F5F4u, 0x34F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5FCu;
label_34f5fc:
    // 0x34f5fc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x34F5FCu;
    {
        const bool branch_taken_0x34f5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5FCu;
        // 0x34f600: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5fc) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F604u;
    // 0x34f604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f608: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x34f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f60c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f618: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f61c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x34F61Cu;
    {
        const bool branch_taken_0x34f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F61Cu;
        // 0x34f620: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f61c) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F624u;
label_34f624:
    // 0x34f624: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34f624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f628: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x34f628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f62c: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f630: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x34f630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x34f634: 0x27a80118  addiu       $t0, $sp, 0x118
    ctx->pc = 0x34f634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x34f638: 0x27a9011c  addiu       $t1, $sp, 0x11C
    ctx->pc = 0x34f638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x34f63c: 0xc0d38ee  jal         func_34E3B8
    ctx->pc = 0x34F63Cu;
    SET_GPR_U32(ctx, 31, 0x34F644u);
    ctx->pc = 0x34F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F63Cu;
    // 0x34f640: 0x27aa0050  addiu       $t2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3B8u, 0x34F63Cu, 0x34F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F644u;
label_34f644:
    // 0x34f644: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34F644u;
    {
        const bool branch_taken_0x34f644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F644u;
        // 0x34f648: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f644) {
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F64Cu;
    // 0x34f64c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f650: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x34f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f654: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f660: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34F664u;
    {
        const bool branch_taken_0x34f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F664u;
        // 0x34f668: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f664) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F66Cu;
label_34f66c:
    // 0x34f66c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f670: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x34f670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x34f674: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x34f674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x34f678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f67c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f680: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34f684: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x34f684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_34f688:
    // 0x34f688: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x34f688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f68c: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x34f68cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34f690: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x34f690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34f694: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x34f694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34f698: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x34f698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x34f69c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f6a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34f6a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34F6A4u;
    {
        const bool branch_taken_0x34f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6A4u;
        // 0x34f6a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6a4) {
            ctx->pc = 0x34F6B0u;
            goto label_34f6b0;
        }
    }
    ctx->pc = 0x34F6ACu;
label_34f6ac:
    // 0x34f6ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f6b0:
    // 0x34f6b0: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x34f6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34f6b4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x34f6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x34f6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x34F6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6B8u;
        // 0x34f6bc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F6C0u;
}
