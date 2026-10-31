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

// Function: sub_0038B1F8
// Address: 0x38b1f8 - 0x38b520
void sub_0038B1F8_0x38b1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B1F8_0x38b1f8");
#endif

    switch (ctx->pc) {
        case 0x38b448u: goto label_38b448;
        case 0x38b454u: goto label_38b454;
        case 0x38b464u: goto label_38b464;
        case 0x38b4d8u: goto label_38b4d8;
        case 0x38b504u: goto label_38b504;
        default: break;
    }

    ctx->pc = 0x38b1f8u;

    // 0x38b1f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38b1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x38b1fc: 0x240805f0  addiu       $t0, $zero, 0x5F0
    ctx->pc = 0x38b1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38b200: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x38b200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x38b204: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x38b204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x38b208: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x38b208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x38b20c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b210: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x38b210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x38b214: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x38b214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x38b218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38b21c: 0x2484e4a0  addiu       $a0, $a0, -0x1B60
    ctx->pc = 0x38b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960288));
    // 0x38b220: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x38b220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x38b224: 0x24c61740  addiu       $a2, $a2, 0x1740
    ctx->pc = 0x38b224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
    // 0x38b228: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38b228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38b22c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x38b22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38b230: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x38b230u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x38b234: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38b234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38b238: 0x252916c0  addiu       $t1, $t1, 0x16C0
    ctx->pc = 0x38b238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5824));
    // 0x38b23c: 0x7a070010  lq          $a3, 0x10($s0)
    ctx->pc = 0x38b23cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38b240: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x38b240u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x38b244: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38b244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x38b248: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b24c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x38b24cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x38b250: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38b250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b254: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38b254u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38b258: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x38b258u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38b25c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x38b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x38b260: 0x260a1240  addiu       $t2, $s0, 0x1240
    ctx->pc = 0x38b260u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4672));
    // 0x38b264: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x38b264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x38b268: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x38b268u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x38b26c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38b26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38b270: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38b270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x38b274: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x38b274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b278: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x38b278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b27c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x38b27cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x38b280: 0x8e0311e0  lw          $v1, 0x11E0($s0)
    ctx->pc = 0x38b280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4576)));
    // 0x38b284: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b288: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38b288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b28c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38b28cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b290: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x38b290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b294: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38b294u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x38b298: 0x4a0003bf  vwaitq
    ctx->pc = 0x38b298u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x38b29c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x38b29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38b2a0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38b2a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38b2a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38b2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x38b2a8: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x38b2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x38b2ac: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x38b2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38b2b0: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x38b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x38b2b4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x38b2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b2b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b2bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x38b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b2c0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x38b2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x38b2c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x38b2c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x38b2c8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x38b2cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x38b2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x38b2d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38b2d4: 0xc4640024  lwc1        $f4, 0x24($v1)
    ctx->pc = 0x38b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38b2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b2dc: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x38b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b2e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x38b2e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x38b2e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x38b2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x38b2e8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x38b2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x38b2ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x38b2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x38b2f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x38b2f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b2f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b2f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b2f8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x38b2f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b2fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38b2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b300: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x38b300u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x38b304: 0x4a0003bf  vwaitq
    ctx->pc = 0x38b304u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x38b308: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x38b308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b30c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38b30cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x38b310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38b310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b314: 0x0  nop
    ctx->pc = 0x38b314u;
    // NOP
    // 0x38b318: 0xe60012d0  swc1        $f0, 0x12D0($s0)
    ctx->pc = 0x38b318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4816), bits); }
    // 0x38b31c: 0x0  nop
    ctx->pc = 0x38b31cu;
    // NOP
    // 0x38b320: 0x0  nop
    ctx->pc = 0x38b320u;
    // NOP
    // 0x38b324: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x38b324u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x38b328: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x38b328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38b32c: 0xae001260  sw          $zero, 0x1260($s0)
    ctx->pc = 0x38b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4704), GPR_U32(ctx, 0));
    // 0x38b330: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x38b330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x38b334: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b338: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x38b338u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x38b33c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38b33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38b340: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38b340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38b344: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x38b344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x38b348: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38b348u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b34c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38b34cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b350: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38b350u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38b354: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x38b354u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38b358: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b35c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38b35cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b360: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x38b360u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x38b364: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x38b364u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b368: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38b368u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38b36c: 0x7e071230  sq          $a3, 0x1230($s0)
    ctx->pc = 0x38b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4656), GPR_VEC(ctx, 7));
    // 0x38b370: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38b370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b374: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38b374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b378: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38b378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b37c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x38b37cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b380: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38b380u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x38b384: 0x4a0003bf  vwaitq
    ctx->pc = 0x38b384u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x38b388: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x38b388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38b38c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x38b38cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38b390: 0x7e080180  sq          $t0, 0x180($s0)
    ctx->pc = 0x38b390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 8));
    // 0x38b394: 0xae001238  sw          $zero, 0x1238($s0)
    ctx->pc = 0x38b394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4664), GPR_U32(ctx, 0));
    // 0x38b398: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x38b39c: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x38b39cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x38b3a0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x38b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x38b3a4: 0x7e061250  sq          $a2, 0x1250($s0)
    ctx->pc = 0x38b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4688), GPR_VEC(ctx, 6));
    // 0x38b3a8: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x38b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x38b3ac: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x38b3acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x38b3b0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x38b3b4: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x38b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x38b3b8: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x38b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x38b3bc: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x38b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x38b3c0: 0x7e031220  sq          $v1, 0x1220($s0)
    ctx->pc = 0x38b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4640), GPR_VEC(ctx, 3));
    // 0x38b3c4: 0xae001240  sw          $zero, 0x1240($s0)
    ctx->pc = 0x38b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 0));
    // 0x38b3c8: 0xe54c0008  swc1        $f12, 0x8($t2)
    ctx->pc = 0x38b3c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x38b3cc: 0xe554000c  swc1        $f20, 0xC($t2)
    ctx->pc = 0x38b3ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x38b3d0: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x38b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x38b3d4: 0xc5812b80  lwc1        $f1, 0x2B80($t4)
    ctx->pc = 0x38b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 11136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b3d8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x38b3d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b3dc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x38b3dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38b3e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b3e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b3e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38b3e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b3e8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38b3e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b3ec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38b3ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38b3f0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38b3f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38b3f4: 0xae0b12c0  sw          $t3, 0x12C0($s0)
    ctx->pc = 0x38b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4800), GPR_U32(ctx, 11));
    // 0x38b3f8: 0x7e021290  sq          $v0, 0x1290($s0)
    ctx->pc = 0x38b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4752), GPR_VEC(ctx, 2));
    // 0x38b3fc: 0xe6011298  swc1        $f1, 0x1298($s0)
    ctx->pc = 0x38b3fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4760), bits); }
    // 0x38b400: 0xc5a02b6c  lwc1        $f0, 0x2B6C($t5)
    ctx->pc = 0x38b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 11116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b404: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x38b404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x38b408: 0x7a060190  lq          $a2, 0x190($s0)
    ctx->pc = 0x38b408u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x38b40c: 0x7e0312b0  sq          $v1, 0x12B0($s0)
    ctx->pc = 0x38b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4784), GPR_VEC(ctx, 3));
    // 0x38b410: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x38b410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x38b414: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x38b414u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x38b418: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x38b41c: 0x7e031280  sq          $v1, 0x1280($s0)
    ctx->pc = 0x38b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4736), GPR_VEC(ctx, 3));
    // 0x38b420: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x38b424: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x38b424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x38b428: 0xe6001274  swc1        $f0, 0x1274($s0)
    ctx->pc = 0x38b428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4724), bits); }
    // 0x38b42c: 0x7e0312a0  sq          $v1, 0x12A0($s0)
    ctx->pc = 0x38b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4768), GPR_VEC(ctx, 3));
    // 0x38b430: 0xe6011278  swc1        $f1, 0x1278($s0)
    ctx->pc = 0x38b430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4728), bits); }
    // 0x38b434: 0xe6001270  swc1        $f0, 0x1270($s0)
    ctx->pc = 0x38b434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4720), bits); }
    // 0x38b438: 0xa20b12d6  sb          $t3, 0x12D6($s0)
    ctx->pc = 0x38b438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4822), (uint8_t)GPR_U32(ctx, 11));
    // 0x38b43c: 0x7e460010  sq          $a2, 0x10($s2)
    ctx->pc = 0x38b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 6));
    // 0x38b440: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x38B440u;
    SET_GPR_U32(ctx, 31, 0x38B448u);
    ctx->pc = 0x38B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B440u;
    // 0x38b444: 0xa20b1308  sb          $t3, 0x1308($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38B440u, 0x38B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B448u;
