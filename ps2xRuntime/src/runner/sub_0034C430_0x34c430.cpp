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

// Function: sub_0034C430
// Address: 0x34c430 - 0x34d5d0
void sub_0034C430_0x34c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C430_0x34c430");
#endif

    ctx->pc = 0x34c430u;

    // 0x34c430: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x34c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x34c434: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x34c434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c438: 0xe7bf0148  swc1        $f31, 0x148($sp)
    ctx->pc = 0x34c438u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x34c43c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x34c43cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c440: 0xe7be0140  swc1        $f30, 0x140($sp)
    ctx->pc = 0x34c440u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x34c444: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x34c444u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c448: 0xe7bd0138  swc1        $f29, 0x138($sp)
    ctx->pc = 0x34c448u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x34c44c: 0xe7bc0130  swc1        $f28, 0x130($sp)
    ctx->pc = 0x34c44cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x34c450: 0xe7bb0128  swc1        $f27, 0x128($sp)
    ctx->pc = 0x34c450u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x34c454: 0xe7ba0120  swc1        $f26, 0x120($sp)
    ctx->pc = 0x34c454u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x34c458: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x34c458u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x34c45c: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x34c45cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x34c460: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x34c460u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x34c464: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x34c464u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x34c468: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x34c468u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34c46c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x34c46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34c470: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x34c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c474: 0x79870000  lq          $a3, 0x0($t4)
    ctx->pc = 0x34c474u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x34c478: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x34c478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c47c: 0x79420010  lq          $v0, 0x10($t2)
    ctx->pc = 0x34c47cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34c480: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34c480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34c484: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34c484u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c488: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c48c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c490: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c494: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34c494u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c498: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34c498u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34c49c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c49cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c4a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c4a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c4a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c4a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c4ac: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c4acu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c4b0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c4b4: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x34c4b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34c4b8: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x34c4b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34c4bc: 0x46003205  abs.s       $f8, $f6
    ctx->pc = 0x34c4bcu;
    ctx->f[8] = FPU_ABS_S(ctx->f[6]);
    // 0x34c4c0: 0x79420020  lq          $v0, 0x20($t2)
    ctx->pc = 0x34c4c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34c4c4: 0x46003a45  abs.s       $f9, $f7
    ctx->pc = 0x34c4c4u;
    ctx->f[9] = FPU_ABS_S(ctx->f[7]);
    // 0x34c4c8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34c4c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34c4cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c4ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c4d0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c4d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c4d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c4d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c4d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c4dc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34c4dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c4e0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x34c4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x34c4e4: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x34c4e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x34c4e8: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x34c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c4ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x34c4ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34c4f0: 0x0  nop
    ctx->pc = 0x34c4f0u;
    // NOP
    // 0x34c4f4: 0x46002145  abs.s       $f5, $f4
    ctx->pc = 0x34c4f4u;
    ctx->f[5] = FPU_ABS_S(ctx->f[4]);
    // 0x34c4f8: 0x79820030  lq          $v0, 0x30($t4)
    ctx->pc = 0x34c4f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x34c4fc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34c4fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34c500: 0x79430030  lq          $v1, 0x30($t2)
    ctx->pc = 0x34c500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x34c504: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x34c504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x34c508: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x34c508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c50c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c50cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c510: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c514: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34c514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c518: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34c518u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34c51c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34c51cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c520: 0x79240000  lq          $a0, 0x0($t1)
    ctx->pc = 0x34c520u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34c524: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x34c524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34c528: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34c528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34c52c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34c52cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c530: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c534: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c538: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c53c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c53cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c540: 0x46011280  add.s       $f10, $f2, $f1
    ctx->pc = 0x34c540u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34c544: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c548: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c548u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c54c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34c54cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c550: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34c550u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34c554: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34c554u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c558: 0x44855800  mtc1        $a1, $f11
    ctx->pc = 0x34c558u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x34c55c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c55cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c560: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34c560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c564: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34c564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c568: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34c568u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34c56c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x34c56cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34c570: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34c574: 0x460a1880  add.s       $f2, $f3, $f10
    ctx->pc = 0x34c574u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x34c578: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x34c57c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34c57cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34c580: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34c580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34c584: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c588: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c58c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c58cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c590: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34c590u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c594: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x34c594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x34c598: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x34c598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x34c59c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x34c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x34c5a0: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x34c5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c5a4: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x34c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x34c5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c5ac: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x34c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x34c5b0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x34c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34c5b4: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x34c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x34c5b8: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x34c5b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34c5bc: 0xe7a70054  swc1        $f7, 0x54($sp)
    ctx->pc = 0x34c5bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34c5c0: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x34c5c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x34c5c4: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x34c5c4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34c5c8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x34c5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34c5cc: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x34c5ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x34c5d0: 0xe7a90084  swc1        $f9, 0x84($sp)
    ctx->pc = 0x34c5d0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x34c5d4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34C5D4u;
    {
        const bool branch_taken_0x34c5d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5D4u;
        // 0x34c5d8: 0xe7a50088  swc1        $f5, 0x88($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c5d4) {
            ctx->pc = 0x34C5F4u;
            goto label_34c5f4;
        }
    }
    ctx->pc = 0x34C5DCu;
    // 0x34c5dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34c5dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c5e0: 0x0  nop
    ctx->pc = 0x34c5e0u;
    // NOP
    // 0x34c5e4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x34C5E4u;
    {
        const bool branch_taken_0x34c5e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5E4u;
        // 0x34c5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c5e4) {
            ctx->pc = 0x34C618u;
            goto label_34c618;
        }
    }
    ctx->pc = 0x34C5ECu;
    // 0x34c5ec: 0x100003e4  b           . + 4 + (0x3E4 << 2)
    ctx->pc = 0x34C5ECu;
    {
        const bool branch_taken_0x34c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5ECu;
        // 0x34c5f0: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c5ec) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34C5F4u;
label_34c5f4:
    // 0x34c5f4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34c5f4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34c5f8: 0x46025834  c.lt.s      $f11, $f2
    ctx->pc = 0x34c5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c5fc: 0x0  nop
    ctx->pc = 0x34c5fcu;
    // NOP
    // 0x34c600: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x34C600u;
    {
        const bool branch_taken_0x34c600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c600) {
            ctx->pc = 0x34C604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C600u;
            // 0x34c604: 0x79840010  lq          $a0, 0x10($t4) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C61Cu;
            goto label_34c61c;
        }
    }
    ctx->pc = 0x34C608u;
    // 0x34c608: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34c608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c60c: 0x0  nop
    ctx->pc = 0x34c60cu;
    // NOP
    // 0x34c610: 0x450103da  bc1t        . + 4 + (0x3DA << 2)
    ctx->pc = 0x34C610u;
    {
        const bool branch_taken_0x34c610 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C610u;
        // 0x34c614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c610) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34C618u;
label_34c618:
    // 0x34c618: 0x79840010  lq          $a0, 0x10($t4)
    ctx->pc = 0x34c618u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_34c61c:
    // 0x34c61c: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x34c61cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c620: 0x79430010  lq          $v1, 0x10($t2)
    ctx->pc = 0x34c620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34c624: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c628: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c62c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c62cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c630: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c634: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c638: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c638u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c63c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c640: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34c640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c644: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c648: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c64c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c64cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c650: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34c650u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c654: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c658: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x34c658u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34c65c: 0x44873800  mtc1        $a3, $f7
    ctx->pc = 0x34c65cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34c660: 0x46003205  abs.s       $f8, $f6
    ctx->pc = 0x34c660u;
    ctx->f[8] = FPU_ABS_S(ctx->f[6]);
    // 0x34c664: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x34c664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c668: 0x46003a45  abs.s       $f9, $f7
    ctx->pc = 0x34c668u;
    ctx->f[9] = FPU_ABS_S(ctx->f[7]);
    // 0x34c66c: 0x79420020  lq          $v0, 0x20($t2)
    ctx->pc = 0x34c66cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34c670: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x34c670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x34c674: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c678: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c67c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c680: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c684: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c688: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34c688u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c68c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x34c68cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x34c690: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x34c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c694: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x34c694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34c698: 0x0  nop
    ctx->pc = 0x34c698u;
    // NOP
    // 0x34c69c: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x34c69cu;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
    // 0x34c6a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34c6a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34c6a4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x34c6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x34c6a8: 0xc5650004  lwc1        $f5, 0x4($t3)
    ctx->pc = 0x34c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34c6ac: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34c6acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c6b0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c6b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c6b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34c6b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c6b8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c6bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c6bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c6c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c6c4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c6c4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c6c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x34c6c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c6cc: 0x46011280  add.s       $f10, $f2, $f1
    ctx->pc = 0x34c6ccu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34c6d0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c6d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c6d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c6d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c6d8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c6dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c6e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c6e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c6e4: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34c6e4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c6e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34c6e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c6ec: 0x44875800  mtc1        $a3, $f11
    ctx->pc = 0x34c6ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x34c6f0: 0x460a2880  add.s       $f2, $f5, $f10
    ctx->pc = 0x34c6f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x34c6f4: 0xe7a6005c  swc1        $f6, 0x5C($sp)
    ctx->pc = 0x34c6f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34c6f8: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x34c6f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x34c6fc: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x34c6fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x34c700: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34c700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c704: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x34c704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34c708: 0xe7ab0044  swc1        $f11, 0x44($sp)
    ctx->pc = 0x34c708u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34c70c: 0xe7a8008c  swc1        $f8, 0x8C($sp)
    ctx->pc = 0x34c70cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x34c710: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x34c710u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34c714: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34C714u;
    {
        const bool branch_taken_0x34c714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C714u;
        // 0x34c718: 0xe7a40094  swc1        $f4, 0x94($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c714) {
            ctx->pc = 0x34C734u;
            goto label_34c734;
        }
    }
    ctx->pc = 0x34C71Cu;
    // 0x34c71c: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x34c71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c720: 0x0  nop
    ctx->pc = 0x34c720u;
    // NOP
    // 0x34c724: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x34C724u;
    {
        const bool branch_taken_0x34c724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C724u;
        // 0x34c728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c724) {
            ctx->pc = 0x34C758u;
            goto label_34c758;
        }
    }
    ctx->pc = 0x34C72Cu;
    // 0x34c72c: 0x10000394  b           . + 4 + (0x394 << 2)
    ctx->pc = 0x34C72Cu;
    {
        const bool branch_taken_0x34c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C72Cu;
        // 0x34c730: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c72c) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34C734u;
label_34c734:
    // 0x34c734: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34c734u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34c738: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34c738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c73c: 0x0  nop
    ctx->pc = 0x34c73cu;
    // NOP
    // 0x34c740: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x34C740u;
    {
        const bool branch_taken_0x34c740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c740) {
            ctx->pc = 0x34C744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C740u;
            // 0x34c744: 0x79840020  lq          $a0, 0x20($t4) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C75Cu;
            goto label_34c75c;
        }
    }
    ctx->pc = 0x34C748u;
    // 0x34c748: 0x46025834  c.lt.s      $f11, $f2
    ctx->pc = 0x34c748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c74c: 0x0  nop
    ctx->pc = 0x34c74cu;
    // NOP
    // 0x34c750: 0x4501038a  bc1t        . + 4 + (0x38A << 2)
    ctx->pc = 0x34C750u;
    {
        const bool branch_taken_0x34c750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C750u;
        // 0x34c754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c750) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34C758u;
label_34c758:
    // 0x34c758: 0x79840020  lq          $a0, 0x20($t4)
    ctx->pc = 0x34c758u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 32)));
