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

// Function: sub_00356188
// Address: 0x356188 - 0x356290
void sub_00356188_0x356188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356188_0x356188");
#endif

    switch (ctx->pc) {
        case 0x356188u: goto label_356188;
        case 0x35618cu: goto label_35618c;
        case 0x356190u: goto label_356190;
        case 0x356194u: goto label_356194;
        case 0x356198u: goto label_356198;
        case 0x35619cu: goto label_35619c;
        case 0x3561a0u: goto label_3561a0;
        case 0x3561a4u: goto label_3561a4;
        case 0x3561a8u: goto label_3561a8;
        case 0x3561acu: goto label_3561ac;
        case 0x3561b0u: goto label_3561b0;
        case 0x3561b4u: goto label_3561b4;
        case 0x3561b8u: goto label_3561b8;
        case 0x3561bcu: goto label_3561bc;
        case 0x3561c0u: goto label_3561c0;
        case 0x3561c4u: goto label_3561c4;
        case 0x3561c8u: goto label_3561c8;
        case 0x3561ccu: goto label_3561cc;
        case 0x3561d0u: goto label_3561d0;
        case 0x3561d4u: goto label_3561d4;
        case 0x3561d8u: goto label_3561d8;
        case 0x3561dcu: goto label_3561dc;
        case 0x3561e0u: goto label_3561e0;
        case 0x3561e4u: goto label_3561e4;
        case 0x3561e8u: goto label_3561e8;
        case 0x3561ecu: goto label_3561ec;
        case 0x3561f0u: goto label_3561f0;
        case 0x3561f4u: goto label_3561f4;
        case 0x3561f8u: goto label_3561f8;
        case 0x3561fcu: goto label_3561fc;
        case 0x356200u: goto label_356200;
        case 0x356204u: goto label_356204;
        case 0x356208u: goto label_356208;
        case 0x35620cu: goto label_35620c;
        case 0x356210u: goto label_356210;
        case 0x356214u: goto label_356214;
        case 0x356218u: goto label_356218;
        case 0x35621cu: goto label_35621c;
        case 0x356220u: goto label_356220;
        case 0x356224u: goto label_356224;
        case 0x356228u: goto label_356228;
        case 0x35622cu: goto label_35622c;
        case 0x356230u: goto label_356230;
        case 0x356234u: goto label_356234;
        case 0x356238u: goto label_356238;
        case 0x35623cu: goto label_35623c;
        case 0x356240u: goto label_356240;
        case 0x356244u: goto label_356244;
        case 0x356248u: goto label_356248;
        case 0x35624cu: goto label_35624c;
        case 0x356250u: goto label_356250;
        case 0x356254u: goto label_356254;
        case 0x356258u: goto label_356258;
        case 0x35625cu: goto label_35625c;
        case 0x356260u: goto label_356260;
        case 0x356264u: goto label_356264;
        case 0x356268u: goto label_356268;
        case 0x35626cu: goto label_35626c;
        case 0x356270u: goto label_356270;
        case 0x356274u: goto label_356274;
        case 0x356278u: goto label_356278;
        case 0x35627cu: goto label_35627c;
        case 0x356280u: goto label_356280;
        case 0x356284u: goto label_356284;
        case 0x356288u: goto label_356288;
        case 0x35628cu: goto label_35628c;
        default: break;
    }

    ctx->pc = 0x356188u;

