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

// Function: sub_00350CD8
// Address: 0x350cd8 - 0x351158
void sub_00350CD8_0x350cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350CD8_0x350cd8");
#endif

    switch (ctx->pc) {
        case 0x350ee0u: goto label_350ee0;
        case 0x350f28u: goto label_350f28;
        case 0x350f38u: goto label_350f38;
        case 0x350f48u: goto label_350f48;
        case 0x350f94u: goto label_350f94;
        case 0x351008u: goto label_351008;
        case 0x351030u: goto label_351030;
        case 0x351054u: goto label_351054;
        case 0x351090u: goto label_351090;
        case 0x3510a0u: goto label_3510a0;
        case 0x3510ecu: goto label_3510ec;
        default: break;
    }

    ctx->pc = 0x350cd8u;

    // 0x350cd8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x350cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x350cdc: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x350cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x350ce0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x350ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x350ce4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x350ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ce8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x350ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x350cec: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x350cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x350cf0: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x350cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x350cf4: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x350cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x350cf8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x350cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x350cfc: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x350cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x350d00: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x350d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x350d04: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x350d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x350d08: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x350d08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x350d0c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x350d0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x350d10: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x350d10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x350d14: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x350d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x350d18: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x350d18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x350d1c: 0xafa60094  sw          $a2, 0x94($sp)
    ctx->pc = 0x350d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
    // 0x350d20: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x350d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350d24: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x350d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x350d28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x350d28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x350d2c: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x350d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x350d30: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x350d30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x350d34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x350d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x350d38: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x350d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x350d3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x350d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350d40: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x350d40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x350d44: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x350d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x350d48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x350d48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x350d4c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x350d4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x350d50: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x350d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x350d54: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x350d54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x350d58: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x350d58u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x350d5c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x350d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x350d60: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x350d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x350d64: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x350d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x350d68: 0xafa8009c  sw          $t0, 0x9C($sp)
    ctx->pc = 0x350d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 8));
    // 0x350d6c: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x350d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x350d70: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x350d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x350d74: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x350d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x350d78: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x350d78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350d7c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x350d7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x350d80: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x350d80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x350d84: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x350d84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x350d88: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x350d88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x350d8c: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x350d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x350d90: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x350d90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x350d94: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x350d94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x350d98: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x350d98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350d9c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x350d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x350da0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x350da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x350da4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x350da4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350da8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x350da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x350dac: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x350dacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x350db0: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x350db0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x350db4: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x350db4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x350db8: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x350db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x350dbc: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x350dbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x350dc0: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x350dc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x350dc4: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x350dc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350dc8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x350dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x350dcc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x350dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x350dd0: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x350dd0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350dd4: 0x7a670050  lq          $a3, 0x50($s3)
    ctx->pc = 0x350dd4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x350dd8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x350dd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x350ddc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x350ddcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x350de0: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x350de0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x350de4: 0x4bc3112f  vmini.xyz   $vf4, $vf2, $vf3
    ctx->pc = 0x350de4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x350de8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x350de8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x350dec: 0x4bc3116b  vmax.xyz    $vf5, $vf2, $vf3
    ctx->pc = 0x350decu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x350df0: 0x48262000  qmfc2.ni    $a2, $vf4
    ctx->pc = 0x350df0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x350df4: 0x482a2800  qmfc2.ni    $t2, $vf5
    ctx->pc = 0x350df4u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x350df8: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x350df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x350dfc: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x350dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    // 0x350e00: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x350e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x350e04: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x350e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x350e08: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x350e08u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350e0c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x350e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350e10: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x350e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x350e14: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x350e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x350e18: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x350e18u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x350e1c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x350e1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x350e20: 0x7a650060  lq          $a1, 0x60($s3)
    ctx->pc = 0x350e20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x350e24: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x350e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x350e28: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x350e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x350e2c: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x350e2cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x350e30: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x350e30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x350e34: 0x96620084  lhu         $v0, 0x84($s3)
    ctx->pc = 0x350e34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x350e38: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x350e38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x350e3c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x350e3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x350e40: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x350e40u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x350e44: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x350e44u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x350e48: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x350e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x350e4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x350e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x350e50: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x350e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x350e54: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x350e54u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x350e58: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x350e58u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x350e5c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x350e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x350e60: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x350e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x350e64: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x350e64u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x350e68: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x350e68u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x350e6c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x350e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x350e70: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x350e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x350e74: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x350e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x350e78: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x350e78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x350e7c: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x350e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x350e80: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x350e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x350e84: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x350e84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350e88: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x350e88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x350e8c: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x350e8cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x350e90: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x350e90u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x350e94: 0x8e6b0094  lw          $t3, 0x94($s3)
    ctx->pc = 0x350e94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x350e98: 0x30427ff0  andi        $v0, $v0, 0x7FF0
    ctx->pc = 0x350e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32752);
    // 0x350e9c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x350e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x350ea0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x350ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x350ea4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x350ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x350ea8: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x350ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    // 0x350eac: 0xafac00a0  sw          $t4, 0xA0($sp)
    ctx->pc = 0x350eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 12));
    // 0x350eb0: 0x8fbe0014  lw          $fp, 0x14($sp)
    ctx->pc = 0x350eb0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x350eb4: 0x8fb60018  lw          $s6, 0x18($sp)
    ctx->pc = 0x350eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350eb8: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x350eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x350ebc: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x350ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x350ec0: 0x7faa0080  sq          $t2, 0x80($sp)
    ctx->pc = 0x350ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    // 0x350ec4: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x350ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x350ec8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x350ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x350ecc: 0x1162000a  beq         $t3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350ECCu;
    {
        const bool branch_taken_0x350ecc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x350ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350ECCu;
        // 0x350ed0: 0x7fa90060  sq          $t1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ecc) {
            ctx->pc = 0x350EF8u;
            goto label_350ef8;
        }
    }
    ctx->pc = 0x350ED4u;
    // 0x350ed4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x350ed4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350ed8: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x350ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x350edc: 0x0  nop
    ctx->pc = 0x350edcu;
    // NOP
