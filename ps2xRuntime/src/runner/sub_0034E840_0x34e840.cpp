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

// Function: sub_0034E840
// Address: 0x34e840 - 0x34edd0
void sub_0034E840_0x34e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E840_0x34e840");
#endif

    ctx->pc = 0x34e840u;

    // 0x34e840: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x34e840u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34e844: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34e848: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x34e848u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x34e84c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x34e84cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34e850: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x34e850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e854: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e858: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e85c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e85cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e860: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e860u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e864: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34e864u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e868: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e86c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34e86cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34e870: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e870u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e874: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e874u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e878: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x34e878u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e87c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e880: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e884: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e884u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e888: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e888u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e88c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e88cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e890: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34e890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x34e894: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x34e894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34e898: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e89c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e89cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8a0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e8a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8a4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e8a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8a8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e8a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e8ac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x34e8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x34e8b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x34e8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34e8b4: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x34e8b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34e8b8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34e8b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e8bc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e8bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e8c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8c4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e8c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8c8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e8c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e8cc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x34e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34e8d0: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x34e8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34e8d4: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x34e8d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34e8d8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34e8d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34e8dc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e8dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e8e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e8e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e8e8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e8e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e8ec: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x34e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x34e8f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34e8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34e8f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e8f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e8f8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34e8f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e8fc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e900: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e904: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e908: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e908u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e90c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x34e910: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x34e910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x34e914: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e914u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e918: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e918u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e91c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e91cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e920: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e924: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e928: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e928u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e92c: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x34e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x34e930: 0x44825800  mtc1        $v0, $f11
    ctx->pc = 0x34e930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x34e934: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e938: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34e938u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e93c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e93cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e940: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e944: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e948: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e948u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e94c: 0x46064882  mul.s       $f2, $f9, $f6
    ctx->pc = 0x34e94cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x34e950: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x34e950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x34e954: 0x46065842  mul.s       $f1, $f11, $f6
    ctx->pc = 0x34e954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x34e958: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x34e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x34e95c: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x34e95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x34e960: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x34e960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x34e964: 0x460448c2  mul.s       $f3, $f9, $f4
    ctx->pc = 0x34e964u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x34e968: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x34e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x34e96c: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x34e96cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x34e970: 0x460119c1  sub.s       $f7, $f3, $f1
    ctx->pc = 0x34e970u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x34e974: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x34e974u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x34e978: 0x460a5802  mul.s       $f0, $f11, $f10
    ctx->pc = 0x34e978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x34e97c: 0x46074040  add.s       $f1, $f8, $f7
    ctx->pc = 0x34e97cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x34e980: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34e980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34e984: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x34e984u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x34e988: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x34e988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e98c: 0x0  nop
    ctx->pc = 0x34e98cu;
    // NOP
    // 0x34e990: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x34E990u;
    {
        const bool branch_taken_0x34e990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e990) {
            ctx->pc = 0x34EB40u;
            goto label_34eb40;
        }
    }
    ctx->pc = 0x34E998u;
    // 0x34e998: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34e998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34e99c: 0x0  nop
    ctx->pc = 0x34e99cu;
    // NOP
    // 0x34e9a0: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x34e9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e9a4: 0x0  nop
    ctx->pc = 0x34e9a4u;
    // NOP
    // 0x34e9a8: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x34E9A8u;
    {
        const bool branch_taken_0x34e9a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e9a8) {
            ctx->pc = 0x34EAA4u;
            goto label_34eaa4;
        }
    }
    ctx->pc = 0x34E9B0u;
    // 0x34e9b0: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x34e9b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e9b4: 0x0  nop
    ctx->pc = 0x34e9b4u;
    // NOP
    // 0x34e9b8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x34E9B8u;
    {
        const bool branch_taken_0x34e9b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9B8u;
        // 0x34e9bc: 0x46001a06  mov.s       $f8, $f3 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e9b8) {
            ctx->pc = 0x34EA58u;
            goto label_34ea58;
        }
    }
    ctx->pc = 0x34E9C0u;
    // 0x34e9c0: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x34e9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e9c4: 0x0  nop
    ctx->pc = 0x34e9c4u;
    // NOP
    // 0x34e9c8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x34E9C8u;
    {
        const bool branch_taken_0x34e9c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e9c8) {
            ctx->pc = 0x34EA0Cu;
            goto label_34ea0c;
        }
    }
    ctx->pc = 0x34E9D0u;
    // 0x34e9d0: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x34e9d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x34e9d4: 0x46005836  c.le.s      $f11, $f0
    ctx->pc = 0x34e9d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e9d8: 0x0  nop
    ctx->pc = 0x34e9d8u;
    // NOP
    // 0x34e9dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34E9DCu;
    {
        const bool branch_taken_0x34e9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9DCu;
        // 0x34e9e0: 0x460019c6  mov.s       $f7, $f3 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e9dc) {
            ctx->pc = 0x34E9F8u;
            goto label_34e9f8;
        }
    }
    ctx->pc = 0x34E9E4u;
    // 0x34e9e4: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x34e9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34e9e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34e9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34e9ec: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x34e9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34e9f0: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x34E9F0u;
    {
        const bool branch_taken_0x34e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9F0u;
        // 0x34e9f4: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e9f0) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34E9F8u;
label_34e9f8:
    // 0x34e9f8: 0x0  nop
    ctx->pc = 0x34e9f8u;
    // NOP
    // 0x34e9fc: 0x0  nop
    ctx->pc = 0x34e9fcu;
    // NOP
    // 0x34ea00: 0x460b0203  div.s       $f8, $f0, $f11
    ctx->pc = 0x34ea00u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x34ea04: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x34EA04u;
    {
        const bool branch_taken_0x34ea04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA04u;
        // 0x34ea08: 0x46082002  mul.s       $f0, $f4, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea04) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EA0Cu;
label_34ea0c:
    // 0x34ea0c: 0x46064036  c.le.s      $f8, $f6
    ctx->pc = 0x34ea0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ea10: 0x0  nop
    ctx->pc = 0x34ea10u;
    // NOP
    // 0x34ea14: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x34EA14u;
    {
        const bool branch_taken_0x34ea14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA14u;
        // 0x34ea18: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea14) {
            ctx->pc = 0x34EBDCu;
            goto label_34ebdc;
        }
    }
    ctx->pc = 0x34EA1Cu;
    // 0x34ea1c: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x34ea1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x34ea20: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x34ea20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ea24: 0x0  nop
    ctx->pc = 0x34ea24u;
    // NOP
    // 0x34ea28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34EA28u;
    {
        const bool branch_taken_0x34ea28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ea28) {
            ctx->pc = 0x34EA44u;
            goto label_34ea44;
        }
    }
    ctx->pc = 0x34EA30u;
    // 0x34ea30: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x34ea30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34ea34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ea34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ea38: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x34ea38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34ea3c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x34EA3Cu;
    {
        const bool branch_taken_0x34ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA3Cu;
        // 0x34ea40: 0x46005000  add.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea3c) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EA44u;
label_34ea44:
    // 0x34ea44: 0x0  nop
    ctx->pc = 0x34ea44u;
    // NOP
    // 0x34ea48: 0x0  nop
    ctx->pc = 0x34ea48u;
    // NOP
    // 0x34ea4c: 0x460a01c3  div.s       $f7, $f0, $f10
    ctx->pc = 0x34ea4cu;
    { if (ctx->f[10] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[0], ctx->f[10]); }
    // 0x34ea50: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x34EA50u;
    {
        const bool branch_taken_0x34ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA50u;
        // 0x34ea54: 0x46073002  mul.s       $f0, $f6, $f7 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea50) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EA58u;
label_34ea58:
    // 0x34ea58: 0x46064036  c.le.s      $f8, $f6
    ctx->pc = 0x34ea58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ea5c: 0x0  nop
    ctx->pc = 0x34ea5cu;
    // NOP
    // 0x34ea60: 0x4501005e  bc1t        . + 4 + (0x5E << 2)
    ctx->pc = 0x34EA60u;
    {
        const bool branch_taken_0x34ea60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA60u;
        // 0x34ea64: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea60) {
            ctx->pc = 0x34EBDCu;
            goto label_34ebdc;
        }
    }
    ctx->pc = 0x34EA68u;
    // 0x34ea68: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x34ea68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x34ea6c: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x34ea6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ea70: 0x0  nop
    ctx->pc = 0x34ea70u;
    // NOP
    // 0x34ea74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34EA74u;
    {
        const bool branch_taken_0x34ea74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ea74) {
            ctx->pc = 0x34EA90u;
            goto label_34ea90;
        }
    }
    ctx->pc = 0x34EA7Cu;
    // 0x34ea7c: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x34ea7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34ea80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ea84: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x34ea84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34ea88: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x34EA88u;
    {
        const bool branch_taken_0x34ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA88u;
        // 0x34ea8c: 0x46005000  add.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea88) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EA90u;
label_34ea90:
    // 0x34ea90: 0x0  nop
    ctx->pc = 0x34ea90u;
    // NOP
    // 0x34ea94: 0x0  nop
    ctx->pc = 0x34ea94u;
    // NOP
    // 0x34ea98: 0x460a01c3  div.s       $f7, $f0, $f10
    ctx->pc = 0x34ea98u;
    { if (ctx->f[10] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[0], ctx->f[10]); }
    // 0x34ea9c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x34EA9Cu;
    {
        const bool branch_taken_0x34ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA9Cu;
        // 0x34eaa0: 0x46073002  mul.s       $f0, $f6, $f7 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea9c) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EAA4u;
label_34eaa4:
    // 0x34eaa4: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x34eaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eaa8: 0x0  nop
    ctx->pc = 0x34eaa8u;
    // NOP
    // 0x34eaac: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x34EAACu;
    {
        const bool branch_taken_0x34eaac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34eaac) {
            ctx->pc = 0x34EAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EAACu;
            // 0x34eab0: 0x46042140  add.s       $f5, $f4, $f4 (Delay Slot)
            ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EB04u;
            goto label_34eb04;
        }
    }
    ctx->pc = 0x34EAB4u;
    // 0x34eab4: 0x460019c6  mov.s       $f7, $f3
    ctx->pc = 0x34eab4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[3]);
    // 0x34eab8: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x34eab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eabc: 0x0  nop
    ctx->pc = 0x34eabcu;
    // NOP
    // 0x34eac0: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x34EAC0u;
    {
        const bool branch_taken_0x34eac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAC0u;
        // 0x34eac4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eac0) {
            ctx->pc = 0x34ECE4u;
            goto label_34ece4;
        }
    }
    ctx->pc = 0x34EAC8u;
    // 0x34eac8: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x34eac8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x34eacc: 0x46005836  c.le.s      $f11, $f0
    ctx->pc = 0x34eaccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ead0: 0x0  nop
    ctx->pc = 0x34ead0u;
    // NOP
    // 0x34ead4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34EAD4u;
    {
        const bool branch_taken_0x34ead4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ead4) {
            ctx->pc = 0x34EAF0u;
            goto label_34eaf0;
        }
    }
    ctx->pc = 0x34EADCu;
    // 0x34eadc: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x34eadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34eae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34eae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34eae4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x34eae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34eae8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x34EAE8u;
    {
        const bool branch_taken_0x34eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAE8u;
        // 0x34eaec: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eae8) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EAF0u;
label_34eaf0:
    // 0x34eaf0: 0x0  nop
    ctx->pc = 0x34eaf0u;
    // NOP
    // 0x34eaf4: 0x0  nop
    ctx->pc = 0x34eaf4u;
    // NOP
    // 0x34eaf8: 0x460b0203  div.s       $f8, $f0, $f11
    ctx->pc = 0x34eaf8u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x34eafc: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x34EAFCu;
    {
        const bool branch_taken_0x34eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAFCu;
        // 0x34eb00: 0x46082002  mul.s       $f0, $f4, $f8 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eafc) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EB04u;
label_34eb04:
    // 0x34eb04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34eb08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34eb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eb0c: 0x46063100  add.s       $f4, $f6, $f6
    ctx->pc = 0x34eb0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34eb10: 0x0  nop
    ctx->pc = 0x34eb10u;
    // NOP
    // 0x34eb14: 0x0  nop
    ctx->pc = 0x34eb14u;
    // NOP
    // 0x34eb18: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34eb18u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34eb1c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x34eb1cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x34eb20: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x34eb20u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x34eb24: 0x460750c2  mul.s       $f3, $f10, $f7
    ctx->pc = 0x34eb24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x34eb28: 0x46085802  mul.s       $f0, $f11, $f8
    ctx->pc = 0x34eb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x34eb2c: 0x46084842  mul.s       $f1, $f9, $f8
    ctx->pc = 0x34eb2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x34eb30: 0x46074882  mul.s       $f2, $f9, $f7
    ctx->pc = 0x34eb30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x34eb34: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x34eb34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34eb38: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x34EB38u;
    {
        const bool branch_taken_0x34eb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB38u;
        // 0x34eb3c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb38) {
            ctx->pc = 0x34ED98u;
            goto label_34ed98;
        }
    }
    ctx->pc = 0x34EB40u;
label_34eb40:
    // 0x34eb40: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34eb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34eb44: 0x0  nop
    ctx->pc = 0x34eb44u;
    // NOP
    // 0x34eb48: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x34eb48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eb4c: 0x0  nop
    ctx->pc = 0x34eb4cu;
    // NOP
    // 0x34eb50: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x34EB50u;
    {
        const bool branch_taken_0x34eb50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34eb50) {
            ctx->pc = 0x34EBFCu;
            goto label_34ebfc;
        }
    }
    ctx->pc = 0x34EB58u;
    // 0x34eb58: 0x46044880  add.s       $f2, $f9, $f4
    ctx->pc = 0x34eb58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x34eb5c: 0x46065040  add.s       $f1, $f10, $f6
    ctx->pc = 0x34eb5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x34eb60: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34eb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eb64: 0x0  nop
    ctx->pc = 0x34eb64u;
    // NOP
    // 0x34eb68: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x34EB68u;
    {
        const bool branch_taken_0x34eb68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB68u;
        // 0x34eb6c: 0x46001a06  mov.s       $f8, $f3 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb68) {
            ctx->pc = 0x34EBA4u;
            goto label_34eba4;
        }
    }
    ctx->pc = 0x34EB70u;
    // 0x34eb70: 0x46094800  add.s       $f0, $f9, $f9
    ctx->pc = 0x34eb70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x34eb74: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34eb74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34eb78: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x34eb78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x34eb7c: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x34eb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x34eb80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34eb80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eb84: 0x0  nop
    ctx->pc = 0x34eb84u;
    // NOP
    // 0x34eb88: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x34EB88u;
    {
        const bool branch_taken_0x34eb88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB88u;
        // 0x34eb8c: 0x460019c6  mov.s       $f7, $f3 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb88) {
            ctx->pc = 0x34ED60u;
            goto label_34ed60;
        }
    }
    ctx->pc = 0x34EB90u;
    // 0x34eb90: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x34eb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34eb94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34eb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34eb98: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x34eb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34eb9c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x34EB9Cu;
    {
        const bool branch_taken_0x34eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB9Cu;
        // 0x34eba0: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb9c) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EBA4u;
label_34eba4:
    // 0x34eba4: 0x46080836  c.le.s      $f1, $f8
    ctx->pc = 0x34eba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34eba8: 0x0  nop
    ctx->pc = 0x34eba8u;
    // NOP
    // 0x34ebac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34EBACu;
    {
        const bool branch_taken_0x34ebac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ebac) {
            ctx->pc = 0x34EBC8u;
            goto label_34ebc8;
        }
    }
    ctx->pc = 0x34EBB4u;
    // 0x34ebb4: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x34ebb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34ebb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ebb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ebbc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x34ebbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34ebc0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x34EBC0u;
    {
        const bool branch_taken_0x34ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBC0u;
        // 0x34ebc4: 0x46005000  add.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebc0) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EBC8u;
label_34ebc8:
    // 0x34ebc8: 0x46064036  c.le.s      $f8, $f6
    ctx->pc = 0x34ebc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ebcc: 0x0  nop
    ctx->pc = 0x34ebccu;
    // NOP
    // 0x34ebd0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x34EBD0u;
    {
        const bool branch_taken_0x34ebd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ebd0) {
            ctx->pc = 0x34EBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EBD0u;
            // 0x34ebd4: 0x46003007  neg.s       $f0, $f6 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EBE4u;
            goto label_34ebe4;
        }
    }
    ctx->pc = 0x34EBD8u;
    // 0x34ebd8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x34ebd8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_34ebdc:
    // 0x34ebdc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x34EBDCu;
    {
        const bool branch_taken_0x34ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBDCu;
        // 0x34ebe0: 0x460041c6  mov.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebdc) {
            ctx->pc = 0x34EDB0u;
            goto label_34edb0;
        }
    }
    ctx->pc = 0x34EBE4u;