label_356188:
    // 0x356188: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x356188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_35618c:
    // 0x35618c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_356190:
    // 0x356190: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x356190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_356194:
    // 0x356194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356198:
    // 0x356198: 0x7a040050  lq          $a0, 0x50($s0)
    ctx->pc = 0x356198u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_35619c:
    // 0x35619c: 0x7a020060  lq          $v0, 0x60($s0)
    ctx->pc = 0x35619cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_3561a0:
    // 0x3561a0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3561a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3561a4:
    // 0x3561a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3561a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3561a8:
    // 0x3561a8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3561a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3561ac:
    // 0x3561ac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3561acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3561b0:
    // 0x3561b0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3561b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3561b4:
    // 0x3561b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3561b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3561b8:
    // 0x3561b8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3561b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3561bc:
    // 0x3561bc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3561bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3561c0:
    // 0x3561c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3561c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3561c4:
    // 0x3561c4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3561c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3561c8:
    // 0x3561c8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3561c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3561cc:
    // 0x3561cc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3561ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3561d0:
    // 0x3561d0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3561d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3561d4:
    // 0x3561d4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3561d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3561d8:
    // 0x3561d8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3561d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3561dc:
    // 0x3561dc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3561dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3561e0:
    // 0x3561e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3561e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3561e4:
    // 0x3561e4: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x3561e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_3561e8:
    // 0x3561e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3561e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3561ec:
    // 0x3561ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3561ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3561f0:
    // 0x3561f0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3561f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3561f4:
    // 0x3561f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3561f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3561f8:
    // 0x3561f8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3561f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3561fc:
    // 0x3561fc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3561fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_356200:
    // 0x356200: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x356200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_356204:
    // 0x356204: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x356204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_356208:
    // 0x356208: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x356208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_35620c:
    // 0x35620c: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x35620cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_356210:
    // 0x356210: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x356210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_356214:
    // 0x356214: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x356214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_356218:
    // 0x356218: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x356218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_35621c:
    // 0x35621c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x35621cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_356220:
    // 0x356220: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x356220u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_356224:
    // 0x356224: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x356224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_356228:
    // 0x356228: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x356228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_35622c:
    // 0x35622c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x35622cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_356230:
    // 0x356230: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x356230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_356234:
    // 0x356234: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x356234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_356238:
    // 0x356238: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x356238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_35623c:
    // 0x35623c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x35623cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
label_356240:
    // 0x356240: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x356240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_356244:
    // 0x356244: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x356244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356248:
    // 0x356248: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x356248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35624c:
    // 0x35624c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x35624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_356250:
    // 0x356250: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x356250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_356254:
    // 0x356254: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x356254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_356258:
    // 0x356258: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x356258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_35625c:
    // 0x35625c: 0x60f809  jalr        $v1
label_356260:
    if (ctx->pc == 0x356260u) {
        ctx->pc = 0x356260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35625Cu;
        // 0x356260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356264u;
        goto label_356264;
    }
    ctx->pc = 0x35625Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x356264u);
        ctx->pc = 0x356260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35625Cu;
        // 0x356260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35625Cu, 0x356264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356264u;
label_356264:
    // 0x356264: 0xc0e57ce  jal         func_395F38
label_356268:
    if (ctx->pc == 0x356268u) {
        ctx->pc = 0x356268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356264u;
        // 0x356268: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35626Cu;
        goto label_35626c;
    }
    ctx->pc = 0x356264u;
    SET_GPR_U32(ctx, 31, 0x35626Cu);
    ctx->pc = 0x356268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356264u;
    // 0x356268: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x356264u, 0x35626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35626Cu;
label_35626c:
    // 0x35626c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_356270:
    if (ctx->pc == 0x356270u) {
        ctx->pc = 0x356270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35626Cu;
        // 0x356270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356274u;
        goto label_356274;
    }
    ctx->pc = 0x35626Cu;
    {
        const bool branch_taken_0x35626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35626Cu;
        // 0x356270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35626c) {
            ctx->pc = 0x356280u;
            goto label_356280;
        }
    }
    ctx->pc = 0x356274u;
label_356274:
    // 0x356274: 0xc0e5802  jal         func_396008
label_356278:
    if (ctx->pc == 0x356278u) {
        ctx->pc = 0x356278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356274u;
        // 0x356278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35627Cu;
        goto label_35627c;
    }
    ctx->pc = 0x356274u;
    SET_GPR_U32(ctx, 31, 0x35627Cu);
    ctx->pc = 0x356278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356274u;
    // 0x356278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396008u, 0x356274u, 0x35627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35627Cu;
label_35627c:
    // 0x35627c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35627cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_356280:
    // 0x356280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x356280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_356284:
    // 0x356284: 0x3e00008  jr          $ra
label_356288:
    if (ctx->pc == 0x356288u) {
        ctx->pc = 0x356288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356284u;
        // 0x356288: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35628Cu;
        goto label_35628c;
    }
    ctx->pc = 0x356284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356284u;
        // 0x356288: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35628Cu;
label_35628c:
    // 0x35628c: 0x0  nop
    ctx->pc = 0x35628cu;
    // NOP
    ctx->pc = 0x356290u;
}
