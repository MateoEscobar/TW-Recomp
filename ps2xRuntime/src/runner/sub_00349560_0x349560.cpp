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

// Function: sub_00349560
// Address: 0x349560 - 0x3498c0
void sub_00349560_0x349560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349560_0x349560");
#endif

    switch (ctx->pc) {
        case 0x3496c4u: goto label_3496c4;
        case 0x3496e8u: goto label_3496e8;
        case 0x34970cu: goto label_34970c;
        case 0x349730u: goto label_349730;
        case 0x349754u: goto label_349754;
        case 0x349778u: goto label_349778;
        default: break;
    }

    ctx->pc = 0x349560u;

    // 0x349560: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x349560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x349564: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x349564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349568: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x349568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34956c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x34956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x349570: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x349570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x349574: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x349574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349578: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x349578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x34957c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34957cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349580: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x349580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x349584: 0x27b20034  addiu       $s2, $sp, 0x34
    ctx->pc = 0x349584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x349588: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x349588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x34958c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x34958cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x349590: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x349590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x349594: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x349594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x349598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34959c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x34959cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3495a0: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x3495a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3495a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3495a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3495a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3495a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3495ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3495acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3495b0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3495b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3495b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3495b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3495b8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3495b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3495bc: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x3495bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3495c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3495c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3495c4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3495c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3495c8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3495c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3495cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3495ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3495d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3495d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3495d4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x3495d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3495d8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3495d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3495dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3495dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3495e0: 0x0  nop
    ctx->pc = 0x3495e0u;
    // NOP
    // 0x3495e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3495e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3495e8: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x3495e8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3495ec: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3495ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x3495f0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3495f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3495f4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3495f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3495f8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3495f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3495fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3495fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349600: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349604: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x349604u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349608: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x349608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34960c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34960cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x349610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349614: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x349614u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x349618: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x349618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34961c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x34961cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x349620: 0x46026b41  sub.s       $f13, $f13, $f2
    ctx->pc = 0x349620u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x349624: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x349624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x349628: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34962c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34962cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349630: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349634: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349638: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x349638u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34963c: 0x7a070010  lq          $a3, 0x10($s0)
    ctx->pc = 0x34963cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x349640: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x349640u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x349644: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x349644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349648: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34964c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34964cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349650: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349654: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349658: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x349658u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34965c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x34965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349660: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x349660u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349664: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x349664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x349668: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x349668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34966c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34966cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349670: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349674: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x349674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349678: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x349678u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34967c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34967cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349680: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x349680u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x349684: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x349684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349688: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x349688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34968c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34968cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x349690: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x349690u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x349694: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x349694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349698: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x349698u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34969c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x34969cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3496a0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3496a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3496a4: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3496a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3496a8: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x3496a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3496ac: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3496acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3496b0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3496b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x3496b4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3496b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3496b8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3496b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3496bc: 0xc0d2522  jal         func_349488
    ctx->pc = 0x3496BCu;
    SET_GPR_U32(ctx, 31, 0x3496C4u);
    ctx->pc = 0x3496C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496BCu;
    // 0x3496c0: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349488u, 0x3496BCu, 0x3496C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496C4u;
label_3496c4:
    // 0x3496c4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3496C4u;
    {
        const bool branch_taken_0x3496c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3496C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496C4u;
        // 0x3496c8: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3496c4) {
            ctx->pc = 0x34977Cu;
            goto label_34977c;
        }
    }
    ctx->pc = 0x3496CCu;
    // 0x3496cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3496ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3496d0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3496d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3496d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3496d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3496d8: 0xc60d0040  lwc1        $f13, 0x40($s0)
    ctx->pc = 0x3496d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3496dc: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x3496dcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x3496e0: 0xc0d2522  jal         func_349488
    ctx->pc = 0x3496E0u;
    SET_GPR_U32(ctx, 31, 0x3496E8u);
    ctx->pc = 0x3496E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496E0u;
    // 0x3496e4: 0x460d0341  sub.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349488u, 0x3496E0u, 0x3496E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3496E8u;
