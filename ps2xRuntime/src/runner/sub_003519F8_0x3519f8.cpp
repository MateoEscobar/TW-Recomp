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

// Function: sub_003519F8
// Address: 0x3519f8 - 0x351da0
void sub_003519F8_0x3519f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003519F8_0x3519f8");
#endif

    switch (ctx->pc) {
        case 0x351bc0u: goto label_351bc0;
        case 0x351c10u: goto label_351c10;
        case 0x351c28u: goto label_351c28;
        case 0x351c40u: goto label_351c40;
        case 0x351c94u: goto label_351c94;
        default: break;
    }

    ctx->pc = 0x3519f8u;

    // 0x3519f8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3519f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3519fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3519fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x351a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x351a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351a04: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x351a04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x351a08: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x351a08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x351a0c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x351a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x351a10: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x351a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x351a14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x351a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a18: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x351a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x351a1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x351a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a20: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x351a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x351a24: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x351a24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x351a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x351a2c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x351a2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a30: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x351a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x351a34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x351a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351a38: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x351a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x351a3c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x351a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x351a40: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x351a40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x351a44: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x351a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x351a48: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x351a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x351a4c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x351a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x351a50: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x351a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x351a54: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x351a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x351a58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x351a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x351a5c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x351a5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351a60: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x351a60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x351a64: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x351a64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351a68: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x351a68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351a6c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351a6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351a70: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x351a70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x351a74: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x351a74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351a78: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x351a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351a7c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x351a7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351a80: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351a84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x351a84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x351a88: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x351a88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351a8c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x351a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x351a90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x351a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x351a94: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x351a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x351a98: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x351a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x351a9c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x351a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x351aa0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x351aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x351aa4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x351aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x351aa8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x351aa8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x351aac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x351aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x351ab0: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x351ab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x351ab4: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x351ab4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x351ab8: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x351ab8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x351abc: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x351abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x351ac0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x351ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x351ac4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x351ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x351ac8: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x351ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x351acc: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x351accu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x351ad0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x351ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x351ad4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x351ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x351ad8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x351ad8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351adc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x351adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x351ae0: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x351ae0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x351ae4: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x351ae4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x351ae8: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x351ae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x351aec: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x351aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x351af0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x351af0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x351af4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x351af4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x351af8: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x351af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x351afc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x351afcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x351b00: 0x7a470050  lq          $a3, 0x50($s2)
    ctx->pc = 0x351b00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x351b04: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x351b04u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351b08: 0x7a450060  lq          $a1, 0x60($s2)
    ctx->pc = 0x351b08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x351b0c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x351b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351b10: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x351b10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x351b14: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351b14u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351b18: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x351b18u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351b1c: 0x96430084  lhu         $v1, 0x84($s2)
    ctx->pc = 0x351b1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x351b20: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x351b20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351b24: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x351b24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x351b28: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x351b28u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351b2c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x351b2cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351b30: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x351b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x351b34: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x351b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x351b38: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x351b38u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351b3c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x351b3cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351b40: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x351b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351b44: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x351b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x351b48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x351b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351b4c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x351b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x351b50: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351b50u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351b54: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x351b54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351b58: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x351b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x351b5c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x351b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351b60: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x351b60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x351b64: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x351b64u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351b68: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x351b68u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351b6c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x351b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x351b70: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x351b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x351b74: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x351b74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x351b78: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x351b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x351b7c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x351b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x351b80: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x351b80u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351b84: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x351b84u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351b88: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x351b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x351b8c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x351b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x351b90: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x351b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x351b94: 0x30637ff0  andi        $v1, $v1, 0x7FF0
    ctx->pc = 0x351b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32752);
    // 0x351b98: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x351b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x351b9c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x351b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x351ba0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x351ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351ba4: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x351ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    // 0x351ba8: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x351ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x351bac: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x351bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x351bb0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x351BB0u;
    {
        const bool branch_taken_0x351bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x351BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BB0u;
        // 0x351bb4: 0x7fa80050  sq          $t0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351bb0) {
            ctx->pc = 0x351BD8u;
            goto label_351bd8;
        }
    }
    ctx->pc = 0x351BB8u;
    // 0x351bb8: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x351bb8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x351bbc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x351bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_351bc0:
    // 0x351bc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x351bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x351bc4: 0x0  nop
    ctx->pc = 0x351bc4u;
    // NOP
    // 0x351bc8: 0x0  nop
    ctx->pc = 0x351bc8u;
    // NOP
    // 0x351bcc: 0x0  nop
    ctx->pc = 0x351bccu;
    // NOP
    // 0x351bd0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x351BD0u;
    {
        const bool branch_taken_0x351bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x351bd0) {
            ctx->pc = 0x351BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351BD0u;
            // 0x351bd4: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351bc0;
        }
    }
    ctx->pc = 0x351BD8u;