label_34c75c:
    // 0x34c75c: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x34c75cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c760: 0x79430010  lq          $v1, 0x10($t2)
    ctx->pc = 0x34c760u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34c764: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c768: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c76c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c76cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c770: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c774: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c778: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c778u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c77c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c77cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c780: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34c780u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c784: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c788: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c78c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c78cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c790: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34c790u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c794: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x34c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c798: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x34c798u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34c79c: 0x44873800  mtc1        $a3, $f7
    ctx->pc = 0x34c79cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34c7a0: 0x46003205  abs.s       $f8, $f6
    ctx->pc = 0x34c7a0u;
    ctx->f[8] = FPU_ABS_S(ctx->f[6]);
    // 0x34c7a4: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x34c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c7a8: 0x46003a45  abs.s       $f9, $f7
    ctx->pc = 0x34c7a8u;
    ctx->f[9] = FPU_ABS_S(ctx->f[7]);
    // 0x34c7ac: 0x79420020  lq          $v0, 0x20($t2)
    ctx->pc = 0x34c7acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34c7b0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x34c7b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x34c7b4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c7b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c7b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c7b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c7bc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c7bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c7c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c7c4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c7c8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34c7c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c7cc: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x34c7ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x34c7d0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x34c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c7d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x34c7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34c7d8: 0x0  nop
    ctx->pc = 0x34c7d8u;
    // NOP
    // 0x34c7dc: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x34c7dcu;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
    // 0x34c7e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34c7e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34c7e4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x34c7e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x34c7e8: 0xc5650008  lwc1        $f5, 0x8($t3)
    ctx->pc = 0x34c7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34c7ec: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34c7ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c7f0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c7f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c7f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34c7f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c7f8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c7f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c7fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c7fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c800: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c804: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c804u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c808: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x34c808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c80c: 0x46011280  add.s       $f10, $f2, $f1
    ctx->pc = 0x34c80cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34c810: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34c810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c814: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c818: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c81c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c81cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c820: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c824: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34c824u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c828: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34c828u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c82c: 0x44875800  mtc1        $a3, $f11
    ctx->pc = 0x34c82cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x34c830: 0x460a2880  add.s       $f2, $f5, $f10
    ctx->pc = 0x34c830u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x34c834: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x34c834u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x34c838: 0xe7a7006c  swc1        $f7, 0x6C($sp)
    ctx->pc = 0x34c838u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x34c83c: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x34c83cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x34c840: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34c840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c844: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34c844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34c848: 0xe7ab0048  swc1        $f11, 0x48($sp)
    ctx->pc = 0x34c848u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34c84c: 0xe7a80098  swc1        $f8, 0x98($sp)
    ctx->pc = 0x34c84cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x34c850: 0xe7a9009c  swc1        $f9, 0x9C($sp)
    ctx->pc = 0x34c850u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x34c854: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34C854u;
    {
        const bool branch_taken_0x34c854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C854u;
        // 0x34c858: 0xe7a400a0  swc1        $f4, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c854) {
            ctx->pc = 0x34C874u;
            goto label_34c874;
        }
    }
    ctx->pc = 0x34C85Cu;
    // 0x34c85c: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x34c85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c860: 0x0  nop
    ctx->pc = 0x34c860u;
    // NOP
    // 0x34c864: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x34C864u;
    {
        const bool branch_taken_0x34c864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C864u;
        // 0x34c868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c864) {
            ctx->pc = 0x34C898u;
            goto label_34c898;
        }
    }
    ctx->pc = 0x34C86Cu;
    // 0x34c86c: 0x10000344  b           . + 4 + (0x344 << 2)
    ctx->pc = 0x34C86Cu;
    {
        const bool branch_taken_0x34c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C86Cu;
        // 0x34c870: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c86c) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34C874u;
label_34c874:
    // 0x34c874: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34c874u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34c878: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34c878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c87c: 0x0  nop
    ctx->pc = 0x34c87cu;
    // NOP
    // 0x34c880: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x34C880u;
    {
        const bool branch_taken_0x34c880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c880) {
            ctx->pc = 0x34C884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C880u;
            // 0x34c884: 0xc5620000  lwc1        $f2, 0x0($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C89Cu;
            goto label_34c89c;
        }
    }
    ctx->pc = 0x34C888u;
    // 0x34c888: 0x46025834  c.lt.s      $f11, $f2
    ctx->pc = 0x34c888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c88c: 0x0  nop
    ctx->pc = 0x34c88cu;
    // NOP
    // 0x34c890: 0x4501033a  bc1t        . + 4 + (0x33A << 2)
    ctx->pc = 0x34C890u;
    {
        const bool branch_taken_0x34c890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C890u;
        // 0x34c894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c890) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34C898u;
label_34c898:
    // 0x34c898: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x34c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34c89c:
    // 0x34c89c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x34c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c8a0: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x34c8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c8a4: 0x460013c6  mov.s       $f15, $f2
    ctx->pc = 0x34c8a4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[2]);
    // 0x34c8a8: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x34c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c8ac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x34c8acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34c8b0: 0x460007c6  mov.s       $f31, $f0
    ctx->pc = 0x34c8b0u;
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    // 0x34c8b4: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x34c8b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x34c8b8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x34c8b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x34c8bc: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x34c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c8c0: 0x46001f86  mov.s       $f30, $f3
    ctx->pc = 0x34c8c0u;
    ctx->f[30] = FPU_MOV_S(ctx->f[3]);
    // 0x34c8c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x34c8c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c8c8: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x34c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c8cc: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x34c8ccu;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x34c8d0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34c8d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34c8d4: 0x700224a9  por         $a0, $zero, $v0
    ctx->pc = 0x34c8d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x34c8d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x34c8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34c8dc: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x34c8dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34c8e0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x34c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c8e4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x34c8e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34c8e8: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x34c8e8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34c8ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c8ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c8f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c8f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c8f4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c8f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c8f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c8fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c8fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c900: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c900u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c904: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x34c904u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34c908: 0x46013080  add.s       $f2, $f6, $f1
    ctx->pc = 0x34c908u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x34c90c: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34c90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c910: 0x0  nop
    ctx->pc = 0x34c910u;
    // NOP
    // 0x34c914: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x34C914u;
    {
        const bool branch_taken_0x34c914 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C914u;
        // 0x34c918: 0x46000e06  mov.s       $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c914) {
            ctx->pc = 0x34C958u;
            goto label_34c958;
        }
    }
    ctx->pc = 0x34C91Cu;
    // 0x34c91c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x34c91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c920: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c924: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c928: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c92c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c92cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c930: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c934: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34c934u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c938: 0x44874000  mtc1        $a3, $f8
    ctx->pc = 0x34c938u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34c93c: 0x0  nop
    ctx->pc = 0x34c93cu;
    // NOP
    // 0x34c940: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34c940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c944: 0x0  nop
    ctx->pc = 0x34c944u;
    // NOP
    // 0x34c948: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x34C948u;
    {
        const bool branch_taken_0x34c948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C948u;
        // 0x34c94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c948) {
            ctx->pc = 0x34C99Cu;
            goto label_34c99c;
        }
    }
    ctx->pc = 0x34C950u;
    // 0x34c950: 0x1000030b  b           . + 4 + (0x30B << 2)
    ctx->pc = 0x34C950u;
    {
        const bool branch_taken_0x34c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C950u;
        // 0x34c954: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c950) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34C958u;
label_34c958:
    // 0x34c958: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x34c958u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x34c95c: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x34c95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c960: 0x0  nop
    ctx->pc = 0x34c960u;
    // NOP
    // 0x34c964: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x34C964u;
    {
        const bool branch_taken_0x34c964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C964u;
        // 0x34c968: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c964) {
            ctx->pc = 0x34C99Cu;
            goto label_34c99c;
        }
    }
    ctx->pc = 0x34C96Cu;
    // 0x34c96c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c96cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c970: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34c970u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34c974: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c978: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c97c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c980: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34c980u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c984: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x34c984u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34c988: 0x0  nop
    ctx->pc = 0x34c988u;
    // NOP
    // 0x34c98c: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x34c98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c990: 0x0  nop
    ctx->pc = 0x34c990u;
    // NOP
    // 0x34c994: 0x450102f9  bc1t        . + 4 + (0x2F9 << 2)
    ctx->pc = 0x34C994u;
    {
        const bool branch_taken_0x34c994 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C994u;
        // 0x34c998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c994) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34C99Cu;
label_34c99c:
    // 0x34c99c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x34c99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c9a0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x34c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c9a4: 0x46001706  mov.s       $f28, $f2
    ctx->pc = 0x34c9a4u;
    ctx->f[28] = FPU_MOV_S(ctx->f[2]);
    // 0x34c9a8: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x34c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c9ac: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x34c9acu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x34c9b0: 0x46027882  mul.s       $f2, $f15, $f2
    ctx->pc = 0x34c9b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x34c9b4: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x34c9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x34c9b8: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x34c9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c9bc: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x34c9bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x34c9c0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x34c9c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x34c9c4: 0x46001dc6  mov.s       $f23, $f3
    ctx->pc = 0x34c9c4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[3]);
    // 0x34c9c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34c9c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34c9cc: 0x79430010  lq          $v1, 0x10($t2)
    ctx->pc = 0x34c9ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34c9d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34c9d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34c9d4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34c9d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34c9d8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34c9d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c9dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34c9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c9e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34c9e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34c9e4: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34c9e4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34c9e8: 0x44874000  mtc1        $a3, $f8
    ctx->pc = 0x34c9e8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34c9ec: 0x46011180  add.s       $f6, $f2, $f1
    ctx->pc = 0x34c9ecu;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34c9f0: 0x46033080  add.s       $f2, $f6, $f3
    ctx->pc = 0x34c9f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x34c9f4: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34c9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c9f8: 0x0  nop
    ctx->pc = 0x34c9f8u;
    // NOP
    // 0x34c9fc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34C9FCu;
    {
        const bool branch_taken_0x34c9fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C9FCu;
        // 0x34ca00: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c9fc) {
            ctx->pc = 0x34CA3Cu;
            goto label_34ca3c;
        }
    }
    ctx->pc = 0x34CA04u;
    // 0x34ca04: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34ca04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ca08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34ca08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ca0c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ca0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ca10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ca10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ca14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ca14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ca18: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34ca18u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ca1c: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x34ca1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34ca20: 0x0  nop
    ctx->pc = 0x34ca20u;
    // NOP
    // 0x34ca24: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34ca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ca28: 0x0  nop
    ctx->pc = 0x34ca28u;
    // NOP
    // 0x34ca2c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x34CA2Cu;
    {
        const bool branch_taken_0x34ca2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA2Cu;
        // 0x34ca30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca2c) {
            ctx->pc = 0x34CA80u;
            goto label_34ca80;
        }
    }
    ctx->pc = 0x34CA34u;
    // 0x34ca34: 0x100002d2  b           . + 4 + (0x2D2 << 2)
    ctx->pc = 0x34CA34u;
    {
        const bool branch_taken_0x34ca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA34u;
        // 0x34ca38: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca34) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CA3Cu;
label_34ca3c:
    // 0x34ca3c: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x34ca3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x34ca40: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x34ca40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ca44: 0x0  nop
    ctx->pc = 0x34ca44u;
    // NOP
    // 0x34ca48: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x34CA48u;
    {
        const bool branch_taken_0x34ca48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA48u;
        // 0x34ca4c: 0xc7a20088  lwc1        $f2, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca48) {
            ctx->pc = 0x34CA84u;
            goto label_34ca84;
        }
    }
    ctx->pc = 0x34CA50u;
    // 0x34ca50: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34ca50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34ca54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34ca54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34ca58: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34ca58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ca5c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34ca5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ca60: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34ca60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34ca64: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34ca64u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34ca68: 0x44874000  mtc1        $a3, $f8
    ctx->pc = 0x34ca68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34ca6c: 0x0  nop
    ctx->pc = 0x34ca6cu;
    // NOP
    // 0x34ca70: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x34ca70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ca74: 0x0  nop
    ctx->pc = 0x34ca74u;
    // NOP
    // 0x34ca78: 0x450102c0  bc1t        . + 4 + (0x2C0 << 2)
    ctx->pc = 0x34CA78u;
    {
        const bool branch_taken_0x34ca78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA78u;
        // 0x34ca7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca78) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CA80u;
label_34ca80:
    // 0x34ca80: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x34ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34ca84:
    // 0x34ca84: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x34ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ca88: 0x46001746  mov.s       $f29, $f2
    ctx->pc = 0x34ca88u;
    ctx->f[29] = FPU_MOV_S(ctx->f[2]);
    // 0x34ca8c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x34ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ca90: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x34ca90u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x34ca94: 0x46027882  mul.s       $f2, $f15, $f2
    ctx->pc = 0x34ca94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x34ca98: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x34ca98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x34ca9c: 0x46000e46  mov.s       $f25, $f1
    ctx->pc = 0x34ca9cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[1]);
    // 0x34caa0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x34caa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x34caa4: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x34caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34caa8: 0x79430020  lq          $v1, 0x20($t2)
    ctx->pc = 0x34caa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34caac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34caacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34cab0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34cab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34cab4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34cab4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34cab8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34cab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34cabc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34cabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34cac0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34cac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34cac4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34cac4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34cac8: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x34cac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34cacc: 0x46011180  add.s       $f6, $f2, $f1
    ctx->pc = 0x34caccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34cad0: 0x46033080  add.s       $f2, $f6, $f3
    ctx->pc = 0x34cad0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x34cad4: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cad8: 0x0  nop
    ctx->pc = 0x34cad8u;
    // NOP
    // 0x34cadc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x34CADCu;
    {
        const bool branch_taken_0x34cadc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CADCu;
        // 0x34cae0: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cadc) {
            ctx->pc = 0x34CB20u;
            goto label_34cb20;
        }
    }
    ctx->pc = 0x34CAE4u;
    // 0x34cae4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x34cae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34cae8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34cae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34caec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34caecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34caf0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34caf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34caf4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34caf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34caf8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34caf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34cafc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x34cafcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34cb00: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x34cb00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34cb04: 0x0  nop
    ctx->pc = 0x34cb04u;
    // NOP
    // 0x34cb08: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cb0c: 0x0  nop
    ctx->pc = 0x34cb0cu;
    // NOP
    // 0x34cb10: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x34CB10u;
    {
        const bool branch_taken_0x34cb10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB10u;
        // 0x34cb14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb10) {
            ctx->pc = 0x34CB64u;
            goto label_34cb64;
        }
    }
    ctx->pc = 0x34CB18u;
    // 0x34cb18: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x34CB18u;
    {
        const bool branch_taken_0x34cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB18u;
        // 0x34cb1c: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb18) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CB20u;
label_34cb20:
    // 0x34cb20: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x34cb20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x34cb24: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x34cb24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cb28: 0x0  nop
    ctx->pc = 0x34cb28u;
    // NOP
    // 0x34cb2c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x34CB2Cu;
    {
        const bool branch_taken_0x34cb2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB2Cu;
        // 0x34cb30: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb2c) {
            ctx->pc = 0x34CB64u;
            goto label_34cb64;
        }
    }
    ctx->pc = 0x34CB34u;
    // 0x34cb34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34cb34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34cb38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34cb38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34cb3c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34cb3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34cb40: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34cb40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34cb44: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34cb44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34cb48: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34cb48u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34cb4c: 0x44874000  mtc1        $a3, $f8
    ctx->pc = 0x34cb4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34cb50: 0x0  nop
    ctx->pc = 0x34cb50u;
    // NOP
    // 0x34cb54: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x34cb54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cb58: 0x0  nop
    ctx->pc = 0x34cb58u;
    // NOP
    // 0x34cb5c: 0x45010287  bc1t        . + 4 + (0x287 << 2)
    ctx->pc = 0x34CB5Cu;
    {
        const bool branch_taken_0x34cb5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB5Cu;
        // 0x34cb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb5c) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CB64u;
label_34cb64:
    // 0x34cb64: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x34cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cb68: 0x461db9c2  mul.s       $f7, $f23, $f29
    ctx->pc = 0x34cb68u;
    ctx->f[7] = FPU_MUL_S(ctx->f[23], ctx->f[29]);
    // 0x34cb6c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x34cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cb70: 0x461e5902  mul.s       $f4, $f11, $f30
    ctx->pc = 0x34cb70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[30]);
    // 0x34cb74: 0x46007182  mul.s       $f6, $f14, $f0
    ctx->pc = 0x34cb74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x34cb78: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x34cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cb7c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x34cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cb80: 0x461ca142  mul.s       $f5, $f20, $f28
    ctx->pc = 0x34cb80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x34cb84: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x34cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cb88: 0x46000c46  mov.s       $f17, $f1
    ctx->pc = 0x34cb88u;
    ctx->f[17] = FPU_MOV_S(ctx->f[1]);
    // 0x34cb8c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x34cb8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x34cb90: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x34cb90u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x34cb94: 0x46053a80  add.s       $f10, $f7, $f5
    ctx->pc = 0x34cb94u;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x34cb98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34cb98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34cb9c: 0x460011c6  mov.s       $f7, $f2
    ctx->pc = 0x34cb9cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[2]);
    // 0x34cba0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x34cba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x34cba4: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34cba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34cba8: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cba8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cbac: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cbb0: 0x0  nop
    ctx->pc = 0x34cbb0u;
    // NOP
    // 0x34cbb4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x34CBB4u;
    {
        const bool branch_taken_0x34cbb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBB4u;
        // 0x34cbb8: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cbb4) {
            ctx->pc = 0x34CBE8u;
            goto label_34cbe8;
        }
    }
    ctx->pc = 0x34CBBCu;
    // 0x34cbbc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x34cbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cbc0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x34cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cbc4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x34cbc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x34cbc8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x34cbc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x34cbcc: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cbccu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cbd0: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cbd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cbd4: 0x0  nop
    ctx->pc = 0x34cbd4u;
    // NOP
    // 0x34cbd8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x34CBD8u;
    {
        const bool branch_taken_0x34cbd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBD8u;
        // 0x34cbdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cbd8) {
            ctx->pc = 0x34CC1Cu;
            goto label_34cc1c;
        }
    }
    ctx->pc = 0x34CBE0u;
    // 0x34cbe0: 0x10000267  b           . + 4 + (0x267 << 2)
    ctx->pc = 0x34CBE0u;
    {
        const bool branch_taken_0x34cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBE0u;
        // 0x34cbe4: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cbe0) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CBE8u;
label_34cbe8:
    // 0x34cbe8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34cbe8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34cbec: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cbecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cbf0: 0x0  nop
    ctx->pc = 0x34cbf0u;
    // NOP
    // 0x34cbf4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34CBF4u;
    {
        const bool branch_taken_0x34cbf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBF4u;
        // 0x34cbf8: 0xc7a10048  lwc1        $f1, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cbf4) {
            ctx->pc = 0x34CC1Cu;
            goto label_34cc1c;
        }
    }
    ctx->pc = 0x34CBFCu;
    // 0x34cbfc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x34cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cc00: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x34cc00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x34cc04: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x34cc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x34cc08: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cc08u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cc0c: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cc10: 0x0  nop
    ctx->pc = 0x34cc10u;
    // NOP
    // 0x34cc14: 0x45010259  bc1t        . + 4 + (0x259 << 2)
    ctx->pc = 0x34CC14u;
    {
        const bool branch_taken_0x34cc14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC14u;
        // 0x34cc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc14) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CC1Cu;
label_34cc1c:
    // 0x34cc1c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x34cc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cc20: 0x461fa082  mul.s       $f2, $f20, $f31
    ctx->pc = 0x34cc20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[31]);
    // 0x34cc24: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x34cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cc28: 0x461a58c2  mul.s       $f3, $f11, $f26
    ctx->pc = 0x34cc28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[26]);
    // 0x34cc2c: 0x46017142  mul.s       $f5, $f14, $f1
    ctx->pc = 0x34cc2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x34cc30: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x34cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cc34: 0x461dc102  mul.s       $f4, $f24, $f29
    ctx->pc = 0x34cc34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[24], ctx->f[29]);
    // 0x34cc38: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x34cc38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x34cc3c: 0x46000cc6  mov.s       $f19, $f1
    ctx->pc = 0x34cc3cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[1]);
    // 0x34cc40: 0x46032980  add.s       $f6, $f5, $f3
    ctx->pc = 0x34cc40u;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x34cc44: 0x46018842  mul.s       $f1, $f17, $f1
    ctx->pc = 0x34cc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x34cc48: 0x46022280  add.s       $f10, $f4, $f2
    ctx->pc = 0x34cc48u;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x34cc4c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x34cc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x34cc50: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34cc50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34cc54: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cc54u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cc58: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cc58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cc5c: 0x0  nop
    ctx->pc = 0x34cc5cu;
    // NOP
    // 0x34cc60: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34CC60u;
    {
        const bool branch_taken_0x34cc60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC60u;
        // 0x34cc64: 0xc7a10048  lwc1        $f1, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc60) {
            ctx->pc = 0x34CC90u;
            goto label_34cc90;
        }
    }
    ctx->pc = 0x34CC68u;
    // 0x34cc68: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x34cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cc6c: 0x46130842  mul.s       $f1, $f1, $f19
    ctx->pc = 0x34cc6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x34cc70: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x34cc70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x34cc74: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cc74u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cc78: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cc7c: 0x0  nop
    ctx->pc = 0x34cc7cu;
    // NOP
    // 0x34cc80: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34CC80u;
    {
        const bool branch_taken_0x34cc80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC80u;
        // 0x34cc84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc80) {
            ctx->pc = 0x34CCC0u;
            goto label_34ccc0;
        }
    }
    ctx->pc = 0x34CC88u;
    // 0x34cc88: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x34CC88u;
    {
        const bool branch_taken_0x34cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC88u;
        // 0x34cc8c: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc88) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CC90u;
label_34cc90:
    // 0x34cc90: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34cc90u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34cc94: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cc94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cc98: 0x0  nop
    ctx->pc = 0x34cc98u;
    // NOP
    // 0x34cc9c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34CC9Cu;
    {
        const bool branch_taken_0x34cc9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC9Cu;
        // 0x34cca0: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc9c) {
            ctx->pc = 0x34CCC0u;
            goto label_34ccc0;
        }
    }
    ctx->pc = 0x34CCA4u;
    // 0x34cca4: 0x46130842  mul.s       $f1, $f1, $f19
    ctx->pc = 0x34cca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x34cca8: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x34cca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x34ccac: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34ccacu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ccb0: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34ccb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ccb4: 0x0  nop
    ctx->pc = 0x34ccb4u;
    // NOP
    // 0x34ccb8: 0x45010230  bc1t        . + 4 + (0x230 << 2)
    ctx->pc = 0x34CCB8u;
    {
        const bool branch_taken_0x34ccb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CCB8u;
        // 0x34ccbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ccb8) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CCC0u;
label_34ccc0:
    // 0x34ccc0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x34ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ccc4: 0x461fb882  mul.s       $f2, $f23, $f31
    ctx->pc = 0x34ccc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[31]);
    // 0x34ccc8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x34ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cccc: 0x46197142  mul.s       $f5, $f14, $f25
    ctx->pc = 0x34ccccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[25]);
    // 0x34ccd0: 0x461b58c2  mul.s       $f3, $f11, $f27
    ctx->pc = 0x34ccd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[27]);
    // 0x34ccd4: 0x46000c86  mov.s       $f18, $f1
    ctx->pc = 0x34ccd4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[1]);
    // 0x34ccd8: 0x461cc102  mul.s       $f4, $f24, $f28
    ctx->pc = 0x34ccd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[24], ctx->f[28]);
    // 0x34ccdc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x34ccdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x34cce0: 0x46018842  mul.s       $f1, $f17, $f1
    ctx->pc = 0x34cce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x34cce4: 0x46032980  add.s       $f6, $f5, $f3
    ctx->pc = 0x34cce4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x34cce8: 0x46022280  add.s       $f10, $f4, $f2
    ctx->pc = 0x34cce8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x34ccec: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x34ccecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x34ccf0: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34ccf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34ccf4: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34ccf4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ccf8: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34ccf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ccfc: 0x0  nop
    ctx->pc = 0x34ccfcu;
    // NOP
    // 0x34cd00: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34CD00u;
    {
        const bool branch_taken_0x34cd00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD00u;
        // 0x34cd04: 0xc7a10048  lwc1        $f1, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd00) {
            ctx->pc = 0x34CD30u;
            goto label_34cd30;
        }
    }
    ctx->pc = 0x34CD08u;
    // 0x34cd08: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x34cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cd0c: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x34cd0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x34cd10: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x34cd10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x34cd14: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cd14u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cd18: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cd1c: 0x0  nop
    ctx->pc = 0x34cd1cu;
    // NOP
    // 0x34cd20: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34CD20u;
    {
        const bool branch_taken_0x34cd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD20u;
        // 0x34cd24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd20) {
            ctx->pc = 0x34CD60u;
            goto label_34cd60;
        }
    }
    ctx->pc = 0x34CD28u;
    // 0x34cd28: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x34CD28u;
    {
        const bool branch_taken_0x34cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD28u;
        // 0x34cd2c: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd28) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CD30u;
label_34cd30:
    // 0x34cd30: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34cd30u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34cd34: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cd34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cd38: 0x0  nop
    ctx->pc = 0x34cd38u;
    // NOP
    // 0x34cd3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34CD3Cu;
    {
        const bool branch_taken_0x34cd3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD3Cu;
        // 0x34cd40: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd3c) {
            ctx->pc = 0x34CD60u;
            goto label_34cd60;
        }
    }
    ctx->pc = 0x34CD44u;
    // 0x34cd44: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x34cd44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x34cd48: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x34cd48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x34cd4c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cd4cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cd50: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cd54: 0x0  nop
    ctx->pc = 0x34cd54u;
    // NOP
    // 0x34cd58: 0x45010208  bc1t        . + 4 + (0x208 << 2)
    ctx->pc = 0x34CD58u;
    {
        const bool branch_taken_0x34cd58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD58u;
        // 0x34cd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd58) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CD60u;
label_34cd60:
    // 0x34cd60: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x34cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34cd64: 0x461aa082  mul.s       $f2, $f20, $f26
    ctx->pc = 0x34cd64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
    // 0x34cd68: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x34cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cd6c: 0x461f58c2  mul.s       $f3, $f11, $f31
    ctx->pc = 0x34cd6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[31]);
    // 0x34cd70: 0x46047942  mul.s       $f5, $f15, $f4
    ctx->pc = 0x34cd70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x34cd74: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x34cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cd78: 0x461bb902  mul.s       $f4, $f23, $f27
    ctx->pc = 0x34cd78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[27]);
    // 0x34cd7c: 0x46000c06  mov.s       $f16, $f1
    ctx->pc = 0x34cd7cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
    // 0x34cd80: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x34cd80u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x34cd84: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x34cd84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x34cd88: 0x46032980  add.s       $f6, $f5, $f3
    ctx->pc = 0x34cd88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x34cd8c: 0x46022280  add.s       $f10, $f4, $f2
    ctx->pc = 0x34cd8cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x34cd90: 0x46008802  mul.s       $f0, $f17, $f0
    ctx->pc = 0x34cd90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
    // 0x34cd94: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34cd94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34cd98: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cd98u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cd9c: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cd9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cda0: 0x0  nop
    ctx->pc = 0x34cda0u;
    // NOP
    // 0x34cda4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34CDA4u;
    {
        const bool branch_taken_0x34cda4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDA4u;
        // 0x34cda8: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cda4) {
            ctx->pc = 0x34CDD4u;
            goto label_34cdd4;
        }
    }
    ctx->pc = 0x34CDACu;
    // 0x34cdac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x34cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cdb0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x34cdb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x34cdb4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x34cdb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x34cdb8: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cdb8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cdbc: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cdbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cdc0: 0x0  nop
    ctx->pc = 0x34cdc0u;
    // NOP
    // 0x34cdc4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34CDC4u;
    {
        const bool branch_taken_0x34cdc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDC4u;
        // 0x34cdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cdc4) {
            ctx->pc = 0x34CE04u;
            goto label_34ce04;
        }
    }
    ctx->pc = 0x34CDCCu;
    // 0x34cdcc: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x34CDCCu;
    {
        const bool branch_taken_0x34cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDCCu;
        // 0x34cdd0: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cdcc) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CDD4u;
label_34cdd4:
    // 0x34cdd4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34cdd4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34cdd8: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cdd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cddc: 0x0  nop
    ctx->pc = 0x34cddcu;
    // NOP
    // 0x34cde0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34CDE0u;
    {
        const bool branch_taken_0x34cde0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDE0u;
        // 0x34cde4: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cde0) {
            ctx->pc = 0x34CE04u;
            goto label_34ce04;
        }
    }
    ctx->pc = 0x34CDE8u;
    // 0x34cde8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x34cde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x34cdec: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x34cdecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x34cdf0: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cdf0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cdf4: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cdf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cdf8: 0x0  nop
    ctx->pc = 0x34cdf8u;
    // NOP
    // 0x34cdfc: 0x450101df  bc1t        . + 4 + (0x1DF << 2)
    ctx->pc = 0x34CDFCu;
    {
        const bool branch_taken_0x34cdfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDFCu;
        // 0x34ce00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cdfc) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CE04u;
label_34ce04:
    // 0x34ce04: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x34ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ce08: 0x461c5882  mul.s       $f2, $f11, $f28
    ctx->pc = 0x34ce08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[28]);
    // 0x34ce0c: 0x461bc102  mul.s       $f4, $f24, $f27
    ctx->pc = 0x34ce0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[24], ctx->f[27]);
    // 0x34ce10: 0x46007942  mul.s       $f5, $f15, $f0
    ctx->pc = 0x34ce10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x34ce14: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x34ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ce18: 0x461ea042  mul.s       $f1, $f20, $f30
    ctx->pc = 0x34ce18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[30]);
    // 0x34ce1c: 0x460d80c2  mul.s       $f3, $f16, $f13
    ctx->pc = 0x34ce1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[13]);
    // 0x34ce20: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x34ce20u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x34ce24: 0x46022980  add.s       $f6, $f5, $f2
    ctx->pc = 0x34ce24u;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x34ce28: 0x46012280  add.s       $f10, $f4, $f1
    ctx->pc = 0x34ce28u;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x34ce2c: 0x46008802  mul.s       $f0, $f17, $f0
    ctx->pc = 0x34ce2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
    // 0x34ce30: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34ce30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34ce34: 0x46001a01  sub.s       $f8, $f3, $f0
    ctx->pc = 0x34ce34u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x34ce38: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34ce38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ce3c: 0x0  nop
    ctx->pc = 0x34ce3cu;
    // NOP
    // 0x34ce40: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34CE40u;
    {
        const bool branch_taken_0x34ce40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE40u;
        // 0x34ce44: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce40) {
            ctx->pc = 0x34CE70u;
            goto label_34ce70;
        }
    }
    ctx->pc = 0x34CE48u;
    // 0x34ce48: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x34ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ce4c: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x34ce4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x34ce50: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x34ce50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x34ce54: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34ce54u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ce58: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34ce58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ce5c: 0x0  nop
    ctx->pc = 0x34ce5cu;
    // NOP
    // 0x34ce60: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34CE60u;
    {
        const bool branch_taken_0x34ce60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE60u;
        // 0x34ce64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce60) {
            ctx->pc = 0x34CEA0u;
            goto label_34cea0;
        }
    }
    ctx->pc = 0x34CE68u;
    // 0x34ce68: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x34CE68u;
    {
        const bool branch_taken_0x34ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE68u;
        // 0x34ce6c: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce68) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CE70u;
label_34ce70:
    // 0x34ce70: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34ce70u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34ce74: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34ce74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ce78: 0x0  nop
    ctx->pc = 0x34ce78u;
    // NOP
    // 0x34ce7c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34CE7Cu;
    {
        const bool branch_taken_0x34ce7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE7Cu;
        // 0x34ce80: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce7c) {
            ctx->pc = 0x34CEA0u;
            goto label_34cea0;
        }
    }
    ctx->pc = 0x34CE84u;
    // 0x34ce84: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x34ce84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x34ce88: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x34ce88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x34ce8c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34ce8cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ce90: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34ce90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ce94: 0x0  nop
    ctx->pc = 0x34ce94u;
    // NOP
    // 0x34ce98: 0x450101b8  bc1t        . + 4 + (0x1B8 << 2)
    ctx->pc = 0x34CE98u;
    {
        const bool branch_taken_0x34ce98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE98u;
        // 0x34ce9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ce98) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CEA0u;
label_34cea0:
    // 0x34cea0: 0x46197842  mul.s       $f1, $f15, $f25
    ctx->pc = 0x34cea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[25]);
    // 0x34cea4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x34cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cea8: 0x461d5902  mul.s       $f4, $f11, $f29
    ctx->pc = 0x34cea8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[29]);
    // 0x34ceac: 0x461eb882  mul.s       $f2, $f23, $f30
    ctx->pc = 0x34ceacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[30]);
    // 0x34ceb0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x34ceb0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x34ceb4: 0x461ac0c2  mul.s       $f3, $f24, $f26
    ctx->pc = 0x34ceb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[26]);
    // 0x34ceb8: 0x46040980  add.s       $f6, $f1, $f4
    ctx->pc = 0x34ceb8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x34cebc: 0x46008802  mul.s       $f0, $f17, $f0
    ctx->pc = 0x34cebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
    // 0x34cec0: 0x46021a80  add.s       $f10, $f3, $f2
    ctx->pc = 0x34cec0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x34cec4: 0x460c8042  mul.s       $f1, $f16, $f12
    ctx->pc = 0x34cec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[12]);
    // 0x34cec8: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34cec8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34cecc: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34ceccu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ced0: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34ced0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ced4: 0x0  nop
    ctx->pc = 0x34ced4u;
    // NOP
    // 0x34ced8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34CED8u;
    {
        const bool branch_taken_0x34ced8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CED8u;
        // 0x34cedc: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ced8) {
            ctx->pc = 0x34CF08u;
            goto label_34cf08;
        }
    }
    ctx->pc = 0x34CEE0u;
    // 0x34cee0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x34cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cee4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x34cee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x34cee8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x34cee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x34ceec: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34ceecu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cef0: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cef4: 0x0  nop
    ctx->pc = 0x34cef4u;
    // NOP
    // 0x34cef8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34CEF8u;
    {
        const bool branch_taken_0x34cef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CEF8u;
        // 0x34cefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cef8) {
            ctx->pc = 0x34CF38u;
            goto label_34cf38;
        }
    }
    ctx->pc = 0x34CF00u;
    // 0x34cf00: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x34CF00u;
    {
        const bool branch_taken_0x34cf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF00u;
        // 0x34cf04: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf00) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CF08u;
label_34cf08:
    // 0x34cf08: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34cf08u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34cf0c: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cf0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cf10: 0x0  nop
    ctx->pc = 0x34cf10u;
    // NOP
    // 0x34cf14: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34CF14u;
    {
        const bool branch_taken_0x34cf14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF14u;
        // 0x34cf18: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf14) {
            ctx->pc = 0x34CF38u;
            goto label_34cf38;
        }
    }
    ctx->pc = 0x34CF1Cu;
    // 0x34cf1c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x34cf1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x34cf20: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x34cf20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x34cf24: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cf24u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cf28: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cf2c: 0x0  nop
    ctx->pc = 0x34cf2cu;
    // NOP
    // 0x34cf30: 0x45010192  bc1t        . + 4 + (0x192 << 2)
    ctx->pc = 0x34CF30u;
    {
        const bool branch_taken_0x34cf30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF30u;
        // 0x34cf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf30) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CF38u;
label_34cf38:
    // 0x34cf38: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x34cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34cf3c: 0x461e7882  mul.s       $f2, $f15, $f30
    ctx->pc = 0x34cf3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[30]);
    // 0x34cf40: 0x461f7002  mul.s       $f0, $f14, $f31
    ctx->pc = 0x34cf40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[31]);
    // 0x34cf44: 0x4604a042  mul.s       $f1, $f20, $f4
    ctx->pc = 0x34cf44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x34cf48: 0x4619b8c2  mul.s       $f3, $f23, $f25
    ctx->pc = 0x34cf48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x34cf4c: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x34cf4cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34cf50: 0x4609b102  mul.s       $f4, $f22, $f9
    ctx->pc = 0x34cf50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[9]);
    // 0x34cf54: 0x46011a80  add.s       $f10, $f3, $f1
    ctx->pc = 0x34cf54u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34cf58: 0x46158002  mul.s       $f0, $f16, $f21
    ctx->pc = 0x34cf58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[21]);
    // 0x34cf5c: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34cf5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34cf60: 0x46002201  sub.s       $f8, $f4, $f0
    ctx->pc = 0x34cf60u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x34cf64: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cf68: 0x0  nop
    ctx->pc = 0x34cf68u;
    // NOP
    // 0x34cf6c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34CF6Cu;
    {
        const bool branch_taken_0x34cf6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF6Cu;
        // 0x34cf70: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf6c) {
            ctx->pc = 0x34CF9Cu;
            goto label_34cf9c;
        }
    }
    ctx->pc = 0x34CF74u;
    // 0x34cf74: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x34cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cf78: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x34cf78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x34cf7c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34cf7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x34cf80: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cf80u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cf84: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cf84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cf88: 0x0  nop
    ctx->pc = 0x34cf88u;
    // NOP
    // 0x34cf8c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34CF8Cu;
    {
        const bool branch_taken_0x34cf8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF8Cu;
        // 0x34cf90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf8c) {
            ctx->pc = 0x34CFCCu;
            goto label_34cfcc;
        }
    }
    ctx->pc = 0x34CF94u;
    // 0x34cf94: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x34CF94u;
    {
        const bool branch_taken_0x34cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CF94u;
        // 0x34cf98: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cf94) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34CF9Cu;
label_34cf9c:
    // 0x34cf9c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34cf9cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34cfa0: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cfa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cfa4: 0x0  nop
    ctx->pc = 0x34cfa4u;
    // NOP
    // 0x34cfa8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34CFA8u;
    {
        const bool branch_taken_0x34cfa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFA8u;
        // 0x34cfac: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfa8) {
            ctx->pc = 0x34CFCCu;
            goto label_34cfcc;
        }
    }
    ctx->pc = 0x34CFB0u;
    // 0x34cfb0: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x34cfb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x34cfb4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34cfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x34cfb8: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34cfb8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34cfbc: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34cfbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cfc0: 0x0  nop
    ctx->pc = 0x34cfc0u;
    // NOP
    // 0x34cfc4: 0x4501016d  bc1t        . + 4 + (0x16D << 2)
    ctx->pc = 0x34CFC4u;
    {
        const bool branch_taken_0x34cfc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFC4u;
        // 0x34cfc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfc4) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34CFCCu;
label_34cfcc:
    // 0x34cfcc: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x34cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34cfd0: 0x461a7882  mul.s       $f2, $f15, $f26
    ctx->pc = 0x34cfd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[26]);
    // 0x34cfd4: 0x461c7002  mul.s       $f0, $f14, $f28
    ctx->pc = 0x34cfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[28]);
    // 0x34cfd8: 0x4604a042  mul.s       $f1, $f20, $f4
    ctx->pc = 0x34cfd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x34cfdc: 0x4619c0c2  mul.s       $f3, $f24, $f25
    ctx->pc = 0x34cfdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
    // 0x34cfe0: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x34cfe0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34cfe4: 0x4607b102  mul.s       $f4, $f22, $f7
    ctx->pc = 0x34cfe4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[7]);
    // 0x34cfe8: 0x46011a80  add.s       $f10, $f3, $f1
    ctx->pc = 0x34cfe8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34cfec: 0x46138002  mul.s       $f0, $f16, $f19
    ctx->pc = 0x34cfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[19]);
    // 0x34cff0: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34cff0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34cff4: 0x46002201  sub.s       $f8, $f4, $f0
    ctx->pc = 0x34cff4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x34cff8: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34cff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cffc: 0x0  nop
    ctx->pc = 0x34cffcu;
    // NOP
    // 0x34d000: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34D000u;
    {
        const bool branch_taken_0x34d000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D000u;
        // 0x34d004: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d000) {
            ctx->pc = 0x34D030u;
            goto label_34d030;
        }
    }
    ctx->pc = 0x34D008u;
    // 0x34d008: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x34d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d00c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x34d00cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x34d010: 0x46130002  mul.s       $f0, $f0, $f19
    ctx->pc = 0x34d010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x34d014: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34d014u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34d018: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d01c: 0x0  nop
    ctx->pc = 0x34d01cu;
    // NOP
    // 0x34d020: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34D020u;
    {
        const bool branch_taken_0x34d020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D020u;
        // 0x34d024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d020) {
            ctx->pc = 0x34D060u;
            goto label_34d060;
        }
    }
    ctx->pc = 0x34D028u;
    // 0x34d028: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x34D028u;
    {
        const bool branch_taken_0x34d028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D028u;
        // 0x34d02c: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d028) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34D030u;
label_34d030:
    // 0x34d030: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34d030u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34d034: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34d034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d038: 0x0  nop
    ctx->pc = 0x34d038u;
    // NOP
    // 0x34d03c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34D03Cu;
    {
        const bool branch_taken_0x34d03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D03Cu;
        // 0x34d040: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d03c) {
            ctx->pc = 0x34D060u;
            goto label_34d060;
        }
    }
    ctx->pc = 0x34D044u;
    // 0x34d044: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x34d044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x34d048: 0x46130002  mul.s       $f0, $f0, $f19
    ctx->pc = 0x34d048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x34d04c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34d04cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34d050: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34d050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d054: 0x0  nop
    ctx->pc = 0x34d054u;
    // NOP
    // 0x34d058: 0x45010148  bc1t        . + 4 + (0x148 << 2)
    ctx->pc = 0x34D058u;
    {
        const bool branch_taken_0x34d058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D058u;
        // 0x34d05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d058) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34D060u;
label_34d060:
    // 0x34d060: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x34d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d064: 0x461b7882  mul.s       $f2, $f15, $f27
    ctx->pc = 0x34d064u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[27]);
    // 0x34d068: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x34d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34d06c: 0x461d7002  mul.s       $f0, $f14, $f29
    ctx->pc = 0x34d06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[29]);
    // 0x34d070: 0x4601c0c2  mul.s       $f3, $f24, $f1
    ctx->pc = 0x34d070u;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x34d074: 0x4604b842  mul.s       $f1, $f23, $f4
    ctx->pc = 0x34d074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[4]);
    // 0x34d078: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x34d078u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34d07c: 0x4605b102  mul.s       $f4, $f22, $f5
    ctx->pc = 0x34d07cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[5]);
    // 0x34d080: 0x46011a80  add.s       $f10, $f3, $f1
    ctx->pc = 0x34d080u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34d084: 0x46128002  mul.s       $f0, $f16, $f18
    ctx->pc = 0x34d084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[18]);
    // 0x34d088: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34d088u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34d08c: 0x46002201  sub.s       $f8, $f4, $f0
    ctx->pc = 0x34d08cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x34d090: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d094: 0x0  nop
    ctx->pc = 0x34d094u;
    // NOP
    // 0x34d098: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34D098u;
    {
        const bool branch_taken_0x34d098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D098u;
        // 0x34d09c: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d098) {
            ctx->pc = 0x34D0C8u;
            goto label_34d0c8;
        }
    }
    ctx->pc = 0x34D0A0u;
    // 0x34d0a0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x34d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d0a4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x34d0a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x34d0a8: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x34d0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x34d0ac: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34d0acu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34d0b0: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d0b4: 0x0  nop
    ctx->pc = 0x34d0b4u;
    // NOP
    // 0x34d0b8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x34D0B8u;
    {
        const bool branch_taken_0x34d0b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D0B8u;
        // 0x34d0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d0b8) {
            ctx->pc = 0x34D0F8u;
            goto label_34d0f8;
        }
    }
    ctx->pc = 0x34D0C0u;
    // 0x34d0c0: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x34D0C0u;
    {
        const bool branch_taken_0x34d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D0C0u;
        // 0x34d0c4: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d0c0) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34D0C8u;
label_34d0c8:
    // 0x34d0c8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x34d0c8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x34d0cc: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34d0ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d0d0: 0x0  nop
    ctx->pc = 0x34d0d0u;
    // NOP
    // 0x34d0d4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34D0D4u;
    {
        const bool branch_taken_0x34d0d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D0D4u;
        // 0x34d0d8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d0d4) {
            ctx->pc = 0x34D0F8u;
            goto label_34d0f8;
        }
    }
    ctx->pc = 0x34D0DCu;
    // 0x34d0dc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x34d0dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x34d0e0: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x34d0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x34d0e4: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x34d0e4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34d0e8: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x34d0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d0ec: 0x0  nop
    ctx->pc = 0x34d0ecu;
    // NOP
    // 0x34d0f0: 0x45010122  bc1t        . + 4 + (0x122 << 2)
    ctx->pc = 0x34D0F0u;
    {
        const bool branch_taken_0x34d0f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D0F0u;
        // 0x34d0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d0f0) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34D0F8u;
label_34d0f8:
    // 0x34d0f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34d0f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d0fc: 0x79830010  lq          $v1, 0x10($t4)
    ctx->pc = 0x34d0fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x34d100: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d104: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34d104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34d108: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34d108u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34d10c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34d10cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d110: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x34d110u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34d114: 0x79860020  lq          $a2, 0x20($t4)
    ctx->pc = 0x34d114u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x34d118: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d11c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34d11cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d120: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d124: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d128: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d12c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34d12cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d130: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d134: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34d134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34d138: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d13c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d13cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d140: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d144: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34d144u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d148: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x34d148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d14c: 0x44875800  mtc1        $a3, $f11
    ctx->pc = 0x34d14cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x34d150: 0x46006705  abs.s       $f28, $f12
    ctx->pc = 0x34d150u;
    ctx->f[28] = FPU_ABS_S(ctx->f[12]);
    // 0x34d154: 0xc7b7005c  lwc1        $f23, 0x5C($sp)
    ctx->pc = 0x34d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34d158: 0x46005ec5  abs.s       $f27, $f11
    ctx->pc = 0x34d158u;
    ctx->f[27] = FPU_ABS_S(ctx->f[11]);
    // 0x34d15c: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x34d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x34d160: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x34d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34d164: 0x460bb882  mul.s       $f2, $f23, $f11
    ctx->pc = 0x34d164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[11]);
    // 0x34d168: 0xc7ba006c  lwc1        $f26, 0x6C($sp)
    ctx->pc = 0x34d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x34d16c: 0x460cc842  mul.s       $f1, $f25, $f12
    ctx->pc = 0x34d16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[12]);
    // 0x34d170: 0x460bc002  mul.s       $f0, $f24, $f11
    ctx->pc = 0x34d170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[11]);
    // 0x34d174: 0xc7b10064  lwc1        $f17, 0x64($sp)
    ctx->pc = 0x34d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x34d178: 0x460cd0c2  mul.s       $f3, $f26, $f12
    ctx->pc = 0x34d178u;
    ctx->f[3] = FPU_MUL_S(ctx->f[26], ctx->f[12]);
    // 0x34d17c: 0xc7b30070  lwc1        $f19, 0x70($sp)
    ctx->pc = 0x34d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x34d180: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x34d180u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x34d184: 0xc5150004  lwc1        $f21, 0x4($t0)
    ctx->pc = 0x34d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34d188: 0xc5140000  lwc1        $f20, 0x0($t0)
    ctx->pc = 0x34d188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d18c: 0x460b8842  mul.s       $f1, $f17, $f11
    ctx->pc = 0x34d18cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[11]);
    // 0x34d190: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x34d190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34d194: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x34d194u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x34d198: 0x460c98c2  mul.s       $f3, $f19, $f12
    ctx->pc = 0x34d198u;
    ctx->f[3] = FPU_MUL_S(ctx->f[19], ctx->f[12]);
    // 0x34d19c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34d19cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34d1a0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34d1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34d1a4: 0xc50d0008  lwc1        $f13, 0x8($t0)
    ctx->pc = 0x34d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34d1a8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x34d1a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x34d1ac: 0xc5700004  lwc1        $f16, 0x4($t3)
    ctx->pc = 0x34d1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x34d1b0: 0xc5720008  lwc1        $f18, 0x8($t3)
    ctx->pc = 0x34d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x34d1b4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34d1b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34d1b8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34d1b8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34d1bc: 0x461b8102  mul.s       $f4, $f16, $f27
    ctx->pc = 0x34d1bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[27]);
    // 0x34d1c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34d1c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34d1c4: 0x79840000  lq          $a0, 0x0($t4)
    ctx->pc = 0x34d1c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x34d1c8: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x34d1c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x34d1cc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34d1ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34d1d0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34d1d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34d1d4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d1d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d1dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d1e0: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34d1e0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d1e4: 0x461c90c2  mul.s       $f3, $f18, $f28
    ctx->pc = 0x34d1e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[18], ctx->f[28]);
    // 0x34d1e8: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x34d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x34d1ec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x34d1ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d1f0: 0x46011280  add.s       $f10, $f2, $f1
    ctx->pc = 0x34d1f0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34d1f4: 0x46000205  abs.s       $f8, $f0
    ctx->pc = 0x34d1f4u;
    ctx->f[8] = FPU_ABS_S(ctx->f[0]);
    // 0x34d1f8: 0x46032180  add.s       $f6, $f4, $f3
    ctx->pc = 0x34d1f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x34d1fc: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x34d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x34d200: 0xe7ac00c4  swc1        $f12, 0xC4($sp)
    ctx->pc = 0x34d200u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34d204: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34d204u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34d208: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d20c: 0x0  nop
    ctx->pc = 0x34d20cu;
    // NOP
    // 0x34d210: 0x450100d9  bc1t        . + 4 + (0xD9 << 2)
    ctx->pc = 0x34D210u;
    {
        const bool branch_taken_0x34d210 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D210u;
        // 0x34d214: 0xe7ab00c8  swc1        $f11, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d210) {
            ctx->pc = 0x34D578u;
            goto label_34d578;
        }
    }
    ctx->pc = 0x34D218u;
    // 0x34d218: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d21c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34d21cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34d220: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d224: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d228: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d22c: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34d22cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d230: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x34d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x34d234: 0x44874800  mtc1        $a3, $f9
    ctx->pc = 0x34d234u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x34d238: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34d238u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d23c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34d23cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34d240: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d244: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d248: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d24c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34d24cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d250: 0xc7af0054  lwc1        $f15, 0x54($sp)
    ctx->pc = 0x34d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x34d254: 0x460b70c2  mul.s       $f3, $f14, $f11
    ctx->pc = 0x34d254u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[11]);
    // 0x34d258: 0x4609c882  mul.s       $f2, $f25, $f9
    ctx->pc = 0x34d258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[9]);
    // 0x34d25c: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x34d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34d260: 0x4609d042  mul.s       $f1, $f26, $f9
    ctx->pc = 0x34d260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[9]);
    // 0x34d264: 0xc5670000  lwc1        $f7, 0x0($t3)
    ctx->pc = 0x34d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x34d268: 0x460b7902  mul.s       $f4, $f15, $f11
    ctx->pc = 0x34d268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[11]);
    // 0x34d26c: 0x46004d85  abs.s       $f22, $f9
    ctx->pc = 0x34d26cu;
    ctx->f[22] = FPU_ABS_S(ctx->f[9]);
    // 0x34d270: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34d270u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d274: 0x0  nop
    ctx->pc = 0x34d274u;
    // NOP
    // 0x34d278: 0x46000205  abs.s       $f8, $f0
    ctx->pc = 0x34d278u;
    ctx->f[8] = FPU_ABS_S(ctx->f[0]);
    // 0x34d27c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x34d27cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x34d280: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x34d280u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x34d284: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x34d284u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x34d288: 0x460b28c2  mul.s       $f3, $f5, $f11
    ctx->pc = 0x34d288u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x34d28c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34d28cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34d290: 0x46099802  mul.s       $f0, $f19, $f9
    ctx->pc = 0x34d290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[19], ctx->f[9]);
    // 0x34d294: 0xe7a900c0  swc1        $f9, 0xC0($sp)
    ctx->pc = 0x34d294u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x34d298: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x34d298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x34d29c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x34d29cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x34d2a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x34d2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34d2a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34d2a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34d2a8: 0x461b38c2  mul.s       $f3, $f7, $f27
    ctx->pc = 0x34d2a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[27]);
    // 0x34d2ac: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34d2acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34d2b0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x34d2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x34d2b4: 0x46169042  mul.s       $f1, $f18, $f22
    ctx->pc = 0x34d2b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[22]);
    // 0x34d2b8: 0x46001280  add.s       $f10, $f2, $f0
    ctx->pc = 0x34d2b8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34d2bc: 0x46030980  add.s       $f6, $f1, $f3
    ctx->pc = 0x34d2bcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34d2c0: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34d2c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34d2c4: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d2c8: 0x0  nop
    ctx->pc = 0x34d2c8u;
    // NOP
    // 0x34d2cc: 0x450300ab  bc1tl       . + 4 + (0xAB << 2)
    ctx->pc = 0x34D2CCu;
    {
        const bool branch_taken_0x34d2cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d2cc) {
            ctx->pc = 0x34D2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D2CCu;
            // 0x34d2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34D2D4u;
    // 0x34d2d4: 0x4609b8c2  mul.s       $f3, $f23, $f9
    ctx->pc = 0x34d2d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[9]);
    // 0x34d2d8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x34d2d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34d2dc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34d2dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34d2e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d2e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d2e4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d2e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d2e8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d2ec: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34d2ecu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d2f0: 0x460c7082  mul.s       $f2, $f14, $f12
    ctx->pc = 0x34d2f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x34d2f4: 0x4609c102  mul.s       $f4, $f24, $f9
    ctx->pc = 0x34d2f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[24], ctx->f[9]);
    // 0x34d2f8: 0x460c7802  mul.s       $f0, $f15, $f12
    ctx->pc = 0x34d2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x34d2fc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x34d2fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d300: 0x0  nop
    ctx->pc = 0x34d300u;
    // NOP
    // 0x34d304: 0x46000a05  abs.s       $f8, $f1
    ctx->pc = 0x34d304u;
    ctx->f[8] = FPU_ABS_S(ctx->f[1]);
    // 0x34d308: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x34d308u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x34d30c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x34d30cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x34d310: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x34d310u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x34d314: 0x460988c2  mul.s       $f3, $f17, $f9
    ctx->pc = 0x34d314u;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[9]);
    // 0x34d318: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34d318u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34d31c: 0x460c2842  mul.s       $f1, $f5, $f12
    ctx->pc = 0x34d31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x34d320: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x34d320u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x34d324: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34d324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34d328: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34d328u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34d32c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34d32cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34d330: 0x461c3902  mul.s       $f4, $f7, $f28
    ctx->pc = 0x34d330u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[28]);
    // 0x34d334: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34d334u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34d338: 0x461680c2  mul.s       $f3, $f16, $f22
    ctx->pc = 0x34d338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[22]);
    // 0x34d33c: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x34d33cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x34d340: 0x46032180  add.s       $f6, $f4, $f3
    ctx->pc = 0x34d340u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x34d344: 0x46011280  add.s       $f10, $f2, $f1
    ctx->pc = 0x34d344u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34d348: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34d348u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34d34c: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d350: 0x0  nop
    ctx->pc = 0x34d350u;
    // NOP
    // 0x34d354: 0x45030089  bc1tl       . + 4 + (0x89 << 2)
    ctx->pc = 0x34D354u;
    {
        const bool branch_taken_0x34d354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d354) {
            ctx->pc = 0x34D358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D354u;
            // 0x34d358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34D35Cu;
    // 0x34d35c: 0x79440010  lq          $a0, 0x10($t2)
    ctx->pc = 0x34d35cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x34d360: 0x79460020  lq          $a2, 0x20($t2)
    ctx->pc = 0x34d360u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x34d364: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d368: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34d368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34d36c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d36cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d370: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d374: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d378: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34d378u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d37c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d37cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d380: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34d380u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34d384: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d388: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d38c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d38cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d390: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34d390u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d394: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34d394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d398: 0x44875800  mtc1        $a3, $f11
    ctx->pc = 0x34d398u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x34d39c: 0x46006705  abs.s       $f28, $f12
    ctx->pc = 0x34d39cu;
    ctx->f[28] = FPU_ABS_S(ctx->f[12]);
    // 0x34d3a0: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x34d3a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x34d3a4: 0x460c28c2  mul.s       $f3, $f5, $f12
    ctx->pc = 0x34d3a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x34d3a8: 0x460b7882  mul.s       $f2, $f15, $f11
    ctx->pc = 0x34d3a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[11]);
    // 0x34d3ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34d3acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d3b0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34d3b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34d3b4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d3b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d3b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d3b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d3bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d3bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d3c0: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34d3c0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d3c4: 0x460bc042  mul.s       $f1, $f24, $f11
    ctx->pc = 0x34d3c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[11]);
    // 0x34d3c8: 0x46005ec5  abs.s       $f27, $f11
    ctx->pc = 0x34d3c8u;
    ctx->f[27] = FPU_ABS_S(ctx->f[11]);
    // 0x34d3cc: 0x460c8902  mul.s       $f4, $f17, $f12
    ctx->pc = 0x34d3ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[17], ctx->f[12]);
    // 0x34d3d0: 0xe7ac00d4  swc1        $f12, 0xD4($sp)
    ctx->pc = 0x34d3d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x34d3d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x34d3d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d3d8: 0x0  nop
    ctx->pc = 0x34d3d8u;
    // NOP
    // 0x34d3dc: 0x46000205  abs.s       $f8, $f0
    ctx->pc = 0x34d3dcu;
    ctx->f[8] = FPU_ABS_S(ctx->f[0]);
    // 0x34d3e0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x34d3e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x34d3e4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x34d3e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x34d3e8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x34d3e8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x34d3ec: 0x460c98c2  mul.s       $f3, $f19, $f12
    ctx->pc = 0x34d3ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[19], ctx->f[12]);
    // 0x34d3f0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34d3f0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34d3f4: 0x460bd002  mul.s       $f0, $f26, $f11
    ctx->pc = 0x34d3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[11]);
    // 0x34d3f8: 0xe7ab00d8  swc1        $f11, 0xD8($sp)
    ctx->pc = 0x34d3f8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x34d3fc: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x34d3fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x34d400: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x34d400u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x34d404: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x34d404u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34d408: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34d408u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34d40c: 0x461ba8c2  mul.s       $f3, $f21, $f27
    ctx->pc = 0x34d40cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[27]);
    // 0x34d410: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34d410u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34d414: 0x46009002  mul.s       $f0, $f18, $f0
    ctx->pc = 0x34d414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x34d418: 0x461c6842  mul.s       $f1, $f13, $f28
    ctx->pc = 0x34d418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[28]);
    // 0x34d41c: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x34d41cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34d420: 0x46011a80  add.s       $f10, $f3, $f1
    ctx->pc = 0x34d420u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34d424: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34d424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34d428: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d42c: 0x0  nop
    ctx->pc = 0x34d42cu;
    // NOP
    // 0x34d430: 0x45030052  bc1tl       . + 4 + (0x52 << 2)
    ctx->pc = 0x34D430u;
    {
        const bool branch_taken_0x34d430 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d430) {
            ctx->pc = 0x34D434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D430u;
            // 0x34d434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34D438u;
    // 0x34d438: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d43c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34d43cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d440: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d444: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d448: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d44c: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x34d44cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d450: 0x460b70c2  mul.s       $f3, $f14, $f11
    ctx->pc = 0x34d450u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[11]);
    // 0x34d454: 0x44874800  mtc1        $a3, $f9
    ctx->pc = 0x34d454u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x34d458: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34d458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34d45c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34d45cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34d460: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d464: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d468: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d46c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34d46cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d470: 0x460bb902  mul.s       $f4, $f23, $f11
    ctx->pc = 0x34d470u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[11]);
    // 0x34d474: 0x46004d85  abs.s       $f22, $f9
    ctx->pc = 0x34d474u;
    ctx->f[22] = FPU_ABS_S(ctx->f[9]);
    // 0x34d478: 0x46092842  mul.s       $f1, $f5, $f9
    ctx->pc = 0x34d478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x34d47c: 0xe7a900d0  swc1        $f9, 0xD0($sp)
    ctx->pc = 0x34d47cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x34d480: 0x46098882  mul.s       $f2, $f17, $f9
    ctx->pc = 0x34d480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[17], ctx->f[9]);
    // 0x34d484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d488: 0x0  nop
    ctx->pc = 0x34d488u;
    // NOP
    // 0x34d48c: 0x46000205  abs.s       $f8, $f0
    ctx->pc = 0x34d48cu;
    ctx->f[8] = FPU_ABS_S(ctx->f[0]);
    // 0x34d490: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34d490u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34d494: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x34d494u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x34d498: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34d498u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34d49c: 0x460bc8c2  mul.s       $f3, $f25, $f11
    ctx->pc = 0x34d49cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[25], ctx->f[11]);
    // 0x34d4a0: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x34d4a0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x34d4a4: 0x46099802  mul.s       $f0, $f19, $f9
    ctx->pc = 0x34d4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[19], ctx->f[9]);
    // 0x34d4a8: 0x46028082  mul.s       $f2, $f16, $f2
    ctx->pc = 0x34d4a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x34d4ac: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x34d4acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x34d4b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x34d4b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34d4b4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34d4b4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34d4b8: 0x461668c2  mul.s       $f3, $f13, $f22
    ctx->pc = 0x34d4b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x34d4bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34d4bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34d4c0: 0x461ba082  mul.s       $f2, $f20, $f27
    ctx->pc = 0x34d4c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
    // 0x34d4c4: 0x46009002  mul.s       $f0, $f18, $f0
    ctx->pc = 0x34d4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x34d4c8: 0x46021a80  add.s       $f10, $f3, $f2
    ctx->pc = 0x34d4c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x34d4cc: 0x46000980  add.s       $f6, $f1, $f0
    ctx->pc = 0x34d4ccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34d4d0: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34d4d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34d4d4: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d4d8: 0x0  nop
    ctx->pc = 0x34d4d8u;
    // NOP
    // 0x34d4dc: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x34D4DCu;
    {
        const bool branch_taken_0x34d4dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4DCu;
        // 0x34d4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4dc) {
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34D4E4u;
    // 0x34d4e4: 0x46097902  mul.s       $f4, $f15, $f9
    ctx->pc = 0x34d4e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[9]);
    // 0x34d4e8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x34d4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34d4ec: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34d4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34d4f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d4f4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d4f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d4fc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34d4fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d500: 0x4609c0c2  mul.s       $f3, $f24, $f9
    ctx->pc = 0x34d500u;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[9]);
    // 0x34d504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34d504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d508: 0x460c7082  mul.s       $f2, $f14, $f12
    ctx->pc = 0x34d508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x34d50c: 0x460cb842  mul.s       $f1, $f23, $f12
    ctx->pc = 0x34d50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
    // 0x34d510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d514: 0x0  nop
    ctx->pc = 0x34d514u;
    // NOP
    // 0x34d518: 0x46000205  abs.s       $f8, $f0
    ctx->pc = 0x34d518u;
    ctx->f[8] = FPU_ABS_S(ctx->f[0]);
    // 0x34d51c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x34d51cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x34d520: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34d520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34d524: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x34d524u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x34d528: 0x460cc802  mul.s       $f0, $f25, $f12
    ctx->pc = 0x34d528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[12]);
    // 0x34d52c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34d52cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34d530: 0x4609d102  mul.s       $f4, $f26, $f9
    ctx->pc = 0x34d530u;
    ctx->f[4] = FPU_MUL_S(ctx->f[26], ctx->f[9]);
    // 0x34d534: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x34d534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x34d538: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x34d538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x34d53c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x34d53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x34d540: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34d540u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34d544: 0x461ca0c2  mul.s       $f3, $f20, $f28
    ctx->pc = 0x34d544u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x34d548: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34d548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34d54c: 0x46009002  mul.s       $f0, $f18, $f0
    ctx->pc = 0x34d54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x34d550: 0x4616a842  mul.s       $f1, $f21, $f22
    ctx->pc = 0x34d550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x34d554: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x34d554u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34d558: 0x46011a80  add.s       $f10, $f3, $f1
    ctx->pc = 0x34d558u;
    ctx->f[10] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34d55c: 0x460a3080  add.s       $f2, $f6, $f10
    ctx->pc = 0x34d55cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x34d560: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34d560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d564: 0x0  nop
    ctx->pc = 0x34d564u;
    // NOP
    // 0x34d568: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x34D568u;
    {
        const bool branch_taken_0x34d568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d568) {
            ctx->pc = 0x34D56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D568u;
            // 0x34d56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D57Cu;
            goto label_34d57c;
        }
    }
    ctx->pc = 0x34D570u;
    // 0x34d570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34D570u;
    {
        const bool branch_taken_0x34d570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D570u;
        // 0x34d574: 0xc7bf0148  lwc1        $f31, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d570) {
            ctx->pc = 0x34D580u;
            goto label_34d580;
        }
    }
    ctx->pc = 0x34D578u;