label_350ee0:
    // 0x350ee0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x350ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x350ee4: 0x0  nop
    ctx->pc = 0x350ee4u;
    // NOP
    // 0x350ee8: 0x0  nop
    ctx->pc = 0x350ee8u;
    // NOP
    // 0x350eec: 0x0  nop
    ctx->pc = 0x350eecu;
    // NOP
    // 0x350ef0: 0x5562fffb  bnel        $t3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x350EF0u;
    {
        const bool branch_taken_0x350ef0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        if (branch_taken_0x350ef0) {
            ctx->pc = 0x350EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350EF0u;
            // 0x350ef4: 0x7d630000  sq          $v1, 0x0($t3) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350ee0;
        }
    }
    ctx->pc = 0x350EF8u;
label_350ef8:
    // 0x350ef8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x350ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x350efc: 0x8fb40030  lw          $s4, 0x30($sp)
    ctx->pc = 0x350efcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350f00: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x350f00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x350f04: 0x128b0003  beq         $s4, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x350F04u;
    {
        const bool branch_taken_0x350f04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 11));
        ctx->pc = 0x350F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F04u;
        // 0x350f08: 0xafa400a4  sw          $a0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f04) {
            ctx->pc = 0x350F14u;
            goto label_350f14;
        }
    }
    ctx->pc = 0x350F0Cu;
    // 0x350f0c: 0x149e002f  bne         $a0, $fp, . + 4 + (0x2F << 2)
    ctx->pc = 0x350F0Cu;
    {
        const bool branch_taken_0x350f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 30));
        ctx->pc = 0x350F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F0Cu;
        // 0x350f10: 0xc7a30044  lwc1        $f3, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f0c) {
            ctx->pc = 0x350FCCu;
            goto label_350fcc;
        }
    }
    ctx->pc = 0x350F14u;
label_350f14:
    // 0x350f14: 0x8fac00a0  lw          $t4, 0xA0($sp)
    ctx->pc = 0x350f14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x350f18: 0x194102b  sltu        $v0, $t4, $s4
    ctx->pc = 0x350f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x350f1c: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x350F1Cu;
    {
        const bool branch_taken_0x350f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F1Cu;
        // 0x350f20: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f1c) {
            ctx->pc = 0x351120u;
            goto label_351120;
        }
    }
    ctx->pc = 0x350F24u;
    // 0x350f24: 0x8fb10034  lw          $s1, 0x34($sp)
    ctx->pc = 0x350f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_350f28:
    // 0x350f28: 0x3d1102b  sltu        $v0, $fp, $s1
    ctx->pc = 0x350f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x350f2c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x350F2Cu;
    {
        const bool branch_taken_0x350f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F2Cu;
        // 0x350f30: 0x26970001  addiu       $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f2c) {
            ctx->pc = 0x350FB0u;
            goto label_350fb0;
        }
    }
    ctx->pc = 0x350F34u;
    // 0x350f34: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x350f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_350f38:
    // 0x350f38: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x350f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x350f3c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x350F3Cu;
    {
        const bool branch_taken_0x350f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F3Cu;
        // 0x350f40: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f3c) {
            ctx->pc = 0x350FA0u;
            goto label_350fa0;
        }
    }
    ctx->pc = 0x350F44u;
    // 0x350f44: 0x96620072  lhu         $v0, 0x72($s3)
    ctx->pc = 0x350f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_350f48:
    // 0x350f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x350f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350f4c: 0x96650070  lhu         $a1, 0x70($s3)
    ctx->pc = 0x350f4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x350f50: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x350f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x350f54: 0x8e6a0080  lw          $t2, 0x80($s3)
    ctx->pc = 0x350f54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x350f58: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x350f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x350f5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x350f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x350f60: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x350f60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x350f64: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x350f64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x350f68: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x350f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x350f6c: 0x8fa9009c  lw          $t1, 0x9C($sp)
    ctx->pc = 0x350f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x350f70: 0x455818  mult        $t3, $v0, $a1
    ctx->pc = 0x350f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x350f74: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x350f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x350f78: 0x1741021  addu        $v0, $t3, $s4
    ctx->pc = 0x350f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x350f7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x350f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x350f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350f84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x350f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350f88: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x350f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x350f8c: 0xc0d41de  jal         func_350778
    ctx->pc = 0x350F8Cu;
    SET_GPR_U32(ctx, 31, 0x350F94u);
    ctx->pc = 0x350F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F8Cu;
    // 0x350f90: 0x1452821  addu        $a1, $t2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350778u, 0x350F8Cu, 0x350F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F94u;
