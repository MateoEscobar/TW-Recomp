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

// Function: sub_00337A60
// Address: 0x337a60 - 0x337bd8
void sub_00337A60_0x337a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337A60_0x337a60");
#endif

    ctx->pc = 0x337a60u;

    // 0x337a60: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x337a60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337a68: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x337a68u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x337a6c: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x337a6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x337a70: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x337a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x337a74: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x337a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337a78: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x337a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x337a7c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x337a7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x337a80: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x337a80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337a84: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x337a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337a88: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x337a88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x337a8c: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x337a8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x337a90: 0x4bcb22fe  vopmula.xyz $ACC, $vf4, $vf11
    ctx->pc = 0x337a90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x337a94: 0x4bc45b2e  vopmsub.xyz $vf12, $vf11, $vf4
    ctx->pc = 0x337a94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x337a98: 0x4bcc536a  vmul.xyz    $vf13, $vf10, $vf12
    ctx->pc = 0x337a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x337a9c: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x337a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x337aa0: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x337aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x337aa4: 0x48256800  qmfc2.ni    $a1, $vf13
    ctx->pc = 0x337aa4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x337aa8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x337aa8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337aac: 0x3c01b586  lui         $at, 0xB586
    ctx->pc = 0x337aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46470 << 16));
    // 0x337ab0: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x337ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x337ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337ab8: 0x0  nop
    ctx->pc = 0x337ab8u;
    // NOP
    // 0x337abc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x337abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337ac0: 0x0  nop
    ctx->pc = 0x337ac0u;
    // NOP
    // 0x337ac4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x337AC4u;
    {
        const bool branch_taken_0x337ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337ac4) {
            ctx->pc = 0x337AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337AC4u;
            // 0x337ac8: 0x79420000  lq          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337AF0u;
            goto label_337af0;
        }
    }
    ctx->pc = 0x337ACCu;
    // 0x337acc: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x337accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x337ad0: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x337ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x337ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337ad8: 0x0  nop
    ctx->pc = 0x337ad8u;
    // NOP
    // 0x337adc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x337adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337ae0: 0x0  nop
    ctx->pc = 0x337ae0u;
    // NOP
    // 0x337ae4: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x337AE4u;
    {
        const bool branch_taken_0x337ae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x337ae4) {
            ctx->pc = 0x337B9Cu;
            goto label_337b9c;
        }
    }
    ctx->pc = 0x337AECu;
    // 0x337aec: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x337aecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_337af0:
    // 0x337af0: 0x0  nop
    ctx->pc = 0x337af0u;
    // NOP
    // 0x337af4: 0x0  nop
    ctx->pc = 0x337af4u;
    // NOP
    // 0x337af8: 0x4a6d03bc  vdiv        $Q, $vf0w, $vf13x
    ctx->pc = 0x337af8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x337afc: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x337afcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337b00: 0x4be12bac  vsub.xyzw   $vf14, $vf5, $vf1
    ctx->pc = 0x337b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x337b04: 0x4bcc73ea  vmul.xyz    $vf15, $vf14, $vf12
    ctx->pc = 0x337b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337b08: 0x4a8f7bc0  vaddx.y     $vf15, $vf15, $vf15x
    ctx->pc = 0x337b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337b0c: 0x4a8f7bc2  vaddz.y     $vf15, $vf15, $vf15z
    ctx->pc = 0x337b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337b10: 0x4a807bdc  vmulq.y     $vf15, $vf15, $Q
    ctx->pc = 0x337b10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337b14: 0x48227800  qmfc2.ni    $v0, $vf15
    ctx->pc = 0x337b14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x337b18: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x337b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x337b1c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x337b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x337b20: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x337b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x337b24: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x337b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337b28: 0x0  nop
    ctx->pc = 0x337b28u;
    // NOP
    // 0x337b2c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x337B2Cu;
    {
        const bool branch_taken_0x337b2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x337B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B2Cu;
        // 0x337b30: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b2c) {
            ctx->pc = 0x337B9Cu;
            goto label_337b9c;
        }
    }
    ctx->pc = 0x337B34u;
    // 0x337b34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x337b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x337b38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x337b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x337b3c: 0x0  nop
    ctx->pc = 0x337b3cu;
    // NOP
    // 0x337b40: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x337b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337b44: 0x0  nop
    ctx->pc = 0x337b44u;
    // NOP
    // 0x337b48: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x337B48u;
    {
        const bool branch_taken_0x337b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x337b48) {
            ctx->pc = 0x337B9Cu;
            goto label_337b9c;
        }
    }
    ctx->pc = 0x337B50u;
    // 0x337b50: 0x4bca72fe  vopmula.xyz $ACC, $vf14, $vf10
    ctx->pc = 0x337b50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x337b54: 0x4bce542e  vopmsub.xyz $vf16, $vf10, $vf14
    ctx->pc = 0x337b54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x337b58: 0x4bd0246a  vmul.xyz    $vf17, $vf4, $vf16
    ctx->pc = 0x337b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x337b5c: 0x4a518bc0  vaddx.z     $vf15, $vf17, $vf17x
    ctx->pc = 0x337b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337b60: 0x4a517bc1  vaddy.z     $vf15, $vf15, $vf17y
    ctx->pc = 0x337b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337b64: 0x4a407bdc  vmulq.z     $vf15, $vf15, $Q
    ctx->pc = 0x337b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337b68: 0x48227800  qmfc2.ni    $v0, $vf15
    ctx->pc = 0x337b68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x337b6c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x337b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x337b70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x337b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x337b74: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x337b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x337b78: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x337b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337b7c: 0x0  nop
    ctx->pc = 0x337b7cu;
    // NOP
    // 0x337b80: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x337B80u;
    {
        const bool branch_taken_0x337b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x337B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B80u;
        // 0x337b84: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b80) {
            ctx->pc = 0x337B9Cu;
            goto label_337b9c;
        }
    }
    ctx->pc = 0x337B88u;
    // 0x337b88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x337b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x337b8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x337b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337b90: 0x0  nop
    ctx->pc = 0x337b90u;
    // NOP
    // 0x337b94: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x337B94u;
    {
        const bool branch_taken_0x337b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337b94) {
            ctx->pc = 0x337BACu;
            goto label_337bac;
        }
    }
    ctx->pc = 0x337B9Cu;
label_337b9c:
    // 0x337b9c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x337b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x337ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337ba4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x337BA4u;
    {
        const bool branch_taken_0x337ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ba4) {
            ctx->pc = 0x337BCCu;
            goto label_337bcc;
        }
    }
    ctx->pc = 0x337BACu;
label_337bac:
    // 0x337bac: 0x4bd05caa  vmul.xyz    $vf18, $vf11, $vf16
    ctx->pc = 0x337bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x337bb0: 0x4b1293c1  vaddy.x     $vf15, $vf18, $vf18y
    ctx->pc = 0x337bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337bb4: 0x4b127bc2  vaddz.x     $vf15, $vf15, $vf18z
    ctx->pc = 0x337bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337bb8: 0x4b007bdc  vmulq.x     $vf15, $vf15, $Q
    ctx->pc = 0x337bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337bbc: 0x48227800  qmfc2.ni    $v0, $vf15
    ctx->pc = 0x337bbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x337bc0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x337bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x337bc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x337bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x337bc8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x337bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_337bcc:
    // 0x337bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x337BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337BCCu;
        // 0x337bd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337BD4u;
    // 0x337bd4: 0x0  nop
    ctx->pc = 0x337bd4u;
    // NOP
    ctx->pc = 0x337bd8u;
}