label_34d578:
    // 0x34d578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34d578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34d57c:
    // 0x34d57c: 0xc7bf0148  lwc1        $f31, 0x148($sp)
    ctx->pc = 0x34d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_34d580:
    // 0x34d580: 0xc7be0140  lwc1        $f30, 0x140($sp)
    ctx->pc = 0x34d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x34d584: 0xc7bd0138  lwc1        $f29, 0x138($sp)
    ctx->pc = 0x34d584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x34d588: 0xc7bc0130  lwc1        $f28, 0x130($sp)
    ctx->pc = 0x34d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x34d58c: 0xc7bb0128  lwc1        $f27, 0x128($sp)
    ctx->pc = 0x34d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x34d590: 0xc7ba0120  lwc1        $f26, 0x120($sp)
    ctx->pc = 0x34d590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x34d594: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x34d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x34d598: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x34d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34d59c: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x34d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34d5a0: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x34d5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34d5a4: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x34d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34d5a8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x34d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x34D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D5ACu;
        // 0x34d5b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D5B4u;
    // 0x34d5b4: 0x0  nop
    ctx->pc = 0x34d5b4u;
    // NOP
    // 0x34d5b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x34d5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d5bc: 0x0  nop
    ctx->pc = 0x34d5bcu;
    // NOP
    // 0x34d5c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d5c4: 0x0  nop
    ctx->pc = 0x34d5c4u;
    // NOP
    // 0x34d5c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34d5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d5cc: 0x0  nop
    ctx->pc = 0x34d5ccu;
    // NOP
    ctx->pc = 0x34d5d0u;
}
