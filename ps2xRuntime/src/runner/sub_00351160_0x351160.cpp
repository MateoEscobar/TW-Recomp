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

// Function: sub_00351160
// Address: 0x351160 - 0x351468
void sub_00351160_0x351160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351160_0x351160");
#endif

    switch (ctx->pc) {
        case 0x3512e0u: goto label_3512e0;
        case 0x351360u: goto label_351360;
        case 0x351380u: goto label_351380;
        case 0x351390u: goto label_351390;
        case 0x3513a0u: goto label_3513a0;
        case 0x3513f0u: goto label_3513f0;
        default: break;
    }

    ctx->pc = 0x351160u;

    // 0x351160: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x351160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x351164: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x351164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351168: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x351168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x35116c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x35116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x351170: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x351170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x351174: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x351174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351178: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x351178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x35117c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x35117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x351180: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x351180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x351184: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x351184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x351188: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x351188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x35118c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x35118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x351190: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x351190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x351194: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x351194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x351198: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x351198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x35119c: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x35119cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3511a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3511a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3511a4: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x3511a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x3511a8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3511a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3511ac: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x3511acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x3511b0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3511b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3511b4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3511b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3511b8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x3511b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3511bc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3511bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3511c0: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x3511c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3511c4: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x3511c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3511c8: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x3511c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3511cc: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x3511ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3511d0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x3511d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3511d4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x3511d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3511d8: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x3511d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3511dc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3511dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3511e0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x3511e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3511e4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3511e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3511e8: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x3511e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3511ec: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x3511ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3511f0: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x3511f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3511f4: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x3511f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3511f8: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x3511f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3511fc: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x3511fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x351200: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x351200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x351204: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x351204u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x351208: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x351208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x35120c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x35120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x351210: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x351210u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351214: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x351214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x351218: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x351218u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35121c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x35121cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x351220: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x351220u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351224: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351224u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351228: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x351228u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x35122c: 0x7a440060  lq          $a0, 0x60($s2)
    ctx->pc = 0x35122cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x351230: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x351230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x351234: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x351234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351238: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351238u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35123c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x35123cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351240: 0x96420084  lhu         $v0, 0x84($s2)
    ctx->pc = 0x351240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x351244: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x351244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x351248: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x351248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x35124c: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x35124cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351250: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x351250u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351254: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x351254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x351258: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x351258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x35125c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x35125cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351260: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x351260u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351264: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x351264u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351268: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x351268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x35126c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x35126cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351270: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x351270u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351274: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x351274u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351278: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x351278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x35127c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x35127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x351280: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x351280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x351284: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x351284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x351288: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x351288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x35128c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x35128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x351290: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x351290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351294: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x351294u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351298: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x351298u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x35129c: 0x30427ff0  andi        $v0, $v0, 0x7FF0
    ctx->pc = 0x35129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32752);
    // 0x3512a0: 0x8e490094  lw          $t1, 0x94($s2)
    ctx->pc = 0x3512a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x3512a4: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x3512a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x3512a8: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3512a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x3512ac: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3512acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3512b0: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x3512b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    // 0x3512b4: 0x8fbe0020  lw          $fp, 0x20($sp)
    ctx->pc = 0x3512b4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3512b8: 0x8fb60024  lw          $s6, 0x24($sp)
    ctx->pc = 0x3512b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3512bc: 0x8fb50028  lw          $s5, 0x28($sp)
    ctx->pc = 0x3512bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3512c0: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x3512c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x3512c4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3512c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3512c8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x3512c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x3512cc: 0x1122000a  beq         $t1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3512CCu;
    {
        const bool branch_taken_0x3512cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x3512D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512CCu;
        // 0x3512d0: 0x7fa70060  sq          $a3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512cc) {
            ctx->pc = 0x3512F8u;
            goto label_3512f8;
        }
    }
    ctx->pc = 0x3512D4u;
    // 0x3512d4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x3512d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3512d8: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x3512d8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x3512dc: 0x0  nop
    ctx->pc = 0x3512dcu;
    // NOP