label_34ebe4:
    // 0x34ebe4: 0x0  nop
    ctx->pc = 0x34ebe4u;
    // NOP
    // 0x34ebe8: 0x0  nop
    ctx->pc = 0x34ebe8u;
    // NOP
    // 0x34ebec: 0x460a01c3  div.s       $f7, $f0, $f10
    ctx->pc = 0x34ebecu;
    { if (ctx->f[10] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[0], ctx->f[10]); }
    // 0x34ebf0: 0x46073042  mul.s       $f1, $f6, $f7
    ctx->pc = 0x34ebf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x34ebf4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x34EBF4u;
    {
        const bool branch_taken_0x34ebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBF4u;
        // 0x34ebf8: 0x460c0800  add.s       $f0, $f1, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebf4) {
            ctx->pc = 0x34EDB0u;
            goto label_34edb0;
        }
    }
    ctx->pc = 0x34EBFCu;
label_34ebfc:
    // 0x34ebfc: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x34ebfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ec00: 0x0  nop
    ctx->pc = 0x34ec00u;
    // NOP
    // 0x34ec04: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x34EC04u;
    {
        const bool branch_taken_0x34ec04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ec04) {
            ctx->pc = 0x34EC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EC04u;
            // 0x34ec08: 0x46065000  add.s       $f0, $f10, $f6 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ED04u;
            goto label_34ed04;
        }
    }
    ctx->pc = 0x34EC0Cu;
    // 0x34ec0c: 0x46064880  add.s       $f2, $f9, $f6
    ctx->pc = 0x34ec0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x34ec10: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x34ec10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x34ec14: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34ec14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ec18: 0x0  nop
    ctx->pc = 0x34ec18u;
    // NOP
    // 0x34ec1c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x34EC1Cu;
    {
        const bool branch_taken_0x34ec1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC1Cu;
        // 0x34ec20: 0x460019c6  mov.s       $f7, $f3 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec1c) {
            ctx->pc = 0x34ECACu;
            goto label_34ecac;
        }
    }
    ctx->pc = 0x34EC24u;
    // 0x34ec24: 0x46094800  add.s       $f0, $f9, $f9
    ctx->pc = 0x34ec24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x34ec28: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34ec28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34ec2c: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x34ec2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x34ec30: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x34ec30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x34ec34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34ec34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ec38: 0x0  nop
    ctx->pc = 0x34ec38u;
    // NOP
    // 0x34ec3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34EC3Cu;
    {
        const bool branch_taken_0x34ec3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC3Cu;
        // 0x34ec40: 0x46001a06  mov.s       $f8, $f3 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec3c) {
            ctx->pc = 0x34EC58u;
            goto label_34ec58;
        }
    }
    ctx->pc = 0x34EC44u;
    // 0x34ec44: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x34ec44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34ec48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ec4c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x34ec4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34ec50: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x34EC50u;
    {
        const bool branch_taken_0x34ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC50u;
        // 0x34ec54: 0x46005000  add.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec50) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34EC58u;
label_34ec58:
    // 0x34ec58: 0x0  nop
    ctx->pc = 0x34ec58u;
    // NOP
    // 0x34ec5c: 0x0  nop
    ctx->pc = 0x34ec5cu;
    // NOP
    // 0x34ec60: 0x460009c3  div.s       $f7, $f1, $f0
    ctx->pc = 0x34ec60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x34ec64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ec64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ec68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34ec68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ec6c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x34ec6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34ec70: 0x46063140  add.s       $f5, $f6, $f6
    ctx->pc = 0x34ec70u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34ec74: 0x46070201  sub.s       $f8, $f0, $f7
    ctx->pc = 0x34ec74u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x34ec78: 0x460750c2  mul.s       $f3, $f10, $f7
    ctx->pc = 0x34ec78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x34ec7c: 0x46074882  mul.s       $f2, $f9, $f7
    ctx->pc = 0x34ec7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x34ec80: 0x46085842  mul.s       $f1, $f11, $f8
    ctx->pc = 0x34ec80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x34ec84: 0x46084802  mul.s       $f0, $f9, $f8
    ctx->pc = 0x34ec84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x34ec88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34ec88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34ec8c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34ec8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34ec90: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x34ec90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x34ec94: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x34ec94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34ec98: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x34ec98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x34ec9c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x34ec9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x34eca0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34eca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34eca4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x34ECA4u;
    {
        const bool branch_taken_0x34eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECA4u;
        // 0x34eca8: 0x460c0800  add.s       $f0, $f1, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eca4) {
            ctx->pc = 0x34EDB0u;
            goto label_34edb0;
        }
    }
    ctx->pc = 0x34ECACu;