label_3496e8:
    // 0x3496e8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3496E8u;
    {
        const bool branch_taken_0x3496e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3496ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3496E8u;
        // 0x3496ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3496e8) {
            ctx->pc = 0x34977Cu;
            goto label_34977c;
        }
    }
    ctx->pc = 0x3496F0u;
    // 0x3496f0: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x3496f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3496f4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x3496f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3496f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3496f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3496fc: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x3496fcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x349700: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x349700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349704: 0xc0d2522  jal         func_349488
    ctx->pc = 0x349704u;
    SET_GPR_U32(ctx, 31, 0x34970Cu);
    ctx->pc = 0x349708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349704u;
    // 0x349708: 0x46006b41  sub.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349488u, 0x349704u, 0x34970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34970Cu;
label_34970c:
    // 0x34970c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x34970Cu;
    {
        const bool branch_taken_0x34970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34970Cu;
        // 0x349710: 0xc7ac0014  lwc1        $f12, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34970c) {
            ctx->pc = 0x34977Cu;
            goto label_34977c;
        }
    }
    ctx->pc = 0x349714u;
    // 0x349714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x349714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349718: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x349718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34971c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349720: 0xc60d0044  lwc1        $f13, 0x44($s0)
    ctx->pc = 0x349720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x349724: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x349724u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x349728: 0xc0d2522  jal         func_349488
    ctx->pc = 0x349728u;
    SET_GPR_U32(ctx, 31, 0x349730u);
    ctx->pc = 0x34972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349728u;
    // 0x34972c: 0x460d0341  sub.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349488u, 0x349728u, 0x349730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349730u;
label_349730:
    // 0x349730: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x349730u;
    {
        const bool branch_taken_0x349730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349730u;
        // 0x349734: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349730) {
            ctx->pc = 0x34977Cu;
            goto label_34977c;
        }
    }
    ctx->pc = 0x349738u;
    // 0x349738: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x349738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34973c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x34973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x349740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349744: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x349744u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x349748: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x349748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34974c: 0xc0d2522  jal         func_349488
    ctx->pc = 0x34974Cu;
    SET_GPR_U32(ctx, 31, 0x349754u);
    ctx->pc = 0x349750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34974Cu;
    // 0x349750: 0x46006b41  sub.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349488u, 0x34974Cu, 0x349754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349754u;
label_349754:
    // 0x349754: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x349754u;
    {
        const bool branch_taken_0x349754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349754u;
        // 0x349758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349754) {
            ctx->pc = 0x34977Cu;
            goto label_34977c;
        }
    }
    ctx->pc = 0x34975Cu;
    // 0x34975c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x34975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349760: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x349760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349764: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x349764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349768: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x349768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34976c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x34976cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x349770: 0xc0d2522  jal         func_349488
    ctx->pc = 0x349770u;
    SET_GPR_U32(ctx, 31, 0x349778u);
    ctx->pc = 0x349774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349770u;
    // 0x349774: 0x46006b41  sub.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349488u, 0x349770u, 0x349778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349778u;
label_349778:
    // 0x349778: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x349778u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34977c:
    // 0x34977c: 0x12800047  beqz        $s4, . + 4 + (0x47 << 2)
    ctx->pc = 0x34977Cu;
    {
        const bool branch_taken_0x34977c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x349780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34977Cu;
        // 0x349780: 0xc7a20030  lwc1        $f2, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34977c) {
            ctx->pc = 0x34989Cu;
            goto label_34989c;
        }
    }
    ctx->pc = 0x349784u;
    // 0x349784: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x349784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349788: 0x0  nop
    ctx->pc = 0x349788u;
    // NOP
    // 0x34978c: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x34978cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349790: 0x0  nop
    ctx->pc = 0x349790u;
    // NOP
    // 0x349794: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x349794u;
    {
        const bool branch_taken_0x349794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349794u;
        // 0x349798: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349794) {
            ctx->pc = 0x3497B8u;
            goto label_3497b8;
        }
    }
    ctx->pc = 0x34979Cu;
    // 0x34979c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3497a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3497a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3497a4: 0x0  nop
    ctx->pc = 0x3497a4u;
    // NOP
    // 0x3497a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3497a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3497ac: 0x0  nop
    ctx->pc = 0x3497acu;
    // NOP
    // 0x3497b0: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x3497B0u;
    {
        const bool branch_taken_0x3497b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3497B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497B0u;
        // 0x3497b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497b0) {
            ctx->pc = 0x3498A0u;
            goto label_3498a0;
        }
    }
    ctx->pc = 0x3497B8u;