label_3512e0:
    // 0x3512e0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3512e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3512e4: 0x0  nop
    ctx->pc = 0x3512e4u;
    // NOP
    // 0x3512e8: 0x0  nop
    ctx->pc = 0x3512e8u;
    // NOP
    // 0x3512ec: 0x0  nop
    ctx->pc = 0x3512ecu;
    // NOP
    // 0x3512f0: 0x5522fffb  bnel        $t1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3512F0u;
    {
        const bool branch_taken_0x3512f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x3512f0) {
            ctx->pc = 0x3512F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3512F0u;
            // 0x3512f4: 0x7d230000  sq          $v1, 0x0($t1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3512E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3512e0;
        }
    }
    ctx->pc = 0x3512F8u;
label_3512f8:
    // 0x3512f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3512f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3512fc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3512fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x351300: 0x149e0019  bne         $a0, $fp, . + 4 + (0x19 << 2)
    ctx->pc = 0x351300u;
    {
        const bool branch_taken_0x351300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 30));
        ctx->pc = 0x351304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351300u;
        // 0x351304: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351300) {
            ctx->pc = 0x351368u;
            goto label_351368;
        }
    }
    ctx->pc = 0x351308u;
    // 0x351308: 0x14560018  bne         $v0, $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x351308u;
    {
        const bool branch_taken_0x351308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x35130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351308u;
        // 0x35130c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351308) {
            ctx->pc = 0x35136Cu;
            goto label_35136c;
        }
    }
    ctx->pc = 0x351310u;
    // 0x351310: 0x14750017  bne         $v1, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x351310u;
    {
        const bool branch_taken_0x351310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x351314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351310u;
        // 0x351314: 0x3d3102b  sltu        $v0, $fp, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351310) {
            ctx->pc = 0x351370u;
            goto label_351370;
        }
    }
    ctx->pc = 0x351318u;
    // 0x351318: 0x96420072  lhu         $v0, 0x72($s2)
    ctx->pc = 0x351318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x35131c: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x35131cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351320: 0x96450070  lhu         $a1, 0x70($s2)
    ctx->pc = 0x351320u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x351324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x351324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351328: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x351328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35132c: 0x8e490080  lw          $t1, 0x80($s2)
    ctx->pc = 0x35132cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x351330: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x351330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x351334: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x351334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351338: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x351338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x35133c: 0x455018  mult        $t2, $v0, $a1
    ctx->pc = 0x35133cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x351340: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x351340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x351344: 0x15e1021  addu        $v0, $t2, $fp
    ctx->pc = 0x351344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 30)));
    // 0x351348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35134c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351350: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x351350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351354: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x351354u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x351358: 0xc0d42a8  jal         func_350AA0
    ctx->pc = 0x351358u;
    SET_GPR_U32(ctx, 31, 0x351360u);
    ctx->pc = 0x35135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351358u;
    // 0x35135c: 0x1252821  addu        $a1, $t1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350AA0u, 0x351358u, 0x351360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351360u;
label_351360:
    // 0x351360: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x351360u;
    {
        const bool branch_taken_0x351360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351360u;
        // 0x351364: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351360) {
            ctx->pc = 0x351420u;
            goto label_351420;
        }
    }
    ctx->pc = 0x351368u;
label_351368:
    // 0x351368: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x351368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35136c:
    // 0x35136c: 0x3d3102b  sltu        $v0, $fp, $s3
    ctx->pc = 0x35136cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_351370:
    // 0x351370: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x351370u;
    {
        const bool branch_taken_0x351370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351370u;
        // 0x351374: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351370) {
            ctx->pc = 0x351420u;
            goto label_351420;
        }
    }
    ctx->pc = 0x351378u;
    // 0x351378: 0x8fb10034  lw          $s1, 0x34($sp)
    ctx->pc = 0x351378u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x35137c: 0x0  nop
    ctx->pc = 0x35137cu;
    // NOP
