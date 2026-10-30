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

// Function: sub_0017A258
// Address: 0x17a258 - 0x17a3c0
void sub_0017A258_0x17a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A258_0x17a258");
#endif

    ctx->pc = 0x17a258u;

    // 0x17a258: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x17a258u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x17a25c: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x17a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x17a260: 0x44602  srl         $t0, $a0, 24
    ctx->pc = 0x17a260u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x17a264: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a268: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x17a268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17a26c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a26cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17a270: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17a270u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a274: 0x0  nop
    ctx->pc = 0x17a274u;
    // NOP
    // 0x17a278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17a27c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17a280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17a280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a284: 0x0  nop
    ctx->pc = 0x17a284u;
    // NOP
    // 0x17a288: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17a28c: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x17a28cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x17a290: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x17a290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x17a294: 0x53c02  srl         $a3, $a1, 16
    ctx->pc = 0x17a294u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x17a298: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17a298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17a29c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17a29cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17a2a0: 0x0  nop
    ctx->pc = 0x17a2a0u;
    // NOP
    // 0x17a2a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17a2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17a2a8: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x17a2a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17a2ac: 0x0  nop
    ctx->pc = 0x17a2acu;
    // NOP
    // 0x17a2b0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17a2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17a2b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17a2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17a2b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17a2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a2bc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x17a2bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17a2c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17a2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17a2c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17a2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17a2c8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x17a2c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x17a2cc: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x17a2ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17a2d0: 0x0  nop
    ctx->pc = 0x17a2d0u;
    // NOP
    // 0x17a2d4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x17a2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x17a2d8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x17a2d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17a2dc: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x17a2dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17a2e0: 0x0  nop
    ctx->pc = 0x17a2e0u;
    // NOP
    // 0x17a2e4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x17a2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x17a2e8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x17a2e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17a2ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17a2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a2f0: 0x0  nop
    ctx->pc = 0x17a2f0u;
    // NOP
    // 0x17a2f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17a2f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a2fc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x17a2fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x17a300: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x17a300u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17a304: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x17a304u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x17a308: 0x0  nop
    ctx->pc = 0x17a308u;
    // NOP
    // 0x17a30c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x17a30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x17a310: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x17a310u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17a314: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x17a314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17a318: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17a318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a31c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x17a31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17a320: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x17a320u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17a324: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x17a324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a328: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17a328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17a32c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17a32cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17a330: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x17a330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17a334: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17a334u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17a338: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x17a338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x17a33c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x17a33cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a340: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17a340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17a344: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x17a344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x17a348: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x17a348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17a34c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x17a34cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17a350: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x17a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x17a354: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x17a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x17a358: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x17a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x17a35c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x17a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x17a360: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17a360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a364: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17a364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17a368: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x17a368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17a36c: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x17a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17a370: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x17a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a374: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17a378: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x17a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17a37c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17a380: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x17a380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x17a384: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x17a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17a388: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x17a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a38c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17a390: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x17a390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17a394: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17a398: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x17a398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x17a39c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a39cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17a3a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x17a3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x17a3a4: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x17a3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x17a3a8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x17a3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x17a3ac: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x17a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x17a3b0: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x17a3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x17a3b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3B8u;
        // 0x17a3bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A3C0u;
}