label_34ecac:
    // 0x34ecac: 0x46070836  c.le.s      $f1, $f7
    ctx->pc = 0x34ecacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ecb0: 0x0  nop
    ctx->pc = 0x34ecb0u;
    // NOP
    // 0x34ecb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34ECB4u;
    {
        const bool branch_taken_0x34ecb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ecb4) {
            ctx->pc = 0x34ECD0u;
            goto label_34ecd0;
        }
    }
    ctx->pc = 0x34ECBCu;
    // 0x34ecbc: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x34ecbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34ecc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ecc4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x34ecc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34ecc8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x34ECC8u;
    {
        const bool branch_taken_0x34ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECC8u;
        // 0x34eccc: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecc8) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34ECD0u;
label_34ecd0:
    // 0x34ecd0: 0x46043836  c.le.s      $f7, $f4
    ctx->pc = 0x34ecd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ecd4: 0x0  nop
    ctx->pc = 0x34ecd4u;
    // NOP
    // 0x34ecd8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x34ECD8u;
    {
        const bool branch_taken_0x34ecd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ecd8) {
            ctx->pc = 0x34ECDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ECD8u;
            // 0x34ecdc: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ECECu;
            goto label_34ecec;
        }
    }
    ctx->pc = 0x34ECE0u;
    // 0x34ece0: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x34ece0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_34ece4:
    // 0x34ece4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x34ECE4u;
    {
        const bool branch_taken_0x34ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECE4u;
        // 0x34ece8: 0x46003a06  mov.s       $f8, $f7 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ece4) {
            ctx->pc = 0x34EDB0u;
            goto label_34edb0;
        }
    }
    ctx->pc = 0x34ECECu;