label_350f94:
    // 0x350f94: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x350f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x350f98: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x350F98u;
    {
        const bool branch_taken_0x350f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f98) {
            ctx->pc = 0x350F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350F98u;
            // 0x350f9c: 0x96620072  lhu         $v0, 0x72($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350f48;
        }
    }
    ctx->pc = 0x350FA0u;
label_350fa0:
    // 0x350fa0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x350fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350fa4: 0x3d1102b  sltu        $v0, $fp, $s1
    ctx->pc = 0x350fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x350fa8: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x350FA8u;
    {
        const bool branch_taken_0x350fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350fa8) {
            ctx->pc = 0x350FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350FA8u;
            // 0x350fac: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350f38;
        }
    }
    ctx->pc = 0x350FB0u;
label_350fb0:
    // 0x350fb0: 0x8fac00a0  lw          $t4, 0xA0($sp)
    ctx->pc = 0x350fb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x350fb4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x350fb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350fb8: 0x194102b  sltu        $v0, $t4, $s4
    ctx->pc = 0x350fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x350fbc: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x350FBCu;
    {
        const bool branch_taken_0x350fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FBCu;
        // 0x350fc0: 0x8fb10034  lw          $s1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350fbc) {
            ctx->pc = 0x350F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350f28;
        }
    }
    ctx->pc = 0x350FC4u;
    // 0x350fc4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x350FC4u;
    {
        const bool branch_taken_0x350fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FC4u;
        // 0x350fc8: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350fc4) {
            ctx->pc = 0x351120u;
            goto label_351120;
        }
    }
    ctx->pc = 0x350FCCu;
label_350fcc:
    // 0x350fcc: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x350fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x350fd0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x350fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350fd4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x350fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350fd8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x350fd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x350fdc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x350fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x350fe0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x350fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x350fe4: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x350fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x350fe8: 0x0  nop
    ctx->pc = 0x350fe8u;
    // NOP
    // 0x350fec: 0x0  nop
    ctx->pc = 0x350fecu;
    // NOP
    // 0x350ff0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x350ff0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x350ff4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x350ff4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x350ff8: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x350FF8u;
    {
        const bool branch_taken_0x350ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FF8u;
        // 0x350ffc: 0x46021d41  sub.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ff8) {
            ctx->pc = 0x35111Cu;
            goto label_35111c;
        }
    }
    ctx->pc = 0x351000u;
    // 0x351000: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x351000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x351004: 0x0  nop
    ctx->pc = 0x351004u;
    // NOP