label_38b448:
    // 0x38b448: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x38b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x38b44c: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x38B44Cu;
    SET_GPR_U32(ctx, 31, 0x38B454u);
    ctx->pc = 0x38B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B44Cu;
    // 0x38b450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x38B44Cu, 0x38B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B454u;
label_38b454:
    // 0x38b454: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x38b454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x38b458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38b458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b45c: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x38B45Cu;
    SET_GPR_U32(ctx, 31, 0x38B464u);
    ctx->pc = 0x38B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B45Cu;
    // 0x38b460: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x38B45Cu, 0x38B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B464u;
label_38b464:
    // 0x38b464: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38b468: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38b468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x38b46c: 0x2448e330  addiu       $t0, $v0, -0x1CD0
    ctx->pc = 0x38b46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x38b470: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x38b470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x38b474: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x38b474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x38b478: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x38b478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x38b47c: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x38b47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x38b480: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x38b480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x38b484: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x38b484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x38b488: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x38b488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38b48c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x38b48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38b490: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x38b490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38b494: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x38b494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38b498: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x38b498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38b49c: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x38b49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38b4a0: 0x8903001b  lwl         $v1, 0x1B($t0)
    ctx->pc = 0x38b4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x38b4a4: 0x99030018  lwr         $v1, 0x18($t0)
    ctx->pc = 0x38b4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x38b4a8: 0x8106001c  lb          $a2, 0x1C($t0)
    ctx->pc = 0x38b4a8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x57E34Cu));
    // 0x38b4ac: 0x8107001d  lb          $a3, 0x1D($t0)
    ctx->pc = 0x38b4acu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x57E34Du));
    // 0x38b4b0: 0xaba3002b  swl         $v1, 0x2B($sp)
    ctx->pc = 0x38b4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38b4b4: 0xbba30028  swr         $v1, 0x28($sp)
    ctx->pc = 0x38b4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x38b4b8: 0xa3a6002c  sb          $a2, 0x2C($sp)
    ctx->pc = 0x38b4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 6));
    // 0x38b4bc: 0xa3a7002d  sb          $a3, 0x2D($sp)
    ctx->pc = 0x38b4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 45), (uint8_t)GPR_U32(ctx, 7));
    // 0x38b4c0: 0x8103001e  lb          $v1, 0x1E($t0)
    ctx->pc = 0x38b4c0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x57E34Eu));
    // 0x38b4c4: 0xa3a3002e  sb          $v1, 0x2E($sp)
    ctx->pc = 0x38b4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x38b4c8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x38b4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38b4cc: 0x2484b8a8  addiu       $a0, $a0, -0x4758
    ctx->pc = 0x38b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    // 0x38b4d0: 0xc0cd526  jal         func_335498
    ctx->pc = 0x38B4D0u;
    SET_GPR_U32(ctx, 31, 0x38B4D8u);
    ctx->pc = 0x38B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B4D0u;
    // 0x38b4d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x38B4D0u, 0x38B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B4D8u;
label_38b4d8:
    // 0x38b4d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x38b4dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38b4dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38b4e0: 0x24420031  addiu       $v0, $v0, 0x31
    ctx->pc = 0x38b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 49));
    // 0x38b4e4: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x38b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x38b4e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38b4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b4ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38b4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b4f0: 0xa3a2002d  sb          $v0, 0x2D($sp)
    ctx->pc = 0x38b4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x38b4f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38b4f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x38b4f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38b4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b4fc: 0xc043f52  jal         func_10FD48
    ctx->pc = 0x38B4FCu;
    SET_GPR_U32(ctx, 31, 0x38B504u);
    ctx->pc = 0x38B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B4FCu;
    // 0x38b500: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FD48u, 0x38B4FCu, 0x38B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B504u;
label_38b504:
    // 0x38b504: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x38b504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38b508: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x38b508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38b50c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x38b50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38b510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38b510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b514: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x38b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38b518: 0x3e00008  jr          $ra
    ctx->pc = 0x38B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B518u;
        // 0x38b51c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B520u;
}