label_3497b8:
    // 0x3497b8: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x3497b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3497bc: 0x0  nop
    ctx->pc = 0x3497bcu;
    // NOP
    // 0x3497c0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x3497C0u;
    {
        const bool branch_taken_0x3497c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3497C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497C0u;
        // 0x3497c4: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497c0) {
            ctx->pc = 0x34981Cu;
            goto label_34981c;
        }
    }
    ctx->pc = 0x3497C8u;
    // 0x3497c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3497c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3497cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3497ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3497d0: 0x0  nop
    ctx->pc = 0x3497d0u;
    // NOP
    // 0x3497d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3497d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3497d8: 0x0  nop
    ctx->pc = 0x3497d8u;
    // NOP
    // 0x3497dc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3497DCu;
    {
        const bool branch_taken_0x3497dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3497E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497DCu;
        // 0x3497e0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497dc) {
            ctx->pc = 0x34981Cu;
            goto label_34981c;
        }
    }
    ctx->pc = 0x3497E4u;
    // 0x3497e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3497e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3497e8: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3497e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x3497ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3497ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3497f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3497f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3497f4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3497f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3497f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3497f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3497fc: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x3497fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349800: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x349800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x349804: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x349804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x349808: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x349808u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x34980c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x349810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x349814: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x349814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x349818: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x349818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34981c:
    // 0x34981c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34981cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349820: 0x0  nop
    ctx->pc = 0x349820u;
    // NOP
    // 0x349824: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x349824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349828: 0x0  nop
    ctx->pc = 0x349828u;
    // NOP
    // 0x34982c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x34982Cu;
    {
        const bool branch_taken_0x34982c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34982Cu;
        // 0x349830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34982c) {
            ctx->pc = 0x3498A0u;
            goto label_3498a0;
        }
    }
    ctx->pc = 0x349834u;
    // 0x349834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x349834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34983c: 0x0  nop
    ctx->pc = 0x34983cu;
    // NOP
    // 0x349840: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349844: 0x0  nop
    ctx->pc = 0x349844u;
    // NOP
    // 0x349848: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x349848u;
    {
        const bool branch_taken_0x349848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349848u;
        // 0x34984c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349848) {
            ctx->pc = 0x3498A0u;
            goto label_3498a0;
        }
    }
    ctx->pc = 0x349850u;
    // 0x349850: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x349850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349854: 0x0  nop
    ctx->pc = 0x349854u;
    // NOP
    // 0x349858: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x349858u;
    {
        const bool branch_taken_0x349858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349858u;
        // 0x34985c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349858) {
            ctx->pc = 0x3498A0u;
            goto label_3498a0;
        }
    }
    ctx->pc = 0x349860u;
    // 0x349860: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x349860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349864: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x349864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x349868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x349868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34986c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349870: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x349870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x349874: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x349874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349878: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x349878u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34987c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34987cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x349880: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x349880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x349884: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x349884u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x349888: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x349888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34988c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x349890: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x349890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x349894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x349894u;
    {
        const bool branch_taken_0x349894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349894u;
        // 0x349898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349894) {
            ctx->pc = 0x3498A0u;
            goto label_3498a0;
        }
    }
    ctx->pc = 0x34989Cu;
label_34989c:
    // 0x34989c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34989cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3498a0:
    // 0x3498a0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3498a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3498a4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3498a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3498a8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3498a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3498ac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3498acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3498b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3498b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3498b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3498b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3498b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3498B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3498BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498B8u;
        // 0x3498bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3498B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3498C0u;
}