label_351008:
    // 0x351008: 0x44946000  mtc1        $s4, $f12
    ctx->pc = 0x351008u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35100c: 0x0  nop
    ctx->pc = 0x35100cu;
    // NOP
    // 0x351010: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x351010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x351014: 0x26900001  addiu       $s0, $s4, 0x1
    ctx->pc = 0x351014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x351018: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x351018u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35101c: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x35101cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x351020: 0x46156300  add.s       $f12, $f12, $f21
    ctx->pc = 0x351020u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x351024: 0x46166328  max.s       $f12, $f12, $f22
    ctx->pc = 0x351024u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[22]);
    // 0x351028: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x351028u;
    SET_GPR_U32(ctx, 31, 0x351030u);
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x351028u, 0x351030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351030u;
label_351030:
    // 0x351030: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x351030u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351034: 0x0  nop
    ctx->pc = 0x351034u;
    // NOP
    // 0x351038: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x351038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x35103c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35103cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351040: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x351040u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x351044: 0x46156300  add.s       $f12, $f12, $f21
    ctx->pc = 0x351044u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x351048: 0x46166328  max.s       $f12, $f12, $f22
    ctx->pc = 0x351048u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[22]);
    // 0x35104c: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x35104Cu;
    SET_GPR_U32(ctx, 31, 0x351054u);
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x35104Cu, 0x351054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351054u;
label_351054:
    // 0x351054: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x351054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351058: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x351058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x35105c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35105Cu;
    {
        const bool branch_taken_0x35105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35105Cu;
        // 0x351060: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35105c) {
            ctx->pc = 0x35106Cu;
            goto label_35106c;
        }
    }
    ctx->pc = 0x351064u;
    // 0x351064: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x351064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351068: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x351068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35106c:
    // 0x35106c: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x35106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x351070: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x351070u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x351074: 0x3c3900a  movz        $s2, $fp, $v1
    ctx->pc = 0x351074u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 30));
    // 0x351078: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x351078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x35107c: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x35107cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x351080: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x351080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x351084: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x351084u;
    {
        const bool branch_taken_0x351084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351084u;
        // 0x351088: 0x8fac00a0  lw          $t4, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351084) {
            ctx->pc = 0x35110Cu;
            goto label_35110c;
        }
    }
    ctx->pc = 0x35108Cu;
    // 0x35108c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x35108cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_351090:
    // 0x351090: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x351090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x351094: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x351094u;
    {
        const bool branch_taken_0x351094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351094u;
        // 0x351098: 0x26350001  addiu       $s5, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351094) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x35109Cu;
    // 0x35109c: 0x96620072  lhu         $v0, 0x72($s3)
    ctx->pc = 0x35109cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
label_3510a0:
    // 0x3510a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3510a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3510a4: 0x96650070  lhu         $a1, 0x70($s3)
    ctx->pc = 0x3510a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x3510a8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x3510a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3510ac: 0x8e6a0080  lw          $t2, 0x80($s3)
    ctx->pc = 0x3510acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3510b0: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x3510b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3510b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3510b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3510b8: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x3510b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x3510bc: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x3510bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3510c0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x3510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3510c4: 0x8fa9009c  lw          $t1, 0x9C($sp)
    ctx->pc = 0x3510c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x3510c8: 0x455818  mult        $t3, $v0, $a1
    ctx->pc = 0x3510c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3510cc: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x3510ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x3510d0: 0x1741021  addu        $v0, $t3, $s4
    ctx->pc = 0x3510d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x3510d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3510d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3510d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3510d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3510dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3510dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3510e0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3510e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3510e4: 0xc0d41de  jal         func_350778
    ctx->pc = 0x3510E4u;
    SET_GPR_U32(ctx, 31, 0x3510ECu);
    ctx->pc = 0x3510E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3510E4u;
    // 0x3510e8: 0x1452821  addu        $a1, $t2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350778u, 0x3510E4u, 0x3510ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3510ECu;
label_3510ec:
    // 0x3510ec: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x3510ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3510f0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3510F0u;
    {
        const bool branch_taken_0x3510f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3510f0) {
            ctx->pc = 0x3510F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3510F0u;
            // 0x3510f4: 0x96620072  lhu         $v0, 0x72($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3510A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3510a0;
        }
    }
    ctx->pc = 0x3510F8u;
label_3510f8:
    // 0x3510f8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3510f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3510fc: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3510fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x351100: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x351100u;
    {
        const bool branch_taken_0x351100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351100u;
        // 0x351104: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351100) {
            ctx->pc = 0x351090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351090;
        }
    }
    ctx->pc = 0x351108u;
    // 0x351108: 0x8fac00a0  lw          $t4, 0xA0($sp)
    ctx->pc = 0x351108u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_35110c:
    // 0x35110c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x35110cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351110: 0x194102b  sltu        $v0, $t4, $s4
    ctx->pc = 0x351110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x351114: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x351114u;
    {
        const bool branch_taken_0x351114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351114) {
            ctx->pc = 0x351008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351008;
        }
    }
    ctx->pc = 0x35111Cu;
label_35111c:
    // 0x35111c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x35111cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_351120:
    // 0x351120: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x351120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x351124: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x351124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x351128: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x351128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x35112c: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x35112cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x351130: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x351130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x351134: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x351134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x351138: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x351138u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x35113c: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x35113cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x351140: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x351140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x351144: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x351144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x351148: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x351148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35114c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x35114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x351150: 0x3e00008  jr          $ra
    ctx->pc = 0x351150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351150u;
        // 0x351154: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351158u;
}