label_351bd8:
    // 0x351bd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x351bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x351bdc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x351bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x351be0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x351be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x351be4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x351be4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x351be8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x351be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x351bec: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x351BECu;
    {
        const bool branch_taken_0x351bec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x351BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BECu;
        // 0x351bf0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351bec) {
            ctx->pc = 0x351BF8u;
            goto label_351bf8;
        }
    }
    ctx->pc = 0x351BF4u;
    // 0x351bf4: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x351bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
label_351bf8:
    // 0x351bf8: 0x8fb30030  lw          $s3, 0x30($sp)
    ctx->pc = 0x351bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351bfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x351bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351c00: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x351c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x351c04: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x351C04u;
    {
        const bool branch_taken_0x351c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C04u;
        // 0x351c08: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c04) {
            ctx->pc = 0x351CD4u;
            goto label_351cd4;
        }
    }
    ctx->pc = 0x351C0Cu;
    // 0x351c0c: 0x8fb10034  lw          $s1, 0x34($sp)
    ctx->pc = 0x351c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_351c10:
    // 0x351c10: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x351c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x351c14: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x351c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x351c18: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x351C18u;
    {
        const bool branch_taken_0x351c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C18u;
        // 0x351c1c: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c18) {
            ctx->pc = 0x351CBCu;
            goto label_351cbc;
        }
    }
    ctx->pc = 0x351C20u;
    // 0x351c20: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x351c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x351c24: 0x0  nop
    ctx->pc = 0x351c24u;
    // NOP
label_351c28:
    // 0x351c28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351c2c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x351c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x351c30: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x351C30u;
    {
        const bool branch_taken_0x351c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C30u;
        // 0x351c34: 0x26340001  addiu       $s4, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c30) {
            ctx->pc = 0x351CA8u;
            goto label_351ca8;
        }
    }
    ctx->pc = 0x351C38u;
    // 0x351c38: 0x96430072  lhu         $v1, 0x72($s2)
    ctx->pc = 0x351c38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x351c3c: 0x0  nop
    ctx->pc = 0x351c3cu;
    // NOP
label_351c40:
    // 0x351c40: 0x96440070  lhu         $a0, 0x70($s2)
    ctx->pc = 0x351c40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x351c44: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x351c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x351c48: 0x8e450078  lw          $a1, 0x78($s2)
    ctx->pc = 0x351c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x351c4c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x351c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x351c50: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x351c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x351c54: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x351c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x351c58: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x351c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x351c5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x351c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x351c60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x351c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351c64: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x351C64u;
    {
        const bool branch_taken_0x351c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C64u;
        // 0x351c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c64) {
            ctx->pc = 0x351C94u;
            goto label_351c94;
        }
    }
    ctx->pc = 0x351C6Cu;
    // 0x351c6c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x351c6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x351c70: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x351c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x351c74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x351c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x351c78: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x351c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x351c7c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x351c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x351c80: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x351c80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351c84: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x351c84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351c88: 0x27aa0094  addiu       $t2, $sp, 0x94
    ctx->pc = 0x351c88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x351c8c: 0xc0d451a  jal         func_351468
    ctx->pc = 0x351C8Cu;
    SET_GPR_U32(ctx, 31, 0x351C94u);
    ctx->pc = 0x351C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C8Cu;
    // 0x351c90: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351468u, 0x351C8Cu, 0x351C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C94u;