label_34ecec:
    // 0x34ecec: 0x0  nop
    ctx->pc = 0x34ececu;
    // NOP
    // 0x34ecf0: 0x0  nop
    ctx->pc = 0x34ecf0u;
    // NOP
    // 0x34ecf4: 0x460b0203  div.s       $f8, $f0, $f11
    ctx->pc = 0x34ecf4u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x34ecf8: 0x46082042  mul.s       $f1, $f4, $f8
    ctx->pc = 0x34ecf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x34ecfc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x34ECFCu;
    {
        const bool branch_taken_0x34ecfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECFCu;
        // 0x34ed00: 0x460c0800  add.s       $f0, $f1, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecfc) {
            ctx->pc = 0x34EDB0u;
            goto label_34edb0;
        }
    }
    ctx->pc = 0x34ED04u;
label_34ed04:
    // 0x34ed04: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x34ed04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x34ed08: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x34ed08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x34ed0c: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x34ed0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ed10: 0x0  nop
    ctx->pc = 0x34ed10u;
    // NOP
    // 0x34ed14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34ED14u;
    {
        const bool branch_taken_0x34ed14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED14u;
        // 0x34ed18: 0x46001a06  mov.s       $f8, $f3 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed14) {
            ctx->pc = 0x34ED30u;
            goto label_34ed30;
        }
    }
    ctx->pc = 0x34ED1Cu;
    // 0x34ed1c: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x34ed1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34ed20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ed20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ed24: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x34ed24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34ed28: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x34ED28u;
    {
        const bool branch_taken_0x34ed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED28u;
        // 0x34ed2c: 0x46005000  add.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed28) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34ED30u;
label_34ed30:
    // 0x34ed30: 0x46094800  add.s       $f0, $f9, $f9
    ctx->pc = 0x34ed30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x34ed34: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x34ed34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x34ed38: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x34ed38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x34ed3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34ed3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ed40: 0x0  nop
    ctx->pc = 0x34ed40u;
    // NOP
    // 0x34ed44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34ED44u;
    {
        const bool branch_taken_0x34ed44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED44u;
        // 0x34ed48: 0x460019c6  mov.s       $f7, $f3 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed44) {
            ctx->pc = 0x34ED60u;
            goto label_34ed60;
        }
    }
    ctx->pc = 0x34ED4Cu;
    // 0x34ed4c: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x34ed4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34ed50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ed50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ed54: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x34ed54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34ed58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34ED58u;
    {
        const bool branch_taken_0x34ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED58u;
        // 0x34ed5c: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed58) {
            ctx->pc = 0x34EDACu;
            goto label_34edac;
        }
    }
    ctx->pc = 0x34ED60u;