label_351380:
    // 0x351380: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x351380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x351384: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x351384u;
    {
        const bool branch_taken_0x351384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351384u;
        // 0x351388: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351384) {
            ctx->pc = 0x35140Cu;
            goto label_35140c;
        }
    }
    ctx->pc = 0x35138Cu;
    // 0x35138c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x35138cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_351390:
    // 0x351390: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x351390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x351394: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x351394u;
    {
        const bool branch_taken_0x351394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351394u;
        // 0x351398: 0x26340001  addiu       $s4, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351394) {
            ctx->pc = 0x3513FCu;
            goto label_3513fc;
        }
    }
    ctx->pc = 0x35139Cu;
    // 0x35139c: 0x0  nop
    ctx->pc = 0x35139cu;
    // NOP
label_3513a0:
    // 0x3513a0: 0x96420072  lhu         $v0, 0x72($s2)
    ctx->pc = 0x3513a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x3513a4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x3513a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513a8: 0x96450070  lhu         $a1, 0x70($s2)
    ctx->pc = 0x3513a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x3513ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3513acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513b0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x3513b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3513b4: 0x8e490080  lw          $t1, 0x80($s2)
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x3513b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3513b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3513bc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3513bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3513c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3513c4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x3513c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3513c8: 0x455818  mult        $t3, $v0, $a1
    ctx->pc = 0x3513c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3513cc: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x3513ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x3513d0: 0x1731021  addu        $v0, $t3, $s3
    ctx->pc = 0x3513d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x3513d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3513d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3513d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3513dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3513dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3513e0: 0x7faa0070  sq          $t2, 0x70($sp)
    ctx->pc = 0x3513e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 10));
    // 0x3513e4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3513e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3513e8: 0xc0d42a8  jal         func_350AA0
    ctx->pc = 0x3513E8u;
    SET_GPR_U32(ctx, 31, 0x3513F0u);
    ctx->pc = 0x3513ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3513E8u;
    // 0x3513ec: 0x1252821  addu        $a1, $t1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350AA0u, 0x3513E8u, 0x3513F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3513F0u;
label_3513f0:
    // 0x3513f0: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x3513f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3513f4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3513F4u;
    {
        const bool branch_taken_0x3513f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3513F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3513F4u;
        // 0x3513f8: 0x7baa0070  lq          $t2, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3513f4) {
            ctx->pc = 0x3513A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3513a0;
        }
    }
    ctx->pc = 0x3513FCu;
label_3513fc:
    // 0x3513fc: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3513fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351400: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x351400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x351404: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x351404u;
    {
        const bool branch_taken_0x351404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351404) {
            ctx->pc = 0x351408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351404u;
            // 0x351408: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351390;
        }
    }
    ctx->pc = 0x35140Cu;
label_35140c:
    // 0x35140c: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x35140cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351410: 0x3d3102b  sltu        $v0, $fp, $s3
    ctx->pc = 0x351410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x351414: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x351414u;
    {
        const bool branch_taken_0x351414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351414u;
        // 0x351418: 0x8fb10034  lw          $s1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351414) {
            ctx->pc = 0x351380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351380;
        }
    }
    ctx->pc = 0x35141Cu;
    // 0x35141c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x35141cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_351420:
    // 0x351420: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x351420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x351424: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x351424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x351428: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x351428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35142c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x35142cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x351430: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x351430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x351434: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x351434u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x351438: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x351438u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35143c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x35143cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x351440: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x351440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x351444: 0x3e00008  jr          $ra
    ctx->pc = 0x351444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351444u;
        // 0x351448: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35144Cu;
    // 0x35144c: 0x0  nop
    ctx->pc = 0x35144cu;
    // NOP
    // 0x351450: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351454: 0x0  nop
    ctx->pc = 0x351454u;
    // NOP
    // 0x351458: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x351458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x35145c: 0x0  nop
    ctx->pc = 0x35145cu;
    // NOP
    // 0x351460: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x351460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x351464: 0x0  nop
    ctx->pc = 0x351464u;
    // NOP
    ctx->pc = 0x351468u;
}