label_351c94:
    // 0x351c94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x351c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x351c9c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x351c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x351ca0: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x351CA0u;
    {
        const bool branch_taken_0x351ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351ca0) {
            ctx->pc = 0x351CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351CA0u;
            // 0x351ca4: 0x96430072  lhu         $v1, 0x72($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351c40;
        }
    }
    ctx->pc = 0x351CA8u;
label_351ca8:
    // 0x351ca8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x351ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x351cac: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x351cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351cb0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x351cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x351cb4: 0x5040ffdc  beql        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x351CB4u;
    {
        const bool branch_taken_0x351cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351cb4) {
            ctx->pc = 0x351CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351CB4u;
            // 0x351cb8: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351c28;
        }
    }
    ctx->pc = 0x351CBCu;
label_351cbc:
    // 0x351cbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x351cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351cc0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x351cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351cc4: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x351cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x351cc8: 0x5040ffd1  beql        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x351CC8u;
    {
        const bool branch_taken_0x351cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351cc8) {
            ctx->pc = 0x351CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351CC8u;
            // 0x351ccc: 0x8fb10034  lw          $s1, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351c10;
        }
    }
    ctx->pc = 0x351CD0u;
    // 0x351cd0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x351cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_351cd4:
    // 0x351cd4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x351CD4u;
    {
        const bool branch_taken_0x351cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351cd4) {
            ctx->pc = 0x351CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351CD4u;
            // 0x351cd8: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351D6Cu;
            goto label_351d6c;
        }
    }
    ctx->pc = 0x351CDCu;
    // 0x351cdc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x351CDCu;
    {
        const bool branch_taken_0x351cdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x351CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CDCu;
        // 0x351ce0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351cdc) {
            ctx->pc = 0x351CF8u;
            goto label_351cf8;
        }
    }
    ctx->pc = 0x351CE4u;
    // 0x351ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x351ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x351ce8: 0x0  nop
    ctx->pc = 0x351ce8u;
    // NOP
    // 0x351cec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x351cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x351cf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x351CF0u;
    {
        const bool branch_taken_0x351cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351cf0) {
            ctx->pc = 0x351D10u;
            goto label_351d10;
        }
    }
    ctx->pc = 0x351CF8u;
label_351cf8:
    // 0x351cf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x351cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x351cfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x351cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x351d00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x351d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x351d04: 0x0  nop
    ctx->pc = 0x351d04u;
    // NOP
    // 0x351d08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x351d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x351d0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x351d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_351d10:
    // 0x351d10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x351d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x351d14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x351d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351d18: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x351d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x351d1c: 0x0  nop
    ctx->pc = 0x351d1cu;
    // NOP
    // 0x351d20: 0x0  nop
    ctx->pc = 0x351d20u;
    // NOP
    // 0x351d24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x351d24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x351d28: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x351d28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x351d2c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x351d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x351d30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x351d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351d34: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x351d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351d38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x351d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x351d3c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x351d3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x351d40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x351d40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351d44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x351d44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351d48: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351d4c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x351d4cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x351d50: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x351d50u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351d54: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x351d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x351d58: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x351d58u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x351d5c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x351d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x351d60: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x351d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x351d64: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x351d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x351d68: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x351d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_351d6c:
    // 0x351d6c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x351d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x351d70: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x351d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x351d74: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x351d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x351d78: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x351d78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x351d7c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x351d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x351d80: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x351d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x351d84: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x351d84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x351d88: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x351d88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x351d8c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x351d8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x351d90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x351d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x351d94: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x351d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x351d98: 0x3e00008  jr          $ra
    ctx->pc = 0x351D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D98u;
        // 0x351d9c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351DA0u;
}