label_34ed60:
    // 0x34ed60: 0x0  nop
    ctx->pc = 0x34ed60u;
    // NOP
    // 0x34ed64: 0x0  nop
    ctx->pc = 0x34ed64u;
    // NOP
    // 0x34ed68: 0x46000a03  div.s       $f8, $f1, $f0
    ctx->pc = 0x34ed68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x34ed6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34ed6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34ed70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34ed70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34ed74: 0x46042140  add.s       $f5, $f4, $f4
    ctx->pc = 0x34ed74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x34ed78: 0x46063100  add.s       $f4, $f6, $f6
    ctx->pc = 0x34ed78u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x34ed7c: 0x460809c1  sub.s       $f7, $f1, $f8
    ctx->pc = 0x34ed7cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x34ed80: 0x46085802  mul.s       $f0, $f11, $f8
    ctx->pc = 0x34ed80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x34ed84: 0x46084842  mul.s       $f1, $f9, $f8
    ctx->pc = 0x34ed84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x34ed88: 0x46075082  mul.s       $f2, $f10, $f7
    ctx->pc = 0x34ed88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x34ed8c: 0x460748c2  mul.s       $f3, $f9, $f7
    ctx->pc = 0x34ed8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x34ed90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34ed90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34ed94: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34ed94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_34ed98:
    // 0x34ed98: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x34ed98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x34ed9c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x34ed9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34eda0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x34eda0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x34eda4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x34eda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x34eda8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34eda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34edac:
    // 0x34edac: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x34edacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_34edb0:
    // 0x34edb0: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34EDB0u;
    {
        const bool branch_taken_0x34edb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x34edb0) {
            ctx->pc = 0x34EDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EDB0u;
            // 0x34edb4: 0xe4c80000  swc1        $f8, 0x0($a2) (Delay Slot)
            { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EDB8u;
            goto label_34edb8;
        }
    }
    ctx->pc = 0x34EDB8u;
label_34edb8:
    // 0x34edb8: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34EDB8u;
    {
        const bool branch_taken_0x34edb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x34edb8) {
            ctx->pc = 0x34EDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EDB8u;
            // 0x34edbc: 0xe4e70000  swc1        $f7, 0x0($a3) (Delay Slot)
            { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EDC0u;
            goto label_34edc0;
        }
    }
    ctx->pc = 0x34EDC0u;
label_34edc0:
    // 0x34edc0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34edc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34edc4: 0x3e00008  jr          $ra
    ctx->pc = 0x34EDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDC4u;
        // 0x34edc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EDCCu;
    // 0x34edcc: 0x0  nop
    ctx->pc = 0x34edccu;
    // NOP
    ctx->pc = 0x34edd0u;
}
