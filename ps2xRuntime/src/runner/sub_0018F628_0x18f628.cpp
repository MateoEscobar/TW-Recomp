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

// Function: sub_0018F628
// Address: 0x18f628 - 0x18f7b0
void sub_0018F628_0x18f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F628_0x18f628");
#endif

    switch (ctx->pc) {
        case 0x18f688u: goto label_18f688;
        case 0x18f794u: goto label_18f794;
        default: break;
    }

    ctx->pc = 0x18f628u;

    // 0x18f628: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x18f628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x18f62c: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x18f62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
    // 0x18f630: 0x3421137f  ori         $at, $at, 0x137F
    ctx->pc = 0x18f630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4991);
    // 0x18f634: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18f634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18f638: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x18f638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x18f63c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x18f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18f640: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x18f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x18f644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f648: 0x3c01bf22  lui         $at, 0xBF22
    ctx->pc = 0x18f648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48930 << 16));
    // 0x18f64c: 0x3421a79c  ori         $at, $at, 0xA79C
    ctx->pc = 0x18f64cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42908);
    // 0x18f650: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18f650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18f654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f658: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x18f658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18f65c: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
    // 0x18f660: 0x34211316  ori         $at, $at, 0x1316
    ctx->pc = 0x18f660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4886);
    // 0x18f664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18f66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f670: 0x24a50620  addiu       $a1, $a1, 0x620
    ctx->pc = 0x18f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
    // 0x18f674: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x18f674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18f678: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18f678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18f67c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x18f67cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18f680: 0xc0cd940  jal         func_336500
    ctx->pc = 0x18F680u;
    SET_GPR_U32(ctx, 31, 0x18F688u);
    ctx->pc = 0x18F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F680u;
    // 0x18f684: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x18F680u, 0x18F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F688u;
label_18f688:
    // 0x18f688: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x18f688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18f68c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x18f68cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f690: 0x78870610  lq          $a3, 0x610($a0)
    ctx->pc = 0x18f690u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 1552)));
    // 0x18f694: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x18f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x18f698: 0x78820620  lq          $v0, 0x620($a0)
    ctx->pc = 0x18f698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1568)));
    // 0x18f69c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x18f69cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18f6a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18f6a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18f6a4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x18f6a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f6a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x18f6a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x18f6ac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x18f6acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f6b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x18f6b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f6b4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x18f6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f6b8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x18f6b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f6bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x18f6bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f6c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18f6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f6c4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x18f6c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f6c8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x18f6c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f6cc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x18f6ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x18f6d0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x18f6d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f6d4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x18f6d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f6d8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x18f6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f6dc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18f6dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18f6e0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x18f6e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x18f6e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18f6e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18f6e8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x18f6e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f6ec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x18f6ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f6f0: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x18f6f0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18f6f4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x18f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f6f8: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x18f6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x18f6fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18f700: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x18f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18f704: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x18f704u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x18f708: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f710: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x18f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f714: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x18f714u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x18f718: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x18f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18f71c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18f71cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18f720: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18f720u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18f724: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x18f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18f728: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x18f728u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x18f72c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x18f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18f730: 0xc7a70020  lwc1        $f7, 0x20($sp)
    ctx->pc = 0x18f730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x18f734: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x18f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x18f738: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x18f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x18f73c: 0xc7aa0030  lwc1        $f10, 0x30($sp)
    ctx->pc = 0x18f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x18f740: 0xc7ab0038  lwc1        $f11, 0x38($sp)
    ctx->pc = 0x18f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x18f744: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x18f744u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18f748: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x18f748u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18f74c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x18f74cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x18f750: 0xe7a70090  swc1        $f7, 0x90($sp)
    ctx->pc = 0x18f750u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18f754: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x18f754u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18f758: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x18f758u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18f75c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x18f75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18f760: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18f760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18f764: 0xe7a900a8  swc1        $f9, 0xA8($sp)
    ctx->pc = 0x18f764u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18f768: 0xe7aa00b0  swc1        $f10, 0xB0($sp)
    ctx->pc = 0x18f768u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18f76c: 0xe7ab00b4  swc1        $f11, 0xB4($sp)
    ctx->pc = 0x18f76cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18f770: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x18f770u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x18f774: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f778: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x18f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x18f77c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x18f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x18f780: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18f784: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x18f784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x18f788: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x18f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18f78c: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x18F78Cu;
    SET_GPR_U32(ctx, 31, 0x18F794u);
    ctx->pc = 0x18F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F78Cu;
    // 0x18f790: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x18F78Cu, 0x18F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F794u;
label_18f794:
    // 0x18f794: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x18f794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18f798: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x18f798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18f79c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F79Cu;
        // 0x18f7a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F7A4u;
    // 0x18f7a4: 0x0  nop
    ctx->pc = 0x18f7a4u;
    // NOP
    // 0x18f7a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18f7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18f7ac: 0x0  nop
    ctx->pc = 0x18f7acu;
    // NOP
    ctx->pc = 0x18f7b0u;
}
