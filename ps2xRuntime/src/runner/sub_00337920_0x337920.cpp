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

// Function: sub_00337920
// Address: 0x337920 - 0x337a60
void sub_00337920_0x337920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337920_0x337920");
#endif

    ctx->pc = 0x337920u;

    // 0x337920: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x337920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337924: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337928: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x337928u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33792c: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x33792cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x337930: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x337930u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x337934: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x337934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337938: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x337938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x33793c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33793cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x337940: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x337940u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337944: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x337944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337948: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x337948u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x33794c: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x33794cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x337950: 0x4bcb22fe  vopmula.xyz $ACC, $vf4, $vf11
    ctx->pc = 0x337950u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x337954: 0x4bc45b2e  vopmsub.xyz $vf12, $vf11, $vf4
    ctx->pc = 0x337954u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x337958: 0x4bcc536a  vmul.xyz    $vf13, $vf10, $vf12
    ctx->pc = 0x337958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x33795c: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x33795cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x337960: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x337960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x337964: 0x48256800  qmfc2.ni    $a1, $vf13
    ctx->pc = 0x337964u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x337968: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x337968u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33796c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x33796cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x337970: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x337970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x337974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337978: 0x0  nop
    ctx->pc = 0x337978u;
    // NOP
    // 0x33797c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x33797cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337980: 0x0  nop
    ctx->pc = 0x337980u;
    // NOP
    // 0x337984: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x337984u;
    {
        const bool branch_taken_0x337984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x337984) {
            ctx->pc = 0x337A1Cu;
            goto label_337a1c;
        }
    }
    ctx->pc = 0x33798Cu;
    // 0x33798c: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x33798cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x337990: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x337990u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x337994: 0x4be12bac  vsub.xyzw   $vf14, $vf5, $vf1
    ctx->pc = 0x337994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x337998: 0x4bcc73ea  vmul.xyz    $vf15, $vf14, $vf12
    ctx->pc = 0x337998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x33799c: 0x4a8f7bc0  vaddx.y     $vf15, $vf15, $vf15x
    ctx->pc = 0x33799cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3379a0: 0x4a8f7bc2  vaddz.y     $vf15, $vf15, $vf15z
    ctx->pc = 0x3379a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3379a4: 0x48227800  qmfc2.ni    $v0, $vf15
    ctx->pc = 0x3379a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x3379a8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3379a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3379ac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3379acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3379b0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3379b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3379b4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3379b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3379b8: 0x0  nop
    ctx->pc = 0x3379b8u;
    // NOP
    // 0x3379bc: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x3379BCu;
    {
        const bool branch_taken_0x3379bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3379C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379BCu;
        // 0x3379c0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3379bc) {
            ctx->pc = 0x337A1Cu;
            goto label_337a1c;
        }
    }
    ctx->pc = 0x3379C4u;
    // 0x3379c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3379c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3379c8: 0x0  nop
    ctx->pc = 0x3379c8u;
    // NOP
    // 0x3379cc: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x3379CCu;
    {
        const bool branch_taken_0x3379cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3379cc) {
            ctx->pc = 0x337A1Cu;
            goto label_337a1c;
        }
    }
    ctx->pc = 0x3379D4u;
    // 0x3379d4: 0x4bca72fe  vopmula.xyz $ACC, $vf14, $vf10
    ctx->pc = 0x3379d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3379d8: 0x4bce542e  vopmsub.xyz $vf16, $vf10, $vf14
    ctx->pc = 0x3379d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3379dc: 0x4bd0246a  vmul.xyz    $vf17, $vf4, $vf16
    ctx->pc = 0x3379dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3379e0: 0x4a518bc0  vaddx.z     $vf15, $vf17, $vf17x
    ctx->pc = 0x3379e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3379e4: 0x4a517bc1  vaddy.z     $vf15, $vf15, $vf17y
    ctx->pc = 0x3379e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3379e8: 0x48227800  qmfc2.ni    $v0, $vf15
    ctx->pc = 0x3379e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x3379ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3379ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3379f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3379f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3379f4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3379f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3379f8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3379f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3379fc: 0x0  nop
    ctx->pc = 0x3379fcu;
    // NOP
    // 0x337a00: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x337A00u;
    {
        const bool branch_taken_0x337a00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x337A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A00u;
        // 0x337a04: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a00) {
            ctx->pc = 0x337A1Cu;
            goto label_337a1c;
        }
    }
    ctx->pc = 0x337A08u;
    // 0x337a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x337a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x337a0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x337a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337a10: 0x0  nop
    ctx->pc = 0x337a10u;
    // NOP
    // 0x337a14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x337A14u;
    {
        const bool branch_taken_0x337a14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x337a14) {
            ctx->pc = 0x337A2Cu;
            goto label_337a2c;
        }
    }
    ctx->pc = 0x337A1Cu;
label_337a1c:
    // 0x337a1c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x337a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337a24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x337A24u;
    {
        const bool branch_taken_0x337a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337a24) {
            ctx->pc = 0x337A58u;
            goto label_337a58;
        }
    }
    ctx->pc = 0x337A2Cu;
label_337a2c:
    // 0x337a2c: 0x0  nop
    ctx->pc = 0x337a2cu;
    // NOP
    // 0x337a30: 0x0  nop
    ctx->pc = 0x337a30u;
    // NOP
    // 0x337a34: 0x4a6d03bc  vdiv        $Q, $vf0w, $vf13x
    ctx->pc = 0x337a34u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x337a38: 0x4bd05caa  vmul.xyz    $vf18, $vf11, $vf16
    ctx->pc = 0x337a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x337a3c: 0x4b1293c1  vaddy.x     $vf15, $vf18, $vf18y
    ctx->pc = 0x337a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337a40: 0x4b127bc2  vaddz.x     $vf15, $vf15, $vf18z
    ctx->pc = 0x337a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337a44: 0x4be07bdc  vmulq.xyzw  $vf15, $vf15, $Q
    ctx->pc = 0x337a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x337a48: 0x48227800  qmfc2.ni    $v0, $vf15
    ctx->pc = 0x337a48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x337a4c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x337a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x337a50: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x337a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x337a54: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x337a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_337a58:
    // 0x337a58: 0x3e00008  jr          $ra
    ctx->pc = 0x337A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A58u;
        // 0x337a5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337A60u;
}
